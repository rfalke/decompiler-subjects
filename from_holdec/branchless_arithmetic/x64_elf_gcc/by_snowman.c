
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

void fun_401030(int64_t rdi, int64_t rsi) {
    goto puts;
}

int64_t printf = 0x401046;

void fun_401040(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    goto printf;
}

uint32_t sat_addu32b(uint32_t edi, int32_t esi, int64_t rdx) {
    uint32_t tmp32_4;
    int32_t eax5;
    int32_t eax6;
    uint32_t eax7;
    int32_t eax8;

    tmp32_4 = edi + esi;
    return eax5 - (eax6 + reinterpret_cast<uint1_t>(eax7 < eax8 + reinterpret_cast<uint1_t>(tmp32_4 < edi))) | tmp32_4;
}

uint32_t sat_subu32b(uint32_t edi, uint32_t esi, int64_t rdx, int64_t rcx) {
    int32_t eax5;

    eax5 = 0;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(edi >= esi);
    return reinterpret_cast<uint32_t>(-eax5) & edi - esi;
}

uint32_t sat_mulu32b(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    int64_t rsi5;
    int64_t rdi6;
    uint64_t rdi7;

    *reinterpret_cast<int32_t*>(&rsi5) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi6) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    rdi7 = reinterpret_cast<uint64_t>(rdi6 * rsi5);
    return -static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!(rdi7 >> 32)))) | *reinterpret_cast<uint32_t*>(&rdi7);
}

uint32_t sat_divu32b(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    return edi / reinterpret_cast<uint32_t>(esi);
}

uint32_t sat_adds32b_var3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    uint32_t eax5;

    eax5 = static_cast<uint32_t>(rdi + rsi);
    if (!__intrinsic()) {
        eax5 = (*reinterpret_cast<uint32_t*>(&rdi) >> 31) + 0x7fffffff;
    }
    return eax5;
}

uint32_t sat_adds32b_var2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    if (__intrinsic() || !__intrinsic()) {
        return static_cast<uint32_t>(rsi + rdi);
    } else {
        return (*reinterpret_cast<uint32_t*>(&rdi) >> 31) + 0x7fffffff;
    }
}

int32_t sat_adds32b_var1(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;

    rax7 = edi + static_cast<int64_t>(esi);
    if (rax7 > 0x7fffffff) {
        rax7 = 0x7fffffff;
    }
    if (rax7 < 0xffffffff80000000) {
        rax7 = 0xffffffff80000000;
    }
    return *reinterpret_cast<int32_t*>(&rax7);
}

uint32_t sat_subs32b(uint32_t edi, uint32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint32_t eax7;
    uint32_t edi8;

    eax7 = edi - esi;
    edi8 = (edi >> 31) + 0x7fffffff;
    if (reinterpret_cast<int32_t>((esi ^ edi8) & (eax7 ^ edi8)) < reinterpret_cast<int32_t>(0)) {
        eax7 = edi8;
    }
    return eax7;
}

int32_t sat_muls32b(uint32_t edi, uint32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t rax8;
    int32_t r8d9;
    int64_t rax10;
    int64_t rdi11;

    rdx7 = reinterpret_cast<int32_t>(esi);
    rax8 = reinterpret_cast<int32_t>(edi) * rdx7;
    r8d9 = *reinterpret_cast<int32_t*>(&rax8);
    __asm__("cdq ");
    rax10 = rax8 >> 32;
    if (*reinterpret_cast<int32_t*>(&rdx7) != *reinterpret_cast<int32_t*>(&rax10)) {
        *reinterpret_cast<uint32_t*>(&rdi11) = (edi ^ esi) >> 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
        r8d9 = static_cast<int32_t>(rdi11 + 0x7fffffff);
    }
    return r8d9;
}

int32_t sat_divs32b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("cdq ");
    return reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(&rdi) + reinterpret_cast<uint1_t>((static_cast<uint32_t>(rsi + 1) | static_cast<uint32_t>(rdi - 0x80000000)) < 1)) / *reinterpret_cast<int32_t*>(&rsi);
}

int32_t abs32(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int32_t eax7;

    eax7 = -edi;
    if (__intrinsic()) {
        eax7 = edi;
    }
    return eax7;
}

uint32_t sgn32(uint32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int32_t eax7;

    eax7 = 0;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi == 0)));
    return eax7 - (edi >> 31);
}

uint64_t sat_addu64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t tmp64_7;
    int32_t eax8;
    int32_t eax9;
    uint32_t eax10;
    int32_t eax11;

    tmp64_7 = rdi + rsi;
    return reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax8 - (eax9 + reinterpret_cast<uint1_t>(eax10 < eax11 + reinterpret_cast<uint1_t>(tmp64_7 < rdi)))))) | tmp64_7;
}

uint64_t sat_subu64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;

    eax6 = 0;
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(rdi >= rsi);
    return reinterpret_cast<uint64_t>(static_cast<int64_t>(-eax6)) & rdi - rsi;
}

uint64_t sat_divu64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    return rdi / rsi;
}

uint64_t sat_mulu64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdx6;

    rdx6 = -__intrinsic();
    return rdi * rsi | reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rdx6) - (*reinterpret_cast<uint32_t*>(&rdx6) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx6) < *reinterpret_cast<uint32_t*>(&rdx6) + reinterpret_cast<uint1_t>(!!__intrinsic()))))));
}

uint64_t sat_muls64b(uint64_t rdi, uint64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    uint64_t rax6;
    uint64_t r8_7;

    rax6 = rdi * rsi;
    r8_7 = rax6;
    if (reinterpret_cast<int64_t>(rax6) >> 63 != __intrinsic()) {
        r8_7 = 0x7fffffffffffffff + ((rdi ^ rsi) >> 63);
    }
    return r8_7;
}

uint64_t sat_adds64b(uint64_t rdi, uint64_t rsi, int64_t rdx) {
    uint64_t rax4;

    rax4 = rdi + rsi;
    if (!__intrinsic()) {
        rax4 = (rdi >> 63) + 0x7fffffffffffffff;
    }
    return rax4;
}

uint64_t sat_subs64b(uint64_t rdi, uint64_t rsi, int64_t rdx) {
    uint64_t rax4;
    uint64_t rdi5;

    rax4 = rdi - rsi;
    rdi5 = (rdi >> 63) + 0x7fffffffffffffff;
    if (reinterpret_cast<int64_t>((rsi ^ rdi5) & (rax4 ^ rdi5)) < reinterpret_cast<int64_t>(0)) {
        rax4 = rdi5;
    }
    return rax4;
}

int64_t sat_divs64b(uint64_t rdi, int64_t rsi, int64_t rdx) {
    return reinterpret_cast<int64_t>(rdi + reinterpret_cast<uint1_t>((rsi + 1 | 0x8000000000000000 - rdi) < 1)) / rsi;
}

uint64_t abs64(uint64_t rdi, int64_t rsi) {
    uint64_t rax3;

    rax3 = -rdi;
    if (__intrinsic()) {
        rax3 = rdi;
    }
    return rax3;
}

int64_t sgn64(uint64_t rdi, int64_t rsi) {
    int32_t eax3;
    uint64_t rdi4;

    eax3 = 0;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rdi) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rdi == 0)));
    rdi4 = rdi >> 63;
    return static_cast<int64_t>(eax3 - *reinterpret_cast<int32_t*>(&rdi4));
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

void fun_401273() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x4015f0, 0x401660, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_4012a3() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_401323() {
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

int64_t fun_401353() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_4015f3(int32_t edi, int64_t rsi, int64_t rdx) {
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

void fun_401663() {
    __asm__("cli ");
    return;
}

void fun_40166b() {
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

int64_t main() {
    uint32_t eax1;
    int64_t rcx2;
    int64_t r8_3;
    int64_t r9_4;
    uint32_t eax5;
    int64_t rcx6;
    int64_t r8_7;
    int64_t r9_8;
    uint32_t eax9;
    int64_t rcx10;
    int64_t r8_11;
    int64_t r9_12;
    uint32_t eax13;
    int64_t rcx14;
    int64_t r8_15;
    int64_t r9_16;
    uint32_t eax17;
    int64_t r9_18;
    uint32_t eax19;
    int64_t r8_20;
    int32_t eax21;
    int64_t rcx22;
    uint32_t eax23;
    int64_t rcx24;
    int32_t eax25;
    int64_t rcx26;
    int32_t eax27;
    int64_t rcx28;
    int32_t eax29;
    int64_t rdx30;
    uint32_t eax31;
    int64_t rdx32;
    uint64_t rax33;
    uint64_t rax34;
    uint64_t rax35;
    uint64_t rax36;
    uint64_t rax37;
    uint64_t rax38;
    uint64_t rax39;
    int64_t rax40;
    uint64_t rax41;
    int64_t rax42;

    eax1 = sat_addu32b(0xffffffff, 3, 3);
    *reinterpret_cast<uint32_t*>(&rcx2) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    fun_401040("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n", 0xffffffff, 3, rcx2, r8_3, r9_4);
    eax5 = sat_subu32b(1, 3, 3, rcx2);
    *reinterpret_cast<uint32_t*>(&rcx6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    fun_401040("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n", 1, 3, rcx6, r8_7, r9_8);
    eax9 = sat_mulu32b(-1, 3, 3, rcx6);
    *reinterpret_cast<uint32_t*>(&rcx10) = eax9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    fun_401040("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", 0xffffffff, 3, rcx10, r8_11, r9_12);
    eax13 = sat_divu32b(-1, 3, 3, rcx10);
    *reinterpret_cast<uint32_t*>(&rcx14) = eax13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = 0;
    fun_401040("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n", 0xffffffff, 3, rcx14, r8_15, r9_16);
    eax17 = sat_adds32b_var3(0x7fffffff, 2, 3, rcx14);
    *reinterpret_cast<uint32_t*>(&r9_18) = eax17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_18) + 4) = 0;
    eax19 = sat_adds32b_var2(0x7fffffff, 2, 3, rcx14);
    *reinterpret_cast<uint32_t*>(&r8_20) = eax19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = 0;
    eax21 = sat_adds32b_var1(0x7fffffff, 2, 3, rcx14, r8_20, r9_18);
    *reinterpret_cast<int32_t*>(&rcx22) = eax21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
    fun_401040("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n", 0x7fffffff, 2, rcx22, r8_20, r9_18);
    eax23 = sat_subs32b(0x80000000, 2, 2, rcx22, r8_20, r9_18);
    *reinterpret_cast<uint32_t*>(&rcx24) = eax23;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    fun_401040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 2, rcx24, r8_20, r9_18);
    eax25 = sat_muls32b(0x7fffffff, 2, 2, rcx24, r8_20, r9_18);
    *reinterpret_cast<int32_t*>(&rcx26) = eax25;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
    fun_401040("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n", 0x7fffffff, 2, rcx26, r8_20, r9_18);
    eax27 = sat_divs32b(0x80000000, 0xffffffff, 2, rcx26, r8_20, r9_18);
    *reinterpret_cast<int32_t*>(&rcx28) = eax27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    fun_401040("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 0xffffffff, rcx28, r8_20, r9_18);
    eax29 = abs32(-16, 0xfffffff0, 0xffffffff, rcx28, r8_20, r9_18);
    *reinterpret_cast<int32_t*>(&rdx30) = eax29;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
    fun_401040("abs32(0x%08x) = 0x%08x\n", 0xfffffff0, rdx30, rcx28, r8_20, r9_18);
    eax31 = sgn32(3, 3, rdx30, rcx28, r8_20, r9_18);
    *reinterpret_cast<uint32_t*>(&rdx32) = eax31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
    fun_401040("sgn32(0x%08x) = 0x%08x\n", 3, rdx32, rcx28, r8_20, r9_18);
    rax33 = sat_addu64b(0, 0, rdx32, rcx28, r8_20, r9_18);
    rax34 = sat_subu64b(0, 0, rdx32, rcx28, r8_20);
    rax35 = sat_divu64b(0, 1, rdx32, rcx28, r8_20);
    rax36 = sat_mulu64b(0, 0, rdx32, rcx28, r8_20);
    rax37 = sat_muls64b(0, 0, rdx32, rcx28, r8_20);
    rax38 = sat_adds64b(0, 0, rdx32);
    rax39 = sat_subs64b(0, 0, rdx32);
    rax40 = sat_divs64b(0, 1, rdx32);
    rax41 = abs64(0, 1);
    rax42 = sgn64(0, 1);
    if (rax42 + (rax40 + (rax39 + (rax37 + (rax33 + rax34 + rax35 + rax36) + rax38)) + rax41) == 42) {
        fun_401030("not reached", 1);
    }
    return 0;
}
