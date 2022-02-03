
int64_t memcpy = 0x401046;

void fun_401040(uint64_t rdi, int64_t rsi, uint64_t rdx, unsigned char* rcx, unsigned char* r8, unsigned char* r9) {
    goto memcpy;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x415060;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t sprintf = 0x401056;

int32_t fun_401050(int64_t rdi, int64_t rsi, unsigned char* rdx, unsigned char* rcx, unsigned char* r8, unsigned char* r9, unsigned char* a7, unsigned char* a8, uint64_t a9, uint64_t a10, uint64_t a11, uint64_t a12, uint64_t a13, uint64_t a14, uint64_t a15, uint64_t a16, uint64_t a17, uint64_t a18) {
    goto sprintf;
}

int64_t write = 0x401036;

int32_t fun_401030(int64_t rdi, uint64_t rsi) {
    goto write;
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

void fun_40107f() {
    __asm__("outsd ");
}

void fun_401087() {
    __asm__("outsd ");
}

struct s0 {
    unsigned char f0;
    signed char f1;
};

void fun_40109d() {
    uint64_t* rsp1;
    uint64_t v2;
    int1_t less_or_equal3;
    unsigned char* rdx4;
    unsigned char* rcx5;
    unsigned char* r8_6;
    unsigned char* r9_7;
    unsigned char* r13_8;
    uint64_t rax9;
    uint64_t v10;
    uint64_t v11;
    uint64_t v12;
    uint64_t v13;
    int32_t eax14;
    unsigned char* rdx15;
    unsigned char* rdi16;
    unsigned char* v17;
    unsigned char* v18;
    unsigned char** rsp19;
    unsigned char* rbp20;
    uint64_t r13_21;
    uint64_t rdi22;
    uint64_t rbx23;
    uint64_t r12_24;
    int32_t eax25;
    int32_t* rsi26;
    uint64_t rdx27;
    int32_t v28;
    int32_t r14d29;
    uint32_t edx30;
    uint32_t edx31;
    int32_t* r15_32;
    uint32_t edx33;
    struct s0* rax34;
    uint32_t edx35;
    uint32_t edx36;
    int32_t* r15_37;
    uint64_t rdx38;
    int64_t v39;

    rsp1 = reinterpret_cast<uint64_t*>(__zero_stack_offset());
    v2 = reinterpret_cast<uint64_t>(__return_address());
    if (!less_or_equal3) {
        while (1) {
            eax14 = fun_401050(0x415080, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n", rdx4, rcx5, r8_6, r9_7, r13_8, r13_8, rax9, rax9, rax9, rax9, rax9, v2, v10, v11, v12, v13);
            rdx15 = r13_8 + reinterpret_cast<uint64_t>(r13_8) * 4;
            rdi16 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdx15) + reinterpret_cast<uint64_t>(rdx15));
            v17 = rdi16;
            v18 = rdi16;
            rsp19 = reinterpret_cast<unsigned char**>(rsp1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1 + 12);
            if (reinterpret_cast<uint64_t>(rdi16) > reinterpret_cast<uint64_t>(rbp20)) {
                r13_21 = reinterpret_cast<uint64_t>(static_cast<int64_t>(eax14));
                do {
                    rdi22 = rbx23;
                    rbx23 = rbx23 + r13_21;
                    fun_401040(rdi22, 0x415080, r13_21, rcx5, r8_6, r9_7);
                    rsp19 = rsp19 - 1 + 1;
                    if (rbx23 >= 0x414060) {
                        *reinterpret_cast<int32_t*>(&r12_24) = reinterpret_cast<int32_t>("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_24) + 4) = 0;
                        while (1) {
                            eax25 = fun_401030(1, r12_24);
                            rsp19 = rsp19 - 1 + 1;
                            if (reinterpret_cast<uint1_t>(eax25 < 0) | reinterpret_cast<uint1_t>(eax25 == 0)) {
                                if (r12_24 >= 0x414060) 
                                    break;
                            } else {
                                r12_24 = r12_24 + static_cast<int64_t>(eax25);
                                if (r12_24 >= 0x414060) 
                                    goto addr_401207_12;
                            }
                        }
                    } else {
                        addr_401140_13:
                        rsi26 = reinterpret_cast<int32_t*>(rsp19 + 2);
                        *reinterpret_cast<int32_t*>(&rcx5) = 0x415080;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
                        goto addr_40115e_14;
                    }
                    addr_401207_12:
                    rdx27 = rbx23;
                    rbx23 = rbx23 - 0x10000;
                    fun_401040("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n", 0x414060, rdx27 - 0x414060, rcx5, r8_6, r9_7);
                    rsp19 = rsp19 - 1 + 1;
                    goto addr_401140_13;
                    while (1) {
                        addr_40115e_14:
                        rcx5 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx5) + static_cast<int64_t>(v28 + r14d29));
                        edx30 = *rcx5;
                        if (*reinterpret_cast<signed char*>(&edx30) <= 54) {
                            edx31 = edx30 + 3;
                            ++rsi26;
                            *rcx5 = *reinterpret_cast<unsigned char*>(&edx31);
                            if (r15_32 == rsi26) 
                                break;
                        } else {
                            edx33 = edx30 - 7;
                            rax34 = reinterpret_cast<struct s0*>(rcx5 - 1);
                            *rcx5 = *reinterpret_cast<unsigned char*>(&edx33);
                            edx35 = *(rcx5 - 1);
                            if (*reinterpret_cast<signed char*>(&edx35) == 57) {
                                do {
                                    edx35 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax34) - 1);
                                    rax34 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rax34) - 1);
                                    rax34->f1 = 48;
                                } while (*reinterpret_cast<signed char*>(&edx35) == 57);
                            }
                            edx36 = edx35 + 1;
                            ++rsi26;
                            rax34->f0 = *reinterpret_cast<unsigned char*>(&edx36);
                            if (r15_37 == rsi26) 
                                break;
                        }
                    }
                    rbp20 = rbp20 + 3;
                } while (reinterpret_cast<uint64_t>(v17) > reinterpret_cast<uint64_t>(rbp20));
            }
            ++r14d29;
            if (r14d29 == 20) 
                break;
            r13_8 = v18;
            rdx38 = reinterpret_cast<uint64_t>(r13_8 + 2);
            rax9 = reinterpret_cast<uint64_t>(r13_8 + 1);
            r9_7 = r13_8;
            r8_6 = r13_8;
            v13 = rdx38;
            rcx5 = r13_8;
            v12 = rdx38;
            v11 = rdx38;
            v10 = rdx38;
            rsp1 = reinterpret_cast<uint64_t*>(rsp19 - 1 - 1 - 1 - 1 - 1);
            v2 = rdx38;
            rdx4 = r13_8;
        }
        goto v39;
    }
}

void fun_4010a3() {
    __asm__("outsd ");
}

void fun_4010ab() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x4010fa;
}

void fun_4010b1() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x4010f8;
}

void fun_4010b7() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x4010fe;
}

int64_t __libc_start_main = 0;

void main();

void fun_401243() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401330, 0x4013a0, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401273() {
    __asm__("cli ");
    return;
}

signed char __TMC_END__ = 0;

int64_t fun_4012f3() {
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

int64_t fun_401323() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401333(int32_t edi, int64_t rsi, int64_t rdx) {
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

void fun_4013a3() {
    __asm__("cli ");
    return;
}

void fun_4013ab() {
    __asm__("cli ");
    return;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

void fun_401046() {
    goto 0x401020;
}

void fun_401056() {
    goto 0x401020;
}

void main() {
}
