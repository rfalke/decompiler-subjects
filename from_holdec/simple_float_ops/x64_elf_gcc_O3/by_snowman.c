
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

void fun_4003f0(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
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
    __asm__("pxor xmm1, xmm1");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    __asm__("fld qword [rsp-0x10]");
    __asm__("cvtsd2ss xmm1, xmm0");
    __asm__("fstp tword [rip+0x200990]");
    __asm__("movss [rip+0x2009a0], xmm1");
    return;
}

void converting_between_floats_f1() {
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsd2ss xmm0, [rip+0x200984]");
    __asm__("movss [rip+0x200984], xmm0");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [rip+0x20092a]");
    __asm__("fstp qword [rip+0x200934]");
    return;
}

uint120_t g400a20 = 0x7a25006425006625;

uint64_t __gmon_start__;

int32_t g400a2f = 0x2520757a;

int64_t compare_floats() {
    int32_t* rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;
    int64_t r9_5;
    int32_t* rsi6;
    int64_t rdx7;
    int64_t rcx8;
    int64_t r8_9;
    int64_t r9_10;
    int64_t rdx11;
    int64_t rcx12;
    int64_t r8_13;
    int64_t r9_14;
    int64_t rdx15;
    int64_t rcx16;
    int64_t r8_17;
    int64_t r9_18;
    int64_t rdx19;
    int64_t rcx20;
    int64_t r8_21;
    int64_t r9_22;
    int64_t rdx23;
    int64_t rcx24;
    int64_t r8_25;
    int64_t r9_26;

    __asm__("ucomisd xmm0, xmm1");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 3) = *reinterpret_cast<int32_t*>(&__gmon_start__);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 7) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&__gmon_start__) + 4);
    rsi1 = reinterpret_cast<int32_t*>(8);
    *reinterpret_cast<unsigned char*>(&rsi1) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi1) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
    }
    fun_4003f0("zu %zu %zu %zu\n", rsi1, rdx2, rcx3, r8_4, r9_5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 11) = *rsi1;
    g400a2f = *reinterpret_cast<int32_t*>(&__gmon_start__);
    rsi6 = reinterpret_cast<int32_t*>(4);
    __asm__("ucomisd xmm2, xmm3");
    *reinterpret_cast<unsigned char*>(&rsi6) = __intrinsic();
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    }
    fun_4003f0("%d", rsi6, rdx7, rcx8, r8_9, r9_10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 3) = *rsi6;
    __asm__("ucomisd xmm2, [rsp+0x8]");
    fun_4003f0("%d", 0, rdx11, rcx12, r8_13, r9_14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 3) = *reinterpret_cast<int32_t*>(&__gmon_start__);
    __asm__("ucomisd xmm2, [rsp+0x8]");
    fun_4003f0("%d", 1, rdx15, rcx16, r8_17, r9_18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 3) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&__gmon_start__) + 1);
    __asm__("ucomisd xmm3, [rsp]");
    fun_4003f0("%d", 0, rdx19, rcx20, r8_21, r9_22);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 3) = *reinterpret_cast<int32_t*>(&__gmon_start__);
    __asm__("ucomisd xmm3, [rsp]");
    fun_4003f0("%d", 1, rdx23, rcx24, r8_25, r9_26);
    return 0x7c;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

int64_t constants() {
    int32_t* rsi1;
    int32_t* rsi2;
    struct s2* rsi3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t r8_6;
    int64_t r9_7;
    int32_t* rsi8;
    int64_t rdx9;
    int64_t rcx10;
    int64_t r8_11;
    int64_t r9_12;
    int32_t* rsi13;
    int64_t rdx14;
    int64_t rcx15;
    int64_t r8_16;
    int64_t r9_17;
    int32_t* rsi18;
    int64_t rdx19;
    int64_t rcx20;
    int64_t r8_21;
    int64_t r9_22;
    int64_t rdx23;
    int64_t rcx24;
    int64_t r8_25;
    int64_t r9_26;

    *reinterpret_cast<int32_t*>(&g400a20) = *rsi1;
    rsi2 = &rsi3->f4;
    __asm__("addsd xmm0, xmm0");
    fun_4003f0("d", rsi2, rdx4, rcx5, r8_6, r9_7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 4) = *rsi2;
    rsi8 = rsi2 + 1;
    __asm__("mulsd xmm0, [rip+0x123]");
    fun_4003f0("%f", rsi8, rdx9, rcx10, r8_11, r9_12);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi8;
    rsi13 = rsi8 + 1;
    __asm__("mulsd xmm0, [rip+0x10e]");
    fun_4003f0("%f", rsi13, rdx14, rcx15, r8_16, r9_17);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi13;
    rsi18 = rsi13 + 1;
    __asm__("mulsd xmm0, [rip+0xf9]");
    fun_4003f0("%f", rsi18, rdx19, rcx20, r8_21, r9_22);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi18;
    __asm__("mulsd xmm0, [rip+0xe4]");
    fun_4003f0("%f", rsi18 + 1, rdx23, rcx24, r8_25, r9_26);
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

void use_int(int32_t edi) {
    goto fun_4003f0;
}

int64_t g601010 = 0;

void fun_4003f6() {
    goto g601010;
}

void converting_between_floats_f2() {
    __asm__("fld tword [rip+0x20095a]");
    __asm__("fstp dword [rip+0x20096c]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [rip+0x200932]");
    __asm__("fstp tword [rip+0x200914]");
    return;
}

int64_t read_ints() {
    int32_t* rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;
    int64_t r9_5;

    __asm__("pxor xmm0, xmm0");
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm1, xmm0");
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("addsd xmm0, xmm1");
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, dword [rip+0x200aac]");
    __asm__("addsd xmm1, xmm0");
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200a93]");
    __asm__("addsd xmm1, xmm0");
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, qword [rip+0x200a7a]");
    __asm__("addsd xmm0, xmm1");
    fun_4003f0("%f", rsi1, rdx2, rcx3, r8_4, r9_5);
    return 0x78;
}

int64_t main() {
    fun_4003f0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 8, 8);
    fun_4003f0("%zu %zu %zu\n", 4, 8, 16, 8, 8);
    return 0;
}

void converting_between_floats_d1(int32_t* rdi, int32_t* rsi) {
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtss2sd xmm0, [rip+0x20095c]");
    *rdi = *rsi;
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [rip+0x20091a]");
    __asm__("fstp tword [rip+0x200904]");
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

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

int64_t basic_operations() {
    int32_t* rsi1;
    struct s3* rsi2;
    struct s4* rsi3;
    int32_t* rsi4;
    int64_t rdx5;
    int64_t rcx6;
    int64_t r8_7;
    int64_t r9_8;
    int32_t* rsi9;
    int64_t rdx10;
    int64_t rcx11;
    int64_t r8_12;
    int64_t r9_13;
    int32_t* rsi14;
    int64_t rdx15;
    int64_t rcx16;
    int64_t r8_17;
    int64_t r9_18;
    int32_t* rsi19;
    int64_t rdx20;
    int64_t rcx21;
    int64_t r8_22;
    int64_t r9_23;
    int32_t* rsi24;
    int64_t rdx25;
    int64_t rcx26;
    int64_t r8_27;
    int64_t r9_28;
    int32_t* rsi29;
    int64_t rdx30;
    int64_t rcx31;
    int64_t r8_32;
    int64_t r9_33;
    int64_t rdx34;
    int64_t rcx35;
    int64_t r8_36;
    int64_t r9_37;

    *reinterpret_cast<int32_t*>(&g400a20) = *rsi1;
    rsi2 = reinterpret_cast<struct s3*>(&rsi3->f4);
    __asm__("addsd xmm0, xmm1");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 4) = rsi2->f0;
    rsi4 = &rsi2->f4;
    fun_4003f0("u %zu %zu %zu %zu\n", rsi4, rdx5, rcx6, r8_7, r9_8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 8) = *rsi4;
    rsi9 = rsi4 + 1;
    __asm__("subsd xmm0, [rsp+0x8]");
    fun_4003f0("%f", rsi9, rdx10, rcx11, r8_12, r9_13);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi9;
    rsi14 = rsi9 + 1;
    __asm__("subsd xmm4, [rsp]");
    __asm__("movapd xmm0, xmm4");
    fun_4003f0("%f", rsi14, rdx15, rcx16, r8_17, r9_18);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi14;
    rsi19 = rsi14 + 1;
    __asm__("mulsd xmm0, [rsp+0x8]");
    fun_4003f0("%f", rsi19, rdx20, rcx21, r8_22, r9_23);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi19;
    rsi24 = rsi19 + 1;
    __asm__("divsd xmm0, [rsp+0x8]");
    fun_4003f0("%f", rsi24, rdx25, rcx26, r8_27, r9_28);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi24;
    rsi29 = rsi24 + 1;
    __asm__("divsd xmm4, [rsp]");
    __asm__("movapd xmm0, xmm4");
    fun_4003f0("%f", rsi29, rdx30, rcx31, r8_32, r9_33);
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi29;
    __asm__("xorpd xmm0, [rip+0x27d]");
    fun_4003f0("%f", rsi29 + 1, rdx34, rcx35, r8_36, r9_37);
    return 0x7b;
}

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

int64_t read_floats() {
    int32_t* rsi1;
    struct s5* rsi2;
    struct s6* rsi3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t r8_6;
    int64_t r9_7;

    __asm__("pxor xmm0, xmm0");
    __asm__("fld tword [rip+0x200a02]");
    __asm__("cvtss2sd xmm0, [rip+0x200a08]");
    __asm__("addsd xmm0, [rip+0x3f8]");
    __asm__("addsd xmm0, [rip+0x2009f0]");
    *reinterpret_cast<int32_t*>(&g400a20) = *rsi1;
    rsi2 = reinterpret_cast<struct s5*>(&rsi3->f4);
    __asm__("fadd qword [rsp]");
    __asm__("fstp qword [rsp+0x8]");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g400a20) + 4) = rsi2->f0;
    fun_4003f0("u %zu %zu %zu %zu\n", &rsi2->f4, rdx4, rcx5, r8_6, r9_7);
    return 0x7a;
}
