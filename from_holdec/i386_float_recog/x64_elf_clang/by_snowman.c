
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x404028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

void fun_401030(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9);

int64_t unknown_to_unknown() {
    int64_t rbp1;
    unsigned char ah2;
    int64_t r10_3;
    unsigned char al4;
    uint64_t rdx5;
    uint64_t rax6;
    int64_t rdx7;
    uint64_t rcx8;
    uint64_t rax9;
    int64_t rcx10;
    uint64_t r8_11;
    uint64_t rax12;
    int64_t r8_13;
    uint32_t edi14;
    uint32_t eax15;
    int64_t r11_16;
    int64_t r9_17;
    uint32_t eax18;
    uint64_t rax19;

    __asm__("movd rax, xmm0");
    *reinterpret_cast<uint32_t*>(&rbp1) = ah2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r10_3) = al4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_3) + 4) = 0;
    rdx5 = rax6 >> 48;
    *reinterpret_cast<uint32_t*>(&rdx7) = *reinterpret_cast<unsigned char*>(&rdx5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rcx8 = rax9 >> 40;
    *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<unsigned char*>(&rcx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    r8_11 = rax12 >> 32;
    *reinterpret_cast<uint32_t*>(&r8_13) = *reinterpret_cast<unsigned char*>(&r8_11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    edi14 = eax15 >> 16;
    *reinterpret_cast<uint32_t*>(&r11_16) = *reinterpret_cast<unsigned char*>(&edi14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_17) = eax18 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = 0;
    fun_401030("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", rax19 >> 56, rdx7, rcx10, r8_13, r9_17, r11_16, rbp1, r10_3);
    return 0;
}

int64_t double_to_unknown() {
    int64_t rbp1;
    unsigned char ah2;
    int64_t r10_3;
    unsigned char al4;
    uint64_t rdx5;
    uint64_t rax6;
    int64_t rdx7;
    uint64_t rcx8;
    uint64_t rax9;
    int64_t rcx10;
    uint64_t r8_11;
    uint64_t rax12;
    int64_t r8_13;
    uint32_t edi14;
    uint32_t eax15;
    int64_t r11_16;
    int64_t r9_17;
    uint32_t eax18;
    uint64_t rax19;

    __asm__("movd rax, xmm0");
    *reinterpret_cast<uint32_t*>(&rbp1) = ah2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r10_3) = al4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_3) + 4) = 0;
    rdx5 = rax6 >> 48;
    *reinterpret_cast<uint32_t*>(&rdx7) = *reinterpret_cast<unsigned char*>(&rdx5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rcx8 = rax9 >> 40;
    *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<unsigned char*>(&rcx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    r8_11 = rax12 >> 32;
    *reinterpret_cast<uint32_t*>(&r8_13) = *reinterpret_cast<unsigned char*>(&r8_11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    edi14 = eax15 >> 16;
    *reinterpret_cast<uint32_t*>(&r11_16) = *reinterpret_cast<unsigned char*>(&edi14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_17) = eax18 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = 0;
    fun_401030("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", rax19 >> 56, rdx7, rcx10, r8_13, r9_17, r11_16, rbp1, r10_3);
    return 0;
}

int64_t unknown_to_double() {
    int32_t* rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;
    int64_t r9_5;
    int64_t rax6;
    int64_t v7;

    __asm__("addsd xmm0, xmm0");
    fun_401030("got 2*x=%f\n", rsi1, rdx2, rcx3, r8_4, r9_5, rax6, __return_address(), v7);
    return 0;
}

int64_t double_to_double() {
    int32_t* rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;
    int64_t r9_5;
    int64_t rax6;
    int64_t v7;

    __asm__("addsd xmm0, xmm0");
    fun_401030("got 2*x=%f\n", rsi1, rdx2, rcx3, r8_4, r9_5, rax6, __return_address(), v7);
    return 0;
}

int64_t printf = 0x401036;

void fun_401030(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9) {
    goto printf;
}

int64_t __gmon_start__ = 0;

void fun_401003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t main(struct s0* rdi, struct s1* rsi);

void fun_401043() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401320, 0x401390, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401073() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_4010f3() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = __bss_start == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        __bss_start = 1;
        return rax3;
    }
}

int64_t fun_401123() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401323(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t r14_5;
    int32_t r13d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r15_4 = rdx;
    r14_5 = rsi;
    r13d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x403e10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_401393() {
    __asm__("cli ");
    return;
}

void fun_40139b() {
    __asm__("cli ");
    return;
}

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

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int32_t g4020ac = 0x6e6b6e75;

int32_t g64;

int32_t g4020b0 = 0x3a6e776f;

int32_t g68;

int32_t g4020b4 = 0x746e6920;

int32_t g6c;

int64_t main(struct s0* rdi, struct s1* rsi) {
    struct s2* rdi3;
    struct s3* rsi4;
    struct s4* rdi5;
    struct s5* rsi6;
    struct s6* rdi7;
    struct s7* rsi8;
    struct s8* rdi9;
    struct s9* rsi10;
    int64_t r8_11;
    int64_t r9_12;
    int64_t v13;
    int64_t v14;
    int64_t v15;
    int64_t r8_16;
    int64_t r9_17;
    int64_t v18;
    int64_t v19;
    int64_t v20;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s3*>(&rsi->f4);
    unknown_to_unknown();
    __asm__("cvtsi2sd xmm1, ebx");
    rdi3->f0 = rsi4->f0;
    rdi5 = reinterpret_cast<struct s4*>(&rdi3->f4);
    rsi6 = reinterpret_cast<struct s5*>(&rsi4->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s6*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s7*>(&rsi6->f4);
    __asm__("addsd xmm0, xmm1");
    double_to_unknown();
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s8*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s9*>(&rsi8->f4);
    unknown_to_double();
    rdi9->f0 = rsi10->f0;
    __asm__("addsd xmm0, [rsp+0x10]");
    double_to_double();
    __asm__("fld qword [rip+0xd8b]");
    __asm__("fstp tword [rsp]");
    rdi9->f4 = rsi10->f4;
    fun_401030("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, 0x65, 0x66, r8_11, r9_12, v13, v14, v15);
    g4020ac = g64;
    g4020b0 = g68;
    __asm__("addsd xmm0, xmm1");
    __asm__("addsd xmm1, [rip+0xd63]");
    g4020b4 = g6c;
    __asm__("fld qword [rsp+0x18]");
    __asm__("fstp tword [rsp]");
    fun_401030("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 0xc8, 0xc9, 0xca, r8_16, r9_17, v18, v19, v20);
    return 0;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}
