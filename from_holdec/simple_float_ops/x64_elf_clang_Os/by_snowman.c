
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

void fun_4003f0(int32_t* rdi, ...) {
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

void use() {
    goto fun_4003f0;
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
    __asm__("cvtsd2ss xmm1, xmm0");
    __asm__("movss [rip+0x200a4f], xmm1");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    __asm__("fld qword [rsp-0x8]");
    __asm__("fstp tword [rip+0x200a4f]");
    return;
}

void converting_between_floats_f1() {
    __asm__("cvtsd2ss xmm0, [rip+0x200a36]");
    __asm__("movss [rip+0x200a26], xmm0");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [rip+0x200a19]");
    __asm__("fstp qword [rip+0x200a03]");
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

uint56_t g400970 = 0x25006425006625;

int32_t g400977 = 0x2520757a;

int32_t __gmon_start__;

int64_t compare_floats(struct s2* rdi, struct s3* rsi) {
    struct s4* rdi3;
    struct s5* rsi4;
    int32_t* rsi5;
    int64_t rsi6;
    struct s6* rsi7;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s4*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s5*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    rsi5 = &rsi4->f4;
    __asm__("movapd xmm2, xmm0");
    rdi3->f4 = *rsi5;
    rsi6 = reinterpret_cast<int64_t>(rsi5 + 1);
    __asm__("movd rsi, xmm2");
    *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<uint32_t*>(&rsi6) & 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    fun_4003f0(0x400973);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400970) + 3) = rsi7->f0;
    g400977 = rsi7->f4;
    __asm__("movd rsi, xmm0");
    fun_4003f0(0x400973);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400970) + 3) = __gmon_start__;
    __asm__("ucomisd xmm0, [rsp]");
    fun_4003f0(0x400973, 0x400973);
    fun_4003f0(0x400973, 0x400973);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400970) + 3) = __gmon_start__;
    __asm__("ucomisd xmm0, [rsp+0x8]");
    fun_4003f0(0x400973, 0x400973);
    fun_4003f0(0x400973, 0x400973);
    return 0x7c;
}

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

int64_t constants(int32_t* rdi, struct s7* rsi) {
    struct s8* rsi3;
    struct s9* rsi4;
    struct s10* rsi5;

    *rdi = rsi->f0;
    rsi3 = reinterpret_cast<struct s8*>(&rsi->f4);
    __asm__("addsd xmm0, xmm0");
    fun_4003f0(0x400970);
    *reinterpret_cast<int32_t*>(&g400970) = rsi3->f0;
    rsi4 = reinterpret_cast<struct s9*>(&rsi3->f4);
    __asm__("mulsd xmm0, [rsp]");
    fun_4003f0(0x400970);
    *reinterpret_cast<int32_t*>(&g400970) = rsi4->f0;
    rsi5 = reinterpret_cast<struct s10*>(&rsi4->f4);
    __asm__("mulsd xmm0, [rsp]");
    fun_4003f0(0x400970);
    *reinterpret_cast<int32_t*>(&g400970) = rsi5->f0;
    __asm__("mulsd xmm0, [rsp]");
    fun_4003f0(0x400970);
    *reinterpret_cast<int32_t*>(&g400970) = rsi5->f4;
    __asm__("mulsd xmm0, [rip+0x11e]");
    fun_4003f0(0x400970, 0x400970);
    return 0x7d;
}

int64_t main() {
    fun_4003f0(0x400976, 0x400976);
    fun_4003f0(0x40097e, 0x40097e);
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

void use_int(int32_t edi) {
    goto fun_4003f0;
}

int64_t g601010 = 0;

void fun_4003f6() {
    goto g601010;
}

void converting_between_floats_f2() {
    __asm__("fld tword [rip+0x200a37]");
    __asm__("fstp dword [rip+0x200a19]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [rip+0x2009f4]");
    __asm__("fstp tword [rip+0x200a06]");
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
            *reinterpret_cast<int64_t*>(0x600e08 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

int64_t read_ints() {
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("cvtsi2sd xmm1, eax");
    __asm__("addsd xmm1, xmm0");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rip+0x200afa]");
    __asm__("addsd xmm0, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rip+0x200aee]");
    __asm__("addsd xmm1, xmm0");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200ae6]");
    __asm__("addsd xmm0, xmm1");
    fun_4003f0(0x400970);
    return 0x78;
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
    __asm__("cvtss2sd xmm0, [rip+0x200a10]");
    *rdi = *rsi;
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [rip+0x2009ef]");
    __asm__("fstp tword [rip+0x2009f9]");
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

int64_t basic_operations(int32_t* rdi, struct s11* rsi) {
    struct s12* rsi3;

    *rdi = rsi->f0;
    rsi3 = reinterpret_cast<struct s12*>(&rsi->f4);
    __asm__("movapd [rsp+0x10], xmm0");
    __asm__("addsd xmm0, xmm1");
    fun_4003f0(0x400970);
    __asm__("movapd xmm0, [rsp+0x10]");
    __asm__("subsd xmm0, [rsp+0x8]");
    fun_4003f0(0x400970);
    *reinterpret_cast<int32_t*>(&g400970) = rsi3->f0;
    __asm__("subsd xmm0, [rsp+0x10]");
    fun_4003f0(0x400970);
    __asm__("movapd xmm0, [rsp+0x10]");
    __asm__("mulsd xmm0, [rsp+0x8]");
    fun_4003f0(0x400970);
    __asm__("movapd xmm0, [rsp+0x10]");
    __asm__("divsd xmm0, [rsp+0x8]");
    fun_4003f0(0x400970);
    *reinterpret_cast<int32_t*>(&g400970) = rsi3->f4;
    __asm__("divsd xmm0, [rsp+0x10]");
    fun_4003f0(0x400970, 0x400970);
    __asm__("movapd xmm0, [rsp+0x10]");
    __asm__("xorpd xmm0, [rip+0x232]");
    fun_4003f0(0x400970, 0x400970);
    return 0x7b;
}

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

int64_t read_floats(struct s13* rdi, struct s14* rsi) {
    __asm__("cvtss2sd xmm0, [rip+0x200a9b]");
    __asm__("xorpd xmm1, xmm1");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm1, [rip+0x200a93]");
    __asm__("fld tword [rip+0x200a9d]");
    rdi->f0 = rsi->f0;
    __asm__("fadd qword [rsp+0x10]");
    __asm__("fstp qword [rsp+0x8]");
    rdi->f4 = rsi->f4;
    fun_4003f0(0x400970, 0x400970);
    return 0x7a;
}
