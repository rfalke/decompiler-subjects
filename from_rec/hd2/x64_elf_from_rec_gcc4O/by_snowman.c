
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
        *reinterpret_cast<int32_t*>(&rbx2) = 0x600b90;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
        do {
            --rbx2;
            rax1();
            rax1 = *rbx2;
        } while (rax1 != -1);
    }
    return;
}

int64_t sprintf = 0x400596;

void fun_400590(void* rdi, int64_t rsi, uint64_t rdx) {
    goto sprintf;
}

int64_t puts = 0x400556;

void fun_400550(void* rdi) {
    goto puts;
}

int32_t fun_400580(int64_t rdi, uint64_t rsi, void* rdx);

int64_t fun_400560(uint64_t rdi, uint64_t rsi, void* rdx);

void fun_4005c0(uint64_t rdi, uint64_t rsi, void* rdx);

int32_t fun_4005a0(unsigned char* rdi, uint64_t rsi, void* rdx, int64_t rcx);

void dumpline(unsigned char* rdi, uint64_t rsi, int32_t edx, int64_t rcx);

void fun_4005b0(int64_t rdi, uint64_t rsi, void* rdx, int64_t rcx);

int32_t hexdump(uint64_t rdi) {
    void* rsp2;
    void* rdx3;
    int32_t eax4;
    uint64_t rsi5;
    int64_t rax6;
    int64_t r13_7;
    int32_t eax8;
    uint64_t rbp9;
    unsigned char* r12_10;
    int64_t v11;
    int64_t rcx12;
    int32_t eax13;
    uint64_t v14;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 0xa8);
    rdx3 = rsp2;
    eax4 = fun_400580(1, rdi, rdx3);
    if (!eax4) {
        *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>("rb");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
        rax6 = fun_400560(rdi, "rb", rdx3);
        r13_7 = rax6;
        if (!rax6) {
            fun_4005c0(rdi, "rb", rdx3);
            eax8 = 1;
        } else {
            *reinterpret_cast<int32_t*>(&rbp9) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = 0;
            r12_10 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8 + 0x90);
            if (v11) {
                do {
                    rcx12 = r13_7;
                    *reinterpret_cast<int32_t*>(&rdx3) = 16;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rsi5) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
                    eax13 = fun_4005a0(r12_10, 1, 16, rcx12);
                    if (!eax13) 
                        break;
                    *reinterpret_cast<int32_t*>(&rdx3) = eax13;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
                    rsi5 = rbp9;
                    dumpline(r12_10, rsi5, *reinterpret_cast<int32_t*>(&rdx3), rcx12);
                    rbp9 = rbp9 + static_cast<int64_t>(eax13);
                } while (v14 > rbp9);
            }
            fun_4005b0(r13_7, rsi5, rdx3, rcx12);
            eax8 = 0;
        }
    } else {
        fun_4005c0(rdi, rdi, rdx3);
        eax8 = 1;
    }
    return eax8;
}

int64_t perror = 0x4005c6;

void fun_4005c0(uint64_t rdi, uint64_t rsi, void* rdx) {
    goto perror;
}

void dumpline(unsigned char* rdi, uint64_t rsi, int32_t edx, int64_t rcx) {
    void* rsp5;
    unsigned char* r15_6;
    void* rsp7;
    int64_t r12_8;
    int64_t rdx9;
    void* rbx10;
    unsigned char* r14_11;
    unsigned char* rbx12;
    int32_t ebp13;
    void* r13_14;
    uint64_t rdx15;
    int64_t rcx16;
    signed char v17;
    int64_t rcx18;
    signed char v19;
    int64_t rbx20;
    int64_t rbp21;
    int64_t rax22;
    unsigned char* rdi23;
    unsigned char* rax24;
    int64_t rbx25;
    int64_t rdx26;
    int32_t ecx27;
    int32_t eax28;
    int64_t rcx29;
    signed char v30;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 88);
    r15_6 = rdi;
    fun_400590(rsp5, "%08lX:", rsi);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    *reinterpret_cast<int32_t*>(&r12_8) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = 0;
    if (edx <= 16) {
        *reinterpret_cast<int32_t*>(&r12_8) = edx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&rdx9) = 1;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_8) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_8) == 0)) {
        addr_400747_4:
        rbx10 = rsp7;
    } else {
        r14_11 = r15_6;
        rbx12 = r15_6;
        ebp13 = 0;
        r13_14 = rsp7;
        do {
            *reinterpret_cast<uint32_t*>(&rdx15) = *rbx12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
            fun_400590(reinterpret_cast<int64_t>(r13_14) + ebp13 + 9, " %02lX", rdx15);
            rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
            ++rbx12;
            ebp13 = ebp13 + 3;
        } while (*reinterpret_cast<int32_t*>(&r12_8) > *reinterpret_cast<int32_t*>(&rbx12) - *reinterpret_cast<int32_t*>(&r14_11));
        if (*reinterpret_cast<int32_t*>(&r12_8) > 15) 
            goto addr_400827_8; else 
            goto addr_400742_9;
    }
    do {
        rcx16 = -1;
        do {
            if (!*reinterpret_cast<int32_t*>(&rcx16)) 
                break;
            *reinterpret_cast<int32_t*>(&rcx16) = *reinterpret_cast<int32_t*>(&rcx16) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
        } while (v17);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx10) + ~rcx16 - 1) = 0x202020;
        *reinterpret_cast<int32_t*>(&rdx9) = *reinterpret_cast<int32_t*>(&rdx9) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    } while (static_cast<int32_t>(rdx9 - 1) <= 15);
    rcx18 = -1;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx18)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx18) = *reinterpret_cast<int32_t*>(&rcx18) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
    } while (v19);
    rbx20 = ~rcx18 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp7) + *reinterpret_cast<int32_t*>(&rbx20)) = 0x7c2020;
    *reinterpret_cast<int32_t*>(&rbp21) = *reinterpret_cast<int32_t*>(&rbx20) + 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = 0;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_8) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_8) == 0))) {
        *reinterpret_cast<int32_t*>(&r12_8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = 0;
        goto addr_4007a9_19;
    }
    addr_4007af_20:
    *reinterpret_cast<int32_t*>(&rax22) = static_cast<int32_t>(r12_8 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    rdi23 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(r15_6) + rax22 + 1);
    rax24 = r15_6;
    *reinterpret_cast<int32_t*>(&rbx25) = *reinterpret_cast<int32_t*>(&rbx20) - *reinterpret_cast<int32_t*>(&r15_6) + 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx25) + 4) = 0;
    do {
        *reinterpret_cast<uint32_t*>(&rdx26) = *rax24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
        ecx27 = static_cast<int32_t>(rdx26 - 32);
        if (*reinterpret_cast<unsigned char*>(&ecx27) >= 95) {
            *reinterpret_cast<uint32_t*>(&rdx26) = 46;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp7) + static_cast<int32_t>(rbx25 + reinterpret_cast<int64_t>(rax24))) = *reinterpret_cast<signed char*>(&rdx26);
        ++rax24;
    } while (rax24 != rdi23);
    if (*reinterpret_cast<int32_t*>(&r12_8) <= 15) {
        addr_4007a9_19:
        eax28 = static_cast<int32_t>(r12_8 + rbp21);
    } else {
        goto addr_400801_26;
    }
    do {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp7) + eax28) = 32;
        *reinterpret_cast<int32_t*>(&r12_8) = *reinterpret_cast<int32_t*>(&r12_8) + 1;
        ++eax28;
    } while (*reinterpret_cast<int32_t*>(&r12_8) <= 15);
    addr_400801_26:
    *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp7) + (*reinterpret_cast<int32_t*>(&r12_8) + static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rbp21)))) = 0x7c;
    fun_400550(rsp7);
    return;
    addr_400827_8:
    rcx29 = -1;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx29)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(&rcx29) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
    } while (v30);
    rbx20 = ~rcx29 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp7) + *reinterpret_cast<int32_t*>(&rbx20)) = 0x7c2020;
    *reinterpret_cast<int32_t*>(&rbp21) = *reinterpret_cast<int32_t*>(&rbx20) + 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = 0;
    goto addr_4007af_20;
    addr_400742_9:
    *reinterpret_cast<int32_t*>(&rdx9) = static_cast<int32_t>(r12_8 + 1);
    goto addr_400747_4;
}

int64_t fclose = 0x4005b6;

void fun_4005b0(int64_t rdi, uint64_t rsi, void* rdx, int64_t rcx) {
    goto fclose;
}

int64_t __xstat = 0x400586;

int32_t fun_400580(int64_t rdi, uint64_t rsi, void* rdx) {
    goto __xstat;
}

int64_t fopen = 0x400566;

int64_t fun_400560(uint64_t rdi, uint64_t rsi, void* rdx) {
    goto fopen;
}

int64_t fread = 0x4005a6;

int32_t fun_4005a0(unsigned char* rdi, uint64_t rsi, void* rdx, int64_t rcx) {
    goto fread;
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
                *reinterpret_cast<int64_t*>(rax3 * 8 + 0x600ba0)();
                rax2 = dtor_idx_6343;
            } while (rax2 < 0);
        }
        _edata = 1;
    }
    return;
}

int64_t __libc_start_main = 0x400576;

void fun_400570(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    __do_global_dtors_aux();
    return;
}

int64_t g600d70 = 0;

void fun_400596() {
    goto g600d70;
}

void fun_400556() {
    goto 0x400540;
}

void fun_4005c6() {
    goto 0x400540;
}

struct s0 {
    signed char[8] pad8;
    uint64_t f8;
};

int64_t main(int32_t edi, struct s0* rsi) {
    int32_t r13d3;
    int32_t r12d4;
    struct s0* rbx5;
    int32_t ebp6;
    uint64_t rdi7;
    int32_t eax8;
    int64_t rax9;

    r13d3 = edi;
    r12d4 = 0;
    if (edi > 1) {
        rbx5 = rsi;
        ebp6 = 1;
        do {
            rdi7 = rbx5->f8;
            eax8 = hexdump(rdi7);
            r12d4 = r12d4 + eax8;
            ++ebp6;
            rbx5 = reinterpret_cast<struct s0*>(&rbx5->f8);
        } while (r13d3 > ebp6);
    }
    *reinterpret_cast<int32_t*>(&rax9) = r12d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    return rax9;
}

void fun_4005b6() {
    goto 0x400540;
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
            *reinterpret_cast<int64_t*>(0x600b8c + rbx7 * 8)(rdi8, r14_5, r15_6);
            ++rbx7;
        } while (rbx7 < 0);
    }
    return;
}

void fun_400586() {
    goto 0x400540;
}

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400570(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_400566() {
    goto 0x400540;
}

void fun_4005a6() {
    goto 0x400540;
}

void fun_400576() {
    goto 0x400540;
}
