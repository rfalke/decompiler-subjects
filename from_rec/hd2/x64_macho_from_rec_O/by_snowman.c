
struct s0 {
    int64_t f0;
    void* f8;
};

int32_t _hexdump(void* rdi);

int32_t _main(int32_t edi, struct s0* rsi) {
    int32_t r14d3;
    int32_t r13d4;
    struct s0* rbx5;
    int32_t r12d6;
    void* rdi7;
    int32_t eax8;

    r14d3 = edi;
    r13d4 = 0;
    if (edi > 1) {
        rbx5 = rsi;
        r12d6 = 1;
        r13d4 = 0;
        do {
            rdi7 = rbx5->f8;
            eax8 = _hexdump(rdi7);
            r13d4 = r13d4 + eax8;
            ++r12d6;
            rbx5 = reinterpret_cast<struct s0*>(&rbx5->f8);
        } while (r12d6 != r14d3);
    }
    return r13d4;
}

int64_t _exit = 0x100000e78;

void _exit(int64_t rdi) {
    goto _exit;
}

uint64_t* ___stack_chk_guard = reinterpret_cast<uint64_t*>(0);

void ___sprintf_chk(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8);

void _sprintf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8);

void ___strcat_chk(void* rdi);

void _puts();

int32_t ___stack_chk_fail(void* rdi, void* rsi);

int32_t _dumpline(unsigned char* rdi, void* rsi, int32_t edx, void* rcx) {
    void* rbp5;
    unsigned char* v6;
    uint64_t* rax7;
    uint64_t v8;
    void* r8_9;
    int64_t r14_10;
    int64_t rbx11;
    void* r12_12;
    unsigned char* rbx13;
    int32_t r13d14;
    int32_t r12d15;
    void* r15_16;
    int64_t rdx17;
    int64_t rcx18;
    signed char v19;
    int64_t rcx20;
    int64_t r8_21;
    int32_t edi22;
    void* rsi23;
    int64_t rcx24;
    int64_t rdx25;
    int64_t rdx26;
    int32_t eax27;
    void* rdi28;
    uint64_t* rax29;
    int32_t ecx30;
    void* rsi31;
    int64_t rcx32;
    signed char v33;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v6 = rdi;
    rax7 = ___stack_chk_guard;
    v8 = *rax7;
    r8_9 = rsi;
    ___sprintf_chk(reinterpret_cast<int64_t>(rbp5) - 0x90, 0, 80, "%08lX:", r8_9);
    *reinterpret_cast<int32_t*>(&r14_10) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = 0;
    if (edx <= 16) {
        *reinterpret_cast<int32_t*>(&r14_10) = edx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&rbx11) = 1;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r14_10) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r14_10) == 0)) {
        addr_100000ba4_4:
        r12_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 0x90);
    } else {
        rbx13 = v6;
        r13d14 = 0;
        r12d15 = 0;
        r15_16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 0x90);
        do {
            *reinterpret_cast<uint32_t*>(&rdx17) = *rbx13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
            _sprintf(r12d15 + reinterpret_cast<int64_t>(r15_16) + 9, " %02lX", rdx17, "%08lX:", r8_9);
            ++r13d14;
            ++rbx13;
            r12d15 = r12d15 + 3;
        } while (r13d14 != *reinterpret_cast<int32_t*>(&r14_10));
        if (*reinterpret_cast<int32_t*>(&r14_10) > 15) 
            goto addr_100000c5d_8; else 
            goto addr_100000ba0_9;
    }
    do {
        ___strcat_chk(r12_12);
        *reinterpret_cast<int32_t*>(&rbx11) = *reinterpret_cast<int32_t*>(&rbx11) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx11) + 4) = 0;
    } while (static_cast<int32_t>(rbx11 - 1) <= 15);
    rcx18 = -1;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx18)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx18) = *reinterpret_cast<int32_t*>(&rcx18) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
    } while (v19);
    rcx20 = ~rcx18 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r12_12) + *reinterpret_cast<int32_t*>(&rcx20)) = 0x7c2020;
    *reinterpret_cast<int32_t*>(&r8_21) = static_cast<int32_t>(rcx20 + 3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = 0;
    edi22 = 0;
    *reinterpret_cast<int32_t*>(&rsi23) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = 0;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r14_10) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r14_10) == 0))) {
        addr_100000c0a_15:
        *reinterpret_cast<int32_t*>(&rcx24) = *reinterpret_cast<int32_t*>(&rcx20) + 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rdx25) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
        goto addr_100000c04_17;
    }
    do {
        *reinterpret_cast<uint32_t*>(&rdx26) = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rsi23) + reinterpret_cast<int64_t>(v6));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
        eax27 = static_cast<int32_t>(rdx26 - 32);
        if (*reinterpret_cast<unsigned char*>(&eax27) >= 95) {
            *reinterpret_cast<uint32_t*>(&rdx26) = 46;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp5) + static_cast<int32_t>(rcx24 + reinterpret_cast<uint64_t>(rsi23)) - 0x90) = *reinterpret_cast<signed char*>(&rdx26);
        ++edi22;
        rsi23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi23) + 1);
    } while (edi22 != *reinterpret_cast<int32_t*>(&r14_10));
    *reinterpret_cast<int32_t*>(&rdx25) = edi22;
    if (edi22 > 15) {
        addr_100000c99_22:
        rdi28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 0x90);
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi28) + *reinterpret_cast<int32_t*>(&r8_21) + *reinterpret_cast<int32_t*>(&rdx25)) = 0x7c;
        _puts();
        rax29 = ___stack_chk_guard;
        if (v8 ^ *rax29) {
            *reinterpret_cast<int32_t*>(&rax29) = ___stack_chk_fail(rdi28, rsi23);
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx25) = *reinterpret_cast<int32_t*>(&r14_10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
        goto addr_100000c04_17;
    }
    return *reinterpret_cast<int32_t*>(&rax29);
    addr_100000c04_17:
    ecx30 = static_cast<int32_t>(r8_21 + rdx25);
    while (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp5) + ecx30 - 0x90) = 32, *reinterpret_cast<int32_t*>(&rdx25) = *reinterpret_cast<int32_t*>(&rdx25) + 1, ++ecx30, *reinterpret_cast<int32_t*>(&rdx25) <= 15) {
    }
    goto addr_100000c99_22;
    addr_100000c5d_8:
    rsi31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 0x90);
    rcx32 = -1;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx32)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx32) = *reinterpret_cast<int32_t*>(&rcx32) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = 0;
        rsi31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi31) + 1);
    } while (v33);
    rcx20 = ~rcx32 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi31) + *reinterpret_cast<int32_t*>(&rcx20)) = 0x7c2020;
    *reinterpret_cast<int32_t*>(&r8_21) = static_cast<int32_t>(rcx20 + 3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = 0;
    edi22 = 0;
    *reinterpret_cast<int32_t*>(&rsi23) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = 0;
    goto addr_100000c0a_15;
    addr_100000ba0_9:
    *reinterpret_cast<int32_t*>(&rbx11) = static_cast<int32_t>(r14_10 + 1);
    goto addr_100000ba4_4;
}

int64_t _sprintf = 0x100000eb4;

void _sprintf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto _sprintf;
}

int64_t ___stack_chk_fail = 0x100000e64;

int32_t ___stack_chk_fail(void* rdi, void* rsi) {
    goto ___stack_chk_fail;
}

/* _stat$INODE64 */
int32_t _stat_INODE64();

void* _fopen(void* rdi, void* rsi);

void _perror(void* rdi, void* rsi);

int32_t _fread(unsigned char* rdi, void* rsi, int64_t rdx, void* rcx);

void _fclose(void* rdi, void* rsi, int64_t rdx, void* rcx);

int32_t _hexdump(void* rdi) {
    void* rbp2;
    uint64_t* rax3;
    uint64_t v4;
    int64_t rdx5;
    void* rsi6;
    int32_t eax7;
    void* rax8;
    void* r13_9;
    void* rdi10;
    int32_t eax11;
    void* r12_12;
    unsigned char* r14_13;
    int64_t v14;
    void* rcx15;
    int32_t eax16;
    void* v17;
    uint64_t* rdx18;

    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax3 = ___stack_chk_guard;
    v4 = *rax3;
    *reinterpret_cast<int32_t*>(&rdx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    rsi6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp2) - 0xd0);
    eax7 = _stat_INODE64();
    if (!eax7) {
        rsi6 = reinterpret_cast<void*>("rb");
        rax8 = _fopen(rdi, "rb");
        r13_9 = rax8;
        if (!rax8) {
            rdi10 = rdi;
            _perror(rdi10, "rb");
            eax11 = 1;
        } else {
            *reinterpret_cast<int32_t*>(&r12_12) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = 0;
            r14_13 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp2) - 64);
            if (v14) {
                do {
                    rcx15 = r13_9;
                    *reinterpret_cast<int32_t*>(&rdx5) = 16;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rsi6) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
                    eax16 = _fread(r14_13, 1, 16, rcx15);
                    if (!eax16) 
                        break;
                    *reinterpret_cast<int32_t*>(&rdx5) = eax16;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                    rsi6 = r12_12;
                    _dumpline(r14_13, rsi6, *reinterpret_cast<int32_t*>(&rdx5), rcx15);
                    r12_12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_12) + static_cast<int64_t>(eax16));
                } while (reinterpret_cast<uint64_t>(v17) > reinterpret_cast<uint64_t>(r12_12));
            }
            rdi10 = r13_9;
            _fclose(rdi10, rsi6, rdx5, rcx15);
            eax11 = 0;
        }
    } else {
        rdi10 = rdi;
        _perror(rdi10, rsi6);
        eax11 = 1;
    }
    rdx18 = ___stack_chk_guard;
    if (v4 ^ *rdx18) {
        eax11 = ___stack_chk_fail(rdi10, rsi6);
    }
    return eax11;
}

int64_t _perror = 0x100000ea0;

void _perror(void* rdi, void* rsi) {
    goto _perror;
}

int64_t _fclose = 0x100000e82;

void _fclose(void* rdi, void* rsi, int64_t rdx, void* rcx) {
    goto _fclose;
}

int64_t ___sprintf_chk = 0x100000e5a;

void ___sprintf_chk(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto ___sprintf_chk;
}

int64_t ___strcat_chk = 0x100000e6e;

void ___strcat_chk(void* rdi) {
    goto ___strcat_chk;
}

/* _stat$INODE64 */
int64_t _stat_INODE64 = 0x100000ebe;

/* _stat$INODE64 */
int32_t _stat_INODE64() {
    goto _stat_INODE64;
}

int64_t _puts = 0x100000eaa;

void _puts() {
    goto _puts;
}

int64_t _fopen = 0x100000e8c;

void* _fopen(void* rdi, void* rsi) {
    goto _fopen;
}

int64_t _fread = 0x100000e96;

int32_t _fread(unsigned char* rdi, void* rsi, int64_t rdx, void* rcx) {
    goto _fread;
}

void start() {
    int64_t rdi1;
    struct s0* rsi2;
    int64_t rdx3;
    int64_t* rcx4;
    int32_t eax5;
    int64_t rdi6;

    rdi1 = reinterpret_cast<int64_t>(__return_address());
    rsi2 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 16);
    *reinterpret_cast<int32_t*>(&rdx3) = *reinterpret_cast<int32_t*>(&rdi1) + 1 << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    rcx4 = reinterpret_cast<int64_t*>(rdx3 + reinterpret_cast<int64_t>(rsi2));
    while (*rcx4) {
        ++rcx4;
    }
    eax5 = _main(*reinterpret_cast<int32_t*>(&rdi1), rsi2);
    *reinterpret_cast<int32_t*>(&rdi6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    _exit(rdi6);
    __asm__("hlt ");
}

int64_t g100001000 = 0;

void fun_100000e5a() {
    goto g100001000;
}

void fun_100000e64() {
    goto 0x100000e4a;
}

void fun_100000e6e() {
    goto 0x100000e4a;
}

void fun_100000e78() {
    goto 0x100000e4a;
}

void fun_100000e82() {
    goto 0x100000e4a;
}

void fun_100000e8c() {
    goto 0x100000e4a;
}

void fun_100000e96() {
    goto 0x100000e4a;
}

void fun_100000ea0() {
    goto 0x100000e4a;
}

void fun_100000eaa() {
    goto 0x100000e4a;
}

void fun_100000eb4() {
    goto 0x100000e4a;
}

void fun_100000ebe() {
    goto 0x100000e4a;
}
