
void call_gmon_start();

void frame_dummy();

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

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        return;
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
        *reinterpret_cast<int32_t*>(&rbx2) = 0x6006a0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
        do {
            --rbx2;
            rax1();
            rax1 = *rbx2;
        } while (rax1 != -1);
    }
    return;
}

signed char _edata = 0;

/* dtor_idx.6343 */
uint64_t dtor_idx_6343 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint64_t rax2;
    uint64_t rax3;

    zf1 = _edata == 0;
    if (zf1) {
        rax2 = dtor_idx_6343;
        if (rax2 < 0) {
            do {
                rax3 = rax2 + 1;
                dtor_idx_6343 = rax3;
                *reinterpret_cast<int64_t*>(rax3 * 8 + 0x6006b0)();
                rax2 = dtor_idx_6343;
            } while (rax2 < 0);
        }
        _edata = 1;
    }
    return;
}

int64_t puts = 0x4003e6;

void fun_4003e0(int64_t rdi) {
    goto puts;
}

int64_t __libc_start_main = 0x4003f6;

void fun_4003f0(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void _fini() {
    __do_global_dtors_aux();
    return;
}

int64_t main() {
    fun_4003e0("Hello, World!");
    return 0;
}

int64_t g600880 = 0;

void fun_4003e6() {
    goto g600880;
}

void __libc_csu_fini() {
    return;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r13d4;
    int64_t r14_5;
    int64_t r15_6;
    uint64_t rbx7;
    int64_t rdi8;

    r13d4 = edi;
    r14_5 = rsi;
    r15_6 = rdx;
    _init();
    if (!1) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x60069c + rbx7 * 8)(rdi8, r14_5, r15_6);
            ++rbx7;
        } while (rbx7 < 0);
    }
    return;
}

void fun_4003f6() {
    goto 0x4003d0;
}

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_4003f0(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}
