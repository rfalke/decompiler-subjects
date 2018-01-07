
int64_t __gmon_start__ = 0;

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

void fill(signed char* rdi, int32_t esi);

void use(signed char* rdi, int64_t rsi);

void with_alloca(int32_t edi) {
    int64_t rax2;
    void* rsp3;
    int64_t rsi4;
    void* rsp5;
    signed char* rdx6;
    int64_t* rsp7;
    int64_t* rsp8;
    int64_t* rsp9;

    rax2 = edi;
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rsi4 = rax2;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 16 - (reinterpret_cast<uint64_t>(rax2 * 4 + 30) & 0xfffffffffffffff0));
    rdx6 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp5) + 15 & 0xfffffffffffffff0);
    rsp7 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp5) - 8);
    *rsp7 = 0x400566;
    fill(rdx6, *reinterpret_cast<int32_t*>(&rsi4));
    rsp8 = rsp7 + 1 - 1;
    *rsp8 = 0x40056f;
    use(reinterpret_cast<int64_t>(rsp3) - 8, rsi4);
    rsp9 = rsp8 + 1 - 1;
    *rsp9 = 0x400577;
    use(rdx6, rsi4);
    *(rsp9 + 1 - 1) = 0x400580;
    use(reinterpret_cast<int64_t>(rsp3) - 4, rsi4);
    return;
}

struct s0 {
    int64_t f0;
    signed char f8;
};

void with_array(int32_t edi) {
    int64_t rax2;
    void* rsp3;
    int64_t rsi4;
    signed char* rsp5;
    int64_t* rsp6;
    struct s0* rsp7;
    signed char* rsp8;
    int64_t* rsp9;

    rax2 = edi;
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rsi4 = rax2;
    rsp5 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp3) - 16 - (reinterpret_cast<uint64_t>(rax2 * 4 + 18) & 0xfffffffffffffff0));
    rsp6 = reinterpret_cast<int64_t*>(rsp5 - 8);
    *rsp6 = 0x40050e;
    fill(rsp5, *reinterpret_cast<int32_t*>(&rsi4));
    rsp7 = reinterpret_cast<struct s0*>(rsp6 + 1 - 1);
    rsp7->f0 = 0x400517;
    use(reinterpret_cast<int64_t>(rsp3) - 8, rsi4);
    rsp8 = &rsp7->f8;
    rsp9 = reinterpret_cast<int64_t*>(rsp8 - 8);
    *rsp9 = 0x40051f;
    use(rsp8, rsi4);
    *(rsp9 + 1 - 1) = 0x400528;
    use(reinterpret_cast<int64_t>(rsp3) - 4, rsi4);
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

int32_t __TMC_END__ = 0;

void use(signed char* rdi, int64_t rsi) {
    int32_t tmp32_3;

    tmp32_3 = __TMC_END__ + *rdi;
    __TMC_END__ = tmp32_3;
    return;
}

void fill(signed char* rdi, int32_t esi) {
    int64_t rsi2;
    int64_t rcx3;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    rcx3 = static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi2)) << 2;
    while (*reinterpret_cast<int32_t*>(&rcx3)) {
        *reinterpret_cast<int32_t*>(&rcx3) = *reinterpret_cast<int32_t*>(&rcx3) - 1;
        *rdi = 0x78;
        ++rdi;
    }
    return;
}

int64_t main(int32_t edi) {
    with_alloca(edi);
    with_array(edi);
    return 0;
}

void _fini() {
    return;
}

int64_t __libc_start_main = 0;

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_400475() {
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
        goto 0x400478;
    if (1) 
        goto 0x400478;
    goto 0;
}

void __libc_csu_fini() {
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
            *reinterpret_cast<int64_t*>(0x600e48 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (1 != rbx7);
    }
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
