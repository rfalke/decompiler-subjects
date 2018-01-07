
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

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

void fun_4003f0(int64_t rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void use(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    struct s2* rsi9;
    int64_t v10;

    rdi->f0 = rsi->f0;
    rsi9 = reinterpret_cast<struct s2*>(&rsi->f4);
    rdi->f4 = rsi9->f0;
    fun_4003f0("%f", &rsi9->f4, rdx, rcx, r8, r9, v10);
    return;
}

int64_t printf = 0x4003f6;

void fun_4003f0(int64_t rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    goto printf;
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

void use_int(uint32_t edi, struct s3* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s1* rsi7;
    int64_t v8;

    *reinterpret_cast<uint32_t*>(&rsi7) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    fun_4003f0("%d", rsi7, rdx, rcx, r8, r9, v8);
    return;
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

signed char global_char = 1;

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

int16_t global_short = 2;

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

int32_t global_int = 3;

int64_t global_long = 4;

int64_t global_long_long = 5;

int64_t write_ints(struct s4* rdi, struct s5* rsi) {
    struct s6* rdi3;
    struct s7* rsi4;
    struct s8* rdi5;
    struct s9* rsi6;
    signed char al7;
    struct s10* rdi8;
    struct s11* rsi9;
    int16_t ax10;
    struct s12* rdi11;
    struct s13* rsi12;
    int32_t eax13;
    int64_t rax14;
    int64_t rax15;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s6*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s7*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    rdi5 = reinterpret_cast<struct s8*>(&rdi3->f4);
    rsi6 = reinterpret_cast<struct s9*>(&rsi4->f4);
    __asm__("cvttsd2si eax, xmm0");
    global_char = al7;
    rdi5->f0 = rsi6->f0;
    rdi8 = reinterpret_cast<struct s10*>(&rdi5->f4);
    rsi9 = reinterpret_cast<struct s11*>(&rsi6->f4);
    __asm__("cvttsd2si eax, xmm0");
    global_short = ax10;
    rdi8->f0 = rsi9->f0;
    rdi11 = reinterpret_cast<struct s12*>(&rdi8->f4);
    rsi12 = reinterpret_cast<struct s13*>(&rsi9->f4);
    __asm__("cvttsd2si eax, xmm0");
    global_int = eax13;
    rdi11->f0 = rsi12->f0;
    __asm__("cvttsd2si rax, xmm0");
    global_long = rax14;
    rdi11->f4 = rsi12->f4;
    __asm__("cvttsd2si rax, xmm0");
    global_long_long = rax15;
    return 0x79;
}

struct s14 {
    int32_t f0;
    int32_t f4;
};

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

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

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

struct s27 {
    int32_t f0;
    int32_t f4;
};

int64_t read_floats(struct s14* rdi, struct s15* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s16* rdi7;
    struct s17* rsi8;
    struct s18* rdi9;
    struct s19* rsi10;
    struct s20* rdi11;
    struct s21* rsi12;
    struct s22* rdi13;
    struct s23* rsi14;
    struct s24* rdi15;
    struct s25* rsi16;
    struct s26* rdi17;
    struct s27* rsi18;
    int64_t v19;
    int64_t v20;

    __asm__("pxor xmm0, xmm0");
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s16*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s17*>(&rsi->f4);
    __asm__("movss xmm0, [rip+0x2019cb]");
    __asm__("cvtss2sd xmm0, xmm0");
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s18*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s19*>(&rsi8->f4);
    __asm__("addsd xmm0, xmm1");
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s20*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s21*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s22*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s23*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s24*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s25*>(&rsi14->f4);
    __asm__("addsd xmm0, xmm1");
    rdi15->f0 = rsi16->f0;
    rdi17 = reinterpret_cast<struct s26*>(&rdi15->f4);
    rsi18 = reinterpret_cast<struct s27*>(&rsi16->f4);
    __asm__("fld qword [rbp-0x8]");
    __asm__("fld tword [rip+0x2019b2]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [rbp-0x8]");
    rdi17->f0 = rsi18->f0;
    use(&rdi17->f4, &rsi18->f4, rdx, rcx, r8, r9, v19, v20);
    return 0x7a;
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

void write_floats(struct s28* rdi, struct s29* rsi) {
    struct s30* rdi3;
    struct s31* rsi4;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s30*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s31*>(&rsi->f4);
    __asm__("cvtsd2ss xmm0, [rbp-0x8]");
    __asm__("movss [rip+0x201966], xmm0");
    rdi3->f0 = rsi4->f0;
    rdi3->f4 = rsi4->f4;
    __asm__("fld qword [rbp-0x8]");
    __asm__("fstp tword [rip+0x201968]");
    return;
}

void converting_between_floats_f1(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    __asm__("cvtsd2ss xmm0, xmm0");
    __asm__("movss [rip+0x201935], xmm0");
    return;
}

void converting_between_floats_f2() {
    __asm__("fld tword [rip+0x201940]");
    __asm__("fstp dword [rbp-0x4]");
    __asm__("movss xmm0, [rbp-0x4]");
    __asm__("movss [rip+0x201918], xmm0");
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

void converting_between_floats_d2(struct s32* rdi, struct s33* rsi) {
    __asm__("fld tword [rip+0x201908]");
    __asm__("fstp qword [rbp-0x8]");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [rip+0x2018d3]");
    __asm__("fstp tword [rip+0x2018e5]");
    return;
}

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

int64_t compare_floats(struct s34* rdi, struct s35* rsi) {
    void* rsp3;
    int1_t cf4;
    int1_t below_or_equal5;
    int1_t zf6;
    struct s36* rdi7;
    struct s37* rsi8;
    struct s38* rdi9;
    struct s39* rsi10;
    struct s40* rsi11;
    int32_t eax12;
    struct s3* rsi13;
    struct s41* rdi14;
    int64_t rcx15;
    int64_t r8_16;
    int64_t r9_17;
    struct s42* rsi18;
    int32_t eax19;
    struct s3* rsi20;
    int32_t* rdi21;
    int64_t rcx22;
    int64_t r8_23;
    int64_t r9_24;
    struct s3* rsi25;
    int32_t* rdi26;
    int64_t rcx27;
    int64_t r8_28;
    int64_t r9_29;
    struct s3* rsi30;
    int32_t* rdi31;
    int64_t rcx32;
    int64_t r8_33;
    int64_t r9_34;
    struct s3* rsi35;
    int32_t* rdi36;
    int64_t rcx37;
    int64_t r8_38;
    int64_t r9_39;
    int64_t rcx40;
    int64_t r8_41;
    int64_t r9_42;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    cf4 = reinterpret_cast<uint64_t>(rsp3) < 16;
    below_or_equal5 = reinterpret_cast<uint64_t>(rsp3) <= 16;
    zf6 = reinterpret_cast<uint64_t>(rsp3) - 16 == 0;
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s36*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s37*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s38*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s39*>(&rsi8->f4);
    rdi9->f0 = rsi10->f0;
    rsi11 = reinterpret_cast<struct s40*>(&rsi10->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(!__intrinsic());
    rdi9->f4 = rsi11->f0;
    rsi13 = reinterpret_cast<struct s3*>(&rsi11->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    if (!zf6) {
        eax12 = 0;
    }
    *reinterpret_cast<uint32_t*>(&rdi14) = *reinterpret_cast<unsigned char*>(&eax12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi14), rsi13, 0, rcx15, r8_16, r9_17);
    rdi14->f0 = rsi13->f0;
    rsi18 = reinterpret_cast<struct s42*>(&rsi13->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<unsigned char*>(&eax19) = __intrinsic();
    rdi14->f4 = rsi18->f0;
    rsi20 = reinterpret_cast<struct s3*>(&rsi18->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    if (!zf6) {
        eax19 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rdi21) = *reinterpret_cast<unsigned char*>(&eax19);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi21), rsi20, 1, rcx22, r8_23, r9_24);
    *rdi21 = rsi20->f0;
    rsi25 = reinterpret_cast<struct s3*>(&rsi20->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<uint32_t*>(&rdi26) = reinterpret_cast<uint1_t>(!below_or_equal5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi26), rsi25, 1, rcx27, r8_28, r9_29);
    *rdi26 = rsi25->f0;
    rsi30 = reinterpret_cast<struct s3*>(&rsi25->f4);
    __asm__("ucomisd xmm0, [rbp-0x10]");
    *reinterpret_cast<uint32_t*>(&rdi31) = reinterpret_cast<uint1_t>(!cf4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi31), rsi30, 1, rcx32, r8_33, r9_34);
    *rdi31 = rsi30->f0;
    rsi35 = reinterpret_cast<struct s3*>(&rsi30->f4);
    __asm__("ucomisd xmm0, [rbp-0x8]");
    *reinterpret_cast<uint32_t*>(&rdi36) = reinterpret_cast<uint1_t>(!below_or_equal5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = 0;
    use_int(*reinterpret_cast<uint32_t*>(&rdi36), rsi35, 1, rcx37, r8_38, r9_39);
    *rdi36 = rsi35->f0;
    __asm__("ucomisd xmm0, [rbp-0x8]");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!cf4))), &rsi35->f4, 1, rcx40, r8_41, r9_42);
    return 0x7c;
}

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

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

int64_t constants(struct s43* rdi, struct s44* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s45* rdi7;
    struct s46* rsi8;
    struct s0* rdi9;
    struct s1* rsi10;
    int64_t v11;
    int64_t v12;
    struct s47* rdi13;
    struct s2* rsi14;
    struct s0* rdi15;
    struct s1* rsi16;
    int64_t v17;
    int64_t v18;
    struct s47* rdi19;
    struct s2* rsi20;
    struct s0* rdi21;
    struct s1* rsi22;
    int64_t v23;
    int64_t v24;
    struct s47* rdi25;
    struct s2* rsi26;
    struct s0* rdi27;
    struct s1* rsi28;
    int64_t v29;
    int64_t v30;
    struct s47* rdi31;
    struct s2* rsi32;
    int64_t v33;
    int64_t v34;

    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s45*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s46*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s0*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s1*>(&rsi8->f4);
    __asm__("addsd xmm0, xmm0");
    use(rdi9, rsi10, rdx, rcx, r8, r9, v11, v12);
    rdi9->f0 = rsi10->f0;
    rdi13 = reinterpret_cast<struct s47*>(&rdi9->f4);
    rsi14 = reinterpret_cast<struct s2*>(&rsi10->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s0*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s1*>(&rsi14->f4);
    __asm__("mulsd xmm0, xmm1");
    use(rdi15, rsi16, rdx, rcx, r8, r9, v17, v18);
    rdi15->f0 = rsi16->f0;
    rdi19 = reinterpret_cast<struct s47*>(&rdi15->f4);
    rsi20 = reinterpret_cast<struct s2*>(&rsi16->f4);
    rdi19->f0 = rsi20->f0;
    rdi21 = reinterpret_cast<struct s0*>(&rdi19->f4);
    rsi22 = reinterpret_cast<struct s1*>(&rsi20->f4);
    __asm__("mulsd xmm0, xmm1");
    use(rdi21, rsi22, rdx, rcx, r8, r9, v23, v24);
    rdi21->f0 = rsi22->f0;
    rdi25 = reinterpret_cast<struct s47*>(&rdi21->f4);
    rsi26 = reinterpret_cast<struct s2*>(&rsi22->f4);
    rdi25->f0 = rsi26->f0;
    rdi27 = reinterpret_cast<struct s0*>(&rdi25->f4);
    rsi28 = reinterpret_cast<struct s1*>(&rsi26->f4);
    __asm__("mulsd xmm0, xmm1");
    use(rdi27, rsi28, rdx, rcx, r8, r9, v29, v30);
    rdi27->f0 = rsi28->f0;
    rdi31 = reinterpret_cast<struct s47*>(&rdi27->f4);
    rsi32 = reinterpret_cast<struct s2*>(&rsi28->f4);
    rdi31->f0 = rsi32->f0;
    __asm__("mulsd xmm0, xmm1");
    use(&rdi31->f4, &rsi32->f4, rdx, rcx, r8, r9, v33, v34);
    return 0x7d;
}

int64_t main() {
    int64_t rbp1;

    fun_4003f0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 8, 8, rbp1);
    fun_4003f0("%zu %zu %zu\n", 4, 8, 16, 8, 8, rbp1);
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

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

struct s61 {
    int32_t f0;
    int32_t f4;
};

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f4;
};

struct s64 {
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
    int32_t f4;
};

struct s66 {
    int32_t f0;
    int32_t f4;
};

struct s67 {
    int32_t f0;
    int32_t f4;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    int32_t f0;
    int32_t f4;
};

int64_t read_ints(struct s48* rdi, struct s49* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s50* rdi7;
    struct s51* rsi8;
    struct s52* rdi9;
    struct s53* rsi10;
    struct s54* rdi11;
    struct s55* rsi12;
    struct s56* rdi13;
    struct s57* rsi14;
    struct s58* rdi15;
    struct s59* rsi16;
    struct s60* rdi17;
    struct s61* rsi18;
    struct s62* rdi19;
    struct s63* rsi20;
    struct s64* rdi21;
    struct s65* rsi22;
    struct s66* rdi23;
    struct s67* rsi24;
    struct s68* rdi25;
    struct s69* rsi26;
    struct s70* rdi27;
    struct s71* rsi28;
    int64_t v29;
    int64_t v30;

    __asm__("pxor xmm0, xmm0");
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s50*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s51*>(&rsi->f4);
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s52*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s53*>(&rsi8->f4);
    __asm__("addsd xmm0, xmm1");
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s54*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s55*>(&rsi10->f4);
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s56*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s57*>(&rsi12->f4);
    __asm__("addsd xmm0, xmm1");
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s58*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s59*>(&rsi14->f4);
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    rdi15->f0 = rsi16->f0;
    rdi17 = reinterpret_cast<struct s60*>(&rdi15->f4);
    rsi18 = reinterpret_cast<struct s61*>(&rsi16->f4);
    __asm__("addsd xmm0, xmm1");
    rdi17->f0 = rsi18->f0;
    rdi19 = reinterpret_cast<struct s62*>(&rdi17->f4);
    rsi20 = reinterpret_cast<struct s63*>(&rsi18->f4);
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, rax");
    rdi19->f0 = rsi20->f0;
    rdi21 = reinterpret_cast<struct s64*>(&rdi19->f4);
    rsi22 = reinterpret_cast<struct s65*>(&rsi20->f4);
    __asm__("addsd xmm0, xmm1");
    rdi21->f0 = rsi22->f0;
    rdi23 = reinterpret_cast<struct s66*>(&rdi21->f4);
    rsi24 = reinterpret_cast<struct s67*>(&rsi22->f4);
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, rax");
    rdi23->f0 = rsi24->f0;
    rdi25 = reinterpret_cast<struct s68*>(&rdi23->f4);
    rsi26 = reinterpret_cast<struct s69*>(&rsi24->f4);
    __asm__("addsd xmm0, xmm1");
    rdi25->f0 = rsi26->f0;
    rdi27 = reinterpret_cast<struct s70*>(&rdi25->f4);
    rsi28 = reinterpret_cast<struct s71*>(&rsi26->f4);
    rdi27->f0 = rsi28->f0;
    use(&rdi27->f4, &rsi28->f4, rdx, rcx, r8, r9, v29, v30);
    return 0x78;
}

void converting_between_floats_d1(int32_t* rdi, int32_t* rsi) {
    __asm__("movss xmm0, [rip+0x201909]");
    __asm__("cvtss2sd xmm0, xmm0");
    *rdi = *rsi;
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [rip+0x2018c8]");
    __asm__("fstp tword [rip+0x2018d2]");
    return;
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

struct s72 {
    int32_t f0;
    int32_t f4;
};

struct s73 {
    int32_t f0;
    int32_t f4;
};

struct s74 {
    int32_t f0;
    int32_t f4;
};

struct s75 {
    int32_t f0;
    int32_t f4;
};

struct s76 {
    int32_t f0;
    int32_t f4;
};

struct s77 {
    int32_t f0;
    int32_t f4;
};

int64_t basic_operations(struct s72* rdi, struct s73* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s74* rdi7;
    struct s75* rsi8;
    struct s76* rdi9;
    struct s77* rsi10;
    struct s0* rdi11;
    struct s1* rsi12;
    int64_t v13;
    int64_t v14;
    struct s0* rdi15;
    struct s1* rsi16;
    int64_t v17;
    int64_t v18;
    struct s0* rdi19;
    struct s1* rsi20;
    int64_t v21;
    int64_t v22;
    struct s0* rdi23;
    struct s1* rsi24;
    int64_t v25;
    int64_t v26;
    struct s0* rdi27;
    struct s1* rsi28;
    int64_t v29;
    int64_t v30;
    struct s0* rdi31;
    struct s1* rsi32;
    int64_t v33;
    int64_t v34;
    struct s47* rdi35;
    struct s2* rsi36;
    int64_t v37;
    int64_t v38;

    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s74*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s75*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s76*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s77*>(&rsi8->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s0*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s1*>(&rsi10->f4);
    __asm__("addsd xmm0, [rbp-0x10]");
    use(rdi11, rsi12, rdx, rcx, r8, r9, v13, v14);
    rdi11->f0 = rsi12->f0;
    rdi15 = reinterpret_cast<struct s0*>(&rdi11->f4);
    rsi16 = reinterpret_cast<struct s1*>(&rsi12->f4);
    __asm__("subsd xmm0, [rbp-0x10]");
    use(rdi15, rsi16, rdx, rcx, r8, r9, v17, v18);
    rdi15->f0 = rsi16->f0;
    rdi19 = reinterpret_cast<struct s0*>(&rdi15->f4);
    rsi20 = reinterpret_cast<struct s1*>(&rsi16->f4);
    __asm__("subsd xmm0, [rbp-0x8]");
    use(rdi19, rsi20, rdx, rcx, r8, r9, v21, v22);
    rdi19->f0 = rsi20->f0;
    rdi23 = reinterpret_cast<struct s0*>(&rdi19->f4);
    rsi24 = reinterpret_cast<struct s1*>(&rsi20->f4);
    __asm__("mulsd xmm0, [rbp-0x10]");
    use(rdi23, rsi24, rdx, rcx, r8, r9, v25, v26);
    rdi23->f0 = rsi24->f0;
    rdi27 = reinterpret_cast<struct s0*>(&rdi23->f4);
    rsi28 = reinterpret_cast<struct s1*>(&rsi24->f4);
    __asm__("divsd xmm0, [rbp-0x10]");
    use(rdi27, rsi28, rdx, rcx, r8, r9, v29, v30);
    rdi27->f0 = rsi28->f0;
    rdi31 = reinterpret_cast<struct s0*>(&rdi27->f4);
    rsi32 = reinterpret_cast<struct s1*>(&rsi28->f4);
    __asm__("divsd xmm0, [rbp-0x8]");
    use(rdi31, rsi32, rdx, rcx, r8, r9, v33, v34);
    rdi31->f0 = rsi32->f0;
    rdi35 = reinterpret_cast<struct s47*>(&rdi31->f4);
    rsi36 = reinterpret_cast<struct s2*>(&rsi32->f4);
    rdi35->f0 = rsi36->f0;
    __asm__("xorpd xmm0, xmm1");
    use(&rdi35->f4, &rsi36->f4, rdx, rcx, r8, r9, v37, v38);
    return 0x7b;
}
