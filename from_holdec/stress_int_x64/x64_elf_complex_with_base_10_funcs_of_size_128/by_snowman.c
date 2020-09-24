
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

uint64_t log_size_7_var_000(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t r15_8;
    uint64_t rax9;
    int64_t rdx10;
    int64_t r12_11;
    int16_t cx12;
    uint64_t rbp13;
    int64_t rsi14;
    unsigned char tmp8_15;
    uint1_t cf16;
    int64_t r15_17;
    int64_t r11_18;
    uint64_t rax19;
    uint32_t eax20;
    int64_t rax21;
    uint64_t rsi22;
    uint64_t r14_23;
    int64_t r11_24;
    uint1_t zf25;
    uint64_t rdx26;
    int64_t rbp27;
    uint64_t rcx28;

    rbx7 = 0x31e403c0378a4e83;
    r15_8 = 0x419bfb817527e648;
    __asm__("rol dh, cl");
    __asm__("rol r13, cl");
    __asm__("rcr r11w, 1");
    __asm__("rol dl, 0xa4");
    *reinterpret_cast<int32_t*>(&rax9) = 0x43eb0000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx10) = __intrinsic();
    __asm__("btc rsi, 0x86");
    __asm__("btr r8d, 0x12");
    __asm__("cwd ");
    __asm__("shrd r15, rdx, 0x1");
    __asm__("ror r15w, 1");
    __asm__("bsr r11d, r12d");
    if (1) {
    }
    *reinterpret_cast<uint32_t*>(&r12_11) = 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = 0;
    __asm__("rcl esi, 1");
    __asm__("rol r13, cl");
    cx12 = 0xd251;
    *reinterpret_cast<int16_t*>(&r12_11) = -3;
    __asm__("btr r12, r12");
    *reinterpret_cast<int16_t*>(&r15_8) = 0x4e8;
    rbp13 = 0x31e403c0378a4e83 >> 0xffffffffffffff8f;
    __asm__("rcr r8b, 0x11");
    __asm__("ror r8b, cl");
    __asm__("ror r10, 1");
    *reinterpret_cast<unsigned char*>(&rbx7) = reinterpret_cast<unsigned char>(0xb4 + __intrinsic());
    *reinterpret_cast<uint16_t*>(&rbx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx7) >> 4);
    rsi14 = 0x9964fb42da72db9f;
    if (__intrinsic()) {
        r15_8 = 0x9a18001230020;
    }
    *reinterpret_cast<int16_t*>(&rax9) = 0;
    *reinterpret_cast<int16_t*>(&rsi14) = 0;
    tmp8_15 = *reinterpret_cast<unsigned char*>(&rdx10);
    __asm__("btr cx, r9w");
    __asm__("btr rbx, 0x5b");
    cf16 = reinterpret_cast<uint1_t>(tmp8_15 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax9) + 1) = reinterpret_cast<unsigned char>(tmp8_15 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) + cf16));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax9) + 1) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf16))) {
    }
    *reinterpret_cast<uint32_t*>(&r15_17) = *reinterpret_cast<uint32_t*>(&r15_8) | 0x9aa79e06;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_17) + 4) = 0;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx7) = 0x9aa79e06;
    }
    *reinterpret_cast<unsigned char*>(&rbx7) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx12) + 1);
    __asm__("rcr rbp, 0xed");
    *reinterpret_cast<uint32_t*>(&r11_18) = *reinterpret_cast<uint32_t*>(&rbx7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = 0;
    __asm__("ror esi, 1");
    if (0) {
        rsi14 = r11_18;
    }
    __asm__("rcl r11w, 1");
    rax19 = rax9;
    __asm__("xadd rbp, rbx");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__undefined())))) {
    }
    __asm__("bsr rdx, r15");
    __asm__("shld rdi, r12, cl");
    __asm__("ror r11w, 0x6d");
    eax20 = *reinterpret_cast<uint32_t*>(&rax19) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax21) = eax20 / eax20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = 0;
    rsi22 = reinterpret_cast<uint64_t>(rsi14) & 0x4b64f6e;
    r14_23 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rbp13)));
    __asm__("rol r8, cl");
    __asm__("shld dx, dx, cl");
    __asm__("xadd ch, al");
    *reinterpret_cast<int16_t*>(&r15_17) = -0;
    *reinterpret_cast<uint32_t*>(&r11_24) = *reinterpret_cast<uint32_t*>(&r11_18) + 33;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = 0;
    __asm__("rcr r14, 1");
    *reinterpret_cast<uint16_t*>(&rax21) = reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax21) >> -79)));
    zf25 = reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&rbp13) & 0x9aa79e06) == 0);
    rdx26 = 0xffffffdf + r14_23 * 8 - 0x60be5383;
    __asm__("btc r10w, 0xd5");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf25))) {
        *reinterpret_cast<uint16_t*>(&rdx26) = 0x5415;
    }
    __asm__("xadd r10w, bp");
    if (zf25) {
        r11_24 = rax21;
    }
    __asm__("cdq ");
    __asm__("ror si, 1");
    *reinterpret_cast<uint32_t*>(&rbp27) = *reinterpret_cast<uint32_t*>(&rbp13) - (0x9aa79e06 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp13) < 0x9aa79e06 + reinterpret_cast<uint1_t>(rbp13 < 0xfffffffff328dffa)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp27) + 4) = 0;
    rcx28 = 0x345b6bfce220f212;
    *reinterpret_cast<signed char*>(&r12_11) = -0;
    *reinterpret_cast<signed char*>(&rsi22) = -3;
    __asm__("rol bpl, 1");
    *reinterpret_cast<uint16_t*>(&rdx26) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx26) >> 1);
    *reinterpret_cast<unsigned char*>(&rcx28) = reinterpret_cast<uint1_t>(!static_cast<int1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax21) >> -33)));
    __asm__("rcr dx, 0x10");
    *reinterpret_cast<uint16_t*>(&rax21) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax21) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx26))));
    return rax21 + reinterpret_cast<uint64_t>(7 + r11_24) + rcx28 + rdx26 + rbp27 + rsi22 + 0xffffffdf + 0x58402c0085f15415 + 0x669b04bd258d00df + 0xde1f2c99aa79e06 + r11_24 + r12_11 + 0x9a1800123ffdf + (r14_23 >> 1) + r15_17 + 0x25d3e51e5fa3d960;
}

uint64_t log_size_7_var_001(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rax7;
    int64_t rdx8;
    int64_t r10_9;
    uint16_t ax10;
    uint64_t rdi11;
    signed char bpl12;
    uint32_t r15d13;
    uint64_t r10_14;
    int64_t rbx15;
    uint64_t rcx16;
    int64_t rbp17;
    uint64_t r9_18;
    int64_t r11_19;
    uint64_t r14_20;
    uint64_t rdi21;
    uint64_t tmp64_22;
    uint64_t rax23;
    int64_t r8_24;
    uint64_t rdx25;
    uint64_t rax26;
    uint16_t ax27;
    uint64_t tmp64_28;
    int64_t r15_29;

    rax7 = 0xd22cf3233119a9b3;
    rdx8 = 0xe0d48c3e1ec29b64;
    r10_9 = 0xca7a8a37cc5ddc7f;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1) = -92;
    __asm__("ror bx, 1");
    ax10 = 0x6320;
    __asm__("ror bx, 0xc0");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int32_t*>(&r10_9) = 0xed975ab;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_9) + 4) = 0;
    }
    __asm__("bsf di, dx");
    __asm__("btr di, r11w");
    rdi11 = 0x4ccecf178c1be1cc;
    __asm__("shld di, r12w, cl");
    __asm__("rol r13d, cl");
    bpl12 = reinterpret_cast<signed char>(-52 >> 11);
    r15d13 = 0x8edbf5dc;
    *reinterpret_cast<unsigned char*>(&r10_9) = 1;
    __asm__("ror r8b, cl");
    __asm__("xadd r13W, di");
    if (!__intrinsic()) {
        rdx8 = 0x2c54c7d6aa7f638f;
    }
    *reinterpret_cast<unsigned char*>(&rdx8) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<unsigned char*>(&r15d13) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(0xb4 + *reinterpret_cast<int32_t*>(&rdx8) + __intrinsic()) < reinterpret_cast<int32_t>(0) == __intrinsic());
    *reinterpret_cast<unsigned char*>(&ax10) = reinterpret_cast<unsigned char>(32 - reinterpret_cast<unsigned char>(bpl12 + reinterpret_cast<uint1_t>(32 < reinterpret_cast<unsigned char>(bpl12 + 1))));
    __asm__("rcl r15, 1");
    __asm__("btr r13d, 0xb5");
    __asm__("rcl bp, 1");
    if (0) {
        *reinterpret_cast<uint16_t*>(&r15d13) = *reinterpret_cast<uint16_t*>(&rdx8);
    }
    __asm__("rol edx, 0xd6");
    r10_14 = r10_9 - 0x1efebd55 + 1;
    __asm__("rcl bl, cl");
    *reinterpret_cast<int32_t*>(&rbx15) = -70;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx15) + 4) = 0;
    __asm__("bsf rbp, r12");
    __asm__("ror r11, 1");
    __asm__("btr r8, r10");
    *reinterpret_cast<int32_t*>(&rcx16) = 0xc927213f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdx8) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx8) - 70) + 1);
    *reinterpret_cast<int32_t*>(&rbp17) = *reinterpret_cast<signed char*>(&rdx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rbp17) = 0xe14;
    __asm__("shrd r12d, r11d, 0x1");
    *reinterpret_cast<unsigned char*>(&r10_14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_14) | 47);
    if (1) {
        rdi11 = r10_14;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r15d13) = ax10;
    }
    __asm__("ror esi, cl");
    *reinterpret_cast<signed char*>(&rbp17) = -21;
    *reinterpret_cast<int32_t*>(&r9_18) = 0x89e65aff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_18) + 4) = 0;
    if (0) {
        rcx16 = 0x89e65aff;
        r9_18 = 0xc927213f;
    }
    *reinterpret_cast<int32_t*>(&r11_19) = 0x916fe8e + *reinterpret_cast<int32_t*>(&r10_14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r14_20) = 0x7c950000 >> *reinterpret_cast<unsigned char*>(&rcx16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = 0;
    __asm__("btr r14d, 0xd0");
    __asm__("ror r12w, 0x0");
    __asm__("shld r8d, r14d, 0x2a");
    *reinterpret_cast<int16_t*>(&r11_19) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_19) << 1);
    __asm__("btr cx, 0xd5");
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(ax10 * *reinterpret_cast<int16_t*>(&rcx16));
    *reinterpret_cast<unsigned char*>(&r9_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_18) >> 0x94);
    rdi21 = (reinterpret_cast<int64_t>(rdi11) >> 0x6d) + r10_14;
    __asm__("rcr r11d, 1");
    if (r14_20 == r10_14) {
        tmp64_22 = r14_20;
        r14_20 = r10_14;
        r10_14 = tmp64_22;
    }
    *reinterpret_cast<unsigned char*>(&rcx16) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcl ebp, 1");
    __asm__("bsf r8, rbx");
    rax23 = rax7 | 0xc000000000000000;
    r8_24 = 0x3fffffffffffffff;
    rdx25 = rax23 % rax23;
    rax26 = rax23 / rax23;
    ax27 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax26) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx25) = reinterpret_cast<uint16_t>(ax27 % -6);
    *reinterpret_cast<uint16_t*>(&rax26) = reinterpret_cast<uint16_t>(ax27 / -6);
    *reinterpret_cast<int16_t*>(&r8_24) = --1;
    *reinterpret_cast<signed char*>(&rbx15) = -16;
    __asm__("rcl bx, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax26) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax26) + 1) + 1);
    if (!__intrinsic()) {
        rbx15 = r8_24;
    }
    __asm__("rol r15b, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx15) + 1) = 64;
    if (rcx16 == rax26) {
        tmp64_28 = rcx16;
        rcx16 = rax26;
        rax26 = tmp64_28;
    }
    *reinterpret_cast<uint32_t*>(&r15_29) = r15d13 + *reinterpret_cast<int32_t*>(&r8_24) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = 0;
    __asm__("rcl al, cl");
    __asm__("bsf r9w, ax");
    __asm__("bsr edx, r11d");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx25) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx25) + 1) << *reinterpret_cast<unsigned char*>(&rcx16));
    return rax26 + rbx15 + rcx16 + rdx25 + rbp17 + 0xffba + rdi21 + r8_24 + (r9_18 & 0x5463132c) + r10_14 + r11_19 - 0x3d69f98631ccc906 + 0xc6473a5f + (reinterpret_cast<int64_t>(r14_20) >> 1) + (r15_29 >> *reinterpret_cast<unsigned char*>(&rcx16)) + 0x7ffffffbb656a39e;
}

uint64_t log_size_7_var_002(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rcx8;
    int64_t rbp9;
    int64_t r9_10;
    int64_t r11_11;
    uint64_t r15_12;
    uint64_t r12_13;
    uint64_t rdi14;
    int16_t tmp16_15;
    uint64_t r9_16;
    int64_t rsi17;
    int64_t rax18;
    uint64_t tmp64_19;
    uint64_t r15_20;
    int64_t r13_21;
    int64_t r14_22;
    int64_t rdx23;
    unsigned char ah24;
    int64_t r11_25;
    uint64_t rcx26;
    uint1_t cf27;
    int64_t rsi28;
    int64_t r10_29;
    int64_t r12_30;

    rbx7 = 0xb8727f2312c51e8a;
    rcx8 = 0xa4b69745d94bcdc0;
    rbp9 = 0xc5117f021ff65fb2;
    r9_10 = 0xdc3fef0d7afe1662;
    r11_11 = 0x4c7ccfe768b6e2c4;
    r15_12 = 0xf00d17268f7f56a;
    __asm__("rcr r9d, 1");
    *reinterpret_cast<int16_t*>(&r15_12) = -0xf56a;
    __asm__("ror al, 0x3d");
    __asm__("rcl r13d, cl");
    __asm__("bts ecx, ebp");
    __asm__("shrd r13, r11, 0x1");
    __asm__("rol r11w, 1");
    *reinterpret_cast<uint16_t*>(&rbx7) = 0x4846;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0xa4) >> 0xc0);
    __asm__("bsr r15, r11");
    __asm__("btr bp, 0x85");
    r12_13 = 0x1ce2ad52;
    __asm__("btr r12d, r12d");
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx7) = 0x7afe1662;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9_10) = 0x12c54846;
    }
    if (__intrinsic() != __intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_13) = 0xee4b;
    }
    __asm__("shld rbp, rax, cl");
    rdi14 = 0xc62108b125394349;
    __asm__("rcl r13W, 1");
    __asm__("rcl r10d, 1");
    tmp16_15 = *reinterpret_cast<int16_t*>(&r9_10);
    *reinterpret_cast<int16_t*>(&r9_10) = 0x4349;
    *reinterpret_cast<int16_t*>(&rdi14) = tmp16_15;
    __asm__("btc r11, 0x6a");
    *reinterpret_cast<uint32_t*>(&r9_16) = *reinterpret_cast<uint32_t*>(&r9_10) >> 34;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_16) + 4) = 0;
    rsi17 = 0x2a70c57;
    *reinterpret_cast<unsigned char*>(&r12_13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_13) + 1);
    __asm__("rol ebx, cl");
    __asm__("btr rbx, rbx");
    *reinterpret_cast<int32_t*>(&rax18) = 0xceb88206;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
    tmp64_19 = r15_12 - 0x3aee80fde009a04e + 1;
    r15_20 = tmp64_19;
    __asm__("shld r9w, ax, 0x1");
    if (tmp64_19 >= r15_12) {
        r11_11 = rbx7;
    }
    *reinterpret_cast<uint32_t*>(&r13_21) = 0xe4c75d0f ^ *reinterpret_cast<uint32_t*>(&r11_11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_21) + 4) = 0;
    __asm__("shrd rdx, r13, 0x1");
    r14_22 = 0;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx7) = *reinterpret_cast<uint32_t*>(&rcx8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax18) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax18) + 1) << 1);
    if (0) {
        r12_13 = r9_16;
    }
    *reinterpret_cast<int32_t*>(&rdx23) = 0x805b64c2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
    if (1) {
        rax18 = rcx8;
    }
    if (1 != __intrinsic()) {
        rax18 = 0x3fffffffffffffff;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&rsi17) = *reinterpret_cast<int16_t*>(&rcx8);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx8) + 1) ^ 0xc2);
    __asm__("shrd r11d, r13d, 0x1");
    *reinterpret_cast<signed char*>(&rbx7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx7) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx23) + 1));
    if (__intrinsic()) {
        rbp9 = 0;
    }
    ah24 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax18) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx7) + 1)) + 1);
    *reinterpret_cast<uint32_t*>(&r11_25) = *reinterpret_cast<uint32_t*>(&r11_11) >> 24 | *reinterpret_cast<uint32_t*>(&r11_11) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r11_11) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r11_11) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_25) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r9_16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_16) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_25) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_16) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r11_25))))));
    __asm__("rcr r13, 0x69");
    *reinterpret_cast<uint16_t*>(&rbx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx7) | 0x1f0c);
    *reinterpret_cast<unsigned char*>(&rsi17) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi17) + *reinterpret_cast<unsigned char*>(&rsi17))));
    *reinterpret_cast<unsigned char*>(&r14_22) = reinterpret_cast<uint1_t>(1 != __intrinsic());
    __asm__("rol r12d, 0x48");
    __asm__("btr r14w, 0xef");
    if (*reinterpret_cast<unsigned char*>(&r12_13) == *reinterpret_cast<unsigned char*>(&rsi17)) {
        *reinterpret_cast<unsigned char*>(&r12_13) = *reinterpret_cast<unsigned char*>(&rsi17);
    }
    __asm__("rcr dh, 0xea");
    *reinterpret_cast<unsigned char*>(&rcx8) = 0;
    __asm__("shrd si, bx, cl");
    rcx26 = rcx8 + r15_20;
    *reinterpret_cast<uint16_t*>(&rbp9) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp9) ^ 0x87f9);
    __asm__("rcr r13d, cl");
    *reinterpret_cast<signed char*>(&rax18) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax18) + *reinterpret_cast<signed char*>(&rbp9));
    *reinterpret_cast<int16_t*>(&r9_16) = -*reinterpret_cast<int16_t*>(&r9_16);
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_13) = 0xff76;
    }
    cf27 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_20) < *reinterpret_cast<uint32_t*>(&r9_16));
    if (*reinterpret_cast<uint32_t*>(&r15_20) - (*reinterpret_cast<uint32_t*>(&r9_16) + cf27) != static_cast<uint32_t>(cf27)) {
        rbp9 = 0x6e95e6b9;
    }
    __asm__("rol al, 1");
    if (*reinterpret_cast<signed char*>(&rax18) == *reinterpret_cast<signed char*>(&rax18)) {
        *reinterpret_cast<signed char*>(&rax18) = *reinterpret_cast<signed char*>(&rax18);
    }
    __asm__("ror dx, 1");
    *reinterpret_cast<uint16_t*>(&r11_25) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_25) >> 1) | 0xe6b9);
    *reinterpret_cast<unsigned char*>(&r12_13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_13) & *reinterpret_cast<unsigned char*>(&r13_21));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax18) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ah24 + 83) + __intrinsic());
    *reinterpret_cast<int32_t*>(&rsi28) = static_cast<int32_t>(r9_16 + 0xfffffffffffff890);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdx23) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr eax, 1");
    *reinterpret_cast<int32_t*>(&r10_29) = *reinterpret_cast<int32_t*>(&r12_13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_29) + 4) = 0;
    __asm__("btr r15, r15");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx7) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx7) + 1) - 1);
    *reinterpret_cast<int32_t*>(&r12_30) = *reinterpret_cast<int32_t*>(&r12_13) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_30) + 4) = 0;
    __asm__("rcr r13W, 1");
    __asm__("rol r12, cl");
    return rax18 + rbx7 + 0x3fffffffffffff12 + rdx23 + rbp9 + rsi28 + rdi14 * 0xffffffff98946ec8 + rcx26 + r9_16 + r10_29 + (r11_25 << *reinterpret_cast<unsigned char*>(&rcx26)) + r12_30 + r13_21 + r14_22 + (rbp9 + rbp9 + 0x5d21d371) - 0xfeb45ad6515e199;
}

uint64_t log_size_7_var_003(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rax7;
    uint64_t rcx8;
    uint64_t rbp9;
    int64_t rsi10;
    uint64_t rdi11;
    uint64_t r13_12;
    int64_t r14_13;
    int64_t r15_14;
    uint64_t r9_15;
    int64_t r10_16;
    int64_t r8_17;
    unsigned char sil18;
    unsigned char tmp8_19;
    uint64_t rax20;
    int64_t rcx21;
    int64_t rsi22;
    uint64_t rbx23;
    int64_t rax24;
    int64_t r8_25;
    uint64_t r14_26;
    int64_t r15_27;
    uint64_t rdi28;
    uint64_t r11_29;
    unsigned char cl30;
    uint64_t rbx31;
    uint64_t rax32;
    int64_t rdx33;
    int64_t r12_34;
    int64_t r10_35;
    uint64_t rdi36;
    uint64_t tmp64_37;
    uint64_t tmp64_38;
    uint16_t ax39;
    int64_t rdi40;
    uint64_t rsi41;
    int64_t r11_42;

    rax7 = 0x9bd0421af2f2dc2d;
    rcx8 = 0x747bef95183cce54;
    rbp9 = 0x2bed528e9f2c5ff5;
    rsi10 = 0x9ff59a2abb59c11b;
    rdi11 = 0x77cb717dfd57a961;
    r13_12 = 0xb6374a1ad0c31216;
    r14_13 = 0x1f7a5404343bda03;
    r15_14 = 0xba4e174a7f9a7336;
    *reinterpret_cast<int32_t*>(&r9_15) = 23;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_15) + 4) = 0;
    __asm__("rcr di, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = -40;
    if (0) {
        rsi10 = 0xbd11ca4463a07586;
    }
    r10_16 = -0x1eac3fda33189142;
    if (0) {
        rcx8 = 0x9bd0421af2f2dc2d;
        rax7 = 0x747bef95183cd854;
    }
    __asm__("bts r8d, 0xb3");
    *reinterpret_cast<uint16_t*>(&r10_16) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_16) - reinterpret_cast<uint16_t>(0xda03 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_16) < 0xda03)));
    *reinterpret_cast<unsigned char*>(&r13_12) = 0xf5;
    __asm__("rcl ax, cl");
    __asm__("rcr ch, 1");
    __asm__("rcl rax, 1");
    r8_17 = r10_16 * 0xffffffffc758662b;
    *reinterpret_cast<unsigned char*>(&r9_15) = -23;
    sil18 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi10) >> *reinterpret_cast<signed char*>(&rcx8));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx8) + 1);
    *reinterpret_cast<uint16_t*>(&r15_14) = reinterpret_cast<uint16_t>(0x7336 >> -49);
    tmp8_19 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(sil18 + 94)));
    *reinterpret_cast<unsigned char*>(&rsi10) = tmp8_19;
    if (reinterpret_cast<uint1_t>(tmp8_19 < sil18) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi10) == 0)) {
        r13_12 = 0x2bed528e9f2cffa2;
    }
    if (*reinterpret_cast<signed char*>(&rsi10) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<int32_t*>(&r14_13) = *reinterpret_cast<int32_t*>(&r13_12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_13) + 4) = 0;
    }
    __asm__("rol r10d, 1");
    *reinterpret_cast<int16_t*>(&rax7) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax7) * -46);
    *reinterpret_cast<unsigned char*>(&r13_12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_12) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_15) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_12) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r9_15))))));
    __asm__("rcr r15d, 0xac");
    __asm__("rol r13W, cl");
    __asm__("xadd edi, ecx");
    rax20 = rax7 ^ r9_15;
    if (!__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&r13_12) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r13_12) >> 1);
    *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(&rcx8) - 0x6a5b0ce6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
    __asm__("btr r11, r11");
    *reinterpret_cast<uint32_t*>(&rsi22) = *reinterpret_cast<uint32_t*>(&rsi10) >> 0xffffff86;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rbx23) = 0xe935d9a4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
    __asm__("shld r8, r13, cl");
    *reinterpret_cast<uint32_t*>(&rax24) = *reinterpret_cast<uint32_t*>(&rax20) ^ 0x625d4fa8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
    __asm__("btc r9, 0x92");
    __asm__("rcl rbp, 1");
    __asm__("btr ax, 0x7f");
    *reinterpret_cast<int32_t*>(&r8_25) = *reinterpret_cast<int32_t*>(&r8_17) + 0x2cdb92a9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_25) + 4) = 0;
    __asm__("rol r13W, 0x91");
    __asm__("shrd cx, cx, 0x1");
    r14_26 = reinterpret_cast<uint64_t>(r14_13 + 0x20edb4d2);
    if (!r14_26) {
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r9_15) = *reinterpret_cast<int32_t*>(&r9_15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_15) + 4) = 0;
    }
    __asm__("rcl sil, 1");
    *reinterpret_cast<uint32_t*>(&r15_27) = (*reinterpret_cast<int32_t*>(&r15_14) >> *reinterpret_cast<signed char*>(&rcx8)) + 0xe9fde2a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx23) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r15_27) < reinterpret_cast<int32_t>(0) != __intrinsic());
    *reinterpret_cast<int16_t*>(&rdi11) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r9_15) + *reinterpret_cast<int32_t*>(&rcx21) * 2);
    if (0) {
    }
    __asm__("rcr edi, 1");
    __asm__("btr r8, 0x50");
    *reinterpret_cast<uint32_t*>(&rdi28) = *reinterpret_cast<uint32_t*>(&rdi11) | 0x3fa931af;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = 0;
    __asm__("btr r10d, 0x3a");
    __asm__("btr rbx, 0xb4");
    *reinterpret_cast<unsigned char*>(&r9_15) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_15) + 0xd5) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1) >> 1) ^ *reinterpret_cast<unsigned char*>(&rcx21));
    __asm__("shrd r8, rbx, 0x7d");
    *reinterpret_cast<uint16_t*>(&r8_25) = static_cast<uint16_t>(r14_26 + 0xa3);
    r11_29 = rdi11 | 0xff018c9;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int32_t*>(&r8_25) = *reinterpret_cast<int32_t*>(&r11_29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_25) + 4) = 0;
    }
    __asm__("rol r8, 0xe0");
    cl30 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx21) | 0xf3);
    rbx31 = (rbx23 | 0xffffffffdb375a53) ^ r14_26;
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r9_15) & 0x810a) >= reinterpret_cast<int16_t>(0)) {
        *reinterpret_cast<int32_t*>(&rbx31) = *reinterpret_cast<int32_t*>(&r8_25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx31) + 4) = 0;
    }
    rax32 = rax24 * r14_26 * 0x2bed528e9f2c773a;
    rdx33 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r12_34) = 0x7b42eded - (*reinterpret_cast<int32_t*>(&r10_16) + reinterpret_cast<uint1_t>(0x7b42eded < *reinterpret_cast<int32_t*>(&r10_16) + __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r15_27) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_26) * 0x52c1);
    *reinterpret_cast<int16_t*>(&rbp9) = reinterpret_cast<int16_t>(0x773a >> 21);
    *reinterpret_cast<int32_t*>(&r10_35) = *reinterpret_cast<int32_t*>(&r10_16) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_35) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi28) = *reinterpret_cast<uint32_t*>(&rax32);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = 0;
    }
    __asm__("cwd ");
    rdi36 = rdi28 >> cl30;
    *reinterpret_cast<uint16_t*>(&r9_15) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_15) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_25) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_15) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8_25))))));
    __asm__("rol r11b, 1");
    tmp64_37 = (rbx31 & 0xffffffff) << 32 | (rbx31 & 0xffffffff00000000) >> 32;
    tmp64_38 = (tmp64_37 & 0xffff0000ffff) << 16 | (tmp64_37 & 0xffff0000ffff0000) >> 16;
    *reinterpret_cast<unsigned char*>(&rcx21) = reinterpret_cast<unsigned char>(cl30 | 0xc0);
    ax39 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax32) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx33) = reinterpret_cast<uint16_t>(ax39 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx21)));
    *reinterpret_cast<uint16_t*>(&rax32) = reinterpret_cast<uint16_t>(ax39 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx21)));
    *reinterpret_cast<uint32_t*>(&rdi40) = *reinterpret_cast<uint32_t*>(&rdi36) | 0x29986000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = 0;
    rsi41 = reinterpret_cast<uint64_t>(rsi22 >> 1);
    __asm__("cdq ");
    __asm__("rcl rax, 1");
    *reinterpret_cast<uint16_t*>(&rsi41) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi41) >> *reinterpret_cast<unsigned char*>(&rcx21));
    *reinterpret_cast<uint32_t*>(&r11_42) = *reinterpret_cast<uint16_t*>(&rax32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_42) + 4) = 0;
    return rax32 + ((tmp64_38 & 0xff00ff00ff00ff) << 8 | (tmp64_38 & 0xff00ff00ff00ff00) >> 8) + rcx21 + rdx33 + rbp9 + rsi41 + rdi40 + r8_25 + r9_15 + r10_35 + r11_42 + r12_34 + (r13_12 ^ 0xbb635e167b42ed6c) + (r14_26 & 0xa54156e) + r15_27 + 0x1060b70b179267bb;
}

uint64_t log_size_7_var_004(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t rdi8;
    int64_t r9_9;
    int64_t r12_10;
    int64_t r11_11;
    int64_t rbp12;
    uint64_t rbx13;
    uint64_t rax14;
    uint64_t r12_15;
    unsigned char r9b16;
    unsigned char r9b17;
    int32_t eax18;
    int32_t edx19;
    int64_t rax20;
    int64_t rcx21;
    int64_t r13_22;
    uint64_t r14_23;
    int64_t rax24;
    int64_t rdx25;

    rsi7 = 0xe05940657044ba66;
    rdi8 = 0x4f6b63a29ca6440b;
    r9_9 = 0x87f9ca1d0660c79a;
    r12_10 = 0x40533ca67dd1a8ad;
    __asm__("rcl rcx, 1");
    __asm__("ror rax, 1");
    __asm__("rcr r10w, 1");
    *reinterpret_cast<uint32_t*>(&r11_11) = 0xe373c033;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = 0;
    __asm__("rcl bh, 1");
    __asm__("bsf edx, r11d");
    __asm__("shrd esi, ebp, cl");
    __asm__("bts r14w, r15w");
    *reinterpret_cast<int32_t*>(&rbp12) = 0x7dd1a8ad;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
    __asm__("shrd r13W, r8w, 0x1");
    *reinterpret_cast<unsigned char*>(&rsi7) = __intrinsic();
    __asm__("bsr r12w, cx");
    *reinterpret_cast<uint32_t*>(&rbx13) = 0x12cdf59e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = 0;
    if (0) {
    }
    if (0) {
    }
    *reinterpret_cast<unsigned char*>(&rbx13) = 0xae;
    __asm__("rcr di, 1");
    rax14 = 0xfafde7af955b46b8;
    __asm__("btc cx, 0x39");
    __asm__("ror bh, 1");
    *reinterpret_cast<unsigned char*>(&r12_10) = reinterpret_cast<unsigned char>(0xad >> 75);
    __asm__("xadd al, al");
    r12_15 = reinterpret_cast<uint64_t>(r12_10 - 0x2ff8e34);
    r9b16 = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("bsf eax, r13d");
    __asm__("bts r8d, ecx");
    *reinterpret_cast<uint16_t*>(&r12_15) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_15) + 0x72b2) + 1);
    if (__intrinsic()) {
        rbx13 = r12_15;
    }
    __asm__("rcl eax, 0xb7");
    __asm__("ror si, cl");
    __asm__("rol al, 1");
    __asm__("btr bp, 0x76");
    *reinterpret_cast<signed char*>(&rax14) = --72;
    r9b17 = reinterpret_cast<unsigned char>(r9b16 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax14) + reinterpret_cast<uint1_t>(r9b16 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax14) + 1))));
    __asm__("rol rdx, 0xaa");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax14) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0xfa - reinterpret_cast<unsigned char>(0xfa + reinterpret_cast<uint1_t>(0xfa < reinterpret_cast<unsigned char>(0xfa + static_cast<uint1_t>(0x1554988f74541a8c >> 0x7e))))) >> 1);
    __asm__("rcl r11w, cl");
    __asm__("ror rdx, cl");
    *reinterpret_cast<int16_t*>(&rsi7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi7) >> -29);
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>((0x50023019 ^ r12_15) == 0)) {
    }
    eax18 = *reinterpret_cast<int32_t*>(&rax14) * *reinterpret_cast<int32_t*>(&rsi7);
    edx19 = __intrinsic();
    *reinterpret_cast<int16_t*>(&r11_11) = *reinterpret_cast<int16_t*>(&rbx13);
    __asm__("bsr r13d, r15d");
    __asm__("btr r8d, 0xf0");
    *reinterpret_cast<int32_t*>(&rax20) = *reinterpret_cast<int16_t*>(&eax18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
    __asm__("rol r8, 0x1a");
    rcx21 = 0xffffffee4f4e9f68;
    *reinterpret_cast<uint32_t*>(&r13_22) = 0x327f + *reinterpret_cast<uint32_t*>(&rbx13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = 0;
    __asm__("rcr r8b, 1");
    if (!__intrinsic()) {
    }
    r14_23 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&edx19)));
    rax24 = rax20 * 0xffffffee4f4e9f68;
    rdx25 = __intrinsic();
    *reinterpret_cast<int16_t*>(&rdx25) = -1;
    __asm__("ror dil, 1");
    __asm__("rcl ebx, cl");
    *reinterpret_cast<int16_t*>(&r9_9) = reinterpret_cast<signed char>(r9b17);
    __asm__("btc edx, 0xe");
    __asm__("ror bx, 0x2a");
    *reinterpret_cast<uint16_t*>(&rbp12) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1);
    __asm__("xadd r14d, ebx");
    __asm__("rcr r9b, 1");
    *reinterpret_cast<int16_t*>(&rdi8) = static_cast<int16_t>(0x11b0b16098 - rbx13 * 8 - 0x51b28cef);
    *reinterpret_cast<unsigned char*>(&rcx21) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r11_11) & 0xb8791848) < reinterpret_cast<int32_t>(0)))));
    if (1) {
        *reinterpret_cast<uint16_t*>(&r12_15) = 0x9a;
    }
    __asm__("rol r13b, cl");
    __asm__("btc r15d, eax");
    __asm__("rcr r14d, 1");
    *reinterpret_cast<uint16_t*>(&r14_23) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_23) ^ 0x9a);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx25) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx25) + 1) + 1);
    __asm__("rcr rbx, 0x58");
    return rax24 + rbx13 + rcx21 + rdx25 + rbp12 + rdi8 + 0x68 + (r9_9 << 1) + r11_11 + r12_15 + r13_22 + r14_23 + 0xb2e44508 + 0x224dcb8b948ca7a5;
}

uint64_t log_size_7_var_005(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    uint64_t rdi8;
    int64_t r8_9;
    uint64_t r11_10;
    uint64_t r13_11;
    uint64_t rbp12;
    uint64_t r15_13;
    uint64_t r15_14;
    int64_t rsi15;
    uint64_t rdi16;
    uint64_t rax17;
    int64_t rdx18;
    uint16_t r8w19;
    uint64_t r15_20;
    int64_t rbp21;
    int64_t rbx22;
    unsigned char tmp8_23;
    uint64_t r14_24;
    int64_t r12_25;
    int64_t rcx26;
    int64_t rdi27;
    int64_t rax28;
    uint64_t r15_29;
    uint64_t rdx30;

    rax7 = 0x7778c6ab32db8dd1;
    rdi8 = 0x53daa0047e672204;
    r8_9 = 0xdc26c0c60c175d59;
    r11_10 = 0x1c9df1b49ef8ab60;
    r13_11 = 0x21a6eed56d0c51d9;
    __asm__("rol r8w, 0x5c");
    if (0) {
        r13_11 = 0x53daa0047e672204;
        rdi8 = 0x21a6eed56d0c51d9;
    }
    if (0) {
        *reinterpret_cast<uint16_t*>(&rdi8) = 0x67c;
    }
    __asm__("rol edx, 0x21");
    __asm__("shld r12d, r8d, cl");
    *reinterpret_cast<uint16_t*>(&rdi8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi8) ^ 0xdf4e);
    if (__intrinsic()) {
    }
    rbp12 = 0xadb2c8c58a126fec;
    if (__intrinsic()) {
        rbp12 = 0x4acf957abd9b57cc;
    }
    *reinterpret_cast<int32_t*>(&r15_13) = 0xdecdabe6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = 0;
    __asm__("rcl rcx, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rax7) = 0x576c2e8f;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r15_13) = *reinterpret_cast<int16_t*>(&rbp12);
    }
    r15_14 = r15_13 >> -33;
    __asm__("btc r15d, ebx");
    *reinterpret_cast<int32_t*>(&rsi15) = 0x9c667808;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
    __asm__("btc r13d, 0x63");
    __asm__("btr r8w, bx");
    __asm__("ror r8d, 0x84");
    __asm__("cdq ");
    __asm__("shld r12w, r10w, 0x2");
    __asm__("rol r13b, 1");
    __asm__("rcr r15, 1");
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax7) - reinterpret_cast<unsigned char>(9 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax7) < 0xf8)));
    __asm__("shrd r8w, si, 0x1");
    __asm__("shrd r12w, dx, 0x1");
    rdi16 = rdi8 & 0xffffffffe0c0087b;
    if (__intrinsic()) {
    }
    rax17 = rax7 * 0x1c9df1b49ef8ab60;
    rdx18 = __intrinsic();
    __asm__("rcl rbx, 1");
    r8w19 = reinterpret_cast<uint16_t>(0x951 >> -33);
    r15_20 = r15_14 - (0x4892c666 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_14 < 0x4892c667))) - 0x5dcd4ef4 + 1;
    if (1) {
        *reinterpret_cast<int16_t*>(&rbp12) = 0x1229;
    }
    __asm__("rcr ax, 1");
    *reinterpret_cast<signed char*>(&r15_20) = *reinterpret_cast<signed char*>(&r8w19);
    *reinterpret_cast<uint32_t*>(&rbp21) = *reinterpret_cast<uint32_t*>(&rbp12) - (*reinterpret_cast<uint32_t*>(&rbp12) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp12) < *reinterpret_cast<uint32_t*>(&rbp12) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = 0;
    __asm__("bts r13d, esi");
    *reinterpret_cast<int16_t*>(&r11_10) = reinterpret_cast<int16_t>(static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&rdi16) + 17) + 0x5e12);
    __asm__("bsr r10, r14");
    *reinterpret_cast<int32_t*>(&rbx22) = 0x8be31229;
    *reinterpret_cast<uint16_t*>(&rdi16) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx22) + 1)));
    __asm__("rcl r8w, cl");
    tmp8_23 = *reinterpret_cast<unsigned char*>(&rdx18);
    *reinterpret_cast<uint16_t*>(&r8_9) = reinterpret_cast<uint16_t>(r8w19 * 0xb7ee);
    r14_24 = 0xb655e17358fd5a22 - (rax17 + reinterpret_cast<uint1_t>(0xb655e17358fd5a22 < rax17 + reinterpret_cast<uint1_t>(tmp8_23 < 33)));
    *reinterpret_cast<unsigned char*>(&r13_11) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r12_25) = 0xffbfff68 >> -33;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_25) + 4) = 0;
    __asm__("rol r12d, 1");
    *reinterpret_cast<uint16_t*>(&rsi15) = reinterpret_cast<uint16_t>(78 & *reinterpret_cast<uint16_t*>(&rdi16));
    __asm__("shld r14d, r15d, 0x1");
    __asm__("shrd r8d, r8d, 0x64");
    *reinterpret_cast<unsigned char*>(&r12_25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_25) & 35);
    __asm__("ror r9b, 0x6c");
    __asm__("xadd r10w, bp");
    __asm__("bts r11w, dx");
    *reinterpret_cast<int32_t*>(&rcx26) = *reinterpret_cast<int32_t*>(&r8_9) * 0x8d7d7820;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint32_t*>(&rdi27) = *reinterpret_cast<uint32_t*>(&rdi16) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbp21) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbp21) >> -33) >> 1);
    *reinterpret_cast<int16_t*>(&rcx26) = -*reinterpret_cast<int16_t*>(&rcx26);
    *reinterpret_cast<unsigned char*>(&r11_10) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&r11_10) >> -33) >> 52) << *reinterpret_cast<unsigned char*>(&rcx26));
    *reinterpret_cast<int16_t*>(&rax17) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax17) * *reinterpret_cast<int16_t*>(&r15_20));
    __asm__("rcl ebp, 0xa0");
    __asm__("rcr ecx, 1");
    if (!__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&rcx26) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx26) & 15);
    __asm__("shld r11w, bx, cl");
    __asm__("btc r15w, si");
    __asm__("rcr r12w, cl");
    __asm__("xadd r14d, r13d");
    rax28 = reinterpret_cast<int64_t>(rax17) >> -26;
    r15_29 = r15_20 | 0xc000000000000000;
    rdx30 = rax28 % r15_29;
    return rax28 / r15_29 + (0x8be31229 - rbp21) + rcx26 + rdx30 + rbp21 + rsi15 + rdi27 + 0x3fffffffffffffff + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_11) + *reinterpret_cast<int32_t*>(&rdx30)) + (0x576cc5b9 >> 0xffffffffffffff86) + r11_10 + r12_25 + r13_11 + r14_24 + r15_29 + 0x678a9cbae73bed22;
}

uint64_t log_size_7_var_006(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r9_7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t rax10;
    int64_t rdx11;
    uint64_t r8_12;
    uint64_t r10_13;
    int64_t rbp14;
    uint1_t cf15;
    uint64_t r12_16;
    int64_t rdi17;
    int64_t rcx18;
    int64_t r8_19;
    int64_t r14_20;
    int64_t r14_21;
    int64_t rdx22;
    int64_t r15_23;
    int64_t r12_24;

    r9_7 = 0xae1a32a99013bec;
    r14_8 = 0xfc97f871fa858695;
    r15_9 = 0x1019e6af55e7f414;
    __asm__("rol bp, 0x76");
    __asm__("rcr r9d, 0x96");
    if (0) {
        *reinterpret_cast<signed char*>(&r9_7) = 0x7d;
    }
    __asm__("shrd r14, r11, cl");
    *reinterpret_cast<int32_t*>(&rax10) = 0x654855e8;
    *reinterpret_cast<int32_t*>(&rdx11) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
    __asm__("rcl ch, cl");
    __asm__("xadd dx, r8w");
    __asm__("ror r8, 1");
    __asm__("xadd ebx, eax");
    r8_12 = 0;
    __asm__("shrd r8w, si, cl");
    r10_13 = 0xc281d325fd5b75ef >> reinterpret_cast<unsigned char>(static_cast<unsigned char>(__intrinsic()) & 15);
    *reinterpret_cast<unsigned char*>(&rdx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx11) + 1);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdx11) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx11) == 0))) {
        *reinterpret_cast<int16_t*>(&r15_9) = 0x61ef;
    }
    __asm__("rcr al, 1");
    rbp14 = rdx11;
    cf15 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) < 0xe8);
    if (!cf15) {
        *reinterpret_cast<int32_t*>(&r8_12) = *reinterpret_cast<int32_t*>(&rbp14);
    }
    *reinterpret_cast<uint16_t*>(&r14_8) = *reinterpret_cast<unsigned char*>(&rdx11);
    __asm__("xadd dh, dh");
    __asm__("ror rcx, cl");
    *reinterpret_cast<int16_t*>(&rbp14) = -*reinterpret_cast<int16_t*>(&rbp14);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rbp14) == 0))) {
        *reinterpret_cast<int32_t*>(&rbp14) = 0xfe707c61;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = 0;
    }
    __asm__("shld r13W, bp, cl");
    __asm__("rcr r15, 1");
    *reinterpret_cast<unsigned char*>(&r8_12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_12) | 0xce);
    r12_16 = 0x27be6f8afe707c61 | r15_9 + 0x6a14c5c66df01650 + static_cast<uint64_t>(cf15);
    __asm__("shld r15d, r12d, 0x1");
    __asm__("ror r12, 1");
    *reinterpret_cast<uint16_t*>(&r10_13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_13) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_16) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_13) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_16) + 1))));
    *reinterpret_cast<unsigned char*>(&r10_13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_13) ^ 0x9a);
    __asm__("rcl r15, 0x0");
    *reinterpret_cast<uint32_t*>(&rdi17) = 0x89a4ff21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx18) = 0xc73c6778;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_19) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_12) - 1) ^ *reinterpret_cast<uint32_t*>(&r10_13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
    __asm__("rcr rbx, 1");
    r14_20 = r14_8 + 1 - 1;
    *reinterpret_cast<uint32_t*>(&r14_21) = *reinterpret_cast<uint32_t*>(&r14_20) | 0x89a4ff21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_21) + 4) = 0;
    __asm__("btc r10d, 0x75");
    __asm__("bsf rax, r12");
    *reinterpret_cast<uint16_t*>(&r10_13) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_13) - 1) + 0x2d03);
    __asm__("ror rbx, 1");
    *reinterpret_cast<signed char*>(&rcx18) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx18) + 1);
    if (0) {
        *reinterpret_cast<uint16_t*>(&r9_7) = *reinterpret_cast<uint16_t*>(&r10_13);
    }
    if (__intrinsic()) {
    }
    __asm__("rol rax, 0xa2");
    *reinterpret_cast<int32_t*>(&rdx22) = 0xda206238;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = 0;
    if (r9_7 < 0x51a3a0a2) {
    }
    *reinterpret_cast<signed char*>(&r14_21) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_21) - 0x7b);
    __asm__("rcr r11b, 0x85");
    *reinterpret_cast<int16_t*>(&rdx22) = __intrinsic();
    __asm__("ror r13d, cl");
    *reinterpret_cast<uint32_t*>(&r15_23) = *reinterpret_cast<uint32_t*>(&r14_21) * 0xd8d3e3be;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_23) + 4) = 0;
    __asm__("btr ecx, 0xc0");
    if (*reinterpret_cast<uint32_t*>(&r14_21) < 0x4ffeac55) {
    }
    r12_24 = 0x181bb524 + r15_23 * 8 + 14;
    if (__intrinsic()) {
        rdi17 = rcx18;
    }
    *reinterpret_cast<uint16_t*>(&r12_24) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_24) >> *reinterpret_cast<signed char*>(&rcx18));
    return 0x7e187adbfba3b545 + rcx18 + rdx22 + rbp14 + rdi17 + (r8_19 << 1) + r9_7 + r10_13 + r12_24 + 0x260a1f63 + r14_21 + r15_23 - 0x2e0309d56c524994;
}

uint64_t log_size_7_var_007(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rdx8;
    uint64_t rsi9;
    uint64_t rdi10;
    int64_t r8_11;
    uint64_t r10_12;
    int64_t r12_13;
    int64_t rcx14;
    uint64_t r9_15;
    uint64_t r12_16;
    int64_t rax17;
    uint64_t rdx18;
    uint64_t r14_19;
    uint64_t rbx20;
    int64_t r13_21;
    uint64_t rcx22;
    uint64_t r11_23;
    uint64_t rbx24;
    uint64_t rsi25;
    int64_t rax26;
    int64_t r13_27;
    uint64_t r12_28;
    uint64_t rdx29;
    int64_t rdx30;
    int64_t rax31;
    uint64_t r14_32;
    signed char tmp8_33;
    uint64_t r14_34;
    int64_t r8_35;
    int64_t rsi36;

    rbx7 = 0x372e1f7e18203b2a;
    rdx8 = 0xebb9a3b15e76980c;
    rsi9 = 0x76c3472f7c2b69bf;
    rdi10 = 0xc61c8693b252cf18;
    r8_11 = 0x19a736232a5a00f7;
    r10_12 = 0xf6446a15b4e1cc1f;
    r12_13 = 0x1cf454ece1b7;
    __asm__("rol r12b, 1");
    __asm__("rcr ecx, 0x5b");
    __asm__("shld r10, r15, cl");
    __asm__("btc r12, r8");
    __asm__("rcr r12b, 1");
    __asm__("rol sil, cl");
    if (0) {
        *reinterpret_cast<unsigned char*>(&rdx8) = 55;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) = 12;
    }
    *reinterpret_cast<uint32_t*>(&rcx14) = *reinterpret_cast<unsigned char*>(&rdx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdi10) = 0xb0cf;
    __asm__("bsf esi, r10d");
    __asm__("btc cx, cx");
    __asm__("rol rbp, 0x43");
    *reinterpret_cast<unsigned char*>(&rcx14) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx14) - reinterpret_cast<unsigned char>(95 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx14) < 96))) & 15);
    __asm__("shld r9w, r14w, cl");
    r9_15 = reinterpret_cast<uint64_t>(0xe4a8173aa2b287fd >> *reinterpret_cast<unsigned char*>(&rcx14));
    *reinterpret_cast<signed char*>(&r12_13) = reinterpret_cast<signed char>(-73 - *reinterpret_cast<signed char*>(&r9_15));
    *reinterpret_cast<int16_t*>(&rcx14) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx14) >> *reinterpret_cast<unsigned char*>(&rcx14));
    *reinterpret_cast<int32_t*>(&r12_16) = *reinterpret_cast<int32_t*>(&r12_13) + 0x3f01d4fe;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = 0;
    __asm__("rol ecx, 0x7c");
    __asm__("rol esi, cl");
    rax17 = 0x2321 * rbx7;
    rdx18 = __intrinsic();
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rsi9) = 0xb0cf;
    }
    *reinterpret_cast<int16_t*>(&r10_12) = 0x1995;
    __asm__("shrd rax, r14, 0xa");
    __asm__("xadd r13d, r9d");
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rdi10) = 0x56c52d52;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    }
    __asm__("shld bx, bx, cl");
    r14_19 = 42;
    rbx20 = reinterpret_cast<uint64_t>(rbx7 * 0x47a26f3f);
    r13_21 = 0x78482eaf391d48e7;
    *reinterpret_cast<unsigned char*>(&rcx14) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx14) & 15) & *reinterpret_cast<unsigned char*>(&rbx20));
    *reinterpret_cast<int16_t*>(&rdx18) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx18) << *reinterpret_cast<unsigned char*>(&rcx14));
    __asm__("btr r8, r11");
    rcx22 = rcx14 + 0x269938e7;
    *reinterpret_cast<unsigned char*>(&r13_21) = __intrinsic();
    if (reinterpret_cast<int64_t>(rcx22) >= reinterpret_cast<int64_t>(0)) {
        *reinterpret_cast<int32_t*>(&rax17) = *reinterpret_cast<int32_t*>(&r13_21);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    }
    r11_23 = 0x5d178886222ec00c - (r12_16 + reinterpret_cast<uint1_t>(0x5d178886222ec00c < r12_16 + 1));
    if (*reinterpret_cast<int32_t*>(&r13_21) >= 0) {
        r10_12 = rdx18;
    }
    *reinterpret_cast<signed char*>(&rcx22) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rcx22) - 1);
    __asm__("ror rbp, cl");
    __asm__("bts bx, 0xdd");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx18) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx18) + 1) >> 1);
    *reinterpret_cast<unsigned char*>(&r14_19) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(42 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi10) + reinterpret_cast<uint1_t>(42 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdi10)))))) >> *reinterpret_cast<signed char*>(&rcx22));
    if (*reinterpret_cast<int16_t*>(&rbx20) == *reinterpret_cast<int16_t*>(&r9_15)) {
        *reinterpret_cast<int16_t*>(&rbx20) = *reinterpret_cast<int16_t*>(&r9_15);
    }
    *reinterpret_cast<int16_t*>(&r9_15) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&rdx18));
    *reinterpret_cast<uint16_t*>(&rsi9) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi9) + 0x78fa)));
    rbx24 = rbx20 ^ r14_19;
    __asm__("rcl rbp, 1");
    __asm__("rol r12w, 0xfb");
    *reinterpret_cast<int16_t*>(&rax17) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax17) - 1);
    *reinterpret_cast<signed char*>(&rbx24) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx24) + *reinterpret_cast<signed char*>(&rsi9));
    __asm__("btc r8, r8");
    *reinterpret_cast<int16_t*>(&rdx18) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx18) << 1);
    __asm__("bsf r11, rax");
    __asm__("ror ebx, 0xa1");
    __asm__("shld r8w, dx, 0x1");
    rsi25 = rsi9 ^ 0xffffffffc9ffa85a;
    *reinterpret_cast<uint16_t*>(&r11_23) = *reinterpret_cast<unsigned char*>(&rsi25);
    rax26 = rax17 * 0xfbf8188;
    *reinterpret_cast<uint16_t*>(&rcx22) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx22) >> 1);
    __asm__("shld r8d, r11d, 0x61");
    __asm__("cdq ");
    __asm__("rol r14, cl");
    __asm__("rcr r11, 0xcf");
    *reinterpret_cast<int32_t*>(&r13_27) = *reinterpret_cast<signed char*>(&r10_12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = 0;
    r12_28 = r12_16 | rsi25;
    rdx29 = rdx18 - (rsi25 + reinterpret_cast<uint1_t>(rdx18 < rsi25));
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_11) = *reinterpret_cast<int32_t*>(&rdi10);
        *reinterpret_cast<int32_t*>(&rdi10) = 0x2a5a00f7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&rdx29) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx22) + 1);
    *reinterpret_cast<int32_t*>(&rdx30) = *reinterpret_cast<int32_t*>(&rdx29) * 0xcba4045a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
    __asm__("rcr r8b, 1");
    __asm__("ror r13, cl");
    *reinterpret_cast<int32_t*>(&rax31) = *reinterpret_cast<int16_t*>(&rax26);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
    __asm__("btr r13d, 0xeb");
    *reinterpret_cast<uint32_t*>(&r14_32) = *reinterpret_cast<uint32_t*>(&r14_19) >> *reinterpret_cast<signed char*>(&rcx22);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_32) + 4) = 0;
    __asm__("rol cl, 0xfe");
    if (rdi10 == r14_32) {
        r14_32 = rdi10;
    }
    tmp8_33 = *reinterpret_cast<signed char*>(&r12_28);
    *reinterpret_cast<signed char*>(&r12_28) = *reinterpret_cast<signed char*>(&r14_32);
    *reinterpret_cast<signed char*>(&r14_32) = tmp8_33;
    __asm__("rol rdi, cl");
    *reinterpret_cast<uint16_t*>(&rcx22) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx22) & *reinterpret_cast<uint16_t*>(&rbx24));
    if (0) {
        *reinterpret_cast<int32_t*>(&rbx24) = *reinterpret_cast<int32_t*>(&rbx24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx24) + 4) = 0;
    }
    r14_34 = r14_32 + 0x2229f6e1;
    if (r14_32 < 0xffffffffddd6091f) {
        *reinterpret_cast<uint16_t*>(&r14_34) = *reinterpret_cast<uint16_t*>(&r14_34);
    }
    __asm__("shrd rbp, rdx, 0xa0");
    *reinterpret_cast<int32_t*>(&r8_35) = *reinterpret_cast<int16_t*>(&rax31);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = 0;
    __asm__("rcr sil, cl");
    *reinterpret_cast<uint32_t*>(&rsi36) = *reinterpret_cast<uint16_t*>(&r14_34);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = 0;
    return rax31 + rbx24 + rcx22 + rdx30 + 0xaa630000 + rsi36 + *reinterpret_cast<uint16_t*>(&r8_11) + r8_35 + r9_15 + r10_12 + r11_23 + r12_28 + r13_27 + r14_34 - 0xfcd00ffc2c3d6d6 - 0x346f78db66496af8;
}

uint64_t log_size_7_var_008(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rcx8;
    int64_t rbp9;
    int64_t r9_10;
    int64_t r11_11;
    int64_t r15_12;
    uint1_t cf13;
    uint64_t r12_14;
    int64_t rax15;
    uint32_t edx16;
    int64_t rax17;
    uint16_t dx18;
    int64_t r9_19;
    int32_t ecx20;
    unsigned char cl21;
    int64_t r8_22;
    int64_t r9_23;
    int64_t r10_24;
    int64_t r9_25;
    int64_t rbp26;
    int64_t r14_27;
    int64_t r9_28;

    rax7 = 0xc2267d55f00556a9;
    rcx8 = 0xb743108775017735;
    rbp9 = 0xff53bd934e9a25d5;
    r9_10 = 0xe44230e464c05a99;
    r11_11 = 0xb8fc6bb81c6978f3;
    r15_12 = 0x27fe4d9db12214d7;
    __asm__("btc rax, r14");
    __asm__("btc r12w, r13W");
    *reinterpret_cast<signed char*>(&rbp9) = 29;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(82 + cf13);
    __asm__("bts r8, rax");
    *reinterpret_cast<uint16_t*>(&r15_12) = 0x415;
    *reinterpret_cast<unsigned char*>(&rcx8) = 0xd5;
    if (1) {
        *reinterpret_cast<uint16_t*>(&r9_10) = 0x415;
    }
    __asm__("rcr r15, 1");
    *reinterpret_cast<unsigned char*>(&r9_10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_10) - reinterpret_cast<unsigned char>(71 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_10) < 72)));
    if (1) {
        *reinterpret_cast<uint16_t*>(&r15_12) = 0x40c0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcl ecx, 1");
    __asm__("shrd eax, ebx, cl");
    r12_14 = 0xf3;
    __asm__("shld r12w, r12w, 0x1");
    __asm__("xadd r13, r9");
    __asm__("bsr rax, rdi");
    *reinterpret_cast<uint16_t*>(&r9_10) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_10) >> 0xd5);
    rax15 = (rax7 + 1) * r9_10;
    edx16 = *reinterpret_cast<uint32_t*>(&rax15) % 0xfba58c1d;
    *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<uint32_t*>(&rax15) / 0xfba58c1d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    __asm__("xadd bh, dh");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax17) + 1) = 0;
    __asm__("btc r12, r11");
    dx18 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edx16) + *reinterpret_cast<uint16_t*>(&r9_10)) + 1);
    __asm__("shld r9d, r15d, 0xc0");
    __asm__("bts r11, rsi");
    *reinterpret_cast<unsigned char*>(&r11_11) = 82;
    if (1) {
        rbp9 = rcx8;
    }
    r9_19 = r9_10 - rbp9;
    __asm__("rcr r9b, 0x6a");
    __asm__("shrd r11w, r12w, 0x1");
    __asm__("shld r10w, si, cl");
    __asm__("btr ax, bx");
    __asm__("rcr r9d, 1");
    ecx20 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx18) + 1);
    *reinterpret_cast<unsigned char*>(&r15_12) = 0;
    cl21 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx20) >> 1);
    __asm__("rol r15, 1");
    __asm__("bsr rbx, rax");
    __asm__("bsf rcx, r15");
    __asm__("btc bp, cx");
    *reinterpret_cast<int32_t*>(&r8_22) = 0xd95dd9fc >> cl21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_23) = *reinterpret_cast<uint32_t*>(&r9_19) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = 0;
    __asm__("shrd di, di, cl");
    *reinterpret_cast<uint32_t*>(&r10_24) = 0xf3 + *reinterpret_cast<int32_t*>(&r8_22) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r9_23) = 0x8bd;
    __asm__("rcl bpl, 1");
    __asm__("rcl r15w, cl");
    r9_25 = -r9_23;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r11_11) = *reinterpret_cast<int32_t*>(&r8_22);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&r9_25) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_25) - 0x3c14);
    __asm__("btr edi, 0xd3");
    __asm__("btc cx, 0x1b");
    __asm__("ror r13b, 0x69");
    *reinterpret_cast<uint32_t*>(&rbp26) = *reinterpret_cast<uint32_t*>(&rbp9) >> reinterpret_cast<unsigned char>(cl21 & 15) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp26) + 4) = 0;
    __asm__("btr esi, 0xa0");
    __asm__("shrd dx, dx, 0x4");
    *reinterpret_cast<signed char*>(&r10_24) = 28;
    __asm__("rol rdx, cl");
    __asm__("bsr rdx, r11");
    *reinterpret_cast<int32_t*>(&r14_27) = 0x2e01efa7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
    __asm__("btr rbx, 0x51");
    __asm__("rcl r14d, 0xcb");
    __asm__("ror edx, 0x40");
    *reinterpret_cast<unsigned char*>(&r12_14) = reinterpret_cast<unsigned char>(0xf3 | *reinterpret_cast<unsigned char*>(&r11_11));
    __asm__("rol dl, cl");
    *reinterpret_cast<signed char*>(&rax17) = reinterpret_cast<signed char>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax17) >> 87)));
    *reinterpret_cast<uint32_t*>(&r9_28) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_25) - 0x126bc6be);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r14_27) = 0xde0e;
    if (0) {
        *reinterpret_cast<int16_t*>(&r14_27) = 0xa00;
    }
    __asm__("lahf ");
    return rax17 * r9_28 + 0xb0210000 + 0x58c6 + __intrinsic() + rbp26 + 0xfba58c1c + 0x68d9c5ed94da4901 + r8_22 + r9_28 + r10_24 + r11_11 + (r12_14 - 0x7b04140b + __intrinsic()) - 0x540ee728bb742180 + r14_27 + r15_12 + 0x47c9e938bb3e47e1;
}

uint64_t log_size_7_var_009(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    uint64_t rdx8;
    int64_t rsi9;
    int64_t r12_10;
    uint64_t rcx11;
    int32_t r8d12;
    uint64_t rdx13;
    uint64_t r13_14;
    int64_t rax15;
    int64_t r13_16;
    int32_t eax17;
    int64_t r15_18;
    uint32_t r9d19;
    uint64_t rbp20;
    int64_t rdi21;
    uint1_t cf22;
    int64_t rbx23;
    int64_t rdx24;
    int64_t r9_25;
    int64_t rbp26;
    int64_t r8_27;
    int64_t rax28;
    int64_t rsi29;
    int64_t rax30;
    int64_t rcx31;
    uint64_t rdx32;
    int64_t rbp33;
    int64_t rdx34;

    rax7 = 0x1491290a6add770e;
    rdx8 = 0x351d78357282eaa2;
    rsi9 = 0xca69d0d612d6986d;
    r12_10 = 0xeeb71e8ecede4c0d;
    *reinterpret_cast<int16_t*>(&rdx8) = __intrinsic();
    if (0) {
        rdx8 = 0x54a12d7178cd4a77;
    }
    __asm__("rcr r13, 1");
    __asm__("rol r13d, 0x64");
    __asm__("rol rbx, 1");
    *reinterpret_cast<uint32_t*>(&rcx11) = 0x240a1699 - (0x1eafc6fa + reinterpret_cast<uint1_t>(0x240a1699 < 0x1eafc6fa + reinterpret_cast<uint1_t>(rdx8 < 0x5ff15e17ec286182)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rcx11) >> 1);
    r8d12 = 0;
    *reinterpret_cast<unsigned char*>(&rdx8) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx8) - 82)));
    __asm__("xadd cl, r9b");
    __asm__("rcl si, 0x28");
    rdx13 = rdx8 - 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx11) + 1) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(0x2700 / reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx11) + 1))));
    r13_14 = 0xf334679385011dae >> 89;
    rax15 = *reinterpret_cast<int32_t*>(&rax7);
    __asm__("shrd r9w, dx, 0x2");
    *reinterpret_cast<int16_t*>(&r13_14) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_14) - 0x2918);
    *reinterpret_cast<uint32_t*>(&r13_16) = *reinterpret_cast<uint32_t*>(&r13_14) >> 24 | *reinterpret_cast<uint32_t*>(&r13_14) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r13_14) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r13_14) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = 0;
    __asm__("rcr r15d, 1");
    *reinterpret_cast<signed char*>(&rsi9) = 0x6d;
    *reinterpret_cast<int16_t*>(&eax17) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax15) * 0x6983);
    *reinterpret_cast<uint16_t*>(&rdx13) = __intrinsic();
    __asm__("rcr eax, 1");
    r15_18 = 0x3af9743c4d1c4473;
    __asm__("rol r8d, cl");
    r9d19 = 0xb6974fc4;
    __asm__("ror r12, 1");
    rbp20 = 0x1acf6798 >> *reinterpret_cast<unsigned char*>(&rcx11);
    __asm__("btr r12d, r8d");
    *reinterpret_cast<int32_t*>(&rdi21) = 0x300992c2;
    if (0) {
        eax17 = 0x6688f5e4;
    }
    __asm__("rcl r11w, 1");
    __asm__("xadd dl, ch");
    if (__intrinsic()) {
        rbp20 = rdx13;
    }
    *reinterpret_cast<uint16_t*>(&rdx13) = reinterpret_cast<uint16_t>(~*reinterpret_cast<uint16_t*>(&rdx13));
    cf22 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_16) < 0xc51f);
    *reinterpret_cast<uint16_t*>(&r13_16) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_16) - reinterpret_cast<uint16_t>(0x3ae2 - cf22));
    *reinterpret_cast<signed char*>(&rdi21) = --62;
    __asm__("rcr r12w, 1");
    __asm__("bts r15, r8");
    __asm__("rcl r12w, 0x5d");
    *reinterpret_cast<unsigned char*>(&r8d12) = reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_16) == static_cast<uint32_t>(cf22)) - 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r8d12) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r8d12) == 0)) {
        rdx13 = rcx11;
    }
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r15_18) = 0x971e77b4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = 0;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_10) = *reinterpret_cast<int16_t*>(&rdi21);
    }
    if (0x986d == *reinterpret_cast<int16_t*>(&eax17)) {
        *reinterpret_cast<int16_t*>(&rsi9) = *reinterpret_cast<int16_t*>(&eax17);
    }
    rbx23 = 0x6688f5e4;
    __asm__("bsr edi, ebp");
    *reinterpret_cast<uint16_t*>(&rdx13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx13) >> 0x77);
    *reinterpret_cast<int32_t*>(&rdx24) = *reinterpret_cast<int32_t*>(&rdx13) - 0x68e1884c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = 0;
    __asm__("ror rbx, 0x3a");
    __asm__("shld r11d, ecx, 0x44");
    *reinterpret_cast<unsigned char*>(&r9d19) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi21) > 0xb7a1c3ab);
    *reinterpret_cast<uint32_t*>(&r9_25) = r9d19 + *reinterpret_cast<int32_t*>(&rbp20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx11) >> 23);
    *reinterpret_cast<int16_t*>(&rdx24) = __intrinsic();
    __asm__("bts r12d, 0xdc");
    rbp26 = *reinterpret_cast<signed char*>(&rsi9);
    *reinterpret_cast<uint32_t*>(&r8_27) = r8d12 - 0x338e2c78 + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = 0;
    rax28 = *reinterpret_cast<int32_t*>(&rbp26);
    __asm__("rcl r9, 1");
    __asm__("rcl r13d, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx24) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx24) + 1) | 0xc5);
    if (1) {
        *reinterpret_cast<int16_t*>(&rax28) = 0xf5e4;
    }
    *reinterpret_cast<int16_t*>(&r8_27) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_27) - 1);
    __asm__("ror r8b, 0xb1");
    *reinterpret_cast<uint16_t*>(&r9_25) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_25) - reinterpret_cast<uint16_t>(0x6c53 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_25) < 0x93ae)));
    *reinterpret_cast<uint32_t*>(&rsi29) = *reinterpret_cast<uint32_t*>(&rsi9) | 0x249d9e04;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
    __asm__("xadd r10d, eax");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&r13_16);
    }
    rax30 = 0xffffffffffffff82;
    *reinterpret_cast<uint32_t*>(&rcx31) = *reinterpret_cast<uint32_t*>(&rcx11) >> *reinterpret_cast<unsigned char*>(&rcx11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
    __asm__("rol rbx, 0x8a");
    __asm__("xadd r8, r13");
    __asm__("rcr rdi, 1");
    __asm__("shrd r14, rbp, cl");
    rdx32 = rdx24 + r8_27 + 1 + 0x63c6f5f3;
    __asm__("rcr r13W, cl");
    *reinterpret_cast<signed char*>(&rbx23) = *reinterpret_cast<signed char*>(&rcx31);
    *reinterpret_cast<int16_t*>(&rax30) = reinterpret_cast<int16_t>(reinterpret_cast<signed char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic()))) * *reinterpret_cast<signed char*>(&r13_16));
    *reinterpret_cast<unsigned char*>(&r12_10) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(0x5ff15e17ec286182) > reinterpret_cast<int64_t>(0x6cfa7ee4 + static_cast<uint64_t>(__intrinsic())));
    __asm__("bsf r10w, r9w");
    *reinterpret_cast<uint32_t*>(&rbp33) = *reinterpret_cast<int32_t*>(&rbp26) + *reinterpret_cast<uint32_t*>(&rax28) & 0x362bca75 & 0xa5296697;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = 0;
    __asm__("ror r15, cl");
    *reinterpret_cast<int32_t*>(&rdx34) = *reinterpret_cast<int32_t*>(&rdx32) >> 33;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = 0;
    return rax30 + rbx23 + (rcx31 + 0x518e6e21) + rdx34 + rbp33 + rsi29 + (r8_27 - 0x5d4e5c6299770a1c) + r9_25 + (0x5ff15e17ec286182 - (0x6cfa7ee4 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0x5ff15e17ec286182 < 0x6cfa7ee4 + static_cast<uint64_t>(__intrinsic()))))) + 0x12d493ad + r12_10 + r13_16 - 0x5d4e5c6299770a1c + r15_18 - 0x77b6e750064b0e70;
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

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

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

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rax7;
    uint64_t rax8;
    uint64_t rax9;
    uint64_t rax10;
    uint64_t rax11;
    uint64_t rax12;
    uint64_t rax13;
    uint64_t rax14;
    uint64_t rax15;
    uint64_t rax16;

    rax7 = log_size_7_var_000(rdi, rsi, rdx, rcx, r8, r9);
    rax8 = log_size_7_var_001(rdi, rsi, rdx, rcx, r8, r9);
    rax9 = log_size_7_var_002(rdi, rsi, rdx, rcx, r8, r9);
    rax10 = log_size_7_var_003(rdi, rsi, rdx, rcx, r8, r9);
    rax11 = log_size_7_var_004(rdi, rsi, rdx, rcx, r8, r9);
    rax12 = log_size_7_var_005(rdi, rsi, rdx, rcx, r8, r9);
    rax13 = log_size_7_var_006(rdi, rsi, rdx, rcx, r8, r9);
    rax14 = log_size_7_var_007(rdi, rsi, rdx, rcx, r8, r9);
    rax15 = log_size_7_var_008(rdi, rsi, rdx, rcx, r8, r9);
    rax16 = log_size_7_var_009(rdi, rsi, rdx, rcx, r8, r9);
    if (rax7 + rax8 + rax9 + rax10 + rax11 + rax12 + rax13 + rax14 + rax15 + rax16) {
        fun_401030("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 31, "main");
    } else {
        return 0;
    }
}
