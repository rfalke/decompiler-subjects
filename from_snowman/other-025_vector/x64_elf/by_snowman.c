
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
        *reinterpret_cast<int32_t*>(&rbx2) = 0x600bd0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
        do {
            --rbx2;
            rax1();
            rax1 = *rbx2;
        } while (rax1 != -1);
    }
    return;
}

/* operator new(unsigned long) */
int64_t _Znwm = 0x400586;

uint64_t fun_400580(uint64_t rdi) {
    goto _Znwm;
}

int64_t memmove = 0x400576;

void fun_400570(uint64_t rdi, uint64_t rsi, uint64_t rdx) {
    goto memmove;
}

/* operator delete(void*) */
int64_t _ZdlPv = 0x400556;

void fun_400550() {
    goto _ZdlPv;
}

/* std::__throw_length_error(char const*) */
int64_t _ZSt20__throw_length_errorPKc = 0x400546;

void fun_400540(int64_t rdi) {
    goto _ZSt20__throw_length_errorPKc;
}

signed char _edata = 0;

/* dtor_idx.5888 */
uint64_t dtor_idx_5888 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint64_t rax2;
    uint64_t rax3;

    zf1 = _edata == 0;
    if (zf1) {
        rax2 = dtor_idx_5888;
        if (rax2 < 0) {
            do {
                rax3 = rax2 + 1;
                dtor_idx_5888 = rax3;
                *reinterpret_cast<int64_t*>(rax3 * 8 + 0x600be0)();
                rax2 = dtor_idx_5888;
            } while (rax2 < 0);
        }
        _edata = 1;
    }
    return;
}

struct s0 {
    uint64_t f0;
    uint64_t f8;
    uint64_t f16;
};

/* void std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, std::forward_iterator_tag) */
void _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvS6_T_S7_St20forward_iterator_tag(struct s0* rdi, uint64_t rsi, uint64_t rdx, uint64_t rcx) {
    uint64_t r14_5;
    uint64_t r13_6;
    uint64_t r15_7;
    uint64_t r8_8;
    uint64_t r9_9;
    int64_t rcx10;
    uint64_t rdi11;
    uint64_t r15_12;
    uint64_t rax13;
    uint64_t rcx14;
    uint64_t rdx15;
    int64_t rcx16;
    uint64_t rsi17;
    uint64_t r14_18;
    uint64_t rax19;
    uint64_t r15_20;
    uint64_t tmp64_21;
    int1_t cf22;
    uint64_t rdx23;
    uint64_t rax24;
    uint64_t r14_25;
    uint64_t rcx26;
    int64_t rax27;
    uint64_t rcx28;
    uint64_t rcx29;
    uint64_t r13_30;
    uint64_t rbp31;
    int64_t rax32;

    if (rdx == rcx) 
        goto addr_4007e1_2;
    r14_5 = rdi->f8;
    r13_6 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rcx - rdx) >> 2);
    if (r13_6 <= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdi->f16 - r14_5) >> 2)) {
        r15_7 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r14_5 - rsi) >> 2);
        if (r13_6 >= r15_7) {
            r8_8 = r15_7 * 4;
            r9_9 = rdx + r8_8;
            rcx10 = reinterpret_cast<int64_t>(rcx - r9_9) >> 2;
            if (rcx10) {
                fun_400570(r14_5, r9_9, rcx10 * 4);
                r14_5 = rdi->f8;
                r9_9 = r9_9;
                r8_8 = r8_8;
            }
            rdi11 = r14_5 + (r13_6 - r15_7) * 4;
            rdi->f8 = rdi11;
            if (r15_7) {
                fun_400570(rdi11, rsi, r8_8);
                rdi11 = rdi->f8;
                r9_9 = r9_9;
                r8_8 = r8_8;
            }
            rdi->f8 = r8_8 + rdi11;
            if (!(reinterpret_cast<int64_t>(r9_9 - rdx) >> 2)) 
                goto addr_4007e1_2;
        } else {
            r15_12 = r13_6 * 4;
            rax13 = r14_5;
            rcx14 = r14_5 - r15_12;
            rdx15 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_12) >> 2);
            if (rdx15) {
                fun_400570(r14_5, rcx14, rdx15 << 2);
                rax13 = rdi->f8;
                rcx14 = rcx14;
            }
            rcx16 = reinterpret_cast<int64_t>(rcx14 - rsi) >> 2;
            rdi->f8 = rax13 + r15_12;
            if (rcx16) 
                goto addr_4008a0_14; else 
                goto addr_40084f_15;
        }
    } else {
        rsi17 = rdi->f0;
        r14_18 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r14_5 - rsi17) >> 2);
        if (r13_6 > 0x3fffffffffffffff - r14_18) {
            fun_400540("vector::_M_range_insert");
            goto addr_400990_18;
        }
        rax19 = r13_6;
        r15_20 = 0xfffffffffffffffc;
        if (r14_18 >= r13_6) {
            rax19 = r14_18;
        }
        tmp64_21 = r14_18 + rax19;
        cf22 = tmp64_21 < r14_18;
        r14_18 = tmp64_21;
        if (cf22) 
            goto addr_400738_22;
        if (r14_18 <= 0x3fffffffffffffff) 
            goto addr_400888_24; else 
            goto addr_400738_22;
    }
    addr_400857_25:
    goto memmove;
    addr_4008a0_14:
    rdx23 = rcx16 * 4;
    fun_400570(r14_5 - rdx23, rsi, rdx23);
    if (!r13_6) {
        addr_4007e1_2:
        return;
    } else {
        goto addr_400857_25;
    }
    addr_40084f_15:
    if (!r13_6) 
        goto addr_4007e1_2; else 
        goto addr_400857_25;
    addr_400738_22:
    rax24 = fun_400580(r15_20);
    rsi17 = rdi->f0;
    r14_25 = rax24;
    addr_400746_28:
    *reinterpret_cast<int32_t*>(&rcx26) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
    rax27 = reinterpret_cast<int64_t>(rsi - rsi17) >> 2;
    if (rax27) {
        rcx28 = rax27 * 4;
        fun_400570(r14_25, rsi17, rcx28);
        rcx26 = rcx28;
    }
    rcx29 = rcx26 + r14_25;
    if (r13_6) {
        r13_6 = r13_6 << 2;
        fun_400570(rcx29, rdx, r13_6);
        rcx29 = rcx29;
    }
    r13_30 = r13_6 + rcx29;
    *reinterpret_cast<int32_t*>(&rbp31) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp31) + 4) = 0;
    rax32 = reinterpret_cast<int64_t>(rdi->f8 - rsi) >> 2;
    if (rax32) {
        rbp31 = rax32 * 4;
        fun_400570(r13_30, rsi, rbp31);
    }
    if (rdi->f0) {
        fun_400550();
    }
    rdi->f0 = r14_25;
    rdi->f8 = rbp31 + r13_30;
    rdi->f16 = r14_25 + r15_20;
    goto addr_4007e1_2;
    addr_400888_24:
    if (r14_18) {
        addr_400990_18:
        r15_20 = r14_18 * 4;
        goto addr_400738_22;
    } else {
        *reinterpret_cast<int32_t*>(&r15_20) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_20) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r14_25) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = 0;
        goto addr_400746_28;
    }
}

int64_t __libc_start_main = 0x400566;

void fun_400560(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void _fini() {
    __do_global_dtors_aux();
    return;
}

int64_t g600de0 = 0;

void fun_400546() {
    goto g600de0;
}

struct s1 {
    uint64_t f0;
    uint64_t f8;
};

/* f(std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&) */
void _Z1fRSt6vectorIiSaIiEES2_(struct s0* rdi, struct s1* rsi) {
    uint64_t rcx3;
    uint64_t rdx4;
    uint64_t rsi5;

    rcx3 = rsi->f8;
    rdx4 = rsi->f0;
    rsi5 = rdi->f8;
    _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvS6_T_S7_St20forward_iterator_tag(rdi, rsi5, rdx4, rcx3);
    return;
}

void __libc_csu_fini() {
    return;
}

void fun_400586() {
    goto 0x400530;
}

void fun_400576() {
    goto 0x400530;
}

void fun_400556() {
    goto 0x400530;
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
            *reinterpret_cast<int64_t*>(0x600bcc + rbx7 * 8)(rdi8, r14_5, r15_6);
            ++rbx7;
        } while (rbx7 < 0);
    }
    return;
}

int64_t main() {
    return 0;
}

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400560(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_400566() {
    goto 0x400530;
}
