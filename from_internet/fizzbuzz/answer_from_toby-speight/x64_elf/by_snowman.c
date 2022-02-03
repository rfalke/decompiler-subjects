
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x404048;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

struct s0 {
    int32_t f0;
    int16_t f4;
    signed char[2] pad8;
    int16_t f8;
};

int64_t sprintf = 0x401066;

int32_t fun_401060(struct s0* rdi, int64_t rsi) {
    goto sprintf;
}

int64_t write = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, ...) {
    goto write;
}

int64_t GOMP_parallel = 0x401076;

void fun_401070(int64_t rdi, void* rsi) {
    goto GOMP_parallel;
}

int64_t omp_get_num_threads = 0x401056;

int32_t fun_401050() {
    goto omp_get_num_threads;
}

int64_t omp_get_thread_num = 0x401046;

int32_t fun_401040() {
    goto omp_get_thread_num;
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

void fun_401263() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401410, 0x401480, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401293() {
    __asm__("cli ");
    return;
}

/* completed.0 */
signed char completed_0 = 0;

int64_t fun_401313() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = completed_0 == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        completed_0 = 1;
        return rax3;
    }
}

int64_t fun_401343() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401413(int32_t edi, int64_t rsi, int64_t rdx) {
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
            *reinterpret_cast<int64_t*>(0x403df0 + rbx7 * 8)(rdi8, r13_5, r14_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_401483() {
    __asm__("cli ");
    return;
}

void fun_40148b() {
    __asm__("cli ");
    return;
}

int64_t nl = 0;

/* main._omp_fn.0 */
void main__omp_fn_0(int32_t** rdi);

unsigned char* g40fc00 = reinterpret_cast<unsigned char*>(0);

struct s1 {
    signed char[8] pad8;
    unsigned char* f8;
};

void fun_401115() {
    void* rsp1;
    struct s0* rbp2;
    int32_t eax3;
    int64_t rbx4;
    int64_t r13_5;
    int32_t edx6;
    int32_t r12_7;
    void* rsp8;
    unsigned char* rax9;
    struct s1* rdi10;
    unsigned char* rdx11;
    uint32_t ecx12;
    unsigned char* rsi13;
    unsigned char* rsi14;
    uint32_t ecx15;

    rsp1 = __zero_stack_offset();
    while (1) {
        eax3 = fun_401060(rbp2, "%d\n");
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        rbp2 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp2) + eax3);
        while (1) {
            *reinterpret_cast<struct s0**>(rbx4 * 8 + 0x404080) = rbp2;
            ++rbx4;
            if (rbx4 == 0x1771) {
                *reinterpret_cast<int32_t*>(&r13_5) = *reinterpret_cast<int32_t*>(&r13_5) + 0x1771;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = 0;
                fun_401030(1, 0x40fc20, 1, 0x40fc20);
                rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
                if (*reinterpret_cast<int32_t*>(&r13_5) == 0x2ee3) 
                    goto addr_401184_5;
                nl = 0x40fc20;
                *reinterpret_cast<int32_t*>(&rbx4) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rbp2) = 0x40fc20;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp2) + 4) = 0;
            }
            edx6 = static_cast<int32_t>(r13_5 + rbx4);
            if (reinterpret_cast<uint32_t>(edx6 * 0xeeeeeeef) > 0x11111111) {
                if (reinterpret_cast<uint32_t>(edx6 * 0xcccccccd) <= 0x33333333) {
                    rbp2->f0 = 0x7a7a7542;
                    rbp2->f4 = 10;
                    rbp2 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp2) + 5);
                } else {
                    if (reinterpret_cast<uint32_t>(edx6 * 0xaaaaaaab) > 0x55555555) 
                        break;
                    rbp2->f0 = 0x7a7a6946;
                    rbp2->f4 = 10;
                    rbp2 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp2) + 5);
                }
            } else {
                rbp2->f0 = r12_7;
                rbp2->f8 = 10;
                rbp2 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp2) + 9);
            }
        }
    }
    addr_401184_5:
    while (1) {
        fun_401070(main__omp_fn_0, reinterpret_cast<int64_t>(rsp1) + 8);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        if (!1) {
            rax9 = g40fc00;
            *reinterpret_cast<int32_t*>(&rdi10) = 0x40fc00;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
            rdx11 = rax9;
            if (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(rdx11)) {
                while (1) {
                    ecx12 = *rax9;
                    if (*reinterpret_cast<unsigned char*>(&ecx12) != 10) {
                        rsi13 = rdx11;
                        if (*reinterpret_cast<unsigned char*>(&ecx12) == 11) {
                            *rax9 = 10;
                            *rdx11 = 49;
                            --rsi13;
                            rdi10 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi10) - 8);
                            rdi10->f8 = rdx11;
                            ecx12 = *rax9;
                        }
                        --rax9;
                        rdx11 = rsi13 - 1;
                        *rsi13 = *reinterpret_cast<unsigned char*>(&ecx12);
                        if (reinterpret_cast<uint64_t>(rax9) >= reinterpret_cast<uint64_t>(rdx11)) 
                            break;
                    } else {
                        rsi14 = rdx11;
                        --rax9;
                        rdi10 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi10) - 8);
                        rdi10->f8 = rdx11 + 1;
                        ecx15 = rax9[1];
                        rdx11 = rsi14 - 1;
                        *rsi14 = *reinterpret_cast<unsigned char*>(&ecx15);
                        if (reinterpret_cast<uint64_t>(rax9) >= reinterpret_cast<uint64_t>(rdx11)) 
                            break;
                    }
                }
            }
        }
        fun_401030(1, 0x40fc20, 1, 0x40fc20);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    }
}

struct s2 {
    unsigned char f0;
    signed char f1;
};

/* main._omp_fn.0 */
void main__omp_fn_0(int32_t** rdi) {
    int32_t** rbx2;
    int32_t eax3;
    int32_t eax4;
    int32_t edx5;
    int32_t eax6;
    int32_t esi7;
    int32_t eax8;
    int64_t rsi9;
    struct s2* rcx10;
    uint32_t edx11;
    int64_t rdi12;
    uint32_t edx13;

    rbx2 = rdi;
    eax3 = fun_401050();
    eax4 = fun_401040();
    __asm__("cdq ");
    edx5 = 0x1770 % eax3;
    eax6 = 0x1770 / eax3;
    if (eax4 < edx5) {
        ++eax6;
        edx5 = 0;
    }
    esi7 = eax4 * eax6 + edx5;
    eax8 = eax6 + esi7;
    if (esi7 < eax8) {
        rsi9 = esi7;
        do {
            if (*reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rsi9 * 8 + 0x404088) - 2) != 0x7a) {
                rcx10 = reinterpret_cast<struct s2*>(*reinterpret_cast<int64_t*>(rsi9 * 8 + 0x404088) - 5);
                edx11 = *reinterpret_cast<unsigned char*>(*reinterpret_cast<int64_t*>(rsi9 * 8 + 0x404088) - 5) + 6;
                *reinterpret_cast<unsigned char*>(*reinterpret_cast<int64_t*>(rsi9 * 8 + 0x404088) - 5) = *reinterpret_cast<unsigned char*>(&edx11);
                if (*reinterpret_cast<signed char*>(&edx11) > reinterpret_cast<signed char>(57)) {
                    do {
                        *reinterpret_cast<uint32_t*>(&rdi12) = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx10) - 1);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = 0;
                        edx13 = edx11 - 10;
                        rcx10 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rcx10) - 1);
                        rcx10->f1 = *reinterpret_cast<signed char*>(&edx13);
                        edx11 = static_cast<uint32_t>(rdi12 + 1);
                        rcx10->f0 = *reinterpret_cast<unsigned char*>(&edx11);
                    } while (*reinterpret_cast<signed char*>(&edx11) > reinterpret_cast<signed char>(57));
                }
                if (reinterpret_cast<uint64_t>(*reinterpret_cast<struct s2**>(rsi9 * 8 + 0x404080)) > reinterpret_cast<uint64_t>(rcx10)) {
                    **rbx2 = **rbx2 + 1;
                }
            }
            ++rsi9;
        } while (eax8 > *reinterpret_cast<int32_t*>(&rsi9));
    }
    return;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

void fun_401066() {
    goto 0x401020;
}

void fun_401076() {
    goto 0x401020;
}

void fun_401056() {
    goto 0x401020;
}

void fun_401046() {
    goto 0x401020;
}

void main() {
}
