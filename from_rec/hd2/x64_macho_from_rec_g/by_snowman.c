
int32_t _hexdump(void* rdi);

int32_t _main(int32_t edi, void** rsi) {
    int32_t v3;
    void** v4;
    int32_t v5;
    int32_t v6;
    void* rdi7;
    int32_t eax8;

    v3 = edi;
    v4 = rsi;
    v5 = 0;
    v6 = 1;
    while (v6 < v3) {
        rdi7 = *reinterpret_cast<void**>((static_cast<int64_t>(v6) << 3) + reinterpret_cast<int64_t>(v4));
        eax8 = _hexdump(rdi7);
        v5 = v5 + eax8;
        ++v6;
    }
    return v5;
}

int64_t _exit = 0x100000e64;

void _exit(int64_t rdi) {
    goto _exit;
}

uint64_t* ___stack_chk_guard = reinterpret_cast<uint64_t*>(0);

void ___sprintf_chk(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8);

void ___strcat_chk(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8);

int32_t _strlen(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8);

void ___inline_strcpy_chk(int64_t rdi, void* rsi, int64_t rdx, int64_t rcx, void* r8);

void ___strcpy_chk(int64_t rdi, void* rsi, int64_t rdx, int64_t rcx, void* r8);

void _puts(void* rdi, void* rsi, int64_t rdx, int64_t rcx, void* r8);

int32_t ___stack_chk_fail(void* rdi, void* rsi);

int32_t _dumpline(void* rdi, void* rsi, int32_t edx, void* rcx) {
    void* rbp5;
    void* v6;
    int32_t v7;
    uint64_t* rax8;
    uint64_t v9;
    void* r8_10;
    int64_t rcx11;
    int64_t rdx12;
    int64_t rsi13;
    int32_t v14;
    uint32_t eax15;
    unsigned char al16;
    int32_t eax17;
    int32_t v18;
    int32_t v19;
    uint32_t eax20;
    uint32_t eax21;
    unsigned char v22;
    uint32_t eax23;
    uint32_t edx24;
    int64_t rdx25;
    void* rdi26;
    uint64_t* rax27;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v6 = rdi;
    v7 = edx;
    rax8 = ___stack_chk_guard;
    v9 = *rax8;
    r8_10 = rsi;
    rcx11 = reinterpret_cast<int64_t>("%08lX:");
    *reinterpret_cast<int32_t*>(&rdx12) = 80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi13) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
    ___sprintf_chk(reinterpret_cast<int64_t>(rbp5) - 96, 0, 80, "%08lX:", r8_10);
    if (v7 > 16) {
        v7 = 16;
    }
    v14 = 0;
    while (v14 < v7) {
        eax15 = *reinterpret_cast<unsigned char*>(v14 + reinterpret_cast<int64_t>(v6));
        *reinterpret_cast<uint32_t*>(&r8_10) = *reinterpret_cast<unsigned char*>(&eax15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = 0;
        rcx11 = reinterpret_cast<int64_t>(" %02lX");
        rdx12 = -1;
        *reinterpret_cast<int32_t*>(&rsi13) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
        ___sprintf_chk(reinterpret_cast<int64_t>(rbp5) - 96 + (v14 + v14 + v14) + 9, 0, -1, " %02lX", r8_10);
        ++v14;
    }
    while (al16 = reinterpret_cast<uint1_t>(v14 <= 15), ++v14, !!al16) {
        *reinterpret_cast<int32_t*>(&rdx12) = 80;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
        rsi13 = reinterpret_cast<int64_t>("   ");
        ___strcat_chk(reinterpret_cast<int64_t>(rbp5) - 96, "   ", 80, rcx11, r8_10);
    }
    eax17 = _strlen(reinterpret_cast<int64_t>(rbp5) - 96, rsi13, rdx12, rcx11, r8_10);
    if (1) {
        ___inline_strcpy_chk(reinterpret_cast<int64_t>(rbp5) - 96 + eax17, "  |", rdx12, rcx11, r8_10);
    } else {
        ___strcpy_chk(reinterpret_cast<int64_t>(rbp5) - 96 + eax17, "  |", -1, rcx11, r8_10);
    }
    v18 = eax17 + 3;
    v19 = 0;
    while (v19 < v7) {
        eax20 = *reinterpret_cast<unsigned char*>(v19 + reinterpret_cast<int64_t>(v6));
        if (*reinterpret_cast<unsigned char*>(&eax20) <= 31 || (eax21 = *reinterpret_cast<unsigned char*>(v19 + reinterpret_cast<int64_t>(v6)), *reinterpret_cast<unsigned char*>(&eax21) > 0x7e)) {
            v22 = 46;
        } else {
            eax23 = *reinterpret_cast<unsigned char*>(v19 + reinterpret_cast<int64_t>(v6));
            v22 = *reinterpret_cast<unsigned char*>(&eax23);
        }
        edx24 = v22;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp5) + (v18 + v19) - 96) = *reinterpret_cast<signed char*>(&edx24);
        ++v19;
    }
    while (v19 <= 15) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp5) + (v18 + v19) - 96) = 32;
        ++v19;
    }
    if (1) {
        rdx25 = reinterpret_cast<int64_t>(rbp5) - 96 + v18;
        ___inline_strcpy_chk(rdx25 + v19, "|", rdx25, rcx11, r8_10);
    } else {
        rcx11 = -1;
        rdx25 = -1;
        ___strcpy_chk(reinterpret_cast<int64_t>(rbp5) - 96 + v18 + v19, "|", -1, -1, r8_10);
    }
    rdi26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 96);
    _puts(rdi26, "|", rdx25, rcx11, r8_10);
    rax27 = ___stack_chk_guard;
    if (v9 ^ *rax27) {
        *reinterpret_cast<int32_t*>(&rax27) = ___stack_chk_fail(rdi26, "|");
    }
    return *reinterpret_cast<int32_t*>(&rax27);
}

int64_t _strlen = 0x100000eaa;

int32_t _strlen(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto _strlen;
}

int64_t ___strcpy_chk = 0x100000e5a;

void ___strcpy_chk(int64_t rdi, void* rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto ___strcpy_chk;
}

int64_t ___stack_chk_fail = 0x100000e46;

int32_t ___stack_chk_fail(void* rdi, void* rsi) {
    goto ___stack_chk_fail;
}

void ___inline_strcpy_chk(int64_t rdi, void* rsi, int64_t rdx, int64_t rcx, void* r8) {
    ___strcpy_chk(rdi, rsi, -1, rcx, r8);
    return;
}

int64_t _perror = 0x100000e8c;

void _perror(void* rdi, void* rsi) {
    goto _perror;
}

int64_t _fclose = 0x100000e6e;

void _fclose(void* rdi, void* rsi, int64_t rdx, void* rcx) {
    goto _fclose;
}

int64_t ___sprintf_chk = 0x100000e3c;

void ___sprintf_chk(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto ___sprintf_chk;
}

int64_t ___strcat_chk = 0x100000e50;

void ___strcat_chk(void* rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto ___strcat_chk;
}

int64_t _puts = 0x100000e96;

void _puts(void* rdi, void* rsi, int64_t rdx, int64_t rcx, void* r8) {
    goto _puts;
}

/* _stat$INODE64 */
int32_t _stat_INODE64(void* rdi, void* rsi);

void* _fopen(void* rdi, void* rsi);

int32_t _fread(void* rdi, void* rsi, int64_t rdx, void* rcx);

int32_t _hexdump(void* rdi) {
    void* rbp2;
    uint64_t* rax3;
    uint64_t v4;
    int64_t rdx5;
    void* rsi6;
    int32_t eax7;
    void* rax8;
    void* v9;
    void* v10;
    void* v11;
    void* rcx12;
    int32_t eax13;
    void* rdi14;
    int32_t v15;
    int32_t eax16;
    uint64_t* rdx17;

    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax3 = ___stack_chk_guard;
    v4 = *rax3;
    *reinterpret_cast<int32_t*>(&rdx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    rsi6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp2) - 0xd0);
    eax7 = _stat_INODE64(rdi, rsi6);
    if (!eax7) {
        rsi6 = reinterpret_cast<void*>("rb");
        rax8 = _fopen(rdi, "rb");
        v9 = rax8;
        if (v9) {
            v10 = reinterpret_cast<void*>(0);
            while (reinterpret_cast<uint64_t>(v11) > reinterpret_cast<uint64_t>(v10) && (rcx12 = v9, *reinterpret_cast<int32_t*>(&rdx5) = 16, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0, *reinterpret_cast<int32_t*>(&rsi6) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0, eax13 = _fread(reinterpret_cast<int64_t>(rbp2) - 32, 1, 16, rcx12), !!eax13)) {
                *reinterpret_cast<int32_t*>(&rdx5) = eax13;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                rsi6 = v10;
                _dumpline(reinterpret_cast<int64_t>(rbp2) - 32, rsi6, *reinterpret_cast<int32_t*>(&rdx5), rcx12);
                v10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v10) + static_cast<int64_t>(eax13));
            }
            rdi14 = v9;
            _fclose(rdi14, rsi6, rdx5, rcx12);
            v15 = 0;
        } else {
            rdi14 = rdi;
            _perror(rdi14, "rb");
            v15 = 1;
        }
    } else {
        rdi14 = rdi;
        _perror(rdi14, rsi6);
        v15 = 1;
    }
    eax16 = v15;
    rdx17 = ___stack_chk_guard;
    if (v4 ^ *rdx17) {
        eax16 = ___stack_chk_fail(rdi14, rsi6);
    }
    return eax16;
}

int64_t _fopen = 0x100000e78;

void* _fopen(void* rdi, void* rsi) {
    goto _fopen;
}

int64_t _fread = 0x100000e82;

int32_t _fread(void* rdi, void* rsi, int64_t rdx, void* rcx) {
    goto _fread;
}

/* _stat$INODE64 */
int64_t _stat_INODE64 = 0x100000ea0;

/* _stat$INODE64 */
int32_t _stat_INODE64(void* rdi, void* rsi) {
    goto _stat_INODE64;
}

void start() {
    int64_t rdi1;
    void** rsi2;
    int64_t rdx3;
    void** rcx4;
    int32_t eax5;
    int64_t rdi6;

    rdi1 = reinterpret_cast<int64_t>(__return_address());
    rsi2 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 16);
    *reinterpret_cast<int32_t*>(&rdx3) = *reinterpret_cast<int32_t*>(&rdi1) + 1 << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    rcx4 = reinterpret_cast<void**>(rdx3 + reinterpret_cast<int64_t>(rsi2));
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

void fun_100000e3c() {
    goto g100001000;
}

void fun_100000e46() {
    goto 0x100000e2c;
}

void fun_100000e50() {
    goto 0x100000e2c;
}

void fun_100000e5a() {
    goto 0x100000e2c;
}

void fun_100000e64() {
    goto 0x100000e2c;
}

void fun_100000e6e() {
    goto 0x100000e2c;
}

void fun_100000e78() {
    goto 0x100000e2c;
}

void fun_100000e82() {
    goto 0x100000e2c;
}

void fun_100000e8c() {
    goto 0x100000e2c;
}

void fun_100000e96() {
    goto 0x100000e2c;
}

void fun_100000ea0() {
    goto 0x100000e2c;
}

void fun_100000eaa() {
    goto 0x100000e2c;
}
