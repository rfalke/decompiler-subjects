
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

int64_t fun_4003f0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto printf;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

int32_t g400ad8 = 0x25006625;

int32_t g400adc = 0x7a250064;

int64_t use(int32_t* rdi, struct s0* rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rax6;

    g400ad8 = rsi->f0;
    rsi5 = &rsi->f4;
    g400adc = *rsi5;
    rax6 = fun_4003f0("u %zu %zu %zu %zu\n", rsi5 + 1, rdx, rcx);
    return rax6;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t use_int(uint32_t edi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int64_t rsi5;
    int64_t rax6;

    *reinterpret_cast<uint32_t*>(&rsi5) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    rax6 = fun_4003f0("%d", rsi5, rdx, rcx);
    return rax6;
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

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

signed char global_char = 1;

int16_t global_short = 2;

int32_t global_int = 3;

int64_t global_long = 4;

int64_t global_long_long = 5;

int64_t write_ints(struct s2* rdi, struct s3* rsi) {
    int32_t* rdi3;
    signed char cl4;
    int64_t rdi5;
    int16_t cx6;
    int32_t ecx7;

    rdi->f0 = rsi->f0;
    rdi3 = &rdi->f4;
    __asm__("cvttsd2si ecx, xmm0");
    global_char = cl4;
    *rdi3 = rsi->f4;
    rdi5 = reinterpret_cast<int64_t>(rdi3 + 1);
    __asm__("cvttsd2si ecx, xmm0");
    global_short = cx6;
    __asm__("cvttsd2si ecx, [rbp-0x8]");
    global_int = ecx7;
    __asm__("cvttsd2si rdi, [rbp-0x8]");
    global_long = rdi5;
    __asm__("cvttsd2si rdi, [rbp-0x8]");
    global_long_long = rdi5;
    return 0x79;
}

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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

int64_t read_floats(struct s4* rdi, struct s5* rsi, int64_t rdx, int64_t rcx) {
    struct s6* rdi5;
    struct s7* rsi6;
    struct s8* rdi7;
    struct s9* rsi8;
    struct s10* rdi9;
    struct s11* rsi10;
    struct s12* rdi11;
    struct s13* rsi12;
    struct s14* rdi13;
    struct s15* rsi14;

    __asm__("movss xmm0, [rip+0x2019e0]");
    __asm__("cvtss2sd xmm0, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("addsd xmm0, xmm1");
    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s6*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s7*>(&rsi->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s8*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s9*>(&rsi6->f4);
    __asm__("addsd xmm0, xmm1");
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s10*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s11*>(&rsi8->f4);
    __asm__("fld tword [rip+0x2019d1]");
    __asm__("fld qword [rbp-0x8]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [rbp-0x10]");
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s12*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s13*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s14*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s15*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    use(&rdi13->f4, &rsi14->f4, rdx, rcx);
    return 0x7a;
}

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

struct s19 {
    int32_t f0;
    int32_t f4;
};

void write_floats(struct s16* rdi, struct s17* rsi) {
    struct s18* rdi3;
    struct s19* rsi4;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s18*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s19*>(&rsi->f4);
    __asm__("cvtsd2ss xmm0, xmm0");
    __asm__("movss [rip+0x201973], xmm0");
    rdi3->f0 = rsi4->f0;
    rdi3->f4 = rsi4->f4;
    __asm__("fld qword [rbp-0x8]");
    __asm__("fstp tword [rip+0x201975]");
    return;
}

void converting_between_floats_f1() {
    __asm__("cvtsd2ss xmm0, [0x602050]");
    __asm__("movss [0x602048], xmm0");
    return;
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

void converting_between_floats_d2(struct s20* rdi, struct s21* rsi) {
    __asm__("fld tword [rip+0x201906]");
    __asm__("fstp qword [rbp-0x8]");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [rip+0x2018ce]");
    __asm__("fstp tword [rip+0x2018e0]");
    return;
}

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

int32_t g1;

struct s27 {
    int32_t f0;
    int32_t f4;
};

int32_t g5;

int64_t compare_floats(struct s22* rdi, struct s23* rsi, int64_t rdx) {
    struct s24* rdi4;
    struct s25* rsi5;
    struct s26* rsi6;
    struct s1* rsi7;
    int64_t rcx8;
    unsigned char al9;
    int32_t* rdi10;
    struct s1* rsi11;
    int64_t rcx12;
    unsigned char al13;
    int32_t* rdi14;
    struct s1* rsi15;
    int32_t* rdi16;
    struct s1* rsi17;
    struct s27* rsi18;
    struct s1* rsi19;
    struct s27* rsi20;

    rdi->f0 = rsi->f0;
    rdi4 = reinterpret_cast<struct s24*>(&rdi->f4);
    rsi5 = reinterpret_cast<struct s25*>(&rsi->f4);
    rdi4->f0 = rsi5->f0;
    rsi6 = reinterpret_cast<struct s26*>(&rsi5->f4);
    rdi4->f4 = rsi6->f0;
    rsi7 = reinterpret_cast<struct s1*>(&rsi6->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(!__intrinsic());
    al9 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16 == 0)) & *reinterpret_cast<unsigned char*>(&rcx8)) & 1);
    *reinterpret_cast<uint32_t*>(&rdi10) = al9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi10), rsi7, rdx, rcx8);
    *rdi10 = rsi7->f0;
    rsi11 = reinterpret_cast<struct s1*>(&rsi7->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<unsigned char*>(&rcx12) = __intrinsic();
    al13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!al9)) | *reinterpret_cast<unsigned char*>(&rcx12)) & 1);
    *reinterpret_cast<uint32_t*>(&rdi14) = al13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi14), rsi11, rdx, rcx12);
    *rdi14 = rsi11->f0;
    rsi15 = reinterpret_cast<struct s1*>(&rsi11->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<uint32_t*>(&rdi16) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(al13 == 0))))) & 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi16), rsi15, rdx, rcx12);
    *rdi16 = rsi15->f0;
    rsi17 = reinterpret_cast<struct s1*>(&rsi15->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    use_int(1, rsi17, rdx, rcx12);
    g1 = rsi17->f0;
    rsi18 = reinterpret_cast<struct s27*>(&rsi17->f4);
    g5 = rsi18->f0;
    rsi19 = reinterpret_cast<struct s1*>(&rsi18->f4);
    __asm__("ucomisd xmm1, xmm0");
    use_int(1, rsi19, rdx, rcx12);
    g1 = rsi19->f0;
    rsi20 = reinterpret_cast<struct s27*>(&rsi19->f4);
    g5 = rsi20->f0;
    __asm__("ucomisd xmm1, xmm0");
    use_int(1, &rsi20->f4, rdx, rcx12);
    return 0x7c;
}

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

int64_t constants(struct s28* rdi, struct s29* rsi, int64_t rdx, int64_t rcx) {
    struct s30* rdi5;
    struct s31* rsi6;
    int32_t* rdi7;
    struct s0* rsi8;
    int32_t* rdi9;
    struct s0* rsi10;
    int32_t* rdi11;
    struct s0* rsi12;
    int32_t* rdi13;
    struct s0* rsi14;

    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s30*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s31*>(&rsi->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = &rdi5->f4;
    rsi8 = reinterpret_cast<struct s0*>(&rsi6->f4);
    __asm__("mulsd xmm1, [rbp-0x8]");
    __asm__("movaps xmm0, xmm1");
    use(rdi7, rsi8, rdx, rcx);
    *rdi7 = rsi8->f0;
    rdi9 = rdi7 + 1;
    rsi10 = reinterpret_cast<struct s0*>(&rsi8->f4);
    __asm__("mulsd xmm0, [rbp-0x8]");
    use(rdi9, rsi10, rdx, rcx);
    *rdi9 = rsi10->f0;
    rdi11 = rdi9 + 1;
    rsi12 = reinterpret_cast<struct s0*>(&rsi10->f4);
    __asm__("mulsd xmm0, [rbp-0x8]");
    use(rdi11, rsi12, rdx, rcx);
    *rdi11 = rsi12->f0;
    rdi13 = rdi11 + 1;
    rsi14 = reinterpret_cast<struct s0*>(&rsi12->f4);
    __asm__("mulsd xmm0, [rbp-0x8]");
    use(rdi13, rsi14, rdx, rcx);
    *rdi13 = rsi14->f0;
    __asm__("mulsd xmm0, [rbp-0x8]");
    use(rdi13 + 1, &rsi14->f4, rdx, rcx);
    return 0x7d;
}

int64_t main() {
    fun_4003f0("%zu %zu %zu %zu %zu\n", 1, 2, 4);
    fun_4003f0("%zu %zu %zu\n", 4, 8, 16);
    return 0;
}

void __libc_csu_fini() {
    return;
}

signed char __TMC_END__ = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return rax2;
}

int64_t g602010 = 0;

void fun_4003f6() {
    goto g602010;
}

void converting_between_floats_f2() {
    __asm__("fld tword [rip+0x201946]");
    __asm__("fstp dword [rbp-0x4]");
    __asm__("movss xmm0, [rbp-0x4]");
    __asm__("movss [0x602048], xmm0");
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [rip+0x2018b6]");
    __asm__("fstp tword [rip+0x2018c0]");
    return;
}

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

int64_t read_ints(struct s32* rdi, struct s33* rsi, int64_t rdx, int64_t rcx) {
    struct s34* rdi5;
    struct s35* rsi6;
    struct s36* rdi7;
    struct s37* rsi8;
    struct s38* rdi9;
    struct s39* rsi10;
    struct s40* rdi11;
    struct s41* rsi12;
    struct s42* rdi13;
    struct s43* rsi14;
    struct s44* rdi15;
    struct s45* rsi16;

    __asm__("xorps xmm0, xmm0");
    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s34*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s35*>(&rsi->f4);
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm0, [rbp-0x8]");
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s36*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s37*>(&rsi6->f4);
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm0, [rbp-0x8]");
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s38*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s39*>(&rsi8->f4);
    __asm__("cvtsi2sd xmm0, dword [0x602034]");
    __asm__("addsd xmm0, [rbp-0x8]");
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s40*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s41*>(&rsi10->f4);
    __asm__("cvtsi2sd xmm0, qword [0x602038]");
    __asm__("addsd xmm0, [rbp-0x8]");
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s42*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s43*>(&rsi12->f4);
    __asm__("cvtsi2sd xmm0, qword [0x602040]");
    __asm__("addsd xmm0, [rbp-0x8]");
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s44*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s45*>(&rsi14->f4);
    rdi15->f0 = rsi16->f0;
    use(&rdi15->f4, &rsi16->f4, rdx, rcx);
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
            *reinterpret_cast<int64_t*>(0x601e08 + rbx7 * 8)(rdi8, r14_5, r13_6);
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
    __asm__("cvtss2sd xmm0, [0x602048]");
    *rdi = *rsi;
    return;
}

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

int64_t basic_operations(struct s46* rdi, struct s47* rsi, int64_t rdx, int64_t rcx) {
    struct s48* rdi5;
    struct s49* rsi6;
    struct s50* rdi7;
    struct s51* rsi8;
    int32_t* rdi9;
    struct s0* rsi10;
    int32_t* rdi11;
    struct s0* rsi12;
    int32_t* rdi13;
    struct s0* rsi14;
    int32_t* rdi15;
    struct s0* rsi16;
    int32_t* rdi17;
    struct s0* rsi18;
    int32_t* rdi19;
    struct s0* rsi20;

    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s48*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s49*>(&rsi->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s50*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s51*>(&rsi6->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = &rdi7->f4;
    rsi10 = reinterpret_cast<struct s0*>(&rsi8->f4);
    __asm__("addsd xmm0, [rbp-0x10]");
    use(rdi9, rsi10, rdx, rcx);
    *rdi9 = rsi10->f0;
    rdi11 = rdi9 + 1;
    rsi12 = reinterpret_cast<struct s0*>(&rsi10->f4);
    __asm__("subsd xmm0, [rbp-0x10]");
    use(rdi11, rsi12, rdx, rcx);
    *rdi11 = rsi12->f0;
    rdi13 = rdi11 + 1;
    rsi14 = reinterpret_cast<struct s0*>(&rsi12->f4);
    __asm__("subsd xmm0, [rbp-0x8]");
    use(rdi13, rsi14, rdx, rcx);
    *rdi13 = rsi14->f0;
    rdi15 = rdi13 + 1;
    rsi16 = reinterpret_cast<struct s0*>(&rsi14->f4);
    __asm__("mulsd xmm0, [rbp-0x10]");
    use(rdi15, rsi16, rdx, rcx);
    *rdi15 = rsi16->f0;
    rdi17 = rdi15 + 1;
    rsi18 = reinterpret_cast<struct s0*>(&rsi16->f4);
    __asm__("divsd xmm0, [rbp-0x10]");
    use(rdi17, rsi18, rdx, rcx);
    *rdi17 = rsi18->f0;
    rdi19 = rdi17 + 1;
    rsi20 = reinterpret_cast<struct s0*>(&rsi18->f4);
    __asm__("divsd xmm0, [rbp-0x8]");
    use(rdi19, rsi20, rdx, rcx);
    *rdi19 = rsi20->f0;
    __asm__("movd rax, xmm0");
    __asm__("movd xmm0, rax");
    use(rdi19 + 1, &rsi20->f4, rdx, 0x8000000000000000);
    return 0x7b;
}
