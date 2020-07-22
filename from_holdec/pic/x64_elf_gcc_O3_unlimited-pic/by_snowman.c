
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x404028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t printf = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi) {
    goto printf;
}

void a_func(int64_t rdi, int64_t rsi) {
    goto printf;
}

int64_t __gmon_start__ = 0;

void fun_401003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

int64_t main();

void fun_401073() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401180, 0x4011f0, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_4010a3() {
    __asm__("cli ");
    return;
}

signed char __TMC_END__ = 0;

int64_t fun_401123() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = __TMC_END__ == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        __TMC_END__ = 1;
        return rax3;
    }
}

int64_t fun_401153() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401183(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t r14_5;
    int32_t r13d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r15_4 = rdx;
    r14_5 = rsi;
    r13d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x403e10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_4011f3() {
    __asm__("cli ");
    return;
}

void fun_4011fb() {
    __asm__("cli ");
    return;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

int32_t a_global = 42;

int64_t main() {
    int64_t rsi1;
    int32_t tmp32_2;

    *reinterpret_cast<int32_t*>(&rsi1) = a_global;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
    fun_401030("in main: %d\n", rsi1);
    tmp32_2 = a_global + 1;
    a_global = tmp32_2;
    a_func("in main: %d\n", rsi1);
    return 0;
}
