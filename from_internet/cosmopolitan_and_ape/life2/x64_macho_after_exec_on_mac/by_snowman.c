
uint32_t g437fb4 = 0;

uint32_t g4362b8 = 0;

void fun_4046c1(signed char dil);

struct s0 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

uint64_t* fun_401158(uint64_t rdi, int64_t rsi, uint64_t* rdx, uint64_t* rcx);

void* fun_401000() {
    int1_t zf1;
    uint64_t* rcx2;
    uint64_t r14_3;
    struct s0* r13_4;
    uint64_t r12_5;
    struct s0* rbx6;
    struct s0* rax7;
    uint64_t r12_8;
    uint64_t rax9;
    uint64_t rdi10;
    uint64_t* rax11;
    uint64_t rdx12;

    g437fb4 = g437fb4 | 2;
    zf1 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("syscall ");
        __asm__("syscall ");
    }
    fun_4046c1(0x86);
    rcx2 = reinterpret_cast<uint64_t*>(0);
    *reinterpret_cast<int32_t*>(&r14_3) = 0x400000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    r13_4 = reinterpret_cast<struct s0*>(0x86);
    *reinterpret_cast<int32_t*>(&r12_5) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = 0;
    rbx6 = reinterpret_cast<struct s0*>(0x86);
    while (rbx6->f8) {
        do {
            rax7 = rbx6;
            rbx6 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx6) + 24);
            if (!(rbx6->f10 - 1)) 
                break;
        } while (rbx6->f8);
        goto addr_4010a6_7;
        rbx6 = rax7;
        addr_4010ab_9:
        if (rbx6->f0 >= r12_5) {
            r12_5 = rbx6->f0;
        }
        r12_8 = r12_5 + 0xfff;
        while (1) {
            r12_5 = r12_8 & 0xfffffffffffff000;
            while (r12_5 < (rbx6->f8 + rbx6->f0 & 0xfffffffffffff000)) {
                while (r13_4->f8 && (r13_4->f10 == 1 || r13_4->f0 + r13_4->f8 < r12_5)) {
                    r13_4 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r13_4) + 24);
                }
                if (r13_4->f0 > r12_5) 
                    goto addr_40110e_17;
                rax9 = r13_4->f0 + r13_4->f8;
                if (rax9 > r12_5) 
                    goto addr_401105_19;
                addr_40110e_17:
                rdi10 = r14_3;
                r14_3 = r14_3 + 0x1000;
                rax11 = fun_401158(rdi10, 3, 6, rcx2);
                rdx12 = r12_5;
                rcx2 = rcx2;
                r12_5 = r12_5 + 0x1000;
                *rax11 = rdx12 | 3;
            }
            break;
            addr_401105_19:
            r12_8 = rax9 + 0xfff;
        }
        rbx6 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx6) + 24);
        continue;
        addr_4010a6_7:
        goto addr_4010ab_9;
    }
    goto 0xdf;
}

uint64_t g436000 = 0;

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

unsigned char g436008 = 0;

struct s5 {
    int64_t f0;
    int64_t f8;
};

int64_t fun_4014ba(struct s5* rdi, int64_t rsi, int64_t rdx, int64_t rcx);

struct s6 {
    int64_t f0;
    int64_t f8;
};

struct s7 {
    int64_t f0;
    int64_t f8;
};

int64_t fun_40462e(int64_t rdi, int64_t rsi, uint64_t rdx);

struct s8 {
    int64_t f0;
    int64_t f8;
};

void fun_40150f();

void fun_40457c(signed char* rdi, int32_t esi, uint64_t rdx);

struct s9 {
    int64_t f0;
    unsigned char f8;
};

int64_t fun_404690(int64_t rdi, int64_t rsi, uint32_t edx, int64_t rcx);

struct s10 {
    unsigned char f0;
    signed char[7] pad8;
    uint64_t f8;
};

struct s11 {
    uint64_t f0;
    int64_t f8;
};

int64_t fun_404355();

struct s12 {
    int64_t f0;
    int64_t f8;
};

int64_t g405080 = 0x4bf4;

struct s14 {
    struct s14* f0;
    signed char[4] pad8;
    struct s14* f8;
    signed char[4] pad16;
    struct s14* f10;
    signed char[4] pad24;
    struct s14* f18;
};

struct s13 {
    void* f0;
    void* f8;
    struct s14* f10;
};

void fun_403817(uint64_t rdi, struct s13* rsi);

struct s15 {
    int64_t f0;
    int64_t f8;
};

void fun_401466(struct s15* rdi, int64_t rsi, uint64_t rdx, int64_t rcx);

struct s14* fun_403312(struct s14* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx);

struct s16 {
    struct s14* f0;
    signed char[4] pad8;
    struct s14* f8;
    signed char[4] pad16;
    struct s16* f10;
    uint32_t f18;
};

struct s16* fun_403c02(struct s14* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx, int64_t r8);

void fun_4012f0() {
    int32_t eax1;
    int32_t edx2;
    struct s1* rdi3;
    int64_t rsi4;
    struct s2* rdi5;
    struct s3* rdi6;
    int64_t rcx7;
    struct s4* rdi8;
    int64_t rdx9;
    int64_t rax10;
    int64_t v11;
    int1_t below_or_equal12;
    int32_t r15_13;
    struct s5* rdi14;
    int64_t rsi15;
    struct s6* rdi16;
    struct s7* rdi17;
    struct s8* rdi18;
    uint64_t rdx19;
    int64_t* r13_20;
    struct s9* rdi21;
    struct s10* rdi22;
    int64_t v23;
    unsigned char v24;
    int64_t* r15_25;
    struct s11* rdi26;
    uint64_t rax27;
    struct s12* v28;
    uint64_t* rdi29;
    int32_t ecx30;
    uint64_t r8_31;
    uint64_t r8_32;
    uint64_t r8_33;
    struct s15* rdi34;
    int64_t v35;

    __asm__("rdtsc ");
    *reinterpret_cast<int32_t*>(&g436000) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g436000) + 4) = edx2;
    rdi3 = reinterpret_cast<struct s1*>(0x436008);
    rsi4 = reinterpret_cast<int64_t>("rrrrrrrrDDDDDDDDDDDDDDDDD;\r");
    while (1) {
        addr_40131d_8:
        rdi3->f0 = __intrinsic();
        rdi5 = reinterpret_cast<struct s2*>(&rdi3->f4);
        rdi5->f0 = __intrinsic();
        rdi6 = reinterpret_cast<struct s3*>(&rdi5->f4);
        *reinterpret_cast<int32_t*>(&rcx7) = __intrinsic();
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        rdi6->f0 = __intrinsic();
        rdi8 = reinterpret_cast<struct s4*>(&rdi6->f4);
        *reinterpret_cast<int32_t*>(&rdx9) = __intrinsic();
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
        rdi8->f0 = __intrinsic();
        rdi3 = reinterpret_cast<struct s1*>(&rdi8->f4);
        rsi4 = rsi4 + 4 + 4 + 4 + 4;
        while (rax10 = v11, !!*reinterpret_cast<int32_t*>(&rax10)) {
            below_or_equal12 = *reinterpret_cast<unsigned char*>(&rax10) <= g436008;
            if (below_or_equal12) 
                goto addr_40131d_8;
            ++rdi3;
        }
        break;
    }
    rdi3->f0 = r15_13;
    rdi14 = reinterpret_cast<struct s5*>(&rdi3->f8);
    rsi15 = rsi4 + 8;
    fun_4014ba(rdi14, rsi15, rdx9, rcx7);
    rdi14->f0 = -1;
    rdi16 = reinterpret_cast<struct s6*>(&rdi14->f8);
    rdi16->f0 = -1;
    rdi17 = reinterpret_cast<struct s7*>(&rdi16->f8);
    rdi17->f0 = reinterpret_cast<int64_t>(fun_40462e);
    rdi18 = reinterpret_cast<struct s8*>(&rdi17->f8);
    fun_40150f();
    *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fun_40457c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    fun_40150f();
    rdi18->f0 = *r13_20;
    rdi21 = reinterpret_cast<struct s9*>(&rdi18->f8);
    rdi21->f0 = reinterpret_cast<int64_t>(fun_404690);
    rdi22 = reinterpret_cast<struct s10*>(&rdi21->f8);
    v23 = rsi15 + 8 + 8 + 8 + 8 + 8;
    if (rdi22->f0 & 8) {
        v24 = reinterpret_cast<unsigned char>(8);
    } else {
        if (!(rdi22->f0 & 32)) {
            if (!(rdi22->f0 & 4)) {
                if (!*r15_25) {
                }
            }
        }
    }
    rdi22->f0 = v24;
    rdi26 = reinterpret_cast<struct s11*>(&rdi22->f8);
    rax27 = reinterpret_cast<uint64_t>(fun_404355);
    rdi26->f0 = reinterpret_cast<uint64_t>(fun_404355);
    v28 = reinterpret_cast<struct s12*>(&rdi26->f8);
    *reinterpret_cast<int32_t*>(&rdi29) = 0x4362e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi29) < 0x4363d8) {
        ecx30 = 0;
        *reinterpret_cast<int32_t*>(&rdx19) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_31 = rax27;
            *reinterpret_cast<uint32_t*>(&r8_32) = *reinterpret_cast<uint32_t*>(&r8_31) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = 0;
            r8_33 = r8_32 << *reinterpret_cast<unsigned char*>(&ecx30);
            ecx30 = ecx30 + 7;
            rdx19 = rdx19 | r8_33;
        } while (*reinterpret_cast<signed char*>(&rax27) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax27) & 64) {
            rdx19 = rdx19 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx30);
        }
        rax27 = rdx19;
        if (*rdi29) {
            rax27 = *rdi29;
        }
        *rdi29 = rax27;
        ++rdi29;
    }
    g405080();
    v28->f0 = reinterpret_cast<int64_t>(fun_403817);
    rdi34 = reinterpret_cast<struct s15*>(&v28->f8);
    fun_401466(rdi34, v23 + 8, rdx19, 0x437f80);
    rdi34->f0 = reinterpret_cast<int64_t>(fun_403312);
    rdi34->f8 = reinterpret_cast<int64_t>(fun_403c02);
    goto v35;
}

int64_t g405078 = 0x4be4;

int64_t g437de0 = 0;

uint64_t* g437df0 = reinterpret_cast<uint64_t*>(0);

int64_t g437de8 = 0;

int32_t g437e08 = 0;

int32_t g437e20 = 0;

int32_t g437e38 = 0;

int64_t g437df8 = 0;

int64_t g437e10 = 0;

int64_t g437e28 = 0;

int64_t fun_4014ba(struct s5* rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rax6;
    int64_t rax7;
    int64_t rax8;

    rbp5 = g405078;
    g437de0 = 3;
    g437df0 = reinterpret_cast<uint64_t*>(0x437df8);
    g437de8 = 16;
    g437e08 = 1;
    g437e20 = 1;
    g437e38 = 1;
    rax6 = reinterpret_cast<int64_t>(rbp5());
    g437df8 = rax6;
    rax7 = reinterpret_cast<int64_t>(rbp5());
    g437e10 = rax7;
    rax8 = reinterpret_cast<int64_t>(rbp5());
    g437e28 = rax8;
    return rax8;
}

unsigned char g43603d = 0;

void fun_40150f() {
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
    zf8 = (g43603d & 2) == 0;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf8)) | r8b1);
    *reinterpret_cast<unsigned char*>(&rax7) = *reinterpret_cast<unsigned char*>(rsi5 + rax7);
    *rdi3 = rax7 + rdx9;
    __asm__("lodsq ");
    return;
}

void fun_403cbb();

void fun_401466(struct s15* rdi, int64_t rsi, uint64_t rdx, int64_t rcx) {
    fun_403cbb();
    return;
}

int32_t fun_401460(int64_t rdi, void* rsi, int64_t* rdx) {
    return 42;
}

int64_t fun_4041e6(int64_t rdi);

uint32_t g436340 = 0;

uint32_t g437fb0 = 0;

void fun_40153d(int32_t edi, void* rsi, int64_t* rdx) {
    int32_t edi4;
    uint32_t eax5;
    int64_t rax6;

    fun_4041e6(0);
    edi4 = edi;
    fun_4046c1(*reinterpret_cast<signed char*>(&edi4));
    eax5 = g436340;
    g437fb0 = eax5;
    goto rax6;
}

struct s17 {
    struct s17* f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_4017b1(struct s17* rdi);

void fun_4017dc(struct s17* rdi, uint32_t* rsi);

int32_t fun_40180c(struct s17* rdi, void* rsi, struct s17* rdx, int64_t* rcx, uint64_t r8, void* r9) {
    struct s17* r11_7;
    uint64_t r10_8;
    void* rbp9;
    void* r13_10;
    uint64_t rbx11;
    int64_t* v12;
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
    uint64_t r9_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r9_28;
    uint64_t r12_29;
    void* r11_30;
    void* rax31;
    uint64_t r10_32;

    r11_7 = rdx;
    r10_8 = r8;
    rbp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r13_10 = rsi;
    *reinterpret_cast<int32_t*>(&rbx11) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx11) + 4) = 0;
    v12 = rcx;
    v13 = rsi;
    v14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint16_t>(rdx));
    fun_4017b1(reinterpret_cast<int64_t>(rbp9) - 80);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_4018bd_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_4018bd_5;
            fun_4017b1(reinterpret_cast<int64_t>(rbp9) - 80);
        }
        break;
        addr_4018bd_5:
        ++rbx11;
        if (rbx11 < r10_8) {
            rax18 = v13;
            if (reinterpret_cast<uint64_t>(rax18) >= reinterpret_cast<uint64_t>(v14)) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<void**>(v12 + rbx11 - 1) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> reinterpret_cast<uint64_t>(rsi20))) 
                    goto addr_4019e1_15; else 
                    goto addr_4018fc_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_4017b1(reinterpret_cast<int64_t>(rbp9) - 80);
                }
                *reinterpret_cast<int32_t*>(&r9_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = 0;
                while (v25 == 34) {
                    fun_4017b1(reinterpret_cast<int64_t>(rbp9) - 80);
                    ++r9_24;
                }
                rax26 = r12_22;
                if (!r9_24) 
                    goto addr_401945_25;
            } else {
                addr_4019e1_15:
                fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, rsi20);
                fun_4017b1(reinterpret_cast<int64_t>(rbp9) - 80);
                continue;
            }
            while (rax26 > 1) {
                fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, 92);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_40199d_29;
            fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, 34);
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
                fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, 34);
            }
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r9_28 % 3 == 0);
            continue;
            addr_401945_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, 92);
            }
        }
        addr_4019f8_35:
        fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, 0);
        continue;
        addr_4018fc_16:
        goto addr_4019f8_35;
    }
    fun_4017dc(reinterpret_cast<int64_t>(rbp9) - 80, 0);
    if (r11_7) {
        r11_30 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(r11_7) - 1);
        rax31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v13) - reinterpret_cast<uint64_t>(r13_10));
        if (reinterpret_cast<uint64_t>(rax31) > reinterpret_cast<uint64_t>(r11_30)) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r13_10) + reinterpret_cast<uint64_t>(rax31)) = 0;
    }
    if (r10_8) {
        r10_32 = r10_8 - 1;
        if (r10_32 > rbx11) {
            r10_32 = rbx11;
        }
        v12[r10_32] = 0;
    }
    return *reinterpret_cast<int32_t*>(&rbx11);
}

uint64_t fun_40437c(uint32_t edi, uint32_t* rsi, struct s17* rdx, signed char* rcx) {
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
        ecx7 = *reinterpret_cast<int32_t*>(0x4047e7 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
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

uint32_t fun_40436d(struct s17* rdi, uint32_t* rsi, struct s17* rdx, signed char* rcx, uint64_t r8, ...);

void fun_4017b1(struct s17* rdi) {
    struct s17* rdi2;
    uint32_t eax3;
    signed char* rcx4;
    uint64_t r8_5;
    uint32_t eax6;
    void* rax7;

    rdi2 = *reinterpret_cast<struct s17**>(&rdi->f0);
    eax3 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s17**>(&rdi2->f0));
    if (*reinterpret_cast<uint16_t*>(&eax3) > 0xd7ff) {
        eax6 = fun_40436d(rdi2, &rdi->f18, rdi, rcx4, r8_5);
    } else {
        rdi->f18 = eax3;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<struct s17**>(&rdi->f0) = reinterpret_cast<struct s17*>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s17**>(&rdi->f0)) + (reinterpret_cast<int64_t>(rax7) + reinterpret_cast<int64_t>(rax7)));
    return;
}

void fun_4017dc(struct s17* rdi, uint32_t* rsi) {
    struct s17* rdx3;
    signed char* r8_4;
    uint64_t rax5;
    signed char* rcx6;
    signed char* rcx7;

    rdx3 = rdi;
    r8_4 = rdx3->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi)));
    if (*reinterpret_cast<uint32_t*>(&rsi) > 0x7f) {
        rax5 = fun_40437c(*reinterpret_cast<uint32_t*>(&rsi), rsi, rdx3, rcx6);
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

struct s19 {
    struct s14* f0;
    signed char[4] pad8;
    struct s14* f8;
    signed char[4] pad16;
    struct s19* f10;
    uint32_t f18;
};

struct s18 {
    struct s14* f0;
    uint32_t f4;
    int64_t f8;
    signed char[16] pad32;
    struct s14* f20;
    signed char[20] pad56;
    int64_t f38;
    signed char[792] pad856;
    uint64_t f358;
    signed char[40] pad904;
    struct s19* f388;
};

uint32_t fun_403d56(struct s14* rdi, struct s14* rsi, struct s14* rdx, ...);

struct s14* fun_401b19(struct s18* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx) {
    struct s14* r14_5;
    struct s18* r12_6;
    uint32_t r13d7;
    uint32_t r13d8;
    struct s14* rdi9;
    struct s14* rdx10;
    void* rdx11;
    int64_t rbx12;
    void* rbx13;
    struct s14* rbx14;
    struct s14* rdx15;
    int64_t rdx16;
    void* r15_17;
    struct s14* rdx18;
    struct s19* r8_19;
    struct s14* rax20;
    struct s14* rsi21;
    struct s14* rcx22;
    uint32_t eax23;
    uint64_t rdx24;
    struct s14* eax25;
    uint32_t edx26;
    uint32_t ecx27;
    int64_t rax28;
    uint64_t rcx29;
    int64_t rcx30;
    uint32_t edx31;
    struct s14* ecx32;
    uint32_t esi33;
    int64_t rsi34;
    int64_t rdx35;
    struct s14* rdx36;
    struct s14* r9_37;
    struct s14* rdx38;
    uint32_t ecx39;
    uint64_t rcx40;
    uint64_t rax41;
    uint64_t rax42;
    struct s14* rax43;

    *reinterpret_cast<int32_t*>(&r14_5) = 0;
    *reinterpret_cast<int32_t*>(&r14_5 + 1) = 0;
    r12_6 = rdi;
    if (!rdi->f388 || ((r13d7 = rdi->f388->f18, (*reinterpret_cast<unsigned char*>(&r13d7) & 1) == 0) || (r13d8 = r13d7 & 8, !!r13d8))) {
        addr_401dbb_2:
        r12_6->f38 = 0x80;
        return r14_5;
    } else {
        rdi9 = rdi->f388->f0;
        rdx10 = rdi9;
        *reinterpret_cast<uint32_t*>(&rdx11) = *reinterpret_cast<uint32_t*>(&rdx10) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx11)) {
            rbx12 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rdi9->f10));
            *reinterpret_cast<uint32_t*>(&rbx13) = *reinterpret_cast<uint32_t*>(&rbx12) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = 0;
            rdx11 = rbx13;
        }
        rbx14 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi9) + reinterpret_cast<uint64_t>(rdx11));
        *reinterpret_cast<int32_t*>(&r14_5) = 0;
        *reinterpret_cast<int32_t*>(&r14_5 + 1) = 0;
        rdx15 = rbx14->f8;
        *reinterpret_cast<uint32_t*>(&rdx16) = *reinterpret_cast<uint32_t*>(&rdx15) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        if (rdx16 - 1) 
            goto addr_401dbb_2;
    }
    r14_5 = rdi->f388->f8;
    r15_17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx14->f8) & 0xfffffffffffffff8);
    rdx18 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi9) + reinterpret_cast<uint32_t>(r14_5) + 0xffffffffffffffb0);
    if (reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rbx14) + reinterpret_cast<uint64_t>(r15_17)) < reinterpret_cast<uint32_t>(rdx18)) {
        addr_401db8_7:
        *reinterpret_cast<int32_t*>(&r14_5) = 0;
        *reinterpret_cast<int32_t*>(&r14_5 + 1) = 0;
        goto addr_401dbb_2;
    } else {
        r8_19 = rdi->f388->f10;
        if (r12_6->f20 == rbx14) {
            r12_6->f20 = reinterpret_cast<struct s14*>(0);
            r12_6->f8 = 0;
            goto addr_401c96_10;
        }
        rax20 = rbx14->f18;
        rsi21 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 48);
        if (rax20 != rbx14) 
            goto addr_401bd3_12;
    }
    rax20 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 40);
    rcx22 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx14) + 40);
    if (rax20) {
        addr_401bfb_14:
        rdx18 = rax20;
    } else {
        rax20 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 32);
        if (!rax20) {
            addr_401c25_16:
            if (!rsi21) {
                addr_401c96_10:
                eax23 = fun_403d56(rdi9, r14_5, rdx18, rdi9, r14_5, rdx18);
                if (eax23) {
                    rdx24 = reinterpret_cast<uint64_t>(r15_17) >> 8;
                    eax25 = *reinterpret_cast<struct s14**>(&rdx24);
                    if (*reinterpret_cast<struct s14**>(&rdx24) && (eax25 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx24)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx26 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx24)) ^ 31;
                        ecx27 = 38 - edx26;
                        *reinterpret_cast<void**>(&rax28) = reinterpret_cast<void*>(31 - edx26);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                        rcx29 = reinterpret_cast<uint64_t>(r15_17) >> *reinterpret_cast<signed char*>(&ecx27);
                        *reinterpret_cast<uint32_t*>(&rcx30) = *reinterpret_cast<uint32_t*>(&rcx29) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = 0;
                        eax25 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx30 + rax28 * 2));
                    }
                    edx31 = r12_6->f4;
                    ecx32 = eax25;
                    esi33 = 1 << *reinterpret_cast<unsigned char*>(&ecx32);
                    *reinterpret_cast<struct s14**>(&(rbx14 + 2)->f0) = eax25;
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 40) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 32) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(&rsi34) = eax25;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = 0;
                    if (edx31 & esi33) 
                        goto addr_401d3d_20; else 
                        goto addr_401d20_21;
                } else {
                    r12_6->f358 = r12_6->f358 - reinterpret_cast<uint32_t>(r14_5);
                    r12_6->f388 = r8_19;
                    goto addr_401dbb_2;
                }
            } else {
                *reinterpret_cast<struct s14**>(&rdx35) = *reinterpret_cast<struct s14**>(&(rbx14 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = 0;
                rdx18 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(r12_6) + rdx35 * 8);
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 0x258) != rbx14) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi21) + 32) != rbx14) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi21) + 40) = rax20;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi21) + 32) = rax20;
                    }
                    if (rax20) 
                        goto addr_401c49_28;
                    goto addr_401c96_10;
                } else {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 0x258) = rax20;
                    if (!rax20) {
                        __asm__("rol eax, cl");
                        r12_6->f4 = r12_6->f4 & 0xfffffffe;
                        goto addr_401c96_10;
                    } else {
                        addr_401c49_28:
                        rdx36 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 48) = rsi21;
                        if (rdx36) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 32) = rdx36;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx36) + 48) = rax20;
                            goto addr_401c85_33;
                        }
                    }
                }
            }
        } else {
            rcx22 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx14) + 32);
            goto addr_401bfb_14;
        }
    }
    addr_401bfe_35:
    r9_37 = rcx22;
    rax20 = rdx18;
    rcx22 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx18) + 40);
    rdx18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 40);
    if (rdx18) 
        goto addr_401bfe_35;
    rdx18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 32);
    rcx22 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax20) + 32);
    if (rdx18) 
        goto addr_401bfe_35;
    *reinterpret_cast<struct s14**>(&r9_37->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_401c25_16;
    addr_401d3d_20:
    rdx38 = *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(r12_6) + rsi34 * 8 + 0x258);
    if (eax25 != 31) {
        r13d8 = 57 - (reinterpret_cast<uint32_t>(eax25) >> 1);
    }
    ecx39 = r13d8;
    rcx40 = reinterpret_cast<uint64_t>(r15_17) << *reinterpret_cast<unsigned char*>(&ecx39);
    while ((reinterpret_cast<uint32_t>(rdx38->f8) & 0xfffffffffffffff8) != r15_17) {
        rax41 = rcx40;
        rcx40 = rcx40 + rcx40;
        rax42 = (rax41 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx38) + rax42 * 8)) 
            goto addr_401d8a_42;
        rdx38 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx38) + rax42 * 8);
    }
    rax43 = rdx38->f10;
    rax43->f18 = rbx14;
    rdx38->f10 = rbx14;
    rbx14->f10 = rax43;
    rbx14->f18 = rdx38;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 48) = reinterpret_cast<struct s14*>(0);
    goto addr_401db8_7;
    addr_401d8a_42:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx38) + rax42 * 8) = rbx14;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 48) = rdx38;
    addr_401d92_45:
    rbx14->f18 = rbx14;
    rbx14->f10 = rbx14;
    goto addr_401db8_7;
    addr_401d20_21:
    r12_6->f4 = edx31 | esi33;
    *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(r12_6) + rsi34 * 8 + 0x258) = rbx14;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 48) = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(r12_6) + rsi34 * 8 + 0x258);
    goto addr_401d92_45;
    addr_401c85_33:
    rdx18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx14) + 40);
    if (rdx18) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 40) = rdx18;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 48) = rax20;
        goto addr_401c96_10;
    }
    addr_401bd3_12:
    rdx18 = rbx14->f10;
    rdx18->f18 = rax20;
    rax20->f10 = rdx18;
    goto addr_401c25_16;
}

struct s14* fun_401566();

struct s14* fun_404008() {
    struct s14* rax1;

    rax1 = fun_401566();
    return rax1;
}

uint32_t fun_40400e(struct s14* rdi, struct s14* rsi);

uint32_t fun_403d56(struct s14* rdi, struct s14* rsi, struct s14* rdx, ...) {
    uint32_t eax4;

    eax4 = fun_40400e(rdi, rsi);
    return eax4;
}

struct s14* g4367c0 = reinterpret_cast<struct s14*>(0);

void fun_401ad2(struct s14* rdi, struct s14* rsi, struct s14* rdx) {
    struct s14* rax4;
    void* rax5;
    int64_t rax6;
    struct s14* rcx7;
    struct s14* r8_8;
    struct s14* rax9;

    rax4 = rsi;
    *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax5)) {
        rax6 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rsi->f10));
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax6) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    rcx7 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi) + reinterpret_cast<uint64_t>(rax5));
    r8_8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) - reinterpret_cast<uint64_t>(rax5));
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi) + 40) = rcx7;
    rdi->f10 = r8_8;
    rcx7->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_8) | 1);
    rax9 = g4367c0;
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rsi) + reinterpret_cast<uint32_t>(rdx) + 8) = 80;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi) + 48) = rax9;
    return;
}

struct s14* fun_403d6a(struct s14* rdi);

struct s14* fun_403d42(struct s14* rdi) {
    struct s14* rax2;

    rax2 = fun_403d6a(rdi);
    return rax2;
}

uint32_t g4363e4 = 0;

uint32_t g4363e0 = 0;

struct s14* g4363e8 = reinterpret_cast<struct s14*>(0);

struct s14* g4363f0 = reinterpret_cast<struct s14*>(0);

void* g4367b0 = reinterpret_cast<void*>(0);

int32_t g436750 = 0;

struct s14* g4367b8 = reinterpret_cast<struct s14*>(0);

uint64_t g436748 = 0;

uint64_t g436738 = 0;

uint64_t g436740 = 0;

struct s14* g436408 = reinterpret_cast<struct s14*>(0);

struct s14* g4363f8 = reinterpret_cast<struct s14*>(0);

struct s14* g436400 = reinterpret_cast<struct s14*>(0);

struct s20 {
    struct s14* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s14* g436758 = reinterpret_cast<struct s14*>(0);

struct s14* g436760 = reinterpret_cast<struct s14*>(0);

uint32_t g436770 = 0;

struct s21 {
    struct s14* f0;
    signed char[4] pad8;
    void* f8;
    struct s21* f10;
};

struct s16* g436768 = reinterpret_cast<struct s16*>(0);

struct s14* fun_401556(struct s14* rdi, struct s14* rsi);

uint64_t g4367a0 = 0;

int64_t g436418 = 0;

uint64_t g436420 = 0;

struct s22 {
    signed char[16] pad16;
    struct s22* f10;
    struct s22* f18;
};

struct s23 {
    struct s23* f0;
    uint64_t f8;
    struct s23* f10;
    struct s23* f18;
    int64_t f20;
    int64_t f28;
    struct s23* f30;
    uint32_t f38;
};

struct s24 {
    struct s14* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s16* fun_40238e(struct s14* rdi, struct s13* rsi, void* rdx, struct s14* rcx) {
    struct s14* rbx5;
    uint32_t edi6;
    uint64_t rax7;
    void* r9_8;
    uint32_t esi9;
    uint32_t eax10;
    uint32_t ecx11;
    int64_t rsi12;
    uint64_t rdx13;
    int64_t rdx14;
    int64_t rax15;
    struct s14* rdx16;
    struct s14* rax17;
    uint32_t esi18;
    uint64_t rcx19;
    uint32_t eax20;
    uint32_t ecx21;
    uint32_t eax22;
    int64_t rax23;
    void* rcx24;
    struct s14* rcx25;
    struct s14* rdx26;
    struct s14* rdx27;
    struct s14* rax28;
    void* rcx29;
    uint64_t rdx30;
    int1_t zf31;
    int1_t cf32;
    uint64_t rsi33;
    struct s14* r12_34;
    uint64_t rdi35;
    uint64_t rax36;
    struct s14* r12_37;
    uint64_t rdx38;
    uint64_t rcx39;
    uint64_t rax40;
    struct s16* rax41;
    struct s14* rax42;
    struct s14* r9_43;
    uint64_t rax44;
    uint64_t rax45;
    int1_t below_or_equal46;
    struct s14* r10_47;
    struct s14* rdx48;
    uint64_t tmp64_49;
    int1_t below_or_equal50;
    struct s14* rdx51;
    struct s14* rcx52;
    struct s20* rsi53;
    struct s14* rdx54;
    struct s14* rdx55;
    struct s14* rsi56;
    void* r10_57;
    struct s14* rcx58;
    struct s14* r8_59;
    struct s14* rax60;
    struct s14* rdx61;
    uint32_t ecx62;
    int1_t cf63;
    struct s21* rcx64;
    uint32_t esi65;
    uint32_t r11d66;
    struct s14* rsi67;
    struct s14* rdx68;
    struct s14* rdx69;
    struct s14* r13_70;
    void* rax71;
    void* rdx72;
    void* rdx73;
    int64_t rax74;
    void* rax75;
    struct s14* r11_76;
    struct s16* rax77;
    struct s14* rdi78;
    int32_t ecx79;
    struct s14* rax80;
    struct s14* rdx81;
    uint64_t rcx82;
    uint64_t rdx83;
    struct s14* eax84;
    uint32_t edx85;
    uint32_t ecx86;
    int64_t rax87;
    uint64_t rcx88;
    int64_t rcx89;
    uint32_t edx90;
    struct s14* ecx91;
    uint32_t edi92;
    uint32_t edx93;
    int64_t rax94;
    struct s14* rax95;
    struct s14* rdx96;
    struct s14* rcx97;
    uint32_t ecx98;
    struct s14* rdx99;
    uint64_t rcx100;
    uint64_t rax101;
    uint64_t rax102;
    struct s14* rax103;
    struct s14* rcx104;
    void* rcx105;
    int64_t rcx106;
    struct s14* rdx107;
    struct s14* rax108;
    void* r8_109;
    int1_t zf110;
    struct s14* rcx111;
    int64_t rcx112;
    uint64_t rcx113;
    uint64_t rsi114;
    struct s14* edx115;
    uint32_t esi116;
    uint32_t ecx117;
    int64_t rdx118;
    uint64_t rcx119;
    int64_t rcx120;
    uint32_t esi121;
    struct s14* ecx122;
    uint32_t edi123;
    int64_t rdi124;
    uint32_t esi125;
    int64_t rdx126;
    uint32_t edi127;
    struct s14* rdx128;
    struct s14* rcx129;
    struct s14* rsi130;
    void* rbx131;
    struct s14* rdi132;
    struct s14* rdi133;
    struct s14* tmp64_134;
    struct s14* rsi135;
    uint32_t ecx136;
    uint64_t rcx137;
    uint64_t rdx138;
    uint64_t rdx139;
    struct s14* rdx140;
    struct s14* r10_141;
    struct s14* rcx142;
    int64_t r10_143;
    struct s14* rcx144;
    struct s14* r12_145;
    struct s14* rcx146;
    struct s14* rcx147;
    struct s14* tmp64_148;
    struct s14* rax149;
    uint64_t rax150;
    struct s22* rax151;
    struct s14* rcx152;
    struct s14* r11_153;
    struct s23* r8_154;
    uint64_t rcx155;
    uint64_t rsi156;
    uint32_t edx157;
    uint32_t esi158;
    uint32_t ecx159;
    int64_t rdx160;
    uint64_t rcx161;
    int64_t rcx162;
    uint32_t esi163;
    uint32_t ecx164;
    uint32_t edi165;
    int64_t rdi166;
    uint32_t esi167;
    int64_t rdx168;
    uint32_t edi169;
    struct s23* rdx170;
    struct s23* rcx171;
    int64_t r8_172;
    struct s14* rcx173;
    uint32_t ecx174;
    struct s23* rsi175;
    uint64_t rcx176;
    uint64_t rdx177;
    uint64_t rdx178;
    struct s23* rdx179;
    struct s14* rcx180;
    uint32_t ecx181;
    struct s14* r11_182;
    struct s14* r10_183;
    uint64_t rcx184;
    void* rdx185;
    struct s14* r9_186;
    uint32_t edi187;
    int64_t rax188;
    struct s14* rcx189;
    struct s14* r8_190;
    struct s14* rdx191;
    struct s14* rcx192;
    struct s14* rdx193;
    struct s14* r10_194;
    void* r12_195;
    int64_t rdi196;
    uint32_t r8d197;
    int64_t rcx198;
    int64_t rax199;
    void* rdi200;
    struct s14* r10_201;
    void* r8_202;
    struct s14* r11_203;
    struct s24* rdx204;
    struct s14* rsi205;
    struct s14* rbx206;
    uint32_t r10d207;
    uint64_t rcx208;
    struct s14* rdx209;
    int64_t r8_210;
    uint32_t r11d211;
    struct s14* r8_212;
    struct s14* rcx213;
    struct s14* rbx214;
    struct s14* r11_215;
    struct s14* rcx216;
    struct s14* r10_217;
    struct s14* rdx218;
    uint64_t rcx219;
    int64_t rdi220;
    uint32_t r9d221;
    struct s14* rdi222;
    struct s14* rcx223;
    int64_t r11_224;
    struct s14* rcx225;
    struct s14* r13_226;
    struct s14* rcx227;
    struct s14* rcx228;
    int64_t rcx229;
    int64_t rax230;
    void* r9_231;
    struct s14* rdi232;
    void* rdx233;
    struct s14* r8_234;
    struct s14* rbx235;

    if (reinterpret_cast<uint32_t>(rdi) > reinterpret_cast<uint32_t>(0xe0)) {
        if (reinterpret_cast<uint32_t>(rdi) > reinterpret_cast<uint32_t>(0xffffffffffffff7f)) {
            rbx5 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
            goto addr_402abb_4;
        }
        edi6 = g4363e4;
        rbx5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi) + 31 & 0xfffffffffffffff0);
        if (!edi6) 
            goto addr_402abb_4;
        rax7 = reinterpret_cast<uint32_t>(rbx5) >> 8;
        r9_8 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(rbx5));
        esi9 = *reinterpret_cast<uint32_t*>(&rax7);
        if (*reinterpret_cast<uint32_t*>(&rax7) && (esi9 = 31, *reinterpret_cast<uint32_t*>(&rax7) <= 0xffff)) {
            __asm__("bsr eax, eax");
            eax10 = *reinterpret_cast<uint32_t*>(&rax7) ^ 31;
            ecx11 = 38 - eax10;
            *reinterpret_cast<uint32_t*>(&rsi12) = 31 - eax10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
            rdx13 = reinterpret_cast<uint32_t>(rbx5) >> *reinterpret_cast<signed char*>(&ecx11);
            *reinterpret_cast<uint32_t*>(&rdx14) = *reinterpret_cast<uint32_t*>(&rdx13) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
            esi9 = static_cast<uint32_t>(rdx14 + rsi12 * 2);
        }
        *reinterpret_cast<uint32_t*>(&rax15) = esi9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx16) = 0;
        *reinterpret_cast<int32_t*>(&rdx16 + 1) = 0;
        rax17 = *reinterpret_cast<struct s14**>(rax15 * 8 + 0x436638);
        if (rax17) 
            goto addr_402770_9;
    } else {
        *reinterpret_cast<int32_t*>(&rbx5) = 32;
        *reinterpret_cast<int32_t*>(&rbx5 + 1) = 0;
        if (reinterpret_cast<uint32_t>(rdi) > reinterpret_cast<uint32_t>(14)) {
            rbx5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi) + 31 & 0xfffffffffffffff0);
        }
        esi18 = g4363e0;
        rcx19 = reinterpret_cast<uint32_t>(rbx5) >> 3;
        eax20 = esi18 >> *reinterpret_cast<unsigned char*>(&rcx19);
        if (!(*reinterpret_cast<unsigned char*>(&eax20) & 3)) 
            goto addr_40241e_13; else 
            goto addr_4023cd_14;
    }
    addr_4027e4_15:
    if (!(reinterpret_cast<uint32_t>(rdx16) | reinterpret_cast<uint32_t>(rax17))) {
        ecx21 = esi9;
        eax22 = 0xfffffffe << *reinterpret_cast<unsigned char*>(&ecx21) & edi6;
        if (!eax22) 
            goto addr_402abb_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax23) = -eax22 & eax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        rdx16 = *reinterpret_cast<struct s14**>(rax23 * 8 + 0x436638);
        *reinterpret_cast<int32_t*>(&rax17) = 0;
        *reinterpret_cast<int32_t*>(&rax17 + 1) = 0;
    }
    while (rdx16) {
        rcx24 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rdx16->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rcx24) < reinterpret_cast<uint64_t>(r9_8)) {
            r9_8 = rcx24;
            rax17 = rdx16;
        }
        rcx25 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx16) + 32);
        if (!rcx25) {
            rcx25 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx16) + 40);
        }
        rdx16 = rcx25;
    }
    rdx26 = g4363e8;
    if (!rax17 || reinterpret_cast<uint64_t>(r9_8) >= reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx26) - reinterpret_cast<uint32_t>(rbx5))) {
        addr_402abb_4:
        rdx27 = g4363e8;
        if (reinterpret_cast<uint32_t>(rdx27) < reinterpret_cast<uint32_t>(rbx5)) {
            rax28 = g4363f0;
            if (reinterpret_cast<uint32_t>(rax28) <= reinterpret_cast<uint32_t>(rbx5)) {
                rcx29 = g4367b0;
                rdx30 = -reinterpret_cast<uint64_t>(rcx29);
                zf31 = (*reinterpret_cast<unsigned char*>(&g436750) & 1) == 0;
                if (zf31 || ((cf32 = reinterpret_cast<uint32_t>(rbx5) < reinterpret_cast<uint32_t>(g4367b8), cf32) || (!rax28 || ((rsi33 = g436748, r12_34 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx29) + 62 & rdx30), !!rsi33) && ((rdi35 = g436738, rax36 = rdi35 + reinterpret_cast<uint32_t>(r12_34), rdi35 >= rax36) || rsi33 < rax36) || reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_34))))) {
                    r12_37 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx29) + 95 & rdx30);
                    if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_37) || (rdx38 = g436748, !!rdx38) && ((rcx39 = g436738, rax40 = reinterpret_cast<uint32_t>(r12_37) + rcx39, rcx39 >= rax40) || rdx38 < rax40)) {
                        addr_403308_28:
                        *reinterpret_cast<int32_t*>(&rax41) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                    } else {
                        rax42 = fun_403d42(r12_37);
                        r9_43 = rax42;
                        rax44 = g436738;
                        rax45 = rax44 + reinterpret_cast<uint32_t>(r12_37);
                        below_or_equal46 = rax45 <= g436740;
                        g436738 = rax45;
                        if (!below_or_equal46) {
                            g436740 = rax45;
                        }
                        r10_47 = g436408;
                        if (r10_47) 
                            goto addr_402ce9_32; else 
                            goto addr_402c7b_33;
                    }
                } else {
                    rax17 = fun_403d42(r12_34);
                    *reinterpret_cast<struct s14**>(&rax17->f0) = reinterpret_cast<struct s14*>(0);
                    rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r12_34) + 0xffffffffffffffe0);
                    rdx48 = g4363f8;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(r12_34) + 0xffffffffffffffe8) = 11;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(r12_34) + 0xfffffffffffffff0) = 0;
                    if (!rdx48 || reinterpret_cast<uint32_t>(rax17) < reinterpret_cast<uint32_t>(rdx48)) {
                        g4363f8 = rax17;
                    }
                    tmp64_49 = reinterpret_cast<uint32_t>(r12_34) + g436738;
                    below_or_equal50 = tmp64_49 <= g436740;
                    g436738 = tmp64_49;
                    if (!below_or_equal50) {
                        g436740 = tmp64_49;
                        goto addr_4032fd_38;
                    }
                }
            } else {
                rdx51 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax28) - reinterpret_cast<uint32_t>(rbx5));
                goto addr_4032d4_40;
            }
        } else {
            rax17 = g436400;
            rcx52 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx27) - reinterpret_cast<uint32_t>(rbx5));
            rsi53 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rdx27));
            if (reinterpret_cast<uint32_t>(rcx52) <= reinterpret_cast<uint32_t>(31)) {
                g4363e8 = reinterpret_cast<struct s14*>(0);
                g436400 = reinterpret_cast<struct s14*>(0);
                rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx27) | 3);
                rsi53->f8 = rsi53->f8 | 1;
                goto addr_4032fd_38;
            } else {
                rdx54 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
                g4363e8 = rcx52;
                g436400 = rdx54;
                rdx54->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx52) | 1);
                rsi53->f0 = rcx52;
                goto addr_4032f5_44;
            }
        }
    } else {
        rdx55 = rax17->f18;
        rsi56 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 48);
        r10_57 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(r9_8));
        if (rdx55 != rax17) {
            rcx58 = rax17->f10;
            rcx58->f18 = rdx55;
            rdx55->f10 = rcx58;
            goto addr_4028be_47;
        }
        rdx55 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 40);
        r8_59 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + 40);
        if (rdx55) 
            goto addr_402894_49; else 
            goto addr_402887_50;
    }
    addr_40330a_51:
    return rax41;
    addr_402ce9_32:
    rax60 = g436758;
    rdx61 = g436760;
    if (!reinterpret_cast<int1_t>(r9_43 == reinterpret_cast<uint32_t>(rax60) + reinterpret_cast<uint32_t>(rdx61)) || ((ecx62 = g436770, !!(*reinterpret_cast<unsigned char*>(&ecx62) & 8)) || (!(*reinterpret_cast<unsigned char*>(&ecx62) & 1) || (reinterpret_cast<uint32_t>(r10_47) < reinterpret_cast<uint32_t>(rax60) || reinterpret_cast<uint32_t>(r9_43) <= reinterpret_cast<uint32_t>(r10_47))))) {
        cf63 = reinterpret_cast<uint32_t>(r9_43) < reinterpret_cast<uint32_t>(g4363f8);
        if (cf63) {
            g4363f8 = r9_43;
        }
        *reinterpret_cast<int32_t*>(&rcx64) = 0x436758;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx64) + 4) = 0;
        if (!reinterpret_cast<int1_t>(rax60 == reinterpret_cast<uint32_t>(r9_43) + reinterpret_cast<uint32_t>(r12_37))) 
            goto addr_4030ae_55;
        esi65 = g436770;
        r11d66 = esi65 & 8;
        if (r11d66) 
            goto addr_4030ae_55;
        if (*reinterpret_cast<unsigned char*>(&esi65) & 1) 
            goto addr_402d7f_58;
    } else {
        rsi67 = r10_47;
        g436760 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx61) + reinterpret_cast<uint32_t>(r12_37));
        rdx68 = g4363f0;
        rdx69 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx68) + reinterpret_cast<uint32_t>(r12_37));
        goto addr_402d31_60;
    }
    do {
        addr_4030ae_55:
        r13_70 = rcx64->f0;
        if (reinterpret_cast<uint32_t>(r10_47) < reinterpret_cast<uint32_t>(r13_70)) 
            continue;
        r13_70 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rcx64->f8));
        if (reinterpret_cast<uint32_t>(r10_47) < reinterpret_cast<uint32_t>(r13_70)) 
            break;
        rcx64 = rcx64->f10;
    } while (rcx64);
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
    r11_76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rdx73) + 0xffffffffffffffa1);
    if (reinterpret_cast<uint32_t>(r11_76) < reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(r10_47) + 32)) {
        r11_76 = r10_47;
    }
    fun_401ad2(0x4363e0, r9_43, reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffb0);
    rax77 = reinterpret_cast<struct s16*>(&r11_76->f10);
    r11_76->f8 = reinterpret_cast<struct s14*>(51);
    rdi78 = reinterpret_cast<struct s14*>(&r11_76->f10);
    *reinterpret_cast<uint32_t*>(&rsi67) = 0x436758;
    *reinterpret_cast<int32_t*>(&rsi67 + 1) = 0;
    ecx79 = 8;
    while (ecx79) {
        --ecx79;
        *reinterpret_cast<struct s14**>(&rdi78->f0) = *reinterpret_cast<struct s14**>(&rsi67->f0);
        rdi78 = reinterpret_cast<struct s14*>(&rdi78->pad8);
        rsi67 = reinterpret_cast<struct s14*>(&rsi67->pad8);
    }
    g436768 = rax77;
    rax80 = r11_76 + 2;
    g436758 = r9_43;
    g436760 = r12_37;
    g436770 = 1;
    do {
        *reinterpret_cast<struct s14**>(&rax80->f0) = reinterpret_cast<struct s14*>(11);
        rax80 = reinterpret_cast<struct s14*>(&rax80->f8);
    } while (reinterpret_cast<uint32_t>(r13_70) > reinterpret_cast<uint32_t>(rax80));
    if (r10_47 == r11_76) {
        addr_4032c5_74:
        rdx81 = g4363f0;
        if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(rdx81)) {
            fun_401556(rdi78, rsi67);
            goto addr_403308_28;
        } else {
            rdx51 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx81) - reinterpret_cast<uint32_t>(rbx5));
        }
    } else {
        r11_76->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r11_76->f8) & 0xfffffffffffffffe);
        rsi67 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r11_76) - reinterpret_cast<uint32_t>(r10_47));
        rcx82 = reinterpret_cast<uint32_t>(rsi67) >> 3;
        r10_47->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi67) | 1);
        *reinterpret_cast<struct s14**>(&r11_76->f0) = rsi67;
        if (reinterpret_cast<uint32_t>(rsi67) > reinterpret_cast<uint32_t>(0xff)) {
            rdx83 = reinterpret_cast<uint32_t>(rsi67) >> 8;
            eax84 = *reinterpret_cast<struct s14**>(&rdx83);
            if (*reinterpret_cast<struct s14**>(&rdx83) && (eax84 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx83)) <= 0xffff)) {
                __asm__("bsr edx, edx");
                edx85 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx83)) ^ 31;
                ecx86 = 38 - edx85;
                *reinterpret_cast<void**>(&rax87) = reinterpret_cast<void*>(31 - edx85);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
                rcx88 = reinterpret_cast<uint32_t>(rsi67) >> *reinterpret_cast<signed char*>(&ecx86);
                *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rcx88) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
                eax84 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx89 + rax87 * 2));
            }
            edx90 = g4363e4;
            ecx91 = eax84;
            edi92 = 1 << *reinterpret_cast<unsigned char*>(&ecx91);
            *reinterpret_cast<struct s14**>(&(r10_47 + 2)->f0) = eax84;
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_47) + 40) = reinterpret_cast<struct s14*>(0);
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_47) + 32) = reinterpret_cast<struct s14*>(0);
            rdi78 = eax84;
            *reinterpret_cast<int32_t*>(&rdi78 + 1) = 0;
            if (edx90 & edi92) 
                goto addr_40324d_81; else 
                goto addr_40322f_82;
        } else {
            edx93 = g4363e0;
            *reinterpret_cast<int32_t*>(&rax94) = static_cast<int32_t>(rcx82 + rcx82);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax94) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rsi67) = 1 << *reinterpret_cast<unsigned char*>(&rcx82);
            *reinterpret_cast<int32_t*>(&rsi67 + 1) = 0;
            rax95 = reinterpret_cast<struct s14*>(rax94 * 8 + 0x436428);
            if (edx93 & *reinterpret_cast<uint32_t*>(&rsi67)) {
                rdx96 = rax95->f10;
            } else {
                g4363e0 = edx93 | *reinterpret_cast<uint32_t*>(&rsi67);
                rdx96 = rax95;
            }
            rax95->f10 = r10_47;
            rdx96->f18 = r10_47;
            r10_47->f10 = rdx96;
            r10_47->f18 = rax95;
            goto addr_4032c5_74;
        }
    }
    addr_4032d4_40:
    rax17 = g436408;
    g4363f0 = rdx51;
    rcx97 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
    g436408 = rcx97;
    rcx97->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx51) | 1);
    addr_4032f5_44:
    rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    addr_4032fd_38:
    rax41 = reinterpret_cast<struct s16*>(&rax17->f10);
    goto addr_40330a_51;
    addr_40324d_81:
    ecx98 = 0;
    rdx99 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi78) * 8 + 0x436638);
    if (eax84 != 31) {
        ecx98 = 57 - (reinterpret_cast<uint32_t>(eax84) >> 1);
    }
    rcx100 = reinterpret_cast<uint32_t>(rsi67) << *reinterpret_cast<unsigned char*>(&ecx98);
    while (rsi67 != (reinterpret_cast<uint32_t>(rdx99->f8) & 0xfffffffffffffff8)) {
        rax101 = rcx100;
        rcx100 = rcx100 + rcx100;
        rax102 = (rax101 >> 63) + 4;
        rdi78 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx99) + rax102 * 8);
        if (!rdi78) 
            goto addr_403297_91;
        rdx99 = rdi78;
    }
    rax103 = rdx99->f10;
    rax103->f18 = r10_47;
    rdx99->f10 = r10_47;
    r10_47->f10 = rax103;
    r10_47->f18 = rdx99;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_47) + 48) = reinterpret_cast<struct s14*>(0);
    goto addr_4032c5_74;
    addr_403297_91:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx99) + rax102 * 8) = r10_47;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_47) + 48) = rdx99;
    addr_40329f_94:
    r10_47->f18 = r10_47;
    r10_47->f10 = r10_47;
    goto addr_4032c5_74;
    addr_40322f_82:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi78) * 8 + 0x436638) = r10_47;
    g4363e4 = edx90 | edi92;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_47) + 48) = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi78) * 8 + 0x436638);
    goto addr_40329f_94;
    addr_4030c8_63:
    __asm__("ud2 ");
    goto addr_4030d2_64;
    addr_402d7f_58:
    rcx104 = rax60;
    g436758 = r9_43;
    *reinterpret_cast<uint32_t*>(&rcx105) = *reinterpret_cast<uint32_t*>(&rcx104) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx105) + 4) = 0;
    g436760 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx61) + reinterpret_cast<uint32_t>(r12_37));
    if (*reinterpret_cast<uint32_t*>(&rcx105)) {
        rcx106 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rax60->f10));
        *reinterpret_cast<uint32_t*>(&rcx105) = *reinterpret_cast<uint32_t*>(&rcx106) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx105) + 4) = 0;
    }
    rdx107 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax60) + reinterpret_cast<uint64_t>(rcx105));
    rax108 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_43) + reinterpret_cast<uint32_t>(rbx5));
    r8_109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx107) - reinterpret_cast<uint32_t>(r9_43)) - reinterpret_cast<uint32_t>(rbx5));
    r9_43->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    if (r10_47 == rdx107) 
        goto addr_402dc3_97;
    zf110 = rdx107 == g436400;
    if (!zf110) {
        rcx111 = rdx107->f8;
        *reinterpret_cast<uint32_t*>(&rcx112) = *reinterpret_cast<uint32_t*>(&rcx111) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx112) + 4) = 0;
        if (rcx112 - 1) {
            addr_402f44_100:
            rdx107->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx107->f8) & 0xfffffffffffffffe);
            rcx113 = reinterpret_cast<uint64_t>(r8_109) >> 3;
            rax108->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_109) | 1);
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rax108) + reinterpret_cast<uint64_t>(r8_109)) = r8_109;
            if (reinterpret_cast<uint64_t>(r8_109) > 0xff) {
                rsi114 = reinterpret_cast<uint64_t>(r8_109) >> 8;
                edx115 = *reinterpret_cast<struct s14**>(&rsi114);
                if (*reinterpret_cast<struct s14**>(&rsi114) && (edx115 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi114)) <= 0xffff)) {
                    __asm__("bsr esi, esi");
                    esi116 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi114)) ^ 31;
                    ecx117 = 38 - esi116;
                    *reinterpret_cast<void**>(&rdx118) = reinterpret_cast<void*>(31 - esi116);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx118) + 4) = 0;
                    rcx119 = reinterpret_cast<uint64_t>(r8_109) >> *reinterpret_cast<signed char*>(&ecx117);
                    *reinterpret_cast<uint32_t*>(&rcx120) = *reinterpret_cast<uint32_t*>(&rcx119) & 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx120) + 4) = 0;
                    edx115 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx120 + rdx118 * 2));
                }
                esi121 = g4363e4;
                ecx122 = edx115;
                edi123 = 1 << *reinterpret_cast<unsigned char*>(&ecx122);
                *reinterpret_cast<struct s14**>(&(rax108 + 2)->f0) = edx115;
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax108) + 40) = reinterpret_cast<struct s14*>(0);
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax108) + 32) = reinterpret_cast<struct s14*>(0);
                *reinterpret_cast<struct s14**>(&rdi124) = edx115;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi124) + 4) = 0;
                if (!(esi121 & edi123)) 
                    goto addr_40300c_104;
            } else {
                esi125 = g4363e0;
                *reinterpret_cast<int32_t*>(&rdx126) = static_cast<int32_t>(rcx113 + rcx113);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx126) + 4) = 0;
                edi127 = 1 << *reinterpret_cast<unsigned char*>(&rcx113);
                rdx128 = reinterpret_cast<struct s14*>(rdx126 * 8 + 0x436428);
                if (esi125 & edi127) {
                    rcx129 = rdx128->f10;
                } else {
                    rcx129 = rdx128;
                    g4363e0 = esi125 | edi127;
                }
                rdx128->f10 = rax108;
                rcx129->f18 = rax108;
                rax108->f10 = rcx129;
                rax108->f18 = rdx128;
                goto addr_4030a5_109;
            }
        } else {
            rsi130 = rdx107->f18;
            rbx131 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx107->f8) & 0xfffffffffffffff8);
            if (reinterpret_cast<uint32_t>(rdx107->f8) <= reinterpret_cast<uint32_t>(0xff)) {
                rdi132 = rdx107->f10;
                if (rdi132 != rsi130) {
                    rdi132->f18 = rsi130;
                    rsi130->f10 = rdi132;
                    goto addr_402f3e_113;
                } else {
                    __asm__("rol esi, cl");
                    g4363e0 = g4363e0 & 0xfffffffe;
                    goto addr_402f3e_113;
                }
            }
            rdi133 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx107) + 48);
            if (rdx107 == rsi130) 
                goto addr_402e84_116; else 
                goto addr_402e76_117;
        }
    } else {
        tmp64_134 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_109) + reinterpret_cast<uint32_t>(g4363e8));
        g436400 = rax108;
        g4363e8 = tmp64_134;
        rax108->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_134) | 1);
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax108) + reinterpret_cast<uint32_t>(tmp64_134)) = tmp64_134;
        goto addr_4030a5_109;
    }
    rsi135 = *reinterpret_cast<struct s14**>(rdi124 * 8 + 0x436638);
    if (edx115 != 31) {
        r11d66 = 57 - (reinterpret_cast<uint32_t>(edx115) >> 1);
    }
    ecx136 = r11d66;
    rcx137 = reinterpret_cast<uint64_t>(r8_109) << *reinterpret_cast<unsigned char*>(&ecx136);
    while (r8_109 != (reinterpret_cast<uint32_t>(rsi135->f8) & 0xfffffffffffffff8)) {
        rdx138 = rcx137;
        rcx137 = rcx137 + rcx137;
        rdx139 = (rdx138 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi135) + rdx139 * 8)) 
            goto addr_403077_124;
        rsi135 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi135) + rdx139 * 8);
    }
    rdx140 = rsi135->f10;
    rdx140->f18 = rax108;
    rsi135->f10 = rax108;
    rax108->f10 = rdx140;
    rax108->f18 = rsi135;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax108) + 48) = reinterpret_cast<struct s14*>(0);
    addr_4030a5_109:
    rax41 = reinterpret_cast<struct s16*>(&r9_43->f10);
    goto addr_40330a_51;
    addr_403077_124:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi135) + rdx139 * 8) = rax108;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax108) + 48) = rsi135;
    addr_40307f_127:
    rax108->f18 = rax108;
    rax108->f10 = rax108;
    goto addr_4030a5_109;
    addr_40300c_104:
    *reinterpret_cast<struct s14**>(rdi124 * 8 + 0x436638) = rax108;
    g4363e4 = esi121 | edi123;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax108) + 48) = reinterpret_cast<struct s14*>(rdi124 * 8 + 0x436638);
    goto addr_40307f_127;
    addr_402e84_116:
    rsi130 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx107) + 40);
    r10_141 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx107) + 40);
    if (rsi130) {
        addr_402e9e_128:
        rcx142 = rsi130;
    } else {
        rsi130 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx107) + 32);
        if (!rsi130) {
            addr_402ec9_130:
            if (!rdi133) {
                addr_402f3e_113:
                rdx107 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx107) + reinterpret_cast<uint64_t>(rbx131));
                r8_109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r8_109) + reinterpret_cast<uint64_t>(rbx131));
                goto addr_402f44_100;
            } else {
                *reinterpret_cast<struct s14**>(&r10_143) = *reinterpret_cast<struct s14**>(&(rdx107 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_143) + 4) = 0;
                if (rdx107 != *reinterpret_cast<struct s14**>(r10_143 * 8 + 0x436638)) {
                    if (rdx107 != *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi133) + 32)) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi133) + 40) = rsi130;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi133) + 32) = rsi130;
                    }
                    if (rsi130) 
                        goto addr_402ef0_136;
                    goto addr_402f3e_113;
                } else {
                    *reinterpret_cast<struct s14**>((r10_143 + 74) * 8 + 0x4363e8) = rsi130;
                    if (!rsi130) {
                        __asm__("rol esi, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_402f3e_113;
                    } else {
                        addr_402ef0_136:
                        rcx144 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx107) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi130) + 48) = rdi133;
                        if (rcx144) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi130) + 32) = rcx144;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx144) + 48) = rsi130;
                            goto addr_402f2d_141;
                        }
                    }
                }
            }
        } else {
            r10_141 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx107) + 32);
            goto addr_402e9e_128;
        }
    }
    addr_402ea1_143:
    r12_145 = r10_141;
    rsi130 = rcx142;
    r10_141 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx142) + 40);
    rcx142 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx142) + 40);
    if (rcx142) 
        goto addr_402ea1_143;
    rcx142 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi130) + 32);
    r10_141 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi130) + 32);
    if (rcx142) 
        goto addr_402ea1_143;
    *reinterpret_cast<struct s14**>(&r12_145->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_402ec9_130;
    addr_402f2d_141:
    rcx146 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx107) + 40);
    if (rcx146) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi130) + 40) = rcx146;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx146) + 48) = rsi130;
        goto addr_402f3e_113;
    }
    addr_402e76_117:
    rcx147 = rdx107->f10;
    rcx147->f18 = rsi130;
    rsi130->f10 = rcx147;
    goto addr_402ec9_130;
    addr_402dc3_97:
    tmp64_148 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_109) + reinterpret_cast<uint32_t>(g4363f0));
    g436408 = rax108;
    g4363f0 = tmp64_148;
    rax108->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_148) | 1);
    goto addr_4030a5_109;
    addr_402d31_60:
    rdi78 = reinterpret_cast<struct s14*>(0x4363e0);
    *reinterpret_cast<int32_t*>(&rdi78 + 1) = 0;
    fun_401ad2(0x4363e0, rsi67, rdx69);
    goto addr_4032c5_74;
    addr_402c7b_33:
    rax149 = g4363f8;
    if (!rax149 || reinterpret_cast<uint32_t>(r9_43) < reinterpret_cast<uint32_t>(rax149)) {
        g4363f8 = r9_43;
    }
    rax150 = g4367a0;
    g436758 = r9_43;
    g436760 = r12_37;
    g436770 = 1;
    g436418 = 0x80;
    g436420 = rax150;
    *reinterpret_cast<int32_t*>(&rax151) = 0x436428;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax151) + 4) = 0;
    do {
        rax151->f18 = rax151;
        rax151->f10 = rax151;
        rax151 = reinterpret_cast<struct s22*>(&rax151->f10);
    } while (!reinterpret_cast<int1_t>(0x436628 == rax151));
    rdx69 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffb0);
    rsi67 = r9_43;
    goto addr_402d31_60;
    addr_402894_49:
    rcx152 = rdx55;
    addr_402897_151:
    r11_153 = r8_59;
    rdx55 = rcx152;
    r8_59 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx152) + 40);
    rcx152 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx152) + 40);
    if (rcx152) 
        goto addr_402897_151;
    rcx152 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx55) + 32);
    r8_59 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx55) + 32);
    if (rcx152) 
        goto addr_402897_151;
    *reinterpret_cast<struct s14**>(&r11_153->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_4028be_47;
    addr_402887_50:
    rdx55 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 32);
    if (!rdx55) {
        addr_4028be_47:
        if (!rsi56) {
            addr_40292d_154:
            if (reinterpret_cast<uint64_t>(r9_8) > 31) {
                r8_154 = reinterpret_cast<struct s23*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
                rcx155 = reinterpret_cast<uint64_t>(r9_8) >> 3;
                rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                r8_154->f8 = reinterpret_cast<uint64_t>(r9_8) | 1;
                *reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r8_154) + reinterpret_cast<uint64_t>(r9_8)) = r9_8;
                if (reinterpret_cast<uint64_t>(r9_8) > 0xff) {
                    rsi156 = reinterpret_cast<uint64_t>(r9_8) >> 8;
                    edx157 = *reinterpret_cast<uint32_t*>(&rsi156);
                    if (*reinterpret_cast<uint32_t*>(&rsi156) && (edx157 = 31, *reinterpret_cast<uint32_t*>(&rsi156) <= 0xffff)) {
                        __asm__("bsr esi, esi");
                        esi158 = *reinterpret_cast<uint32_t*>(&rsi156) ^ 31;
                        ecx159 = 38 - esi158;
                        *reinterpret_cast<uint32_t*>(&rdx160) = 31 - esi158;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx160) + 4) = 0;
                        rcx161 = reinterpret_cast<uint64_t>(r9_8) >> *reinterpret_cast<signed char*>(&ecx159);
                        *reinterpret_cast<uint32_t*>(&rcx162) = *reinterpret_cast<uint32_t*>(&rcx161) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx162) + 4) = 0;
                        edx157 = static_cast<uint32_t>(rcx162 + rdx160 * 2);
                    }
                    esi163 = g4363e4;
                    ecx164 = edx157;
                    edi165 = 1 << *reinterpret_cast<unsigned char*>(&ecx164);
                    r8_154->f38 = edx157;
                    r8_154->f28 = 0;
                    r8_154->f20 = 0;
                    *reinterpret_cast<uint32_t*>(&rdi166) = edx157;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi166) + 4) = 0;
                    if (!(esi163 & edi165)) 
                        goto addr_402a19_159;
                } else {
                    esi167 = g4363e0;
                    *reinterpret_cast<int32_t*>(&rdx168) = static_cast<int32_t>(rcx155 + rcx155);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx168) + 4) = 0;
                    edi169 = 1 << *reinterpret_cast<unsigned char*>(&rcx155);
                    rdx170 = reinterpret_cast<struct s23*>(rdx168 * 8 + 0x436428);
                    if (esi167 & edi169) {
                        rcx171 = rdx170->f10;
                    } else {
                        rcx171 = rdx170;
                        g4363e0 = esi167 | edi169;
                    }
                    rdx170->f10 = r8_154;
                    rcx171->f18 = r8_154;
                    r8_154->f10 = rcx171;
                    r8_154->f18 = rdx170;
                    goto addr_4032fd_38;
                }
            } else {
                rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r10_57) | 3);
                *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r10_57) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r10_57) + 8) | 1;
                goto addr_4032fd_38;
            }
        } else {
            *reinterpret_cast<struct s14**>(&r8_172) = *reinterpret_cast<struct s14**>(&(rax17 + 2)->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_172) + 4) = 0;
            if (*reinterpret_cast<struct s14**>(r8_172 * 8 + 0x436638) != rax17) {
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi56) + 32) != rax17) {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi56) + 40) = rdx55;
                } else {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi56) + 32) = rdx55;
                }
                if (rdx55) 
                    goto addr_4028e2_170;
                goto addr_40292d_154;
            } else {
                *reinterpret_cast<struct s14**>((r8_172 + 74) * 8 + 0x4363e8) = rdx55;
                if (!rdx55) {
                    __asm__("btr edi, r8d");
                    g4363e4 = edi6;
                    goto addr_40292d_154;
                } else {
                    addr_4028e2_170:
                    rcx173 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 32);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx55) + 48) = rsi56;
                    if (rcx173) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx55) + 32) = rcx173;
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx173) + 48) = rdx55;
                        goto addr_40291c_175;
                    }
                }
            }
        }
    } else {
        r8_59 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + 32);
        goto addr_402894_49;
    }
    ecx174 = 0;
    rsi175 = *reinterpret_cast<struct s23**>(rdi166 * 8 + 0x436638);
    if (edx157 != 31) {
        ecx174 = 57 - (edx157 >> 1);
    }
    rcx176 = reinterpret_cast<uint64_t>(r9_8) << *reinterpret_cast<unsigned char*>(&ecx174);
    while (r9_8 != (rsi175->f8 & 0xfffffffffffffff8)) {
        rdx177 = rcx176;
        rcx176 = rcx176 + rcx176;
        rdx178 = (rdx177 >> 63) + 4;
        if (!*reinterpret_cast<struct s23**>(reinterpret_cast<uint64_t>(rsi175) + rdx178 * 8)) 
            goto addr_402a81_182;
        rsi175 = *reinterpret_cast<struct s23**>(reinterpret_cast<uint64_t>(rsi175) + rdx178 * 8);
    }
    rdx179 = rsi175->f10;
    rdx179->f18 = r8_154;
    rsi175->f10 = r8_154;
    r8_154->f10 = rdx179;
    r8_154->f18 = rsi175;
    r8_154->f30 = reinterpret_cast<struct s23*>(0);
    goto addr_4032fd_38;
    addr_402a81_182:
    *reinterpret_cast<struct s23**>(reinterpret_cast<uint64_t>(rsi175) + rdx178 * 8) = r8_154;
    r8_154->f30 = rsi175;
    addr_402a89_185:
    r8_154->f18 = r8_154;
    r8_154->f10 = r8_154;
    goto addr_4032fd_38;
    addr_402a19_159:
    *reinterpret_cast<struct s23**>(rdi166 * 8 + 0x436638) = r8_154;
    g4363e4 = esi163 | edi165;
    r8_154->f30 = reinterpret_cast<struct s23*>(rdi166 * 8 + 0x436638);
    goto addr_402a89_185;
    addr_40291c_175:
    rcx180 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 40);
    if (rcx180) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx55) + 40) = rcx180;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx180) + 48) = rdx55;
        goto addr_40292d_154;
    }
    addr_402770_9:
    ecx181 = 0;
    if (esi9 != 31) {
        ecx181 = 57 - (esi9 >> 1);
    }
    *reinterpret_cast<int32_t*>(&r11_182) = 0;
    *reinterpret_cast<int32_t*>(&r11_182 + 1) = 0;
    *reinterpret_cast<int32_t*>(&r10_183) = 0;
    *reinterpret_cast<int32_t*>(&r10_183 + 1) = 0;
    rcx184 = reinterpret_cast<uint32_t>(rbx5) << *reinterpret_cast<unsigned char*>(&ecx181);
    while (1) {
        rdx185 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rax17->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rdx185) < reinterpret_cast<uint64_t>(r9_8)) {
            if (!rdx185) 
                goto addr_4027d9_191;
            r9_8 = rdx185;
            r10_183 = rax17;
        }
        rdx16 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 40);
        rax17 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + ((rcx184 >> 63) + 4) * 8);
        if (!rdx16 || rdx16 == rax17) {
            rdx16 = r11_182;
        }
        if (!rax17) 
            break;
        rcx184 = rcx184 + rcx184;
        r11_182 = rdx16;
    }
    rax17 = r10_183;
    goto addr_4027e4_15;
    addr_4027d9_191:
    rdx16 = rax17;
    *reinterpret_cast<int32_t*>(&r9_8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    goto addr_4027e4_15;
    addr_40241e_13:
    r9_186 = g4363e8;
    if (reinterpret_cast<uint32_t>(r9_186) >= reinterpret_cast<uint32_t>(rbx5)) 
        goto addr_402abb_4;
    if (!eax20) {
        edi187 = g4363e4;
        if (!edi187) 
            goto addr_402abb_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax188) = -edi187 & edi187;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax188) + 4) = 0;
        rcx189 = *reinterpret_cast<struct s14**>(rax188 * 8 + 0x436638);
        rax17 = rcx189;
        r8_190 = reinterpret_cast<struct s14*>((reinterpret_cast<uint32_t>(rcx189->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        while ((rdx191 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx189) + 32), !!rdx191) || (rdx191 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx189) + 40), !!rdx191)) {
            rcx192 = reinterpret_cast<struct s14*>((reinterpret_cast<uint32_t>(rdx191->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
            if (reinterpret_cast<uint32_t>(rcx192) < reinterpret_cast<uint32_t>(r8_190)) {
                r8_190 = rcx192;
                rax17 = rdx191;
            }
            rcx189 = rdx191;
        }
        rdx193 = rax17->f18;
        r10_194 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 48);
        r12_195 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(r8_190));
        if (rdx193 != rax17) 
            goto addr_4025a8_206;
    } else {
        *reinterpret_cast<int32_t*>(&rdi196) = 1 << *reinterpret_cast<unsigned char*>(&rcx19);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi196) + 4) = 0;
        r8d197 = static_cast<uint32_t>(rdi196 + rdi196);
        *reinterpret_cast<int32_t*>(&rcx198) = reinterpret_cast<int32_t>(-(eax20 << *reinterpret_cast<unsigned char*>(&rcx19) & (-r8d197 | r8d197)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx198) + 4) = 0;
        __asm__("bsf ecx, eax");
        *reinterpret_cast<int32_t*>(&rax199) = static_cast<int32_t>(rcx198 + rcx198);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax199) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi200) = static_cast<int32_t>(rcx198 * 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi200) + 4) = 0;
        r10_201 = reinterpret_cast<struct s14*>(rax199 * 8 + 0x436428);
        r8_202 = rdi200;
        rax17 = r10_201->f10;
        r11_203 = rax17->f10;
        if (r10_201 != r11_203) {
            r11_203->f18 = r10_201;
            r10_201->f10 = r11_203;
        } else {
            g4363e0 = esi18 & reinterpret_cast<uint32_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx198)));
        }
        rdx204 = reinterpret_cast<struct s24*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(rdi200));
        rsi205 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdi200) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint32_t>(rsi205) > reinterpret_cast<uint32_t>(31)) {
            rbx206 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(rax17));
            rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
            rbx206->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi205) | 1);
            rdx204->f0 = rsi205;
            if (r9_186) {
                r10d207 = g4363e0;
                rcx208 = reinterpret_cast<uint32_t>(r9_186) >> 3;
                rdx209 = g436400;
                *reinterpret_cast<int32_t*>(&r8_210) = static_cast<int32_t>(rcx208 + rcx208);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_210) + 4) = 0;
                r11d211 = 1 << *reinterpret_cast<unsigned char*>(&rcx208);
                r8_212 = reinterpret_cast<struct s14*>(r8_210 * 8 + 0x436428);
                if (r10d207 & r11d211) {
                    rcx213 = r8_212->f10;
                } else {
                    rcx213 = r8_212;
                    g4363e0 = r10d207 | r11d211;
                }
                r8_212->f10 = rdx209;
                rcx213->f18 = rdx209;
                rdx209->f10 = rcx213;
                rdx209->f18 = r8_212;
            }
            g4363e8 = rsi205;
            g436400 = rbx206;
            goto addr_4032fd_38;
        } else {
            *reinterpret_cast<uint32_t*>(&rbx214) = *reinterpret_cast<uint32_t*>(&r8_202) | 3;
            *reinterpret_cast<int32_t*>(&rbx214 + 1) = 0;
            rax17->f8 = rbx214;
            rdx204->f8 = rdx204->f8 | 1;
            goto addr_4032fd_38;
        }
    }
    rdx193 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 40);
    r11_215 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + 40);
    if (rdx193) {
        addr_4025d0_219:
        rcx216 = rdx193;
    } else {
        rdx193 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 32);
        if (!rdx193) {
            addr_4025fb_221:
            if (!r10_194) {
                addr_40266a_222:
                if (reinterpret_cast<uint32_t>(r8_190) > reinterpret_cast<uint32_t>(31)) {
                    r10_217 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
                    rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                    r10_217->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_190) | 1);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_217) + reinterpret_cast<uint32_t>(r8_190)) = r8_190;
                    if (r9_186) {
                        rdx218 = g436400;
                        rcx219 = reinterpret_cast<uint32_t>(r9_186) >> 3;
                        *reinterpret_cast<int32_t*>(&rdi220) = static_cast<int32_t>(rcx219 + rcx219);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi220) + 4) = 0;
                        r9d221 = 1 << *reinterpret_cast<unsigned char*>(&rcx219);
                        rdi222 = reinterpret_cast<struct s14*>(rdi220 * 8 + 0x436428);
                        if (esi18 & r9d221) {
                            rcx223 = rdi222->f10;
                        } else {
                            rcx223 = rdi222;
                            g4363e0 = esi18 | r9d221;
                        }
                        rdi222->f10 = rdx218;
                        rcx223->f18 = rdx218;
                        rdx218->f10 = rcx223;
                        rdx218->f18 = rdi222;
                    }
                    g4363e8 = r8_190;
                    g436400 = r10_217;
                    goto addr_4032fd_38;
                } else {
                    rax17->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r12_195) | 3);
                    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r12_195) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r12_195) + 8) | 1;
                    goto addr_4032fd_38;
                }
            } else {
                *reinterpret_cast<struct s14**>(&r11_224) = *reinterpret_cast<struct s14**>(&(rax17 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_224) + 4) = 0;
                if (*reinterpret_cast<struct s14**>(r11_224 * 8 + 0x436638) != rax17) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_194) + 32) != rax17) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_194) + 40) = rdx193;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_194) + 32) = rdx193;
                    }
                    if (rdx193) 
                        goto addr_40261f_235;
                    goto addr_40266a_222;
                } else {
                    *reinterpret_cast<struct s14**>((r11_224 + 74) * 8 + 0x4363e8) = rdx193;
                    if (!rdx193) {
                        __asm__("btr edi, r11d");
                        g4363e4 = edi187;
                        goto addr_40266a_222;
                    } else {
                        addr_40261f_235:
                        rcx225 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx193) + 48) = r10_194;
                        if (rcx225) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx193) + 32) = rcx225;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx225) + 48) = rdx193;
                            goto addr_402659_240;
                        }
                    }
                }
            }
        } else {
            r11_215 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) + 32);
            goto addr_4025d0_219;
        }
    }
    addr_4025d3_242:
    r13_226 = r11_215;
    rdx193 = rcx216;
    r11_215 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx216) + 40);
    rcx216 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx216) + 40);
    if (rcx216) 
        goto addr_4025d3_242;
    rcx216 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx193) + 32);
    r11_215 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx193) + 32);
    if (rcx216) 
        goto addr_4025d3_242;
    *reinterpret_cast<struct s14**>(&r13_226->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_4025fb_221;
    addr_402659_240:
    rcx227 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax17) + 40);
    if (rcx227) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx193) + 40) = rcx227;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx227) + 48) = rdx193;
        goto addr_40266a_222;
    }
    addr_4025a8_206:
    rcx228 = rax17->f10;
    rcx228->f18 = rdx193;
    rdx193->f10 = rcx228;
    goto addr_4025fb_221;
    addr_4023cd_14:
    *reinterpret_cast<uint32_t*>(&rcx229) = *reinterpret_cast<int32_t*>(&rcx19) + (~eax20 & 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx229) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax230) = static_cast<int32_t>(rcx229 + rcx229);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax230) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_231) = static_cast<int32_t>(rcx229 * 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_231) + 4) = 0;
    rdi232 = reinterpret_cast<struct s14*>(rax230 * 8 + 0x436428);
    rdx233 = r9_231;
    rax17 = rdi232->f10;
    r8_234 = rax17->f10;
    if (rdi232 != r8_234) {
        r8_234->f18 = rdi232;
        rdi232->f10 = r8_234;
    } else {
        __asm__("btr esi, ecx");
        g4363e0 = esi18;
    }
    *reinterpret_cast<uint32_t*>(&rbx235) = *reinterpret_cast<uint32_t*>(&rdx233) | 3;
    *reinterpret_cast<int32_t*>(&rbx235 + 1) = 0;
    rax17->f8 = rbx235;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r9_231) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r9_231) + 8) | 1;
    goto addr_4032fd_38;
}

void fun_404562(struct s16* rdi) {
    uint64_t rcx2;
    uint64_t rdx3;
    uint64_t rdx4;

    __asm__("movd xmm3, esi");
    *reinterpret_cast<int32_t*>(&rcx2) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    if (rdx3 < 32) {
        rcx2 = rdx4;
    }
    goto *reinterpret_cast<int64_t*>(0x4361a0 + rcx2 * 8);
}

struct s14* fun_401556(struct s14* rdi, struct s14* rsi) {
    uint32_t eax3;

    eax3 = g436340;
    g437fb0 = eax3;
    return 0xff;
}

struct s14* g436410 = reinterpret_cast<struct s14*>(0);

struct s14* fun_403312(struct s14* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx) {
    struct s14* rax5;
    struct s14* rdi6;
    struct s14* v7;
    uint64_t rcx8;
    struct s14* rax9;
    struct s14* rsi10;
    struct s14* rbx11;
    uint32_t eax12;
    int1_t zf13;
    struct s14* rcx14;
    int64_t rcx15;
    struct s14* rdx16;
    struct s14* rdx17;
    struct s14* r8_18;
    struct s14* r8_19;
    struct s14* rcx20;
    struct s14* r9_21;
    struct s14* rcx22;
    struct s14* r8_23;
    int1_t zf24;
    struct s14* r10_25;
    struct s14* tmp64_26;
    void* r8_27;
    struct s14* rdx28;
    struct s14* tmp64_29;
    int1_t below_or_equal30;
    struct s14* rcx31;
    struct s14* rax32;
    struct s14* rdx33;
    struct s14* rsi34;
    struct s14* r13_35;
    struct s14* rdi36;
    struct s14* rcx37;
    struct s14* r10_38;
    uint64_t rcx39;
    uint32_t edx40;
    int64_t rax41;
    uint32_t esi42;
    struct s14* rax43;
    struct s14* rdx44;
    uint64_t rsi45;
    struct s14* edx46;
    uint32_t esi47;
    uint32_t ecx48;
    int64_t rdx49;
    uint64_t rcx50;
    int64_t rcx51;
    uint32_t esi52;
    struct s14* ecx53;
    uint32_t r8d54;
    int64_t r8_55;
    uint32_t ecx56;
    struct s14* rsi57;
    uint64_t rcx58;
    uint64_t rdx59;
    uint64_t rdx60;
    struct s14* rax61;
    int1_t zf62;
    struct s14* r14_63;
    struct s16* rax64;
    uint32_t r13d65;
    uint32_t r13d66;
    struct s14* rdi67;
    struct s14* rdx68;
    void* rdx69;
    int64_t rbx70;
    void* rbx71;
    struct s14* rbx72;
    struct s14* rdx73;
    int64_t rdx74;
    void* r15_75;
    struct s14* rdx76;
    int1_t zf77;
    struct s16* r8_78;
    struct s14* rax79;
    struct s14* rsi80;
    struct s14* rcx81;
    uint32_t eax82;
    uint64_t rdx83;
    struct s14* eax84;
    uint32_t edx85;
    uint32_t ecx86;
    int64_t rax87;
    uint64_t rcx88;
    int64_t rcx89;
    uint32_t edx90;
    struct s14* ecx91;
    uint32_t esi92;
    int64_t rsi93;
    int64_t rdx94;
    struct s14* rdx95;
    struct s14* r9_96;
    struct s14* rdx97;
    uint32_t ecx98;
    uint64_t rcx99;
    uint64_t rax100;
    uint64_t rax101;
    struct s14* rax102;
    struct s14* r8_103;
    struct s14* rcx104;
    struct s14* r9_105;
    struct s14* rcx106;
    int64_t r9_107;
    struct s14* rcx108;
    struct s14* r11_109;
    struct s14* rcx110;
    struct s14* rsi111;
    struct s14* eax112;
    void* r10_113;
    uint64_t rax114;
    struct s14* rbx115;
    struct s14* r14_116;
    struct s14* rax117;
    struct s14* rdi118;
    uint32_t eax119;
    struct s14* rdx120;
    struct s14* rax121;
    void* rbx122;
    struct s14* rax123;
    int1_t below_or_equal124;
    struct s14* rax125;
    struct s14* rcx126;

    if (!rdi) {
        return rax5;
    }
    rdi6 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0);
    v7 = rsi;
    rcx8 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff8);
    rax9 = reinterpret_cast<struct s14*>(rcx8 & 0xfffffffffffffff8);
    rsi10 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rax9));
    if (*reinterpret_cast<unsigned char*>(&rcx8) & 1) 
        goto addr_4034c1_4;
    rdi6 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) - reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)));
    if (!(*reinterpret_cast<unsigned char*>(&rcx8) & 3)) {
        rbx11 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)) + 32);
        eax12 = fun_403d56(rdi6, rbx11, rdi);
        if (!eax12) {
            g436738 = g436738 - reinterpret_cast<uint32_t>(rbx11);
            goto addr_403812_8;
        }
    }
    rax9 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)));
    zf13 = g436400 == rdi6;
    if (!zf13) 
        goto addr_40337d_10;
    rcx14 = rsi10->f8;
    *reinterpret_cast<uint32_t*>(&rcx15) = *reinterpret_cast<uint32_t*>(&rcx14) & 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
    if (rcx15 == 3) {
        rdx16 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi10->f8) & 0xfffffffffffffffe);
        g4363e8 = rax9;
        rsi10->f8 = rdx16;
        rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) | 1);
        *reinterpret_cast<struct s14**>(&rsi10->f0) = rax9;
        goto addr_403812_8;
    }
    addr_40337d_10:
    rdx17 = rdi6->f18;
    if (reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)) <= 0xff) {
        r8_18 = rdi6->f10;
        if (r8_18 != rdx17) {
            r8_18->f18 = rdx17;
            rdx17->f10 = r8_18;
            goto addr_4034c1_4;
        } else {
            __asm__("rol edx, cl");
            g4363e0 = g4363e0 & 0xfffffffe;
            goto addr_4034c1_4;
        }
    }
    r8_19 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48);
    if (rdi6 != rdx17) {
        rcx20 = rdi6->f10;
        rcx20->f18 = rdx17;
        rdx17->f10 = rcx20;
        goto addr_403414_18;
    }
    rdx17 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    r9_21 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rdx17) {
        addr_4033ea_20:
        rcx22 = rdx17;
    } else {
        rdx17 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 32);
        if (!rdx17) {
            addr_403414_18:
            if (!r8_19) {
                addr_4034c1_4:
                r8_23 = rsi10->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_23) & 2) {
                    rsi10->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_23) & 0xfffffffffffffffe);
                    rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) | 1);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rax9)) = rax9;
                    goto addr_4036ae_23;
                } else {
                    zf24 = g436408 == rsi10;
                    r10_25 = g436400;
                    if (!zf24) {
                        if (rsi10 == r10_25) {
                            tmp64_26 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint32_t>(g4363e8));
                            g436400 = rdi6;
                            g4363e8 = tmp64_26;
                            rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_26) | 1);
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(tmp64_26)) = tmp64_26;
                            goto addr_403812_8;
                        }
                        r8_27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_23) & 0xfffffffffffffff8);
                        rdx28 = rsi10->f18;
                        rax9 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint64_t>(r8_27));
                        if (reinterpret_cast<uint64_t>(r8_27) > 0xf8) 
                            goto addr_4035a7_28; else 
                            goto addr_40357f_29;
                    } else {
                        tmp64_29 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint32_t>(g4363f0));
                        g436408 = rdi6;
                        g4363f0 = tmp64_29;
                        rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_29) | 1);
                        if (rdi6 == r10_25) {
                            g436400 = reinterpret_cast<struct s14*>(0);
                            g4363e8 = reinterpret_cast<struct s14*>(0);
                        }
                        below_or_equal30 = reinterpret_cast<uint32_t>(tmp64_29) <= reinterpret_cast<uint32_t>(g436410);
                        if (below_or_equal30) 
                            goto addr_403812_8;
                        rcx31 = v7;
                        if (!1) 
                            goto addr_401dea_35;
                        rax32 = g436408;
                        if (!rax32) 
                            goto addr_401dea_35;
                        rdx33 = g4363f0;
                        rsi34 = reinterpret_cast<struct s14*>(80);
                        if (reinterpret_cast<uint32_t>(rdx33) <= reinterpret_cast<uint32_t>(80)) 
                            goto addr_401e0a_38;
                        rcx31 = reinterpret_cast<struct s14*>(0x436758);
                        r13_35 = reinterpret_cast<struct s14*>(0x436758);
                        do {
                            rdi36 = *reinterpret_cast<struct s14**>(&r13_35->f0);
                            if (reinterpret_cast<uint32_t>(rax32) < reinterpret_cast<uint32_t>(rdi36)) 
                                continue;
                            r9_21 = r13_35->f8;
                            r8_23 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi36) + reinterpret_cast<uint32_t>(r9_21));
                            if (reinterpret_cast<uint32_t>(rax32) < reinterpret_cast<uint32_t>(r8_23)) 
                                goto addr_401e43_42;
                            r13_35 = r13_35->f10;
                        } while (r13_35);
                        goto addr_401e3a_44;
                    }
                }
            } else {
                r9_21 = *reinterpret_cast<struct s14**>(&(rdi6 + 2)->f0);
                *reinterpret_cast<int32_t*>(&r9_21 + 1) = 0;
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_21) * 8 + 0x436638) != rdi6) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_19) + 32) != rdi6) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_19) + 40) = rdx17;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_19) + 32) = rdx17;
                    }
                    if (rdx17) 
                        goto addr_40343f_50;
                    goto addr_4034c1_4;
                } else {
                    *reinterpret_cast<struct s14**>((reinterpret_cast<uint32_t>(r9_21) + 74) * 8 + 0x4363e8) = rdx17;
                    if (!rdx17) {
                        __asm__("rol edx, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_4034c1_4;
                    } else {
                        addr_40343f_50:
                        rcx37 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx17) + 48) = r8_19;
                        if (rcx37) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx17) + 32) = rcx37;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx37) + 48) = rdx17;
                            goto addr_40347c_55;
                        }
                    }
                }
            }
        } else {
            r9_21 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) + 32);
            goto addr_4033ea_20;
        }
    }
    addr_4033ed_57:
    r10_38 = r9_21;
    rdx17 = rcx22;
    r9_21 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx22) + 40);
    rcx22 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx22) + 40);
    if (rcx22) 
        goto addr_4033ed_57;
    rcx22 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx17) + 32);
    r9_21 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx17) + 32);
    if (rcx22) 
        goto addr_4033ed_57;
    *reinterpret_cast<struct s14**>(&r10_38->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_403414_18;
    addr_4036ae_23:
    rcx39 = reinterpret_cast<uint32_t>(rax9) >> 3;
    if (reinterpret_cast<uint32_t>(rax9) <= reinterpret_cast<uint32_t>(0xff)) {
        edx40 = g4363e0;
        *reinterpret_cast<int32_t*>(&rax41) = static_cast<int32_t>(rcx39 + rcx39);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
        esi42 = 1 << *reinterpret_cast<unsigned char*>(&rcx39);
        rax43 = reinterpret_cast<struct s14*>(rax41 * 8 + 0x436428);
        if (edx40 & esi42) {
            rdx44 = rax43->f10;
        } else {
            g4363e0 = edx40 | esi42;
            rdx44 = rax43;
        }
        rax43->f10 = rdi6;
        rdx44->f18 = rdi6;
        rdi6->f10 = rdx44;
        rdi6->f18 = rax43;
        goto addr_403812_8;
    }
    rsi45 = reinterpret_cast<uint32_t>(rax9) >> 8;
    edx46 = *reinterpret_cast<struct s14**>(&rsi45);
    if (*reinterpret_cast<struct s14**>(&rsi45) && (edx46 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi45)) <= 0xffff)) {
        __asm__("bsr esi, esi");
        esi47 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi45)) ^ 31;
        ecx48 = 38 - esi47;
        *reinterpret_cast<void**>(&rdx49) = reinterpret_cast<void*>(31 - esi47);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = 0;
        rcx50 = reinterpret_cast<uint32_t>(rax9) >> *reinterpret_cast<signed char*>(&ecx48);
        *reinterpret_cast<uint32_t*>(&rcx51) = *reinterpret_cast<uint32_t*>(&rcx50) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = 0;
        edx46 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx51 + rdx49 * 2));
    }
    esi52 = g4363e4;
    ecx53 = edx46;
    r8d54 = 1 << *reinterpret_cast<unsigned char*>(&ecx53);
    *reinterpret_cast<struct s14**>(&(rdi6 + 2)->f0) = edx46;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 40) = reinterpret_cast<struct s14*>(0);
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 32) = reinterpret_cast<struct s14*>(0);
    *reinterpret_cast<struct s14**>(&r8_55) = edx46;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = 0;
    if (!(esi52 & r8d54)) 
        goto addr_403766_67;
    ecx56 = 0;
    rsi57 = *reinterpret_cast<struct s14**>(r8_55 * 8 + 0x436638);
    if (edx46 != 31) {
        ecx56 = 57 - (reinterpret_cast<uint32_t>(edx46) >> 1);
    }
    rcx58 = reinterpret_cast<uint32_t>(rax9) << *reinterpret_cast<unsigned char*>(&ecx56);
    while ((reinterpret_cast<uint32_t>(rsi57->f8) & 0xfffffffffffffff8) != rax9) {
        rdx59 = rcx58;
        rcx58 = rcx58 + rcx58;
        rdx60 = (rdx59 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi57) + rdx60 * 8)) 
            goto addr_4037ce_73;
        rsi57 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi57) + rdx60 * 8);
    }
    rax61 = rsi57->f10;
    rax61->f18 = rdi6;
    rsi57->f10 = rdi6;
    rdi6->f10 = rax61;
    rdi6->f18 = rsi57;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48) = reinterpret_cast<struct s14*>(0);
    addr_4037fc_76:
    --g436418;
    zf62 = g436418 == 0;
    if (!zf62) {
        addr_403812_8:
        return v7;
    } else {
        *reinterpret_cast<int32_t*>(&r14_63) = 0;
        *reinterpret_cast<int32_t*>(&r14_63 + 1) = 0;
        rax64 = g436768;
        if (!rax64) 
            goto addr_401dbb_79;
        r13d65 = rax64->f18;
        if (!(*reinterpret_cast<unsigned char*>(&r13d65) & 1)) 
            goto addr_401dbb_79;
        r13d66 = r13d65 & 8;
        if (r13d66) 
            goto addr_401dbb_79;
        rdi67 = rax64->f0;
        rdx68 = rdi67;
        *reinterpret_cast<uint32_t*>(&rdx69) = *reinterpret_cast<uint32_t*>(&rdx68) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx69)) {
            rbx70 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rdi67->f10));
            *reinterpret_cast<uint32_t*>(&rbx71) = *reinterpret_cast<uint32_t*>(&rbx70) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx71) + 4) = 0;
            rdx69 = rbx71;
        }
        rbx72 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi67) + reinterpret_cast<uint64_t>(rdx69));
        *reinterpret_cast<int32_t*>(&r14_63) = 0;
        *reinterpret_cast<int32_t*>(&r14_63 + 1) = 0;
        rdx73 = rbx72->f8;
        *reinterpret_cast<uint32_t*>(&rdx74) = *reinterpret_cast<uint32_t*>(&rdx73) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx74) + 4) = 0;
        if (rdx74 - 1) {
            addr_401dbb_79:
            g436418 = 0x80;
            return r14_63;
        } else {
            r14_63 = rax64->f8;
            r15_75 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx72->f8) & 0xfffffffffffffff8);
            rdx76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi67) + reinterpret_cast<uint32_t>(r14_63) + 0xffffffffffffffb0);
            if (reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rbx72) + reinterpret_cast<uint64_t>(r15_75)) < reinterpret_cast<uint32_t>(rdx76)) {
                addr_401db8_86:
                *reinterpret_cast<int32_t*>(&r14_63) = 0;
                *reinterpret_cast<int32_t*>(&r14_63 + 1) = 0;
                goto addr_401dbb_79;
            } else {
                zf77 = g436400 == rbx72;
                r8_78 = rax64->f10;
                if (zf77) {
                    g436400 = reinterpret_cast<struct s14*>(0);
                    g4363e8 = reinterpret_cast<struct s14*>(0);
                    goto addr_401c96_89;
                }
                rax79 = rbx72->f18;
                rsi80 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48);
                if (rax79 != rbx72) 
                    goto addr_401bd3_91;
            }
        }
    }
    rax79 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax79) + 40);
    rcx81 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rax79) {
        addr_401bfb_93:
        rdx76 = rax79;
    } else {
        rax79 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 32);
        if (!rax79) {
            addr_401c25_95:
            if (!rsi80) {
                addr_401c96_89:
                eax82 = fun_403d56(rdi67, r14_63, rdx76, rdi67, r14_63, rdx76);
                if (eax82) {
                    rdx83 = reinterpret_cast<uint64_t>(r15_75) >> 8;
                    eax84 = *reinterpret_cast<struct s14**>(&rdx83);
                    if (*reinterpret_cast<struct s14**>(&rdx83) && (eax84 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx83)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx85 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx83)) ^ 31;
                        ecx86 = 38 - edx85;
                        *reinterpret_cast<void**>(&rax87) = reinterpret_cast<void*>(31 - edx85);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
                        rcx88 = reinterpret_cast<uint64_t>(r15_75) >> *reinterpret_cast<signed char*>(&ecx86);
                        *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rcx88) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
                        eax84 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx89 + rax87 * 2));
                    }
                    edx90 = g4363e4;
                    ecx91 = eax84;
                    esi92 = 1 << *reinterpret_cast<unsigned char*>(&ecx91);
                    *reinterpret_cast<struct s14**>(&(rbx72 + 2)->f0) = eax84;
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 40) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 32) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(&rsi93) = eax84;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi93) + 4) = 0;
                    if (edx90 & esi92) 
                        goto addr_401d3d_99; else 
                        goto addr_401d20_100;
                } else {
                    g436738 = g436738 - reinterpret_cast<uint32_t>(r14_63);
                    g436768 = r8_78;
                    goto addr_401dbb_79;
                }
            } else {
                *reinterpret_cast<struct s14**>(&rdx94) = *reinterpret_cast<struct s14**>(&(rbx72 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx94) + 4) = 0;
                rdx76 = reinterpret_cast<struct s14*>(0x4363e0 + rdx94 * 8);
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx76) + 0x258) != rbx72) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi80) + 32) != rbx72) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi80) + 40) = rax79;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi80) + 32) = rax79;
                    }
                    if (rax79) 
                        goto addr_401c49_107;
                    goto addr_401c96_89;
                } else {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx76) + 0x258) = rax79;
                    if (!rax79) {
                        __asm__("rol eax, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_401c96_89;
                    } else {
                        addr_401c49_107:
                        rdx95 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax79) + 48) = rsi80;
                        if (rdx95) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax79) + 32) = rdx95;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx95) + 48) = rax79;
                            goto addr_401c85_112;
                        }
                    }
                }
            }
        } else {
            rcx81 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx72) + 32);
            goto addr_401bfb_93;
        }
    }
    addr_401bfe_114:
    r9_96 = rcx81;
    rax79 = rdx76;
    rcx81 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx76) + 40);
    rdx76 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx76) + 40);
    if (rdx76) 
        goto addr_401bfe_114;
    rdx76 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax79) + 32);
    rcx81 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax79) + 32);
    if (rdx76) 
        goto addr_401bfe_114;
    *reinterpret_cast<struct s14**>(&r9_96->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_401c25_95;
    addr_401d3d_99:
    rdx97 = *reinterpret_cast<struct s14**>(0x4363e0 + rsi93 * 8 + 0x258);
    if (eax84 != 31) {
        r13d66 = 57 - (reinterpret_cast<uint32_t>(eax84) >> 1);
    }
    ecx98 = r13d66;
    rcx99 = reinterpret_cast<uint64_t>(r15_75) << *reinterpret_cast<unsigned char*>(&ecx98);
    while ((reinterpret_cast<uint32_t>(rdx97->f8) & 0xfffffffffffffff8) != r15_75) {
        rax100 = rcx99;
        rcx99 = rcx99 + rcx99;
        rax101 = (rax100 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8)) 
            goto addr_401d8a_121;
        rdx97 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8);
    }
    rax102 = rdx97->f10;
    rax102->f18 = rbx72;
    rdx97->f10 = rbx72;
    rbx72->f10 = rax102;
    rbx72->f18 = rdx97;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48) = reinterpret_cast<struct s14*>(0);
    goto addr_401db8_86;
    addr_401d8a_121:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8) = rbx72;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48) = rdx97;
    addr_401d92_124:
    rbx72->f18 = rbx72;
    rbx72->f10 = rbx72;
    goto addr_401db8_86;
    addr_401d20_100:
    g4363e4 = edx90 | esi92;
    *reinterpret_cast<struct s14**>(0x4363e0 + rsi93 * 8 + 0x258) = rbx72;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48) = reinterpret_cast<struct s14*>(0x4363e0 + rsi93 * 8 + 0x258);
    goto addr_401d92_124;
    addr_401c85_112:
    rdx76 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rdx76) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax79) + 40) = rdx76;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx76) + 48) = rax79;
        goto addr_401c96_89;
    }
    addr_401bd3_91:
    rdx76 = rbx72->f10;
    rdx76->f18 = rax79;
    rax79->f10 = rdx76;
    goto addr_401c25_95;
    addr_4037ce_73:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi57) + rdx60 * 8) = rdi6;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48) = rsi57;
    addr_4037d6_126:
    rdi6->f18 = rdi6;
    rdi6->f10 = rdi6;
    goto addr_4037fc_76;
    addr_403766_67:
    *reinterpret_cast<struct s14**>(r8_55 * 8 + 0x436638) = rdi6;
    g4363e4 = esi52 | r8d54;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48) = reinterpret_cast<struct s14*>(r8_55 * 8 + 0x436638);
    goto addr_4037d6_126;
    addr_4035a7_28:
    r8_103 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi10) + 48);
    if (rsi10 != rdx28) {
        rcx104 = rsi10->f10;
        rcx104->f18 = rdx28;
        rdx28->f10 = rcx104;
        goto addr_403602_128;
    }
    rdx28 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi10) + 40);
    r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi10) + 40);
    if (rdx28) {
        addr_4035d8_130:
        rcx106 = rdx28;
    } else {
        rdx28 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi10) + 32);
        if (!rdx28) {
            addr_403602_128:
            if (!r8_103) {
                addr_403677_132:
                rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) | 1);
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rax9)) = rax9;
                if (rdi6 == r10_25) {
                    g4363e8 = rax9;
                    goto addr_403812_8;
                }
            } else {
                *reinterpret_cast<struct s14**>(&r9_107) = *reinterpret_cast<struct s14**>(&(rsi10 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_107) + 4) = 0;
                if (*reinterpret_cast<struct s14**>(r9_107 * 8 + 0x436638) != rsi10) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_103) + 32) != rsi10) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_103) + 40) = rdx28;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_103) + 32) = rdx28;
                    }
                    if (rdx28) 
                        goto addr_403629_139;
                    goto addr_403677_132;
                } else {
                    *reinterpret_cast<struct s14**>((r9_107 + 74) * 8 + 0x4363e8) = rdx28;
                    if (!rdx28) {
                        __asm__("rol edx, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_403677_132;
                    } else {
                        addr_403629_139:
                        rcx108 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi10) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx28) + 48) = r8_103;
                        if (rcx108) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx28) + 32) = rcx108;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx108) + 48) = rdx28;
                            goto addr_403666_144;
                        }
                    }
                }
            }
        } else {
            r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi10) + 32);
            goto addr_4035d8_130;
        }
    }
    addr_4035db_146:
    r11_109 = r9_105;
    rdx28 = rcx106;
    r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx106) + 40);
    rcx106 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx106) + 40);
    if (rcx106) 
        goto addr_4035db_146;
    rcx106 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx28) + 32);
    r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx28) + 32);
    if (rcx106) 
        goto addr_4035db_146;
    *reinterpret_cast<struct s14**>(&r11_109->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_403602_128;
    addr_403666_144:
    rcx110 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi10) + 40);
    if (rcx110) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx28) + 40) = rcx110;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx110) + 48) = rdx28;
        goto addr_403677_132;
    }
    addr_40357f_29:
    rsi111 = rsi10->f10;
    if (rsi111 != rdx28) {
        rsi111->f18 = rdx28;
        rdx28->f10 = rsi111;
        goto addr_403677_132;
    } else {
        __asm__("rol edx, cl");
        g4363e0 = g4363e0 & 0xfffffffe;
        goto addr_403677_132;
    }
    addr_401e43_42:
    eax112 = r13_35->f18;
    if (*reinterpret_cast<unsigned char*>(&eax112) & 8) 
        goto addr_401e0a_38;
    if (!(*reinterpret_cast<unsigned char*>(&eax112) & 1)) 
        goto addr_401e0a_38;
    r10_113 = g4367b0;
    rax114 = reinterpret_cast<uint32_t>(rdx33) + reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff - reinterpret_cast<uint32_t>(80);
    rdx33 = reinterpret_cast<struct s14*>(rax114 % reinterpret_cast<uint64_t>(r10_113));
    rbx115 = reinterpret_cast<struct s14*>((rax114 / reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff) * reinterpret_cast<uint64_t>(r10_113));
    if (reinterpret_cast<uint32_t>(rbx115) > reinterpret_cast<uint32_t>(r9_21)) 
        goto addr_401e0a_38;
    do {
        if (reinterpret_cast<uint32_t>(rdi36) > reinterpret_cast<uint32_t>(rcx31)) 
            continue;
        if (reinterpret_cast<uint32_t>(r8_23) > reinterpret_cast<uint32_t>(rcx31)) 
            goto addr_401e0a_38;
        rcx31 = rcx31->f10;
    } while (rcx31);
    *reinterpret_cast<int32_t*>(&rcx31) = 0;
    *reinterpret_cast<int32_t*>(&rcx31 + 1) = 0;
    r14_116 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_21) - reinterpret_cast<uint32_t>(rbx115));
    rsi34 = r9_21;
    rdx33 = r14_116;
    rax117 = fun_404008();
    if (reinterpret_cast<uint32_t>(rax117) + 1 || (rsi34 = rbx115, rdi118 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&r13_35->f0)) + reinterpret_cast<uint32_t>(r14_116)), eax119 = fun_403d56(rdi118, rsi34, rdx33), !eax119)) {
        if (rbx115) {
            r13_35->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r13_35->f8) - reinterpret_cast<uint32_t>(rbx115));
            rdx120 = g4363f0;
            g436738 = g436738 - reinterpret_cast<uint32_t>(rbx115);
            rsi34 = g436408;
            rdx33 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx120) - reinterpret_cast<uint32_t>(rbx115));
            fun_401ad2(0x4363e0, rsi34, rdx33);
        }
    } else {
        addr_401e0a_38:
        *reinterpret_cast<int32_t*>(&rbx115) = 0;
        *reinterpret_cast<int32_t*>(&rbx115 + 1) = 0;
    }
    rax121 = fun_401b19(0x4363e0, rsi34, rdx33, rcx31);
    rbx122 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx115) + reinterpret_cast<uint32_t>(rax121));
    if (!rbx122) {
        rax123 = g436410;
        below_or_equal124 = reinterpret_cast<uint32_t>(g4363f0) <= reinterpret_cast<uint32_t>(rax123);
        if (below_or_equal124) {
            addr_401dea_35:
            *reinterpret_cast<int32_t*>(&rbx122) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx122) + 4) = 0;
        } else {
            g436410 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
        }
    }
    *reinterpret_cast<int32_t*>(&rax125) = 0;
    *reinterpret_cast<int32_t*>(&rax125 + 1) = 0;
    *reinterpret_cast<unsigned char*>(&rax125) = reinterpret_cast<uint1_t>(!!rbx122);
    return rax125;
    addr_401e3a_44:
    __asm__("ud2 ");
    goto addr_401e43_42;
    addr_40347c_55:
    rcx126 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rcx126) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx17) + 40) = rcx126;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx126) + 48) = rdx17;
        goto addr_4034c1_4;
    }
}

struct s25 {
    uint32_t f0;
    uint32_t f4;
    struct s14* f8;
    signed char[4] pad16;
    void* f10;
    struct s14* f18;
    signed char[4] pad32;
    struct s14* f20;
    signed char[4] pad40;
    struct s14* f28;
    signed char[812] pad856;
    uint64_t f358;
    uint64_t f360;
};

struct s26 {
    struct s14* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s27 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s28 {
    uint32_t f0;
    signed char[596] pad600;
    struct s14* f258;
};

void fun_401f12(struct s25* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx);

struct s13* fun_403873(struct s25* rdi, struct s13* rsi, void* rdx, struct s14* rcx, int64_t r8) {
    struct s13* r13_6;
    struct s25* r12_7;
    void* rdi8;
    void* rsi9;
    void* rdx10;
    void* rax11;
    void* r14_12;
    void* rbx13;
    struct s14* rax14;
    void* rdx15;
    int1_t cf16;
    uint64_t rbx17;
    int1_t below_or_equal18;
    struct s14* r9_19;
    struct s14* r10_20;
    void* r10_21;
    void* r8_22;
    struct s14* rax23;
    struct s14* r11_24;
    struct s14* rdx25;
    struct s14* r10_26;
    void* rcx27;
    uint64_t rsi28;
    struct s26* rax29;
    struct s14* r8_30;
    struct s14* rcx31;
    void* rdx32;
    uint64_t rsi33;
    void* r9_34;
    struct s14* rax35;
    struct s14* rdx36;
    uint64_t rsi37;
    struct s14* r8_38;
    struct s14* rsi39;
    struct s14* rdx40;
    uint64_t rsi41;
    struct s27* rax42;
    struct s14* rdx43;
    struct s28* rdx44;
    struct s14* rdx45;
    struct s14* rbx46;
    struct s14* rdx47;
    struct s14* rdx48;

    r13_6 = rsi;
    r12_7 = rdi;
    rdi8 = rdx;
    rsi9 = rsi->f8;
    rdx10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi9) & 0xfffffffffffffff8);
    if (!(*reinterpret_cast<unsigned char*>(&rsi9) & 3)) {
        if (reinterpret_cast<uint64_t>(rdi8) <= 0xff) 
            goto addr_4038a9_3;
        rax11 = g4367b0;
        if (reinterpret_cast<uint64_t>(rdx10) < reinterpret_cast<uint64_t>(rdi8) + 8) 
            goto addr_4038d4_5;
        if (reinterpret_cast<uint64_t>(rdx10) - reinterpret_cast<uint64_t>(rdi8) <= reinterpret_cast<uint64_t>(rax11) + reinterpret_cast<uint64_t>(rax11)) 
            goto addr_403bf3_7;
        addr_4038d4_5:
        r14_12 = r13_6->f0;
        rbx13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax11) + reinterpret_cast<uint64_t>(rdi8) + 62 & -reinterpret_cast<uint64_t>(rax11));
        rax14 = fun_404008();
        if (rax14 == 0xffffffffffffffff) 
            goto addr_4038a9_3;
        r13_6 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax14) + reinterpret_cast<uint64_t>(r14_12));
        rdx15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx13) - reinterpret_cast<uint64_t>(r14_12));
        cf16 = reinterpret_cast<uint32_t>(rax14) < reinterpret_cast<uint32_t>(r12_7->f18);
        r13_6->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx15) - 32);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdx15) - 24) = 11;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdx15) - 16) = 0;
        if (cf16) {
            r12_7->f18 = rax14;
        }
        rbx17 = reinterpret_cast<uint64_t>(rbx13) + r12_7->f358 - (reinterpret_cast<uint64_t>(rdx10) + reinterpret_cast<uint64_t>(r14_12) + 32);
        below_or_equal18 = rbx17 <= r12_7->f360;
        r12_7->f358 = rbx17;
        if (!below_or_equal18) {
            r12_7->f360 = rbx17;
            goto addr_403bf3_7;
        }
    }
    r9_19 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdx10));
    if (reinterpret_cast<uint64_t>(rdx10) < reinterpret_cast<uint64_t>(rdi8)) {
        if (r12_7->f28 != r9_19) {
            if (r12_7->f20 != r9_19) {
                r10_20 = r9_19->f8;
                if (*reinterpret_cast<unsigned char*>(&r10_20) & 2 || (r10_21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r10_20) & 0xfffffffffffffff8), r8_22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx10) + reinterpret_cast<uint64_t>(r10_21)), reinterpret_cast<uint64_t>(r8_22) < reinterpret_cast<uint64_t>(rdi8))) {
                    addr_4038a9_3:
                    *reinterpret_cast<int32_t*>(&r13_6) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = 0;
                    goto addr_403bf3_7;
                } else {
                    rax23 = r9_19->f18;
                    r11_24 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_22) - reinterpret_cast<uint64_t>(rdi8));
                    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r10_21) >> 3);
                    if (reinterpret_cast<uint64_t>(r10_21) <= 0xf8) {
                        rdx25 = r9_19->f10;
                        if (rdx25 != rax23) {
                            rdx25->f18 = rax23;
                            rax23->f10 = rdx25;
                            goto addr_403ba5_19;
                        } else {
                            __asm__("rol eax, cl");
                            r12_7->f0 = r12_7->f0 & 0xfffffffe;
                            goto addr_403ba5_19;
                        }
                    }
                    r10_26 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_19) + 48);
                    if (r9_19 != rax23) 
                        goto addr_403ae1_22;
                }
            } else {
                rcx27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12_7->f8) + reinterpret_cast<uint64_t>(rdx10));
                if (reinterpret_cast<uint64_t>(rcx27) < reinterpret_cast<uint64_t>(rdi8)) 
                    goto addr_4038a9_3;
                *reinterpret_cast<uint32_t*>(&rsi28) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = 0;
                rax29 = reinterpret_cast<struct s26*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rcx27));
                r8_30 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rcx27) - reinterpret_cast<uint64_t>(rdi8));
                if (reinterpret_cast<uint32_t>(r8_30) <= reinterpret_cast<uint32_t>(31)) {
                    r13_6->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx27) | rsi28 | 2);
                    rax29->f8 = rax29->f8 | 1;
                    r12_7->f8 = reinterpret_cast<struct s14*>(0);
                    r12_7->f20 = reinterpret_cast<struct s14*>(0);
                    goto addr_403bf3_7;
                } else {
                    rcx31 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
                    r13_6->f8 = reinterpret_cast<void*>(rsi28 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    rcx31->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_30) | 1);
                    rax29->f0 = r8_30;
                    rax29->f8 = rax29->f8 & 0xfffffffffffffffe;
                    r12_7->f8 = r8_30;
                    r12_7->f20 = rcx31;
                    goto addr_403bf3_7;
                }
            }
        } else {
            rdx32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx10) + reinterpret_cast<uint64_t>(r12_7->f10));
            if (reinterpret_cast<uint64_t>(rdx32) <= reinterpret_cast<uint64_t>(rdi8)) 
                goto addr_4038a9_3;
            *reinterpret_cast<uint32_t*>(&rsi33) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
            r9_34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx32) - reinterpret_cast<uint64_t>(rdi8));
            rax35 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
            r13_6->f8 = reinterpret_cast<void*>(rsi33 | reinterpret_cast<uint64_t>(rdi8) | 2);
            rax35->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r9_34) | 1);
            r12_7->f28 = rax35;
            r12_7->f10 = r9_34;
            goto addr_403bf3_7;
        }
    } else {
        rdx36 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdx10) - reinterpret_cast<uint64_t>(rdi8));
        if (reinterpret_cast<uint32_t>(rdx36) <= reinterpret_cast<uint32_t>(31)) {
            addr_403bf3_7:
            return r13_6;
        } else {
            *reinterpret_cast<uint32_t*>(&rsi37) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = 0;
            r8_38 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
            rsi39 = r8_38;
            r13_6->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi8) | rsi37 | 2);
            r8_38->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx36) | 3);
            r9_19->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_19->f8) | 1);
            goto addr_403beb_31;
        }
    }
    rax23 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_19) + 40);
    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_19) + 40);
    if (rax23) {
        addr_403b09_33:
        rdx40 = rax23;
    } else {
        rax23 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_19) + 32);
        if (!rax23) {
            addr_403b33_35:
            if (!r10_26) {
                addr_403ba5_19:
                *reinterpret_cast<uint32_t*>(&rsi41) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = 0;
                rax42 = reinterpret_cast<struct s27*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(r8_22));
                if (reinterpret_cast<uint32_t>(r11_24) > reinterpret_cast<uint32_t>(31)) {
                    rsi39 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
                    r13_6->f8 = reinterpret_cast<void*>(rsi41 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    rsi39->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r11_24) | 3);
                    rax42->f8 = rax42->f8 | 1;
                    rdx36 = r11_24;
                    goto addr_403beb_31;
                } else {
                    r13_6->f8 = reinterpret_cast<void*>(rsi41 | reinterpret_cast<uint64_t>(r8_22) | 2);
                    rax42->f8 = rax42->f8 | 1;
                    goto addr_403bf3_7;
                }
            } else {
                rdx43 = *reinterpret_cast<struct s14**>(&(r9_19 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx43 + 1) = 0;
                rcx = rdx43;
                rdx44 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(r12_7) + reinterpret_cast<uint32_t>(rdx43) * 8);
                if (rdx44->f258 != r9_19) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_26) + 32) != r9_19) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_26) + 40) = rax23;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_26) + 32) = rax23;
                    }
                    if (rax23) 
                        goto addr_403b58_43;
                    goto addr_403ba5_19;
                } else {
                    rdx44->f258 = rax23;
                    if (!rax23) {
                        __asm__("rol eax, cl");
                        r12_7->f4 = r12_7->f4 & 0xfffffffe;
                        goto addr_403ba5_19;
                    } else {
                        addr_403b58_43:
                        rdx45 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_19) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax23) + 48) = r10_26;
                        if (rdx45) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax23) + 32) = rdx45;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx45) + 48) = rax23;
                            goto addr_403b94_48;
                        }
                    }
                }
            }
        } else {
            rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_19) + 32);
            goto addr_403b09_33;
        }
    }
    addr_403b0c_50:
    rbx46 = rcx;
    rax23 = rdx40;
    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx40) + 40);
    rdx40 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx40) + 40);
    if (rdx40) 
        goto addr_403b0c_50;
    rdx40 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax23) + 32);
    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax23) + 32);
    if (rdx40) 
        goto addr_403b0c_50;
    *reinterpret_cast<struct s14**>(&rbx46->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_403b33_35;
    addr_403beb_31:
    fun_401f12(r12_7, rsi39, rdx36, rcx);
    goto addr_403bf3_7;
    addr_403b94_48:
    rdx47 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_19) + 40);
    if (rdx47) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax23) + 40) = rdx47;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx47) + 48) = rax23;
        goto addr_403ba5_19;
    }
    addr_403ae1_22:
    rdx48 = r9_19->f10;
    rdx48->f18 = rax23;
    rax23->f10 = rdx48;
    goto addr_403b33_35;
}

void fun_404420(struct s16* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx) {
    struct s14* rcx5;

    *reinterpret_cast<int32_t*>(&rcx5) = 32;
    *reinterpret_cast<int32_t*>(&rcx5 + 1) = 0;
    if (reinterpret_cast<uint32_t>(rdx) < reinterpret_cast<uint32_t>(32)) {
        rcx5 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rcx5) * 8 + 0x436098);
}

struct s14* fun_4042f0();

struct s14* fun_40429b(struct s14* rdi, struct s14* rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9) {
    struct s14* rax7;

    rax7 = fun_4042f0();
    return rax7;
}

int64_t g405018 = 0x4ae6;

struct s14* fun_401a32(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, struct s14* r9, struct s14* a7, struct s14* a8) {
    int64_t rax9;
    struct s14* rax10;

    rax9 = g405018;
    rax10 = reinterpret_cast<struct s14*>(rax9());
    return rax10;
}

uint64_t fun_4042a8(int64_t rdi, uint32_t esi, int64_t rdx, uint64_t rcx, struct s14* r8) {
    uint64_t rax6;

    *reinterpret_cast<uint32_t*>(&rax6) = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi) >> 1) & 1 | *reinterpret_cast<uint32_t*>(&rdi) & 2 | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi) >> 2) & 0x20000000 | esi << 5 & 0x80000000 | static_cast<uint32_t>(rdi * 4) & 4 | *reinterpret_cast<uint32_t*>(&rdi) << 3 & 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

int64_t g405088 = 0x4c04;

struct s14* fun_401a5e(struct s14* rdi, int64_t rsi, int64_t rdx, int64_t rcx, struct s14* r8, struct s14* r9, int64_t a7, uint64_t a8) {
    int64_t rax9;
    struct s14* rax10;

    rax9 = g405088;
    rax10 = reinterpret_cast<struct s14*>(rax9());
    return rax10;
}

int64_t g405010 = 0x4ad8;

int32_t fun_401a19(struct s14* rdi, ...) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(g405010());
    return eax2;
}

struct s14* fun_40427b(int32_t edi, int32_t* rsi, struct s14* rdx, uint64_t rcx, ...) {
    uint64_t rax5;
    int64_t rcx6;

    *reinterpret_cast<int32_t*>(&rax5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx) > *reinterpret_cast<int32_t*>(&rax5)) {
        *reinterpret_cast<int32_t*>(&rcx6) = static_cast<int32_t>(reinterpret_cast<uint32_t>(rdx) + rax5) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        if (rsi[*reinterpret_cast<int32_t*>(&rcx6) * 2] > edi) {
            *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rcx6);
            *reinterpret_cast<int32_t*>(&rdx + 1) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax5) = static_cast<int32_t>(rcx6 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        }
    }
    return static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax5));
}

struct s29 {
    signed char[4418296] pad4418296;
    signed char f436af8;
    signed char[7] pad4418304;
    signed char f436b00;
    signed char[2391] pad4420696;
    signed char f437458;
    signed char[7] pad4420704;
    signed char f437460;
};

struct s14* fun_404542(signed char* rdi, signed char* rsi, void* rdx, struct s29* rcx) {
    uint1_t df5;
    void* rcx6;
    void* tmp64_7;
    struct s14* rax8;

    df5 = 0;
    rcx6 = rdx;
    if (reinterpret_cast<uint64_t>(rdi) >= reinterpret_cast<uint64_t>(rsi)) {
        rdi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<uint64_t>(rcx6) - 1);
        rsi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint64_t>(rcx6) - 1);
        df5 = 1;
    }
    tmp64_7 = reinterpret_cast<void*>(1 - 2 * static_cast<uint64_t>(df5));
    while (*reinterpret_cast<int32_t*>(&rcx6)) {
        *reinterpret_cast<int32_t*>(&rcx6) = *reinterpret_cast<int32_t*>(&rcx6) - 1;
        *rdi = *rsi;
        rdi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<uint64_t>(tmp64_7));
        rsi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint64_t>(tmp64_7));
    }
    return rax8;
}

int64_t g4362c0 = 0;

uint32_t fun_404300() {
    goto g4362c0;
}

int64_t g4362d0 = 0;

void fun_401acc() {
    goto g4362d0;
}

uint32_t fun_4043af(struct s17* rdi, uint32_t* rsi, struct s17* rdx, signed char* rcx) {
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
        edx8 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s17**>(reinterpret_cast<uint16_t>(rdi) + rdx6 * 2));
        ecx9 = edx8;
        cx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx9) & 0xfc00);
    } while (cx10 == 0xdc00);
    if (cx10 == 0xd800) {
        *reinterpret_cast<uint32_t*>(&rax11) = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s17**>(reinterpret_cast<uint16_t>(rdi) + rax5 * 2));
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

int64_t g405070 = 0x4bd4;

int64_t fun_401a48() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(g405070());
    return rax1;
}

int64_t g405030 = 0x4b20;

void fun_4046c1(signed char dil) {
    int1_t zf2;

    g437fb4 = g437fb4 | 4;
    zf2 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
    if (zf2) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x4046f2]");
        __asm__("hlt ");
    } else {
        while (1) {
            g405030();
        }
    }
}

uint64_t* fun_401158(uint64_t rdi, int64_t rsi, uint64_t* rdx, uint64_t* rcx) {
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

uint32_t g437fa8 = 0;

int64_t g4367a8 = 0;

int32_t g4367c8 = 0;

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
        g4367b8 = reinterpret_cast<struct s14*>(0x40000);
        g4367c0 = reinterpret_cast<struct s14*>(0xa00000);
        g4367c8 = 5;
        g436750 = 5;
        g4367a0 = rax5 & 0xfffffffffffffff8 | 8;
    }
    return;
}

struct s30 {
    uint32_t f0;
    signed char[4] pad8;
    struct s30* f8;
};

struct s30* g4367e0 = reinterpret_cast<struct s30*>(0);

struct s31 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
};

int64_t fun_4041e6(int64_t rdi) {
    int64_t r12_2;
    int64_t v3;
    int64_t rdx4;
    struct s30* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s31* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s30* r13_11;
    int64_t rdi12;

    r12_2 = rdi;
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
            } while (r12_2 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_2 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s31*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_2) 
                goto addr_40424c_7;
            if (!r13_11) 
                goto addr_404273_9;
            rdi5 = r13_11;
        }
        rdi12 = rcx8->f18;
        rdx10(rdi12);
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

uint32_t fun_40436d(struct s17* rdi, uint32_t* rsi, struct s17* rdx, signed char* rcx, uint64_t r8, ...) {
    uint32_t eax6;

    eax6 = fun_4043af(rdi, rsi, rdx, rcx);
    return eax6;
}

struct s32 {
    uint32_t f0;
    signed char[596] pad600;
    struct s14* f258;
};

struct s33 {
    uint32_t f0;
    signed char[596] pad600;
    struct s14* f258;
};

void fun_401f12(struct s25* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx) {
    struct s25* rbx5;
    struct s14* rdi6;
    struct s14* rax7;
    struct s14* rsi8;
    struct s14* rcx9;
    int64_t rcx10;
    struct s14* r8_11;
    struct s14* rax12;
    struct s14* rax13;
    struct s14* r8_14;
    struct s14* r8_15;
    struct s14* r12_16;
    uint32_t eax17;
    struct s14* r10_18;
    void* r8_19;
    struct s14* rax20;
    struct s14* rsi21;
    struct s14* r8_22;
    struct s14* rdx23;
    void* rdx24;
    struct s14* r9_25;
    struct s14* rcx26;
    uint64_t rcx27;
    uint64_t rsi28;
    struct s14* eax29;
    uint32_t esi30;
    uint32_t ecx31;
    int64_t rax32;
    uint64_t rcx33;
    int64_t rcx34;
    uint32_t esi35;
    struct s14* ecx36;
    uint32_t r8d37;
    int64_t r8_38;
    int64_t rax39;
    uint32_t esi40;
    struct s14* rax41;
    struct s14* rdx42;
    int64_t r9_43;
    struct s32* r9_44;
    struct s14* rcx45;
    struct s14* r11_46;
    uint32_t ecx47;
    struct s14* rsi48;
    uint64_t rcx49;
    uint64_t rax50;
    uint64_t rax51;
    struct s14* rax52;
    struct s14* rcx53;
    struct s14* rcx54;
    struct s14* r9_55;
    struct s14* rcx56;
    struct s14* r10_57;
    int64_t r9_58;
    struct s33* r9_59;
    struct s14* rcx60;
    struct s14* rcx61;
    struct s14* rcx62;

    rbx5 = rdi;
    rdi6 = rsi;
    rax7 = rdi6->f8;
    rsi8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi) + reinterpret_cast<uint32_t>(rdx));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 1) 
        goto addr_40209e_2;
    rdi6 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) - reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi6->f0)));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 3) {
        rdx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi6->f0)));
        if (rbx5->f20 == rdi6) {
            rcx9 = rsi8->f8;
            *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx9) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
            if (rcx10 != 3) {
                addr_40209e_2:
                r8_11 = rsi8->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_11) & 2) {
                    rsi8->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_11) & 0xfffffffffffffffe);
                    rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) | 1);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                    goto addr_40224b_7;
                }
            } else {
                rax12 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi8->f8) & 0xfffffffffffffffe);
                rbx5->f8 = rdx;
                rsi8->f8 = rax12;
                rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s14**>(&rsi8->f0) = rdx;
                goto addr_402389_9;
            }
        } else {
            rax13 = rdi6->f18;
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi6->f0)) <= reinterpret_cast<uint32_t>(0xff)) {
                r8_14 = rdi6->f10;
                if (r8_14 != rax13) {
                    r8_14->f18 = rax13;
                    rax13->f10 = r8_14;
                    goto addr_40209e_2;
                } else {
                    __asm__("rol eax, cl");
                    rbx5->f0 = rbx5->f0 & 0xfffffffe;
                    goto addr_40209e_2;
                }
            }
            r8_15 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48);
            if (rdi6 == rax13) 
                goto addr_401fb5_15; else 
                goto addr_401fa7_16;
        }
    } else {
        r12_16 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi6->f0)) + reinterpret_cast<uint32_t>(rdx) + 32);
        eax17 = fun_403d56(rdi6, r12_16, rdx);
        if (!eax17) {
            rbx5->f358 = rbx5->f358 - reinterpret_cast<uint32_t>(r12_16);
            goto addr_402389_9;
        }
    }
    r10_18 = rbx5->f20;
    if (rbx5->f28 != rsi8) {
        if (rsi8 != r10_18) {
            r8_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_11) & 0xfffffffffffffff8);
            rax20 = rsi8->f18;
            rdx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(r8_19));
            if (reinterpret_cast<uint64_t>(r8_19) <= 0xf8) {
                rsi21 = rsi8->f10;
                if (rsi21 != rax20) {
                    rsi21->f18 = rax20;
                    rax20->f10 = rsi21;
                    goto addr_402217_24;
                } else {
                    __asm__("rol eax, cl");
                    rbx5->f0 = rbx5->f0 & 0xfffffffe;
                    goto addr_402217_24;
                }
            }
            r8_22 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 48);
            if (rsi8 != rax20) 
                goto addr_402155_27;
        } else {
            rdx23 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(rbx5->f8));
            rbx5->f20 = rdi6;
            rbx5->f8 = rdx23;
            rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx23) | 1);
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rdx23)) = rdx23;
            goto addr_402389_9;
        }
    } else {
        rdx24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(rbx5->f10));
        rbx5->f28 = rdi6;
        rbx5->f10 = rdx24;
        rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdx24) | 1);
        if (rdi6 == r10_18) {
            rbx5->f20 = reinterpret_cast<struct s14*>(0);
            rbx5->f8 = reinterpret_cast<struct s14*>(0);
            goto addr_402389_9;
        }
    }
    rax20 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    r9_25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rax20) {
        addr_40217d_32:
        rcx26 = rax20;
    } else {
        rax20 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 32);
        if (!rax20) {
            addr_4021a7_34:
            if (!r8_22) {
                addr_402217_24:
                rdi6->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                if (rdi6 != r10_18) {
                    addr_40224b_7:
                    rcx27 = reinterpret_cast<uint32_t>(rdx) >> 3;
                    if (reinterpret_cast<uint32_t>(rdx) > reinterpret_cast<uint32_t>(0xff)) {
                        rsi28 = reinterpret_cast<uint32_t>(rdx) >> 8;
                        eax29 = *reinterpret_cast<struct s14**>(&rsi28);
                        if (*reinterpret_cast<struct s14**>(&rsi28) && (eax29 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi28)) <= 0xffff)) {
                            __asm__("bsr esi, esi");
                            esi30 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi28)) ^ 31;
                            ecx31 = 38 - esi30;
                            *reinterpret_cast<void**>(&rax32) = reinterpret_cast<void*>(31 - esi30);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = 0;
                            rcx33 = reinterpret_cast<uint32_t>(rdx) >> *reinterpret_cast<signed char*>(&ecx31);
                            *reinterpret_cast<uint32_t*>(&rcx34) = *reinterpret_cast<uint32_t*>(&rcx33) & 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                            eax29 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx34 + rax32 * 2));
                        }
                        esi35 = rbx5->f4;
                        ecx36 = eax29;
                        r8d37 = 1 << *reinterpret_cast<unsigned char*>(&ecx36);
                        *reinterpret_cast<struct s14**>(&(rdi6 + 2)->f0) = eax29;
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 40) = reinterpret_cast<struct s14*>(0);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 32) = reinterpret_cast<struct s14*>(0);
                        *reinterpret_cast<struct s14**>(&r8_38) = eax29;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = 0;
                        if (esi35 & r8d37) 
                            goto addr_402311_38; else 
                            goto addr_4022f6_39;
                    } else {
                        *reinterpret_cast<int32_t*>(&rax39) = static_cast<int32_t>(rcx27 + rcx27);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
                        esi40 = 1 << *reinterpret_cast<unsigned char*>(&rcx27);
                        rax41 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx5) + rax39 * 8 + 72);
                        if (rbx5->f0 & esi40) {
                            rdx42 = rax41->f10;
                        } else {
                            rbx5->f0 = rbx5->f0 | esi40;
                            rdx42 = rax41;
                        }
                        rax41->f10 = rdi6;
                        rdx42->f18 = rdi6;
                        rdi6->f10 = rdx42;
                        rdi6->f18 = rax41;
                        goto addr_402389_9;
                    }
                } else {
                    rbx5->f8 = rdx;
                    goto addr_402389_9;
                }
            } else {
                *reinterpret_cast<struct s14**>(&r9_43) = *reinterpret_cast<struct s14**>(&(rsi8 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_43) + 4) = 0;
                r9_44 = reinterpret_cast<struct s32*>(reinterpret_cast<int64_t>(rbx5) + r9_43 * 8);
                if (r9_44->f258 != rsi8) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_22) + 32) != rsi8) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_22) + 40) = rax20;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_22) + 32) = rax20;
                    }
                    if (rax20) 
                        goto addr_4021cc_50;
                    goto addr_402217_24;
                } else {
                    r9_44->f258 = rax20;
                    if (!rax20) {
                        __asm__("rol eax, cl");
                        rbx5->f4 = rbx5->f4 & 0xfffffffe;
                        goto addr_402217_24;
                    } else {
                        addr_4021cc_50:
                        rcx45 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 48) = r8_22;
                        if (rcx45) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 32) = rcx45;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx45) + 48) = rax20;
                            goto addr_402206_55;
                        }
                    }
                }
            }
        } else {
            r9_25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi8) + 32);
            goto addr_40217d_32;
        }
    }
    addr_402180_57:
    r11_46 = r9_25;
    rax20 = rcx26;
    r9_25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx26) + 40);
    rcx26 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx26) + 40);
    if (rcx26) 
        goto addr_402180_57;
    rcx26 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 32);
    r9_25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax20) + 32);
    if (rcx26) 
        goto addr_402180_57;
    *reinterpret_cast<struct s14**>(&r11_46->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_4021a7_34;
    addr_402311_38:
    ecx47 = 0;
    rsi48 = *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(rbx5) + r8_38 * 8 + 0x258);
    if (eax29 != 31) {
        ecx47 = 57 - (reinterpret_cast<uint32_t>(eax29) >> 1);
    }
    rcx49 = reinterpret_cast<uint32_t>(rdx) << *reinterpret_cast<unsigned char*>(&ecx47);
    while ((reinterpret_cast<uint32_t>(rsi48->f8) & 0xfffffffffffffff8) != rdx) {
        rax50 = rcx49;
        rcx49 = rcx49 + rcx49;
        rax51 = (rax50 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi48) + rax51 * 8)) 
            goto addr_40235b_64;
        rsi48 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi48) + rax51 * 8);
    }
    rax52 = rsi48->f10;
    rax52->f18 = rdi6;
    rsi48->f10 = rdi6;
    rdi6->f10 = rax52;
    rdi6->f18 = rsi48;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48) = reinterpret_cast<struct s14*>(0);
    addr_402389_9:
    return;
    addr_40235b_64:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi48) + rax51 * 8) = rdi6;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48) = rsi48;
    addr_402363_67:
    rdi6->f18 = rdi6;
    rdi6->f10 = rdi6;
    goto addr_402389_9;
    addr_4022f6_39:
    rbx5->f4 = esi35 | r8d37;
    *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(rbx5) + r8_38 * 8 + 0x258) = rdi6;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 48) = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx5) + r8_38 * 8 + 0x258);
    goto addr_402363_67;
    addr_402206_55:
    rcx53 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rcx53) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 40) = rcx53;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx53) + 48) = rax20;
        goto addr_402217_24;
    }
    addr_402155_27:
    rcx54 = rsi8->f10;
    rcx54->f18 = rax20;
    rax20->f10 = rcx54;
    goto addr_4021a7_34;
    addr_401fb5_15:
    rax13 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    r9_55 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rax13) {
        addr_401fcf_69:
        rcx56 = rax13;
    } else {
        rax13 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 32);
        if (!rax13) {
            addr_401ff9_71:
            if (!r8_15) 
                goto addr_40209e_2; else 
                goto addr_402002_72;
        } else {
            r9_55 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi6) + 32);
            goto addr_401fcf_69;
        }
    }
    addr_401fd2_74:
    r10_57 = r9_55;
    rax13 = rcx56;
    r9_55 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx56) + 40);
    rcx56 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx56) + 40);
    if (rcx56) 
        goto addr_401fd2_74;
    rcx56 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax13) + 32);
    r9_55 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax13) + 32);
    if (rcx56) 
        goto addr_401fd2_74;
    *reinterpret_cast<struct s14**>(&r10_57->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_401ff9_71;
    addr_402002_72:
    *reinterpret_cast<struct s14**>(&r9_58) = *reinterpret_cast<struct s14**>(&(rdi6 + 2)->f0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_58) + 4) = 0;
    r9_59 = reinterpret_cast<struct s33*>(reinterpret_cast<int64_t>(rbx5) + r9_58 * 8);
    if (r9_59->f258 != rdi6) {
        if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_15) + 32) != rdi6) {
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_15) + 40) = rax13;
        } else {
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_15) + 32) = rax13;
        }
        if (!rax13) 
            goto addr_40205a_81;
    } else {
        r9_59->f258 = rax13;
        if (!rax13) {
            __asm__("rol eax, cl");
            rbx5->f4 = rbx5->f4 & 0xfffffffe;
            goto addr_40209e_2;
        }
    }
    rcx60 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 32);
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax13) + 48) = r8_15;
    if (rcx60) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax13) + 32) = rcx60;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx60) + 48) = rax13;
    }
    rcx61 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rcx61) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax13) + 40) = rcx61;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx61) + 48) = rax13;
        goto addr_40209e_2;
    }
    addr_40205a_81:
    goto addr_40209e_2;
    addr_401fa7_16:
    rcx62 = rdi6->f10;
    rcx62->f18 = rax13;
    rax13->f10 = rcx62;
    goto addr_401ff9_71;
}

uint32_t g436348 = 0;

struct s14* fun_401566() {
    uint32_t eax1;

    eax1 = g436348;
    g437fb0 = eax1;
    return 0xff;
}

struct s14* g436b00 = reinterpret_cast<struct s14*>(0);

int32_t fun_401a74(int64_t rdi);

struct s34 {
    signed char[4418304] pad4418304;
    signed char f436b00;
    signed char[2399] pad4420704;
    signed char f437460;
};

uint32_t fun_40400e(struct s14* rdi, struct s14* rsi) {
    uint32_t r13d3;
    int64_t rdi4;
    struct s14* rdx5;
    int32_t r12d6;
    uint64_t rcx7;
    struct s14* rax8;
    struct s14* r14_9;
    struct s14* rbx10;
    int64_t rdi11;
    int1_t zf12;
    int32_t eax13;
    struct s14* rdi14;
    int32_t eax15;
    uint32_t eax16;
    struct s14* rdx17;
    struct s29* rcx18;
    struct s34* r8_19;
    struct s14* rdx20;
    void* tmp64_21;

    if (reinterpret_cast<uint32_t>(rdi) + 0xffffffffffffffff > 0xfffffffffffffffd || !rsi) {
        r13d3 = 0;
    } else {
        rdi4 = reinterpret_cast<int32_t>(rdi) >> 16;
        rdx5 = g436b00;
        r12d6 = *reinterpret_cast<int32_t*>(&rdi4);
        r13d3 = 0;
        rax8 = fun_40427b(static_cast<int32_t>(rdi4 + (reinterpret_cast<uint32_t>(rsi) + 0xffff >> 16) - 1), 0x436b08, rdx5, rcx7);
        r14_9 = rax8;
        while (rax8 && (rbx10 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax8) + 0xffffffffffffffff), r12d6 <= *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rbx10) * 8 + 0x436b0c))) {
            rdi11 = static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rbx10) * 8 + 0x436b08)) << 16;
            zf12 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
            if (!zf12) {
                eax13 = fun_401a74(rdi11);
                rdi14 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx10) * 8 + 0x437468);
                if (!eax13) {
                    r13d3 = 0xffffffff;
                }
                eax15 = fun_401a19(rdi14);
                if (!eax15) {
                    r13d3 = 0xffffffff;
                }
            } else {
                eax16 = fun_404300();
                r13d3 = r13d3 | eax16;
            }
            rax8 = rbx10;
        }
        if (reinterpret_cast<uint32_t>(rax8) < reinterpret_cast<uint32_t>(r14_9)) 
            goto addr_4040cd_13;
    }
    addr_404142_14:
    return r13d3;
    addr_4040cd_13:
    rdx17 = g436b00;
    if (reinterpret_cast<uint32_t>(rdx17) > reinterpret_cast<uint32_t>(r14_9)) {
        rcx18 = reinterpret_cast<struct s29*>((reinterpret_cast<uint32_t>(rax8) + 1) * 8);
        r8_19 = reinterpret_cast<struct s34*>((reinterpret_cast<uint32_t>(r14_9) + 1) * 8);
        fun_404542(&rcx18->f436b00, &r8_19->f436b00, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx17) - reinterpret_cast<uint32_t>(r14_9)) << 3, rcx18);
        rdx20 = g436b00;
        rax8 = fun_404542(&rcx18->f437460, &r8_19->f437460, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx20) - reinterpret_cast<uint32_t>(r14_9)) << 3, rcx18);
    }
    tmp64_21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rax8) + reinterpret_cast<uint32_t>(g436b00));
    g436b00 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(tmp64_21) - reinterpret_cast<uint32_t>(r14_9));
    goto addr_404142_14;
}

uint64_t g436360 = 0;

uint32_t g436368 = 0;

uint32_t fun_4046fa(uint32_t edi, uint32_t esi);

struct s14* fun_404786(struct s14* rdi, int64_t rsi, int64_t rdx, uint64_t rcx, struct s14* r8, struct s14* r9);

struct s14* fun_403d6a(struct s14* rdi) {
    uint64_t rcx2;
    uint32_t ecx3;
    struct s14* rsi4;
    struct s14* rdi5;
    struct s14* r15_6;
    uint32_t r13d7;
    struct s14* rbx8;
    uint32_t r14d9;
    struct s14* r14_10;
    struct s14* rdx11;
    uint32_t ecx12;
    uint64_t rcx13;
    uint32_t r13d14;
    struct s14* rax15;
    struct s14* r12_16;
    struct s14* rax17;
    int32_t r10d18;
    void* r8_19;
    struct s14* rsi20;
    uint64_t r14_21;
    uint32_t eax22;
    uint64_t rdi23;
    int64_t r8_24;
    int64_t rdx25;
    uint64_t* tmp64_26;
    struct s14* r9_27;
    uint64_t rcx28;
    int64_t rsi29;
    struct s14* rax30;
    struct s14* rdi31;
    struct s14* r8_32;
    struct s14* rax33;
    uint64_t rax34;
    struct s14* rax35;
    struct s14* rdx36;
    uint64_t r13_37;
    struct s14* rax38;
    struct s14* rdx39;
    struct s29* rcx40;
    struct s14* rax41;
    struct s14* rdx42;

    rcx2 = g436360;
    ecx3 = *reinterpret_cast<uint32_t*>(&rcx2) | g436368;
    rsi4 = rdi;
    *reinterpret_cast<int32_t*>(&rdi5) = 0;
    *reinterpret_cast<int32_t*>(&rdi5 + 1) = 0;
    r15_6 = reinterpret_cast<struct s14*>(0);
    r13d7 = ecx3 | 2;
    rbx8 = rsi4;
    r14d9 = g4362b8;
    *reinterpret_cast<uint32_t*>(&r14_10) = r14d9 & 4;
    if (!*reinterpret_cast<uint32_t*>(&r14_10) || !0) {
        rbx8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx8) + 0xffff);
        *reinterpret_cast<int16_t*>(&rbx8) = 0;
    }
    rdx11 = g436b00;
    ecx12 = r13d7 & 16;
    if (ecx12) {
        addr_403e4a_5:
        if (!reinterpret_cast<int1_t>(rdx11 == 0x12c)) {
            if (!ecx12) {
                rcx13 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(r15_6) >> 16);
                fun_40427b(static_cast<int32_t>((reinterpret_cast<uint32_t>(rbx8) + 0xffff >> 16) + rcx13 - 1), 0x436b08, rdx11, rcx13);
            } else {
                fun_403d56(r15_6, rbx8, rdx11);
            }
            r13d14 = r13d7 | 16;
            if (!*reinterpret_cast<uint32_t*>(&r14_10)) 
                goto addr_403e9a_10;
        } else {
            rax15 = fun_401556(rdi5, rsi4);
            r12_16 = rax15;
            goto addr_403ff6_12;
        }
    } else {
        if (rax17 = rdx11, r15_6 = reinterpret_cast<struct s14*>(0x200000000000), rdx11 == 0) {
            addr_403e46_14:
            *reinterpret_cast<int16_t*>(&r15_6) = 0;
            goto addr_403e4a_5;
        } else {
            r10d18 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rdx11) * 8 + 0x436b04);
            r8_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx8) >> 16);
            do {
                rax17 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax17) - 1);
                *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax17) * 8 + 0x436b0c);
                *reinterpret_cast<int32_t*>(&rsi4 + 1) = 0;
                rdi5 = reinterpret_cast<struct s14*>(static_cast<int64_t>(static_cast<int32_t>(reinterpret_cast<uint32_t>(rsi4) + 1)));
                if (reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint64_t>(r8_19) > 0x30000000) 
                    continue;
                if (*reinterpret_cast<int32_t*>(&rsi4) > 0x1ffffffe) 
                    goto addr_403e2b_18;
            } while (rax17);
            goto addr_403e39_20;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsi20) = r13d14;
    *reinterpret_cast<int32_t*>(&rsi20 + 1) = 0;
    r14_21 = reinterpret_cast<uint32_t>(rbx8) >> 32;
    eax22 = fun_4046fa(3, *reinterpret_cast<uint32_t*>(&rsi20));
    rdi23 = 0xffffffffffffffff;
    *reinterpret_cast<int32_t*>(&r8_24) = *reinterpret_cast<int32_t*>(&rbx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx25) = eax22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
    if (!1) {
        tmp64_26 = g437df0 - 3;
        rdi23 = *tmp64_26;
    }
    *reinterpret_cast<int32_t*>(&r9_27) = 0;
    *reinterpret_cast<int32_t*>(&r9_27 + 1) = 0;
    *reinterpret_cast<uint32_t*>(&rcx28) = *reinterpret_cast<uint32_t*>(&r14_21);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi29) = 0x4047c0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
    rax30 = fun_401a32(rdi23, 0x4047c0, rdx25, rcx28, r8_24, 0, 0xff, rsi20);
    rdi31 = reinterpret_cast<struct s14*>(0xff);
    r14_10 = rax30;
    r8_32 = rsi20;
    if (rax30) 
        goto addr_403f09_24;
    addr_403f44_25:
    rax33 = fun_404786(rdi31, rsi29, rdx25, rcx28, r8_32, r9_27);
    addr_403f49_26:
    r12_16 = rax33;
    r14_10 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
    goto addr_403f50_27;
    addr_403f09_24:
    rax34 = fun_4042a8(3, r13d14, rdx25, rcx28, r8_32);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(&rax34);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
    r9_27 = r15_6;
    r8_32 = rbx8;
    rax35 = fun_401a5e(r14_10, rsi29, 0, 0, r8_32, r9_27, 0xff, rax34);
    rdx25 = 0xff;
    r12_16 = rax35;
    rcx28 = rax34;
    if (rax35) {
        addr_403f50_27:
        if (r12_16 != 0xffffffffffffffff) {
            rdx36 = g436b00;
            r13_37 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(r12_16) >> 16);
            rax38 = fun_40427b(*reinterpret_cast<int32_t*>(&r13_37), 0x436b08, rdx36, rcx28, *reinterpret_cast<int32_t*>(&r13_37), 0x436b08, rdx36, rcx28);
            rdx39 = g436b00;
            if (reinterpret_cast<uint32_t>(rdx39) > reinterpret_cast<uint32_t>(rax38)) {
                rcx40 = reinterpret_cast<struct s29*>((reinterpret_cast<uint32_t>(rax38) + 2) * 8);
                rax41 = fun_404542(&rcx40->f436b00, &rcx40->f436af8, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx39) - reinterpret_cast<uint32_t>(rax38)) << 3, rcx40);
                rdx42 = g436b00;
                rax38 = fun_404542(&rcx40->f437460, &rcx40->f437458, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx42) - reinterpret_cast<uint32_t>(rax41)) << 3, rcx40);
            }
            g436b00 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(g436b00) + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax38) * 8 + 0x436b08) = *reinterpret_cast<int32_t*>(&r13_37);
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax38) * 8 + 0x437468) = r14_10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax38) * 8 + 0x436b0c) = static_cast<int32_t>((reinterpret_cast<uint32_t>(rbx8) + 0xffff >> 16) + r13_37 - 1);
        }
    } else {
        rdi31 = r14_10;
        fun_401a19(rdi31, rdi31);
        goto addr_403f44_25;
    }
    addr_403ff6_12:
    return r12_16;
    addr_403e9a_10:
    *reinterpret_cast<uint32_t*>(&rcx28) = r13d14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    rax33 = fun_40429b(r15_6, rbx8, 3, rcx28, -1, 0);
    goto addr_403f49_26;
    addr_403e2b_18:
    rdi5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) << 16);
    r15_6 = rdi5;
    goto addr_403e46_14;
    addr_403e39_20:
    r15_6 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(r10d18 + 1)) << 16);
    goto addr_403e46_14;
}

struct s14* fun_4042f0() {
    goto g4362c0;
}

uint32_t fun_4046fa(uint32_t edi, uint32_t esi) {
    uint32_t eax3;
    uint32_t edx4;
    uint64_t rcx5;
    int64_t rdx6;
    uint64_t rsi7;

    eax3 = esi;
    if ((edi & 7) != 7) {
        if ((edi & 3) != 3) {
            edx4 = 32;
            if ((edi & 5) != 5 && (edx4 = 16, !(*reinterpret_cast<unsigned char*>(&edi) & 4))) {
                edx4 = (edi & 1) + 1;
            }
        } else {
            edx4 = 4;
            if (!(*reinterpret_cast<unsigned char*>(&eax3) & 1)) {
                rcx5 = g436360;
                *reinterpret_cast<uint32_t*>(&rdx6) = reinterpret_cast<uint1_t>(rcx5 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi))) & rcx5));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
                edx4 = static_cast<uint32_t>(rdx6 * 4 + 4);
            }
        }
    } else {
        edx4 = 64;
        if (!(*reinterpret_cast<unsigned char*>(&eax3) & 1)) {
            rsi7 = g436360;
            if (rsi7 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax3))) & rsi7)) {
                edx4 = 0x80;
            }
        }
    }
    return (eax3 | edi) & 0xdd000000 | edx4;
}

struct s14* fun_404786(struct s14* rdi, int64_t rsi, int64_t rdx, uint64_t rcx, struct s14* r8, struct s14* r9) {
    int1_t zf7;
    struct s14* rax8;
    int64_t rax9;

    zf7 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
    if (zf7) {
        rax8 = fun_401566();
        return rax8;
    } else {
        rax9 = fun_401a48();
        g437fb0 = *reinterpret_cast<uint32_t*>(&rax9);
        return 0xffffffffffffffff;
    }
}

int64_t g405098 = 0x4c36;

int32_t fun_401a74(int64_t rdi) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(g405098());
    return eax2;
}

void fun_40444e() {
    __asm__("outsd ");
}

void fun_404451(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int64_t rbx4;
    int64_t v5;

    __asm__("rol ch, 0xfe");
    if (!less_or_equal2) {
        *reinterpret_cast<int64_t*>(rdi + rdx3 - 8) = rbx4;
        goto v5;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xeb77");
    }
}

void fun_40445f() {
    __asm__("outsd ");
}

void fun_404462() {
    int64_t rcx1;
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x404429;
}

void fun_404465(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int32_t ebx4;

    if (!less_or_equal2) {
        *reinterpret_cast<int32_t*>(rdi + rdx3 - 4) = ebx4;
        goto 0x4044b7;
    }
}

void fun_404468(signed char* rdi, signed char* rsi, uint64_t rdx, int64_t rcx) {
    int1_t zf5;
    uint64_t rcx6;
    uint64_t rdx7;
    uint64_t rcx8;
    uint64_t rcx9;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf5)) {
        if (rdx < 0x400) 
            goto addr_404441_4;
    } else {
        __asm__("in eax, 0xef");
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
            __asm__("pxor xmm3, xmm3");
            goto 0x4044b8;
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
        __asm__("pxor xmm3, xmm3");
        goto 0x4044b8;
    } else {
        rcx9 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx9)) {
            *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
            *rdi = *rsi;
            ++rdi;
            ++rsi;
        }
        goto 0x4044b8;
    }
    addr_404441_4:
}

void fun_40458a(int32_t* rdi) {
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

void fun_404599(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int64_t rbx4;

    if (!less_or_equal2) {
        *reinterpret_cast<int64_t*>(rdi + rdx3 - 8) = rbx4;
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

struct s35 {
    signed char[106] pad106;
    signed char f6a;
};

struct s36 {
    signed char[106] pad106;
    signed char f6a;
};

void fun_4045a7() {
    int64_t rcx1;
    int1_t zf2;
    int64_t rax3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    signed char al7;
    struct s35* rbx8;
    struct s36* rbx9;
    signed char dh10;
    uint64_t rcx11;
    uint64_t rdx12;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x40456e;
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

struct s37 {
    signed char f0;
    signed char[77] pad78;
    unsigned char f4e;
    signed char[22] pad101;
    void* f65;
    unsigned char f66;
    signed char[1] pad104;
    int32_t f68;
    signed char[4] pad112;
    int32_t f70;
    unsigned char f72;
};

struct s38 {
    struct s38* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[50] pad83;
    unsigned char f53;
    int32_t f54;
    unsigned char f55;
    signed char[8] pad97;
    void* f61;
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

struct s39 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s40 {
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

struct s41 {
    signed char[32] pad32;
    int32_t f20;
};

struct s42 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s43 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s44 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s45 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s46 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s47 {
    signed char[111] pad111;
    signed char f6f;
};

struct s48 {
    signed char[101] pad101;
    signed char f65;
};

void fun_4047e0(struct s37* rdi, int32_t esi, int16_t dx, struct s38* rcx, void** r8) {
    struct s38* rdx3;
    void* rsp6;
    int1_t cf7;
    void* al8;
    void* eax9;
    void* eax10;
    void* eax11;
    void* eax12;
    struct s38* rax13;
    struct s39* rbx14;
    struct s40* rsi15;
    int1_t zf16;
    struct s38* rbp17;
    void* rsp18;
    struct s41* rbx19;
    int64_t* rsp20;
    void** rsp21;
    int64_t* rsp22;
    int64_t r11_23;
    int64_t* rsp24;
    int64_t rbx25;
    struct s38** rsp26;
    struct s38** rsp27;
    int64_t* rsp28;
    int64_t r10_29;
    void** rsp30;
    int64_t* rsp31;
    int64_t r13_32;
    int64_t* rsp33;
    int64_t r10_34;
    struct s38** rsp35;
    struct s38** rsp36;
    int64_t* rsp37;
    int64_t r11_38;
    struct s42* rbx39;
    struct s43* rbx40;
    struct s38* rsp41;
    int1_t zf42;
    signed char bh43;
    void* tmp32_44;
    int1_t cf45;
    uint1_t zf46;
    signed char bh47;
    int1_t sf48;
    struct s45* rbx49;
    struct s46* rbx50;
    uint1_t cf51;
    struct s47* rbx52;
    uint1_t below_or_equal53;
    void* tmp8_54;
    uint1_t cf55;
    uint1_t below_or_equal56;
    void* tmp32_57;
    uint32_t tmp32_58;
    unsigned char* rbx59;
    signed char* rbx60;
    unsigned char* rbx61;
    unsigned char* rbx62;
    signed char bl63;
    struct s48* r15_64;
    void* rsp65;
    unsigned char* rbx66;
    struct s38* tmp8_67;
    void* rsp68;
    struct s38* rsp69;
    struct s38* rsp70;
    struct s38* r12_71;
    struct s38* rsp72;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    rsp6 = __zero_stack_offset();
    if (cf7) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s38**>(&rcx->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rcx->f0)) + reinterpret_cast<unsigned char>(al8));
        __asm__("rol byte [rcx], 0xc0");
        eax9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<int32_t>(eax11));
        eax12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax9) + reinterpret_cast<int32_t>(eax9));
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12));
        *reinterpret_cast<signed char*>(&eax12) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax12) - 8) - 8) - 8) - 8) - 8);
        *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax12) + 0x5fc05fc + 0x5fc05fc);
        *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
        rax13 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rax13) | rbx14->f6f);
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
            *reinterpret_cast<uint32_t*>(&rsi15) = rcx->f6e * 0x706f430a;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
            zf16 = __undefined();
            if (!__undefined()) {
                if (!zf16) 
                    goto addr_404912_9;
                if (__intrinsic()) 
                    goto addr_4048c8_11; else 
                    goto addr_4048a8_12;
            } else {
                *reinterpret_cast<int32_t*>(&rsp6) = rdi->f68 * 0x30322074;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp6) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx3 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)));
                rdx3->f75 = reinterpret_cast<unsigned char>(rdx3->f75 & *reinterpret_cast<unsigned char*>(&rcx));
                if (1) {
                    addr_4048b0_14:
                    if (1) {
                        goto addr_4048d3_16;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbp17) = rsi15->f65 * 0x656c4120;
                    *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                    zf16 = __undefined();
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
    rdx3->f6f = reinterpret_cast<unsigned char>(rdx3->f6f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    addr_4048c8_11:
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp18) = reinterpret_cast<uint32_t>(rbx19->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_404938_23:
        *reinterpret_cast<int32_t*>(&rbp17) = rsi15->f20 * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        rsp20 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp18) - 8);
        *rsp20 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_4048d3_16:
        rcx->f73 = 0;
        rax13->f75 = 0;
    }
    addr_4049af_25:
    rsp21 = reinterpret_cast<void**>(rsp20 - 1);
    *reinterpret_cast<void***>(rsp21) = rsp21;
    rsp22 = reinterpret_cast<int64_t*>(rsp21 - 1);
    *rsp22 = r11_23;
    rsp24 = rsp22 - 1;
    *rsp24 = rbx25;
    rsi15->f4f = reinterpret_cast<unsigned char>(rsi15->f4f & reinterpret_cast<unsigned char>(rax13));
    rsp26 = reinterpret_cast<struct s38**>(rsp24 - 1);
    *rsp26 = rdx3;
    rcx->f20 = reinterpret_cast<unsigned char>(rcx->f20 & reinterpret_cast<unsigned char>(rax13));
    rsp27 = rsp26 - 8;
    *rsp27 = rax13;
    rsp28 = reinterpret_cast<int64_t*>(rsp27 - 8);
    *rsp28 = r10_29;
    rsp30 = reinterpret_cast<void**>(rsp28 - 1);
    *reinterpret_cast<void***>(rsp30) = rsp30;
    rsp31 = reinterpret_cast<int64_t*>(rsp30 - 1);
    *rsp31 = r13_32;
    rsp33 = rsp31 - 1;
    *rsp33 = r10_34;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 85) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    rsp35 = reinterpret_cast<struct s38**>(rsp33 - 1);
    *rsp35 = rdx3;
    rsp36 = rsp35 - 8;
    *rsp36 = rax13;
    rsp37 = reinterpret_cast<int64_t*>(rsp36 - 8);
    *rsp37 = r11_38;
    rbx39->f65 = reinterpret_cast<unsigned char>(rbx40->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
    rdi->f4e = reinterpret_cast<unsigned char>(rdi->f4e & reinterpret_cast<unsigned char>(rax13));
    rsp41 = reinterpret_cast<struct s38*>(rsp37 - 1);
    *reinterpret_cast<struct s38**>(&rsp41->f0) = rbp17;
    rax13 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rax13) | reinterpret_cast<unsigned char>(rdi->f65));
    zf42 = rax13 == 0;
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    }
    __asm__("outsb ");
    if (1) {
        if (zf42) {
            __asm__("outsd ");
            __asm__("outsb ");
            if (zf42) {
                addr_404b8f_32:
                __asm__("insd ");
            } else {
                __asm__("outsd ");
                __asm__("insb ");
                rdi->f0 = reinterpret_cast<signed char>(rdi->f0 + bh43);
                tmp32_44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13)) + 0x74697845);
                cf45 = reinterpret_cast<uint32_t>(tmp32_44) < reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13));
                *reinterpret_cast<void**>(&rax13) = tmp32_44;
                *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
                zf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rax13) == 0);
                rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp41) - 8);
                *reinterpret_cast<struct s38**>(&rsp41->f0) = rax13;
                if (cf45) {
                    if (zf46) {
                        addr_404c03_35:
                        goto addr_404c05_36;
                    } else {
                        __asm__("outsd ");
                        __asm__("outsb ");
                        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax13)) < reinterpret_cast<int32_t>(0)) {
                        }
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(&rsp41) = rbp17->f73;
                    *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
                    if (!cf45) 
                        goto addr_404b2e_40; else 
                        goto addr_404b2e_40;
                }
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi15) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi15) + 0x6c) & reinterpret_cast<unsigned char>(rax13));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi15) + 0x65724300) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi15) + 0x65724300) + bh47);
            }
            rdx3->f6f = reinterpret_cast<unsigned char>(rdx3->f6f & reinterpret_cast<unsigned char>(rax13));
            zf46 = reinterpret_cast<uint1_t>(rdx3->f6f == 0);
            sf48 = __intrinsic();
            if (1) 
                goto addr_404b30_45; else 
                goto addr_404abc_46;
        }
    } else {
        addr_404a48_47:
        *reinterpret_cast<void**>(&rax13 + 1) = reinterpret_cast<void*>(0xff);
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s44**>(&rdi))->f69) = 0;
        if (!*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s44**>(&rdi))->f69)) {
            goto addr_404abc_46;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x69) = 0;
            if (1) {
                addr_404a79_50:
                rbx49->f6f = reinterpret_cast<unsigned char>(rbx50->f6f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
                cf51 = 0;
                zf46 = reinterpret_cast<uint1_t>(rbx52->f6f == 0);
                sf48 = __intrinsic();
                below_or_equal53 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf46));
                goto addr_404a7b_51;
            } else {
                if (0) {
                    addr_404acd_53:
                    rbp17->f53 = reinterpret_cast<unsigned char>(rbp17->f53 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
                    tmp8_54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
                    cf55 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_54) < reinterpret_cast<unsigned char>(*r8));
                    *r8 = tmp8_54;
                    zf46 = reinterpret_cast<uint1_t>(*r8 == 0);
                    sf48 = reinterpret_cast<signed char>(*r8) < reinterpret_cast<signed char>(0);
                    below_or_equal56 = reinterpret_cast<uint1_t>(cf55 | zf46);
                    goto addr_404ad6_54;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_404ac0_56:
                        *reinterpret_cast<unsigned char*>(&rsi15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi15) | reinterpret_cast<unsigned char>(*r8));
                        *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) ^ *reinterpret_cast<uint32_t*>(&rsi15));
                        *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13)) - 0x31303331);
                        *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
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
    zf46 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rcx->f0)) & reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13))) == 0);
    sf48 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rcx->f0)) & reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13))) < reinterpret_cast<int32_t>(0);
    addr_404b30_45:
    __asm__("insb ");
    if (!zf46) {
        addr_404ba7_61:
        if (zf46) {
            goto addr_404bf3_63;
        } else {
            goto addr_404bb3_65;
        }
    } else {
        rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp41) - 8);
        *reinterpret_cast<struct s38**>(&rsp41->f0) = reinterpret_cast<struct s38*>(0x656c6946);
        if (!zf46) {
            *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
        } else {
            if (0) {
                addr_404bb3_65:
                __asm__("insd ");
                goto addr_404bb5_69;
            } else {
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                tmp32_57 = *reinterpret_cast<void**>(&rcx);
                *reinterpret_cast<void**>(&rcx) = *reinterpret_cast<void**>(&rax13);
                *reinterpret_cast<void**>(&rax13) = tmp32_57;
                *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
                tmp32_58 = rsi15->f72 + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13));
                cf55 = reinterpret_cast<uint1_t>(tmp32_58 < rsi15->f72);
                rsi15->f72 = tmp32_58;
                zf46 = reinterpret_cast<uint1_t>(rsi15->f72 == 0);
                sf48 = reinterpret_cast<int32_t>(rsi15->f72) < reinterpret_cast<int32_t>(0);
                below_or_equal56 = reinterpret_cast<uint1_t>(cf55 | zf46);
                goto addr_404b44_71;
            }
        }
    }
    rax13 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rax13) & 2);
    zf46 = reinterpret_cast<uint1_t>(rax13 == 0);
    sf48 = __intrinsic();
    goto addr_404ba7_61;
    addr_404b44_71:
    __asm__("outsb ");
    if (below_or_equal56) {
        addr_404bb5_69:
    } else {
        if (cf55) 
            goto addr_404bbd_74;
        __asm__("outsb ");
        __asm__("insd ");
        __asm__("outsb ");
        if (zf46) 
            goto addr_404ba7_61;
    }
    if (zf46) {
        if (zf46) {
            addr_404c12_78:
            if (sf48) {
                addr_404c64_79:
                rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp41) - 8);
                *reinterpret_cast<struct s38**>(&rsp41->f0) = rax13;
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
            } else {
                if (zf46) {
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&rbp17) = rbp17->f54 * 0x657079;
            *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
            goto addr_404bd2_83;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rbp17) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi15) + 0x67) * 0xbd005773;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        rdi->f65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi->f65) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13)));
        if (rdi->f65) {
            __asm__("outsd ");
            __asm__("insd ");
            __asm__("insd ");
        }
    }
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    goto addr_404c6f_87;
    addr_404c85_88:
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *rbx59 = reinterpret_cast<unsigned char>(*rbx60 + *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    rsi15->f0 = reinterpret_cast<unsigned char>(rsi15->f0 + *reinterpret_cast<unsigned char*>(&rcx));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *rbx61 = reinterpret_cast<unsigned char>(*rbx62 & *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    rsi15->f0 = reinterpret_cast<unsigned char>(rsi15->f0 + *reinterpret_cast<unsigned char*>(&rcx + 1));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
    goto addr_404cb4_91;
    addr_404bd2_83:
    goto addr_404bd4_92;
    addr_404abc_46:
    __asm__("outsd ");
    __asm__("outsb ");
    rax13 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rax13) - 32);
    goto addr_404ac0_56;
    addr_404a7b_51:
    if (!zf46) {
    }
    addr_404af8_95:
    if (zf46) {
    }
    if (!zf46) 
        goto addr_404b74_100;
    __asm__("outsb ");
    if (!sf48) {
        addr_404c05_36:
        *reinterpret_cast<void**>(&rcx) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rcx)) + reinterpret_cast<uint32_t>(rbp17->f61));
        if (__intrinsic()) {
            addr_404c60_102:
            __asm__("fadd dword [rdi+0x0]");
            goto addr_404c63_103;
        } else {
            *reinterpret_cast<unsigned char*>(&rsp41) = reinterpret_cast<unsigned char>(rbp17->f77 * 0x6946664f);
            *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
            sf48 = __undefined();
            zf46 = __undefined();
            __asm__("insb ");
            goto addr_404c12_78;
        }
    } else {
        addr_404bbd_74:
    }
    addr_404b74_100:
    __asm__("outsb ");
    if (below_or_equal53) {
        __asm__("outsd ");
    } else {
        if (cf51) {
            addr_404be8_60:
            if (zf46) {
                __asm__("insb ");
                rdi->f0 = reinterpret_cast<signed char>(rdi->f0 + bl63);
            } else {
                if (!zf46) {
                }
            }
        } else {
            __asm__("outsb ");
            __asm__("insd ");
            __asm__("outsb ");
            if (zf46) 
                goto addr_404bd2_83; else 
                goto addr_404b7f_113;
        }
    }
    *reinterpret_cast<void**>(&rax13 + 1) = reinterpret_cast<void*>(0xff + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    rax13 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rdi->f65));
    zf46 = reinterpret_cast<uint1_t>(rax13 == 0);
    goto addr_404be7_59;
    addr_404c50_115:
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    goto addr_404c60_102;
    addr_404b7f_113:
    if (zf46) {
        addr_404bf3_63:
        __asm__("in eax, 0x2");
        if (zf46) {
            if (zf46) {
                addr_404cb4_91:
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
            } else {
                goto addr_404c50_115;
            }
        } else {
            if (!sf48) {
                addr_404c6f_87:
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                __asm__("fmul dword [rdx+0x0]");
                *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
                goto addr_404c85_88;
            } else {
                if (zf46) {
                    addr_404c63_103:
                    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
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
        *reinterpret_cast<int32_t*>(&rbp17) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi15) + 0x67) * 0x5773;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        if (!(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax13)) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rdx3->f0)))) {
            addr_404bd4_92:
            if (!(*reinterpret_cast<signed char*>(&r8) + r15_64->f65)) {
                __asm__("insb ");
                __asm__("insb ");
                *reinterpret_cast<uint32_t*>(&rsp65) = rbp17->f73 * 0x69f0000;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp65) + 4) = 0;
                *reinterpret_cast<struct s38**>(reinterpret_cast<int64_t>(rsp65) - 8) = rbp17;
                __asm__("outsb ");
                __asm__("insd ");
            }
        } else {
            goto addr_404b8f_32;
        }
    }
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    __asm__("outsb ");
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *rbx66 = *reinterpret_cast<unsigned char*>(&rcx);
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    rsi15->f4b = reinterpret_cast<unsigned char>(rsi15->f4b + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13 + 1)));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    *reinterpret_cast<struct s38**>(&rax13->f0) = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rax13->f0)) + reinterpret_cast<unsigned char>(rax13));
    addr_404ad6_54:
    tmp8_67 = *reinterpret_cast<struct s38**>(&rax13->f0);
    *reinterpret_cast<struct s38**>(&rax13->f0) = rax13;
    rax13 = tmp8_67;
    __asm__("insb ");
    __asm__("outsd ");
    if (cf55) {
    }
    addr_404a61_58:
    *reinterpret_cast<int32_t*>(&rsp68) = rsi15->f20 * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp68) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi) + 0x72) = 0;
    *reinterpret_cast<uint32_t*>(&rsi15) = rbp17->f20 * 0x74206f74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
    rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rsp68) - 8);
    *reinterpret_cast<struct s38**>(&rsp41->f0) = reinterpret_cast<struct s38*>(0x72462065);
    goto addr_404a79_50;
    addr_4048a8_12:
    if (zf16) {
        addr_404912_9:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 99) & *reinterpret_cast<unsigned char*>(&rcx));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
            rcx->f6d = reinterpret_cast<unsigned char>(rcx->f6d & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf51 = 0;
            goto addr_404989_132;
        } else {
            *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s38**>(&rdx3->f0)));
            cf51 = 0;
            zf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
            sf48 = __intrinsic();
            below_or_equal53 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf46));
            rsp69 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rsp6) - 8);
            *reinterpret_cast<struct s38**>(&rsp69->f0) = rsp69;
            rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp69) - 8);
            *reinterpret_cast<struct s38**>(&rsp41->f0) = reinterpret_cast<struct s38*>(0x70207369);
            if (0) {
                goto addr_404995_135;
            }
        }
    } else {
        addr_4048aa_20:
        rbp17->f72 = 0;
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
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x73)) {
            addr_4049a4_139:
            rsp70 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s38**>(&rsp70->f0) = r12_71;
            rcx = *reinterpret_cast<struct s38**>(&rsp70->f0);
            rsp20 = &rsp70->f8;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi) + 0x72) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsi15->f49 = reinterpret_cast<unsigned char>(rsi15->f49 & reinterpret_cast<unsigned char>(rax13));
            goto addr_4049af_25;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp18) = rdx3->f75 * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
            goto addr_404938_23;
        }
    }
    *reinterpret_cast<unsigned char*>(&rsp41) = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp17) + 100) * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
    cf51 = __intrinsic();
    sf48 = __undefined();
    zf46 = __undefined();
    below_or_equal53 = reinterpret_cast<uint1_t>(cf51 | zf46);
    if (cf51) {
        if (cf51) {
            addr_404a18_143:
            *reinterpret_cast<unsigned char*>(&rsp41) = rbp17->f65;
            *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
            if (below_or_equal53) {
                rax13 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rax13) | rsi15->f6f);
                cf51 = 0;
                zf46 = reinterpret_cast<uint1_t>(rax13 == 0);
                sf48 = __intrinsic();
                below_or_equal53 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf46));
                if (zf46) 
                    goto addr_404a89_146;
            } else {
                rcx->f20 = 0;
                *reinterpret_cast<int32_t*>(&rbp17) = rdi->f70;
                *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_404a48_47;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
                    rdi->f4e = reinterpret_cast<unsigned char>(rdi->f4e & reinterpret_cast<unsigned char>(rax13));
                    *reinterpret_cast<struct s38**>(reinterpret_cast<unsigned char>(rsp41) - 8) = rbp17;
                    rdi->f65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi->f65) & reinterpret_cast<unsigned char>(rax13));
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
            if (!cf51) {
                rbp17->f74 = 0;
            }
        }
    } else {
        addr_404995_135:
        __asm__("outsb ");
        if (zf46) {
            if (!below_or_equal53) {
                *reinterpret_cast<unsigned char*>(&rdx3->f64) = 0;
                below_or_equal53 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx3->f64) == 0)));
                goto addr_404a18_143;
            }
        } else {
            rdi->f66 = reinterpret_cast<unsigned char>(rdi->f66 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp72 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s38**>(&rsp72->f0) = rdx3;
            rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<unsigned char>(rsp72) - 8);
            *reinterpret_cast<struct s38**>(&rsp41->f0) = rsp41;
            goto addr_4049a4_139;
        }
    }
    __asm__("outsb ");
    goto addr_404af8_95;
    addr_404a89_146:
    addr_404a99_151:
    addr_404a38_152:
    __asm__("insb ");
    rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
    rdi->f4e = reinterpret_cast<unsigned char>(rdi->f4e & reinterpret_cast<unsigned char>(rax13));
    rsp41 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rsp6) - 8);
    *reinterpret_cast<struct s38**>(&rsp41->f0) = rbp17;
    rdi->f65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi->f65) & reinterpret_cast<unsigned char>(rax13));
    cf51 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_4048c3_160;
    goto addr_404925_136;
    addr_4048c3_160:
    __asm__("insb ");
    rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
}

struct s49 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s50 {
    signed char[111] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
};

struct s51 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s52 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s53 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s54 {
    signed char[111] pad111;
    signed char f6f;
};

struct s55 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s56 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_40484d(struct s49* rdi, struct s50* rsi, int16_t dx, struct s52* rcx) {
    struct s51* rdx3;
    int1_t cf5;
    int1_t cf6;
    int1_t zf7;
    int1_t sf8;
    unsigned char ah9;
    struct s53* rbx10;
    int1_t zf11;
    struct s54* rbx12;
    void* rsp13;
    int1_t zf14;
    void** rax15;
    void** rax16;
    unsigned char ah17;
    struct s55* rbp18;
    struct s56* rbp19;
    unsigned char ah20;
    void* rax21;
    int64_t rbp22;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    if (cf5) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf6) {
        goto addr_404874_4;
    }
    if (!zf7) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf8) 
        goto addr_404859_7;
    addr_404865_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi->f72 = reinterpret_cast<unsigned char>(rsi->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_4048f2_12;
    } else {
        addr_404874_4:
    }
    rdi->f41 = reinterpret_cast<unsigned char>(rdi->f41 & *reinterpret_cast<unsigned char*>(&rdx3));
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf14 = *reinterpret_cast<void**>(&rsp13) == *rax15;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp13)) <= reinterpret_cast<uint32_t>(*rax16)) 
        goto addr_404979_15;
    addr_404979_15:
    if (zf14) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf14) 
        goto addr_40497e_18;
    rsi->f6f = reinterpret_cast<unsigned char>(rsi->f6f & ah17);
    addr_40497e_18:
    rbp18->f76 = reinterpret_cast<unsigned char>(rbp19->f76 & ah20);
    addr_4048f2_12:
    addr_404859_7:
    *reinterpret_cast<unsigned char*>(&rdx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax21) + rbp22 * 2 + 0x69));
    if (1) {
        rdx3->f65 = 0;
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

struct s57 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s58 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s59 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s60 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_404875() {
    void* rsp1;
    int1_t cf2;
    int1_t sf3;
    int1_t zf4;
    void** rax5;
    void** rax6;
    struct s57* rsi7;
    struct s58* rsi8;
    unsigned char al9;
    struct s59* rbx10;
    struct s60* rbx11;
    unsigned char dl12;

    rsp1 = __zero_stack_offset();
    if (cf2) {
        if (!sf3) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf4) 
            goto addr_4048e6_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp1)) < reinterpret_cast<int32_t>(*rax5)) {
            if (*reinterpret_cast<void**>(&rsp1) != *rax6) {
            }
        }
    }
    addr_4048e6_4:
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & al9);
    rbx10->f6f = reinterpret_cast<unsigned char>(rbx11->f6f & dl12);
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

struct s61 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s62 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s63 {
    signed char[111] pad111;
    signed char f6f;
};

struct s64 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s65 {
    signed char[78] pad78;
    unsigned char f4e;
};

void fun_4048f3() {
    int1_t cf1;
    struct s61* rsi2;
    struct s62* rsi3;
    unsigned char al4;
    struct s63* rsi5;
    struct s64* rcx6;
    struct s65* rcx7;
    unsigned char al8;

    if (!cf1) {
        rsi2->f6f = reinterpret_cast<unsigned char>(rsi3->f6f & al4);
        if (rsi5->f6f) {
            rcx6->f4e = reinterpret_cast<unsigned char>(rcx7->f4e & al8);
        }
    }
}

struct s66 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_4048fc(struct s66* rdi) {
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

void fun_404948() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s67 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s68 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s69 {
    signed char[115] pad115;
    signed char f73;
};

void fun_404953() {
    struct s67* rbp1;
    struct s68* rbp2;
    unsigned char dh3;
    struct s69* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_40495e(int64_t rdi) {
    int1_t zf2;

    if (!zf2) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_4049e8() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s70 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s71 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_404a01() {
    struct s70* rax1;
    struct s71* rax2;
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

struct s72 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s73 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_404a9d() {
    struct s72* rsi1;
    struct s73* rsi2;
    unsigned char al3;

    __asm__("outsb ");
    if (__undefined()) 
        goto "Control";
    if (__undefined()) 
        goto 0x404ad6;
    rsi1->f69 = reinterpret_cast<unsigned char>(rsi2->f69 & al3);
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

void fun_404afd(int64_t rdi) {
    unsigned char tmp8_2;
    signed char* rax3;
    signed char al4;
    int1_t cf5;
    unsigned char* rax6;
    unsigned char* rax7;

    tmp8_2 = reinterpret_cast<unsigned char>(*rax3 + al4);
    cf5 = tmp8_2 < *rax6;
    *rax7 = tmp8_2;
    __asm__("rol byte [rax], 0x43");
    if (cf5) 
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

void fun_404bbe(int64_t rdi) {
    int1_t sf2;
    signed char* rbx3;
    signed char* rbx4;
    signed char ch5;

    __asm__("outsb ");
    __asm__("insb ");
    *rbx3 = reinterpret_cast<signed char>(*rbx4 + ch5);
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

void fun_404c4a(int64_t rdi) {
    int1_t cf2;

    if (cf2) 
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

void fun_404d40(int32_t edi, uint32_t* rsi, int64_t rdx, uint32_t ecx) {
    int64_t rbp5;
    int64_t rbp6;
    signed char ah7;
    int64_t rax8;
    int16_t ax9;

    *reinterpret_cast<signed char*>(rbp5 - 96) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp6 - 96) + ah7);
    *reinterpret_cast<uint32_t*>(&rax8) = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax9));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    *reinterpret_cast<signed char*>(rax8 + 0x7e77f9c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax8 + 0x7e77f9c) + *reinterpret_cast<signed char*>(&rdx));
    *rsi = *rsi | ecx;
}

struct s74 {
    signed char f0;
    signed char[2140930311] pad2140930312;
    signed char f7f9c0108;
};

void fun_404d80() {
    int64_t rax1;
    int32_t eax2;
    unsigned char* rsi3;
    int64_t rcx4;
    unsigned char* rsi5;
    int64_t rcx6;
    unsigned char cl7;
    signed char* rcx8;
    signed char* rcx9;
    struct s74* rax10;
    signed char* rdx11;
    signed char* rdx12;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    rsi3[rcx4 * 8] = reinterpret_cast<unsigned char>(rsi5[rcx6 * 8] | cl7);
    *rcx8 = reinterpret_cast<signed char>(*rcx9 + *reinterpret_cast<signed char*>(&rax1));
    *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax1) + *reinterpret_cast<int32_t*>(rax1 + 0x14010020)) & 0x800302d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax10) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax10)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10) * 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10) * 4) + 16);
    *rdx11 = reinterpret_cast<signed char>(*rdx12 + *reinterpret_cast<signed char*>(&rax10));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + 0x7f9c0108) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + 0x7f9c0108) + *reinterpret_cast<signed char*>(&rax10));
}

void fun_404da5() {
    uint32_t* rsi1;
    uint32_t* rsi2;
    uint32_t ecx3;

    *rsi1 = *rsi2 | ecx3;
}

void fun_404dbb() {
    signed char* rax1;
    int32_t eax2;
    int64_t rax3;
    signed char* rcx4;
    signed char* rcx5;
    int64_t rcx6;
    int64_t rcx7;
    int64_t rcx8;
    int64_t rcx9;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + *reinterpret_cast<int32_t*>(rax3 + 0xc02080);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rcx4 = reinterpret_cast<signed char>(static_cast<int32_t>(*rcx5));
    *reinterpret_cast<signed char*>(&rax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax1) + *rax1);
    *reinterpret_cast<signed char*>(rcx6 + reinterpret_cast<int64_t>(rax1)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx7 + reinterpret_cast<int64_t>(rax1)) - 100);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(rcx8 + reinterpret_cast<int64_t>(rax1)) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(rcx9 + reinterpret_cast<int64_t>(rax1)) == 0))) {
    }
}

void fun_404dcd() {
    uint32_t* rsi1;
    uint32_t* rsi2;
    uint32_t ecx3;

    *rsi1 = *rsi2 | ecx3;
}

struct s75 {
    unsigned char f0;
    signed char[75498623] pad75498624;
    int32_t f4800480;
};

void fun_404dd0() {
    int64_t rax1;
    int32_t eax2;
    unsigned char* rsi3;
    int64_t rcx4;
    unsigned char* rsi5;
    int64_t rcx6;
    unsigned char cl7;
    signed char* rcx8;
    signed char* rcx9;
    struct s75* rax10;
    signed char dh11;
    uint32_t tmp32_12;
    uint1_t cf13;
    uint1_t less_or_equal14;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    rsi3[rcx4 * 8] = reinterpret_cast<unsigned char>(rsi5[rcx6 * 8] | cl7);
    *rcx8 = reinterpret_cast<signed char>(*rcx9 + *reinterpret_cast<signed char*>(&rax1));
    *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax1) + *reinterpret_cast<int32_t*>(rax1 + 0x14010020));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    do {
        __asm__("cli ");
        rax10->f0 = reinterpret_cast<unsigned char>(rax10->f0 + dh11);
        tmp32_12 = *reinterpret_cast<uint32_t*>(&rax10) + rax10->f4800480;
        cf13 = reinterpret_cast<uint1_t>(tmp32_12 < *reinterpret_cast<uint32_t*>(&rax10));
        *reinterpret_cast<uint32_t*>(&rax10) = tmp32_12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        rax10->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(rax10->f0)) + cf13);
        *reinterpret_cast<unsigned char*>(&rax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax10) + rax10->f0);
        rax10->f0 = reinterpret_cast<unsigned char>(rax10->f0 | 1);
        less_or_equal14 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(rax10->f0 == 0));
    } while (!less_or_equal14);
}

void fun_404df6() {
    int64_t rbx1;
    int64_t rbx2;
    unsigned char cl3;

    __asm__("out 0x3, eax");
    __asm__("xlatb ");
    *reinterpret_cast<unsigned char*>(rbx1 - 0x30fd2ffe) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rbx2 - 0x30fd2ffe) | cl3);
}

struct s76 {
    signed char[127] pad127;
    signed char f7f;
};

void fun_404e02(struct s76* rdi) {
    signed char* rdx2;
    signed char* rdx3;
    signed char al4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t eax7;
    signed char* rax8;
    signed char* rax9;
    signed char ah10;
    signed char bh11;
    int64_t rax12;
    int64_t rax13;
    int64_t rax14;
    int64_t rax15;
    signed char al16;
    unsigned char* rax17;
    unsigned char* rax18;
    int64_t rax19;
    int64_t rax20;
    signed char* rax21;
    int64_t rax22;
    signed char* rax23;
    int64_t rax24;
    int64_t rax25;
    int64_t rax26;

    *rdx2 = reinterpret_cast<signed char>(*rdx3 + al4);
    __asm__("rol dword [rcx], 0xe");
    *rax5 = *rax6 + eax7;
    *rax8 = reinterpret_cast<signed char>(*rax9 + ah10);
    rdi->f7f = reinterpret_cast<signed char>(rdi->f7f + bh11);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rdi->f7f < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rdi->f7f == 0))) {
        *reinterpret_cast<signed char*>(rax12 - 0x7ff37f80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax13 - 0x7ff37f80) - 0x80);
        *reinterpret_cast<signed char*>(rax14 - 0x7f7f7fff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax15 - 0x7f7f7fff) + al16);
        *rax17 = reinterpret_cast<unsigned char>(*rax18 | 0x80);
        *reinterpret_cast<signed char*>(rax19 - 0x7f7ff380) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax20 - 0x7f7ff380) + 16);
        rax21[rax22 * 4] = reinterpret_cast<signed char>(rax23[rax24 * 4] - 0x80);
        *reinterpret_cast<signed char*>(rax25 + 0x7e77e04) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax26 + 0x7e77e04) + 9);
    }
}

struct s77 {
    unsigned char f0;
    signed char[75499647] pad75499648;
    unsigned char f4800880;
};

void fun_404e36() {
    int64_t rax1;
    int32_t eax2;
    unsigned char* rsi3;
    int64_t rcx4;
    unsigned char* rsi5;
    int64_t rcx6;
    unsigned char cl7;
    signed char* rcx8;
    signed char* rcx9;
    uint32_t tmp32_10;
    struct s77* rax11;
    unsigned char tmp8_12;
    uint1_t cf13;
    unsigned char tmp8_14;
    uint1_t cf15;

    *reinterpret_cast<uint32_t*>(&rax1) = reinterpret_cast<uint32_t>(eax2 + 0x23f1815);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    rsi3[rcx4 * 8] = reinterpret_cast<unsigned char>(rsi5[rcx6 * 8] | cl7);
    *rcx8 = reinterpret_cast<signed char>(*rcx9 + *reinterpret_cast<signed char*>(&rax1));
    tmp32_10 = *reinterpret_cast<uint32_t*>(&rax1) + *reinterpret_cast<int32_t*>(rax1 - 0x7f7effe0);
    *reinterpret_cast<uint32_t*>(&rax11) = tmp32_10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    rax11->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax11->f0 - 0x6c) + reinterpret_cast<uint1_t>(tmp32_10 < *reinterpret_cast<uint32_t*>(&rax1)));
    tmp8_12 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) - 0x7f7f5af0) + 16);
    cf13 = reinterpret_cast<uint1_t>(tmp8_12 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) - 0x7f7f5af0));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) - 0x7f7f5af0) = tmp8_12;
    *reinterpret_cast<unsigned char*>(&rax11) = 0x80;
    rax11->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax11->f0 + 3) + cf13);
    tmp8_14 = reinterpret_cast<unsigned char>(rax11->f4800880 - 0x80);
    cf15 = reinterpret_cast<uint1_t>(tmp8_14 < rax11->f4800880);
    rax11->f4800880 = tmp8_14;
    rax11->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax11->f0 + 0x80) + cf15);
    *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(0x80 + rax11->f0);
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 | 1);
}

void fun_4011ac(uint64_t rdi) {
    uint64_t* rax2;

    rax2 = fun_401158(rdi, 3, 0x6f000, 0x3220);
    *rax2 = *rax2 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_40126d() {
    return 0;
}

void fun_401299() {
    return;
}

int64_t fun_404355() {
    int64_t rax1;
    uint32_t eax2;
    uint32_t eax3;
    int1_t cf4;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 >> 16 & 0xfff | eax3 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    cf4 = *reinterpret_cast<uint16_t*>(&rax1) < 0xfff;
    if (!cf4) {
        *reinterpret_cast<uint32_t*>(&rax1) = g436348;
    } else {
        __asm__("syscall ");
        if (!cf4) {
            return rax1;
        }
    }
    g437fb0 = *reinterpret_cast<uint32_t*>(&rax1);
    return 0xff;
}

void fun_4044a6(int64_t* rdi, int64_t* rsi, int64_t rdx) {
    *rdi = *rsi;
}

void fun_40453f(int64_t rdi) {
}

void fun_40455f(int64_t rdi) {
}

void fun_40457c(signed char* rdi, int32_t esi, uint64_t rdx) {
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
        goto 0x4045e1;
    }
}

void fun_4045e4(uint64_t* rdi, unsigned char sil) {
    *rdi = static_cast<uint64_t>(sil) * 0x101010101010101;
}

int64_t fun_40462e(int64_t rdi, int64_t rsi, uint64_t rdx) {
    int64_t rax4;
    uint64_t r8_5;
    uint64_t rcx6;
    int64_t rax7;

    if (rdi == rsi || !rdx) {
        addr_40468d_2:
        *reinterpret_cast<uint32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        r8_5 = (rdx >> 4) + 1;
        rcx6 = 0xfffffffffffffff0;
        do {
            rcx6 = rcx6 + 16;
            --r8_5;
            if (!r8_5) 
                goto addr_404673_5;
            __asm__("movdqu xmm0, [rdi+rcx]");
            __asm__("movdqu xmm1, [rsi+rcx]");
            __asm__("pcmpeqb xmm0, xmm1");
            __asm__("pmovmskb eax, xmm0");
            *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rax7) - 0xffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        } while (!*reinterpret_cast<int32_t*>(&rax7));
        goto addr_40466d_7;
    }
    addr_40468f_8:
    return rax4;
    do {
        addr_404673_5:
        if (rdx == rcx6) 
            goto addr_40468d_2;
        ++rcx6;
        *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(rdi + rcx6 - 1) - *reinterpret_cast<unsigned char*>(rsi + rcx6 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } while (!*reinterpret_cast<uint32_t*>(&rax4));
    goto addr_40468f_8;
    addr_40466d_7:
    __asm__("bsf eax, eax");
    rcx6 = rcx6 + rax7;
    goto addr_404673_5;
}

void fun_404cf1() {
    signed char* r8_1;
    signed char* r8_2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    unsigned char* rax10;
    signed char al11;
    unsigned char tmp8_12;
    uint1_t cf13;
    int64_t rcx14;
    signed char cl15;
    unsigned char cl16;
    signed char r8b17;
    signed char r8b18;
    unsigned char tmp8_19;
    int64_t rsi20;
    int64_t rsi21;
    int64_t rax22;
    unsigned char* rsi23;
    unsigned char* rsi24;
    unsigned char* rdx25;
    signed char* rdx26;

    *r8_1 = reinterpret_cast<signed char>(*r8_2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *reinterpret_cast<signed char*>(&rax10) = reinterpret_cast<signed char>(al11 + 76);
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    tmp8_12 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    cf13 = reinterpret_cast<uint1_t>(tmp8_12 < *rax10);
    *rax10 = tmp8_12;
    *reinterpret_cast<unsigned char*>(&rcx14) = reinterpret_cast<unsigned char>(cl15 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10)) + reinterpret_cast<uint1_t>(cl16 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10)) + cf13))));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + r8b17);
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + r8b18);
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    *rax10 = reinterpret_cast<unsigned char>(*rax10 + *reinterpret_cast<signed char*>(&rax10));
    tmp8_19 = *reinterpret_cast<unsigned char*>(rsi20 + 0x72727272);
    *reinterpret_cast<signed char*>(rsi21 + 0x72727272) = *reinterpret_cast<signed char*>(&rax10);
    *reinterpret_cast<unsigned char*>(&rax22) = tmp8_19;
    if (0) {
        *reinterpret_cast<int32_t*>(&rax22) = *reinterpret_cast<int32_t*>(&rax22) + 0x2241815;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    } else {
        if (!0) {
        }
    }
    *rsi23 = reinterpret_cast<unsigned char>(*rsi24 | *reinterpret_cast<unsigned char*>(&rcx14));
    *rdx25 = reinterpret_cast<unsigned char>(*rdx26 + *reinterpret_cast<unsigned char*>(&rax22));
    *reinterpret_cast<unsigned char*>(rax22 + 0x1e70480) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax22 + 0x1e70480) & *reinterpret_cast<unsigned char*>(&rax22));
}

struct s78 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s79 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s80 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_4011d4(struct s78* rdi) {
    struct s78* r9_2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s79* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s79* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s79* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s80* rax18;

    r9_2 = rdi;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_2) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s79*>(&r9_2->f18);
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
                    rdi15 = reinterpret_cast<struct s79*>(&rdi15->pad8);
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
            rax18 = reinterpret_cast<struct s80*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_2));
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
    *reinterpret_cast<unsigned char*>(&g4362b8) = 8;
    r12_2 = *reinterpret_cast<int32_t*>(&v1);
    r13_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    r14_4 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r12_2 * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi5) = 0x405010;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx6) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    while (rcx6) {
        --rcx6;
        *rdi5 = reinterpret_cast<int64_t>(fun_40126d);
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
    fun_4012f0();
    g437fb4 = g437fb4 | 1;
    *reinterpret_cast<int32_t*>(&rax9) = 0x405008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (0x405008 != rax9) {
        *rax9();
        ++rax9;
    }
    eax10 = fun_401460(r12_2, r13_3, r14_4);
    fun_40153d(eax10, r13_3, r14_4);
}

struct s16* fun_403c02(struct s14* rdi, struct s14* rsi, struct s14* rdx, struct s14* rcx, int64_t r8) {
    void* rdx6;
    struct s13* rsi7;
    struct s13* rax8;
    struct s16* rax9;
    uint64_t rdx10;
    struct s14* rdx11;

    if (!rdi) {
        goto fun_40238e;
    }
    if (reinterpret_cast<uint32_t>(rsi) <= reinterpret_cast<uint32_t>(0xffffffffffffff7f)) {
        if (rsi) {
            *reinterpret_cast<int32_t*>(&rdx6) = 32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            if (reinterpret_cast<uint32_t>(rsi) > reinterpret_cast<uint32_t>(14)) {
                rdx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rsi) + 31 & 0xfffffffffffffff0);
            }
            rsi7 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0);
            rax8 = fun_403873(0x4363e0, rsi7, rdx6, 1, r8);
            if (!rax8) {
                rax9 = fun_40238e(rsi, rsi7, rdx6, 1);
                if (rax9) {
                    rdx10 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff8);
                    rdx11 = reinterpret_cast<struct s14*>((rdx10 & 0xfffffffffffffff8) - 16);
                    if (reinterpret_cast<uint32_t>(rdx11) > reinterpret_cast<uint32_t>(rsi)) {
                        rdx11 = rsi;
                    }
                    fun_404420(rax9, rdi, rdx11, 1);
                    fun_403312(rdi, rdi, rdx11, 1);
                    rax9 = rax9;
                }
            } else {
                rax9 = reinterpret_cast<struct s16*>(&rax8->f10);
            }
        } else {
            fun_403312(rdi, rsi, rdx, rcx);
            goto addr_403c43_14;
        }
    } else {
        fun_401556(rdi, rsi);
        goto addr_403c43_14;
    }
    addr_403cb3_16:
    return rax9;
    addr_403c43_14:
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    goto addr_403cb3_16;
}

struct s81 {
    uint32_t f0;
    signed char[12] pad16;
    struct s14* f10;
    signed char[4] pad24;
    struct s14* f18;
    signed char[4] pad32;
    int64_t f20;
};

struct s30* fun_401ac6(struct s14* rdi, struct s14* rsi);

struct s14* fun_404151(struct s14* rdi, struct s14* rsi, int64_t rdx) {
    struct s14* r13_4;
    struct s14* r12_5;
    struct s30* rbx6;
    int64_t rax7;
    struct s81* rbx8;
    struct s14* rax9;
    struct s30* rax10;

    r13_4 = rdi;
    r12_5 = rsi;
    rbx6 = g4367e0;
    if (!rbx6) {
        g4367e0 = reinterpret_cast<struct s30*>(0x4367e8);
        *reinterpret_cast<int32_t*>(&rbx6) = 0x4367e8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = 0;
    }
    if (rbx6->f0 != 0xffffffff) {
        addr_4041b8_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(~rbx6->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        rbx6->f0 = rbx6->f0;
        rbx8 = reinterpret_cast<struct s81*>(reinterpret_cast<int64_t>(rbx6) + rax7 * 24);
        *reinterpret_cast<int32_t*>(&rax9) = 0;
        *reinterpret_cast<int32_t*>(&rax9 + 1) = 0;
        rbx8->f10 = r13_4;
        rbx8->f18 = r12_5;
        rbx8->f20 = rdx;
    } else {
        if (*reinterpret_cast<int32_t*>(&rsi) = 0x310, *reinterpret_cast<int32_t*>(&rsi + 1) = 0, *reinterpret_cast<int32_t*>(&rdi) = 1, *reinterpret_cast<int32_t*>(&rdi + 1) = 0, rax10 = fun_401ac6(1, 0x310), rax10 == 0) {
            rax9 = fun_401556(rdi, rsi);
        } else {
            rax10->f8 = rbx6;
            g4367e0 = rax10;
            rbx6 = rax10;
            goto addr_4041b8_4;
        }
    }
    return rax9;
}

void fun_404310() {
    uint64_t rax1;
    int16_t ax2;

    *reinterpret_cast<int32_t*>(&rax1) = ax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax1) < 0) 
        goto 0x404332;
    __asm__("syscall ");
    if (rax1 < 0xfffffffffffff001) {
        return;
    }
}

void fun_404410(int64_t rdi) {
}

struct s82 {
    signed char f0;
    signed char f1;
    signed char f2;
};

struct s83 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_4044c9(struct s82* rdi, struct s83* rsi) {
    rdi->f2 = rsi->f2;
    rdi->f1 = rsi->f1;
    rdi->f0 = rsi->f0;
    goto 0x4044b8;
}

void fun_4044ba(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    *rdi = *rsi;
}

struct s84 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_404614(struct s84* rdi, signed char sil) {
    rdi->f2 = sil;
    rdi->f1 = sil;
    rdi->f0 = sil;
    goto 0x4045e1;
}

void fun_404600() {
}

int64_t fun_404690(int64_t rdi, int64_t rsi, uint32_t edx, int64_t rcx) {
    int64_t rax5;
    uint32_t ebx6;
    int64_t rcx7;

    *reinterpret_cast<uint32_t*>(&rax5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    ebx6 = 0;
    *reinterpret_cast<uint32_t*>(&rcx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    if (edx && rsi != rdi) {
        while (*reinterpret_cast<uint32_t*>(&rcx7) < edx && ((*reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<unsigned char*>(rdi + rcx7), ebx6 = *reinterpret_cast<unsigned char*>(rsi + rcx7), !!*reinterpret_cast<signed char*>(&rax5)) && *reinterpret_cast<signed char*>(&rax5) == *reinterpret_cast<signed char*>(&ebx6))) {
            *reinterpret_cast<uint32_t*>(&rcx7) = *reinterpret_cast<uint32_t*>(&rcx7) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        }
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax5) - ebx6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    return rax5;
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

void fun_4012a7(int64_t rdi) {
    int1_t zf2;

    zf2 = rdi == 0;
    if (!zf2) {
    }
    if (zf2) 
        goto 0x4012b7;
    *reinterpret_cast<unsigned char*>(&g4362b8) = 32;
}

int64_t g405090 = 0x4c1a;

int64_t g4050a0 = 0x4c48;

int64_t g405048 = 0x4b5c;

int64_t g405050 = 0x4b6e;

int64_t g405040 = 0x4b42;

void fun_401577() {
    void* rbp1;
    int32_t eax2;
    void* r9_3;
    struct s17* rax4;
    struct s17* rax5;
    struct s17* rdi6;
    struct s17* rdx7;
    struct s17* r13_8;
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
    struct s17* rdx21;
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
    eax2 = reinterpret_cast<int32_t>(g405090());
    if (!eax2) {
        g405078();
        r9_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) - 0x8030);
        g4050a0();
        g405030();
    }
    g4362b8 = 4;
    rax4 = reinterpret_cast<struct s17*>(g405048());
    rax5 = reinterpret_cast<struct s17*>(g405050());
    rdi6 = rax4;
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(&rdx7 + 2) = 0;
    r13_8 = rax5;
    fun_40180c(rdi6, reinterpret_cast<int64_t>(rbp1) - 0xc02f, 0x3fff, reinterpret_cast<int64_t>(rbp1) - 0xd030, 0x200, r9_3);
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (rcx10 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(v11) + reinterpret_cast<int64_t>(rax9)), *reinterpret_cast<signed char*>(&rdx7) = *rcx10, !!*reinterpret_cast<signed char*>(&rdx7)) {
        if (*reinterpret_cast<signed char*>(&rdx7) == 92) {
            *rcx10 = 47;
        }
        rax9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax9) + 1);
    }
    eax12 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s17**>(&r13_8->f0));
    if (*reinterpret_cast<uint16_t*>(&eax12) > 0xd7ff) {
        rsi13 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) - 0xe044);
        rdi6 = r13_8;
        eax14 = fun_40436d(rdi6, rsi13, rdx7, rcx10, 0x200, rdi6, rsi13, rdx7, rcx10, 0x200);
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
    rdx21 = reinterpret_cast<struct s17*>(reinterpret_cast<uint16_t>(r13_8) + (reinterpret_cast<int64_t>(rax16) + reinterpret_cast<int64_t>(rax16)));
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
                rax25 = fun_40437c(*reinterpret_cast<uint32_t*>(&rdi6), rsi19, rdx21, rcx17);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx17) >= reinterpret_cast<uint64_t>(r10_18)) 
                    break;
                ++rcx17;
                rax25 = rax25 >> 8;
            } while (rax25);
            eax26 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s17**>(&rdx21->f0));
            if (*reinterpret_cast<uint16_t*>(&eax26) > 0xd7ff) {
                rdi6 = rdx21;
                eax27 = fun_40436d(rdi6, rsi19, rdx21, rcx17, r8_20);
            } else {
                v15 = eax26;
                eax27 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax28) = eax27;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
            rdx21 = reinterpret_cast<struct s17*>(reinterpret_cast<uint16_t>(rdx21) + (reinterpret_cast<int64_t>(rax28) + reinterpret_cast<int64_t>(rax28)));
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
    g405040(rdi6, rsi19);
    goto 0x401472;
}

void fun_403817(uint64_t rdi, struct s13* rsi) {
    struct s14* rbx3;
    void* rdx4;
    struct s14* rcx5;
    struct s16* rax6;

    *reinterpret_cast<int32_t*>(&rbx3) = 0;
    *reinterpret_cast<int32_t*>(&rbx3 + 1) = 0;
    if (rdi && ((rbx3 = reinterpret_cast<struct s14*>(rdi * reinterpret_cast<uint64_t>(rsi)), !!((rdi | reinterpret_cast<uint64_t>(rsi)) & 0xffffffffffff0000)) && (rdx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx3) % rdi), !reinterpret_cast<int1_t>(rsi == reinterpret_cast<uint32_t>(rbx3) / rdi)))) {
        rbx3 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
    }
    rax6 = fun_40238e(rbx3, rsi, rdx4, rcx5);
    if (rax6 && *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax6) + 0xfffffffffffffff8) & 3) {
        fun_404562(rax6);
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

int64_t g4362c8 = 0;

struct s30* fun_401ac6(struct s14* rdi, struct s14* rsi) {
    goto g4362c8;
}

void fun_404340() {
}
