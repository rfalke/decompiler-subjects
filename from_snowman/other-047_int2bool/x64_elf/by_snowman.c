
int64_t __gmon_start__ = 0;

void fun_400460();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400460();
    }
    return;
}

int64_t __gmon_start__ = 0x400466;

void fun_400460() {
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

/* f() */
int32_t _Z1fv() {
    return 10;
}

int64_t __libc_start_main = 0x400476;

void fun_400470(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

/* g(bool) */
int64_t _Z1gb(uint32_t edi) {
    int64_t rax2;

    *reinterpret_cast<uint32_t*>(&rax2) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    return rax2;
}

void _fini() {
    return;
}

int64_t fun_4004d9() {
    if (!0 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

signed char _edata = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = _edata == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        _edata = 1;
    }
    return rax2;
}

int64_t __JCR_END__ = 0;

void _ITM_registerTMCloneTable(int64_t rdi);

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        goto 0x4004e0;
    } else {
        _ITM_registerTMCloneTable(0x6007c0);
        goto 0x4004e0;
    }
}

void __libc_csu_fini() {
    return;
}

int64_t g6009e0 = 0;

void fun_400466() {
    goto g6009e0;
}

void fun_400476() {
    goto 0x400450;
}

int64_t main() {
    int32_t eax1;

    eax1 = _Z1fv();
    _Z1gb(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax1))));
    return 0;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400470(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
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
            *reinterpret_cast<int64_t*>(0x6007b0 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}
