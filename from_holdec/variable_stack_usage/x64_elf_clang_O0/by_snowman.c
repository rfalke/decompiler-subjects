
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

void fun_4003f0(int32_t* rdi, int64_t rsi, int64_t rdx) {
    goto memset;
}

void fill(int32_t* rdi, int32_t esi);

void use(int32_t* rdi, int64_t rsi);

void* with_array(int32_t edi) {
    void* rsp2;
    void* rsp3;
    int64_t rax4;
    int32_t* rcx5;
    int64_t rsi6;
    int64_t* rsp7;
    int64_t* rsp8;
    int64_t* rsp9;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 32);
    *reinterpret_cast<int32_t*>(&rax4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rcx5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) - (reinterpret_cast<uint64_t>(rax4 * 4 + 15) & 0x7fffffff0));
    *reinterpret_cast<int32_t*>(&rsi6) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    rsp7 = reinterpret_cast<int64_t*>(rcx5 - 2);
    *rsp7 = 0x4005a2;
    fill(rcx5, *reinterpret_cast<int32_t*>(&rsi6));
    rsp8 = rsp7 + 1 - 1;
    *rsp8 = 0x4005ab;
    use(reinterpret_cast<int64_t>(rsp2) - 8, rsi6);
    rsp9 = rsp8 + 1 - 1;
    *rsp9 = 0x4005b4;
    use(rcx5, rsi6);
    *(rsp9 + 1 - 1) = 0x4005bd;
    use(reinterpret_cast<int64_t>(rsp2) - 20, rsi6);
    return rsp3;
}

void fill(int32_t* rdi, int32_t esi) {
    fun_4003f0(rdi, 0x78, static_cast<int64_t>(esi) << 2);
    return;
}

int32_t __TMC_END__ = 0;

void use(int32_t* rdi, int64_t rsi) {
    int32_t tmp32_3;

    tmp32_3 = *rdi + __TMC_END__;
    __TMC_END__ = tmp32_3;
    return;
}

void with_alloca(int32_t edi) {
    void* rsp2;
    int32_t* rcx3;
    int64_t rsi4;
    int64_t* rsp5;
    int64_t* rsp6;
    int64_t* rsp7;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rcx3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 32 - (reinterpret_cast<uint64_t>(edi * 4 + 15) & 0xfffffffffffffff0));
    *reinterpret_cast<int32_t*>(&rsi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0;
    rsp5 = reinterpret_cast<int64_t*>(rcx3 - 2);
    *rsp5 = 0x400612;
    fill(rcx3, *reinterpret_cast<int32_t*>(&rsi4));
    rsp6 = rsp5 + 1 - 1;
    *rsp6 = 0x40061b;
    use(reinterpret_cast<int64_t>(rsp2) - 8, rsi4);
    rsp7 = rsp6 + 1 - 1;
    *rsp7 = 0x400624;
    use(rcx3, rsi4);
    *(rsp7 + 1 - 1) = 0x40062d;
    use(reinterpret_cast<int64_t>(rsp2) - 20, rsi4);
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

int64_t __libc_start_main = 0;

int64_t main(int32_t edi, int64_t rsi);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

int64_t main(int32_t edi, int64_t rsi) {
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
