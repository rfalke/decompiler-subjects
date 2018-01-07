
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

void fun_4003f0(int64_t rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void use(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    fun_4003f0("%f", rsi, rdx, rcx, r8, r9);
    return;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

void use_int(uint32_t edi, struct s0* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int32_t* rsi7;

    *reinterpret_cast<uint32_t*>(&rsi7) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    fun_4003f0("%d", rsi7, rdx, rcx, r8, r9);
    return;
}

int64_t printf = 0x4003f6;

void fun_4003f0(int64_t rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    goto printf;
}

void _fini() {
    return;
}

void fun_4004a5() {
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
        goto 0x4004a8;
    if (1) 
        goto 0x4004a8;
    goto 0;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

void write_floats(struct s1* rdi, struct s2* rsi) {
    __asm__("cvtsd2ss xmm1, xmm0");
    __asm__("movss [rip+0x200a2e], xmm1");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    __asm__("fld qword [rsp-0x10]");
    __asm__("fstp tword [rip+0x2009fe]");
    return;
}

void converting_between_floats_f1() {
    __asm__("cvtsd2ss xmm0, [rip+0x200a05]");
    __asm__("movss [rip+0x200a05], xmm0");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [rip+0x2009c8]");
    __asm__("fstp qword [rip+0x2009d2]");
    return;
}

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
    signed char[4] pad4;
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

int64_t compare_floats() {
    int1_t cf1;
    int1_t below_or_equal2;
    int1_t zf3;
    struct s3* rdi4;
    int32_t* rsi5;
    struct s4* rdi6;
    struct s5* rsi7;
    struct s6* rsi8;
    struct s7* rdi9;
    struct s0* rsi10;
    int64_t rdx11;
    int64_t rcx12;
    int64_t r8_13;
    int64_t r9_14;
    struct s8* rsi15;
    struct s0* rsi16;
    int32_t* rdi17;
    int64_t rdx18;
    int64_t rcx19;
    int64_t r8_20;
    int64_t r9_21;
    struct s0* rsi22;
    int32_t* rdi23;
    int64_t rdx24;
    int64_t rcx25;
    int64_t r8_26;
    int64_t r9_27;
    struct s0* rsi28;
    int32_t* rdi29;
    int64_t rdx30;
    int64_t rcx31;
    int64_t r8_32;
    int64_t r9_33;
    struct s0* rsi34;
    int32_t* rdi35;
    int64_t rdx36;
    int64_t rcx37;
    int64_t r8_38;
    int64_t r9_39;
    int64_t rdx40;
    int64_t rcx41;
    int64_t r8_42;
    int64_t r9_43;

    cf1 = reinterpret_cast<uint64_t>(__zero_stack_offset()) < 24;
    below_or_equal2 = reinterpret_cast<uint64_t>(__zero_stack_offset()) <= 24;
    zf3 = reinterpret_cast<uint64_t>(__zero_stack_offset()) - 24 == 0;
    __asm__("ucomisd xmm0, xmm1");
    *reinterpret_cast<uint32_t*>(&rdi4) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    rdi4->f0 = *rsi5;
    rdi6 = reinterpret_cast<struct s4*>(&rdi4->f4);
    rsi7 = reinterpret_cast<struct s5*>(&rsi8->f4);
    rdi6->f0 = rsi7->f0;
    rdi9 = reinterpret_cast<struct s7*>(&rdi6->f4);
    rsi10 = reinterpret_cast<struct s0*>(&rsi7->f4);
    if (!zf3) {
        *reinterpret_cast<uint32_t*>(&rdi9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = 0;
    }
    use_int(*reinterpret_cast<uint32_t*>(&rdi9), rsi10, rdx11, rcx12, r8_13, r9_14);
    rdi9->f0 = rsi10->f0;
    rsi15 = reinterpret_cast<struct s8*>(&rsi10->f4);
    rdi9->f4 = rsi15->f0;
    rsi16 = reinterpret_cast<struct s0*>(&rsi15->f4);
    __asm__("ucomisd xmm2, xmm3");
    *reinterpret_cast<uint32_t*>(&rdi17) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
    if (!zf3) {
        *reinterpret_cast<uint32_t*>(&rdi17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
    }
    use_int(*reinterpret_cast<uint32_t*>(&rdi17), rsi16, rdx18, rcx19, r8_20, r9_21);
    *rdi17 = rsi16->f0;
    rsi22 = reinterpret_cast<struct s0*>(&rsi16->f4);
    __asm__("ucomisd xmm2, [rsp+0x8]");
    *reinterpret_cast<uint32_t*>(&rdi23) = reinterpret_cast<uint1_t>(!below_or_equal2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi23), rsi22, rdx24, rcx25, r8_26, r9_27);
    *rdi23 = rsi22->f0;
    rsi28 = reinterpret_cast<struct s0*>(&rsi22->f4);
    __asm__("ucomisd xmm2, [rsp+0x8]");
    *reinterpret_cast<uint32_t*>(&rdi29) = reinterpret_cast<uint1_t>(!cf1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi29), rsi28, rdx30, rcx31, r8_32, r9_33);
    *rdi29 = rsi28->f0;
    rsi34 = reinterpret_cast<struct s0*>(&rsi28->f4);
    __asm__("ucomisd xmm3, [rsp]");
    *reinterpret_cast<uint32_t*>(&rdi35) = reinterpret_cast<uint1_t>(!below_or_equal2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi35), rsi34, rdx36, rcx37, r8_38, r9_39);
    *rdi35 = rsi34->f0;
    __asm__("ucomisd xmm3, [rsp]");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!cf1))), &rsi34->f4, rdx40, rcx41, r8_42, r9_43);
    return 0x7c;
}

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

int64_t constants(struct s9* rdi, struct s10* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* rsi14;

    rdi->f0 = rsi->f0;
    rdi7 = &rdi->f4;
    rsi8 = &rsi->f4;
    __asm__("addsd xmm0, xmm0");
    use(rdi7, rsi8, rdx, rcx, r8, r9);
    *rdi7 = *rsi8;
    rdi9 = rdi7 + 1;
    rsi10 = rsi8 + 1;
    __asm__("mulsd xmm0, [rip+0x15c]");
    use(rdi9, rsi10, rdx, rcx, r8, r9);
    *rdi9 = *rsi10;
    rdi11 = rdi9 + 1;
    rsi12 = rsi10 + 1;
    __asm__("mulsd xmm0, [rip+0x151]");
    use(rdi11, rsi12, rdx, rcx, r8, r9);
    *rdi11 = *rsi12;
    rdi13 = rdi11 + 1;
    rsi14 = rsi12 + 1;
    __asm__("mulsd xmm0, [rip+0x146]");
    use(rdi13, rsi14, rdx, rcx, r8, r9);
    *rdi13 = *rsi14;
    __asm__("mulsd xmm0, [rip+0x13b]");
    use(rdi13 + 1, rsi14 + 1, rdx, rcx, r8, r9);
    return 0x7d;
}

int64_t main() {
    fun_4003f0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 8, 8);
    fun_4003f0("%zu %zu %zu\n", 4, 8, 16, 8, 8);
    return 0;
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
    __asm__("fld tword [rip+0x2009e6]");
    __asm__("fstp dword [rip+0x2009f8]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [rip+0x2009d3]");
    __asm__("fstp tword [rip+0x2009b5]");
    return;
}

int64_t read_ints(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("movapd xmm1, xmm0");
    __asm__("addsd xmm1, [rip+0x3f9]");
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm0, xmm1");
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, dword [rip+0x200afa]");
    __asm__("addsd xmm1, xmm0");
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200ae1]");
    __asm__("addsd xmm1, xmm0");
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200ac8]");
    __asm__("addsd xmm0, xmm1");
    use(rdi, rsi, rdx, rcx, r8, r9);
    return 0x78;
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

int64_t __libc_start_main = 0;

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void converting_between_floats_d1(int32_t* rdi, int32_t* rsi) {
    __asm__("cvtss2sd xmm0, [rip+0x2009ef]");
    *rdi = *rsi;
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [rip+0x2009be]");
    __asm__("fstp tword [rip+0x2009a8]");
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

int64_t basic_operations(struct s11* rdi, struct s12* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s13* rdi7;
    struct s14* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* rsi14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t* rdi17;
    int32_t* rsi18;
    int32_t* rdi19;
    int32_t* rsi20;

    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s13*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s14*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = &rdi7->f4;
    rsi10 = &rsi8->f4;
    __asm__("addsd xmm0, xmm1");
    use(rdi9, rsi10, rdx, rcx, r8, r9);
    *rdi9 = *rsi10;
    rdi11 = rdi9 + 1;
    rsi12 = rsi10 + 1;
    __asm__("subsd xmm0, [rsp+0x8]");
    use(rdi11, rsi12, rdx, rcx, r8, r9);
    *rdi11 = *rsi12;
    rdi13 = rdi11 + 1;
    rsi14 = rsi12 + 1;
    __asm__("subsd xmm4, [rsp]");
    __asm__("movapd xmm0, xmm4");
    use(rdi13, rsi14, rdx, rcx, r8, r9);
    *rdi13 = *rsi14;
    rdi15 = rdi13 + 1;
    rsi16 = rsi14 + 1;
    __asm__("mulsd xmm0, [rsp+0x8]");
    use(rdi15, rsi16, rdx, rcx, r8, r9);
    *rdi15 = *rsi16;
    rdi17 = rdi15 + 1;
    rsi18 = rsi16 + 1;
    __asm__("divsd xmm0, [rsp+0x8]");
    use(rdi17, rsi18, rdx, rcx, r8, r9);
    *rdi17 = *rsi18;
    rdi19 = rdi17 + 1;
    rsi20 = rsi18 + 1;
    __asm__("divsd xmm4, [rsp]");
    __asm__("movapd xmm0, xmm4");
    use(rdi19, rsi20, rdx, rcx, r8, r9);
    *rdi19 = *rsi20;
    __asm__("xorpd xmm0, [rip+0x26a]");
    use(rdi19 + 1, rsi20 + 1, rdx, rcx, r8, r9);
    return 0x7b;
}

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

int64_t read_floats(struct s15* rdi, struct s16* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s17* rdi7;
    struct s18* rsi8;

    __asm__("cvtss2sd xmm0, [rip+0x200a71]");
    __asm__("addsd xmm0, [rip+0x361]");
    __asm__("addsd xmm0, [rip+0x200a59]");
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s17*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s18*>(&rsi->f4);
    __asm__("fld tword [rip+0x200a3e]");
    __asm__("fadd qword [rsp]");
    __asm__("fstp qword [rsp+0x8]");
    rdi7->f0 = rsi8->f0;
    use(&rdi7->f4, &rsi8->f4, rdx, rcx, r8, r9);
    return 0x7a;
}
