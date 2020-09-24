
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x40b028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t log_size_4_var_000(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;

    __asm__("rol dh, cl");
    __asm__("rol r13, cl");
    __asm__("rcr r11w, 1");
    __asm__("rol dl, 0xa4");
    *reinterpret_cast<int32_t*>(&rdx7) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    __asm__("btc rsi, 0x86");
    return 0x5c29d860799081f4 - rdx7 - 0x1d8e55cf8b0a304e + 0x12109eb232cf2c0 - 0x74729c8761e3354e - 0x674f35ba9629248b - 0x5274852779c1ff2e - 0x37005acdc6b8ae0c + 0x49453870 + 0x58f081277bdecb7d - 0x701d70a4dd5f614c - 0x38f6af99662f6f98 + 0x377a71527c88a9af + 0x46cf562d52352dff;
}

uint64_t log_size_4_var_003(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rdx7;
    int64_t rsi8;
    uint64_t r8_9;
    uint64_t tmp64_10;

    rdx7 = 0x66a6faf371229ef1;
    rsi8 = 0x26206880ec95cb32;
    r8_9 = 0xcdac7ab508bf279;
    if (0) {
        *reinterpret_cast<int32_t*>(&rdx7) = 0xec95cb32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi8) = 0x71229ef1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
    }
    if (0) {
        tmp64_10 = rdx7;
        rdx7 = 0xcdac7ab508bf279;
        r8_9 = tmp64_10;
    }
    __asm__("ror ebx, 1");
    __asm__("rcr r8, 0x92");
    __asm__("ror bx, cl");
    __asm__("rcl esi, 0x74");
    __asm__("shld r15d, r11d, 0xe8");
    __asm__("bts r11d, 0x50");
    return 0x2e5458ce07f1c76 + (rdx7 - 0x6f8c3560c77dce1c) - 0x3791a378854bf05e + rsi8 + 0x14565b426d5b6ba5 + (r8_9 - (0x5299ba34 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_9 < 0x5299ba34)))) - 0x2bb1460fceaa888d + 0x2f3287b33896b909 + 0x36d866c2ce4e7703 + 0x1b1edf20a501bbbf - 0x6f8c3560c77dce1c + 0x3180540668aef9ce - 0x6407b1ddd537a10 + 0x167d5265a06a54f2;
}

int64_t log_size_4_var_004(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rbp8;
    int64_t r11_9;
    int64_t r14_10;
    int64_t rdx11;
    int64_t rax12;

    rbx7 = 0x945f5179fe7f3cae;
    rbp8 = 0x3c666ebfc4723fa6;
    r11_9 = 0x70340977adc93d74;
    r14_10 = 0x97fd74a9ffcc7031;
    __asm__("rcr r11w, cl");
    rdx11 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&rdx11) = 0x7800;
    *reinterpret_cast<uint16_t*>(&rax12) = 0;
    *reinterpret_cast<signed char*>(&rbx7) = reinterpret_cast<signed char>(82 - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax12) + 1));
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rbp8) = 0xcf63e307;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0;
    }
    if (0) {
        *reinterpret_cast<int32_t*>(&r11_9) = 0xffcc7031;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r14_10) = 0xadc93d74;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = 0;
    }
    __asm__("rcr bx, 1");
    __asm__("rcr si, 0x2c");
    __asm__("shrd rdx, r10, cl");
    return 0x461cade55da70000 + rbx7 - 0x4eae3beb309c1cf9 + rdx11 + rbp8 + 0xac87afa1ac8c3e8 - 0x769477ea038ae6a2 + 0x80cd489d + 0xca0f1f6d16632c + 0x5bf124f3afb5fcb7 + r11_9 - 0x64bd420cbaee5001 - 0x120756c8b2073520 + r14_10 - 0x4d150c6294998295 + 0x15a2047b1986c11a;
}

int64_t log_size_4_var_005(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rdx8;
    int64_t rbp9;
    int64_t r9_10;
    int64_t r11_11;
    uint16_t ax12;

    rax7 = 0x1bcb2823621e896b;
    rdx8 = 0x336bf4bdd06abb3c;
    rbp9 = 0x91842cee77a8ced7;
    r9_10 = 0xace56a108ddb8878;
    r11_11 = 0x849a0f05cddb7ad5;
    ax12 = 0xbb4;
    __asm__("rcl r14d, 1");
    __asm__("shld bp, r13W, 0x4");
    if (0) {
        *reinterpret_cast<signed char*>(&r9_10) = -43;
        *reinterpret_cast<signed char*>(&r11_11) = 0x78;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax12) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax12) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax12) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax12) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax12) + 1))))));
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(ax12 - 0xc88d);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx8) + 1) = reinterpret_cast<uint1_t>(ax12 > 0xc88d);
    if (reinterpret_cast<int16_t>(ax12) < reinterpret_cast<int16_t>(0xc88d)) {
        rbp9 = rdx8;
    }
    return rax7 + 0x421c487755aa8117 - 0x1c5b7db631b42543 + rdx8 + rbp9 + 0x3611d8ba87066594 + 0xd1506b5e + 0x493a3e70f4a1e8f7 + r9_10 - 0x1b0bd716db8d2f09 + r11_11 - 0x30199a0daf95113c + 0x15e4a39a6b8a1914 - 0x1da81e94a12d7d9e + 0x513ee05597e6321c + 0x2cba4860b20833d4;
}

uint64_t log_size_4_var_006(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    uint64_t r12_8;
    int64_t rdx9;

    r14_7 = 0x3ea2ad9e364ae76b;
    r12_8 = 0xdd480e5cc61e5cc4 >> -41;
    __asm__("ror dil, 0x5d");
    *reinterpret_cast<int16_t*>(&r12_8) = -*reinterpret_cast<int16_t*>(&r12_8);
    __asm__("shld rbp, rbx, 0x1");
    __asm__("rcl r9w, cl");
    *reinterpret_cast<uint16_t*>(&r14_7) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0xe76b) >> 82) >> 1);
    *reinterpret_cast<int32_t*>(&rdx9) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    return 0x8b71c81d21d550f - rdx9 + 0x47b880f18e297524 - 0x4193c53edbd2eb18 + 0x6bb4ed73bf7484ae - 0x6be14531793d7300 + 0x47a1048da0bc7b08 + 0x5798ee73df24b93f + 0x4a4b2cf046644e44 + r12_8 + 0x7fa497d8c23b0008 + r14_7 - 0x46fe71173359668c + 0x5a38418e31e654b3;
}

int64_t log_size_4_var_008(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rcr r8, 1");
    __asm__("shrd esi, esi, 0xca");
    return 0x88f103f3a5fc5944;
}

int64_t log_size_4_var_013(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r15_7;

    r15_7 = 0xb6b7bc0f70e160cb;
    *reinterpret_cast<uint16_t*>(&r15_7) = reinterpret_cast<uint16_t>(0x60cb >> -43);
    __asm__("btc r10, r13");
    __asm__("rcl r13d, 1");
    __asm__("ror dx, 0x2e");
    __asm__("xadd r9d, ebp");
    __asm__("rol r8w, cl");
    __asm__("rol r12d, cl");
    return 0x58f6a78991f537b8 - r15_7 - 0x3503e0a32255ada7;
}

int64_t log_size_4_var_015(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t r14_8;
    int64_t rax9;

    rbx7 = 0xa8119e2dcbaebe00;
    r14_8 = 0x6b0c9cce24b1238d;
    *reinterpret_cast<unsigned char*>(&rbx7) = reinterpret_cast<unsigned char>(0xa8 + __intrinsic());
    *reinterpret_cast<int32_t*>(&rax9) = -0x4227fa25;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    __asm__("rcr r12, 1");
    *reinterpret_cast<uint16_t*>(&r14_8) = reinterpret_cast<uint16_t>(0x238d - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx7) + reinterpret_cast<uint1_t>(0x238d < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbx7))))));
    if (1) {
    }
    __asm__("rcl r10w, 1");
    return rax9 + rbx7 - 0x1ffb46f394fc327e + 0xcbc398cf + 0x6d28584d62775f2 + 0x6b8d7efe199c1f0a - 0x31cedce8e0a884b + 0x52768ea7e6033c79 - 0x7d3a30eb45ff3168 + 0x663e5f55b6206001 - 0x5e181df765bb37e0 + 0x2d4ce3a1b71da1a8 - 0x7f7880a43f4cf18b + r14_8 - 0x5900e65659854424 - 0x643414047226ffe8;
}

int64_t log_size_4_var_016(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t rdi8;

    rdx7 = 0x4bd4ba375ed62d9e;
    rdi8 = 0x5b07500ab046f3d8;
    __asm__("rcl rax, 1");
    __asm__("rcl r8, 0x1d");
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    __asm__("rcr r11w, 1");
    __asm__("btc bx, 0x6a");
    __asm__("btc eax, esi");
    *reinterpret_cast<int16_t*>(&rdi8) = -0xf3d8;
    __asm__("rcr ebx, 1");
    __asm__("ror dx, cl");
    __asm__("bsf rdi, rbp");
    return 0x56e2681fad9d1e38 + rdx7 - 0x22e502d3916fc8ef - 0x473d415d4da5a0ad + rdi8 - 0x17933664ce354a24 - 0x958159b1c780a0a + 0x221cb29780a8a971 - 0x578f65d52fe26f8e + 0x66421f8355fb882a - 0x28b15b5e184828dd - 0x2d31ee0762fe1ca1 + 0x67dcb14f9ea958e3 + 0x1e5e8b5e1ca4998e;
}

uint64_t log_size_4_var_018(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rcl r11d, 1");
    __asm__("xadd dl, bl");
    __asm__("rcr r9b, cl");
    __asm__("shrd r8w, r14w, cl");
    __asm__("bts r9w, 0x1b");
    return 0x186882595e860f14 + (0x8cf65aa608521ac4 >> 91) + 0x555d7cabeac3ff0b - 0x27bddb9c31353e16 - 0x7e659a246b62b93e + 0x341d06f54e502c8e + 0x458fad698e4d7ce8 - 0x352b86ac475abc78 - 0x4859191e317c1f39 - 0x277136287c7bfbab + 0x4a7dc72773082c8e - 0x3eca1b4fbf7f44b3 + 0x1d2a043 - 0x41d66eab9282afb2 + 0x754c97bc - 0x1bb8ddc83df5d47c;
}

int64_t log_size_4_var_020(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r13_7;

    r13_7 = 0x455c0eddda225002;
    __asm__("shrd r11, r9, 0xed");
    __asm__("rol r9d, 1");
    __asm__("rcl r12b, cl");
    __asm__("rol r13b, cl");
    __asm__("xadd r15b, dl");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r13_7) = 0xf125;
    }
    __asm__("bsf esi, r15d");
    return 0xa65e799862a8856 - r13_7 - 0xa58a67b17c66e22 + 0x6bf340c46c16f125 + 0x46233f838bdfba6d;
}

int64_t log_size_4_var_021(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r13_8;
    int64_t r12_9;

    rdx7 = 0xcd61b217c8be0ce4;
    r13_8 = 0x6855f545d93c8db4;
    __asm__("shld r8, rcx, 0x49");
    *reinterpret_cast<int32_t*>(&r12_9) = 0x6f9c5136;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = 0;
    __asm__("xadd r10b, r10b");
    __asm__("cwd ");
    *reinterpret_cast<int16_t*>(&r12_9) = reinterpret_cast<int16_t>(0x5136 >> 87);
    __asm__("shrd di, r8w, 0x8");
    *reinterpret_cast<signed char*>(&r12_9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12_9) - 7);
    __asm__("bsf eax, r11d");
    __asm__("rol r13W, 0x7b");
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    *reinterpret_cast<int16_t*>(&r13_8) = reinterpret_cast<int16_t>(0x8db4 >> 87);
    return 0x50b98aaad2f61497 + rdx7 - 0x74f6bdddb3d7f59b - 0x2a8b1232eb2c5ac3 + 65 - 0x476fb893acda0421 - 0x5e25ba831c3370c8 + 0x6a09a2f265bfacd5 + 0x5325a3be27575041 + r12_9 + r13_8 + 0x22848 - 0x295beb5f4de65a00 + 0x38161e6a7620471f;
}

int64_t log_size_4_var_023(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t rsi8;
    int64_t r10_9;

    rdx7 = 0x681890b5d0efbcc0;
    rsi8 = 0x4eb1ada1d7d46272;
    r10_9 = 0xb993fc5e2255b375;
    __asm__("btc rdi, 0xfa");
    *reinterpret_cast<int16_t*>(&rdx7) = -0xbcc0;
    __asm__("rcr r9b, cl");
    *reinterpret_cast<unsigned char*>(&r10_9) = reinterpret_cast<unsigned char>(0x75 >> 19);
    __asm__("bts esi, r10d");
    __asm__("ror ebp, 0x0");
    __asm__("btc r14, r14");
    __asm__("xadd rdx, rbp");
    if (0) {
        rsi8 = 0x5ee76928138da4c1;
    }
    return 0x4649b0a6ea37033b - rdx7 + 0x35dea1395cecf601 + rsi8 + 0xd8f05b09226c828 + 0xffffffec + 0x6ae71508650eaa1b + r10_9 + 0x5bd5b85cb588c9d3 + 0x59cbd35ad32b1277 - 0x38a56ba9a881b4a1 - 0x649a23a570b45595 + 0x1702bfcda + 0x2fac83b81a622fb8;
}

int64_t log_size_4_var_024(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdi7;

    rdi7 = 0x26a5570b4002cb86;
    __asm__("shrd r11w, bx, 0x3");
    __asm__("shrd rsi, rbx, cl");
    __asm__("btc bp, 0xc1");
    __asm__("bts r12w, 0xa5");
    __asm__("rcl ebp, 1");
    __asm__("xadd r9w, r10w");
    if (!__intrinsic()) {
        rdi7 = 0xd51ed084c517e1cd;
    }
    __asm__("shrd rbp, r8, 0x1");
    __asm__("rcl ebp, 1");
    return 0x264376850d679388 - rdi7 - 0x2ae12f7b3ae81e33 - 0x7885032a92c65322 + 0x34058919243accff + 0x179202e4e0b51353 - 0x1fb6883d8e8dd521 + 0x7a3fd66373589275 - 0x7bc6844840edce5f + 0x2ab97612ef133e13 - 0x5f2277f44e06c51c;
}

int64_t log_size_4_var_025(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t rsi8;

    __asm__("rol ax, cl");
    rdx7 = __intrinsic();
    __asm__("rcr edi, 0x31");
    __asm__("shrd r10, r15, 0xf6");
    __asm__("rol cl, 1");
    __asm__("rol di, 1");
    __asm__("rol r12b, 0x67");
    *reinterpret_cast<int32_t*>(&rsi8) = *reinterpret_cast<int32_t*>(&rdx7) + 0xa1606c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rdx7) = 0xb036;
    __asm__("rol r13d, 1");
    return 0x6645673c4b290651 + rdx7 + 0x4a7ec2d6d48040b + rsi8 - 0x43878f0709de804f - 0x44a48e08f1c0154a + 0x2f0a77d8845bdb25 + 0x37a00a9dd2d4c475 + 0x437a87054588d240 - 0x687fa3f7e8a699c1 + 0x44edb6138a18fdda - 0x7819cd3c563b5300 - 0x50d18a396e399b6 - 0x6336252ab2093165;
}

int64_t log_size_4_var_027(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r8_7;

    r8_7 = 0x4a579e3d78bac67a;
    __asm__("rol r14b, 1");
    __asm__("btr rbx, 0xb4");
    __asm__("shrd r8, rbx, 0x7d");
    *reinterpret_cast<int16_t*>(&r8_7) = 0xc04b;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int32_t*>(&r8_7) = 0xff198df;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0;
    }
    __asm__("rol r8, 0xe0");
    return 0x58dce4d9e7d5535f + __intrinsic() + 0x1645444bcf87447 + 0x7e1e8954bc935e8 + 0x4ac31293ea56c303 + r8_7 - 0x6b9207d1e96241a4 - 0x2ec137c7d2c727d3 - 0x1b7e99c2f00e6721 - 0x1c6c024fcd2fb901 + 0x45168537f5e3efad + 0x5c660b1709a2bfa8 + 0x64000100 + 0x173f406d383d546;
}

int64_t log_size_4_var_028(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r8_8;
    int64_t r13_9;

    rsi7 = 0xab06b8a8f4f3def;
    r8_8 = 0x984ba942b108e772;
    r13_9 = 0x9e42e44505922dbb;
    __asm__("btc r10, r9");
    __asm__("btr r15w, r8w");
    __asm__("rol ch, 1");
    if (0) {
        *reinterpret_cast<int16_t*>(&r13_9) = 0x8a9d;
    }
    __asm__("rol r15w, cl");
    if (0) {
        rsi7 = 0x984ba942b108e772;
        r8_8 = 0xab06b8a8f4f3def;
    }
    *reinterpret_cast<int16_t*>(&r13_9) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_9) - 1);
    __asm__("shrd rax, r10, 0x1");
    __asm__("ror r14d, cl");
    __asm__("xadd bl, dl");
    __asm__("btr r14w, di");
    return 0x42a9eeaad1f4f1c5 - rsi7 - 0x5f6c1de0a04a0f23 + r8_8 + 0x1f2159b8d17df796 + 0x5f15 + 0x5e4dc2f2ec631015 + 0x7515e3a8b7e8a9d + r13_9 + 0x73432f6e65281755 + 0x7a0d0b4e8b5cfb9a - 0x5b38e82887298c27;
}

int64_t log_size_4_var_029(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t r9_8;
    int64_t r14_9;

    rbx7 = 0xecce1a40dd3c7065;
    r9_8 = 0xe227f808b7bfc6d7;
    r14_9 = 0x6d953cd9d390eb76;
    *reinterpret_cast<unsigned char*>(&r14_9) = reinterpret_cast<unsigned char>(0x76 >> 85);
    if (0) {
        r9_8 = 0x5750939b34811b4a;
    }
    if (1) {
        r9_8 = 0xdfffef67;
    }
    __asm__("rcr bl, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0xba2de5e9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    }
    return 0x93a380f7dd7a0f0 - rbx7 - 0x13c84b91494d20ba + __intrinsic() + 0x61347a57a2d11b1e + 0x4a4fd001 + 0x4d0c4b9e970aa072 + 0x3e9d56c514bea2fe + r9_8 + 0x4a2171f41a8ea5d0 + 0x151801ded46de961 - 0x20000099 + 0x63e5218b25f46d5b + r14_9 + 0x6d5b + 0x838426286ab482a;
}

int64_t log_size_4_var_030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rbx8;
    int64_t rcx9;
    int64_t r8_10;
    int64_t rdx11;

    rax7 = 0x4b8e8ae9978d0879;
    rbx8 = 0xf1aa7bb4440d7e1e;
    rcx9 = 0x7371ad64b4070145;
    r8_10 = 0x82124834e0482470;
    if (1) {
        *reinterpret_cast<int16_t*>(&r8_10) = 0xb907;
    }
    __asm__("rcl rdx, 0x81");
    __asm__("btc dx, ax");
    rdx11 = 0x145;
    *reinterpret_cast<int16_t*>(&rbx8) = 0x3f0f;
    __asm__("shld dx, r14w, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx11) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(69 + reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(69 + __intrinsic())))));
    __asm__("rcr bpl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx9) + 1) = reinterpret_cast<unsigned char>(0x73 >> 76);
    if (0) {
        *reinterpret_cast<signed char*>(&rbx8) = 0x79;
        *reinterpret_cast<signed char*>(&rax7) = 15;
    }
    return rax7 + rbx8 + rcx9 + rdx11 - 0x1f0cd9fdc945f600 - 0x13e6466bec2a9213 + 0x54d0aeb461a075a8 + r8_10 + 0xddf82b47 - 0x789033b12207d4ba + 0x36187bc9ef2f26e1 - 0x75ad8b90f9e17761 + 0x5c2369dbc32ed474 + 0x7b4ba5655e3fa3b7 + 0xd954901c97ab907 + 0x7e8660b247be1d37;
}

uint64_t log_size_4_var_031(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r10_7;
    uint64_t rsi8;
    int64_t rdi9;
    uint64_t r9_10;

    r10_7 = 0x99692a63e148b215;
    rsi8 = 0x6004910080413ac0;
    *reinterpret_cast<unsigned char*>(&r10_7) = reinterpret_cast<unsigned char>(21 >> -58);
    *reinterpret_cast<int32_t*>(&rdi9) = -0x81e23a60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = 0;
    __asm__("rcr di, 1");
    __asm__("shld r12, r12, 0x1");
    r9_10 = 0x6a5985ca61100b01;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r9_10) = 0x1b318de4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_10) + 4) = 0;
    }
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rsi8) = 0x80637af2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
    }
    return 0x63e3c4fe3decd6e4 - rsi8 + rdi9 + 0x4566cf451e5dd6ac + r9_10 + r10_7 + 0x7bc33ee186548a24 + 0x2a0f2cfb75985695 - 0x37a00fca6f4b6361 + 0x7eae912880637af2 + 0x78e39b40487b5562 - 0xabfea22a663017d;
}

int64_t log_size_4_var_032(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r8_8;
    int64_t r9_9;
    int64_t r12_10;
    int64_t r13_11;

    rsi7 = 0xe2633181103fc89f;
    r8_8 = 0xd1608bd79b435083;
    r9_9 = 0x99db2c7bda0cfe60;
    r12_10 = 0xb09bd2a604ea316e;
    r13_11 = 0xb8cc019d66aac364;
    __asm__("bts ax, ax");
    __asm__("shld rbx, rcx, 0x1");
    *reinterpret_cast<unsigned char*>(&r12_10) = reinterpret_cast<unsigned char>(0x6e >> 37);
    __asm__("ror r13W, 1");
    *reinterpret_cast<uint16_t*>(&r9_9) = reinterpret_cast<uint16_t>(0xfe60 - reinterpret_cast<uint16_t>(0x49cb - reinterpret_cast<uint1_t>(0xfe60 < reinterpret_cast<uint16_t>(0x49cb - __intrinsic()))));
    __asm__("rcr r9w, cl");
    __asm__("rol r13, cl");
    *reinterpret_cast<unsigned char*>(&rsi7) = reinterpret_cast<unsigned char>(0x9f >> 18);
    __asm__("btr r8d, 0x9b");
    __asm__("shld r8d, ecx, cl");
    *reinterpret_cast<int16_t*>(&r13_11) = -0xc364;
    if (__intrinsic() != __intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_8) = 0x7011;
    }
    return 0x26767ca26a4c096f + rsi7 - 0x57b252f95c19f2a8 + r8_8 + r9_9 - 0x126088f7ae21f787 + 0x3edc77a681e91cf1 + r12_10 + r13_11 - 0x8ccf28e00649c94 - 0x1f46fbcba904eee2 + 0x4abb88e20b36e1c6;
}

int64_t log_size_4_var_033(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rax8;
    int64_t rax9;
    int64_t rdx10;

    rax7 = 0x31b97982;
    __asm__("btc r9d, 0x7a");
    __asm__("btr r12, 0xe7");
    __asm__("btr r10d, r13d");
    *reinterpret_cast<signed char*>(&rax7) = reinterpret_cast<signed char>(0x82 >> 15);
    rax8 = rax7 * 0x5c7fecf6c1bde92b;
    __asm__("rcl r13W, 1");
    *reinterpret_cast<int32_t*>(&rax9) = *reinterpret_cast<int32_t*>(&rax8) * 0x33db0cac;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx10) = __intrinsic() - 0x1e30fbf1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
    return rax9 + 82 - 0x7000b7821e30fbf1 + rdx10 - 0x364465fccd3180ae - 0x77bcc0f64288a2e9 - 0x25c4168709a4491a - 0x38f523a78fe52bd6 + 0x5c7fecf6c1bde92b + 0x5c7fecf6c1bde92b + 0x184a513e318a9a2 - 0x7ed6558bee418fe0 - 0x54fb2358cc24f354 + 0x2f3f11ddf69d673f - 0x69bf206c9e5d4a90 + 0x2d080e0aa5eea41a;
}

int64_t log_size_4_var_035(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t r8_8;

    rcx7 = 0x7f4204375dc82050;
    __asm__("btr bp, r15w");
    __asm__("rcl r8b, 1");
    __asm__("btr r13, r15");
    __asm__("rcl si, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = 0x7f;
    *reinterpret_cast<unsigned char*>(&rcx7) = -80;
    *reinterpret_cast<uint32_t*>(&r8_8) = *reinterpret_cast<unsigned char*>(&rcx7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    __asm__("xadd r14d, ebx");
    __asm__("rcr r9b, 1");
    return 0x42553ffea6ac856e - rcx7 - 0x7bd3e169f1808a74 - 0x4ca3c4f6daa8994e + 0xfc7b43913d951fa - 0x1d70d7daa24f9978 + r8_8 - 0x1906fe65dfe8967d + 0x3591af9980d529ff + 0x38be6f195084677b + 0x571a36d91d6b79b2 + 0x21ff2c97e6e7b010 - 0x3953b9d6f8faadc5 - 0x28634214c5e8901a - 0x172f34069a629a86;
}

uint64_t log_size_4_var_038(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rbp7;
    int64_t r10_8;

    rbp7 = 0x8e98121ae9eaed76;
    r10_8 = 0xd5450b51e230c204;
    if (0) {
        *reinterpret_cast<int16_t*>(&r10_8) = 0xed76;
        *reinterpret_cast<int16_t*>(&rbp7) = 0xc204;
    }
    __asm__("xadd r8d, ecx");
    __asm__("shrd cx, r15w, 0x1");
    __asm__("rcr r13d, 0x3e");
    __asm__("cwd ");
    __asm__("bts r12, r10");
    __asm__("rcr r15w, 1");
    __asm__("rcl r9b, 1");
    return 0x29a11152852d60a9 - (rbp7 ^ 0x181ec5c62116c513) + 0x4bf7f94bee411fab + 0x1d02a152 + 0x181ec5c62116c513 + 0x36475a05c5b26d16 + r10_8 - 0x52df6a937e4342aa + 0x884dac07 + 0x658ecb4a98ae4f45 + 0x1a51acd400ae9537 - 0xf018f110f26d411 + 0x61a7259f055f17bc;
}

int64_t log_size_4_var_039(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rdx8;
    int64_t r14_9;
    uint1_t cf10;

    rbx7 = 0xba3f2d2e894ddceb;
    rdx8 = 0xb2bb31f178a216ee;
    r14_9 = 0x3ed3d5a2e5115d11;
    if (1) {
        r14_9 = 0x3b8c9a38af606968;
    }
    if (0) {
        rdx8 = 0xdab8852db305e781;
    }
    cf10 = reinterpret_cast<uint1_t>(0xba < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdx8) + __intrinsic()));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) = reinterpret_cast<unsigned char>(0xba - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdx8) + cf10));
    *reinterpret_cast<uint16_t*>(&rdx8) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1);
    *reinterpret_cast<unsigned char*>(&r14_9) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) == static_cast<uint32_t>(cf10));
    __asm__("shrd r9d, r15d, 0xfa");
    __asm__("shrd r14, rax, 0x1");
    __asm__("rcr r10, 1");
    return 0x3ce31c7dccc487f8 - rbx7 + 0x7f38e40998119903 + rdx8 + 0xdae2687d + 0x7dade1eabfa917e3 - 0x57e39545cd26c67b + 0xcc703b08 + 0x3b8c9a38af606968 - 0x25477ad24cfa187f + 0x9e6a587c - 0x1b0e10c76be577e6 - 0xe8dea9bf62a72e8 + r14_9 + 0x73ec19d327dc80e7 - 0x2a8d2176f39c4590;
}

uint64_t log_size_4_var_040(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t r13_8;
    uint1_t cf9;
    uint1_t cf10;
    uint64_t r10_11;

    rax7 = 0x458c67b5167ec4ed;
    r13_8 = 0x19891e270c1b980f;
    __asm__("xadd r13W, bx");
    __asm__("btc r11d, 0xf3");
    __asm__("shld ax, bx, 0x1");
    cf9 = reinterpret_cast<uint1_t>(0xed < reinterpret_cast<unsigned char>(0xed + cf10));
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(0xed - reinterpret_cast<unsigned char>(0xed + cf9));
    if (*reinterpret_cast<signed char*>(&rax7) < reinterpret_cast<signed char>(static_cast<uint32_t>(cf9))) {
        *reinterpret_cast<int16_t*>(&r13_8) = 0x4f70;
    }
    r10_11 = 0x72;
    if (0) {
        *reinterpret_cast<signed char*>(&r10_11) = -29;
    }
    __asm__("rcr r8, 1");
    return rax7 - 0x7ffe65d4a65d808e + 0x3b7cfdd58fba43fb + 0x3f80c85856c5d792 + 0x638a93aaa4ccea6c + 0x18c6d7f03f128169 - 0x68231bffa416e3cb + 0xd792 - 0x248f38a26d75b090 + r10_11 + 0x75571e5af463a076 + 0x78409e9aefcafaef + r13_8 - 0x53943ede5c6b5d1b - 0x2929c82ffd1dc3c2 - 0x453694bbbfbd49bb;
}

int64_t log_size_4_var_041(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r11_8;
    int64_t r14_9;

    rdx7 = 0x762c9e8843a4fb13;
    r11_8 = 0xf32b1b5ec1afd9ac;
    __asm__("shrd esi, ebx, 0x1");
    __asm__("rcl r8b, 1");
    r14_9 = 0xf840a2a4fb287f2b;
    if (__intrinsic()) {
        r11_8 = 0x64db610fe96073f5;
    }
    __asm__("rcl r13d, 0x97");
    *reinterpret_cast<unsigned char*>(&r14_9) = reinterpret_cast<unsigned char>(43 >> -54);
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    __asm__("rcr eax, 1");
    __asm__("rcl r14w, cl");
    return 0x306ad1952f2b15c7 + rdx7 - 0x2a2208c9e43ac913 + 0x64db610fe96073f5 - 0x27c2cc33d9da0559 - 0x3f1674541483569b - 0x294fc2ea8b31404b + 0x1fea8168d7dc204c + r11_8 + 0x7ba62247a533d669 + 0x12d65b4547a44d7 + r14_9 - 0x2654 + 0x5d49f893fb8ea5ff;
}

uint64_t log_size_4_var_042(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r8_8;
    int64_t r9_9;

    rsi7 = 0xf0849474b7ca78;
    r8_8 = 0x14ac695c2a3dd83;
    __asm__("rol rbp, cl");
    *reinterpret_cast<unsigned char*>(&r8_8) = reinterpret_cast<unsigned char>(0x83 >> -84);
    __asm__("rol bpl, 0xd7");
    __asm__("btr r15w, r15w");
    *reinterpret_cast<int32_t*>(&r9_9) = 0xaf7b2896;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = 0;
    __asm__("ror ebx, 0xf");
    __asm__("shrd si, bp, 0x5");
    __asm__("rol r14d, 1");
    *reinterpret_cast<unsigned char*>(&rsi7) = reinterpret_cast<unsigned char>(0x78 - reinterpret_cast<unsigned char>(11 - reinterpret_cast<uint1_t>(0x78 < reinterpret_cast<unsigned char>(11 - __intrinsic()))));
    if (!__intrinsic()) {
        r9_9 = 0xff6287cd7f36bf71;
    }
    return 0x4b247c060c85edae + rsi7 + (0x7b17f23c11c537c4 >> 94) + r8_8 + r9_9 + 0x13daa1c797b8dca7 - 0x569ee2a2771ed634 - 0x66338614c18a9907 - 0x1f2eeb2d414ce8c7 - 0x231b27d6e99f9c6c - 0x9d783280c9408f - 0x52c371fbc7f6d8dd;
}

int64_t log_size_4_var_043(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r11_8;
    int64_t r9_9;
    uint1_t cf10;
    uint1_t cf11;
    int1_t below_or_equal12;

    rsi7 = 0xce31212b1b40ae45;
    r11_8 = 0x8b4578201b07a4d7;
    *reinterpret_cast<int16_t*>(&r11_8) = -0xa4d7;
    *reinterpret_cast<int32_t*>(&r9_9) = 0x5c0b9b09 >> 56;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = 0;
    cf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_8) < 0xeb);
    *reinterpret_cast<unsigned char*>(&r11_8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_8) - 0xeb);
    cf11 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_9) < reinterpret_cast<unsigned char>(0x6f + cf10));
    below_or_equal12 = *reinterpret_cast<unsigned char*>(&r9_9) <= reinterpret_cast<unsigned char>(0x6f + cf11);
    *reinterpret_cast<unsigned char*>(&r9_9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_9) - reinterpret_cast<unsigned char>(0x6f + cf11));
    if (below_or_equal12) {
        *reinterpret_cast<int32_t*>(&rsi7) = 0x3b12d638;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    }
    return 0x1ab629b9adb8cf97 + rsi7 - 0x1228d5faa51b03c5 + 0x347f3b2b27455292 + r9_9 + 0xcd7936c2 + r11_8 - 0x6664e4fd939beda4 - 0x113f9fe4b6b36515 - 0x6281da78b9521106 + 0x5e44101e + 0x11d4584f5623c2b0;
}

uint64_t log_size_4_var_044(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r8_7;
    int64_t r9_8;
    int64_t r15_9;
    uint64_t r12_10;

    r8_7 = 0x8c7ca5364109cb5a;
    r9_8 = 0xdf6d07c7562ae5b2;
    __asm__("btr r14, rbx");
    r15_9 = 0;
    if (__intrinsic()) {
    }
    __asm__("ror r8d, 0x65");
    __asm__("btc r14, rbp");
    r12_10 = 0x6028;
    if (1) {
        *reinterpret_cast<int32_t*>(&r15_9) = 0xb0d4023d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = 0;
    }
    __asm__("bts edx, 0xfa");
    *reinterpret_cast<unsigned char*>(&r8_7) = reinterpret_cast<unsigned char>(90 >> -81);
    if (0) {
        *reinterpret_cast<int32_t*>(&r12_10) = 0x562ae5b2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r9_8) = 0x6028;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    }
    return 0x5e2a17f8062b8cda - r8_7 + r9_8 + 0x38ca33fcaf582dab - 0x5a280fe74f2bfdf0 + r12_10 - 0x2c392c13bb3cf5b4 + 0xccaf8f8 + r15_9 + 0x6631c0756577c3c4;
}

int64_t log_size_4_var_045(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r14_8;
    int64_t r11_9;

    rsi7 = 0xc47f1f2f333b79e2;
    r14_8 = 0xedf2aff3022cca5a;
    __asm__("bsf r14, rcx");
    r11_9 = 0x2400000000000000;
    *reinterpret_cast<signed char*>(&r11_9) = -20;
    if (0) {
        *reinterpret_cast<int32_t*>(&r11_9) = 0x35a603dc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_9) + 4) = 0;
    }
    __asm__("shld dx, ax, cl");
    if (0) {
        *reinterpret_cast<int32_t*>(&r14_8) = 0x333b79e2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_8) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi7) = 0x22cca5a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    }
    return 0x345149039055c83a - rsi7 - 0x4a67d2df9cb594c2 - 0x7b6803c1f03814c0 + 0x1867d03635a603dc + 0x79d6d6ebab4f6849 + r11_9 + 0x7e9348ede18e2dae - 0x4638c4dc0eb97d9 + r14_8 + 0x79a04dcc12d51f2a - 0xe6cb1182a65425f;
}

int64_t log_size_4_var_046(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r9_8;

    rdx7 = 0x6b182a98f47c95d8;
    r9_8 = 0x55f84cc02e5103d6;
    __asm__("xadd dx, si");
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rdx7) = 0x703def9b;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    }
    *reinterpret_cast<signed char*>(&r9_8) = reinterpret_cast<signed char>(-42 >> -92);
    __asm__("shld r9, r10, 0xa8");
    __asm__("bsf r14w, si");
    return 0x404c6c36a5f3b6d7 + rdx7 + 0x52795f9dc2706da5 - 0x39a78fe433c3c81e - 0x55c910e21976812f + 0xfbb50c5fd310438 + r9_8 + 0x59d06c21f2e5eb20 - 0x82bc675867f921f + 0x2b90add71e6ce6dd - 0x464bc4f6e4dd3bea - 0x6eca3fd88b8fb68d - 0x4935e49f8fc2149d + 0x1d021cbd1c56c1bd;
}

uint64_t log_size_4_var_047(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    uint64_t rdx8;

    rbp7 = 0x9bff4552af87a471;
    __asm__("ror ah, 0xa9");
    rdx8 = 0x130a278cddbeb23;
    *reinterpret_cast<int16_t*>(&rbp7) = -0xa471;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rbp7) == 0))) {
        *reinterpret_cast<int32_t*>(&rbp7) = 0xc2d65b2d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    __asm__("shld r13W, bp, cl");
    __asm__("rcr r15, 1");
    *reinterpret_cast<signed char*>(&rdx8) = reinterpret_cast<signed char>(35 >> -43);
    return 0x61f237dbd60b150e + rdx8 + rbp7 + 0x4e1bb51c0c2ebec + 0x49f7c26e8756d43e - 0x5906367390079821 - 0x1a41643390be153 - 0x78c5cb7f694ef8bd + 0xc6f41ead + 0x2fbc64aac2d65b2d + 0x554e7270d57eff72 - 0x11c7be2b00679b94 - 0x27e2baa9a72f46b2 - 0x3dddfb7c07bf3424;
}

int64_t log_size_4_var_048(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rcx8;
    int64_t r11_9;
    int64_t r12_10;

    rbx7 = 0xace837dd2a7ffbea;
    rcx8 = 0x6eb36dfc5eac18bb;
    r11_9 = 0xe46cc88ce3492cfd;
    r12_10 = 0x52f33f26f8a64e19;
    __asm__("rol ebx, cl");
    __asm__("rol r14d, cl");
    *reinterpret_cast<uint16_t*>(&r11_9) = 0xb63c;
    __asm__("rcl r10, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rcx8) = 0x2a7ffbea;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbx7) = 0x5eac18bb;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    }
    __asm__("btr r14w, 0xf");
    __asm__("btr r14w, 0xff");
    __asm__("btc ebx, ebp");
    if (0) {
        *reinterpret_cast<signed char*>(&r11_9) = 25;
        *reinterpret_cast<signed char*>(&r12_10) = 60;
    }
    __asm__("rcl sil, 1");
    return 0x4843d21eaa1efd8f - rbx7 + rcx8 - 0x46ce0c532f9e1d96 + 0x3619c9491024230f - 0x3f330b5683704bc + 0x3f228e42 - 0x52b27e499461425c + 0x3456f2ac8175655d + 0x5c100fcb5558c716 + r11_9 + r12_10 + 0x240a219f9dbe042d + 0x55daaadbc86e6ccf - 0xc83a6afd49532f1 - 0x42b710db81409abe;
}

int64_t log_size_4_var_049(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    int64_t rax8;
    int64_t rax9;

    rbp7 = 0x2cd646fcd3480db6;
    rax8 = 0x757a39e84c804ca2;
    if (0) {
        rax8 = 0x175da8b8fc3aacb5;
    }
    __asm__("btc di, 0xba");
    rax9 = *reinterpret_cast<int32_t*>(&rax8);
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax9) = 0xfc3aacb5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    }
    __asm__("btr rbx, rbx");
    __asm__("rcl ax, 1");
    __asm__("shld r13d, r10d, 0xb9");
    *reinterpret_cast<int16_t*>(&rbp7) = 0x6f86;
    if (1) {
        *reinterpret_cast<int16_t*>(&rbp7) = 0x5052;
    }
    return rax9 - 0x56bf5d2c12501d88 - 0x215446c27097baed + 0x37c8acbea647aa18 + rbp7 + 0x281eb42ba9a2c71e + 0x943941d8 + 0x5cfca16698424426 - 0x58e7b43bd975c0f + 0x175da8b8fc3aacb5 - 0x4e6111f9d512acec + 0x51f0f70b4a561338 + 0x76dc653c5f44248a - 0x631877759f1eafae - 0x54f809f09fe30d8b + 0x320ac97eac21c473;
}

int64_t log_size_4_var_050(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("shld ebx, r9d, 0x1");
    __asm__("shrd rdx, r11, cl");
    __asm__("xadd edi, r14d");
    if (1) {
    }
    __asm__("shld r10, r11, cl");
    __asm__("bts edx, ecx");
    return 0xf9905a13681d1ff5;
}

int64_t log_size_4_var_051(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r13_8;

    rsi7 = 0xf52ec5cb5561c6c7;
    r13_8 = 0x151720e2a7589f61;
    __asm__("shld cx, r11w, 0xd");
    __asm__("shld r8w, r8w, cl");
    if (!__intrinsic()) {
        rsi7 = 0xa6ef;
    }
    if (1) {
        *reinterpret_cast<int32_t*>(&r13_8) = 0xfa86a6ef;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = 0;
    }
    return 0x34688a807fa30931 - rsi7 + 0xdffdfcfb - 0x3d2b3fe769859cd8 + 0x6099096221890a58 - 0x36c9c42d05795911 + 0xa6ef + 0x178f690fe5b679f5 + r13_8 - 0x22f833e04d837c00 + (0x469f353fca9c28c9 >> -85) + 0x5dfe8a3604f60f63;
}

int64_t log_size_4_var_052(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    int64_t rdi8;
    int64_t r13_9;
    int64_t r15_10;
    uint1_t cf11;
    int64_t rdx12;
    uint32_t tmp32_13;
    int64_t r15_14;

    rbp7 = 0xb8779c0e229ffc2f;
    rdi8 = 0x3f102e8cd8b87bb0;
    r13_9 = 0x871a10922ba933f7;
    r15_10 = 0x5582adef791f097a;
    __asm__("shld r13, rbx, 0xf");
    __asm__("bts r8w, 0xd6");
    *reinterpret_cast<uint16_t*>(&r15_10) = reinterpret_cast<uint16_t>(0x2980 + cf11);
    if (*reinterpret_cast<int16_t*>(&r15_10) < reinterpret_cast<int16_t>(0) != __intrinsic()) {
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&rbp7) = 0x7bb0;
        *reinterpret_cast<int16_t*>(&rdi8) = 0xfc2f;
    }
    __asm__("rcr r12w, 1");
    __asm__("rcl bl, cl");
    __asm__("xadd bx, si");
    *reinterpret_cast<int32_t*>(&rdx12) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
    __asm__("rcr eax, 0x39");
    tmp32_13 = *reinterpret_cast<uint32_t*>(&r15_10) + 0x2523d84d;
    *reinterpret_cast<uint32_t*>(&r15_14) = tmp32_13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_14) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r13_9) = reinterpret_cast<uint16_t>(0x33f7 - reinterpret_cast<uint16_t>(0x754c - reinterpret_cast<uint1_t>(0x33f7 < reinterpret_cast<uint16_t>(0x754c - reinterpret_cast<uint1_t>(tmp32_13 < *reinterpret_cast<uint32_t*>(&r15_10))))));
    return 0x1e99528fe5eee742 - rdx12 + rbp7 - 0xf3076e6e6d5aae5 + rdi8 - 0x4841e29e405f43ff - 0x3f3dd809238aa344 + 0x125e80be1c477e37 - 0x634e225e0359dffa - 0x3a8bdc743457a3ca + r13_9 + 0x55fc0b022523d84d + r15_14 - 0x1507e94050ea94ed;
}

int64_t log_size_4_var_053(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rbp8;
    int64_t r11_9;
    int64_t r13_10;
    int64_t r9_11;
    uint1_t cf12;

    rbx7 = 0xeb44f9d6e8295270;
    rbp8 = 0x684bb6b055202929;
    r11_9 = 0x75a7385e5492f804;
    r13_10 = 0x717fa49b841305cf;
    __asm__("shld edx, ebx, cl");
    __asm__("shrd bx, r11w, 0x1");
    __asm__("rol dh, 0xf0");
    if (0) {
        *reinterpret_cast<signed char*>(&rbx7) = -49;
        *reinterpret_cast<signed char*>(&r13_10) = 0x70;
    }
    __asm__("bts r15, r9");
    __asm__("rol edx, 1");
    __asm__("bts ax, r8w");
    r9_11 = 17;
    if (__intrinsic()) {
        rbp8 = 0xc024af87f258bc25;
    }
    cf12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx7) < 0xecd4);
    *reinterpret_cast<uint16_t*>(&rbx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx7) - reinterpret_cast<uint16_t>(0x132c - cf12));
    if (*reinterpret_cast<int16_t*>(&rbx7) >= reinterpret_cast<int16_t>(static_cast<uint32_t>(cf12))) {
        *reinterpret_cast<int16_t*>(&r9_11) = *reinterpret_cast<int16_t*>(&r13_10);
    }
    *reinterpret_cast<int16_t*>(&r11_9) = *reinterpret_cast<int16_t*>(&rbp8);
    *reinterpret_cast<int16_t*>(&rbp8) = 0xf804;
    return 0x5b8365f6496ab137 + rbx7 - 0x495243dc668ab7dc + 0x55cb5f6e235c94d2 + rbp8 - 0x62da81a93ca2a0a9 - 0x21c6ddf4fa8d70cc - 0x3fdb50780da743db + r9_11 - 0x35e187cc352d8330 + r11_9 + 0x345124cec2050948 + r13_10 - 0xa128650606584ef + 0x5d786c0f40f911f6 + 0x25be7db9730a454a;
}

uint64_t log_size_4_var_054(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rdx7;
    int64_t r9_8;
    uint64_t r13_9;
    int1_t cf10;

    rdx7 = 0xb5d7b9b7ad5d77f2;
    r9_8 = 0x6dff2d98a2260ff9;
    r13_9 = 0xc4ebb2596e116ff5;
    __asm__("shrd dx, r14w, 0x4");
    __asm__("ror r14b, 1");
    if (!cf10) {
        *reinterpret_cast<int32_t*>(&rdx7) = 0x3cd0dff3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&r13_9) = -53;
    if (0) {
        *reinterpret_cast<int16_t*>(&r9_8) = -53;
        *reinterpret_cast<int16_t*>(&r13_9) = 0xff9;
    }
    __asm__("rcr rbp, 1");
    return 0x3598bf1358d37513 - (rdx7 - (0xc80eb3370b8fe23f + reinterpret_cast<uint1_t>(rdx7 < 0xc80eb3370b8fe23f))) - 0x137cec52c32f200d + 0x57745c5d7ec183f5 - 0x3480bdef2b6d7abf - 0x1e6a0fb97a44350 + r9_8 - 0x467b0bedd7b84e35 + 0x646281f4381108a1 - 0x7a7610f5c2d20007 + (r13_9 - (0x623d929 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r13_9 < 0xfffffffff9dc26d8)))) - 0x58d2515bbacf516d + 0xf9 - 0x173108a69c247950;
}

int64_t log_size_4_var_055(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t r13_8;
    int64_t rbp9;

    rax7 = 0xf0cdceddc7035fc6;
    r13_8 = 0x12dc9c56c3d1dbe2;
    __asm__("ror cx, 1");
    __asm__("rol ebp, 0x2");
    __asm__("bsr r12d, edi");
    *reinterpret_cast<uint32_t*>(&rbp9) = 0x699cc373 >> 0xffffff89;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = 0;
    __asm__("btr bx, 0x12");
    __asm__("xadd r8b, r12b");
    __asm__("bts ebp, 0x7c");
    if (1) {
        r13_8 = 0x72d0c46457d06d76;
    }
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(0x9fe1 + __intrinsic());
    return rax7 + 0xa5e696a7 + 0x793970cdf3b2401b + 0x5bff978949e15163 + rbp9 - 0x1940ba1c66c9b05a - 0x72fa5e5ae26e4426 + 0x72d0c46457d036bb + 0x435b2fdc5f03bd69 + 0x6b6e47dbe658de13 - 0xa107b52efc6c41f - 0x6f2e098e77c6878b + r13_8 + 0x19dd4bcc65cdf987 + 0x3402f83aee423301 - 0x120687f3cadf8f84;
}

int64_t log_size_4_var_056(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;

    rsi7 = 0x628abe4a34a33095;
    __asm__("rol r11w, cl");
    *reinterpret_cast<int16_t*>(&rsi7) = reinterpret_cast<int16_t>(0x3095 >> 91);
    __asm__("rcl r8, 1");
    __asm__("rol r12, 1");
    __asm__("btc bx, ax");
    __asm__("ror si, cl");
    __asm__("ror r11d, cl");
    __asm__("rol r14, cl");
    return 0x23dfa8bcf7044017 + rsi7 + 0x312f905443a5f068 + 0xf37e34fff6ddadb - 0x4c30744b281bbc04 + 0x3eeec53ff212de0a + 0x139a56833731af4 + 0xf3b7cc7e + 0x78bdaa18e315cdd5 + 0x43fc + 0xff2d6370 - 0x4185b90c1886c5b5;
}

uint64_t log_size_4_var_061(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("bsr r8, r9");
    __asm__("rol r13, 0xe8");
    __asm__("bts r14d, 0x63");
    return 0x7313af046d6b989e + (0x54a7d30996be71 >> -100) + 0xebfee4bd - 0x3b2e9e1b5034a5f4 + 0x619fdc2b09bd135d + 0x68d7c852295b7094 - 0x2be9f434e2ec6da7 + 0x42738e796a6f2e44;
}

int64_t log_size_4_var_063(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;

    rdx7 = 0x74f8895f815ef5e8;
    __asm__("ror r10d, 0x7a");
    __asm__("bts bx, cx");
    __asm__("shld edx, eax, 0x1");
    __asm__("rcr r15d, cl");
    *reinterpret_cast<uint16_t*>(&rdx7) = reinterpret_cast<uint16_t>(0xecd >> -74);
    return 0x96edb465a82d5a4 + rdx7 - 0x696967ee814ca6ba + 0x41929acab834540b + 0x251a1ca4143517b5 - 0x31c4da3f5b1f7664 + 0x14eaf926a - 0x4a42c7a840dd42c6 - 0x3f0eb2dc7d9471bb + 0x2a6d7fd32f38adaa + 0x5158e7edfa190af7 - 0x74d56ea3925720e1 - 86 + 0x6330693581fd65f9;
}

int64_t log_size_4_var_065(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("btr r9, 0x2b");
    __asm__("btc r9w, r11w");
    __asm__("rcl ecx, 1");
    if (!__intrinsic()) {
    }
    return 0xffffffff1656924c;
}

int64_t log_size_4_var_066(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r11_8;
    int64_t rcx9;

    rdx7 = 0xf493e3f206bfd4b8;
    __asm__("rcl bp, 1");
    *reinterpret_cast<uint32_t*>(&r11_8) = 0xa51ec420 >> -21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_8) + 4) = 0;
    __asm__("shrd r8w, cx, 0x1");
    *reinterpret_cast<uint32_t*>(&rcx9) = 0x5de3427b >> -18;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    __asm__("rol dil, 1");
    __asm__("rcr ebp, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx7) + 1) = reinterpret_cast<unsigned char>(0xf4 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx9) + 1) + reinterpret_cast<uint1_t>(0xf4 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx9) + 1) + 1))));
    __asm__("rcl r12, 1");
    return 0x752bc053311db75d + rcx9 + rdx7 + 0x30fe15b4076713d4 - 0x39a360f36c4d94f + 0x1975ac75b45c966b - 0xc6b6de7175e2523 - 0x741ce6380b4841f1 + 0x8b9eb04c + r11_8 + 0x2a5ba9c517053e37 - 0x48b6e3d1215650c3 + 0x5b38966013825072 + 0xf5 - 0x664bcca6426d59b1;
}

uint64_t log_size_4_var_069(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r11_7;

    r11_7 = 0x391eebccfd08d9a;
    __asm__("btc r11, 0xf0");
    __asm__("ror di, 0x62");
    __asm__("btr edx, 0x36");
    if (1) {
    }
    __asm__("rcl r14d, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&r11_7) = 0xc9a2d1d4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_7) + 4) = 0;
    }
    return 0xc81733567f863ff + (0x590b9e8bb9e5f3d9 - static_cast<uint64_t>(static_cast<uint1_t>(0xb9165c27 >> -77))) + r11_7 - 0x735b2aafb663a967 - 0x2b7232643173ecd2 + 0x3cb368750f4b6a8a + 0xd93afb7d - 0x7c6589bb8ddd989a;
}

int64_t log_size_4_var_070(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rcl edx, 1");
    __asm__("shrd r12w, r10w, 0x6");
    __asm__("bsf r11d, edx");
    __asm__("shld r14d, r11d, 0x1");
    __asm__("ror r12b, 0xd1");
    __asm__("bsr cx, ax");
    __asm__("bsr bp, si");
    return 0x506cc0962540ca67 + __intrinsic() + 0x4e2e474274f92a0b - 0x2e316b5902420920 + 0xe88bbf6e + 0x42da6d30b30b9f6d + 0x22c3dcf150c6de18 - 0x65322636b26cbc17 + 0xf04e3f7d5e26a8b + 0xe8333ee8 - 0x315add4c3069ef6b - 0x360e0fb86e643acc - 0x3ac7b0b5f753f63e;
}

int64_t log_size_4_var_072(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdi7;
    int64_t r13_8;
    int64_t rbx9;

    rdi7 = 0xf171d1ec2d1961ed;
    r13_8 = 0x73fbe3902bf57aca;
    __asm__("rol r15d, 0xf1");
    __asm__("bsf eax, eax");
    if (0) {
        *reinterpret_cast<int32_t*>(&rdi7) = 0x2a248bc4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = 0;
    }
    if (0) {
        r13_8 = 0xfaac392f;
    }
    __asm__("cdq ");
    __asm__("bsf eax, eax");
    *reinterpret_cast<uint32_t*>(&rbx9) = 0x38f07315 - __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx9) + 4) = 0;
    return rbx9 - 0x265580b11de7de33 + __intrinsic() - 0x13aac64229780b88 - 0x4024a48ae2924d9e + rdi7 - 0x7a30a73d3503294e - 0x133c322876739800 + 47 - 0x28ab30ca72d882d4 - 0x7c75ae71b4f246cd + -r13_8 + 0xfaac392f + 0x4af2695f1d5b3337 + 0x20ae87ae8ad2d2a7;
}

int64_t log_size_4_var_073(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;

    rdx7 = 0x32e80fb2ac34649b;
    __asm__("xadd r9d, ebp");
    __asm__("btc r9w, r15w");
    if (0) {
        *reinterpret_cast<int16_t*>(&rdx7) = 0x27a5;
    }
    if (1) {
    }
    __asm__("btr rcx, r10");
    __asm__("rcr dil, 1");
    __asm__("rol r14d, 0xdc");
    __asm__("xadd dh, dh");
    return 0x6f61147d736d21ff + rdx7 - 0x1526324ce7265387 - 0x33eac48638377b2d + 0x23774965a60c27a5 + 0x69922b15e1ad6a47 - 0x5762a92913ff63c + 0x19a9d0dc1361dc00 - 0x419aeba90c7cfaae + 0x53042a523af085f8 + 0x1b3b9f93349c4000 - 0x5b96b344d30d83cb + 0x4b96641dd96ee44f + 0x72b318a2f7d28a9e;
}

int64_t log_size_4_var_074(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t rbx8;

    rdx7 = 0x5ed51679ce336e39;
    __asm__("btr bx, 0xeb");
    *reinterpret_cast<int32_t*>(&rbx8) = 0x6a09b336;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx8) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rbx8) = 0x9c3e2df1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx8) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx7) + 1) = reinterpret_cast<unsigned char>(0xbc - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx8) + 1) + reinterpret_cast<uint1_t>(0xbc < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx8) + 1))))));
    __asm__("rcl edx, 1");
    return 0x3354abb9a1b4006a - rbx8 - 0x1da9230fbb686c32 + rdx7 + 0x3926e6122520c46c + 0x6163cd6e4492f3f8 + 0xae523cd9 - 0x38a8f15ff6e0ab8e + 0x3cd91ad458ec1500 - 0x771dbce70a451d58 - 0x2b01eac86a68961f - 0x3023bf6ca295f806 + 0x62106b69e50b3c11 + 0x428b8bf2ef67fba2 + 0x418feb23d6ce933e - 0x61a58991b762f030;
}

int64_t log_size_4_var_075(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdi7;

    rdi7 = 0x6eb0061595a537e9;
    __asm__("rol bpl, cl");
    *reinterpret_cast<int16_t*>(&rdi7) = reinterpret_cast<int16_t>(0x37e9 >> -46);
    __asm__("rcr dl, 1");
    __asm__("rcl dh, 1");
    __asm__("rcr r9w, 1");
    return 0x5a70e93f9d9503d7 - rdi7 + 0x7c7abdf5b512d585 - 0x440eb639ded69ae2 - 0x61f480a0ad231119 + 0x591a1c33397cf7af + 0x75e6c8445e9e7ce6 - 0x34b42c9bb6076e9b - 0x1a2f9c4009b6f057 - 0x10c7ed6b8a360987 - 0x5a0bd2216f4fc3b6;
}

uint64_t log_size_4_var_077(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r9_8;

    rdx7 = __intrinsic();
    __asm__("bts r12, 0x22");
    *reinterpret_cast<unsigned char*>(&rdx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx7) & 0xf0);
    __asm__("shld r10d, r15d, 0x1c");
    __asm__("ror bp, 1");
    __asm__("bsf r8, rdi");
    r9_8 = 0;
    *reinterpret_cast<signed char*>(&r9_8) = -0;
    __asm__("rcr bl, 1");
    return 0x6bb35a1e50f73276 - (0x456de0d2bee487f0 - (0x25476589 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0x456de0d2bee487f0 < 0x25476589 + static_cast<uint64_t>(__intrinsic()))))) + rdx7 - 0x37eb670f1a29904b - 0x67cfd06564a727a2 + 0x1e5ee7e9b4c0ecc3 + 0x46d9f5a2f746fb65 + r9_8 - 0x500265944de9aad9 - 0x47018b72b7e992ec - 0x471cf63a3e1355ac - 0x6b1cd6f153b17a00 - 0x22b58015036d24 - 0x518baa381e320d5a - 0x569338607819434;
}

int64_t log_size_4_var_079(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;

    rbx7 = 0x6ef1cb0e47cbeb28;
    __asm__("shld eax, r15d, 0xb9");
    if (1) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0x56422419;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    }
    __asm__("rcr r10, 1");
    return 0x1a621be0bc7b0640 + rbx7 + 0x7c8794fd1fea2fda + 0xe04f00ce - 0x6e6ce49a77372832 - 0xd667277e47d7b81 + 0x781691c6564224bd + 0x574d177cf157e590 + 0x2a6410d830732c2f - 0x59db2a282714af30 - 0xf8d3d712b055df4 + 0x490e73a3144062ba - 0x160d50a3e8b11a70 - 0x3d1368d66e9e08d9 - 0x4cd939bf84d3e2d0 - 0x7c47ae5845921963;
}

int64_t log_size_4_var_080(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t r13_8;
    int64_t rdx9;

    rcx7 = 0x21541cdc1213298f;
    r13_8 = 0xfa027e2006ae9b13;
    __asm__("shrd r14, rax, 0x2b");
    __asm__("shld rdi, rbx, cl");
    *reinterpret_cast<int32_t*>(&rdx9) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    if (0) {
        *reinterpret_cast<int16_t*>(&rcx7) = 0x9b13;
        *reinterpret_cast<int16_t*>(&r13_8) = 0x298f;
    }
    __asm__("xadd r10d, esi");
    __asm__("rcr rbx, 1");
    __asm__("rcr r8b, 0xe4");
    *reinterpret_cast<unsigned char*>(&rcx7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx7) + 50) + 1);
    return 0x7bfee9eee03d3300 - rcx7 + rdx9 - 0x65272b068e740224 + 0x17e3f452b27b720f - 0x5446850c6215638a - 0x5b9ce8af2627b278 + 0x15a8bd7caf3ae048 - 0x206187069d51688c + 0x2ee9d5a52a92486e - 36 + r13_8 + 0xc21c30495d88e67 - 0x17a852673c5a6800 - 0x612dd6ba4eacb06e;
}

int64_t log_size_4_var_081(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r11_8;

    rdx7 = 0x60fb7ca041942283;
    __asm__("rcl r11, 0x71");
    __asm__("rcr r11d, 0xe8");
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    __asm__("ror edx, cl");
    r11_8 = 0xffffffffffffff86;
    __asm__("ror rax, 1");
    __asm__("btr r12, rax");
    *reinterpret_cast<unsigned char*>(&r11_8) = reinterpret_cast<unsigned char>(0x81 + __intrinsic());
    return 0x54744caf0bae36f7 + rdx7 - 0x9ba223c524bffdb - 0xbdd28b6f3aaf405 + 0x7c286cdbb739e254 + 0x681c1e748a847e3b - 0x38f2376859cc9b6c + 0x5c0999f766ebf85f + r11_8 - 0x24480cf638e56939 - 0x1daeeeb792627acb + 0x342fc2b5 + 0x43507c61be76ffaf - 0x750f555c69a779cd;
}

int64_t log_size_4_var_085(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t rdi8;

    rdx7 = 0x58deb747b79b0fdb;
    rdi8 = 0xacf0fdd62e2c417f;
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    __asm__("btc r14w, bp");
    __asm__("rcl r12w, cl");
    *reinterpret_cast<unsigned char*>(&rdx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx7) & 0xcf);
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx7) == 0)) {
        *reinterpret_cast<int32_t*>(&rdi8) = *reinterpret_cast<int32_t*>(&rdx7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
    }
    __asm__("bts rdx, 0x67");
    return 0x4732c055a980b36f - rdx7 + 0xb4ba270848a384c - 0x3b2e395fc525fedc + rdi8 - 0x7b18003506e580f3 + 0x7cac517b - 0x518e67c10e32a3d1 - 0x57a1b9f932eb0ee1 - 0x2574c162e1212f4a + 47 + 0x9d10bd15922a1c1 + 0x46978b4db300cd1b + 0x178aebafa4a9e1f6;
}

int64_t log_size_4_var_086(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;

    rdx7 = 0x91398cd62648c7b;
    __asm__("shrd eax, ecx, cl");
    __asm__("btr ebx, 0x9f");
    __asm__("rcl di, 0x5");
    __asm__("ror r13b, cl");
    __asm__("shrd rdi, r8, 0x2b");
    __asm__("bsf r10d, edx");
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    __asm__("btc rdi, 0x7c");
    __asm__("btc r10w, 0x92");
    return 0x44997a12d139fa71 + rdx7 + 0x7712283a - 0x10cb6086a15dbad7 + 0x6bdc0436fe90fcb8 + 0x6a589f82dff743e8 + 0x63b2545fe09a77ef - 0x4bcad33d1ad6bf19 - 0x79e6e7824cfb35c4 + 0x3ddd5390038a394f + 0x7548a10df7a7296b + 0x201a835ad99452d3 + 0x7d8adbe1a3b0afa0 + 0x4d7c054162d94be3;
}

int64_t log_size_4_var_089(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r9_7;
    int64_t r12_8;

    r9_7 = 0xa67fff32681df61;
    __asm__("shld si, r9w, 0x1");
    __asm__("btc edx, r10d");
    *reinterpret_cast<uint32_t*>(&r12_8) = 1 >> 58;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = 0;
    __asm__("bts di, 0x58");
    __asm__("rcl r15, 1");
    if (0) {
        r9_7 = 0x5578db8499ef5821;
    }
    __asm__("bsf r14w, r14w");
    __asm__("shrd r8w, r8w, cl");
    return 0x2d5fac08c9889ca0 + __intrinsic() - 0x6ca10913454b9d36 + 0x3328530de9d7dc20 + 0x5578db8499ef5821 + 0x247e825178d7573a + r9_7 - 0x66e07a64734725ff - 0x5766157e8b12d328 + r12_8 - 0x5a521b1f552362fb + 0x3747578f15122db4 + 0x26bcd6be8f545b7;
}

int64_t log_size_4_var_090(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t r14_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t r14_11;

    rcx7 = 0x904392446739aa65;
    __asm__("xadd rax, r11");
    r14_8 = -0xe0f7c9ab0041a240;
    __asm__("ror r13W, cl");
    *reinterpret_cast<unsigned char*>(&rcx7) = 0xe5;
    *reinterpret_cast<uint16_t*>(&rax9) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax9) + 1) & 0xbf) == 0);
    __asm__("rcl r11d, 1");
    *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx7) - (*reinterpret_cast<uint32_t*>(&rcx7) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx7) < *reinterpret_cast<uint32_t*>(&rcx7) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r14_11) = *reinterpret_cast<int32_t*>(&r14_8) * 0x267b517;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_11) + 4) = 0;
    return 0x2891ce5772af3941 - rcx10 + 0xa5af06114a2236a - 0x5aadc3ba5e28f6ac + 0x4cb0936362bbbc58 + 0x1a644e2c2080bcae + 0x430b9b18 - 0x6519c4f239ed943e + 0x1960a68349141e1a - 0x7b01ea69e59804ad + 0x73fe - 0x50aba86758594652 + r14_11 - 0x7175efd6561f8c02 - 0x65539ecb22a4938e;
}

int64_t log_size_4_var_092(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r13_8;
    int1_t zf9;
    int64_t rbp10;

    rsi7 = 0xc66bc57344a44b9c;
    r13_8 = 0x174f3b90bb00a56b;
    __asm__("shld r11, r8, 0x1");
    if (zf9) {
        *reinterpret_cast<int32_t*>(&rsi7) = 0xa1dfe181;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    }
    __asm__("rol di, 0xac");
    __asm__("btc cx, 0xc3");
    __asm__("rcr rbx, 1");
    __asm__("rcl esi, 1");
    __asm__("bsr bx, dx");
    *reinterpret_cast<int16_t*>(&r13_8) = reinterpret_cast<int16_t>(0xa56b >> -32);
    *reinterpret_cast<int32_t*>(&rbp10) = -0x7f979918;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = 0;
    return 0x4a48a3be981f5a3e + rbp10 + rsi7 - 0x1b8372745e201e7f - 0x1f4f68135a6a303d + 0x4ebd79f8319af25 + 0x19ec0869b9fa7009 - 0xa682c97a2abf0a2 + 0xc68a649b + r13_8 - 0x11611d9da492b93a + 0x401bd0c571f3ec2 + 0x31ec28a95106d443;
}

uint64_t log_size_4_var_093(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rcx8;

    rax7 = 0x81cf9dc1a0e6f63c;
    *reinterpret_cast<uint32_t*>(&rcx8) = 61;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rax7) = 0x50b2;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx8) + 1) - 1);
    if (0) {
    }
    __asm__("rcr rsi, cl");
    __asm__("shld r9d, r14d, 0x1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rax7) = 0xf80c4be1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    }
    return rax7 + 0x394ebed1c4577ed1 + reinterpret_cast<uint64_t>(rcx8 + 0x1f5084a6bdb6af12) - 0x1006f3402ec79fdc - 0x4de3418b07f3b41f + 0x520d856c00c64089 + 0xa4 - 0x14b68f4e153d1691 - 0x24ab142353f4a829 + 0xcde97051118aa4 + 0x52c0be0a1aa85c6b - 0x633cbf0e708e22ed + 0x1f5084a6bdb6af12 - 0x27a3962d88075e0d - 0x65f1c2e1e2530724 + 0x771c15dc1eda2aa6;
}

int64_t log_size_4_var_094(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rcx8;
    int64_t rdx9;
    int64_t rsi10;
    int64_t rcx11;

    rax7 = 0xc36536d3945ca945;
    rcx8 = 0x4d0737e5bb75cb35;
    rdx9 = 0xfd6f17a9f328704b;
    rsi10 = 0xd14d818f80230d0a;
    if (0) {
        rsi10 = 0x4d0737e5bb75cb35;
        rcx8 = 0xd14d818f80230d0a;
    }
    __asm__("rcl bh, 1");
    *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(&rcx8) + 0x4598f6b2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax7) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx11) < reinterpret_cast<int32_t>(0));
    *reinterpret_cast<int16_t*>(&rax7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax7) * 0x3bb0);
    *reinterpret_cast<int16_t*>(&rdx9) = __intrinsic();
    __asm__("bts r14d, 0xc1");
    __asm__("btr cx, r15w");
    return rax7 + 0x109b304be1073bb0 + rcx11 + rdx9 - 0x6c3d44ce6eaff471 + rsi10 + 0x1e2c44ea4d546352 + 0xffffb9cf - 0x1662abf49a275fbb + (0xf4904aa824065fd << *reinterpret_cast<unsigned char*>(&rcx11)) - 0x7793bcb7ce464631 - 0xeb3fb8cd2716748 - 0x6963ab647bdc8f5 + 0x3f4072c18df2f7f6 + 0x63cf2e9cb7bdc1b4 - 0x4355d95f773cf4b6;
}

int64_t log_size_4_var_095(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rdx8;

    rax7 = 0x51299c93a5e3dbcf;
    rdx8 = -0xa889a1a5;
    *reinterpret_cast<uint16_t*>(&rdx8) = reinterpret_cast<uint16_t>(0x1bcf % reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(-*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1)) | 0xc0))));
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(0x1bcf / reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1))));
    return rax7 + 0xc78cb5ac + 0x4904 + rdx8 - 0x1f308ee6c1827dee - 0x5129cfc173aec286 + 0x7e26d3ec23962a91 - 0x5f606b1a4b7fae41 + 0xcd6b8aff + 0x4a971faadb8d2f75 - 0x545ba56266e934b6 - 0x5008a1b838d9f048 - 0x347f0534783947bf - 0x4fb5bf8cc920b605 - 0x7a57e6722dc27890;
}

uint64_t log_size_4_var_099(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    uint64_t rdx8;
    uint64_t r13_9;
    uint64_t r11_10;

    r14_7 = 0x188a0fe2ddb4c2d5;
    rdx8 = 0x146d3d6146e6db2b >> -10;
    __asm__("shrd r12, r15, cl");
    *reinterpret_cast<int32_t*>(&r13_9) = -0x79019c4d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_9) + 4) = 0;
    r11_10 = *reinterpret_cast<int32_t*>(&rdx8) + r13_9;
    *reinterpret_cast<int16_t*>(&r11_10) = 0x6ad0;
    *reinterpret_cast<uint16_t*>(&r14_7) = reinterpret_cast<uint16_t>(0xc2d5 >> 0xff89);
    return 0x1776fb579ea6cda3 - r11_10 + (0xd9d30873ebdc3842 >> -79) + r13_9 + r14_7 - 0x74fa030fcd46b6c9 + 0x73e6ee83803c0f17;
}

int64_t __assert_fail = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto __assert_fail;
}

uint64_t log_size_4_var_001(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r8_7;

    r8_7 = 0xcaaf084bf54cfbe7;
    __asm__("rcl rdx, 1");
    __asm__("bsf rax, r10");
    *reinterpret_cast<uint16_t*>(&r8_7) = reinterpret_cast<uint16_t>(0xfbe7 >> -32);
    __asm__("shrd r9w, ax, 0x9");
    __asm__("btr r10, r15");
    __asm__("btr rcx, 0xf0");
    __asm__("rcr r11d, 1");
    return 0x1da429aa4ce96d30 + r8_7 + 0x6c82c92885334af6 + static_cast<uint64_t>(reinterpret_cast<uint32_t>(0x3aac3a25 - *reinterpret_cast<int32_t*>(&r8_7))) - 0x7f5c339164c2e000 + 0x11ae507275721130 + 0x2fa454f66b8ac29c + 0x25edb1c84cf8d44f - 0x53f13fc53aac3a25 + 0xfbdb6fe0f27a4d3;
}

int64_t log_size_4_var_007(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;

    rsi7 = 0x69917110bc41be7;
    __asm__("rol rax, cl");
    __asm__("rcl edx, cl");
    if (1) {
        *reinterpret_cast<int32_t*>(&rsi7) = 0x60205e01;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    }
    __asm__("ror bpl, 1");
    __asm__("rcr r10w, 0xc");
    __asm__("btr r12w, bx");
    return 0x7be696b2fddf2986 - rsi7 + 0xdc07d0f3447e332 - 0x104693f1419e1767 + 0x2822764962b602b3 + 0x797151d0995a7ec2 + 0x421190804e80e298 - 0x2312b14bb9016513 - 0x7cae1dfc708266cc + 0x6e4c2328a53c2659 + 0x977631b9 - 0x144636f3670750fe;
}

int64_t log_size_4_var_009(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    int64_t r9_8;

    rbp7 = 0x611e4aaf91b0f9a1;
    *reinterpret_cast<int32_t*>(&r9_8) = -0x8bd9c8a8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbp7) = reinterpret_cast<signed char>(-95 >> -71);
    __asm__("ror r8b, cl");
    __asm__("xadd r13W, di");
    return 0x25b5d01b6f609821 - rbp7 - 0x4a93f046187afd6b - 0x4a01c2119f9063f1 + 78 + r9_8 + 0x6117ecc9b09bfa01 - 0x6eb67383e383507f + 0x3228a9f87bcb644e - 0x41e85af19f1c8dff + 0x396f710031dab799 + 0x6cff9d7f + 0x3d1bfe75d8f43207;
}

int64_t log_size_4_var_014(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdi7;
    int64_t r9_8;
    int64_t rcx9;

    rdi7 = 0x2d928ba689d1b078;
    r9_8 = 0x4362b8957ee9da3f;
    __asm__("rol ecx, 1");
    __asm__("rcl r10, 1");
    __asm__("rcr edx, 0x78");
    __asm__("rcl r12d, 1");
    *reinterpret_cast<signed char*>(&r9_8) = 15;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi7) = 0x7069ec03;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = 0;
    }
    if (1) {
        r9_8 = 0x1e82630c5b836c64;
    }
    *reinterpret_cast<int32_t*>(&rcx9) = 0x7d1d2148;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rdi7) & 0x4198dd98) < reinterpret_cast<int32_t>(0));
    return 0x57748193a5c235c8 - rcx9 + 0x3ef1d4ff - 0x67dac1aa6f925dc9 + 0x5a0521609422633f + rdi7 + 0x1e82630c5b836c64 + r9_8 + 0xd41bc6cc + 0x10a5ed4c + 0x6e527f66c7889806 - 0x51697edbbe672268 + 0x114ddf5d7069ec03 - 0x4c3372fa7a5fcd95 - 0x4b6b91c4798a5740;
}

int64_t log_size_4_var_017(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;

    rsi7 = 0x9e643e8c9fce5aab;
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi7) = 0xba59cdd6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    }
    return 0x1eb0b8fca22290f4 - rsi7 + 0x3b4873b4ebce197e - 0x347966c1fab595f4 + 0x544945ed8716fd00 - 0x15810bbff48a964f - 0x7e33451521fc1fea + 0x717d68652514cebb - 0x23874641eb979c7e - 0x2186c8cb8b2c76d6 + 0xb17b5eeba59cdd6 + 0x1fc5a7a99890f4ba;
}

int64_t log_size_4_var_019(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t rdx8;

    rcx7 = 0x9a66a7c8c61d029;
    rdx8 = 0x7f915a16b65ec156;
    __asm__("rcr cx, 1");
    if (__intrinsic()) {
        rcx7 = 0x80a899;
    }
    __asm__("bsr r12, rcx");
    __asm__("btr esi, 0xd8");
    *reinterpret_cast<signed char*>(&rdx8) = reinterpret_cast<signed char>(86 >> -94);
    __asm__("rcl r15d, 1");
    return 0x49983fc9371fff59 - (0x2e94a1d3 << *reinterpret_cast<unsigned char*>(&rcx7)) + rcx7 + rdx8 + 0x2758ff4e44f120f6 + 0x10e7fc6055748854 + 0x80a899 + 0x517ae89595734ede + 0xeddfe6f7 - 0x7f65fa1f9df0a961 - 0x761969bf1765edcb - 0x663456cb12e03e6d - 0x3db06af4b7df68fc - 0x5ee29f572b1ac48d + 0x3fa731fceaa928a5 - 0x1d17bd4c7ffa7eba;
}

int64_t log_size_4_var_022(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r9_7;
    int64_t r13_8;
    int64_t rax9;

    r9_7 = 0x73a7f8f811f9e90b;
    __asm__("bsf si, bp");
    __asm__("rol r14d, cl");
    __asm__("rcr rdi, 1");
    *reinterpret_cast<uint32_t*>(&r13_8) = 0x82000680;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = 0;
    if (0) {
        *reinterpret_cast<signed char*>(&r9_7) = 0x80;
        *reinterpret_cast<signed char*>(&r13_8) = 11;
    }
    rax9 = 0xb2e6000000000000;
    *reinterpret_cast<uint16_t*>(&rax9) = reinterpret_cast<uint16_t>(0 / reinterpret_cast<uint16_t>(0));
    return rax9 - 0x69c794ea03494f33 + 0x8b36bc73b37ed31 + 0x4989636ab7500000 + 0x159bfbbc95f6032b + 0xd966ed26 - 0x558a013bd053d3d3 + 0x77d569ee83824697 + r9_7 - 0x3d3e1d81914a2b10 - 0x7e6f027f269912da - 0x2dee16bac3b6be0c + r13_8 - 0x6aa260682f46e08c - 0x7d41d71826321d0d + 0x482ac8fc2f8f2a3b;
}

int64_t log_size_4_var_026(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r11_7;
    int64_t rbp8;

    r11_7 = 0x47288de8f9cba6c8;
    if (1 != __intrinsic()) {
        r11_7 = 0x7340991eedf02a6d;
    }
    __asm__("bsr r14, rcx");
    *reinterpret_cast<uint32_t*>(&rbp8) = 0x7e39f710 >> 69;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0;
    __asm__("shrd r13W, bx, 0xe");
    __asm__("rcl rax, 1");
    return 0x16b6d255c690250b - rbp8 + 0x3cbf47222092bfed + 0xb2432d56 - 0x358d2efb864e5295 + 0x698ac8f9e9cf7570 + 0x44d4d37d91e01886 + r11_7 + 0x7340991eedf02a6d + 0x24e90c485ae0580 + 0x713a6c95 - 0x6d62c7a1c46e5514 + 0x11d02d8ca2d6c279;
}

int64_t log_size_4_var_034(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r12_7;

    r12_7 = 0xe8ab393549b3de7d;
    __asm__("rcr r8w, 1");
    __asm__("rcl bl, 1");
    __asm__("rol esi, 0xe7");
    if (1) {
        *reinterpret_cast<int32_t*>(&r12_7) = 0x49b3de7d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_7) + 4) = 0;
    }
    return 0x1a92c658fc6b53a2 - r12_7 - 0x1b3314faeca716d3 + 0x623b6155d7469193 + 0x1cdb811c689fc7cb + 0x151f27633937a55c;
}

int64_t log_size_4_var_036(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;
    int64_t r10_8;

    __asm__("bts r13W, r14w");
    *reinterpret_cast<int32_t*>(&rdx7) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    __asm__("xadd rdi, rax");
    *reinterpret_cast<int32_t*>(&r10_8) = 0x1e45724d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_8) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r10_8) = __intrinsic();
    __asm__("rol r11w, 0x1f");
    *reinterpret_cast<int16_t*>(&rdx7) = 0x1945;
    __asm__("rol r8w, cl");
    __asm__("shrd r12, rbx, 0x56");
    return 0x54d6ac96959fbed8 + rdx7 + 0x563c57c7a80f9d63 + 0x7b167af8e7e8bee7 + 0x54a8e36292704b7a - 0x5e83e56fa08a69a6 + 0x7a + r10_8 + 0x5aa695382abcf34b + 0x5cf40b93bee6377f - 0x6754c6dc97924f04 - 0x7c66395292d9831e - 0x9be2a2e141190bf - 0x5f94b0fbb101c92b;
}

int64_t log_size_4_var_057(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("ror r9d, 0x86");
    __asm__("bsf si, r12w");
    return 0x9905383817fadc8b;
}

int64_t log_size_4_var_062(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t r12_8;
    int64_t r15_9;
    int64_t rdi10;
    int64_t rbx11;

    rax7 = 0xe82ed9d9c80d20d8;
    r12_8 = 0xf7ccd38bd29fcba2;
    r15_9 = 0xb5429fae48f5f45b;
    __asm__("btr r11w, r14w");
    *reinterpret_cast<int16_t*>(&r12_8) = 91;
    *reinterpret_cast<uint32_t*>(&rdi10) = 0x1074d1d2 >> -50;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    if (0) {
        *reinterpret_cast<int16_t*>(&r12_8) = 0x20d8;
        *reinterpret_cast<int16_t*>(&rax7) = 91;
    }
    *reinterpret_cast<uint32_t*>(&rbx11) = 0x37193ccd + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx11) + 4) = 0;
    __asm__("rcr r11d, 1");
    __asm__("shrd ebp, r10d, 0x1");
    if (1) {
        *reinterpret_cast<int16_t*>(&r15_9) = 0xa7d8;
    }
    return rax7 + rbx11 + 0xe1b94c14 - 0x4bdea5d7d9625828 - 0x7f7f1d3217195100 + 98 + rdi10 - 0x2571216b3ae55523 + 0xa385dc08 - 0x3dcd5b5ab8b906f7 + 0x4a166cd8047d1bda + r12_8 + 0x4699745fd3c290ed + 0x7418cd75db6f6d29 + r15_9 + 0x5f2c93b10722825f;
}

int64_t log_size_4_var_064(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rdx8;
    int64_t rsi9;
    int64_t r12_10;

    rbx7 = 0xcf5337cc785484b6;
    rdx8 = 0x801e9feb4e0efda;
    rsi9 = 0xee51fd5209d00849;
    r12_10 = 0xb27c483ba0cef78f;
    __asm__("ror ax, 1");
    if (0) {
        *reinterpret_cast<int16_t*>(&rdx8) = 0x8146;
    }
    *reinterpret_cast<unsigned char*>(&rbx7) = reinterpret_cast<unsigned char>(0xb6 >> 0x75);
    *reinterpret_cast<unsigned char*>(&rsi9) = reinterpret_cast<unsigned char>(73 - reinterpret_cast<unsigned char>(79 - reinterpret_cast<uint1_t>(73 < reinterpret_cast<unsigned char>(79 - __intrinsic()))));
    if (!__intrinsic()) {
        r12_10 = 0xa9e305e8de8d2b7e;
    }
    if (reinterpret_cast<signed char>(73) > reinterpret_cast<signed char>(79 - __intrinsic())) {
    }
    __asm__("rcl ecx, 0x47");
    __asm__("btr r10, 0xee");
    __asm__("rcr r15, 1");
    __asm__("shrd r8w, bx, cl");
    return 0x26865fa529cefac2 + rbx7 + 0x70290adf056f5a0a + rdx8 + 0x674c180f80b1cbe5 + rsi9 + 0x7200aef4931096a1 + 0x487bb501b80d7944 - 0x227a0e765ba77514 + 0x601fe1821eb11288 - 0x17d7dfde974f7eba + r12_10 + 0x7a - 0x7850eae84012bff3 + 0x1819e686a4ae605 + 0x19e967d51c54aad2;
}

int64_t log_size_4_var_067(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rol rbp, cl");
    __asm__("ror r9, cl");
    __asm__("bts rsi, rbx");
    __asm__("shrd r10, rcx, cl");
    return 0x1418e2ac6d105ca0;
}

int64_t log_size_4_var_071(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;

    rsi7 = 0x7a019762d4722dde;
    __asm__("rol cx, 1");
    __asm__("bts r8, rbp");
    __asm__("bsr r14w, r8w");
    __asm__("rcl edx, 1");
    if (0) {
        rsi7 = 0xf5c421c1;
    }
    return 0x62a9f8525ab18dd + rsi7 - 0x4f16b033770f3a21 + 0xf5c421c1 + 0x6d47a729c523f38f + 0x66622684e9c5ebe + 0x39098adac118daf4 - 0x2e5d5deee19c7fb1 + 0x1baaa435f741e5c1 + 0xe539fe53 + 0x781b2b75 + 0x50c539b3cee3fc0f;
}

uint64_t log_size_4_var_076(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rcx8;
    int64_t r9_9;
    int64_t r13_10;
    int64_t r15_11;
    uint64_t r12_12;
    int16_t tmp16_13;

    rbx7 = 0xb298c7d6d480de6d;
    rcx8 = 0x4470d499e2826f53;
    r9_9 = 0xce9a50392084fed5;
    r13_10 = 0x3103a2fff5eb3c98;
    r15_11 = 0xc1ca2a11edcc41a7;
    *reinterpret_cast<signed char*>(&rbx7) = reinterpret_cast<signed char>(0x6d >> 83);
    *reinterpret_cast<int16_t*>(&r13_10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx7) * 0x75be);
    __asm__("shrd r8w, si, 0x8");
    r12_12 = 0xcf619201b5fa73f1;
    __asm__("shld edi, ebp, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = reinterpret_cast<unsigned char>(68 >> 83);
    __asm__("rcr r11w, 1");
    if (*reinterpret_cast<int16_t*>(&r13_10) == 0xfed5) {
        tmp16_13 = *reinterpret_cast<int16_t*>(&r13_10);
        *reinterpret_cast<int16_t*>(&r13_10) = 0xfed5;
        *reinterpret_cast<int16_t*>(&r9_9) = tmp16_13;
    }
    __asm__("rol r15w, 1");
    if (0) {
        *reinterpret_cast<signed char*>(&r12_12) = -89;
        *reinterpret_cast<signed char*>(&r15_11) = -15;
    }
    return 0x1005512ea0d22341 + rbx7 + rcx8 - 0x521363888d56d662 - 0x35d641e24043ac40 - 0x5f8f175df5eb802c + 0xf221dc95 + 0x5c49adc56b21977 + r9_9 + (0x98eb3ff686d03585 >> -11) + 0x201f64af504b088d + r12_12 + r13_10 + 0xdd419a36 + r15_11 + 0x29bc204f4ffd1e9b;
}

int64_t log_size_4_var_078(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r9_7;

    r9_7 = 0x75ae7de355fa45e9;
    __asm__("btr r14d, 0x23");
    __asm__("shld rsi, rsi, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&r9_7) = 0;
    }
    return 0x247f818df53c71ae + r9_7 + 0x67d3535d12484721 - 0xd38570c5723aae4 + 0x6bc41f4a6b0d185a + 0x1927c8b3 - 0x72087e504168bf95 + 0x4ff273e8c53e283e - 0x22880d470e65f17f;
}

int64_t log_size_4_var_082(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r15_7;
    int64_t rax8;
    int64_t r14_9;

    r15_7 = 0xa0fc5d9494d86a13;
    *reinterpret_cast<signed char*>(&r15_7) = reinterpret_cast<signed char>(19 >> 88);
    __asm__("btr r14d, edi");
    __asm__("ror r13b, cl");
    *reinterpret_cast<uint32_t*>(&rax8) = 0xa79667cb >> 88;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    __asm__("rol rax, 1");
    __asm__("shrd r13, r12, cl");
    *reinterpret_cast<uint32_t*>(&r14_9) = *reinterpret_cast<uint32_t*>(&rax8) + 0x1ff5eaa8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = 0;
    __asm__("bsr r10d, r14d");
    __asm__("rol r8, 0xa0");
    *reinterpret_cast<uint16_t*>(&r15_7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_7) - reinterpret_cast<uint16_t>(0x430d + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_7) < 0x430d)));
    return rax8 - 0x213fecf41af98abd + 0x56bbda1295f07a58 + 0x1ce7df88b62ef703 + 0x3660a8322d578be4 + 0x7c17e040e3febd55 - 0x524a95b133665471 + 0x6da858a40823a153 + 0x71d4e557fd66c614 + 0x53aad156 + 0x3105ef415b994b7c + 0xaf68b5c6 + 0x5e413bd3c092bc49 + r14_9 + r15_7 - 0x67425949cedb5ead;
}

int64_t log_size_4_var_087(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rdx8;
    int64_t rbp9;

    rbx7 = 0x28dd67083f2ab1ad;
    rdx8 = 0x8cee28c36a91d53d;
    rbp9 = 0x7853da8d7d749eff;
    *reinterpret_cast<int16_t*>(&rdx8) = -0xd53d;
    *reinterpret_cast<unsigned char*>(&rbp9) = reinterpret_cast<unsigned char>(0xff >> 46);
    __asm__("rcl ch, cl");
    *reinterpret_cast<signed char*>(&rbx7) = --83;
    __asm__("bts rax, 0xa2");
    __asm__("xadd r9b, cl");
    __asm__("bsr r14w, di");
    __asm__("btc ax, 0x25");
    __asm__("shrd ax, r14w, 0xf");
    return (0x2de1793d7b6c9191 >> -65) + rbx7 - 0x396aa2c37628ac19 + rdx8 + rbp9 + 0x20984408050a2129 - 0x79c5428f79ee7226 - 0x336216d143516bbf - 0x38c8b87dee8 + 0xc4d020ec9c33b2 - 0x4c3c8fd925084807 - 0x324d281fc6261146 + 0x61baa521826210dc - 0x485e48388fc76d2b + 0x22459897b0d8254b - 0x2602bc7b62448667;
}

int64_t log_size_4_var_091(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;

    rbx7 = 0xb1a95fdb7d58d4ac;
    if (0) {
        *reinterpret_cast<int16_t*>(&rbx7) = 0xf56;
    }
    *reinterpret_cast<unsigned char*>(&rbx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx7) ^ 0xb1);
    __asm__("ror r15w, 1");
    __asm__("rcl r8, 1");
    if (0) {
    }
    __asm__("shrd ebp, r12d, cl");
    return 0x58c2ee48354006a - rbx7 - 0x3f26eff48c7162ed + 0x3afea4c7f08b8311 + 0x4191c036d33b34fa - 0x3e98c2eb11ca2c97 + 0x3e0d0a070aa31e69 - 0x26069e7eadbdfe00 - 0x5d00ec18086b87b3 + 0xffffd244 + 0x777a5854286d244 - 0x3192e94119ec8b46 + 0x553bb17a7ed4348 - 0x305bb7edb390f0aa + 0x310ccd81ea193a80 + 0x25bb6f3d9747a073;
}

int64_t log_size_4_var_096(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("shld bx, ax, cl");
    __asm__("shrd esi, r9d, 0x5e");
    __asm__("shrd rcx, rcx, cl");
    __asm__("shrd edx, eax, cl");
    return 0x95785373f509f512;
}

int64_t log_size_4_var_002(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdi7;
    int64_t r11_8;

    rdi7 = 0xe32be0e181fcbd75;
    r11_8 = 0xa3271279526cbf0;
    if (0) {
        *reinterpret_cast<int16_t*>(&r11_8) = 0xe9;
    }
    __asm__("rcr rdi, 1");
    if (1) {
        *reinterpret_cast<int16_t*>(&rdi7) = 0x8759;
    }
    __asm__("rcl si, 1");
    __asm__("xadd r10b, r10b");
    __asm__("ror r12w, 1");
    __asm__("rcl r8d, 1");
    __asm__("rcl r11d, 1");
    return 0x2a845e7ab6e6d86b - rdi7 + 0x1b2547b8cefc68f1 + 0x2c1961342e1fbd01 + 0x2e190ba8d955d6fa + r11_8 + 0x97dc - 0x7b32b7a38421f74f - 0x2c5c5521e4f8b787 + 0x44b236737c1e1474 + 0x4198d77e1328f185;
}

int64_t log_size_4_var_010(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    int64_t r15_8;

    r14_7 = 0x3f5f97c00bfffa40;
    __asm__("ror r11w, cl");
    __asm__("shrd r13W, r15w, cl");
    *reinterpret_cast<signed char*>(&r14_7) = -64;
    __asm__("btr r12d, 0xbd");
    *reinterpret_cast<uint32_t*>(&r15_8) = 0x26b0ffe4 >> 84;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_8) + 4) = 0;
    __asm__("ror rbx, cl");
    __asm__("rcr r13d, 0x23");
    __asm__("ror r11d, 1");
    return 0x7eca138269580c41 - r14_7 + r15_8 + 0x154342c561ccbfb1;
}

int64_t log_size_4_var_037(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t rdx8;

    rcx7 = 0x92dcf4ec35a9ccc6;
    rdx8 = 0xa1aa974bea2c8c2e;
    *reinterpret_cast<int16_t*>(&rdx8) = __intrinsic();
    if (1) {
        *reinterpret_cast<int32_t*>(&rcx7) = 0x35a9ccc6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    __asm__("rcr r15w, cl");
    __asm__("ror r8w, 0x15");
    __asm__("shld r8w, r14w, 0x1");
    return 0x4423b3f3ec7e836d + rcx7 + rdx8 + 0xffffffc6 - 0x1aff22d8b386d48a + 0x7c1f8009 + 0x4bbed1f2 + 0x27a90006cbdd5316 + 0x2e5b133f + 0x6b32148b6a4b2f6f + 0x2ca8c10db7828bbb + 0x2fec1f7f - 0xc32d95333213941 + 0x71cbaac6d075f37b;
}

uint64_t log_size_4_var_058(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rdx8;
    int64_t r15_9;

    rax7 = 0xf3105f13ca8cb22b;
    rdx8 = 0x6b673a64639d4373;
    __asm__("bts r14d, 0x88");
    *reinterpret_cast<int32_t*>(&r15_9) = -0x3491ddc0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx8) + 1) = -0x6b;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(43 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx8) + 1) + reinterpret_cast<uint1_t>(43 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx8) + 1))))));
    __asm__("rcr r12, 1");
    __asm__("shrd dx, r15w, cl");
    return rax7 - 0x6a7e0174bdf159 + 0x1be3a2a45107d808 + rdx8 - 0x225cc93bf4a3a151 + 0x63f42e6742f2e794 - 0x4f11b7bd7980872b - 0x31c3285e0bbd61c1 - 0x273aa847b2852d11 - 0x38b732b39afd56d1 - 0x72dfdfec432e6e1f + (0x60d3bcd816c1f19f + rdx8 + static_cast<uint64_t>(__intrinsic())) + 0xf9753700 - 0x730c37667bb7e9fb + r15_9 - 0x3b2a115fafdef02;
}

int64_t log_size_4_var_068(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t rdx8;
    int64_t rsi9;

    rcx7 = 0x26f81cbf79e90384;
    rdx8 = 0x10ef591036c9eee8;
    rsi9 = 0x7e00bb6ddbef3fe0;
    __asm__("rol edi, cl");
    __asm__("ror r9d, cl");
    __asm__("shld r9d, ebx, 0xd1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi9) = 0x36c9eee8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx8) = 0xdbef3fe0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
    }
    __asm__("bts r10, rax");
    *reinterpret_cast<uint16_t*>(&rdx8) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx8) - 0x3099)));
    if (1 != __intrinsic()) {
        *reinterpret_cast<int32_t*>(&rcx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    return 0x292a8202a4a6ea51 - rcx7 + rdx8 + rsi9 + 0x30797318c54f07e8 + 0x1fc51e0ee4c0217f - 0xc8fd3774f431eb6 - 0x6382484685d589aa - 0x43cf15660b4f1dfe - 0x5df9d92d76bbf97a + 0x298870fa + 0xa86bf053 + 0x72aa3b552f5e925f + 0x6c72fb7be7baa2d8;
}

int64_t log_size_4_var_083(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rdx7;

    rdx7 = 0xf61e6c6d3d0ccfa7;
    __asm__("rol r8, 0x39");
    __asm__("shrd r13W, r9w, 0x1");
    __asm__("rcl r13W, 1");
    __asm__("btr r11, 0x19");
    *reinterpret_cast<int16_t*>(&rdx7) = __intrinsic();
    return 0x26ab683257d30e2d + rdx7 - 0x2884250851a5ab6d + 0x732c19c24d159085 + 0x703adddb8c468f50 + 0x6701a311 + 0x7970a066842c359c + 0xb467c980 + 0xffff - 0xa88598149b16d80 - 0x38c364cbba6c4be1 + 0x6989c6586f83f3e6 + 0x3069ffbded700992;
}

uint64_t log_size_4_var_088(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    int64_t r8_8;
    uint64_t tmp64_9;
    uint64_t rdi10;
    uint1_t cf11;

    rbp7 = 0x40207f3019c8d88f;
    r8_8 = 0x3096410699bd619d;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r8_8) = 0x99bd619d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    }
    __asm__("rcr eax, cl");
    tmp64_9 = 0x87e4689b24b49eb4 + __intrinsic();
    rdi10 = tmp64_9;
    cf11 = reinterpret_cast<uint1_t>(0x8f < reinterpret_cast<unsigned char>(99 - reinterpret_cast<uint1_t>(tmp64_9 < 0x87e4689b92c78f2c)));
    *reinterpret_cast<unsigned char*>(&rbp7) = reinterpret_cast<unsigned char>(0x8f - reinterpret_cast<unsigned char>(99 - cf11));
    if (0x8f > reinterpret_cast<unsigned char>(99 - cf11)) {
        *reinterpret_cast<int16_t*>(&rdi10) = 0x847;
    }
    __asm__("rcl dh, 0x80");
    __asm__("rol rsi, cl");
    return 0x7070eb7bbfca3a61 - rbp7 + 0x5e1cc7776c2f8cd5 + rdi10 + r8_8 - 0xfdcaf107113f7b9 - 0x1af7aeb031a9f7b9 + 0x109788c2943ece48 + 0x5d21851ffd0c7bdf - 0x17082f580178e268 - 0x182645597c5696a8 + (0x72bdccb53070e46f >> 74) + 0x217b3b1bcbbd399f;
}

uint64_t log_size_4_var_097(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("rol esi, 0xa2");
    __asm__("shrd r15w, r8w, 0x3");
    __asm__("shld rbx, r10, 0x1");
    __asm__("cwd ");
    return 0x3cf928a7f9a23a71 - (0x7e0b13df32e1dbdc + static_cast<uint64_t>(__intrinsic())) + 0x465c7370 - 0x186c362c4bad290a + 0x1b11d46bee03375d - 0x5c0a72b11efd64ce - 0x3809cb134d7ef64f + 0x1d48649da6dbac76 + 0x107704a11b8bffbc + 0x358cfa3f78a315bc + 0x218c001e6080049c + 0x59a59826cbd1ba1d - 0x222b24ca29ca8e87;
}

int64_t log_size_4_var_011(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;

    rax7 = 0xd7ee1b128aef6742;
    __asm__("shrd rsi, rbx, 0xb0");
    __asm__("btc rbx, rsi");
    __asm__("rcl r15b, cl");
    __asm__("btr r12w, di");
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<uint1_t>(!__intrinsic());
    return rax7 - 0x184dffff51e93636 + 0x7ac896ebea71ee91 + 0x3a4c1bfc14250086 + 0x6434e8aaf659169c - 0x35bd705114726205 + 0x64407dcc9038437d - 0x252a74767990d9e1 + 0x48cf7cf0b4e71ae3 + 0x2c6a350005b5e9c6 + 0x1a149759138763a - 0x2d32cc5af841af19 + 0x51db28ecfcb9bb00 - 0x3ba20f21d98bdc0b + 0x5e2e0aed11a607cb + 0x29f03e29692fe37c;
}

int64_t log_size_4_var_012(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rdi8;
    int64_t r11_9;
    int64_t r12_10;
    int64_t rdx11;
    int16_t ax12;
    int64_t r13_13;

    rax7 = 0x4ca2fa5b4f17aae8;
    rdi8 = 0xcd082fe03bf8ac0c;
    r11_9 = 0x627ef550d42bb06;
    r12_10 = 0xbe7e65426595410a;
    __asm__("ror rdi, cl");
    if (1) {
        *reinterpret_cast<int32_t*>(&r11_9) = 0x3383c219;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_9) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&rdx11) = 0x7a1a3820 - __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
    __asm__("shld ebp, edx, cl");
    __asm__("shrd r14, r9, 0x1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rdi8) = 0x410a;
    }
    __asm__("btc rsi, 0x6b");
    __asm__("shld r8, r13, 0x5f");
    ax12 = reinterpret_cast<int16_t>(-24 * *reinterpret_cast<signed char*>(&r11_9));
    *reinterpret_cast<int32_t*>(&r13_13) = 0x22bcb1c9 >> -97;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rax7) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax12) * 0xff9b);
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_10) = 0xc450;
    }
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax7) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax7) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax7) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax7))))));
    return rax7 + 0x672601b9f03ed33b - 0x64e146fe3b3ca461 + rdx11 + 0x25f3f3df84242808 - 0x1700c9e8cae70720 + rdi8 + 0xfcce7758f99af3e + 0xada7ddeaebc450 - 0x6b423aa7b39a3e00 + r11_9 + r12_10 + r13_13 - 0x68997d2c17a8822a - 0x34731df1cc7c3de7 + 0x1d30e72708c3af25;
}

uint64_t log_size_4_var_059(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t r10_7;

    __asm__("rcl sil, cl");
    __asm__("bsr r8, r15");
    __asm__("shld r11, r13, cl");
    __asm__("ror r14d, 1");
    r10_7 = 0xbfec34efc9b58547 >> -7;
    __asm__("btr ecx, r14d");
    __asm__("rcl r8d, 1");
    __asm__("rol edx, cl");
    *reinterpret_cast<signed char*>(&r10_7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_7) - 19);
    return 0x16b5789026dd81ed - (0x6c473953103235c - static_cast<uint64_t>(reinterpret_cast<uint1_t>(0x16b5789026dd81ed < 0x6c473953103235c - static_cast<uint64_t>(__intrinsic())))) - 0x2d91e40c0b2ca43d - 0x21f2c2746895f507 + 0x275e617a59b5ff6f - 0x3adf2c9a94d12eb8 - 0x66ef2ac28d025027 - 0x6c473953103235c + 0x5d8642ea01e83d11 + 0x540afe331d59e556 + r10_7 - 0x72f55a16573dff91 + 0x6b81c87505e023db + 0xed - 0x7b970eafc1544534 - 0x67794b751ba5109f - 0x5968b85b96e5ad82;
}

uint64_t log_size_4_var_060(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;

    __asm__("btc r11, 0xe0");
    __asm__("shld r10d, r9d, 0x1");
    __asm__("shrd rdx, rdx, 0xd0");
    rax7 = 0x6ade;
    if (!__intrinsic()) {
        rax7 = 0x54fcc92c;
    }
    __asm__("rcl dx, 1");
    __asm__("rcr r8, 1");
    return rax7 + 0x24f246fa5d3f0b5c + 0x54fc002c + 0x5a937d05f1650777 + (reinterpret_cast<uint64_t>(0x529f738afcfc83eb >> 66) >> 13) + 0x6c25e08dd9a8a920 - 0x6bf19f2b2bcb41a5 - 0x711f798a694c086 - 0x483c426dad5211f3 - 0x557b1b09899517b8 + 0x711ff23f6b2e6a01 + 0x571eae5995c8397a + 0xe848 + 0x3bf90f20 + 0x67cc235c72cef3fb - 0x10e40debb529ee72;
}

int64_t log_size_4_var_084(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t r14_8;

    rax7 = 0x1d2238af6b12d040;
    r14_8 = 0x6d2f810bed7ff3b;
    if (0) {
        *reinterpret_cast<int16_t*>(&r14_8) = 0x9c68;
    }
    __asm__("xadd rbp, r11");
    __asm__("bsf bx, cx");
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(0xd040 >> 48);
    __asm__("btc r10d, r11d");
    __asm__("btr bx, 0x87");
    __asm__("ror r13W, cl");
    __asm__("ror bh, 0x72");
    __asm__("bsr edi, r14d");
    return rax7 + 0x2a049a23080a81cb - 0x803daaab76955dd - 0x302b67c5b806c3a6 + 0x27aa81b71cbceeb8 + 0x30f99446f55257cd + 0xa3 + 0x51b552b15c920924 - 0x1d2fde1daf2547c9 - 0x41d9619da9228289 + 0x11958475db544d9c + 0x4742843f35679c68 + 0xda903181 + r14_8 - 0x23769d71fde65590;
}

int64_t log_size_4_var_098(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t r14_8;

    rbx7 = 0xd871c82e4f361d4b;
    r14_8 = 0x1f7498d0363ee706;
    __asm__("btc r12, 0x38");
    __asm__("rcr r13W, 1");
    *reinterpret_cast<uint16_t*>(&r14_8) = reinterpret_cast<uint16_t>(0xe706 >> -79);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbx7) = 0xfe85;
    }
    __asm__("rcr rdi, 1");
    __asm__("btr bp, cx");
    __asm__("rcr ebp, 1");
    return 0xbd4d71c03eefe85 + rbx7 + 0x32285f8a9ef812b1 - 0x3a7c72fce4e60210 + 0x49949c79 - 0x46fb21e9c7111155 - 0x3044030bd4f7b6b0 + 0x6a24bf8057b782da - 0x65ba485098eacbc2 - 0x63189b1db219c385 - 0x3c7e2ba4f0866f9a - 0x319a4412511b02b2 - 0x41995064cdcfd3e7 + r14_8 + 0x680feec049949c60 - 0x76fa0bef7d89a3ac;
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

void fun_401383() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x408d20, 0x408d90, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_4013b3() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_401433() {
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

int64_t fun_401463() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_408d23(int32_t edi, int64_t rsi, int64_t rdx) {
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
            *reinterpret_cast<int64_t*>(0x40ae10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_408d93() {
    __asm__("cli ");
    return;
}

void fun_408d9b() {
    __asm__("cli ");
    return;
}

int64_t g40b010 = 0;

void fun_401036() {
    goto g40b010;
}

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    uint64_t rax8;
    int64_t rax9;
    uint64_t rax10;
    int64_t rax11;
    int64_t rax12;
    uint64_t rax13;
    int64_t rax14;
    int64_t rax15;
    int64_t rax16;
    int64_t rax17;
    int64_t rax18;
    int64_t rax19;
    int64_t rax20;
    int64_t rax21;
    int64_t rax22;
    int64_t rax23;
    int64_t rax24;
    uint64_t rax25;
    int64_t rax26;
    int64_t rax27;
    int64_t rax28;
    int64_t rax29;
    int64_t rax30;
    int64_t rax31;
    int64_t rax32;
    int64_t rax33;
    int64_t rax34;
    int64_t rax35;
    int64_t rax36;
    int64_t rax37;
    uint64_t rax38;
    int64_t rax39;
    int64_t rax40;
    int64_t rax41;
    int64_t rax42;
    int64_t rax43;
    int64_t rax44;
    uint64_t rax45;
    int64_t rax46;
    uint64_t rax47;
    int64_t rax48;
    uint64_t rax49;
    int64_t rax50;
    uint64_t rax51;
    int64_t rax52;
    int64_t rax53;
    uint64_t rax54;
    int64_t rax55;
    int64_t rax56;
    int64_t rax57;
    int64_t rax58;
    int64_t rax59;
    int64_t rax60;
    uint64_t rax61;
    int64_t rax62;
    int64_t rax63;
    int64_t rax64;
    uint64_t rax65;
    uint64_t rax66;
    uint64_t rax67;
    uint64_t rax68;
    int64_t rax69;
    int64_t rax70;
    int64_t rax71;
    int64_t rax72;
    int64_t rax73;
    int64_t rax74;
    int64_t rax75;
    uint64_t rax76;
    int64_t rax77;
    int64_t rax78;
    int64_t rax79;
    int64_t rax80;
    int64_t rax81;
    int64_t rax82;
    uint64_t rax83;
    uint64_t rax84;
    int64_t rax85;
    int64_t rax86;
    int64_t rax87;
    int64_t rax88;
    int64_t rax89;
    int64_t rax90;
    int64_t rax91;
    int64_t rax92;
    int64_t rax93;
    int64_t rax94;
    uint64_t rax95;
    int64_t rax96;
    int64_t rax97;
    int64_t rax98;
    int64_t rax99;
    uint64_t rax100;
    int64_t rax101;
    int64_t rax102;
    int64_t rax103;
    uint64_t rax104;
    int64_t rax105;
    uint64_t rax106;

    rax7 = log_size_4_var_000(rdi, rsi, rdx, rcx, r8, r9);
    rax8 = log_size_4_var_001(rdi, rsi, rdx, rcx, r8, r9);
    rax9 = log_size_4_var_002(rdi, rsi, rdx, rcx, r8, r9);
    rax10 = log_size_4_var_003(rdi, rsi, rdx, rcx, r8, r9);
    rax11 = log_size_4_var_004(rdi, rsi, rdx, rcx, r8, r9);
    rax12 = log_size_4_var_005(rdi, rsi, rdx, rcx, r8, r9);
    rax13 = log_size_4_var_006(rdi, rsi, rdx, rcx, r8, r9);
    rax14 = log_size_4_var_007(rdi, rsi, rdx, rcx, r8, r9);
    rax15 = log_size_4_var_008(rdi, rsi, rdx, rcx, r8, r9);
    rax16 = log_size_4_var_009(rdi, rsi, rdx, rcx, r8, r9);
    rax17 = log_size_4_var_010(rdi, rsi, rdx, rcx, r8, r9);
    rax18 = log_size_4_var_011(rdi, rsi, rdx, rcx, r8, r9);
    rax19 = log_size_4_var_012(rdi, rsi, rdx, rcx, r8, r9);
    rax20 = log_size_4_var_013(rdi, rsi, rdx, rcx, r8, r9);
    rax21 = log_size_4_var_014(rdi, rsi, rdx, rcx, r8, r9);
    rax22 = log_size_4_var_015(rdi, rsi, rdx, rcx, r8, r9);
    rax23 = log_size_4_var_016(rdi, rsi, rdx, rcx, r8, r9);
    rax24 = log_size_4_var_017(rdi, rsi, rdx, rcx, r8, r9);
    rax25 = log_size_4_var_018(rdi, rsi, rdx, rcx, r8, r9);
    rax26 = log_size_4_var_019(rdi, rsi, rdx, rcx, r8, r9);
    rax27 = log_size_4_var_020(rdi, rsi, rdx, rcx, r8, r9);
    rax28 = log_size_4_var_021(rdi, rsi, rdx, rcx, r8, r9);
    rax29 = log_size_4_var_022(rdi, rsi, rdx, rcx, r8, r9);
    rax30 = log_size_4_var_023(rdi, rsi, rdx, rcx, r8, r9);
    rax31 = log_size_4_var_024(rdi, rsi, rdx, rcx, r8, r9);
    rax32 = log_size_4_var_025(rdi, rsi, rdx, rcx, r8, r9);
    rax33 = log_size_4_var_026(rdi, rsi, rdx, rcx, r8, r9);
    rax34 = log_size_4_var_027(rdi, rsi, rdx, rcx, r8, r9);
    rax35 = log_size_4_var_028(rdi, rsi, rdx, rcx, r8, r9);
    rax36 = log_size_4_var_029(rdi, rsi, rdx, rcx, r8, r9);
    rax37 = log_size_4_var_030(rdi, rsi, rdx, rcx, r8, r9);
    rax38 = log_size_4_var_031(rdi, rsi, rdx, rcx, r8, r9);
    rax39 = log_size_4_var_032(rdi, rsi, rdx, rcx, r8, r9);
    rax40 = log_size_4_var_033(rdi, rsi, rdx, rcx, r8, r9);
    rax41 = log_size_4_var_034(rdi, rsi, rdx, rcx, r8, r9);
    rax42 = log_size_4_var_035(rdi, rsi, rdx, rcx, r8, r9);
    rax43 = log_size_4_var_036(rdi, rsi, rdx, rcx, r8, r9);
    rax44 = log_size_4_var_037(rdi, rsi, rdx, rcx, r8, r9);
    rax45 = log_size_4_var_038(rdi, rsi, rdx, rcx, r8, r9);
    rax46 = log_size_4_var_039(rdi, rsi, rdx, rcx, r8, r9);
    rax47 = log_size_4_var_040(rdi, rsi, rdx, rcx, r8, r9);
    rax48 = log_size_4_var_041(rdi, rsi, rdx, rcx, r8, r9);
    rax49 = log_size_4_var_042(rdi, rsi, rdx, rcx, r8, r9);
    rax50 = log_size_4_var_043(rdi, rsi, rdx, rcx, r8, r9);
    rax51 = log_size_4_var_044(rdi, rsi, rdx, rcx, r8, r9);
    rax52 = log_size_4_var_045(rdi, rsi, rdx, rcx, r8, r9);
    rax53 = log_size_4_var_046(rdi, rsi, rdx, rcx, r8, r9);
    rax54 = log_size_4_var_047(rdi, rsi, rdx, rcx, r8, r9);
    rax55 = log_size_4_var_048(rdi, rsi, rdx, rcx, r8, r9);
    rax56 = log_size_4_var_049(rdi, rsi, rdx, rcx, r8, r9);
    rax57 = log_size_4_var_050(rdi, rsi, rdx, rcx, r8, r9);
    rax58 = log_size_4_var_051(rdi, rsi, rdx, rcx, r8, r9);
    rax59 = log_size_4_var_052(rdi, rsi, rdx, rcx, r8, r9);
    rax60 = log_size_4_var_053(rdi, rsi, rdx, rcx, r8, r9);
    rax61 = log_size_4_var_054(rdi, rsi, rdx, rcx, r8, r9);
    rax62 = log_size_4_var_055(rdi, rsi, rdx, rcx, r8, r9);
    rax63 = log_size_4_var_056(rdi, rsi, rdx, rcx, r8, r9);
    rax64 = log_size_4_var_057(rdi, rsi, rdx, rcx, r8, r9);
    rax65 = log_size_4_var_058(rdi, rsi, rdx, rcx, r8, r9);
    rax66 = log_size_4_var_059(rdi, rsi, rdx, rcx, r8, r9);
    rax67 = log_size_4_var_060(rdi, rsi, rdx, rcx, r8, r9);
    rax68 = log_size_4_var_061(rdi, rsi, rdx, rcx, r8, r9);
    rax69 = log_size_4_var_062(rdi, rsi, rdx, rcx, r8, r9);
    rax70 = log_size_4_var_063(rdi, rsi, rdx, rcx, r8, r9);
    rax71 = log_size_4_var_064(rdi, rsi, rdx, rcx, r8, r9);
    rax72 = log_size_4_var_065(rdi, rsi, rdx, rcx, r8, r9);
    rax73 = log_size_4_var_066(rdi, rsi, rdx, rcx, r8, r9);
    rax74 = log_size_4_var_067(rdi, rsi, rdx, rcx, r8, r9);
    rax75 = log_size_4_var_068(rdi, rsi, rdx, rcx, r8, r9);
    rax76 = log_size_4_var_069(rdi, rsi, rdx, rcx, r8, r9);
    rax77 = log_size_4_var_070(rdi, rsi, rdx, rcx, r8, r9);
    rax78 = log_size_4_var_071(rdi, rsi, rdx, rcx, r8, r9);
    rax79 = log_size_4_var_072(rdi, rsi, rdx, rcx, r8, r9);
    rax80 = log_size_4_var_073(rdi, rsi, rdx, rcx, r8, r9);
    rax81 = log_size_4_var_074(rdi, rsi, rdx, rcx, r8, r9);
    rax82 = log_size_4_var_075(rdi, rsi, rdx, rcx, r8, r9);
    rax83 = log_size_4_var_076(rdi, rsi, rdx, rcx, r8, r9);
    rax84 = log_size_4_var_077(rdi, rsi, rdx, rcx, r8, r9);
    rax85 = log_size_4_var_078(rdi, rsi, rdx, rcx, r8, r9);
    rax86 = log_size_4_var_079(rdi, rsi, rdx, rcx, r8, r9);
    rax87 = log_size_4_var_080(rdi, rsi, rdx, rcx, r8, r9);
    rax88 = log_size_4_var_081(rdi, rsi, rdx, rcx, r8, r9);
    rax89 = log_size_4_var_082(rdi, rsi, rdx, rcx, r8, r9);
    rax90 = log_size_4_var_083(rdi, rsi, rdx, rcx, r8, r9);
    rax91 = log_size_4_var_084(rdi, rsi, rdx, rcx, r8, r9);
    rax92 = log_size_4_var_085(rdi, rsi, rdx, rcx, r8, r9);
    rax93 = log_size_4_var_086(rdi, rsi, rdx, rcx, r8, r9);
    rax94 = log_size_4_var_087(rdi, rsi, rdx, rcx, r8, r9);
    rax95 = log_size_4_var_088(rdi, rsi, rdx, rcx, r8, r9);
    rax96 = log_size_4_var_089(rdi, rsi, rdx, rcx, r8, r9);
    rax97 = log_size_4_var_090(rdi, rsi, rdx, rcx, r8, r9);
    rax98 = log_size_4_var_091(rdi, rsi, rdx, rcx, r8, r9);
    rax99 = log_size_4_var_092(rdi, rsi, rdx, rcx, r8, r9);
    rax100 = log_size_4_var_093(rdi, rsi, rdx, rcx, r8, r9);
    rax101 = log_size_4_var_094(rdi, rsi, rdx, rcx, r8, r9);
    rax102 = log_size_4_var_095(rdi, rsi, rdx, rcx, r8, r9);
    rax103 = log_size_4_var_096(rdi, rsi, rdx, rcx, r8, r9);
    rax104 = log_size_4_var_097(rdi, rsi, rdx, rcx, r8, r9);
    rax105 = log_size_4_var_098(rdi, rsi, rdx, rcx, r8, r9);
    rax106 = log_size_4_var_099(rdi, rsi, rdx, rcx, r8, r9);
    if (rax7 + rax8 + rax9 + rax10 + rax11 + rax12 + rax13 + rax14 + rax15 + rax16 + rax17 + rax18 + rax19 + rax20 + rax21 + rax22 + rax23 + rax24 + rax25 + rax26 + rax27 + rax28 + rax29 + rax30 + rax31 + rax32 + rax33 + rax34 + rax35 + rax36 + rax37 + rax38 + rax39 + rax40 + rax41 + rax42 + rax43 + rax44 + rax45 + rax46 + rax47 + rax48 + rax49 + rax50 + rax51 + rax52 + rax53 + rax54 + rax55 + rax56 + rax57 + rax58 + rax59 + rax60 + rax61 + rax62 + rax63 + rax64 + rax65 + rax66 + rax67 + rax68 + rax69 + rax70 + rax71 + rax72 + rax73 + rax74 + rax75 + rax76 + rax77 + rax78 + rax79 + rax80 + rax81 + rax82 + rax83 + rax84 + rax85 + rax86 + rax87 + rax88 + rax89 + rax90 + rax91 + rax92 + rax93 + rax94 + rax95 + rax96 + rax97 + rax98 + rax99 + rax100 + rax101 + rax102 + rax103 + rax104 + rax105 + rax106) {
        fun_401030("sum==0", "source_complex_with_base_100_funcs_of_size_16.c", 0xd3, "main");
    } else {
        return 0;
    }
}
