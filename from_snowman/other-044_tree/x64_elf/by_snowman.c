
int64_t __gmon_start__ = 0;

void fun_400470();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400470();
    }
    return;
}

int64_t __gmon_start__ = 0x400476;

void fun_400470() {
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

struct s0 {
    int32_t f0;
    signed char[4] pad8;
    struct s0* f8;
    struct s0* f16;
};

void insert(struct s0** rdi, struct s0* rsi) {
    struct s0** rdi3;
    struct s0** rdi4;

    if (*rdi) {
        if (rsi->f0 >= (*rdi)->f0) {
            if (rsi->f0 > (*rdi)->f0) {
                rdi3 = &(*rdi)->f8;
                insert(rdi3, rsi);
            }
        } else {
            rdi4 = &(*rdi)->f16;
            insert(rdi4, rsi);
        }
    } else {
        *rdi = rsi;
    }
    return;
}

struct s1 {
    int32_t f0;
    signed char[4] pad8;
    struct s1* f8;
    struct s1* f16;
};

void fun_400450(int64_t rdi, struct s0* rsi);

void printout(struct s1* rdi, struct s0* rsi) {
    struct s1* rdi3;
    struct s0* rsi4;
    struct s1* rdi5;

    if (rdi->f16) {
        rdi3 = rdi->f16;
        printout(rdi3, rsi);
    }
    *reinterpret_cast<int32_t*>(&rsi4) = rdi->f0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0;
    fun_400450("%d\n", rsi4);
    if (rdi->f8) {
        rdi5 = rdi->f8;
        printout(rdi5, rsi4);
    }
    return;
}

int64_t printf = 0x400456;

void fun_400450(int64_t rdi, struct s0* rsi) {
    goto printf;
}

int64_t malloc = 0x400486;

struct s0* fun_400480(int64_t rdi, struct s0* rsi) {
    goto malloc;
}

int64_t __libc_start_main = 0x400466;

void fun_400460(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t rand = 0x400496;

int32_t fun_400490(int64_t rdi, struct s0* rsi) {
    goto rand;
}

void _fini() {
    return;
}

int64_t fun_4004f9() {
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

void rand(int64_t rdi);

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        goto 0x400500;
    } else {
        rand(0x600908);
        goto 0x400500;
    }
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
            *reinterpret_cast<int64_t*>(0x6008f8 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t g600af8 = 0;

void fun_400476() {
    goto g600af8;
}

void fun_400456() {
    goto 0x400440;
}

void main() {
    void* rbp1;
    int32_t v2;
    struct s0* rsi3;
    struct s0* rax4;
    int32_t eax5;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v2 = 1;
    while (v2 <= 10) {
        rax4 = fun_400480(24, rsi3);
        rax4->f8 = reinterpret_cast<struct s0*>(0);
        rax4->f16 = rax4->f8;
        eax5 = fun_400490(24, rsi3);
        rax4->f0 = eax5;
        rsi3 = rax4;
        insert(reinterpret_cast<int64_t>(rbp1) - 24, rsi3);
        ++v2;
    }
    printout(0, rsi3);
    return;
}

void fun_400486() {
    goto 0x400440;
}

void fun_400466() {
    goto 0x400440;
}

void fun_400496() {
    goto 0x400440;
}

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400460(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}
