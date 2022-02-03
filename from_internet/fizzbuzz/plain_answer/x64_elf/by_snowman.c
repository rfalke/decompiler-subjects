
int64_t puts = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi) {
    goto puts;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x404030;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t printf = 0x401046;

void fun_401040(int64_t rdi, int64_t rsi) {
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

void main();

void fun_4010f3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x4011e0, 0x401250, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401123() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_4011a3() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = __bss_start == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        __bss_start = 1;
        return rax3;
    }
}

int64_t fun_4011d3() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_4011e3(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t r13_5;
    int32_t r12d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r14_4 = rdx;
    r13_5 = rsi;
    r12d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r12d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x403e10 + rbx7 * 8)(rdi8, r13_5, r14_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_401253() {
    __asm__("cli ");
    return;
}

void fun_40125b() {
    __asm__("cli ");
    return;
}

void fun_4010c2() {
    int64_t rsi1;
    int32_t ebx2;
    int64_t rax3;
    uint64_t rax4;
    int64_t rbp5;
    int32_t eax6;
    int64_t v7;

    while (1) {
        addr_4010c8_2:
        *reinterpret_cast<int32_t*>(&rsi1) = ebx2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
        fun_401040("%d\n", rsi1);
        while (++ebx2, ebx2 != 0x3b9aca00) {
            do {
                *reinterpret_cast<int32_t*>(&rax3) = ebx2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
                rax4 = reinterpret_cast<uint64_t>(rax3 * rbp5) >> 34;
                eax6 = ebx2 - static_cast<int32_t>(rax4 + rax4 * 4);
                if (reinterpret_cast<uint32_t>(ebx2 * 0xaaaaaaab) <= 0x55555555) 
                    break;
                if (eax6) 
                    goto addr_4010c8_2;
                ++ebx2;
                fun_401030("Buzz", rsi1);
            } while (ebx2 != 0x3b9aca00);
            break;
            if (!eax6) {
                fun_401030("FizzBuzz", rsi1);
            } else {
                fun_401030("Fizz", rsi1);
            }
        }
        break;
    }
    goto v7;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

void fun_401046() {
    goto 0x401020;
}

void main() {
    goto 0x401081;
}
