
void call_gmon_start();

int64_t frame_dummy();

void __do_global_ctors_aux();

void _init() {
    call_gmon_start();
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

int64_t __gmon_start__ = 0;

void call_gmon_start() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __JCR_END__ = 0;

int64_t frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

int64_t __CTOR_LIST__ = -1;

void __do_global_ctors_aux() {
    int64_t rax1;
    int64_t* rbx2;

    rax1 = __CTOR_LIST__;
    if (rax1 != -1) {
        *reinterpret_cast<int32_t*>(&rbx2) = 0x600e18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
        do {
            --rbx2;
            rax1();
            rax1 = *rbx2;
        } while (rax1 != -1);
    }
    return;
}

int64_t __libc_start_main = 0x40040e;

void fun_400408(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

signed char _edata = 0;

/* dtor_idx.6989 */
uint64_t dtor_idx_6989 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    uint64_t rdx2;
    int64_t rax3;
    uint64_t rax4;

    zf1 = _edata == 0;
    if (zf1) {
        rdx2 = dtor_idx_6989;
        rax3 = 1;
        if (rdx2 < 0) {
            do {
                rax4 = rdx2 + 1;
                dtor_idx_6989 = rax4;
                rax3 = reinterpret_cast<int64_t>(*reinterpret_cast<int64_t*>(rax4 * 8 + 0x600e28)());
                rdx2 = dtor_idx_6989;
            } while (rdx2 < 0);
        }
        _edata = 1;
    }
    return rax3;
}

int64_t puts = 0x4003fe;

void fun_4003f8(int64_t rdi) {
    goto puts;
}

int64_t main();

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400408(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

int64_t _fini() {
    int64_t rax1;

    rax1 = __do_global_dtors_aux();
    return rax1;
}

int64_t g600ff8 = 0;

void fun_40040e() {
    goto g600ff8;
}

int64_t main() {
    fun_4003f8("Hello world.");
    return 0;
}

void fun_4003fe() {
    goto 0x4003e8;
}

void __libc_csu_fini() {
    return;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r14d4;
    int64_t r13_5;
    int64_t r12_6;
    uint64_t rbx7;
    int64_t rdi8;

    r14d4 = edi;
    r13_5 = rsi;
    r12_6 = rdx;
    _init();
    if (!1) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r14d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600e14 + rbx7 * 8)(rdi8, r13_5, r12_6);
            ++rbx7;
        } while (rbx7 < 0);
    }
    return;
}
