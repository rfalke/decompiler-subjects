
int64_t __gmon_start__ = 0;

void fun_400400();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400400();
    }
    return;
}

int64_t __gmon_start__ = 0x400406;

void fun_400400() {
    goto __gmon_start__;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (!0 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int32_t fib(int32_t edi) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;

    if (edi > 1) {
        eax2 = fib(edi - 1);
        eax3 = fib(edi - 2);
        eax4 = eax3 + eax2;
    } else {
        eax4 = edi;
    }
    return eax4;
}

int64_t __libc_start_main = 0x4003f6;

void fun_4003f0(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t printf = 0x4003e6;

void fun_4003e0(int64_t rdi, int64_t rsi) {
    goto printf;
}

void _fini() {
    return;
}

int64_t fun_400469() {
    if (!0 || 1) {
        return 0;
    } else {
        goto 0;
    }
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

int64_t __JCR_END__ = 0;

void __gmon_start__(int64_t rdi);

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        goto 0x400470;
    } else {
        __gmon_start__(0x600760);
        goto 0x400470;
    }
}

void __libc_csu_fini() {
    return;
}

int64_t g600950 = 0;

void fun_400406() {
    goto g600950;
}

void fun_4003e6() {
    goto 0x4003d0;
}

void main() {
    int32_t eax1;
    int64_t rsi2;

    eax1 = fib(5);
    *reinterpret_cast<int32_t*>(&rsi2) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
    fun_4003e0("%d", rsi2);
    return;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_4003f0(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
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
    *reinterpret_cast<int32_t*>(&rbx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    _init();
    if (!0) {
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600750 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void fun_4003f6() {
    goto 0x4003d0;
}
