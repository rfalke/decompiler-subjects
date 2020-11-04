
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x405028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

uint64_t log_size_7_var_000(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r8_4;
    uint64_t r12_5;
    int64_t r13_6;
    uint64_t rcx7;
    uint64_t rcx8;
    uint64_t rcx9;
    int64_t rbx10;
    uint32_t r14d11;
    uint16_t tmp16_12;
    int64_t r15_13;
    uint32_t r13d14;
    uint32_t eax15;
    int64_t r14_16;
    uint64_t r15_17;
    uint32_t eax18;
    int64_t rdx19;
    int64_t r13_20;
    uint64_t rdi21;
    int64_t rax22;
    int32_t r8d23;
    uint1_t less24;
    int16_t ax25;
    int16_t ax26;
    uint64_t rcx27;
    int16_t ax28;
    uint64_t rax29;
    int64_t r12_30;

    rax3 = 0x1b388a415ac4f2d5;
    r8_4 = 0x27f3423ade127613;
    r12_5 = 0x374496dc950242bd;
    r13_6 = 0x2a8db6f624626c62;
    rcx7 = 0x23856a4e9d270a39;
    __asm__("shrd r10, r13, 0x1");
    __asm__("rcr ebp, 0xa8");
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0x9d270a39;
        *reinterpret_cast<int32_t*>(&rcx7) = 0xde127613;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r12_5) = reinterpret_cast<uint16_t>(0x42bd >> 19);
    rcx8 = rcx7 ^ 0x960d87bdede22b89;
    __asm__("rcl r9, 1");
    __asm__("rol ah, 1");
    if (!static_cast<int1_t>(0x1745190a >> 0x6c)) {
    }
    __asm__("xadd r14w, r13W");
    *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<uint32_t*>(&rcx8) - (0x8690 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx8) < 0x8690));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    __asm__("rol r15, cl");
    if (0) {
        r12_5 = 0x960d87bdede22b89;
    }
    rbx10 = 0x96417bd61d662c45;
    __asm__("rcr r10w, 0x42");
    __asm__("ror si, 0xe4");
    __asm__("rol eax, 1");
    r14d11 = 0x1745190a << *reinterpret_cast<unsigned char*>(&rcx9) | 0x62374692;
    *reinterpret_cast<signed char*>(&r14d11) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14d11) - 98);
    *reinterpret_cast<unsigned char*>(&r13_6) = *reinterpret_cast<unsigned char*>(&rcx9);
    __asm__("ror si, cl");
    __asm__("btc r9w, 0x3c");
    __asm__("shld rax, r9, cl");
    __asm__("rcl ax, 1");
    tmp16_12 = *reinterpret_cast<uint16_t*>(&r13_6);
    *reinterpret_cast<uint16_t*>(&r13_6) = reinterpret_cast<uint16_t>(0xf2d5 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_4) + reinterpret_cast<uint1_t>(0xf2d5 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8_4))))));
    *reinterpret_cast<uint16_t*>(&rax3) = tmp16_12;
    __asm__("ror ebx, cl");
    __asm__("bsf r12w, dx");
    r15_13 = -0x3809ddc6059d31cd;
    __asm__("ror ebp, 1");
    r13d14 = *reinterpret_cast<uint32_t*>(&r13_6) | 0xc0000000;
    eax15 = *reinterpret_cast<uint32_t*>(&rax3) / r13d14;
    *reinterpret_cast<uint32_t*>(&r14_16) = r14d11 + 1;
    __asm__("xadd ebx, ebx");
    *reinterpret_cast<uint32_t*>(&r15_17) = *reinterpret_cast<uint32_t*>(&r15_13) | 0x90868911;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_17) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx9) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax15) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx9) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax15) + 1))))));
    eax18 = eax15 * 0x1d662c45;
    *reinterpret_cast<int32_t*>(&rdx19) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_20) = r13d14 - (*reinterpret_cast<uint32_t*>(&r14_16) + reinterpret_cast<uint1_t>(r13d14 < *reinterpret_cast<uint32_t*>(&r14_16) + __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = 0;
    rdi21 = reinterpret_cast<uint64_t>(-0x375db4cccb1fd242) << *reinterpret_cast<unsigned char*>(&rcx9);
    __asm__("shrd r9, r11, 0x97");
    __asm__("xadd dil, al");
    __asm__("rcr r14d, cl");
    __asm__("btr bx, r12w");
    __asm__("shld di, r10w, 0x1");
    __asm__("ror r10d, cl");
    *reinterpret_cast<uint32_t*>(&rax22) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax18)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    __asm__("shld r9d, ebp, 0x1");
    if (__intrinsic()) {
        rbx10 = 0x729c58b9a0e71d99;
    }
    __asm__("rcl cl, cl");
    r8d23 = static_cast<int32_t>(rdx19 + rcx9 * 4 + 40);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx9) + 1) = 0;
    less24 = reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic());
    if (less24) {
    }
    if (!reinterpret_cast<uint1_t>(less24 | reinterpret_cast<uint1_t>(-*reinterpret_cast<int16_t*>(&r8d23) == 0))) {
        *reinterpret_cast<uint32_t*>(&rcx9) = 0xb701;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx9) - 94)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax22) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx9) == 0);
    ax25 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax22) * 0xb701);
    __asm__("ror r9d, cl");
    ax26 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax25) * *reinterpret_cast<signed char*>(&rbx10));
    if (__intrinsic()) {
        rdi21 = r15_17;
    }
    rcx27 = rcx9 - (0x301ddfd1 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx9 < 0xffffffffcfe2202f)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax22) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax26) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx10) + 1));
    *reinterpret_cast<unsigned char*>(&rax22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax26) | *reinterpret_cast<unsigned char*>(&rbx10));
    if (0) {
        *reinterpret_cast<uint32_t*>(&r13_20) = *reinterpret_cast<uint32_t*>(&rax22);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = 0;
    }
    __asm__("ror edx, 0x41");
    *reinterpret_cast<unsigned char*>(&rcx27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx27) & 15);
    __asm__("shrd dx, r15w, cl");
    if (*reinterpret_cast<unsigned char*>(&rax22) < *reinterpret_cast<unsigned char*>(&rbx10)) {
    }
    ax28 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax22) * *reinterpret_cast<int16_t*>(&r13_20));
    *reinterpret_cast<int16_t*>(&rax22) = *reinterpret_cast<signed char*>(&ax28);
    rax29 = rax22 / reinterpret_cast<uint64_t>(0xf29c58b9a0e71d99);
    __asm__("shld r11d, eax, 0x95");
    __asm__("rol si, 1");
    *reinterpret_cast<uint16_t*>(&rax29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax29) & 0x9b0e);
    *reinterpret_cast<uint32_t*>(&r12_30) = (*reinterpret_cast<int32_t*>(&r12_5) >> -2) + 0x586a8153 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_30) + 4) = 0;
    return rax29 + rbx10 + rcx27 + rax22 % reinterpret_cast<uint64_t>(0xf29c58b9a0e71d99) + 0x90868911 + (reinterpret_cast<int64_t>(rdi21 ^ 0xee62f8fb16360000) >> -3) + 0x3fffffffffffffff + 0xb799 - 0x5f18e267 - 0xd63a7465f18e267 + r12_30 + r13_20 + r15_17 - 0x20f04e1f894437a;
}

uint64_t log_size_7_var_001(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    uint64_t rcx4;
    uint64_t rdi5;
    uint64_t r11_6;
    uint64_t r8_7;
    uint64_t rdx8;
    uint32_t eax9;
    uint64_t rbp10;
    uint64_t tmp64_11;
    uint1_t cf12;
    uint64_t r8_13;
    uint16_t di14;
    int64_t rbx15;
    int16_t r15w16;
    uint64_t rbx17;
    uint64_t rax18;
    int64_t r12_19;
    uint64_t rsi20;
    uint64_t r14_21;
    uint16_t tmp16_22;
    uint64_t rax23;
    uint64_t rdx24;
    uint32_t eax25;
    int64_t r11_26;
    int64_t r9_27;
    unsigned char r12b28;
    uint64_t rax29;
    uint16_t ax30;
    uint16_t ax31;
    uint64_t tmp64_32;
    uint64_t tmp64_33;
    uint64_t rbx34;

    rbx3 = 0xf1bc244fdfba4113;
    rcx4 = 0x70a0f3c4e0fecb2e;
    rdi5 = 0x902528db3a769171;
    __asm__("btc edi, 0xd5");
    __asm__("shrd r13W, di, 0x2");
    r11_6 = 0xf4a83abcf2a32b46;
    r8_7 = 0x3fffffffffffffff;
    rdx8 = 0x3b7f669c;
    __asm__("btr r8d, 0xaf");
    eax9 = 0 >> 46;
    __asm__("rol bh, cl");
    rbp10 = 0xffffffffe5dae8dd;
    *reinterpret_cast<signed char*>(&r8_7) = --1;
    __asm__("lahf ");
    if (__intrinsic() != __intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbx3) = 0x3a769171;
    }
    tmp64_11 = r8_7 + 0x65b2374c89417288 + 1;
    cf12 = reinterpret_cast<uint1_t>(tmp64_11 < r8_7);
    r8_13 = tmp64_11;
    *reinterpret_cast<unsigned char*>(&r11_6) = cf12;
    if (!cf12) {
        rdx8 = r11_6;
    }
    __asm__("ror si, 1");
    *reinterpret_cast<unsigned char*>(&rcx4) = 0x7e;
    di14 = reinterpret_cast<uint16_t>(0x9171 >> 0x7e);
    *reinterpret_cast<unsigned char*>(&rbx3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx3) - 91) + 1);
    *reinterpret_cast<unsigned char*>(&di14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&di14) - reinterpret_cast<unsigned char>(91 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&di14) < 0xa6)));
    __asm__("rcr bp, 1");
    *reinterpret_cast<uint16_t*>(&rbp10) = 0xd1ba;
    *reinterpret_cast<uint32_t*>(&rbx15) = *reinterpret_cast<uint32_t*>(&rbx3) - (0x1a252e46 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx3) < 0xe5dad1bb));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx15) + 4) = 0;
    __asm__("rol r8w, 1");
    r15w16 = 0x77cf;
    *reinterpret_cast<signed char*>(&eax9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax9) + 1);
    *reinterpret_cast<unsigned char*>(&r15w16) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax9) == 0);
    __asm__("rcl rbx, cl");
    rbx17 = rbx15 - 0xffffffffc34dd8ac;
    if (rbx15 >= 0xffffffffc34dd8ac) {
        *reinterpret_cast<int16_t*>(&rcx4) = *reinterpret_cast<int16_t*>(&eax9);
    }
    __asm__("xadd r14, rbx");
    __asm__("rcr r14w, 1");
    rax18 = rdx8;
    __asm__("rcr r9, cl");
    *reinterpret_cast<uint16_t*>(&r8_13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_13) >> -85);
    __asm__("shrd rbx, rsi, 0x94");
    __asm__("rol cx, cl");
    __asm__("ror r11, 0xc");
    __asm__("btr bp, r12w");
    if (0) {
        rbp10 = rcx4;
    }
    if (0) {
        rcx4 = r11_6;
    }
    *reinterpret_cast<int32_t*>(&r12_19) = *reinterpret_cast<int32_t*>(&rax18) * 0xbbdbc36f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax18) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax18) + r15w16) + __intrinsic());
    *reinterpret_cast<int32_t*>(&rsi20) = 0x70a5 >> *reinterpret_cast<unsigned char*>(&rcx4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0;
    r14_21 = rcx4 * 0xffffffffe59a5211;
    __asm__("rcl r10b, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx4) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx4) + 1) + *reinterpret_cast<signed char*>(&rdx8)) + __intrinsic());
    *reinterpret_cast<uint16_t*>(&rbx17) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx17) ^ 0x7c0f);
    *reinterpret_cast<uint16_t*>(&rdi5) = reinterpret_cast<uint16_t>(di14 - *reinterpret_cast<int16_t*>(&rcx4));
    if (*reinterpret_cast<uint16_t*>(&rbp10) == *reinterpret_cast<uint16_t*>(&rdi5)) {
        tmp16_22 = *reinterpret_cast<uint16_t*>(&rbp10);
        *reinterpret_cast<uint16_t*>(&rbp10) = *reinterpret_cast<uint16_t*>(&rdi5);
        *reinterpret_cast<uint16_t*>(&rdi5) = tmp16_22;
    }
    *reinterpret_cast<int32_t*>(&rax23) = -*reinterpret_cast<int32_t*>(&rax18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
    if (!__intrinsic()) {
        rdi5 = rax23;
    }
    *reinterpret_cast<signed char*>(&r8_13) = 0;
    *reinterpret_cast<uint16_t*>(&rdi5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi5) - 0x7272);
    __asm__("rcr bx, cl");
    *reinterpret_cast<uint32_t*>(&rdx24) = *reinterpret_cast<uint32_t*>(&rax23) % 0xe32f3160;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = 0;
    eax25 = *reinterpret_cast<uint32_t*>(&rax23) / 0xe32f3160;
    __asm__("btc r10d, r12d");
    *reinterpret_cast<unsigned char*>(&rbx17) = 0;
    __asm__("shld ebp, r9d, 0xd9");
    __asm__("shrd rbx, rcx, 0xa5");
    *reinterpret_cast<uint16_t*>(&r14_21) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_21) + 0x6369);
    *reinterpret_cast<int32_t*>(&r11_26) = static_cast<int32_t>(rsi20 + 0x1c65e62c0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_27) = 0xd1664099;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_27) + 4) = 0;
    r12b28 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_19) + 1) + 76) + 1);
    if (reinterpret_cast<signed char>(r12b28) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r14_21) = *reinterpret_cast<uint16_t*>(&rbx17);
    }
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r11_26) & *reinterpret_cast<uint16_t*>(&eax25)) < reinterpret_cast<int16_t>(0)) {
        *reinterpret_cast<int32_t*>(&r9_27) = *reinterpret_cast<int32_t*>(&rbx17);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_27) + 4) = 0;
    }
    __asm__("rcl r14b, 1");
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rbx17) = *reinterpret_cast<int32_t*>(&rsi20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx17) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&eax25) - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
    __asm__("rcr r13W, 1");
    __asm__("rcl r12d, cl");
    ax30 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax29) * *reinterpret_cast<int16_t*>(&rcx4));
    __asm__("ror r8w, 1");
    __asm__("xadd r8b, al");
    *reinterpret_cast<unsigned char*>(&ax30) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax30) | 0xc0);
    ax31 = reinterpret_cast<uint16_t>(ax30 & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx24) = reinterpret_cast<uint16_t>(ax31 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax31)));
    *reinterpret_cast<uint16_t*>(&rax29) = reinterpret_cast<uint16_t>(ax31 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax31)));
    *reinterpret_cast<unsigned char*>(&r12_19) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r12b28 + r12b28) | 7);
    __asm__("shrd r14d, r14d, 0x1");
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rbp10) = *reinterpret_cast<uint16_t*>(&rbx17);
    }
    __asm__("rcr bl, 0xc4");
    __asm__("rol r12w, 0x32");
    tmp64_32 = (rsi20 & 0xffffffff) << 32;
    tmp64_33 = (tmp64_32 & 0xffff0000ffff) << 16 | (tmp64_32 & 0xffff0000ffff0000) >> 16;
    __asm__("ror r13W, 1");
    rbx34 = rbx17 - (0x5606bc28 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx17 < 0xffffffffa9f943d9)));
    if (reinterpret_cast<int64_t>(rbx17) < reinterpret_cast<int64_t>(0xffffffffa9f943d9)) {
        rbx34 = rax29;
    }
    *reinterpret_cast<uint16_t*>(&rbp10) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp10) - reinterpret_cast<uint16_t>(0x123f - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp10) < 0xedc2)));
    __asm__("btr r10, 0xb");
    return rax29 + rbx34 + rcx4 + rdx24 + rbp10 + ((tmp64_33 & 0xff00ff00ff00ff) << 8 | (tmp64_33 & 0xff00ff00ff00ff00) >> 8) + (rdi5 >> 74) + r8_13 + r9_27 + 0x79d43e07 + r11_26 + r12_19 + (0x8b3f4698e5dae8dd ^ rdx24) + r14_21 - 0x1f77f49bd9a3c480 - 0x421a7d13ef19875b;
}

uint64_t log_size_7_var_002(int64_t rdi, int64_t rsi) {
    uint64_t rcx3;
    int64_t r12_4;
    int64_t r14_5;
    int64_t r11_6;
    uint32_t esi7;
    int64_t rsi8;
    uint64_t rdi9;
    int64_t rax10;
    int64_t rbx11;
    uint64_t rdx12;
    uint64_t rax13;

    rcx3 = 0x8da8492c704b0937;
    r12_4 = 0xf01244fd5dc40b6d;
    r14_5 = 0x42df0f549b077da6;
    __asm__("rcr rbp, 1");
    __asm__("bts bp, r15w");
    __asm__("rcl r10d, 1");
    *reinterpret_cast<int16_t*>(&rcx3) = 0xc8a5;
    *reinterpret_cast<uint32_t*>(&r11_6) = 0xb17b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_6) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r11_6) = 0;
    __asm__("shrd r12, rbp, 0x3c");
    __asm__("rcl r15w, 1");
    esi7 = reinterpret_cast<uint32_t>(-0x9b5ab17b);
    __asm__("rcr ebp, 1");
    *reinterpret_cast<uint32_t*>(&rsi8) = esi7 - (0x6b5ec641 + reinterpret_cast<uint1_t>(esi7 < 0x6b5ec641));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
    if (!__intrinsic()) {
    }
    *reinterpret_cast<signed char*>(&r14_5) = 0;
    __asm__("rol r14b, 0xd9");
    *reinterpret_cast<unsigned char*>(&rcx3) = 1;
    rdi9 = 0xffffffff2788d2a2;
    __asm__("rol r14d, 0x66");
    __asm__("btc dx, 0x15");
    __asm__("bsr r10, r14");
    __asm__("xadd r14d, r13d");
    __asm__("shrd edx, edi, 0x1");
    __asm__("rcl ch, 1");
    __asm__("rcl rdx, cl");
    __asm__("ror sil, 1");
    if (1) {
    }
    __asm__("bts r9w, 0x55");
    *reinterpret_cast<unsigned char*>(&rdi9) = reinterpret_cast<unsigned char>(0xa2 - reinterpret_cast<unsigned char>(23 - reinterpret_cast<uint1_t>(0xa2 < reinterpret_cast<unsigned char>(23 - __intrinsic()))));
    __asm__("rcl edx, 0xaf");
    __asm__("rcr r11w, 0x79");
    *reinterpret_cast<uint32_t*>(&rax10) = 0x6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        rcx3 = rdi9;
    }
    *reinterpret_cast<int16_t*>(&rax10) = 0xdb00;
    __asm__("rcl r13W, cl");
    __asm__("btc ebx, r14d");
    if (0) {
        *reinterpret_cast<uint32_t*>(&r12_4) = *reinterpret_cast<uint32_t*>(&rsi8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&r12_4) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_4) - 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) < 1))));
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r14_5) = *reinterpret_cast<int16_t*>(&rcx3);
    }
    *reinterpret_cast<int32_t*>(&rbx11) = 0xbae58e5a;
    if (0) {
        *reinterpret_cast<int16_t*>(&r14_5) = 0x8e5a;
    }
    __asm__("rcl r14d, 1");
    __asm__("rcl rdx, 1");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r11_6) = *reinterpret_cast<uint32_t*>(&rax10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_6) + 4) = 0;
    }
    __asm__("shld rdi, r9, cl");
    rdx12 = rax10 % reinterpret_cast<uint64_t>(0xc651582a26657aa8);
    rax13 = rax10 / reinterpret_cast<uint64_t>(0xc651582a26657aa8);
    __asm__("btc r10d, r15d");
    __asm__("btc r14w, 0x61");
    __asm__("bsf r14, r11");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax13) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax13) + 1) ^ *reinterpret_cast<unsigned char*>(&rax13));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx12) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx12) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx11) + 1)))) | *reinterpret_cast<unsigned char*>(&rax13));
    __asm__("rol ebp, 0xa7");
    *reinterpret_cast<int16_t*>(&rcx3) = -1;
    __asm__("xadd di, r10w");
    __asm__("rol r9d, 1");
    return rax13 + 0xbae58e5a + rcx3 + rdx12 + 0xe7b99b77 + rsi8 + rdi9 + 0x3fffffffffffffff + 0x1017c009 - 0x39aea7d5d99a8558 + -r11_6 + r12_4 + 0x85ffff1e + r14_5 * 0xffffffffa67dce3b + 0x96ae + 0xe00008fcdf080fc;
}

uint64_t log_size_7_var_003(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t r10_4;
    int64_t r11_5;
    int64_t rdx6;
    int64_t r8_7;
    int64_t rax8;
    int64_t r13_9;
    int16_t dx10;
    int64_t r11_11;
    int64_t r13_12;
    int32_t eax13;
    int32_t edx14;
    int64_t rbx15;
    int64_t rdi16;
    int32_t esi17;
    uint64_t rcx18;
    int64_t r10_19;
    int64_t rsi20;
    signed char tmp8_21;
    uint64_t rcx22;
    int64_t rbx23;
    unsigned char bl24;
    int64_t rax25;
    int64_t rdx26;
    int64_t r14_27;
    int64_t r9_28;

    rdx3 = 0x975b16b095c7e2a0;
    r10_4 = 0xae1f4052f711444c;
    r11_5 = 0x50e2b48cd32d3e81;
    __asm__("btr r13, rsi");
    __asm__("shrd rbp, rax, 0x63");
    if (0) {
        *reinterpret_cast<uint32_t*>(&r11_5) = 0x95c7e2a0;
        *reinterpret_cast<uint32_t*>(&rdx3) = 0xd32d3e81;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    }
    rdx6 = rdx3 + 0x728ed4d37e6c3d0c;
    __asm__("ror r10d, 1");
    *reinterpret_cast<uint32_t*>(&r8_7) = 0x62cea8a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0;
    __asm__("rcl ah, cl");
    __asm__("rol dx, 0xbe");
    __asm__("rol esi, cl");
    __asm__("cwd ");
    __asm__("bts r11, rdi");
    *reinterpret_cast<uint16_t*>(&r11_5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_5) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(76 % *reinterpret_cast<uint16_t*>(&r11_5));
    rax8 = 0xb3ee02c3;
    __asm__("shld rdx, r14, 0x1");
    __asm__("ror r11w, 0xfb");
    __asm__("rol cx, cl");
    r13_9 = rdx6;
    __asm__("rcl ch, 1");
    __asm__("rcr r14, cl");
    __asm__("btc si, 0xf7");
    __asm__("shld r15, rdi, 0x2c");
    __asm__("shrd r9w, r13W, 0x1");
    dx10 = 0x920a;
    __asm__("xadd r12d, r13d");
    __asm__("rol r12, 1");
    __asm__("rol ecx, 1");
    __asm__("rol di, cl");
    *reinterpret_cast<int16_t*>(&rax8) = 0xe319;
    __asm__("btr r12d, 0xc2");
    __asm__("shld rsi, rsi, 0xb2");
    if (10 < *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx10) + 1)) {
        *reinterpret_cast<int16_t*>(&r10_4) = 0x3d0c;
    }
    *reinterpret_cast<uint32_t*>(&r11_11) = *reinterpret_cast<uint32_t*>(&r11_5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax8) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx10) + 1) - 23);
    *reinterpret_cast<uint32_t*>(&r13_12) = *reinterpret_cast<uint32_t*>(&r13_9) - (0x66536d27 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_9) < 0x99ac92d9));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = 0;
    __asm__("rcl dh, 1");
    __asm__("rcr bh, 1");
    eax13 = *reinterpret_cast<int32_t*>(&rax8) * 0xc3aeffe2;
    edx14 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&rbx15) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx14) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx15) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi16) = 0x3c51001d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = 0;
    esi17 = *reinterpret_cast<signed char*>(&rbx15);
    *reinterpret_cast<int16_t*>(&esi17) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi17) + *reinterpret_cast<int16_t*>(&edx14));
    *reinterpret_cast<uint32_t*>(&rcx18) = 0xfe9a0200 - *reinterpret_cast<uint32_t*>(&rbx15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
    __asm__("bts cx, bp");
    *reinterpret_cast<int32_t*>(&r10_19) = *reinterpret_cast<int32_t*>(&r10_4) - 0x7830ed99;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_19) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi20) = -esi17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0;
    if (*reinterpret_cast<signed char*>(&rbx15) == *reinterpret_cast<signed char*>(&rcx18)) {
        tmp8_21 = *reinterpret_cast<signed char*>(&rbx15);
        *reinterpret_cast<signed char*>(&rbx15) = *reinterpret_cast<signed char*>(&rcx18);
        *reinterpret_cast<signed char*>(&rcx18) = tmp8_21;
    }
    *reinterpret_cast<signed char*>(&r10_19) = *reinterpret_cast<signed char*>(&r13_12);
    __asm__("rcr rcx, cl");
    __asm__("rcl rbp, 1");
    *reinterpret_cast<int16_t*>(&r11_11) = 0xfdb5;
    *reinterpret_cast<uint16_t*>(&rbx15) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx15) >> *reinterpret_cast<signed char*>(&rcx18));
    __asm__("btr r12d, edi");
    rcx22 = rcx18 ^ 0x2912467d;
    rbx23 = -rbx15;
    bl24 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx23) | 0xf2);
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&rbx23) = reinterpret_cast<unsigned char>(bl24 - reinterpret_cast<unsigned char>(13 + reinterpret_cast<uint1_t>(bl24 < 13)));
    *reinterpret_cast<uint16_t*>(&r8_7) = reinterpret_cast<uint16_t>(0x4100 | *reinterpret_cast<uint16_t*>(&eax13));
    *reinterpret_cast<int32_t*>(&rax25) = eax13 * eax13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx26) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx22) = 0x87;
    __asm__("ror ch, cl");
    *reinterpret_cast<int16_t*>(&rdi16) = *reinterpret_cast<signed char*>(&rbx23);
    *reinterpret_cast<int16_t*>(&rcx22) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx22) - 1);
    *reinterpret_cast<uint32_t*>(&r14_27) = *reinterpret_cast<unsigned char*>(&r8_7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
    __asm__("btr ebx, ebp");
    __asm__("rcl r9, 1");
    __asm__("bsr cx, bx");
    *reinterpret_cast<int32_t*>(&r9_28) = *reinterpret_cast<int32_t*>(&rdx26);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = 0;
    __asm__("rol r12b, cl");
    __asm__("rol ah, 1");
    return rax25 + rbx23 + rcx22 + rdx26 + 0x8479 + rsi20 + rdi16 + r8_7 + r9_28 + r10_19 + r11_11 + *reinterpret_cast<unsigned char*>(&rbx23) + r13_12 + r14_27 - 0x7e9a80f2eb9315c;
}

uint64_t log_size_7_var_004(int64_t rdi, int64_t rsi) {
    uint64_t rbx3;
    int64_t r8_4;
    int64_t r12_5;
    int64_t r15_6;
    int64_t rsi7;
    int16_t bx8;
    int64_t r14_9;
    uint64_t rbp10;
    int64_t rcx11;
    uint64_t r10_12;
    uint64_t rdi13;
    int64_t rax14;
    int64_t rdx15;
    signed char tmp8_16;
    uint64_t r12_17;
    uint64_t rbx18;
    int64_t r11_19;
    int64_t r10_20;
    int64_t rbx21;
    int64_t rax22;
    uint16_t ax23;
    int64_t r11_24;
    int64_t rdx25;
    int64_t rax26;
    uint64_t r13_27;
    int64_t r12_28;
    int64_t rsi29;

    rbx3 = 0x7ff0df562947ceab;
    r8_4 = 0xadf0872201891b6c;
    r12_5 = 0x84c7c67fe7c8fb09;
    r15_6 = 0x8385bb2c76b5a9c7;
    rsi7 = 0x1f9b;
    __asm__("ror cx, 1");
    __asm__("shrd r9w, r12w, 0x7");
    bx8 = 0x3547;
    __asm__("rcl r14b, 1");
    __asm__("rcl bh, 1");
    __asm__("shld si, r8w, 0xf");
    *reinterpret_cast<int32_t*>(&r14_9) = 0x676d892e >> 74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = 0;
    __asm__("btr r10d, 0x9c");
    __asm__("shld r10w, ax, cl");
    __asm__("xadd r12w, r9w");
    if (0) {
        *reinterpret_cast<signed char*>(&bx8) = 0x9b;
        *reinterpret_cast<signed char*>(&rsi7) = 71;
    }
    rbp10 = 0xaec71f1ba3f64ad7;
    __asm__("rcr edx, 1");
    __asm__("rcl r14b, cl");
    __asm__("btr r10w, ax");
    rcx11 = 0x29aef06bc5265f85;
    __asm__("rcl r14, 1");
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp10) = *reinterpret_cast<int32_t*>(&r14_9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = 0;
    }
    __asm__("shrd ecx, r9d, cl");
    r10_12 = *reinterpret_cast<uint16_t*>(&r14_9);
    *reinterpret_cast<int16_t*>(&rsi7) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rsi7));
    __asm__("rol rax, 0x63");
    __asm__("rol dh, 0x35");
    *reinterpret_cast<int32_t*>(&rdi13) = 0xf1fa10de;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rcx11) = 0xd6d8;
    __asm__("rol ah, 0x9e");
    __asm__("shrd rdx, rbx, cl");
    rax14 = 0x7fffffffdbc45da3 * rsi7;
    rdx15 = __intrinsic();
    __asm__("btc r13W, 0xf4");
    tmp8_16 = *reinterpret_cast<signed char*>(&rsi7);
    *reinterpret_cast<int16_t*>(&r10_12) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_12) * 0x8ad9);
    __asm__("shrd r9w, r14w, 0x9");
    *reinterpret_cast<signed char*>(&r12_5) = reinterpret_cast<signed char>(tmp8_16 << 1);
    __asm__("rcr r9w, 1");
    __asm__("rcr r8, 0x9d");
    *reinterpret_cast<signed char*>(&bx8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&bx8) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx15) + 1));
    r12_17 = reinterpret_cast<uint64_t>(-r12_5);
    *reinterpret_cast<uint16_t*>(&r14_9) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_9) * 0xb7e0);
    *reinterpret_cast<unsigned char*>(&r8_4) = __intrinsic();
    __asm__("ror r10b, 0x36");
    *reinterpret_cast<int16_t*>(&r8_4) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_4) + 1);
    *reinterpret_cast<int16_t*>(&rbx3) = reinterpret_cast<int16_t>(bx8 + 0x4ba0);
    *reinterpret_cast<int16_t*>(&rdi13) = *reinterpret_cast<int16_t*>(&r12_17);
    *reinterpret_cast<int16_t*>(&r12_17) = 0x10de;
    __asm__("rol r14d, cl");
    rbx18 = rbx3 ^ r10_12;
    *reinterpret_cast<uint16_t*>(&r15_6) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xa900 + *reinterpret_cast<int16_t*>(&rbx18)) + 1);
    __asm__("rcl rax, 1");
    *reinterpret_cast<unsigned char*>(&r15_6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_6) >> -1);
    *reinterpret_cast<int16_t*>(&rax14) = static_cast<int16_t>(r10_12 + 45);
    __asm__("bsr r12, rbx");
    r11_19 = 0x85a8e59393cb6ea3 >> 0xffffffffffffff8a;
    __asm__("bts r9w, di");
    __asm__("btr r10, rbp");
    *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(1 - *reinterpret_cast<signed char*>(&rbx18))));
    *reinterpret_cast<uint32_t*>(&r10_20) = *reinterpret_cast<int32_t*>(&r10_12) - 0x9cf7e42 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_20) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx21) = *reinterpret_cast<uint32_t*>(&rbx18) ^ 0xa4efdb37;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx21) + 4) = 0;
    __asm__("bts ebp, 0xa0");
    if (0) {
        rdi13 = r12_17;
    }
    *reinterpret_cast<unsigned char*>(&r8_4) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic()))) >> 48);
    __asm__("btc esi, ecx");
    __asm__("shrd ax, r10w, 0x1");
    rax22 = *reinterpret_cast<int32_t*>(&rax14);
    __asm__("cdq ");
    ax23 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax22) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx15) = reinterpret_cast<uint16_t>(ax23 % static_cast<int16_t>(reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rdx15) & 0xd6d8) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>((*reinterpret_cast<uint16_t*>(&rdx15) & 0xd6d8) == 0))) | *reinterpret_cast<unsigned char*>(&r15_6)) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax22) = reinterpret_cast<uint16_t>(ax23 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx15)));
    *reinterpret_cast<uint32_t*>(&r11_24) = *reinterpret_cast<uint32_t*>(&r11_19) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_9) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_9) >> 1) - *reinterpret_cast<unsigned char*>(&rcx11));
    *reinterpret_cast<uint32_t*>(&rdx25) = *reinterpret_cast<uint32_t*>(&rax22) % 0xf25ec549;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax26) = *reinterpret_cast<uint32_t*>(&rax22) / 0xf25ec549;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rax26) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax26) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax26) + 1));
    __asm__("rcl r13d, 1");
    r13_27 = reinterpret_cast<uint64_t>(0x320a8408 >> *reinterpret_cast<unsigned char*>(&rcx11));
    __asm__("bts si, 0x8b");
    *reinterpret_cast<int32_t*>(&r12_28) = *reinterpret_cast<int32_t*>(&r12_17) + *reinterpret_cast<int32_t*>(&r8_4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_28) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r13_27) = 0x90f0;
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<signed char*>(&rbx21);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
    return rax26 + rbx21 + rcx11 + rdx25 + rbp10 + rsi29 + rdi13 + r8_4 + 0xf25ec500 + r10_20 + r11_24 + r12_28 + r13_27 + r14_9 + r15_6 + 0x63e88dfee8eb2186;
}

uint64_t log_size_7_var_005(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t rdi4;
    int64_t r14_5;
    uint64_t r15_6;
    unsigned char tmp8_7;
    int64_t r13_8;
    int64_t rax9;
    int64_t rax10;
    unsigned char al11;
    int16_t bx12;
    uint64_t rcx13;
    uint64_t r13_14;
    int64_t r14_15;
    uint16_t ax16;
    int16_t ax17;
    int64_t r12_18;
    uint64_t rbp19;
    uint1_t cf20;
    uint64_t r13_21;
    uint64_t r11_22;
    uint64_t r8_23;
    uint64_t r10_24;
    uint64_t rcx25;
    uint64_t tmp64_26;
    uint64_t r8_27;
    uint64_t rcx28;
    int32_t eax29;
    uint64_t rax30;
    int64_t rdx31;
    uint64_t rax32;
    uint32_t ebx33;
    int64_t rbx34;
    uint1_t cf35;
    unsigned char tmp8_36;

    rcx3 = 0xed445c05fc3b3ce5;
    rdi4 = 0xcb2a9444f5f0a957;
    r14_5 = 0xc1bd8bcbe5a983b;
    r15_6 = 0x281f49a15450bc86;
    __asm__("bts rbx, 0x45");
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rdi4) = 0x30bf;
    }
    __asm__("bsf r11w, dx");
    *reinterpret_cast<signed char*>(&rcx3) = -14;
    tmp8_7 = reinterpret_cast<unsigned char>(0xac + __intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = tmp8_7;
    __asm__("shrd r11w, bp, 0x1");
    __asm__("bsr ecx, ecx");
    __asm__("rol r15d, 1");
    r13_8 = 0x5f12977a96566854;
    __asm__("shld r12, rdx, 0xee");
    __asm__("ror edi, 1");
    if (__intrinsic()) {
        r14_5 = 0x6cf5eb4;
    }
    __asm__("btc r13d, 0x62");
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(28 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx3) + 1)) + (tmp8_7 < 0xed));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax9) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax9) + 1) - reinterpret_cast<unsigned char>(77 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax9) + 1) < reinterpret_cast<unsigned char>(77 - reinterpret_cast<uint1_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x30bf + *reinterpret_cast<int16_t*>(&rcx3)))) < 0x30bf)))));
    rax10 = rax9 * 0x2f2d6e589b414e85;
    __asm__("shld rax, r12, cl");
    al11 = __intrinsic();
    bx12 = reinterpret_cast<signed char>(al11);
    *reinterpret_cast<uint16_t*>(&r13_8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi4) * 0x263c);
    *reinterpret_cast<unsigned char*>(&rax10) = reinterpret_cast<unsigned char>(al11 & *reinterpret_cast<unsigned char*>(&r14_5));
    *reinterpret_cast<uint32_t*>(&rcx13) = 0x3bfc | *reinterpret_cast<uint32_t*>(&rcx3) << 8 & 0xff0000 | 0xf2000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r15_6) = reinterpret_cast<unsigned char>(0x86 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_8) + reinterpret_cast<uint1_t>(0x86 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r13_8))))));
    __asm__("rcl ebx, cl");
    *reinterpret_cast<int32_t*>(&r13_14) = *reinterpret_cast<int32_t*>(&r13_8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = 0;
    __asm__("ror edx, cl");
    *reinterpret_cast<uint32_t*>(&r14_15) = *reinterpret_cast<uint32_t*>(&r14_5) ^ 0xb085a9ca;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = 0;
    __asm__("bts rax, 0x1f");
    __asm__("rcl r13d, cl");
    __asm__("btr r9w, 0x8f");
    ax16 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax10) & 0x3fff) / static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx12) + 1) | 0xc0))) - 0x4e85);
    ax17 = *reinterpret_cast<signed char*>(&ax16);
    *reinterpret_cast<int32_t*>(&r12_18) = *reinterpret_cast<int32_t*>(&r15_6) + 0x38d4f230;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_18) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&ax17) = 1;
    rbp19 = 0x6cf5eb4;
    cf20 = reinterpret_cast<uint1_t>(r13_14 < 0xffffffff986008fb);
    r13_21 = r13_14 - (0x679ff706 - static_cast<uint64_t>(cf20));
    r11_22 = 0x6cf5eb4 + rcx13 + cf20;
    __asm__("rcl bx, cl");
    if (1 == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx13) + 1)) {
        *reinterpret_cast<unsigned char*>(&ax17) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx13) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx13) + 1) = 1;
    }
    r8_23 = 0x6c5a0afc + rcx13;
    *reinterpret_cast<uint16_t*>(&rax10) = reinterpret_cast<uint16_t>(ax17 * *reinterpret_cast<uint16_t*>(&r11_22));
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx13) = *reinterpret_cast<uint16_t*>(&r13_21);
    }
    *reinterpret_cast<uint16_t*>(&r8_23) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_23) + __intrinsic()) + 1);
    r10_24 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r11_22)));
    *reinterpret_cast<uint16_t*>(&r12_18) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_18) | 0x4ef2);
    if (1) {
        *reinterpret_cast<int32_t*>(&rax10) = *reinterpret_cast<int32_t*>(&r13_21);
    }
    *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx13) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rax10) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax10) & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx13)));
    rcx25 = -rcx13;
    *reinterpret_cast<uint16_t*>(&r14_15) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_22) * 0x5406);
    tmp64_26 = r8_23 + r15_6 + 1;
    r8_27 = tmp64_26;
    rcx28 = rcx25 - (0x5acb8caf - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx25 < 0x5acb8caf - static_cast<uint64_t>(reinterpret_cast<uint1_t>(tmp64_26 < r8_23)))));
    __asm__("rcl r14w, 1");
    eax29 = *reinterpret_cast<int32_t*>(&rax10) * 0x738;
    *reinterpret_cast<int32_t*>(&rax30) = eax29 * eax29;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx31) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx28) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx28) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx31) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx28) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx31) + __intrinsic()))));
    rax32 = rax30 - (r15_6 + reinterpret_cast<uint1_t>(rax30 < r15_6));
    *reinterpret_cast<int16_t*>(&rbp19) = 0x7dd5;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rbp19) = *reinterpret_cast<int32_t*>(&r10_24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = 0;
    }
    __asm__("shld r9, r14, 0x1");
    __asm__("rcr si, 0xa4");
    ebx33 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax32)));
    *reinterpret_cast<uint16_t*>(&rdx31) = *reinterpret_cast<unsigned char*>(&rdx31);
    *reinterpret_cast<signed char*>(&rdi4) = reinterpret_cast<signed char>(-*reinterpret_cast<signed char*>(&rdi4) >> 1);
    *reinterpret_cast<signed char*>(&r10_24) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_24) >> *reinterpret_cast<signed char*>(&rcx28));
    *reinterpret_cast<unsigned char*>(&rdx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx31) << 1);
    __asm__("rcl bx, cl");
    *reinterpret_cast<uint16_t*>(&r13_21) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_21) >> *reinterpret_cast<signed char*>(&rcx28));
    __asm__("xadd dh, ch");
    *reinterpret_cast<int16_t*>(&ebx33) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx33) + 0xb58);
    __asm__("rcr r11d, 1");
    __asm__("rcr r9w, 1");
    *reinterpret_cast<uint32_t*>(&rbx34) = ebx33 & *reinterpret_cast<uint32_t*>(&rdx31);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx34) + 4) = 0;
    __asm__("ror bx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx34) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx34) + 1));
    *reinterpret_cast<signed char*>(&r8_27) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_27) + 50);
    cf35 = reinterpret_cast<uint1_t>(0xffffffff8533e0de < rbp19);
    *reinterpret_cast<unsigned char*>(&r15_6) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(0xffffffff8533e0de) < reinterpret_cast<int64_t>(rbp19));
    if (!cf35) {
        r15_6 = rbp19;
    }
    tmp8_36 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx31) + 94) + cf35);
    *reinterpret_cast<unsigned char*>(&rdx31) = *reinterpret_cast<unsigned char*>(&rax32);
    *reinterpret_cast<unsigned char*>(&rax32) = tmp8_36;
    *reinterpret_cast<uint16_t*>(&rbx34) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx34) ^ 0xe331);
    return rax32 + rbx34 + rcx28 + rdx31 + rbp19 + 0x5eb4 + rdi4 + r8_27 + (0xffffffff8533e0de - (rbp19 + cf35)) + r10_24 + r11_22 + r12_18 + r13_21 + r14_15 + r15_6 - 0x4e50a8ed9;
}

uint64_t log_size_7_var_006(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rcx4;
    int64_t rdx5;
    int64_t rbp6;
    int64_t r8_7;
    int64_t r9_8;
    uint64_t r10_9;
    int64_t r13_10;
    int64_t r14_11;
    uint64_t r15_12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t rsi15;
    int64_t rcx16;
    uint16_t ax17;
    uint32_t r12d18;
    int64_t r9_19;
    uint32_t edx20;
    int64_t r12_21;
    uint16_t r8w22;
    int64_t rsi23;
    int64_t rbx24;
    int64_t rcx25;
    int64_t rdx26;
    uint16_t ax27;
    int64_t r8_28;
    uint32_t tmp32_29;
    int64_t rdi30;
    uint64_t r12_31;
    signed char tmp8_32;
    int64_t r13_33;
    int64_t r15_34;
    uint32_t r9d35;
    int64_t r9_36;

    rax3 = 0x9566171b2c8caf04;
    rcx4 = 0xa4d0d637ab844093;
    rdx5 = 0x21b789c70969bb5b;
    rbp6 = 0x14842f44a709c4a;
    r8_7 = 0x14a8e4db31de808;
    r9_8 = 0xf08496d70a35dafa;
    r10_9 = 0x2c8ef810ead8a16a;
    r13_10 = 0xd0179c4d5afe1008;
    r14_11 = 0x5817c06b4a88ca31;
    __asm__("rol r11, 1");
    r15_12 = 0xa07bd92ce9079b05 >> -40;
    __asm__("shrd r15w, r12w, 0x0");
    __asm__("shld rbx, r11, 0x1");
    *reinterpret_cast<int16_t*>(&rdx5) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r15_13) = *reinterpret_cast<int32_t*>(&r15_12) + 0x2c8c3270 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = 0;
    if (0) {
        rbp6 = 0x5817c06b4a88ca31;
        r14_11 = 0x14842f44a709c4a;
    }
    *reinterpret_cast<signed char*>(&rdx5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx5) - 0x80);
    if (1) {
        r10_9 = 0xc3fe67696f28cea8;
    }
    if (__intrinsic()) {
    }
    r15_14 = r15_13 + 0x54c786df9447239c;
    *reinterpret_cast<uint32_t*>(&rsi15) = 0x6bb8dc64 - *reinterpret_cast<uint32_t*>(&rdx5);
    *reinterpret_cast<signed char*>(&r15_14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_14) + 0x79);
    *reinterpret_cast<unsigned char*>(&rsi15) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        *reinterpret_cast<signed char*>(&rcx4) = -11;
    }
    rcx16 = rcx4 + 1;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r15_14) = 0xc359;
    }
    __asm__("rcl edx, 0x28");
    ax17 = reinterpret_cast<uint16_t>(0x32fa * *reinterpret_cast<uint16_t*>(&rsi15));
    *reinterpret_cast<int16_t*>(&rdx5) = __intrinsic();
    r12d18 = 0x6f28cea8 & *reinterpret_cast<uint32_t*>(&r15_14);
    if (!__intrinsic()) {
        r9_8 = 0xe945b1894f0b8907;
    }
    __asm__("ror rdi, cl");
    *reinterpret_cast<int16_t*>(&r9_8) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_8) * 0x6562);
    *reinterpret_cast<uint32_t*>(&r9_19) = *reinterpret_cast<uint32_t*>(&r9_8) >> 0x71;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = 0;
    *reinterpret_cast<signed char*>(&r10_9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_9) + *reinterpret_cast<signed char*>(&r15_14));
    edx20 = *reinterpret_cast<uint32_t*>(&rdx5) - (0xc5aa162 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx5) < 0xf3a55e9f));
    __asm__("rcr rcx, 1");
    __asm__("xadd r15w, dx");
    __asm__("cwd ");
    __asm__("xadd r10w, r8w");
    if (0) {
        *reinterpret_cast<uint32_t*>(&rcx16) = edx20;
    }
    *reinterpret_cast<uint32_t*>(&r12_21) = r12d18 - (0x4c83eb00 + reinterpret_cast<uint1_t>(r12d18 < 0x4c83eb01)) + 0xb31d0000 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_21) + 4) = 0;
    r8w22 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r14_11)));
    __asm__("shrd ebp, r9d, cl");
    __asm__("ror r12w, 0xa6");
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax17) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&ax17) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_21) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_21) == 0))) | *reinterpret_cast<unsigned char*>(&rcx16));
    *reinterpret_cast<uint16_t*>(&r14_11) = 0;
    *reinterpret_cast<uint16_t*>(&r8_7) = reinterpret_cast<uint16_t>(r8w22 | 0xc000);
    *reinterpret_cast<uint16_t*>(&edx20) = reinterpret_cast<uint16_t>(ax17 % *reinterpret_cast<uint16_t*>(&r8_7));
    __asm__("shld r15w, r14w, 0xc");
    __asm__("shrd r9d, r11d, 0xc4");
    *reinterpret_cast<int32_t*>(&rbx24) = --7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx24) + 4) = 0;
    __asm__("shrd r13d, r11d, 0x1");
    *reinterpret_cast<int16_t*>(&r13_10) = reinterpret_cast<int16_t>(0x8239 >> *reinterpret_cast<unsigned char*>(&rcx16));
    __asm__("rcr r11d, 1");
    *reinterpret_cast<int32_t*>(&rcx25) = static_cast<int32_t>(r13_10 + r9_19 * 8 + 0x539d055d);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx26) = edx20 + 0x535a96cb;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
    __asm__("rcl ebp, 0x67");
    __asm__("cwd ");
    ax27 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax17 / *reinterpret_cast<uint16_t*>(&r8_7)) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx26) = reinterpret_cast<uint16_t>(ax27 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&rdx26) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax3) = reinterpret_cast<uint16_t>(ax27 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx26)));
    if (*reinterpret_cast<uint32_t*>(&rbp6) > 0x27fdec15) {
        r13_10 = rdx26;
    }
    *reinterpret_cast<uint16_t*>(&r15_14) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_14) + *reinterpret_cast<int16_t*>(&r12_21)) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp6) < 0x27fdec15));
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_19) = *reinterpret_cast<uint32_t*>(&rbp6);
    }
    if (*reinterpret_cast<uint16_t*>(&r15_14)) {
        *reinterpret_cast<uint16_t*>(&r15_14) = *reinterpret_cast<uint16_t*>(&rcx25);
    }
    __asm__("cdq ");
    *reinterpret_cast<signed char*>(&rax3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax3) >> *reinterpret_cast<unsigned char*>(&rcx25));
    *reinterpret_cast<signed char*>(&rbx24) = reinterpret_cast<signed char>(0 << *reinterpret_cast<unsigned char*>(&rcx25));
    *reinterpret_cast<uint32_t*>(&r8_28) = *reinterpret_cast<uint32_t*>(&r8_7) | *reinterpret_cast<uint32_t*>(&rax3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = 0;
    __asm__("ror ebx, cl");
    __asm__("rcl bl, cl");
    if (0) {
        tmp32_29 = *reinterpret_cast<uint32_t*>(&r10_9);
        *reinterpret_cast<uint32_t*>(&r10_9) = *reinterpret_cast<uint32_t*>(&r9_19);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_9) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9_19) = tmp32_29;
    }
    rdi30 = r12_21;
    r12_31 = reinterpret_cast<uint64_t>(r12_21 - 0x75544e16);
    if (*reinterpret_cast<signed char*>(&r12_31) == *reinterpret_cast<signed char*>(&rdi30)) {
        tmp8_32 = *reinterpret_cast<signed char*>(&r12_31);
        *reinterpret_cast<signed char*>(&r12_31) = *reinterpret_cast<signed char*>(&rdi30);
        *reinterpret_cast<signed char*>(&rdi30) = tmp8_32;
    }
    *reinterpret_cast<uint32_t*>(&r13_33) = *reinterpret_cast<int32_t*>(&r13_10) - 0x5ddeeae + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = 0;
    r15_34 = r15_14 << *reinterpret_cast<unsigned char*>(&rcx25);
    r9d35 = *reinterpret_cast<uint32_t*>(&r9_19) >> *reinterpret_cast<unsigned char*>(&rcx25);
    __asm__("shld r8w, r10w, 0x1");
    *reinterpret_cast<unsigned char*>(&rcx25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx25) & 15);
    __asm__("shld si, r8w, cl");
    if (1) {
        *reinterpret_cast<int16_t*>(&rdi30) = 0;
    }
    __asm__("btc rax, 0xf3");
    *reinterpret_cast<uint32_t*>(&r9_36) = r9d35 >> *reinterpret_cast<unsigned char*>(&rcx25);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_36) + 4) = 0;
    __asm__("shrd r14w, ax, 0x2");
    *reinterpret_cast<int16_t*>(&r10_9) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&r13_33) + *reinterpret_cast<int32_t*>(&rdi30) * 2 - 0x53f35039);
    __asm__("rcl rbp, 0x85");
    __asm__("shld esi, r15d, 0xe0");
    __asm__("rol sil, 1");
    return rax3 * r13_33 + rbx24 + rcx25 + __intrinsic() + rbp6 + rsi23 + rdi30 + r8_28 + r9_36 + (r10_9 >> 0xffffffffffffff94) - 0x16ba4e76f1f70000 + r12_31 + r13_33 + r14_11 + r15_34 - 0x7cf42993da43b506;
}

uint64_t log_size_7_var_007(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    uint64_t rdx4;
    uint64_t rdi5;
    uint64_t r9_6;
    int64_t r13_7;
    uint64_t r11_8;
    int64_t rbx9;
    uint64_t r8_10;
    uint64_t r10_11;
    uint64_t rax12;
    int1_t cf13;
    uint64_t r15_14;
    int64_t r15_15;
    uint64_t rsi16;
    unsigned char tmp8_17;
    int64_t rax18;
    uint64_t rax19;
    int32_t edx20;
    int64_t r10_21;
    uint32_t ecx22;
    uint64_t rax23;
    int64_t rcx24;
    uint64_t rbx25;
    int1_t cf26;
    uint1_t cf27;
    int64_t rdx28;

    rax3 = 0xdd8ef55cd6e3e3d1;
    rdx4 = 0xa36ac5e0b2a59a21;
    rdi5 = 0xece25e889d8a3b72;
    r9_6 = 0xa0cef136d121b358;
    r13_7 = 0x4a06b06d7deefcab;
    __asm__("rcl r9b, 1");
    __asm__("shrd r14w, cx, 0x1");
    r11_8 = 0x1131d4ad55f49ba0;
    __asm__("ror r10d, cl");
    __asm__("ror r15d, cl");
    if (0) {
        r9_6 = 0x1131d4ad55f49ba0;
        r11_8 = 0xa0cef136d121b358;
    }
    if (1) {
        *reinterpret_cast<int16_t*>(&r9_6) = 0xfcab;
    }
    *reinterpret_cast<uint16_t*>(&rbx9) = reinterpret_cast<uint16_t>(0x7139 >> -85);
    __asm__("shrd r8, rsi, 0x1");
    __asm__("shld ax, cx, cl");
    __asm__("xadd dx, bx");
    __asm__("shld di, r8w, 0x1");
    __asm__("ror r11, 1");
    __asm__("rol r14, cl");
    r8_10 = 0xab30e9f5ab3969ad;
    __asm__("shrd r9, rsi, cl");
    __asm__("shld r15, r9, 0x1");
    *reinterpret_cast<uint16_t*>(&rax3) = 0x17f1;
    *reinterpret_cast<uint16_t*>(&rdx4) = __intrinsic();
    __asm__("ror r14w, 0xe6");
    r10_11 = 0xc7227f3105e60008 | rdx4;
    *reinterpret_cast<signed char*>(&rax3) = *reinterpret_cast<signed char*>(&rbx9);
    __asm__("shrd rcx, r12, cl");
    rax12 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax3))) | 0xffffffff8e4d0d5d;
    __asm__("rcr cx, 1");
    __asm__("shld r12w, cx, 0xc");
    __asm__("ror rcx, cl");
    __asm__("ror dil, 1");
    __asm__("bts di, 0x21");
    cf13 = *reinterpret_cast<uint16_t*>(&rdx4) < *reinterpret_cast<uint16_t*>(&rdx4);
    __asm__("btr r8w, cx");
    if (!reinterpret_cast<int1_t>(!cf13)) {
    }
    if (1) {
    }
    if (__intrinsic() == __intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&r10_11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_11) - *reinterpret_cast<uint16_t*>(&r11_8));
    *reinterpret_cast<unsigned char*>(&r13_7) = reinterpret_cast<unsigned char>(0xab - *reinterpret_cast<unsigned char*>(&rax12));
    if (0xab < *reinterpret_cast<unsigned char*>(&rax12)) {
    }
    __asm__("ror r10b, 0x61");
    __asm__("shld r15, rdx, cl");
    r15_14 = 0x94150429a1440ca4 | r9_6;
    __asm__("btr r14, 0xcb");
    *reinterpret_cast<uint32_t*>(&r15_15) = *reinterpret_cast<uint32_t*>(&r15_14) - (*reinterpret_cast<uint32_t*>(&r10_11) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_14) < *reinterpret_cast<uint32_t*>(&r10_11)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = 0;
    __asm__("ror edx, cl");
    rsi16 = reinterpret_cast<uint64_t>(-0x4912aca8fef647c9);
    tmp8_17 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(0xb0 + *reinterpret_cast<signed char*>(&r9_6))));
    *reinterpret_cast<unsigned char*>(&rdi5) = tmp8_17;
    *reinterpret_cast<uint16_t*>(&r8_10) = reinterpret_cast<uint16_t>(0x34d6 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdi5) + reinterpret_cast<uint1_t>(0x34d6 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdi5) + reinterpret_cast<uint1_t>(tmp8_17 < 0xb0)))));
    if (1) {
    }
    if (__intrinsic() != __intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&r8_10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_10) & 0xbc);
    rax18 = reinterpret_cast<int64_t>(rax12) >> 0x65;
    __asm__("btr eax, r12d");
    __asm__("rol bp, 1");
    *reinterpret_cast<int16_t*>(&rax18) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax18) * *reinterpret_cast<int16_t*>(&r9_6));
    __asm__("btr r8d, 0x91");
    __asm__("shrd r14, r12, 0x1");
    __asm__("bsr r10w, si");
    *reinterpret_cast<uint16_t*>(&r10_11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_11) - 0xd8f);
    __asm__("btr r9d, 0xc4");
    *reinterpret_cast<uint32_t*>(&rax19) = *reinterpret_cast<int32_t*>(&rax18) * *reinterpret_cast<uint32_t*>(&r10_11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
    edx20 = __intrinsic();
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r10_11) = *reinterpret_cast<uint16_t*>(&r8_10);
    }
    *reinterpret_cast<uint32_t*>(&r10_21) = *reinterpret_cast<uint32_t*>(&r10_11) + *reinterpret_cast<int32_t*>(&rsi16) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_21) + 4) = 0;
    __asm__("shld r10d, ebp, 0xbd");
    __asm__("btc ebp, r8d");
    ecx22 = *reinterpret_cast<unsigned char*>(&edx20);
    rax23 = rax19 - (r8_10 + reinterpret_cast<uint1_t>(rax19 < r8_10));
    *reinterpret_cast<uint16_t*>(&r8_10) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_10) + *reinterpret_cast<int16_t*>(&edx20)) + 1);
    *reinterpret_cast<uint32_t*>(&rcx24) = ecx22 - (0x65e1a1bf + reinterpret_cast<uint1_t>(ecx22 < 0x65e1a1bf + static_cast<uint1_t>(rdi5 >> 0xffffffffffffff8d)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r10_21) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_21) + 1);
    __asm__("shld r11, r9, 0x1");
    rbx25 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi5) + *reinterpret_cast<int32_t*>(&rsi16) + 0xb5);
    __asm__("shrd r9d, ebx, cl");
    cf26 = *reinterpret_cast<uint16_t*>(&rbx25) < 0xf09f;
    *reinterpret_cast<uint16_t*>(&rbx25) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx25) + 0xf61);
    *reinterpret_cast<int16_t*>(&r15_15) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r15_15));
    if (cf26) {
        *reinterpret_cast<int32_t*>(&rbx25) = edx20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx25) + 4) = 0;
    }
    __asm__("btc di, r14w");
    cf27 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx24) < 34);
    *reinterpret_cast<unsigned char*>(&rcx24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx24) - reinterpret_cast<unsigned char>(34 + cf27));
    __asm__("rol ecx, 0x87");
    __asm__("xadd r9b, r12b");
    if (*reinterpret_cast<signed char*>(&rcx24) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf27))) {
        *reinterpret_cast<int16_t*>(&r10_21) = *reinterpret_cast<int16_t*>(&r10_21);
    }
    *reinterpret_cast<uint32_t*>(&rdx28) = *reinterpret_cast<uint16_t*>(&r11_8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax23) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax23) * *reinterpret_cast<uint16_t*>(&r8_10));
    *reinterpret_cast<int16_t*>(&rdx28) = __intrinsic();
    __asm__("shld r9w, di, 0xa");
    return rax23 + rbx25 + rcx24 + rdx28 + 0x6c4035ad5f0bf72e + rsi16 + rdi5 + r8_10 + r9_6 + r10_21 + r11_8 + 0x1226daad5ac8b2bc + r13_7 + r15_15 - 0x5a41be5174259b33;
}

uint64_t log_size_7_var_008(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t r10_4;
    int64_t r11_5;
    int64_t rbp6;
    int32_t ebx7;
    int64_t rax8;
    int64_t rdx9;
    uint64_t rcx10;
    uint1_t cf11;
    int64_t rax12;
    int64_t rdx13;
    unsigned char tmp8_14;
    uint64_t tmp64_15;
    uint64_t tmp64_16;
    uint64_t rcx17;
    int64_t rdx18;
    uint64_t r12_19;
    uint16_t ax20;
    int64_t rbx21;
    int64_t r12_22;
    int64_t r8_23;
    uint64_t rdi24;
    uint64_t r11_25;
    uint64_t r11_26;
    uint64_t r13_27;
    uint16_t ax28;
    int64_t rbp29;
    int64_t rax30;
    unsigned char al31;
    int64_t rsi32;
    uint64_t rdi33;
    int64_t r15_34;

    rcx3 = 0x73ac7526112c2d92;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = -0x73;
    *reinterpret_cast<int32_t*>(&r10_4) = *reinterpret_cast<int32_t*>(&rcx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_4) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_5) = 0x74a270da >> 0x92;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_5) + 4) = 0;
    rbp6 = 0xce667f1c771d4417;
    __asm__("rol rbp, 0x79");
    ebx7 = *reinterpret_cast<int16_t*>(&r10_4);
    __asm__("rol r13W, cl");
    *reinterpret_cast<signed char*>(&r10_4) = 64;
    *reinterpret_cast<unsigned char*>(&r11_5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_5) - reinterpret_cast<unsigned char>(0x73 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_5) < 0x8d)));
    __asm__("shld ebp, edx, 0x1");
    if (__intrinsic()) {
    }
    __asm__("btr r14w, 0x61");
    rax8 = 0x8f513dfadfb4e97;
    if (__intrinsic() == 0x8f513dfadfb4e97) {
        rax8 = __intrinsic();
    }
    rdx9 = r11_5 * 0xffffffffa5e1bb8f;
    rcx10 = reinterpret_cast<uint64_t>(r10_4 + 0x7333f8e3b8ea20b8 + 0xd3);
    __asm__("bts r9, rcx");
    __asm__("bts ax, r13W");
    cf11 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx9) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx7) + 1))));
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx9) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx7) + 1) + cf11) != static_cast<uint32_t>(cf11)) {
        *reinterpret_cast<int16_t*>(&r10_4) = *reinterpret_cast<int16_t*>(&r10_4);
    }
    *reinterpret_cast<uint32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rax8) * *reinterpret_cast<uint32_t*>(&r11_5);
    *reinterpret_cast<int32_t*>(&rdx13) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(&rcx10) == 23) {
        tmp8_14 = *reinterpret_cast<unsigned char*>(&rcx10);
        *reinterpret_cast<unsigned char*>(&rcx10) = 23;
        *reinterpret_cast<unsigned char*>(&rbp6) = tmp8_14;
    }
    __asm__("shrd dx, bp, 0x7");
    *reinterpret_cast<unsigned char*>(&rcx10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx10) & 15);
    __asm__("shld dx, r13W, cl");
    __asm__("bts bx, 0xb4");
    tmp64_15 = (rcx10 & 0xffffffff) << 32 | (rcx10 & 0xffffffff00000000) >> 32;
    tmp64_16 = (tmp64_15 & 0xffff0000ffff) << 16 | (tmp64_15 & 0xffff0000ffff0000) >> 16;
    rcx17 = (tmp64_16 & 0xff00ff00ff00ff) << 8 | (tmp64_16 & 0xff00ff00ff00ff00) >> 8;
    rdx18 = rdx13 << 1;
    r12_19 = 0x9a62c53 >> -34;
    *reinterpret_cast<uint16_t*>(&rdx18) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r11_5)));
    ax20 = reinterpret_cast<uint16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&rax12) << *reinterpret_cast<unsigned char*>(&rcx10)) * 20);
    *reinterpret_cast<uint32_t*>(&rbx21) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax20) + 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx21) + 4) = 0;
    __asm__("ror r15w, cl");
    __asm__("rol r15, 0x93");
    __asm__("ror al, 1");
    __asm__("rcl ebp, 0x59");
    __asm__("bsr rsi, r13");
    *reinterpret_cast<int16_t*>(&rcx17) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rcx17));
    __asm__("rol r8b, cl");
    __asm__("bsf r10w, r14w");
    *reinterpret_cast<signed char*>(&r12_19) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12_19) >> -64);
    __asm__("btr ax, 0x15");
    __asm__("rcl r14d, 1");
    __asm__("rcr eax, 1");
    __asm__("shld r14d, eax, cl");
    *reinterpret_cast<uint16_t*>(&rax12) = reinterpret_cast<uint16_t>(ax20 ^ *reinterpret_cast<uint16_t*>(&rbp6));
    __asm__("rcl r8b, 1");
    *reinterpret_cast<int32_t*>(&r12_22) = *reinterpret_cast<int32_t*>(&r12_19) * 0x57fbf719;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
    __asm__("shld r14d, r10d, 0xdb");
    __asm__("ror rdi, 0x39");
    if (1) {
        *reinterpret_cast<uint16_t*>(&r12_22) = *reinterpret_cast<uint16_t*>(&rdx18);
    }
    if (1) {
    }
    r8_23 = r11_5 + r10_4 * 8 + 0x6f;
    __asm__("ror r12b, 1");
    *reinterpret_cast<uint32_t*>(&rdi24) = *reinterpret_cast<uint32_t*>(&r11_5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_25) = -0x81 + 0x771d4417;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_25) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdi24) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi24) ^ 0x3aaf);
    *reinterpret_cast<unsigned char*>(&r11_25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_25) | *reinterpret_cast<unsigned char*>(&rdx18));
    if (*reinterpret_cast<uint32_t*>(&rax12) >= 0x72d3583f) {
        *reinterpret_cast<uint32_t*>(&rdx18) = 0x72d3583f;
    }
    __asm__("shld ecx, r12d, 0x1");
    __asm__("btc r10w, 0x33");
    if (*reinterpret_cast<uint32_t*>(&rax12) > 0x72d3583f) {
    }
    r11_26 = r11_25 - (0xe5a5ef9 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r11_25 < 0xfffffffff1a5a108)));
    *reinterpret_cast<int32_t*>(&r13_27) = 0x396c9914 << *reinterpret_cast<unsigned char*>(&rcx17);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = 0;
    __asm__("ror r9w, 0x38");
    __asm__("shld r9d, edi, 0xb4");
    *reinterpret_cast<unsigned char*>(&rax12) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax12) + 0xe1) | 0xc0);
    ax28 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax12) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx18) = reinterpret_cast<uint16_t>(ax28 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax28)));
    *reinterpret_cast<uint16_t*>(&rbp6) = *reinterpret_cast<unsigned char*>(&rcx17);
    __asm__("ror rcx, 1");
    *reinterpret_cast<unsigned char*>(&rbp6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp6) ^ *reinterpret_cast<unsigned char*>(&r8_23));
    if (!__intrinsic()) {
    }
    if (__intrinsic()) {
        r13_27 = r11_26;
    }
    *reinterpret_cast<uint32_t*>(&rbp29) = *reinterpret_cast<uint32_t*>(&rbp6) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp29) + 4) = 0;
    if (reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&r8_23) & 0x9f) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<uint32_t*>(&rbx21) = *reinterpret_cast<uint32_t*>(&rbp29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx21) + 4) = 0;
    }
    rax30 = 0xfa03da0963338c13;
    *reinterpret_cast<int16_t*>(&rbx21) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx21) >> -77);
    __asm__("bsr esi, r8d");
    al31 = *reinterpret_cast<unsigned char*>(&rdx18);
    *reinterpret_cast<unsigned char*>(&rdx18) = 19;
    *reinterpret_cast<uint32_t*>(&rsi32) = *reinterpret_cast<unsigned char*>(&rcx17);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi24) >> 1);
    rdi33 = rdi24 | r13_27;
    *reinterpret_cast<int16_t*>(&r10_4) = *reinterpret_cast<signed char*>(&r12_22);
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rdi33) = *reinterpret_cast<int16_t*>(&rsi32);
    }
    if (reinterpret_cast<signed char>(19 & *reinterpret_cast<unsigned char*>(&r12_22)) >= reinterpret_cast<signed char>(0)) {
        rdx18 = rsi32;
    }
    *reinterpret_cast<uint32_t*>(&r15_34) = *reinterpret_cast<uint32_t*>(&rdx18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_34) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax30) = reinterpret_cast<uint16_t>(static_cast<uint16_t>(al31) ^ 0x61ff);
    __asm__("rcl bh, 1");
    return rax30 + rbx21 + rcx17 + 0x72d3583f + rbp29 + rsi32 + rdi33 + r8_23 + r10_4 + r11_26 + r12_22 + r13_27 + 0xe5817aa177c959f + r15_34 + 0x2fb31da4cb8e63ed;
}

uint64_t log_size_7_var_009(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rbx4;
    unsigned char ch5;
    int64_t r13_6;
    int64_t rcx7;
    uint64_t r12_8;
    uint64_t rax9;
    int64_t rbx10;
    uint32_t tmp32_11;
    int64_t r13_12;
    int64_t rdx13;
    int64_t rsi14;
    int64_t r10_15;
    int64_t r9_16;
    uint64_t rdi17;
    uint64_t rdx18;
    int1_t sf19;
    uint64_t r13_20;
    int64_t rdx21;
    uint64_t rax22;
    int64_t rdx23;

    rbx3 = 0xf04974320d871fb4;
    __asm__("btr r13, r14");
    if (1) {
        rbx3 = 0x55df6b67f7b9e0c2;
    }
    rbx4 = rbx3 << 28;
    __asm__("shrd si, bx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx4) + 1) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx4) + 1)));
    __asm__("cwd ");
    ch5 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(99) >> 12);
    __asm__("rol r11b, cl");
    __asm__("shrd r15d, ebx, cl");
    __asm__("bts r13d, 0xb7");
    __asm__("ror edi, 1");
    if (__intrinsic()) {
    }
    if (reinterpret_cast<unsigned char>(ch5 - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(ch5 < 1)))) < 12) {
    }
    *reinterpret_cast<uint32_t*>(&r13_6) = 78;
    __asm__("ror r11w, 1");
    *reinterpret_cast<int32_t*>(&rcx7) = 0;
    if (0) {
    }
    __asm__("rcl ebx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx4) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx4) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx7) + 1));
    __asm__("rcr ax, cl");
    __asm__("btc si, 0xb1");
    __asm__("ror rcx, 1");
    __asm__("shld bx, bp, cl");
    __asm__("ror r15, 1");
    __asm__("rol bx, cl");
    __asm__("rol r15d, 1");
    __asm__("shld r14, rsi, cl");
    __asm__("ror bl, 1");
    __asm__("ror r13, cl");
    r12_8 = 0xd068995227cfa635;
    *reinterpret_cast<uint32_t*>(&rax9) = 0xaf12c8bf;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx10) = *reinterpret_cast<uint32_t*>(&rbx4) | 0xb3cded8a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx10) + 4) = 0;
    __asm__("xadd esi, r15d");
    if (!__intrinsic()) {
        r13_6 = 0;
    }
    __asm__("shrd r11d, r15d, 0xe5");
    __asm__("shld r9d, r15d, cl");
    __asm__("cwd ");
    tmp32_11 = *reinterpret_cast<uint32_t*>(&r13_6) + 0x351c7aa5 + 1;
    *reinterpret_cast<uint32_t*>(&r13_12) = tmp32_11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx13) = __intrinsic() - (0x77016473 - reinterpret_cast<uint1_t>(__intrinsic() < 0x77016473 - reinterpret_cast<uint1_t>(tmp32_11 < *reinterpret_cast<uint32_t*>(&r13_6))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
    __asm__("shld r10d, r9d, cl");
    *reinterpret_cast<int32_t*>(&rsi14) = 0x77016472;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = 0;
    __asm__("cdq ");
    *reinterpret_cast<int16_t*>(&rax9) = 0x801c;
    *reinterpret_cast<int16_t*>(&rdx13) = __intrinsic();
    r10_15 = rbx10 + 0xa06c5328 + 85;
    *reinterpret_cast<uint32_t*>(&r9_16) = 0xab43389 - __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_16) + 4) = 0;
    __asm__("rol r12d, 0xe1");
    rdi17 = *reinterpret_cast<unsigned char*>(&rdx13);
    __asm__("ror r15w, 1");
    rdx18 = rdx13 + 0xffffffcf;
    sf19 = reinterpret_cast<int64_t>(rdx18) < reinterpret_cast<int64_t>(0);
    *reinterpret_cast<unsigned char*>(&rsi14) = reinterpret_cast<uint1_t>(!sf19);
    if (sf19 == __intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax9) = 0xffffffcf;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    }
    if (sf19) {
        *reinterpret_cast<uint32_t*>(&rax9) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    }
    __asm__("shld r12, rbp, cl");
    r13_20 = rdx18;
    rdx21 = r13_12;
    rax22 = rax9 >> 1;
    *reinterpret_cast<uint16_t*>(&rax22) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax22) >> 1);
    __asm__("shrd di, si, 0x1");
    *reinterpret_cast<uint16_t*>(&r12_8) = reinterpret_cast<uint16_t>(0xa635 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_15) + reinterpret_cast<uint1_t>(0xa635 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r10_15))))));
    __asm__("bsf r10, rax");
    __asm__("cdq ");
    __asm__("rol r12w, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx21) + 1) = 0;
    *reinterpret_cast<unsigned char*>(&rax22) = reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r13_20) & 0xf28d) >= reinterpret_cast<int16_t>(0));
    *reinterpret_cast<uint32_t*>(&rdx23) = *reinterpret_cast<uint32_t*>(&rdx21) - (0x3fbe4bd8 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx21) < 0x3fbe4bd9));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
    return rax22 + rbx10 + 1 + rdx23 + 0x140d8a65 + rsi14 + (rdi17 - (0x438adb9c + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdi17 < 0x438adb9d)))) + 0xd99df28d + r9_16 + r10_15 + 0xffffffcf + r12_8 + r13_20 + 0x75e42556afda0004 + 0x7e - 0x75e4255c5e517f21;
}

int64_t __assert_fail = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto __assert_fail;
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

int64_t main(int64_t rdi, int64_t rsi);

void fun_4010b3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x402d90, 0x402e00, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_4010e3() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_401163() {
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

int64_t fun_401193() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_402d93(int32_t edi, int64_t rsi, int64_t rdx) {
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
            *reinterpret_cast<int64_t*>(0x404e10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_402e03() {
    __asm__("cli ");
    return;
}

void fun_402e0b() {
    __asm__("cli ");
    return;
}

int64_t g405010 = 0;

void fun_401036() {
    goto g405010;
}

int64_t main(int64_t rdi, int64_t rsi) {
    uint64_t rax3;
    uint64_t rax4;
    uint64_t rax5;
    uint64_t rax6;
    uint64_t rax7;
    uint64_t rax8;
    uint64_t rax9;
    uint64_t rax10;
    uint64_t rax11;
    uint64_t rax12;

    rax3 = log_size_7_var_000(rdi, rsi);
    rax4 = log_size_7_var_001(rdi, rsi);
    rax5 = log_size_7_var_002(rdi, rsi);
    rax6 = log_size_7_var_003(rdi, rsi);
    rax7 = log_size_7_var_004(rdi, rsi);
    rax8 = log_size_7_var_005(rdi, rsi);
    rax9 = log_size_7_var_006(rdi, rsi);
    rax10 = log_size_7_var_007(rdi, rsi);
    rax11 = log_size_7_var_008(rdi, rsi);
    rax12 = log_size_7_var_009(rdi, rsi);
    if (rax3 + rax4 + rax5 + rax6 + rax7 + rax8 + rax9 + rax10 + rax11 + rax12) {
        fun_401030("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 31, "main");
    } else {
        return 0;
    }
}
