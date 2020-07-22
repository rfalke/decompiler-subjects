
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x404028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

unsigned char divisibleBy3(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edi * 0xaaaaaaab) <= 0x55555555));
}

int32_t divideByThree(int32_t edi) {
    int64_t rax2;
    uint64_t rax3;

    *reinterpret_cast<int32_t*>(&rax2) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    rax3 = reinterpret_cast<uint64_t>(rax2 * 0xaaaaaaab) >> 33;
    return *reinterpret_cast<int32_t*>(&rax3);
}

int64_t printf = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    goto printf;
}

int32_t countSetBits(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    if (!edi) {
        return 0;
    }
}

unsigned char isWhitespace(uint32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    unsigned char al7;
    uint32_t edi8;

    if (*reinterpret_cast<unsigned char*>(&edi) <= 32) {
    }
    al7 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edi) == 32)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edi) == 10)));
    if (!al7) 
        goto addr_401184_5;
    addr_40118e_6:
    return al7;
    addr_401184_5:
    edi8 = edi & 0xfffffffb;
    al7 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&edi8) == 9);
    goto addr_40118e_6;
}

unsigned char isWhitespace2(uint32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    unsigned char al7;
    uint32_t edi8;

    al7 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&edi) == 32)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&edi) == 10)));
    if (!al7) {
        edi8 = edi & 0xfffffffb;
        al7 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&edi8) == 9);
    }
    return al7;
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

void fun_401043() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401320, 0x401390, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401073() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_4010f3() {
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

int64_t fun_401123() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void fun_40114f() {
    int64_t rcx1;
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int64_t r9_7;
    int64_t r8_8;
    int64_t rcx9;
    int64_t rdx10;
    int64_t rsi11;
    unsigned char al12;
    unsigned char al13;
    unsigned char al14;
    unsigned char al15;
    int64_t r8_16;
    int64_t rcx17;
    int64_t rdx18;
    int64_t rsi19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int64_t r8_24;
    int64_t rcx25;
    int64_t rdx26;
    int64_t rsi27;
    unsigned char al28;
    unsigned char al29;
    unsigned char al30;
    int64_t rcx31;
    int64_t rdx32;
    int64_t rsi33;
    unsigned char al34;
    unsigned char al35;
    unsigned char al36;
    int64_t rcx37;
    int64_t rdx38;
    int64_t rsi39;
    int64_t v40;
    int1_t zf41;

    if (rcx1 - 1) {
        eax2 = divideByThree(0x66);
        eax3 = divideByThree(0x65);
        eax4 = divideByThree(100);
        eax5 = divideByThree(99);
        eax6 = divideByThree(0);
        *reinterpret_cast<int32_t*>(&r9_7) = eax2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_7) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r8_8) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx9) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx10) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi11) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = 0;
        fun_401030("divideByThree:  f(0)=%d f(99)=%d f(100)=%d f(101)=%d f(102)=%d\n", rsi11, rdx10, rcx9, r8_8, r9_7);
        al12 = divisibleBy3(44, rsi11, rdx10, rcx9, r8_8, r9_7);
        al13 = divisibleBy3(43, rsi11, rdx10, rcx9, r8_8, r9_7);
        al14 = divisibleBy3(42, rsi11, rdx10, rcx9, r8_8, r9_7);
        al15 = divisibleBy3(0, rsi11, rdx10, rcx9, r8_8, r9_7);
        *reinterpret_cast<uint32_t*>(&r8_16) = al12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rcx17) = al13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx18) = al14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rsi19) = al15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
        fun_401030("divisibleBy3:   f(0)=%d f(42)=%d f(43)=%d f(44)=%d\n", rsi19, rdx18, rcx17, r8_16, r9_7);
        eax20 = countSetBits(0x10101, rsi19, rdx18, rcx17, r8_16, r9_7);
        eax21 = countSetBits(-1, rsi19, rdx18, rcx17, r8_16, r9_7);
        eax22 = countSetBits(0xff, rsi19, rdx18, rcx17, r8_16, r9_7);
        eax23 = countSetBits(0, rsi19, rdx18, rcx17, r8_16, r9_7);
        *reinterpret_cast<int32_t*>(&r8_24) = eax20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx25) = eax21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx26) = eax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi27) = eax23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = 0;
        fun_401030("countSetBits:   f(0)=%d f(0xff)=%d f(0xffffffff)=%d f(0x10101)=%d\n", rsi27, rdx26, rcx25, r8_24, r9_7);
        al28 = isWhitespace(97, rsi27, rdx26, rcx25, r8_24, r9_7);
        al29 = isWhitespace(9, rsi27, rdx26, rcx25, r8_24, r9_7);
        al30 = isWhitespace(32, rsi27, rdx26, rcx25, r8_24, r9_7);
        *reinterpret_cast<uint32_t*>(&rcx31) = al28;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx32) = al29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rsi33) = al30;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
        fun_401030("isWhitespace:   f(' ')=%d f(tab)=%d f('a')=%d\n", rsi33, rdx32, rcx31, r8_24, r9_7);
        al34 = isWhitespace2(97, rsi33, rdx32, rcx31, r8_24, r9_7);
        al35 = isWhitespace2(9, rsi33, rdx32, rcx31, r8_24, r9_7);
        al36 = isWhitespace2(32, rsi33, rdx32, rcx31, r8_24, r9_7);
        *reinterpret_cast<uint32_t*>(&rcx37) = al34;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx38) = al35;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rsi39) = al36;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi39) + 4) = 0;
        fun_401030("isWhitespace2:  f(' ')=%d f(tab)=%d f('a')=%d\n", rsi39, rdx38, rcx37, r8_24, r9_7);
        goto v40;
    } else {
        __asm__("rep iretd ");
        if (!zf41) 
            goto 0x40114c;
        return;
    }
}

void fun_40116a() {
    int64_t rcx1;

    if (rcx1 - 1) 
        goto 0x40112f;
}

void _init();

void fun_401323(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t r14_5;
    int32_t r13d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r15_4 = rdx;
    r14_5 = rsi;
    r13d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x403e10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_401393() {
    __asm__("cli ");
    return;
}

void fun_40139b() {
    __asm__("cli ");
    return;
}

int64_t g404010 = 0;

void fun_401036() {
    goto g404010;
}

void main() {
}
