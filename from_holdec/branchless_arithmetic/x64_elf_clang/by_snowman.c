
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

int64_t puts = 0x401036;

void fun_401030(int64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    goto puts;
}

int64_t printf = 0x401046;

void fun_401040(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    goto printf;
}

uint32_t sat_addu32b(uint32_t edi, int32_t esi) {
    uint32_t tmp32_3;
    uint32_t eax4;

    tmp32_3 = edi + esi;
    eax4 = 0xffffffff;
    if (tmp32_3 >= edi) {
        eax4 = tmp32_3;
    }
    return eax4;
}

uint32_t sat_subu32b(uint32_t edi, uint32_t esi, int64_t rdx, int64_t rcx) {
    uint32_t eax5;

    eax5 = 0;
    if (edi >= esi) {
        eax5 = edi - esi;
    }
    return eax5;
}

int32_t sat_mulu32b(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    int32_t eax5;

    eax5 = edi * esi;
    if (__intrinsic()) {
        eax5 = -1;
    }
    return eax5;
}

uint32_t sat_divu32b(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    return edi / reinterpret_cast<uint32_t>(esi);
}

int32_t sat_adds32b_var1(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t eax6;

    eax5 = 0;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(edi + esi >= 0);
    eax6 = eax5 + 0x7fffffff;
    if (!__intrinsic()) {
        eax6 = edi + esi;
    }
    return eax6;
}

uint32_t sat_adds32b_var2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    uint32_t ecx5;
    uint32_t eax6;

    ecx5 = static_cast<uint32_t>(rsi + rdi);
    eax6 = (*reinterpret_cast<uint32_t*>(&rdi) >> 31) + 0x7fffffff;
    if (!__intrinsic()) {
        eax6 = ecx5;
    }
    if (__intrinsic()) {
        eax6 = ecx5;
    }
    return eax6;
}

uint32_t sat_adds32b_var3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    uint32_t eax5;

    eax5 = static_cast<uint32_t>(rsi + rdi);
    if (!__intrinsic()) {
        eax5 = (*reinterpret_cast<uint32_t*>(&rdi) >> 31) + 0x7fffffff;
    }
    return eax5;
}

uint32_t sat_subs32b(uint32_t edi, uint32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint32_t ecx8;
    uint32_t eax9;

    ecx8 = edi - esi;
    eax9 = (edi >> 31) + 0x7fffffff;
    if (reinterpret_cast<int32_t>((esi ^ eax9) & (eax9 ^ ecx8)) >= reinterpret_cast<int32_t>(0)) {
        eax9 = ecx8;
    }
    return eax9;
}

uint32_t sat_muls32b(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t rcx8;
    int64_t rax9;
    uint64_t rdx10;
    uint64_t rsi11;
    uint32_t eax12;

    rcx8 = reinterpret_cast<uint64_t>(static_cast<int64_t>(edi));
    rax9 = esi;
    rdx10 = rax9 * rcx8;
    rsi11 = rdx10 >> 32;
    eax12 = ((*reinterpret_cast<uint32_t*>(&rax9) ^ *reinterpret_cast<uint32_t*>(&rcx8)) >> 31) + 0x7fffffff;
    if (*reinterpret_cast<int32_t*>(&rdx10) >> 31 == *reinterpret_cast<int32_t*>(&rsi11)) {
        eax12 = *reinterpret_cast<uint32_t*>(&rdx10);
    }
    return eax12;
}

int32_t sat_divs32b(uint32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;

    eax8 = 0;
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>((edi ^ 0x80000000 | static_cast<uint32_t>(rsi + 1)) == 0);
    __asm__("cdq ");
    return reinterpret_cast<int32_t>(eax8 + edi) / *reinterpret_cast<int32_t*>(&rsi);
}

int32_t abs32(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;

    eax8 = -edi;
    if (__intrinsic() != __intrinsic()) {
        eax8 = edi;
    }
    return eax8;
}

int32_t sgn32(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;

    eax8 = 0;
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(edi < 0) | reinterpret_cast<uint1_t>(edi == 0)));
    return eax8 + (edi >> 31);
}

uint64_t sat_addu64b(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t tmp64_8;
    uint64_t rax9;

    tmp64_8 = rdi + rsi;
    rax9 = 0xffffffffffffffff;
    if (tmp64_8 >= rdi) {
        rax9 = tmp64_8;
    }
    return rax9;
}

uint64_t sat_subu64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t rax8;

    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    if (rdi >= rsi) {
        rax8 = rdi - rsi;
    }
    return rax8;
}

uint64_t sat_divu64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t rax8;
    uint64_t rax9;

    rax8 = rdi;
    if (!((rdi | rsi) >> 32)) {
        *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<uint32_t*>(&rax8) / *reinterpret_cast<uint32_t*>(&rsi);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        return rax9;
    } else {
        return rax8 / rsi;
    }
}

int64_t sat_mulu64b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rax8;

    rax8 = rdi * rsi;
    if (__intrinsic()) {
        rax8 = -1;
    }
    return rax8;
}

uint64_t sat_muls64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t rax8;

    rax8 = rsi * rdi;
    if (reinterpret_cast<int64_t>(rax8) >> 63 != __intrinsic()) {
        rax8 = 0x7fffffffffffffff + ((rsi ^ rdi) >> 63);
    }
    return rax8;
}

uint64_t sat_adds64b(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t rax8;

    rax8 = 0x7fffffffffffffff + (rdi >> 63);
    if (__intrinsic()) {
        rax8 = rsi + rdi;
    }
    return rax8;
}

uint64_t sat_subs64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    uint64_t rcx8;
    uint64_t rax9;

    rcx8 = rdi - rsi;
    rax9 = 0x7fffffffffffffff + (rdi >> 63);
    if (reinterpret_cast<int64_t>((rsi ^ rax9) & (rax9 ^ rcx8)) >= reinterpret_cast<int64_t>(0)) {
        rax9 = rcx8;
    }
    return rax9;
}

int64_t sat_divs64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rax8;
    uint64_t rax9;
    int64_t rax10;

    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax8) = reinterpret_cast<uint1_t>((0x8000000000000000 ^ rdi | rsi + 1) == 0);
    rax9 = rax8 + rdi;
    if (!((rax9 | rsi) >> 32)) {
        *reinterpret_cast<uint32_t*>(&rax10) = *reinterpret_cast<uint32_t*>(&rax9) / *reinterpret_cast<uint32_t*>(&rsi);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        return rax10;
    } else {
        return reinterpret_cast<int64_t>(rax9) / reinterpret_cast<int64_t>(rsi);
    }
}

int64_t abs64(int64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rax8;

    rax8 = -rdi;
    if (__intrinsic() != __intrinsic()) {
        rax8 = rdi;
    }
    return rax8;
}

int64_t sgn64(int64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rax8;

    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax8) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rdi < 0) | reinterpret_cast<uint1_t>(rdi == 0)));
    return rax8 + (rdi >> 63);
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

void fun_401053() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401610, 0x401680, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401083() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_401103() {
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

int64_t fun_401133() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401613(int32_t edi, int64_t rsi, int64_t rdx) {
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

void fun_401683() {
    __asm__("cli ");
    return;
}

void fun_40168b() {
    __asm__("cli ");
    return;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

int64_t main() {
    uint32_t eax1;
    int64_t rcx2;
    int64_t r8_3;
    int64_t r9_4;
    int64_t rax5;
    uint32_t eax6;
    int64_t rcx7;
    int64_t r8_8;
    int64_t r9_9;
    int32_t eax10;
    int64_t rcx11;
    int64_t r8_12;
    int64_t r9_13;
    uint32_t eax14;
    int64_t rcx15;
    int64_t r8_16;
    int64_t r9_17;
    int32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    int64_t rcx21;
    int64_t r8_22;
    int64_t r9_23;
    uint32_t eax24;
    int64_t rcx25;
    uint32_t eax26;
    int64_t rcx27;
    int32_t eax28;
    int64_t rcx29;
    int32_t eax30;
    int64_t rdx31;
    int32_t eax32;
    int64_t rdx33;
    uint64_t rax34;
    uint64_t rax35;
    uint64_t rax36;
    int64_t rax37;
    uint64_t rax38;
    uint64_t rax39;
    uint64_t rax40;
    int64_t rax41;
    int64_t rax42;
    int64_t rax43;

    eax1 = sat_addu32b(0xffffffff, 3);
    *reinterpret_cast<uint32_t*>(&rcx2) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    fun_401040("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n", 0xffffffff, 3, rcx2, r8_3, r9_4, rax5);
    eax6 = sat_subu32b(1, 3, 3, rcx2);
    *reinterpret_cast<uint32_t*>(&rcx7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    fun_401040("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n", 1, 3, rcx7, r8_8, r9_9, rax5);
    eax10 = sat_mulu32b(-1, 3, 3, rcx7);
    *reinterpret_cast<int32_t*>(&rcx11) = eax10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    fun_401040("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", 0xffffffff, 3, rcx11, r8_12, r9_13, rax5);
    eax14 = sat_divu32b(-1, 3, 3, rcx11);
    *reinterpret_cast<uint32_t*>(&rcx15) = eax14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
    fun_401040("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n", 0xffffffff, 3, rcx15, r8_16, r9_17, rax5);
    eax18 = sat_adds32b_var1(0x7fffffff, 2, 3, rcx15);
    eax19 = sat_adds32b_var2(0x7fffffff, 2, 3, rcx15);
    eax20 = sat_adds32b_var3(0x7fffffff, 2, 3, rcx15);
    *reinterpret_cast<int32_t*>(&rcx21) = eax18;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_22) = eax19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_23) = eax20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = 0;
    fun_401040("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n", 0x7fffffff, 2, rcx21, r8_22, r9_23, rax5);
    eax24 = sat_subs32b(0x80000000, 2, 2, rcx21, r8_22, r9_23, rax5);
    *reinterpret_cast<uint32_t*>(&rcx25) = eax24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0;
    fun_401040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 2, rcx25, r8_22, r9_23, rax5);
    eax26 = sat_muls32b(0x7fffffff, 2, 2, rcx25, r8_22, r9_23, rax5);
    *reinterpret_cast<uint32_t*>(&rcx27) = eax26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = 0;
    fun_401040("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n", 0x7fffffff, 2, rcx27, r8_22, r9_23, rax5);
    eax28 = sat_divs32b(0x80000000, 0xffffffff, 2, rcx27, r8_22, r9_23, rax5);
    *reinterpret_cast<int32_t*>(&rcx29) = eax28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
    fun_401040("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 0xffffffff, rcx29, r8_22, r9_23, rax5);
    eax30 = abs32(-16, 0x80000000, 0xffffffff, rcx29, r8_22, r9_23, rax5);
    *reinterpret_cast<int32_t*>(&rdx31) = eax30;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
    fun_401040("abs32(0x%08x) = 0x%08x\n", 0xfffffff0, rdx31, rcx29, r8_22, r9_23, rax5);
    eax32 = sgn32(3, 0xfffffff0, rdx31, rcx29, r8_22, r9_23, rax5);
    *reinterpret_cast<int32_t*>(&rdx33) = eax32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
    fun_401040("sgn32(0x%08x) = 0x%08x\n", 3, rdx33, rcx29, r8_22, r9_23, rax5);
    rax34 = sat_addu64b(0, 0, rdx33, rcx29, r8_22, r9_23, rax5);
    rax35 = sat_subu64b(0, 0, rdx33, rcx29, r8_22, r9_23, rax5);
    rax36 = sat_divu64b(0, 1, rdx33, rcx29, r8_22, r9_23, rax5);
    rax37 = sat_mulu64b(0, 0, rdx33, rcx29, r8_22, r9_23, rax5);
    rax38 = sat_muls64b(0, 0, rdx33, rcx29, r8_22, r9_23, rax5);
    rax39 = sat_adds64b(0, 0, rdx33, rcx29, r8_22, r9_23, rax5);
    rax40 = sat_subs64b(0, 0, rdx33, rcx29, r8_22, r9_23, rax5);
    rax41 = sat_divs64b(0, 1, rdx33, rcx29, r8_22, r9_23, rax5);
    rax42 = abs64(0, 1, rdx33, rcx29, r8_22, r9_23, rax5);
    rax43 = sgn64(0, 1, rdx33, rcx29, r8_22, r9_23, rax5);
    if (rax43 + (rax42 + (rax41 + (rax40 + (rax39 + (rax38 + (rax37 + (rax36 + (rax35 + rax34)))))))) == 42) {
        fun_401030("not reached", 1, rdx33, rcx29, r8_22, r9_23, rax5);
    }
    return 0;
}

void fun_401046() {
    goto 0x401020;
}
