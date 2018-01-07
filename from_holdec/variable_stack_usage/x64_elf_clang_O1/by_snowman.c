
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

void fill(int32_t* rdi, int32_t esi) {
    goto memset;
}

int32_t __TMC_END__ = 0;

void use(int32_t* rdi, int64_t rsi) {
    int32_t tmp32_3;

    tmp32_3 = __TMC_END__ + *rdi;
    __TMC_END__ = tmp32_3;
    return;
}

void with_alloca(int32_t edi) {
    void* rsp2;
    int64_t rsi3;
    int32_t* rbx4;
    int64_t* rsp5;
    int64_t* rsp6;
    int64_t* rsp7;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rsi3 = edi;
    rbx4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 - 8 - (reinterpret_cast<uint64_t>(rsi3 * 4 + 15) & 0xfffffffffffffff0));
    rsp5 = reinterpret_cast<int64_t*>(rbx4 - 2);
    *rsp5 = 0x4005d4;
    fill(rbx4, *reinterpret_cast<int32_t*>(&rsi3));
    rsp6 = rsp5 + 1 - 1;
    *rsp6 = 0x4005dd;
    use(reinterpret_cast<int64_t>(rsp2) - 16, rsi3);
    rsp7 = rsp6 + 1 - 1;
    *rsp7 = 0x4005e5;
    use(rbx4, rsi3);
    *(rsp7 + 1 - 1) = 0x4005ee;
    use(reinterpret_cast<int64_t>(rsp2) - 12, rsi3);
    return;
}

void with_array(int32_t edi) {
    void* rsp2;
    int64_t rcx3;
    int32_t* rbx4;
    int64_t rsi5;
    int64_t* rsp6;
    int64_t* rsp7;
    int64_t* rsp8;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    *reinterpret_cast<int32_t*>(&rcx3) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    rbx4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 - 8 - 16 - (0x7fffffff0 & reinterpret_cast<uint64_t>(rcx3 * 4 + 15)));
    *reinterpret_cast<int32_t*>(&rsi5) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    rsp6 = reinterpret_cast<int64_t*>(rbx4 - 2);
    *rsp6 = 0x400578;
    fill(rbx4, *reinterpret_cast<int32_t*>(&rsi5));
    rsp7 = rsp6 + 1 - 1;
    *rsp7 = 0x400581;
    use(reinterpret_cast<int64_t>(rsp2) - 24, rsi5);
    rsp8 = rsp7 + 1 - 1;
    *rsp8 = 0x400589;
    use(rbx4, rsi5);
    *(rsp8 + 1 - 1) = 0x400592;
    use(reinterpret_cast<int64_t>(rsp2) - 20, rsi5);
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
