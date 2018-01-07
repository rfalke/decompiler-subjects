
int64_t __gmon_start__ = 0;

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t printf = 0x4003f6;

void use(int32_t* rdi, int32_t* rsi) {
    goto printf;
}

void use_int(int32_t edi, int32_t* rsi) {
    goto printf;
}

void fun_4003f0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    goto printf;
}

void _fini() {
    return;
}

void fun_4004f5() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void __gmon_start__();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        __gmon_start__();
    }
    if (1) 
        goto 0x4004f8;
    if (1) 
        goto 0x4004f8;
    goto 0;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void write_floats(struct s0* rdi, struct s1* rsi) {
    rdi->f0 = rsi->f0;
    __asm__("cvtsd2ss xmm1, xmm0");
    rdi->f4 = rsi->f4;
    __asm__("fld qword [rsp-0x10]");
    __asm__("movss [rip+0x200a01], xmm1");
    __asm__("fstp tword [rip+0x2009e3]");
    return;
}

void converting_between_floats_f1() {
    __asm__("cvtsd2ss xmm0, [rip+0x2009ea]");
    __asm__("movss [rip+0x2009ea], xmm0");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [rip+0x2009ad]");
    __asm__("fstp qword [rip+0x2009b7]");
    return;
}

uint64_t __gmon_start__;

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

int64_t compare_floats() {
    int32_t* rsi1;
    struct s2* rsi2;
    struct s3* rsi3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rsi6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rsi9;
    int32_t* rsi10;

    __asm__("ucomisd xmm0, xmm1");
    *reinterpret_cast<int32_t*>(&__gmon_start__) = *rsi1;
    rsi2 = reinterpret_cast<struct s2*>(&rsi3->f4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&__gmon_start__) + 4) = rsi2->f0;
    rdi4 = reinterpret_cast<int32_t*>(8);
    rsi5 = &rsi2->f4;
    *reinterpret_cast<unsigned char*>(&rdi4) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        *reinterpret_cast<int32_t*>(&rdi4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    }
    use_int(*reinterpret_cast<int32_t*>(&rdi4), rsi5);
    *rdi4 = *rsi5;
    rsi6 = rsi5 + 1;
    *reinterpret_cast<int32_t*>(&rdi7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = 0;
    __asm__("ucomisd xmm6, [rsp+0x8]");
    *reinterpret_cast<unsigned char*>(&rdi7) = __intrinsic();
    if (0) {
        *reinterpret_cast<int32_t*>(&rdi7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = 0;
    }
    use_int(*reinterpret_cast<int32_t*>(&rdi7), rsi6);
    *rdi7 = *rsi6;
    rsi8 = rsi6 + 1;
    __asm__("ucomisd xmm2, [rsp+0x8]");
    use_int(0, rsi8);
    *reinterpret_cast<int32_t*>(&__gmon_start__) = *rsi8;
    rsi9 = rsi8 + 1;
    __asm__("ucomisd xmm4, [rsp+0x8]");
    use_int(1, rsi9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&__gmon_start__) + 1) = *rsi9;
    rsi10 = rsi9 + 1;
    __asm__("ucomisd xmm6, [rsp]");
    use_int(0, rsi10);
    *reinterpret_cast<int32_t*>(&__gmon_start__) = *rsi10;
    __asm__("ucomisd xmm0, [rsp]");
    use_int(1, rsi10 + 1);
    return 0x7c;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

int64_t constants(struct s4* rdi, struct s5* rsi) {
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;

    rdi->f0 = rsi->f0;
    rdi3 = &rdi->f4;
    rsi4 = &rsi->f4;
    __asm__("addsd xmm0, xmm0");
    use(rdi3, rsi4);
    *rdi3 = *rsi4;
    rdi5 = rdi3 + 1;
    rsi6 = rsi4 + 1;
    __asm__("mulsd xmm0, [rip+0x112]");
    use(rdi5, rsi6);
    *rdi5 = *rsi6;
    rdi7 = rdi5 + 1;
    rsi8 = rsi6 + 1;
    __asm__("mulsd xmm0, [rip+0x107]");
    use(rdi7, rsi8);
    *rdi7 = *rsi8;
    rdi9 = rdi7 + 1;
    rsi10 = rsi8 + 1;
    __asm__("mulsd xmm0, [rip+0xfc]");
    use(rdi9, rsi10);
    *rdi9 = *rsi10;
    __asm__("mulsd xmm0, [rip+0xf1]");
    use(rdi9 + 1, rsi10 + 1);
    return 0x7d;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600e08 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t g601010 = 0;

void fun_4003f6() {
    goto g601010;
}

signed char __bss_start = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = __bss_start == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        __bss_start = 1;
    }
    return rax2;
}

void converting_between_floats_f2() {
    __asm__("fld tword [rip+0x2009cb]");
    __asm__("fstp dword [rip+0x2009dd]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [rip+0x2009b8]");
    __asm__("fstp tword [rip+0x20099a]");
    return;
}

int64_t read_ints(int32_t* rdi, int32_t* rsi) {
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm1, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm0, xmm1");
    __asm__("cvtsi2sd xmm1, dword [rip+0x200ad3]");
    __asm__("addsd xmm1, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200abe]");
    __asm__("addsd xmm1, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200aa9]");
    __asm__("addsd xmm0, xmm1");
    use(rdi, rsi);
    return 0x78;
}

int64_t main() {
    fun_4003f0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 8, 8);
    fun_4003f0("%zu %zu %zu\n", 4, 8, 16, 8, 8);
    return 0;
}

void converting_between_floats_d1(int32_t* rdi, int32_t* rsi) {
    __asm__("cvtss2sd xmm0, [rip+0x2009d4]");
    *rdi = *rsi;
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [rip+0x2009a3]");
    __asm__("fstp tword [rip+0x20098d]");
    return;
}

signed char global_char = 1;

int16_t global_short = 2;

int32_t global_int = 3;

int64_t global_long = 4;

int64_t global_long_long = 5;

int64_t write_ints() {
    signed char al1;
    int16_t ax2;
    int32_t eax3;
    int64_t rax4;
    int64_t rax5;

    __asm__("cvttsd2si eax, xmm0");
    global_char = al1;
    global_short = ax2;
    global_int = eax3;
    __asm__("cvttsd2si rax, xmm0");
    global_long = rax4;
    global_long_long = rax5;
    return 0x79;
}

int64_t __libc_start_main = 0;

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

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

int64_t basic_operations(struct s6* rdi, struct s7* rsi) {
    struct s8* rdi3;
    struct s9* rsi4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* rsi14;
    int32_t* rdi15;
    int32_t* rsi16;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s8*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s9*>(&rsi->f4);
    __asm__("addsd xmm0, xmm1");
    rdi3->f0 = rsi4->f0;
    rdi5 = &rdi3->f4;
    rsi6 = &rsi4->f4;
    use(rdi5, rsi6);
    *rdi5 = *rsi6;
    rdi7 = rdi5 + 1;
    rsi8 = rsi6 + 1;
    __asm__("subsd xmm0, [rsp+0x8]");
    use(rdi7, rsi8);
    *rdi7 = *rsi8;
    rdi9 = rdi7 + 1;
    rsi10 = rsi8 + 1;
    __asm__("subsd xmm0, [rsp]");
    use(rdi9, rsi10);
    *rdi9 = *rsi10;
    rdi11 = rdi9 + 1;
    rsi12 = rsi10 + 1;
    __asm__("mulsd xmm0, [rsp+0x8]");
    use(rdi11, rsi12);
    *rdi11 = *rsi12;
    rdi13 = rdi11 + 1;
    rsi14 = rsi12 + 1;
    __asm__("divsd xmm0, [rsp+0x8]");
    use(rdi13, rsi14);
    *rdi13 = *rsi14;
    rdi15 = rdi13 + 1;
    rsi16 = rsi14 + 1;
    __asm__("divsd xmm0, [rsp]");
    use(rdi15, rsi16);
    *rdi15 = *rsi16;
    __asm__("xorps xmm0, [rip+0x1d8]");
    use(rdi15 + 1, rsi16 + 1);
    return 0x7b;
}

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

int64_t read_floats(struct s10* rdi, struct s11* rsi) {
    struct s12* rdi3;
    struct s13* rsi4;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtss2sd xmm0, [rip+0x200a52]");
    __asm__("fld tword [rip+0x200a34]");
    __asm__("addsd xmm0, xmm1");
    __asm__("addsd xmm0, [rip+0x200a38]");
    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s12*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s13*>(&rsi->f4);
    __asm__("fadd qword [rsp]");
    __asm__("fstp qword [rsp+0x8]");
    rdi3->f0 = rsi4->f0;
    use(&rdi3->f4, &rsi4->f4);
    return 0x7a;
}
