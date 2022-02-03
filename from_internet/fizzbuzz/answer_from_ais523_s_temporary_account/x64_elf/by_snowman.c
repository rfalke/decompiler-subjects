
int64_t write_stderr(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx);

void inefficiently_write_as_hex(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx);

int64_t exit_on_error(int64_t rdi, uint64_t* rsi, int64_t rdx, void* rcx) {
    int64_t rax5;
    int64_t rdi6;
    int64_t rax7;

    if (rax5 < 0) {
        write_stderr(rdi, "Encountered OS error 0x at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 23, rcx);
        inefficiently_write_as_hex(rdi, "Encountered OS error 0x at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 23, 8);
        write_stderr(rdi, " at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 10, 8);
        inefficiently_write_as_hex(rdi, " at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 10, 60);
        write_stderr(rdi, ", exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 19, 60);
        *reinterpret_cast<int32_t*>(&rdi6) = 74;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
        while (1) {
            __asm__("syscall ");
            __asm__("ud2 ");
            write_stderr(rdi6, "Error: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 96, 60);
            *reinterpret_cast<int32_t*>(&rdi6) = 59;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
        }
    } else {
        return rax7;
    }
}

uint64_t iovec_base = 0;

int64_t gc00008 = 0;

void swap_buffers() {
    uint64_t rbx1;
    int64_t rdx2;
    void* rcx3;
    int64_t rax4;
    uint64_t tmp64_5;
    int1_t zf6;

    iovec_base = rbx1 & 0xffffffffffe00000;
    gc00008 = rdx2;
    do {
        __asm__("syscall ");
        rax4 = exit_on_error(1, 0xc00000, 1, rcx3);
        tmp64_5 = iovec_base + rax4;
        iovec_base = tmp64_5;
        gc00008 = gc00008 - rax4;
        zf6 = gc00008 == 0;
    } while (!zf6);
    return;
}

int64_t inc_tens_digit() {
    signed char al1;
    int64_t rax2;
    int32_t eax3;

    if (al1 != -57) {
        *reinterpret_cast<int32_t*>(&rax2) = eax3 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        return rax2;
    }
}

int64_t write_stderr(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx) {
    __asm__("syscall ");
    return 1;
}

signed char error_write_buffer = 0;

void inefficiently_write_as_hex(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx) {
    uint64_t rax5;
    uint64_t rax6;
    void* rcx7;

    do {
        rax5 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>("0123456789ABCDEFEncountered OS error 0x at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n") + (rax6 >> *reinterpret_cast<signed char*>(&rcx) & 15));
        error_write_buffer = *reinterpret_cast<signed char*>(&rax5);
        write_stderr(rdi, 0xc00010, 1, "0123456789ABCDEFEncountered OS error 0x at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n");
        rcx7 = rcx;
        rax6 = rax6;
    } while (*reinterpret_cast<int32_t*>(&rcx7) - 4 >= 0);
    return;
}

void fun_401001() {
    __asm__("fcmovnb st0, st0");
}

void fun_401005(int64_t rdi, uint64_t* rsi) {
    int1_t less3;
    int64_t rdx4;
    int32_t ecx5;
    void* rcx6;
    void* rcx7;
    void* rcx8;
    int64_t rax9;
    int64_t r13_10;
    void* rcx11;
    void* rcx12;

    if (less3) {
    }
    *reinterpret_cast<int32_t*>(&rdx4) = ecx5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    __asm__("syscall ");
    if (!0) 
        goto addr_401088_5;
    write_stderr(rdi, "This program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 64, rcx6);
    goto 0x4019f1;
    addr_401088_5:
    if (0) {
        write_stderr(rdi, "Cannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 96, rcx7);
        inefficiently_write_as_hex(rdi, "Cannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 96, 28);
        write_stderr(rdi, ".\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 2, 28);
        goto 0x4019f1;
    }
    rax9 = exit_on_error(rdi, rsi, rdx4, rcx8);
    if (rax9 == r13_10) 
        goto addr_40109f_10;
    write_stderr(rdi, "Failed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 59, rcx11);
    inefficiently_write_as_hex(rdi, "Failed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 59, 28);
    write_stderr(rdi, "\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 16, 28);
    inefficiently_write_as_hex(rdi, "\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 16, 28);
    write_stderr(rdi, "\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n", 0x8d, 28);
    goto 0x4019f1;
    addr_40109f_10:
    __asm__("syscall ");
    exit_on_error(0x800000, 0x600000, 14, rcx12);
}

void fun_40100d() {
    int1_t less1;

    if (!less1) 
        goto 0x40107e;
}

void fun_401015() {
    int1_t less1;

    if (!less1) {
    }
}

void fun_40101d() {
    int1_t less1;

    if (!less1) {
    }
}

void fun_401025() {
    int1_t less1;

    if (!less1) 
        goto 0x401096;
}

void fun_40102d() {
    int1_t less1;

    if (!less1) {
    }
}

void fun_401035() {
    int1_t less1;

    if (!less1) 
        goto 0x4010a6;
}

void fun_40103d() {
    __asm__("outsd ");
    if (__intrinsic() < 0x80000006) 
        goto 0x4019fa;
    if (!(__intrinsic() >> 16)) 
        goto 0x4019fa;
}

void fun_4010c5() {
    __asm__("outsd ");
}

void fun_4010cd() {
    int1_t less_or_equal1;

    if (less_or_equal1) {
    }
}

void fun_4010f4() {
    __asm__("outsd ");
}

void fun_4010fc() {
    int64_t* rbx1;
    int64_t r10_2;

    __asm__("outsd ");
    *rbx1 = r10_2;
}

void fun_40110e() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto "z\n";
}

void fun_401112() {
    __asm__("fmulp st1, st0");
}

void fun_401116() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_40112c() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x401102;
}

void fun_401130() {
    int64_t* rbx1;
    int64_t r11_2;

    __asm__("fmulp st1, st0");
    *rbx1 = r11_2;
}

void fun_40113b() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x401111;
}

void fun_40113f() {
    __asm__("fmulp st1, st0");
}

void fun_401143() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_401159() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x40112f;
}

void fun_40115d() {
    __asm__("fmulp st1, st0");
}

void fun_401161() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_401177() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x40114d;
}

struct s0 {
    signed char[4] pad4;
    int64_t f4;
};

void fun_40117b() {
    int32_t* rbx1;
    int32_t r11d2;
    struct s0* rbx3;
    int64_t r10_4;

    __asm__("fmulp st1, st0");
    *rbx1 = r11d2;
    rbx3->f4 = r10_4;
}

void fun_40118a() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x401160;
}

void fun_40118e() {
    __asm__("fmulp st1, st0");
}

void fun_401192() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_4011a8() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x40117e;
}

void fun_4011ac() {
    __asm__("fmulp st1, st0");
}

void fun_4011b0() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_4011c6() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x40119c;
}

void fun_4011ca() {
    int64_t* rbx1;
    int64_t r11_2;

    __asm__("fmulp st1, st0");
    *rbx1 = r11_2;
}

void fun_4011d5() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x4011ab;
}

void fun_4011d9() {
    __asm__("fmulp st1, st0");
}

void fun_4011dd() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_4011f3() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x4011c9;
}

void fun_4011f7() {
    int64_t* rbx1;
    int64_t r10_2;

    __asm__("fmulp st1, st0");
    *rbx1 = r10_2;
}

void fun_401202() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x4011d8;
}

void fun_401206() {
    int64_t* rbx1;
    int64_t r11_2;

    __asm__("fmulp st1, st0");
    *rbx1 = r11_2;
}

void fun_401211() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x4011e7;
}

void fun_401215() {
    __asm__("fmulp st1, st0");
}

void fun_401219() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_40122f() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x401205;
}

void fun_401233() {
    __asm__("fmulp st1, st0");
}

void fun_401237() {
    int1_t sf1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t rbx4;
    int64_t r14_5;

    __asm__("rol esp, 0xc2");
    __asm__("rol ch, 0xfa");
    if (less_or_equal2) {
        rbx3 = rbx4 + r14_5 + 1;
    }
    *reinterpret_cast<signed char*>(rbx3 - 1) = 10;
}

void fun_40124d() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x401223;
}

void fun_401251() {
    int64_t* rbx1;
    int64_t r11_2;

    __asm__("fmulp st1, st0");
    *rbx1 = r11_2;
}

void fun_40125c() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x401232;
}

void fun_401260() {
    int32_t ecx1;

    __asm__("fmulp st1, st0");
    if (ecx1 - 1) 
        goto 0x401106;
}

void fun_401276() {
    int1_t zf1;

    if (zf1) 
        goto 0x401239;
}

void fun_40127a() {
    signed char* rsi1;
    signed char* rsi2;
    signed char* rsi3;

    *rsi1 = reinterpret_cast<signed char>(*rsi2 + 1);
    if (*rsi3) 
        goto 0x401103;
    swap_buffers();
}

void fun_4012de() {
    __asm__("out dx, al");
}

void fun_40130f() {
    int1_t less1;

    if (!less1) {
    }
}

void fun_401312() {
}

struct s1 {
    signed char[1] pad1;
    signed char f1;
};

struct s2 {
    signed char[1] pad1;
    signed char f1;
};

void fun_401322() {
    struct s1* rdx1;
    struct s2* rdx2;
    signed char bh3;
    uint32_t r14d4;

    __asm__("enter 0xc400, 0x43");
    rdx1->f1 = reinterpret_cast<signed char>(rdx2->f1 + bh3);
    if (11 <= r14d4) {
    }
}

void fun_401357() {
    int1_t zf1;
    int64_t rcx2;

    if (zf1) {
        __asm__("out dx, eax");
        __asm__("rol ah, 0xe3");
        do {
        } while (rcx2);
    }
}

void fun_40135b() {
}

void fun_40135e(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    __asm__("fsubp st5, st0");
}

void fun_401362() {
    return;
}

void fun_401368() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 8) = *reinterpret_cast<int32_t*>(rbp2 - 8) >> -61;
}

void fun_ffffffffee1eb939();

void fun_40136f() {
    fun_ffffffffee1eb939();
}

void fun_40138f(int32_t edi) {
}

void fun_401393() {
    return;
}

void fun_4013ab() {
    int64_t rcx1;

    if (rcx1) 
        goto 0x4013aa;
    return;
}

struct s3 {
    int32_t f0;
    int64_t f4;
};

void fun_4013be(struct s3* rdi) {
    int1_t less_or_equal2;
    int1_t less_or_equal3;
    signed char al4;
    int32_t r11d5;
    int64_t r10_6;
    void* rdi7;
    void* r14_8;
    signed char al9;
    int64_t* rdi10;
    void* r14_11;
    signed char al12;
    int64_t r11_13;

    __asm__("cli ");
    if (!less_or_equal2) {
        if (!less_or_equal3) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi) - 3) = al4;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) - 2) = 0xf6cc;
            rdi->f0 = r11d5;
            rdi->f4 = r10_6;
        } else {
            rdi7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_8) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi7) - 3) = al9;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi7) - 2) = 0xf6cd;
        }
    } else {
        rdi10 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_11) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi10) - 3) = al12;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi10) - 2) = 0xf6cf;
        *rdi10 = r11_13;
    }
}

void fun_4013d7() {
    __asm__("cli ");
}

void fun_4013e9(int64_t rdi) {
    int1_t less_or_equal2;

    __asm__("cli ");
    if (!less_or_equal2) 
        goto 0x401403;
}

void fun_401406(int64_t* rdi) {
    int1_t less_or_equal2;
    signed char al3;
    int64_t r11_4;
    void* rdi5;
    void* r14_6;
    signed char al7;

    __asm__("cli ");
    if (!less_or_equal2) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi) - 3) = al3;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) - 2) = 0xf6c9;
        *rdi = r11_4;
    } else {
        rdi5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_6) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi5) - 3) = al7;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi5) - 2) = 0xf6ca;
    }
}

struct s4 {
    int64_t f0;
    int64_t f5;
};

void fun_401418(int64_t* rdi) {
    int1_t less_or_equal2;
    int1_t less_or_equal3;
    struct s4* rdi4;
    void* r14_5;
    signed char al6;
    int64_t r10_7;
    int64_t r11_8;

    __asm__("cli ");
    if (!less_or_equal2) {
        if (less_or_equal3) {
            rdi4 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_5) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi4) - 3) = al6;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi4) - 2) = 0xf6c7;
            inc_tens_digit();
            rdi4->f0 = r10_7;
            rdi = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi4) + 5);
        }
        *rdi = r11_8;
    }
}

void fun_401431() {
    __asm__("cli ");
}

struct s5 {
    int64_t f0;
    int64_t f5;
};

void fun_401456(struct s5* rdi) {
    int1_t less_or_equal2;
    signed char al3;
    int64_t r11_4;
    int64_t r10_5;
    void* rdi6;
    void* r14_7;
    signed char al8;

    __asm__("cli ");
    if (!less_or_equal2) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi) - 3) = al3;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) - 2) = 0xf6cd;
        rdi->f0 = r11_4;
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi) + 5) = r10_5;
    } else {
        rdi6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_7) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi6) - 3) = al8;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi6) - 2) = 0xf6ce;
    }
}

void fun_401468(int64_t rdi) {
    int1_t less_or_equal2;

    __asm__("cli ");
    if (!less_or_equal2) 
        goto 0x401482;
}

struct s6 {
    int32_t f0;
    int64_t f4;
};

void fun_401488(struct s6* rdi) {
    int1_t less_or_equal2;
    int1_t less_or_equal3;
    signed char al4;
    int32_t r11d5;
    int64_t r10_6;
    void* rdi7;
    void* r14_8;
    signed char al9;
    int64_t* rdi10;
    void* r14_11;
    signed char al12;
    int64_t r11_13;

    __asm__("cli ");
    if (!less_or_equal2) {
        if (!less_or_equal3) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi) - 3) = al4;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) - 2) = 0xf6c7;
            inc_tens_digit();
            rdi->f0 = r11d5;
            rdi->f4 = r10_6;
        } else {
            rdi7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_8) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi7) - 3) = al9;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi7) - 2) = 0xf6c8;
        }
    } else {
        rdi10 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_11) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi10) - 3) = al12;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi10) - 2) = 0xf6ca;
        *rdi10 = r11_13;
    }
}

void fun_4014a1() {
    __asm__("cli ");
}

void fun_4014b3(int64_t rdi) {
    int1_t less_or_equal2;

    __asm__("cli ");
    if (!less_or_equal2) 
        goto 0x4014cd;
}

void fun_4014d5(int64_t* rdi) {
    int1_t less_or_equal2;
    signed char al3;
    int64_t r11_4;
    void* rdi5;
    void* r14_6;
    signed char al7;

    __asm__("cli ");
    if (!less_or_equal2) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi) - 3) = al3;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) - 2) = 0xf6ce;
        *rdi = r11_4;
    } else {
        rdi5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_6) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi5) - 3) = al7;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi5) - 2) = 0xf6cf;
    }
}

struct s7 {
    int64_t f0;
    int64_t f5;
};

void fun_4014e7(int64_t* rdi) {
    int1_t less_or_equal2;
    int1_t less_or_equal3;
    struct s7* rdi4;
    void* r14_5;
    signed char al6;
    int64_t r10_7;
    int64_t r11_8;

    __asm__("cli ");
    if (!less_or_equal2) {
        if (less_or_equal3) {
            rdi4 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_5) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi4) - 3) = al6;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi4) - 2) = 0xf6cc;
            rdi4->f0 = r10_7;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi4) + 5) = r11_8;
        }
    }
}

void fun_401500() {
    __asm__("cli ");
}

struct s8 {
    int64_t f0;
    int64_t f5;
};

void fun_401520(struct s8* rdi) {
    int1_t less_or_equal2;
    void* rdi3;
    void* r14_4;
    signed char al5;
    signed char al6;
    int64_t r11_7;
    int32_t ecx8;
    int64_t r10_9;

    __asm__("cli ");
    if (less_or_equal2) {
        rdi3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r14_4) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi3) - 3) = al5;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi3) - 2) = 0xf6c9;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi) - 3) = al6;
    *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) - 2) = 0xf6c8;
    rdi->f0 = r11_7;
    inc_tens_digit();
    if (!(ecx8 - 1)) 
        goto addr_401557_6;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi) + 5) = r10_9;
    addr_401557_6:
}

void fun_401532(int64_t rdi) {
    int1_t less_or_equal2;

    __asm__("cli ");
    if (!less_or_equal2) 
        goto 0x40154c;
}

void fun_401565() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
        __asm__("outsd ");
    }
}

void fun_401569() {
    int1_t less_or_equal1;
    unsigned char* rax2;
    int16_t ax3;
    unsigned char* rcx4;
    unsigned char* rcx5;

    if (!less_or_equal1) {
        __asm__("outsd ");
        *reinterpret_cast<int32_t*>(&rax2) = ax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        *rcx4 = reinterpret_cast<unsigned char>(*rcx5 & *reinterpret_cast<unsigned char*>(&rax2));
        *rax2 = reinterpret_cast<unsigned char>(*rax2 + *reinterpret_cast<unsigned char*>(&rax2));
    }
}

void fun_401572() {
    __asm__("outsd ");
}

void fun_401578() {
    int1_t less_or_equal1;
    signed char* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    if (!less_or_equal1) {
        __asm__("outsd ");
        *rax2 = reinterpret_cast<signed char>(*rax3 + 1);
        *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    }
}

void fun_40157d() {
    int1_t less_or_equal1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;

    if (!less_or_equal1) {
        *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    }
}

signed char g877ffec5000000;

void fun_401581() {
    int64_t rax1;
    int64_t rax2;
    signed char* rax3;
    int16_t ax4;

    __asm__("outsd ");
    *reinterpret_cast<signed char*>(rax1 - 0x3b000000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax2 - 0x3b000000) - 3);
    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax3) = ax4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax3) = g877ffec5000000;
    *rax3 = reinterpret_cast<signed char>(*rax3 + *reinterpret_cast<signed char*>(&rax3));
}

signed char g806ffdc5000000;

void fun_40159a() {
    int1_t less_or_equal1;
    signed char* rax2;
    int64_t rcx3;
    signed char ch4;
    signed char* rax5;

    if (!less_or_equal1) 
        goto 0x40153b;
    *reinterpret_cast<signed char*>(&rax2) = g806ffdc5000000;
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = reinterpret_cast<signed char>(ch4 + *reinterpret_cast<signed char*>(&rax2));
    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax5) = *reinterpret_cast<int16_t*>(&rax2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    *rax5 = reinterpret_cast<signed char>(*rax5 + *reinterpret_cast<signed char*>(&rax5));
}

void fun_4015b2() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x40153b;
    __asm__("rol byte [rax], 0x0");
}

void fun_4015ba() {
    int1_t less_or_equal1;
    int64_t rcx2;
    int1_t zf3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    if (!less_or_equal1) {
        __asm__("outsd ");
        __asm__("outsd ");
    }
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
}

void fun_4015c9() {
}

void fun_4015d2() {
    int1_t less_or_equal1;
    signed char* rcx2;
    signed char* rcx3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;

    if (!less_or_equal1) 
        goto 0x40155b;
    *rcx2 = reinterpret_cast<signed char>(*rcx3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
}

void fun_4015da() {
    int1_t less_or_equal1;
    unsigned char* rcx2;
    unsigned char* rcx3;
    unsigned char al4;

    if (less_or_equal1) {
        *rcx2 = reinterpret_cast<unsigned char>(*rcx3 & al4);
    }
}

struct s9 {
    signed char[1] pad1;
    signed char f1;
};

struct s10 {
    signed char[1] pad1;
    signed char f1;
};

void fun_4015e1() {
    struct s9* rax1;
    struct s10* rax2;

    __asm__("outsd ");
    rax1->f1 = reinterpret_cast<signed char>(static_cast<int32_t>(rax2->f1));
    __asm__("outsd ");
}

void fun_4015ed() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t eax3;

    *rax1 = *rax2 + eax3;
}

void fun_4015f2() {
    int1_t less_or_equal1;
    int32_t* rax2;
    int32_t* rax3;
    int32_t eax4;

    if (!less_or_equal1) 
        goto 0x40157b;
    *rax2 = *rax3 + eax4;
}

void fun_4015fa() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
    }
}

signed char g877ffec5000001;

void fun_4015fd() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t eax3;
    int64_t rax4;
    int64_t rax5;
    int32_t* rax6;
    int16_t ax7;

    *rax1 = *rax2 + eax3;
    __asm__("outsd ");
    *reinterpret_cast<signed char*>(rax4 - 0x3affffff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax5 - 0x3affffff) - 3);
    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax6) = ax7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax6) = g877ffec5000001;
    *rax6 = *rax6 + *reinterpret_cast<int32_t*>(&rax6);
}

signed char g806ffdc5000001;

void fun_40161a() {
    int1_t less_or_equal1;
    int32_t* rax2;
    int64_t rcx3;
    signed char ch4;
    signed char* rax5;

    if (less_or_equal1) {
        *reinterpret_cast<signed char*>(&rax2) = g806ffdc5000001;
        *rax2 = *rax2 + *reinterpret_cast<int32_t*>(&rax2);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = reinterpret_cast<signed char>(ch4 + *reinterpret_cast<signed char*>(&rax2));
        __asm__("outsd ");
        *reinterpret_cast<int32_t*>(&rax5) = *reinterpret_cast<int16_t*>(&rax2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        if (!(reinterpret_cast<uint1_t>(!!(rcx3 - 1)) & reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx3) + 1)))) {
            *rax5 = reinterpret_cast<signed char>(*rax5 + *reinterpret_cast<signed char*>(&rax5));
        }
    }
}

void fun_401632() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x4015bb;
    __asm__("rol byte [rcx], 0x0");
}

void fun_40163a() {
    int1_t less_or_equal1;
    int64_t rcx2;
    int1_t zf3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t r13_7;
    uint64_t r9_8;

    if (less_or_equal1) {
        if (!(reinterpret_cast<uint1_t>(!!(rcx2 - 1)) & reinterpret_cast<uint1_t>(!zf3))) {
            *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
        }
        if (reinterpret_cast<uint64_t>(r13_7 - 0xc00000) >> 5 >= r9_8) {
        }
    }
}

void fun_401672() {
}

void fun_401685() {
    int64_t rcx1;

    __asm__("outsd ");
    if (rcx1 - 1) {
    }
}

void fun_40168d() {
    return;
}

void fun_401695() {
    __asm__("outsd ");
}

void fun_40169a(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int64_t rcx5;

    __asm__("outsd ");
    rcx5 = rcx - 1;
    if (rcx5) {
        if (rcx5 - 1) {
            *rdi = *rsi;
            __asm__("fsubp st5, st0");
        }
    }
}

void fun_4016a3() {
    return;
}

void fun_4016b1() {
    __asm__("outsd ");
}

void fun_4016b5() {
    int64_t rcx1;

    if (rcx1 - 1) {
    }
}

void fun_4016ba() {
    return;
}

void fun_4016c3() {
    __asm__("fstp9 st4");
}

void fun_4016c8() {
    __asm__("outsd ");
}

void fun_4016cc() {
    int64_t rcx1;

    if (rcx1 - 1) {
    }
}

void fun_4016d1() {
    return;
}

void fun_4016da(int32_t* rdi) {
    signed char cl2;

    __asm__("in eax, 0x73");
    *rdi = *rdi >> cl2;
}

void fun_4016e0() {
    signed char* rax1;
    int32_t edx2;

    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax1) = edx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rax1 = reinterpret_cast<signed char>(static_cast<int32_t>(*rax1));
}

void fun_4016ec() {
    return;
}

void fun_4016fd() {
    __asm__("outsd ");
}

void fun_401709() {
    return;
}

void fun_40171a() {
    signed char* rax1;
    int32_t edx2;
    int64_t rcx3;

    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax1) = edx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    __asm__("rol byte [rax], 0x0");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1) + *reinterpret_cast<signed char*>(&rax1));
    if (rcx3 - 1) {
        *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
    }
}

void fun_401726() {
    return;
}

void fun_401737() {
    signed char* rax1;
    int32_t edx2;
    int64_t rcx3;
    int1_t zf4;

    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax1) = edx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
}

void fun_40173e() {
    int64_t rcx1;
    int1_t less_or_equal2;

    if (rcx1 - 1) {
        if (!less_or_equal2) 
            goto 0x40170a;
    }
}

void fun_401743() {
    return;
}

void fun_401750() {
}

void fun_401754() {
    signed char* rax1;
    int32_t edx2;
    signed char* rcx3;
    signed char* rcx4;

    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax1) = edx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rcx3 = reinterpret_cast<signed char>(*rcx4 + *reinterpret_cast<signed char*>(&rax1));
    *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
}

void fun_40175b() {
    int64_t rcx1;

    if (rcx1 - 1) {
        return;
    }
}

void fun_401760() {
    return;
}

void fun_401774() {
    unsigned char* rax1;
    int32_t edx2;
    unsigned char* rcx3;
    unsigned char* rcx4;

    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax1) = edx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rcx3 = reinterpret_cast<unsigned char>(*rcx4 & *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
}

void fun_40177b() {
    int64_t rcx1;
    int64_t rcx2;
    int1_t less_or_equal3;
    int1_t less_or_equal4;
    int1_t zf5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;

    rcx1 = rcx2 - 1;
    if (!rcx1) {
    }
    if (less_or_equal3) 
        goto addr_4017c5_5;
    if (!less_or_equal4) {
    }
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    addr_4017c5_5:
}

void fun_401780() {
    return;
}

void fun_40178a() {
    int64_t rax1;
    int64_t rax2;

    *reinterpret_cast<int32_t*>(rax1 - 0x7f) = *reinterpret_cast<int32_t*>(rax2 - 0x7f) - 1;
}

void fun_40178e() {
    signed char* rdx1;
    signed char* rdx2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rdx1 = reinterpret_cast<signed char>(*rdx2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
}

void fun_401794() {
    int32_t* rax1;
    int32_t edx2;
    int1_t cf3;
    int64_t rcx4;

    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax1) = edx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rax1 = *rax1 + *reinterpret_cast<int32_t*>(&rax1);
    cf3 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax1) + 1) + *reinterpret_cast<signed char*>(&rax1)) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax1) + 1);
    if (rcx4 - 1) {
        if (!cf3) {
        }
    }
}

void fun_4017a0() {
}

void fun_4017aa() {
    int64_t rdx1;
    int64_t rdx2;

    *reinterpret_cast<int32_t*>(rdx1 - 0x73) = *reinterpret_cast<int32_t*>(rdx2 - 0x73) - 1;
}

void fun_4017b5() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t eax3;
    int64_t rcx4;

    *rax1 = *rax2 + eax3;
    if (rcx4 - 1) {
    }
}

void fun_4017be() {
    return;
}

void fun_4017c8() {
}

void fun_4017cb() {
    signed char* rcx1;
    signed char* rcx2;
    int64_t rcx3;

    __asm__("outsd ");
    *rcx1 = reinterpret_cast<signed char>(static_cast<int32_t>(*rcx2));
    if (rcx3 - 1) {
    }
}

void fun_4017d7() {
    return;
}

void fun_4017e8() {
    __asm__("outsd ");
}

void fun_4017f4() {
    return;
}

void fun_401805() {
    void* rcx1;
    void* rcx2;
    int64_t r9_3;
    int32_t r14d4;

    rcx1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx2) - 1);
    if (!rcx1) {
    }
    swap_buffers();
    if (!r9_3) 
        goto addr_401857_7;
    addr_401857_7:
    if (r14d4 == 18) {
        __asm__("syscall ");
        exit_on_error(1, "Buzz\nFizz\n7\n8\nFizz\n", 5, rcx1);
        goto 0x4019f1;
    }
}

void fun_40180a() {
    return;
}

void fun_40181b() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x401862;
}

void fun_401820() {
    return;
}

void fun_401865() {
    int1_t zf1;
    uint32_t ebx2;
    uint32_t ebx3;
    int64_t rax4;
    int64_t r13_5;
    int64_t rdx6;
    int64_t r11_7;

    if (zf1) {
        if (ebx2 < ebx3) 
            goto 0x401680;
        rax4 = 0xc00000 - r13_5;
        rdx6 = r11_7;
        if ((*reinterpret_cast<uint32_t*>(&rdx6) & 0x1fffff) < reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rax4))) 
            goto 0x401852; else 
            goto "???";
    }
}

void fun_401869() {
    goto 0x4012fb;
}

void fun_401885() {
    int64_t rcx1;
    int1_t of2;

    if (rcx1) {
        if (of2) 
            goto 0x401848;
        __asm__("in eax, dx");
    }
}

void fun_401888() {
    __asm__("rol byte [rax], 0x48");
}

struct s11 {
    signed char[9] pad9;
    signed char f9;
};

struct s12 {
    signed char[9] pad9;
    signed char f9;
};

struct s13 {
    signed char[9] pad9;
    signed char f9;
};

void fun_401891() {
    int32_t* rax1;
    int32_t* rax2;
    struct s11* rax3;
    struct s12* rax4;
    signed char cl5;
    struct s13* rax6;
    int64_t r8_7;

    *rax1 = *rax2 + 1;
    rax3->f9 = reinterpret_cast<signed char>(rax4->f9 + cl5);
    __asm__("ror byte [rcx+rdi-0x40], 1");
    if (rax6->f9) 
        goto 0x401640;
    if (r8_7 != -1) {
    }
}

void fun_4018a7() {
    int64_t rcx1;

    if (rcx1) 
        goto 0x4018a2;
}

void fun_4018aa() {
    int64_t rax1;
    int64_t rax2;
    int32_t ecx3;

    *reinterpret_cast<int32_t*>(rax1 - 0x77) = *reinterpret_cast<int32_t*>(rax2 - 0x77) + ecx3;
}

void fun_4018af() {
    __asm__("bsf rcx, rdx");
}

void fun_4018c8(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int64_t rcx5;
    int1_t cf6;
    signed char* rax7;
    signed char* rax8;

    rcx5 = rcx - 1;
    if (rcx5) {
        if (!cf6) {
            goto 0x401377;
        } else {
            *rdi = *rsi;
            __asm__("fsubp st5, st0");
            goto 0x401377;
        }
    } else {
        rax7[rcx5 * 4] = reinterpret_cast<signed char>(rax8[rcx5 * 4] + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1));
    }
}

void fun_4018d4() {
    int64_t rcx1;

    if (rcx1) {
    }
}

void fun_4018da() {
    int64_t rcx1;

    if (rcx1) 
        goto 0x40192d;
    __asm__("pinsrw mm4, bx, 0xfd");
}

void fun_401900(int32_t edi) {
}

void fun_401904() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40195b;
}

void fun_40190f() {
    if (1) {
        __asm__("int 0xde");
    }
}

void fun_401363() {
}

struct s14 {
    signed char[208] pad208;
    signed char fd0;
};

struct s15 {
    signed char[208] pad208;
    signed char fd0;
};

void fun_401396() {
    struct s14* rax1;
    struct s15* rax2;

    rax1->fd0 = reinterpret_cast<signed char>(rax2->fd0 >> 1);
}

void fun_401692() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x401697;
}

void fun_4016a8() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x4016ed;
    __asm__("in al, 0xc5");
}

void fun_4016bf() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x401704;
}

void fun_4016d6() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x40171b;
}

void fun_4016f1() {
    int1_t less_or_equal1;
    signed char* rax2;
    signed char* rax3;

    if (!less_or_equal1) 
        goto 0x401676;
    *rax2 = reinterpret_cast<signed char>(static_cast<int32_t>(*rax3));
    __asm__("in eax, 0xfc");
    __asm__("fcmovnb st0, st5");
}

void fun_40170e() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
    }
}

void fun_401765() {
    int1_t less_or_equal1;
    signed char* rcx2;
    signed char* rcx3;
    signed char al4;

    if (!less_or_equal1) 
        goto 0x4016ea;
    *rcx2 = reinterpret_cast<signed char>(*rcx3 + al4);
}

void fun_4017dc(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rcx3;
    int64_t rcx4;

    if (!less_or_equal2) 
        goto 0x401821;
    *reinterpret_cast<unsigned char*>(rcx3 + rdi - 27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rcx4 + rdi - 27) | 72);
}

void fun_4017f9() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x40183e;
}

void fun_40180f() {
    int1_t less_or_equal1;
    signed char* rax2;
    int32_t edx3;
    int64_t rcx4;
    int1_t zf5;

    if (!less_or_equal1) 
        goto 0x401854;
    __asm__("rol ch, 0xfe");
    __asm__("outsd ");
    *reinterpret_cast<int32_t*>(&rax2) = edx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (reinterpret_cast<uint1_t>(!!(rcx4 - 1)) & reinterpret_cast<uint1_t>(!zf5)) 
        goto 0x401819;
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
}

void fun_401825() {
    int1_t less_or_equal1;
    int64_t rcx2;
    int1_t zf3;

    if (!less_or_equal1) 
        goto 0x40186a;
    if (reinterpret_cast<uint1_t>(!!(rcx2 - 1)) & reinterpret_cast<uint1_t>(!zf3)) 
        goto 0x401875; else 
        goto "???";
}

void fun_4017a5() {
    int1_t less_or_equal1;
    int1_t less_or_equal2;

    if (!less_or_equal1) {
        if (!less_or_equal2) 
            goto 0x4016b0;
        __asm__("rol byte [rax], 0x0");
    }
}
