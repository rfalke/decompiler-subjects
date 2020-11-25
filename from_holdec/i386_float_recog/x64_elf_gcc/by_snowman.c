
void fun_401030(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8);

int64_t unknown_to_unknown() {
    uint64_t r8_1;
    uint64_t r8_2;
    uint64_t rcx3;
    uint64_t rcx4;
    int64_t rcx5;
    uint64_t rdx6;
    uint64_t rdx7;
    int64_t r8_8;
    int64_t rdx9;
    uint64_t rax10;

    __asm__("movd rax, xmm0");
    __asm__("movd r9, xmm0");
    __asm__("movd r8, xmm0");
    __asm__("movd rcx, xmm0");
    r8_1 = r8_2 >> 32;
    rcx3 = rcx4 >> 40;
    __asm__("movd eax, xmm0");
    __asm__("movd rdx, xmm0");
    *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<unsigned char*>(&rcx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rdx6 = rdx7 >> 48;
    *reinterpret_cast<uint32_t*>(&r8_8) = *reinterpret_cast<unsigned char*>(&r8_1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    __asm__("movd rax, xmm0");
    *reinterpret_cast<uint32_t*>(&rdx9) = *reinterpret_cast<unsigned char*>(&rdx6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    fun_401030("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", rax10 >> 56, rdx9, rcx5, r8_8);
    return 0;
}

int64_t double_to_unknown() {
    uint64_t r8_1;
    uint64_t r8_2;
    uint64_t rcx3;
    uint64_t rcx4;
    int64_t rcx5;
    uint64_t rdx6;
    uint64_t rdx7;
    int64_t r8_8;
    int64_t rdx9;
    uint64_t rax10;

    __asm__("movd rax, xmm0");
    __asm__("movd r9, xmm0");
    __asm__("movd r8, xmm0");
    __asm__("movd rcx, xmm0");
    r8_1 = r8_2 >> 32;
    rcx3 = rcx4 >> 40;
    __asm__("movd eax, xmm0");
    __asm__("movd rdx, xmm0");
    *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<unsigned char*>(&rcx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rdx6 = rdx7 >> 48;
    *reinterpret_cast<uint32_t*>(&r8_8) = *reinterpret_cast<unsigned char*>(&r8_1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    __asm__("movd rax, xmm0");
    *reinterpret_cast<uint32_t*>(&rdx9) = *reinterpret_cast<unsigned char*>(&rdx6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    fun_401030("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", rax10 >> 56, rdx9, rcx5, r8_8);
    return 0;
}

int64_t unknown_to_double() {
    int32_t* rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;

    __asm__("addsd xmm0, xmm0");
    fun_401030("got 2*x=%f\n", rsi1, rdx2, rcx3, r8_4);
    return 0;
}

int64_t double_to_double() {
    int32_t* rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;

    __asm__("addsd xmm0, xmm0");
    fun_401030("got 2*x=%f\n", rsi1, rdx2, rcx3, r8_4);
    return 0;
}

int64_t printf = 0x401036;

void fun_401030(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    goto printf;
}

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
    int32_t 0x0;
    int32_t 0x4;
};

struct s1 {
    int32_t 0x0;
    int32_t 0x4;
};

int64_t main(struct s0* rdi, struct s1* rsi);

void fun_401133() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401340, 0x4013b0, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401163() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_4011e3() {
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

int64_t fun_401213() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401343(int32_t edi, int64_t rsi, int64_t rdx) {
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

void fun_4013b3() {
    __asm__("cli ");
    return;
}

void fun_4013bb() {
    __asm__("cli ");
    return;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

struct s2 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s3 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s4 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s5 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s6 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s7 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s8 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s9 {
    int32_t 0x0;
    int32_t 0x4;
};

int32_t g402060 = 0x6e6b6e75;

int32_t g64;

int32_t g402064 = 0x3a6e776f;

int32_t g68;

int32_t g4020a0 = 0x62756f64;

int32_t gc8;

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
    int64_t r8_12;

    rdi->0x0 = rsi->0x0;
    rdi3 = reinterpret_cast<struct s2*>(&rdi->0x4);
    rsi4 = reinterpret_cast<struct s3*>(&rsi->0x4);
    unknown_to_unknown();
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, ebx");
    __asm__("movapd xmm0, xmm1");
    __asm__("addsd xmm0, [rip+0x1090]");
    rdi3->0x0 = rsi4->0x0;
    rdi5 = reinterpret_cast<struct s4*>(&rdi3->0x4);
    rsi6 = reinterpret_cast<struct s5*>(&rsi4->0x4);
    double_to_unknown();
    rdi5->0x0 = rsi6->0x0;
    rdi7 = reinterpret_cast<struct s6*>(&rdi5->0x4);
    rsi8 = reinterpret_cast<struct s7*>(&rsi6->0x4);
    unknown_to_double();
    rdi7->0x0 = rsi8->0x0;
    rdi9 = reinterpret_cast<struct s8*>(&rdi7->0x4);
    rsi10 = reinterpret_cast<struct s9*>(&rsi8->0x4);
    __asm__("movapd xmm0, xmm1");
    __asm__("addsd xmm0, [rip+0x1078]");
    rdi9->0x0 = rsi10->0x0;
    double_to_double();
    __asm__("fld qword [rip+0x1077]");
    rdi9->0x4 = rsi10->0x4;
    __asm__("fstp tword [rsp]");
    fun_401030("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, 0x65, 0x66, r8_11);
    g402060 = g64;
    g402064 = g68;
    __asm__("addsd xmm0, xmm1");
    __asm__("addsd xmm1, [rip+0x1022]");
    g4020a0 = gc8;
    __asm__("fld qword [rsp+0x20]");
    __asm__("fstp tword [rsp]");
    fun_401030("le: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 0xcc, 0xc9, 0xca, r8_12);
    return 0;
}
