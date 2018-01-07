
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

int64_t memset = 0x4003f6;

int32_t* fun_4003f0(uint64_t rdi, int64_t rsi) {
    goto memset;
}

int32_t __TMC_END__ = 0;

void with_alloca(int32_t edi) {
    void* rsp2;
    int32_t* rax3;
    int64_t rdx4;
    int64_t rax5;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - ((static_cast<int64_t>(edi) << 2) + 30 & 0xfffffffffffffff0));
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp2) - 8) = 0x4005dc;
    rax3 = fun_4003f0(reinterpret_cast<uint64_t>(rsp2) + 15 & 0xfffffffffffffff0, 0x78);
    *reinterpret_cast<int32_t*>(&rdx4) = __TMC_END__;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax5) = *rax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    __TMC_END__ = static_cast<int32_t>(rdx4 + rax5 + 15);
    return;
}

void with_array(int32_t edi) {
    void* rsp2;
    uint64_t rbx3;
    int64_t rax4;
    int64_t rdx5;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - ((static_cast<int64_t>(edi) << 2) + 18 & 0xfffffffffffffff0));
    rbx3 = reinterpret_cast<uint64_t>(rsp2) + 3 >> 2;
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp2) - 8) = 0x400586;
    fun_4003f0(rbx3 * 4, 0x78);
    *reinterpret_cast<int32_t*>(&rax4) = *reinterpret_cast<int32_t*>(rbx3 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx5) = __TMC_END__;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    __TMC_END__ = static_cast<int32_t>(rdx5 + rax4 + 15);
    return;
}

void _fini() {
    return;
}

void fun_4004c5() {
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
        goto 0x4004c8;
    if (1) 
        goto 0x4004c8;
    goto 0;
}

void use(int32_t* rdi) {
    int32_t tmp32_2;

    tmp32_2 = __TMC_END__ + *rdi;
    __TMC_END__ = tmp32_2;
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

void fill() {
    goto fun_4003f0;
}

int64_t main(int32_t edi) {
    with_alloca(edi);
    with_array(edi);
    return 0;
}

int64_t __libc_start_main = 0;

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
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
