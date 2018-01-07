
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

void fun_4003f0(void* rdi, int64_t rsi) {
    goto memset;
}

int32_t __TMC_END__ = 0;

void with_array(int32_t edi) {
    int64_t rax2;
    uint64_t rbx3;
    void* r14_4;
    void* rax5;
    int64_t rax6;
    int64_t rcx7;

    *reinterpret_cast<int32_t*>(&rax2) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    rbx3 = 0x7fffffff0 & reinterpret_cast<uint64_t>(rax2 * 4 + 15);
    r14_4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8);
    rax5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r14_4) - rbx3);
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rax5) - 8) = 0x400553;
    fun_4003f0(rax5, 0x78);
    *reinterpret_cast<int32_t*>(&rax6) = __TMC_END__;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx7) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_4) + reinterpret_cast<int64_t>(-rbx3));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    __TMC_END__ = static_cast<int32_t>(rax6 + rcx7 + 15);
    return;
}

void with_alloca(int32_t edi) {
    void* r14_2;
    uint64_t rbx3;
    void* rdi4;
    int64_t rax5;
    int64_t rcx6;

    r14_2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8);
    rbx3 = reinterpret_cast<uint64_t>(edi * 4 + 15) & 0xfffffffffffffff0;
    rdi4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r14_2) - rbx3);
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rdi4) - 8) = 0x4005a3;
    fun_4003f0(rdi4, 0x78);
    *reinterpret_cast<int32_t*>(&rax5) = __TMC_END__;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx6) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_2) + reinterpret_cast<int64_t>(-rbx3));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    __TMC_END__ = static_cast<int32_t>(rax5 + rcx6 + 15);
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

int64_t __libc_start_main = 0;

int64_t main(int32_t edi);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

int64_t main(int32_t edi) {
    with_alloca(edi);
    with_array(edi);
    return 0;
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
