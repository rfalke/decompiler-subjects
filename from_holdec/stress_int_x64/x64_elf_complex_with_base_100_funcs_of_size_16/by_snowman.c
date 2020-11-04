
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

uint64_t log_size_4_var_000(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r8_4;
    int64_t r12_5;
    uint64_t rcx6;

    rax3 = 0xb9b7d6c77b52300b;
    r8_4 = 0x21f56542e2152e5d;
    r12_5 = 0xcf5c3cb339dd7e21;
    rcx6 = 0xa52528dd4fb83147;
    __asm__("shrd r10, r13, 0x1");
    __asm__("rcr ebp, 0xa8");
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0x4fb83147;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx6) = 0xe2152e5d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r12_5) = reinterpret_cast<uint16_t>(0x7e21 >> 19);
    __asm__("rcl r9, 1");
    *reinterpret_cast<uint16_t*>(&rax3) = reinterpret_cast<uint16_t>(0x300b - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_4) + reinterpret_cast<uint1_t>(0x300b < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8_4))))));
    return rax3 - 0x390ff673104dcb04 + (rcx6 ^ 0x11cb5646106ce8f7) + 0x6b977c14bfc31108 + 0xf52b - 0x4f891208bd5b0ad5 + 0x42b2a54f02dadeba + r8_4 + 0x11cb5646106ce8f7 + 0x14e8609ac97d006a - 0x21bcf38cbefffcb6 + r12_5 - 0x4a91cb65bc5cfa96 - 0x557f2c69960e4afb + 0x6c5fbed8af76e4e7 + 0x5b72162f898a73e7;
}

int64_t log_size_4_var_001(int64_t rdi, int64_t rsi) {
    __asm__("ror r15w, cl");
    __asm__("rol di, 0x8a");
    __asm__("ror bpl, 1");
    __asm__("rcr r10b, 0xeb");
    __asm__("shld bx, r12w, cl");
    __asm__("shld ebx, ebx, cl");
    __asm__("rcl rdi, 1");
    return 0x507dd8e323300203 - __intrinsic() + 0x459f9dfc31251959 + 0x4f6045843f222a9b + 0x4d771bd50728fd71 + 0x381b3642b828aef7 + 0x15420cd62fd0f579 + 0x5af6f768f0a359fa - 0x15a1a19dbdae9589 - 0x32eebbba1095397f + 0x6d01b83afaba430e - 0x1029ff216156fb74 - 0x352ed7e82b605067 + 0x7c84eccffc3dc7b8;
}

int64_t log_size_4_var_003(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t r15_4;
    int64_t rdx5;

    rbx3 = 0x746a3c0175415547;
    r15_4 = 0x23101af88ef4eaae;
    *reinterpret_cast<int32_t*>(&rdx5) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx3) + 1) = reinterpret_cast<unsigned char>(0xbb + __intrinsic());
    __asm__("shld dx, r8w, cl");
    if (0) {
        r15_4 = rdx5;
    }
    __asm__("shrd r15w, r9w, 0x1");
    return 0x1d4f15b880a40b67 - rbx3 + 0xacb6807a0233b00 + __intrinsic() + 0x1471ade2094b8916 - 0x1491eadca3822d5d + 0x1516315384f2ca88 + 0x89cdb5c8ed18c0a + 0x6a1f794ae104ff00 + 42 - 0x399c7460f95576ea + 0x75619d49 - 0x6f3d6b4d59c922d6 - 0x6c8c13281b132f0b + r15_4 - 0x2903c30e0f671c48;
}

uint64_t log_size_4_var_004(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rsi4;
    int64_t r14_5;
    uint64_t r9_6;
    uint1_t cf7;

    rax3 = 0x4c362281e21d8df;
    rsi4 = 0x2533cfe2f6f25a4b;
    r14_5 = 0xbe81e0dc5180679a;
    __asm__("ror bh, 1");
    __asm__("btr r15w, r10w");
    r9_6 = 0x104155b2e5ce9268 + static_cast<uint64_t>(cf7);
    *reinterpret_cast<int16_t*>(&r14_5) = *reinterpret_cast<signed char*>(&r9_6);
    *reinterpret_cast<int16_t*>(&rax3) = reinterpret_cast<int16_t>(-33 * *reinterpret_cast<signed char*>(&r14_5));
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0;
    }
    __asm__("rcl ecx, 1");
    return rax3 - 0x47a47c6bdf5ab3e4 + 0x5a085eaa596d13d0 - 0x3f267e3f0b7200b + 0x56f345ff5ef8e5f4 + rsi4 + 0x185ae33a + 0xdc2f8729 + r9_6 - 0x2fac692149dc3328 + 0x4964002cd4603890 - 0x139025e4b69ba8dd - 0x31a4cf01767de871 + r14_5 + 0x5ec634e386b8dc3e - 0x122bd17266d196ed;
}

int64_t log_size_4_var_005(int64_t rdi, int64_t rsi) {
    int64_t r12_3;
    int64_t rdx4;

    r12_3 = 0x5244b63798941b20;
    __asm__("ror r10b, cl");
    __asm__("cdq ");
    if (1 != __intrinsic()) {
        r12_3 = 0x571edf266d20cb74;
    }
    __asm__("shld r14w, di, 0xa");
    *reinterpret_cast<int32_t*>(&rdx4) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    return 0x862151c059b5327 + rdx4 - 0x11b9ce67d6c64d07 - 0x2f11b10ae15c202a + 0xaf842cbd + 0xfcda6a43 - 0xcb235a97ba26c93 + 0x7e26a1b9dda80000 + 0x5b295090f3be18c5 + r12_3 + 0x41f488b4b1932d93 + 0x571edf266d20cb74 + 0x77a2062da075e361 + 0x8d189726c84a8a0;
}

int64_t log_size_4_var_006(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r11_4;

    rax3 = 0x76079561e0ab1e0b;
    r11_4 = 0xc2a78b6470e17148;
    __asm__("shrd ecx, r10d, 0x1");
    *reinterpret_cast<unsigned char*>(&r11_4) = reinterpret_cast<unsigned char>(72 >> -71);
    if (1) {
        rax3 = 0x16797044733376fd;
    }
    __asm__("btr r12, rbp");
    __asm__("btc r9w, bx");
    __asm__("xadd ecx, ebx");
    return rax3 + 0x95da12be - 0x6a469aa3ed849247 - 0x41c4e1babd84d489 + 0x41fc4dcc + 0x37404f857af8f895 - 0x4be547bb20d39aa1 - 0x6144d64043e382a1 - 0x6aa6f16a9959eae2 - 0x5cebb3a98a4cc252 + r11_4 + 0x3079bb9377f04eb1 + 0x29663e5c + 0x439d4d921a1935fe + 0x69c8deac7ecdd5b4 - 0x37bf8e373dbb2894;
}

int64_t log_size_4_var_007(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t r14_4;

    rdx3 = 0x37eba0ee4a38324d;
    r14_4 = 0x90a531337aace6c4;
    __asm__("btr r10w, r11w");
    if (!__intrinsic()) {
        rdx3 = 0xf9c6d97aa63456e7;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rdx3) = 0xa63456e7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    }
    __asm__("lahf ");
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r14_4) = 0x8a0411a3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = 0;
    }
    __asm__("shld bp, bx, cl");
    *reinterpret_cast<uint16_t*>(&rdx3) = 0x63b;
    return 0x4a890b8e76c22362 - rdx3 + 0xa21a7d5bbccede9 + 0x75b54de902cfb529 + 0x52a7a97de2a1efbd - 0x54d22a8c75fbee5d + 0xb74e96504923ffb + 0x3aba05fd16cf8fa3 + 0x982f239d + -0x29cf4e8155a4f439 - 0x639268559cba919 + r14_4 + 0x4c40e5e3f0f7b217 + 0x6a75369d3586ae92;
}

int64_t log_size_4_var_008(int64_t rdi, int64_t rsi) {
    int64_t rax3;

    rax3 = 0xd2d3772519662d2d;
    __asm__("rcl bh, cl");
    __asm__("rcl bh, 1");
    __asm__("btc r11w, 0xa3");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<unsigned char>(0xd1 + __intrinsic());
    return rax3 + 0x772b3599047dfc88 + 0xb58760007c40000 - 0x94fcff90ac5d83 - 0x27f0a7df9f3b4a32 + 0x79ba68492b27bfba + 0xd8107c5c4521cc1 + 0x215e3bc10c08525d + 45 + 0x7a0ce0197f34d7cf + 0xb0ae1f75 + 0x1a065518bb3b27ab + 0x7efe1632 + 0x1b1f08fdf6c586b4 - 0x6dfd64a7f4c40b64 - 0x16a003385d61037e;
}

int64_t log_size_4_var_010(int64_t rdi, int64_t rsi) {
    int64_t r10_3;
    int64_t r11_4;
    int64_t r8_5;
    int64_t rdx6;

    r10_3 = 0x149c48fb0ba6ef01;
    if (0) {
        *reinterpret_cast<int16_t*>(&r10_3) = 0x5391;
    }
    __asm__("rcl rdx, 0x96");
    __asm__("btr ax, 0x67");
    *reinterpret_cast<uint32_t*>(&r11_4) = 0x7a3488d1 + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_4) + 4) = 0;
    r8_5 = 0x3fffffffffffffff;
    *reinterpret_cast<int32_t*>(&rdx6) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r8_5) = reinterpret_cast<uint16_t>(0xffff >> -85);
    __asm__("shrd rbx, rsi, 0x94");
    __asm__("rol cx, cl");
    __asm__("ror r11, 0xc");
    return 0x1198a6e531dc532e - rdx6 - 0x6c69674f549f7d6 + 0x2a05 + 0x30cf7ff3ce61d090 + r8_5 + 0xfbc73b780b4eb0d + r10_3 + r11_4 + 0x192e36a96696f588 + 0x574b076df90b38f0 - 0x785206f56ec1fc7f - 0xa378d946df5dd5e + 0x26c87cad425c4cba;
}

uint64_t log_size_4_var_011(int64_t rdi, int64_t rsi) {
    uint64_t r11_3;

    r11_3 = 0x8d2f3db5a360aa61;
    __asm__("rcr r9d, 0xf7");
    __asm__("shrd r15d, r9d, 0x1");
    *reinterpret_cast<signed char*>(&r11_3) = reinterpret_cast<signed char>(97 >> -95);
    __asm__("rcl rax, 1");
    __asm__("btc bx, ax");
    return 0xe326b13414c1504 - (r11_3 & 0x383ff454) + 0x23d71bfa5875e91 - 0x7c47c12ec158d397 + 0x2e39e068 - 0x35a96e3ffe288aee - 0x13532869911c9efc;
}

int64_t log_size_4_var_016(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t rsi4;
    int64_t rdi5;
    int64_t r12_6;
    int64_t r13_7;
    uint1_t cf8;
    int64_t rsi9;

    rdx3 = 0x9c3500af95cfd25c;
    rsi4 = 0x463fe84ef6174b0b;
    rdi5 = 0x8433eec42e97dcb6;
    r12_6 = 0x8ac77decb7f5ddff;
    r13_7 = 0x4135b3ec969396c0;
    *reinterpret_cast<int16_t*>(&r12_6) = 0xd9eb;
    if (1) {
        *reinterpret_cast<int32_t*>(&r13_7) = -55;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_7) + 4) = 0;
    }
    if (1) {
        *reinterpret_cast<int16_t*>(&rdi5) = -55;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&rdx3) = 0x4b0b;
        *reinterpret_cast<int16_t*>(&rsi4) = 0xd25c;
    }
    cf8 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi4) < 0xbe1a2d24);
    *reinterpret_cast<uint32_t*>(&rsi9) = *reinterpret_cast<uint32_t*>(&rsi4) - (0x41e5d2dc - cf8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
    __asm__("btc r15w, 0x94");
    *reinterpret_cast<unsigned char*>(&r12_6) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi9) != static_cast<uint32_t>(cf8));
    __asm__("cwd ");
    return 0x6af571d6df86952a + rdx3 + 0xfffffff5 + rsi9 + rdi5 + 0x3848d962ea300f0a - 0x6d27dd6385a91065 + 0x41739df94f4c4dc9 - 55 + r12_6 + r13_7 - 0x4d7c4860ee1fad49 - 0x198342aa523c056d + 0x444511d8f8a6848f;
}

int64_t log_size_4_var_017(int64_t rdi, int64_t rsi) {
    __asm__("lahf ");
    __asm__("rol di, cl");
    __asm__("btr eax, r13d");
    __asm__("shld r11, r15, cl");
    __asm__("rcr bpl, 1");
    return 0xdbb6f71d05aebd1e;
}

uint64_t log_size_4_var_019(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t r10_4;
    uint64_t r15_5;
    uint64_t rax6;
    int64_t rax7;
    uint1_t cf8;

    rbx3 = 0xd0ba9d8de52a6ca0;
    r10_4 = 0xd106d53f22c1962e;
    r15_5 = 0x2940dc38f450bb2f;
    __asm__("shrd esi, edi, 0x1");
    rax6 = 0x11842dedefb5c19a + static_cast<uint64_t>(__intrinsic());
    if (!rax6) {
        r15_5 = 0x20375c993a19e574;
    }
    __asm__("shld r8d, r8d, 0xfa");
    *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rax6) - 0x2b63a6c1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r10_4) = 0x2473;
    }
    __asm__("shld r14d, edi, 0x1");
    cf8 = reinterpret_cast<uint1_t>(r15_5 < 0xd0ba9d8de52a00a1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx3) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(4 - reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(4 - cf8)))));
    return rax7 + rbx3 - 0x6bf32a4e45f552a8 + 0x22843c15 - 0x449b79270e702379 + 0xfdfdbdf7 + 0xffffffd0 + 0x23b0f50b49564b9 + 0x78909ee9b6692473 + r10_4 + 0x1b25958516095c89 + 0x653c5c8dd49c593f + 0x20375c993a19e574 - 0x1a8226e23b6e0f8e + (r15_5 - (0x2f4562721ad5ff60 - static_cast<uint64_t>(cf8))) - 0x62e2fb9bf4a0eb70;
}

uint64_t log_size_4_var_020(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rcx4;
    int64_t r15_5;
    int64_t rax6;
    int64_t rbp7;

    __asm__("rol dil, 0x1a");
    __asm__("shld r14d, r14d, 0x1");
    __asm__("ror rbx, cl");
    rax3 = 0x2b69d6ac58ef0ed2;
    *reinterpret_cast<uint16_t*>(&rax3) = reinterpret_cast<uint16_t>(0xed2 >> 19);
    rcx4 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r15_5) = 0x6cd73cef - *reinterpret_cast<uint32_t*>(&rax3) * 4 + 0x93;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax6) = *reinterpret_cast<uint32_t*>(&rax3) >> *reinterpret_cast<signed char*>(&rcx4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    __asm__("rol r15d, cl");
    *reinterpret_cast<int32_t*>(&rbp7) = *reinterpret_cast<int16_t*>(&rcx4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    __asm__("shld r14, r14, 0x1");
    return rax6 + 0x7219bef365b76f69 + rcx4 - 0x3d54fa0ac76f4e8e + rbp7 - 0x113a9ca314d86318 + (0x7e74ab2b + static_cast<uint64_t>(__intrinsic())) - 0x29cb2053f2ffc5aa - 0x542e86db2c49b0cd - 0x14b373856cd73cef - 0x7e540aaa8f2beb1e + 0x23df4222e6bbd5e8 + 0x45fba9237bdc8011 + 0x3f5ee0ad4a93f382 + r15_5 - 0x6db88d6be3ac7e1b;
}

int64_t log_size_4_var_022(int64_t rdi, int64_t rsi) {
    __asm__("btc ebp, esi");
    __asm__("ror r14d, cl");
    __asm__("bts r9d, 0xce");
    __asm__("rcr r9b, 1");
    return 0x805f14317b83baae;
}

int64_t log_size_4_var_024(int64_t rdi, int64_t rsi) {
    __asm__("btr r9d, 0x9d");
    __asm__("btc rdi, r13");
    return 0xe577a48e45b464f0;
}

int64_t log_size_4_var_026(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rbx4;
    int64_t rdx5;
    int64_t r11_6;
    uint16_t ax7;

    rax3 = 0x1e1dcba7e2e57dfb;
    rbx4 = 0x385c69a95933d5c;
    rdx5 = 0xc81b41cbbf372c7a;
    r11_6 = 0x83b0b53dc54dff6f;
    ax7 = reinterpret_cast<uint16_t>(0x1377 + __intrinsic());
    __asm__("rcl edi, 1");
    __asm__("shrd dx, r9w, 0x1");
    *reinterpret_cast<int16_t*>(&rax3) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax7) * 22);
    *reinterpret_cast<unsigned char*>(&r11_6) = reinterpret_cast<unsigned char>(0x6f >> 0x92);
    __asm__("bts cx, r12w");
    *reinterpret_cast<signed char*>(&rbx4) = -92;
    if (1) {
        *reinterpret_cast<int16_t*>(&rdx5) = 0xc416;
    }
    *reinterpret_cast<unsigned char*>(&rdx5) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx5) - 82)));
    return rax3 + rbx4 - 0x51d2746544f0cbcf + rdx5 + 0x33dc4824bd809301 + 0x518b5010e7157125 - 0x7b60 + 0xeeb1efa5 + 0x13a563fd0c7ec416 - 0x21248ddceba0ff0e + r11_6 - 0xbe3b352336532a4 + 0x8009420f + 0x7bae4a6b0ad5957c - 0x7aef4e1259a0229e + 0x779f33bb95f400d5;
}

int64_t log_size_4_var_027(int64_t rdi, int64_t rsi) {
    int64_t rbp3;

    rbp3 = 0xa44f3f03d12e648f;
    if (1) {
        *reinterpret_cast<int16_t*>(&rbp3) = 0xd0d;
    }
    __asm__("shrd ax, r15w, cl");
    __asm__("ror r13d, cl");
    return 0x1a6a1198e04f7cf5 + rbp3 - 0x5458b097acd3af0d - 0x3e5abfb455857702 + 0x2c0e2138ffff2c07 - 0x6e44390243095382 - 0x2c1311f164185452 + 0xc24b5b9fd1502ab + 0x6e2bbb28f583a27b + 0x795b9d181993cdad + 0x2fb0514751239854 + 0xa3af16bf - 0x67bd78c1c5fa1f38;
}

int64_t log_size_4_var_028(int64_t rdi, int64_t rsi) {
    int64_t r15_3;

    r15_3 = 0xecdac38d61b70d70;
    if (__intrinsic()) {
        r15_3 = 0x577d8e295e06f0a;
    }
    __asm__("rol r9w, 1");
    __asm__("bsf ecx, r10d");
    __asm__("btc ebx, 0x3b");
    __asm__("shld r8d, eax, 0x1");
    __asm__("rcl r9b, 1");
    __asm__("rcr eax, 0x89");
    return 0x56b9214695d39c76 + r15_3 + 0x61b3f8cd9ac6bf7;
}

int64_t log_size_4_var_029(int64_t rdi, int64_t rsi) {
    int64_t r10_3;
    int64_t r15_4;
    int64_t r14_5;

    r10_3 = 0xf7cf78fdfb4de5e6;
    r15_4 = 0x339bcdc97a3cdb84;
    __asm__("shrd r9, r11, cl");
    __asm__("btr ax, r10w");
    if (1) {
        r10_3 = 0x1bcc92c4d2c8790b;
    }
    *reinterpret_cast<unsigned char*>(&r15_4) = reinterpret_cast<unsigned char>(0x84 >> 0x8c);
    __asm__("btr si, 0x63");
    __asm__("shld si, r8w, 0xf");
    *reinterpret_cast<int32_t*>(&r14_5) = 0xaf4a14c2 >> 0x8c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_5) + 4) = 0;
    __asm__("btr r10d, 0x9c");
    __asm__("shld r10w, ax, cl");
    __asm__("xadd r12w, r9w");
    return 0x5ca50fc7ec7671af + r10_3 + 0x1bcc92c4d2c8790b - 0x799010b388e153bc + 0x7e899719a79afe40 + r14_5 + r15_4 - 0x509194727030efe6;
}

uint64_t log_size_4_var_030(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t r10_4;
    int64_t r15_5;

    rdx3 = 0x9ef95026857b2a09;
    r10_4 = 0x5290fb51eae660a1;
    __asm__("bts ebx, r14d");
    __asm__("rcl rdx, 1");
    *reinterpret_cast<int16_t*>(&r10_4) = reinterpret_cast<int16_t>(0x60a1 >> -12);
    *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(0x736e8789 >> -12) >> -12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = 0;
    __asm__("shld r11d, eax, 0x1");
    if (!*reinterpret_cast<int32_t*>(&r15_5)) {
        *reinterpret_cast<int32_t*>(&rdx3) = 0xd5ba905d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    }
    __asm__("cwd ");
    __asm__("bts r13, r15");
    __asm__("shrd rcx, r8, cl");
    return 0x3cc3fa556bfad2ca + rdx3 - 0x6821b9bfd8308e92 + 0x545d2b2654b7ce30 - 0x3ebaf3242a456fa3 + 0x1947e0d5bb451b2a - 0x4a42bd63aa9ddb00 + (r10_4 - 0x3ebaf3242a456fa3 + 1) - 0x78dbcd35829b0492 + 0x46c5761c - 0x412413f618bfc41c - 0x6ec223f21a031ac4 + r15_5 - 0x63cce4123b28b565;
}

int64_t log_size_4_var_031(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t r15_4;

    __asm__("bsr r10d, esi");
    __asm__("ror r10b, 0x8a");
    rbp3 = 0x91a54d29876bb611 >> 0x6f;
    *reinterpret_cast<uint16_t*>(&rbp3) = 3;
    __asm__("rcr eax, 1");
    *reinterpret_cast<uint32_t*>(&r15_4) = 0x38ba1c79 >> 0x6f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = 0;
    return 0x635cf31787968f7c + rbp3 + 0x20150d45ac5a618e - 0x3533f54b13c04205 + 0xd7440c13 - 0x5b1b573b64454684 - 0x35c18ffbfb0413b5 + 0x6e2930e42a504c6c + 25 - 0xcb4fc8caddb43d4 + r15_4 - 0x1b56f842fd4dee43;
}

int64_t log_size_4_var_033(int64_t rdi, int64_t rsi) {
    __asm__("rcr r9, 1");
    __asm__("rcr r10, 1");
    return 0x3c4ad36fb755bab1;
}

int64_t log_size_4_var_035(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r12_4;

    rax3 = 0xfbd0499476e1ca5d;
    r12_4 = 0x25423764c57053b;
    __asm__("rcl si, cl");
    __asm__("ror rcx, 1");
    if (0) {
        r12_4 = 0xfbd0499476e1ca5d;
        rax3 = 0x25423764c57053b;
    }
    *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax3) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1)) + __intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) & *reinterpret_cast<unsigned char*>(&rax3));
    return rax3 + 0x1aab502ec586ce0b + 0x50521efaa5987400 + 0x8e7777448e1a203 + 0x69f5dfc400e2ebf0 + 0x55e91aa77b87011c + 0x1d11237a43fc18d0 - 0x1aa9405358dc1eba + 0x386a7631 - 0x593f79836d5887e - 0x6ea929848a1ebced + r12_4 + 0x252d14583a09c874 + 0x7b818d37eb4f4a49 - 0x66483ee6f5881f52 + 0x272bc2d3f74c43eb;
}

int64_t log_size_4_var_036(int64_t rdi, int64_t rsi) {
    int64_t r10_3;
    int64_t rax4;
    int64_t r12_5;

    r10_3 = 0x4a7225306636a453;
    if (0) {
        r10_3 = 0x3138b8a98cf84742;
    }
    __asm__("shrd r12w, r13W, 0x1");
    __asm__("ror r12d, 1");
    __asm__("rcl bp, cl");
    *reinterpret_cast<uint32_t*>(&rax4) = 0xffffaea1 >> 0xffffff91;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_5) = 0x28259888 >> 0x7d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = 0;
    __asm__("btr r11w, 0xb5");
    return rax4 + 0x7f2297efb46dfbc1 + 0x10efc6345d976b7d + 0x676bb8b306c0006 - 0x4964dae9aac52a95 - 0x88458a4a5f50f00 - 0x2fc8b1142ec88b97 - 0x31eea8dad4e50000 - 0x18218966 + r10_3 + 0x3ae581154ede5197 + r12_5 - 0x865f719d31db804 - 0x1905ee92054958a8 + 6 - 0x46d44ccbb2965f2d;
}

int64_t log_size_4_var_037(int64_t rdi, int64_t rsi) {
    __asm__("ror rbp, 0xe6");
    __asm__("shrd r10w, r9w, 0x1");
    __asm__("lahf ");
    __asm__("shld r12d, r8d, 0xaa");
    __asm__("rol di, 1");
    __asm__("rcr r11, cl");
    __asm__("rcl r13, cl");
    __asm__("bsf ecx, edx");
    __asm__("shrd edx, r14d, 0x5b");
    return 0x65b8f8b7eccf7291;
}

int64_t log_size_4_var_040(int64_t rdi, int64_t rsi) {
    int64_t r10_3;
    int64_t r13_4;

    r10_3 = 0xe6d0af8865ae158f;
    r13_4 = 0xbc1e1978ae17611b;
    __asm__("shld r11w, bx, cl");
    *reinterpret_cast<int16_t*>(&r10_3) = 0x594d;
    __asm__("ror r13, cl");
    if (0) {
        *reinterpret_cast<signed char*>(&r13_4) = 77;
        *reinterpret_cast<signed char*>(&r10_3) = 27;
    }
    __asm__("btc di, 0xec");
    __asm__("shld r10d, r12d, cl");
    __asm__("rol dl, 0x6e");
    __asm__("shld ebp, edi, 0x1");
    return 0x2a515a06ebcba1e6 + r10_3 - 0x4cf6a0703b44e54c - 0x7e12973294b0570 + r13_4 - 0x46abd3ad0a2ea6b3 - 0xe27d0132322dd1e + 0x16ff0706321aa352;
}

int64_t log_size_4_var_041(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rdx4;
    int64_t r8_5;

    rbx3 = 0xac6ae2b8f0053ad6;
    rdx4 = 0x3d365eef8652ea20;
    r8_5 = 0x34565e513c3c21e9;
    if (1) {
        *reinterpret_cast<int16_t*>(&rdx4) = 0xdb86;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx4) + 1) = 61;
    __asm__("shld rax, rdi, 0xbe");
    if (1) {
        r8_5 = 0xd7b314830b0b17e7;
    }
    *reinterpret_cast<uint16_t*>(&rbx3) = reinterpret_cast<uint16_t>(0x3ad6 >> -65);
    *reinterpret_cast<int16_t*>(&r8_5) = -*reinterpret_cast<int16_t*>(&r8_5);
    *reinterpret_cast<signed char*>(&r8_5) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r8_5));
    return 0x20a843fdd12f17f8 + rbx3 - 0x2751fe14b61427c1 + rdx4 + 0x5845b149dc38efa9 + 0x7c0e996806042c20 + 0x6f391e2c3752c70c + r8_5 - 0x7011f927805c1b73 - 0x284ceb7cf4f4e819 - 0x7ceb9e25240cd08b - 0x1e67740d033a247a + 0x763286dd7dca8a36 - 0x4867ca5ffe7ef186 + 0xc8931d92a980a9e;
}

int64_t log_size_4_var_042(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rbx4;
    int64_t rdx5;

    rax3 = 0xd74e2e29c87a0927;
    rbx4 = 0xffc0911ed8729946;
    rdx5 = 0xc426f76af7f0cdad;
    if (1) {
    }
    __asm__("rcr r9w, 0x34");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx4) + 1) = reinterpret_cast<unsigned char>(0xff >> -53);
    __asm__("rol r11, cl");
    *reinterpret_cast<signed char*>(&rbx4) = 0x8c;
    if (1) {
        rax3 = 0xfc82f4a718f97eca;
    }
    __asm__("shld rdi, r11, 0x5b");
    __asm__("bts rdi, 0x8e");
    *reinterpret_cast<unsigned char*>(&rdx5) = reinterpret_cast<unsigned char>(0xad & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1));
    return rax3 + rbx4 - 0x48d013c7f5d9b035 + rdx5 + 0x56557982700a1ce - 0x3e28ea53c94e94e6 + 0xf9851a7fcb1e611 + 0xffffff8c - 0x7a9b77dfd9d1cf76 + 0x17e3b6800f8bba37 + 0x82869441 + 0x2071607a6725ce87 - 0x37d0b58e7068136 - 0x54e708a21d0904dd - 0x44f309600ab56172 + 0x60e11860ea533421;
}

int64_t log_size_4_var_043(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t r12_4;
    int64_t r13_5;

    rdx3 = 0xb33f8a5a9693e8b4;
    r12_4 = 0x4a7526395fc4f675;
    *reinterpret_cast<signed char*>(&rdx3) = reinterpret_cast<signed char>(-76 >> 0x94);
    __asm__("ror di, 0xec");
    __asm__("ror r9d, 1");
    *reinterpret_cast<signed char*>(&r12_4) = reinterpret_cast<signed char>(0x75 >> 0x94);
    *reinterpret_cast<uint32_t*>(&r13_5) = 0x42e3c8ab | *reinterpret_cast<uint32_t*>(&r12_4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = 0;
    __asm__("rcr ecx, 0xf9");
    __asm__("btr dx, bx");
    __asm__("rcl rbx, cl");
    return 0x6f002da994e7ee07 + rdx3 + 0x62574ba50d2766f8 + 0x2c35f5407ad05e52 + 0x15e28e6449a7867b - 0x1e98b51252f8365c - 0x4bd80c4c2cb5579b + 0x5a4c9748cf5d4df8 + rdx3 + r12_4 + r13_5 + 0x69d68146c2d2b60b - 0x684884725ee4d4b - 0x5a7e27bbd8f574ce;
}

int64_t log_size_4_var_047(int64_t rdi, int64_t rsi) {
    int64_t rsi3;
    int64_t r8_4;
    int64_t r11_5;
    int64_t r14_6;
    int64_t r10_7;

    rsi3 = 0x46e34808af2b92dc;
    r8_4 = 0x64833531c30ba389;
    r11_5 = 0x1b725d96dd06f3a9;
    r14_6 = 0x9ff101c912dcf2a9;
    __asm__("ror r15d, cl");
    if (0) {
        *reinterpret_cast<int32_t*>(&r11_5) = 0xc30ba389;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_5) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r8_4) = 0xdd06f3a9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    }
    __asm__("shrd r8w, r13W, 0x4");
    __asm__("ror r11w, 0xb5");
    *reinterpret_cast<uint32_t*>(&r10_7) = 0x312e6d2f >> -44;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_7) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14_6) = 0xc228;
    if (0) {
        r14_6 = 0x8b2e3cdba5e116ab;
    }
    __asm__("bts si, r8w");
    if (1) {
        *reinterpret_cast<int16_t*>(&rsi3) = 20;
    }
    return 0x1bd8003bb13bf28c + rsi3 + 0xf177e6 + r8_4 + 0x776a56d67dc29987 + r10_7 + r11_5 - 0x1a14ec04dc16afa1 - 0x5b8844b14bddffa1 + r14_6 + 0x3b9783f9e7a343b2 + 0x229b58f16f11390b;
}

int64_t log_size_4_var_048(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rdx4;
    int64_t rdi5;

    rax3 = 0x7d873a595853a14f;
    rdx4 = 0xd86269bba34df414;
    *reinterpret_cast<uint32_t*>(&rdi5) = 0x3cb49a1e - (0x656a0069 + reinterpret_cast<uint1_t>(0x3cb49a1e < 0x656a0069 + __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    if (0) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx4) + 1) = 20;
        *reinterpret_cast<signed char*>(&rdx4) = -40;
    }
    __asm__("rol r9d, cl");
    __asm__("rol dh, 1");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int32_t*>(&rax3) = 0x97acd78;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    __asm__("btr bx, cx");
    __asm__("shld r15d, ebx, 0x1");
    return rax3 + 0x97acd78 + 0x696c334f875bfcb4 + rdx4 - 0x7b89c7b282a2c38e + 0x2abe29acd4644e8c + rdi5 + 0x3db08388b16514ee - 0x118a1fea8bd2abbc + 0x7aed7abd3b9e9554 - 0x3819f95fcca3b370 + 0x215f80ae + 0x3ed741d5a4fa458c + 0x2dc34751ceb43161 + 0x6b448361 + 0x21de72ea84d0ded5;
}

uint64_t log_size_4_var_049(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rbx4;
    int64_t rcx5;
    int64_t rdx6;
    int64_t r10_7;

    rax3 = 0x5431b9ac2a0efcbe;
    rbx4 = 0x8c194ff4ab92e764;
    rcx5 = 0x24c709e5be9a848;
    rdx6 = 0xee47746813f9fd96;
    r10_7 = 0xc7feb056ff975db7;
    __asm__("ror r12w, cl");
    __asm__("rol bx, 0x8b");
    __asm__("rol ax, 1");
    if (0) {
        rdx6 = 0x8c194ff4ab92e764;
        rbx4 = 0xee47746813f9fd96;
    }
    __asm__("cwd ");
    __asm__("xadd bl, cl");
    *reinterpret_cast<signed char*>(&rcx5) = *reinterpret_cast<signed char*>(&rdx6);
    *reinterpret_cast<signed char*>(&rdx6) = 72;
    *reinterpret_cast<unsigned char*>(&r10_7) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(__intrinsic()));
    if (1) {
        *reinterpret_cast<int32_t*>(&rax3) = 0x4593082a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    return rax3 + rbx4 + rcx5 + rdx6 + 0x58489042d22ceb0c + 0x2ebff17095cedd0d - 0x63859c9b7db61f05 + 0x364800def97bee45 + static_cast<uint64_t>(*reinterpret_cast<unsigned char*>(&rax3)) + r10_7 + 0x5b610282bbdacb38 + 0x77df729649437ed5 - 0x528ef5a6ba6cf7d6 - 0x24d2a21f0cabfd1f + 0x1ac1a121 + 0x5aa576362d73d5d;
}

int64_t log_size_4_var_050(int64_t rdi, int64_t rsi) {
    int64_t r11_3;

    __asm__("ror r9b, 1");
    __asm__("rcr ebx, cl");
    *reinterpret_cast<uint32_t*>(&r11_3) = 0xb4f0c063;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_3) + 4) = 0;
    __asm__("shld r13d, r14d, 0xab");
    __asm__("bsr r12w, r10w");
    *reinterpret_cast<int16_t*>(&r11_3) = reinterpret_cast<int16_t>(0xc063 >> -12);
    return 0x4581b9661adf1e34 - r11_3 - 0x78c498174d63ac64 + 0x716c465a2e356fa7 + 0x5a088f3da16fddec - 0x10860281ada33292 - 0x4789c4f9d454adfc;
}

int64_t log_size_4_var_052(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rbp4;
    int64_t rdi5;
    uint32_t eax6;
    int64_t rax7;
    int64_t rdx8;
    int64_t r10_9;

    rbx3 = 0xc9b5d97c9ac60901;
    rbp4 = 0x25fdcfab0dc6eccb;
    rdi5 = 0x36d803abd6b40324;
    eax6 = 0;
    __asm__("xadd rdi, r13");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax6) + 1)));
    if (__intrinsic()) {
        rdi5 = 0xc9b5d97c9ac60939;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6 * 0x74561655;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx8) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbx3) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1) = 57;
    __asm__("xadd r13W, cx");
    *reinterpret_cast<uint32_t*>(&r10_9) = 0x58f7a6a1 - (*reinterpret_cast<int32_t*>(&rdx8) + reinterpret_cast<uint1_t>(0x58f7a6a1 < *reinterpret_cast<int32_t*>(&rdx8) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(0x50c7 >> 0x939))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_9) + 4) = 0;
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp4) = 0x44711938;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = 0;
    }
    return rax7 + rbx3 + 0x39d5fca241db01fb + rdx8 + rbp4 + 0x2d7ceb3744711938 + rdi5 + 0x1576a6bde712ff30 + 0xfb61babed2e50c7 + r10_9 + 0x5e140f02e6f78825 - 0x236dbecc826d4651 - 0x7fdc6ea58ba9e9ab + 0x3035ea10d1e9059e + 0xfd908cf4 + 0x3e6064ce0b6d0fe9;
}

uint64_t log_size_4_var_053(int64_t rdi, int64_t rsi) {
    int64_t rbx3;

    rbx3 = 0x4d7fbeaac4e10fe6;
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rbx3) = 0xee4fc8a4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
    }
    __asm__("rcl r12, cl");
    if (0) {
    }
    __asm__("btc r15w, r13W");
    __asm__("btr r8, 0xba");
    return 0x71510ea37f55456b + rbx3 - 0x38011b5384657aec + 0xc6fbb590 + 0x5d3236efcc6b8664 + (0xa3165d0afc14e706 >> -37) + 0x78a56289e4bae106 - 0x601f7d0f0adfaf62 - 0x7a35503ca20e4aa9 + 0xaec42c6e + 0x4da07bdaee33dbaf - 0x28896ab6d04bdbd1 - 0x1a9dafe8e9ebd581 - 0x78d76bbf11b0375c + 0x2c6e - 0x3f911b09d2238214;
}

uint64_t log_size_4_var_054(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t r13_4;
    int64_t rbx5;
    uint1_t cf6;
    uint64_t rdx7;
    uint64_t tmp64_8;

    rdi3 = 0xc40e15084d8456ad;
    r13_4 = 0xeef630728ca6c9d9;
    *reinterpret_cast<int32_t*>(&rbx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
    __asm__("shrd rax, rbx, 0x1");
    cf6 = reinterpret_cast<uint1_t>(0x8b6b94395b34c50e < 0xed83de7 + static_cast<uint64_t>(__intrinsic()));
    rdx7 = 0x8b6b94395b34c50e - (0xed83de7 + static_cast<uint64_t>(cf6));
    if (!cf6) {
        *reinterpret_cast<int32_t*>(&r13_4) = *reinterpret_cast<int32_t*>(&rdx7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = 0;
    }
    if (reinterpret_cast<int64_t>(0x8b6b94395b34c50e) >= reinterpret_cast<int64_t>(0xed83de7 + static_cast<uint64_t>(__intrinsic()))) {
        *reinterpret_cast<int16_t*>(&rdi3) = *reinterpret_cast<int16_t*>(&rdx7);
    }
    tmp64_8 = rdx7 - 0x4cf27970;
    *reinterpret_cast<uint16_t*>(&rbx5) = reinterpret_cast<uint16_t>(0xd4ea + reinterpret_cast<uint1_t>(tmp64_8 < rdx7));
    __asm__("rcr r11d, 1");
    __asm__("rcl r13, cl");
    return 0x170de789fe576b38 + rbx5 + 0xdb0e90e66200408 + tmp64_8 + 0x77c87517401860a - 0x30c4ea61248d877 + rdi3 + 0x6f6f23b58cb058 - 0x2ec5935acf06ec31 - 0x640d05aae9604900 + 0x1f2536032437c0e3 - 0x4730c018eca92b16 + r13_4 - 0x47a638d4e990c433 - 0x2f181ae5f3f0a2ce - 0x1ccf815800d976a0;
}

int64_t log_size_4_var_055(int64_t rdi, int64_t rsi) {
    __asm__("bsf r12w, r11w");
    __asm__("rol r11w, 1");
    __asm__("rcr rdi, 0xc");
    __asm__("rcr r10w, 1");
    __asm__("rcr rbp, cl");
    __asm__("btr ebx, ecx");
    __asm__("bts r12w, 0x50");
    return 0x1d5563648e5eebd1;
}

int64_t log_size_4_var_057(int64_t rdi, int64_t rsi) {
    __asm__("shld r10d, ebx, 0x89");
    __asm__("shrd r10w, cx, 0x1");
    __asm__("btr rbx, rdx");
    __asm__("rcl rbp, 1");
    __asm__("rcr ax, 1");
    return 0x423144be70b88954 + __intrinsic() + 0x49abe8de48b8566d + 0xffffe838 - 0x736964bf287a8218 - 0x1a3c290d524cfbe6 - 0x18044496ff7d03a4 + 0x596196647e76987 + 0x7640c92c + 0x7f7b454a01c51592 + 0x6919d3471880623e + 0x1866a0650167041a + 0x324589854f086671 - 0x7ac35d07cb1a822a;
}

int64_t log_size_4_var_059(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t r12_4;
    int64_t rdx5;
    int64_t rcx6;

    rbx3 = 0xce7542f6415e7c02;
    r12_4 = 0x20483eef7fb1714;
    *reinterpret_cast<int32_t*>(&rdx5) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_4) = 0x7c02;
    }
    if (0) {
        rbx3 = 0x81a913590e412d19;
    }
    *reinterpret_cast<unsigned char*>(&rbx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx3) >> 1);
    __asm__("shrd rdx, r8, 0x1");
    *reinterpret_cast<int32_t*>(&rcx6) = 0xfd443e0d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    __asm__("xadd r9b, al");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx6) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx6) + 1) - reinterpret_cast<unsigned char>(63 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx6) + 1) < 0xc2)));
    __asm__("btc r11w, 0xfe");
    __asm__("rcl di, 1");
    return 0xe59337cc + rbx3 + rcx6 + rdx5 - 0x7e56eca6f1bed2e7 - 0x47a6ae10be4a4dd + 0xa4ab3e5155c3270 - 0x75b389c29498ed53 + 0x4b45fd8501075bb5 - 0x25d1e2ecc985e4f - 0x7f24e537b32ce372 + r12_4 - 0x66c2c5ba35f91a8d - 0x320dd53646ba98ff + 0x6ba98ea94fd1be76 + 0x12378a6abf228f9;
}

int64_t log_size_4_var_060(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t r10_4;

    rdx3 = 0x3750348c90350d8;
    r10_4 = 0xe702e07e187ecd4c;
    if (1) {
        *reinterpret_cast<int32_t*>(&r10_4) = 0x187ecd4c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_4) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r10_4) = 0x66a6;
    *reinterpret_cast<signed char*>(&r10_4) = -93;
    __asm__("bsf r11d, r9d");
    __asm__("rol r13b, cl");
    __asm__("bsr rbp, r8");
    __asm__("rol r12d, 1");
    __asm__("rol sil, 1");
    *reinterpret_cast<int16_t*>(&rdx3) = __intrinsic();
    return 0x5d8ff980390a75f4 - rdx3 - 0x3155f969765f8116 + 0x6877d6e0f56aad63 - 0x2d84278c6e90ff49 - 0x796c1039c8116000 + 0x4ac921e5db81d88 + r10_4 + 0x5dcf1204168a5a0c + 0xf2b9330a - 0x7f8b57e7bae30835 + 0x34c4a56b092d2ca6 + 0x8ce4c001 - 0x579f2a8988a5a4;
}

int64_t log_size_4_var_061(int64_t rdi, int64_t rsi) {
    int64_t r12_3;
    int64_t r8_4;

    r12_3 = 0x7049889b2b3f6d93;
    r8_4 = 0x8978541dae3f9bc0;
    if (1) {
        r12_3 = 0x927ddfe90953c977;
    }
    __asm__("bts r11d, 0x38");
    __asm__("btc ecx, r15d");
    __asm__("ror r15, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0x953c977;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    }
    return 0x43d3dadfa26f8a9b - r8_4 + 0x28f9585f3fa82710 - 0x6c0ec6f808a27c11 + 0x1a2f1ce3404b8f4e + r12_3 - 0x354783b6dbece94d - 0x50fd3705ef53d394 - 0x6d822016f6acff81 - 0x2f5e28051cc7a182;
}

int64_t log_size_4_var_062(int64_t rdi, int64_t rsi) {
    int64_t r8_3;
    int64_t r10_4;

    r8_3 = 0x341f048611f76858;
    r10_4 = 0x662963d72c2ac0e1;
    __asm__("shrd esi, ebp, cl");
    __asm__("rcl al, 1");
    __asm__("rcr r14, 1");
    __asm__("btr r14w, 0xd4");
    if (1) {
        *reinterpret_cast<int32_t*>(&r10_4) = 0x9dfdefb3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_4) + 4) = 0;
    }
    if (0) {
        r8_3 = 0x1e7e02cf;
    }
    return 0x737daf90f36d5241 + r8_3 + 0x74a31e0f3a7b60e1 + r10_4 - 0x7423ff075dc6ce29 + 0x288a03b5fee27cc1 + 0x56f51e5499f56ca3 + 0x28afb5233c125320 + 0x5a6f36c4a3f9030e + 0x699df97fa50ead0a;
}

int64_t log_size_4_var_063(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rdx4;

    __asm__("ror r9, 1");
    __asm__("ror r11w, cl");
    rdi3 = 0xffffffffc35656db;
    *reinterpret_cast<uint16_t*>(&rdi3) = reinterpret_cast<uint16_t>(0x56db >> 50);
    *reinterpret_cast<int32_t*>(&rdx4) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    __asm__("ror r11b, 0xeb");
    return 0x228be26032e9ebe4 + rdx4 + 0x6eab0a59fc191c43 - 0x514ff2312a5e07c9 + rdi3 - 0x7b95517f708cb7f6 + 0xc35656db + 0x51b30eaecf728ce1 + 0x38a10f19862565d4 + 0x72e47bd11e1ea695 - 0x153448ed9992cf63 + 0x66c0325699e017b3 + 0x4ce9d3f3c32fb257;
}

int64_t log_size_4_var_065(int64_t rdi, int64_t rsi) {
    __asm__("shld r11d, r9d, cl");
    __asm__("btr r13, r14");
    return 0xa1735f23b0def9e4;
}

int64_t log_size_4_var_069(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r12_4;

    rax3 = 0x1186447bd767c459;
    r12_4 = 0x67cdbaa8ad0df9a;
    __asm__("rol bp, 1");
    if (1) {
        rax3 = 0x55c299441f4884a4;
    }
    __asm__("rol r14w, cl");
    __asm__("bts edx, 0x79");
    *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax3) + 26)));
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_4) = 0xbe0f;
    }
    return rax3 + 0x1a5e6c204982e2a0 - 0x6eedf9263b866815 + 0x5b6d4d436266d7e + 0x5c86f356b9a56b4a + 0x82029801 + 0x2819072b594b37e8 + 0x41b7f51acfb027a8 - 0x31abf73423c6a59b + 0x262826c4 - 0x1acc8dcfa06141f1 + r12_4 + 0x351c7aa4f533c8cb + 0x55c299441f48f31b - 0x51d049a4fa76df78 + 0x4561e3393119ca0b;
}

uint64_t log_size_4_var_070(int64_t rdi, int64_t rsi) {
    uint64_t r14_3;
    uint64_t rdx4;
    uint64_t rbx5;

    *reinterpret_cast<int32_t*>(&r14_3) = 0x2b5ef43b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    __asm__("rcr r12w, 1");
    rdx4 = __intrinsic() >> -42;
    __asm__("rcl rdi, 1");
    rbx5 = 0xf7ff6e7fec395bf6;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx5) + 1) = reinterpret_cast<unsigned char>(0xf7 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx4) + 1));
    if (1) {
        r14_3 = 0x61ef4e7acc395be2;
    }
    if (1) {
        r14_3 = r14_3;
    }
    return 0x71b40394a57930b0 - rbx5 - 0x7aeb7ac88880a32a + rdx4 + 0xf96efda0 + 0x67efeefadeb97fe2 + 0x476da0d8d6997c40 + 0x10beae5a6072696e + 0x32081e2c + 0x46b38638 - 0x5bc73cd4538f056e + 0x7ab2a55c16ad491d + 0x4bfdee60 + r14_3 + 0x6a2b84d690505788 - 0x241020defaeba197;
}

int64_t log_size_4_var_071(int64_t rdi, int64_t rsi) {
    __asm__("rcl r11d, 1");
    __asm__("btc si, 0x3d");
    __asm__("ror r10b, 1");
    __asm__("ror r12, 0x65");
    __asm__("cdq ");
    return 0xcef20ffbc4ab0169;
}

int64_t log_size_4_var_075(int64_t rdi, int64_t rsi) {
    int64_t rsi3;

    rsi3 = 0xa56e850480c7d495;
    __asm__("rol si, 0xf");
    if (1) {
        *reinterpret_cast<int32_t*>(&rsi3) = 0xc9c3001c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    }
    __asm__("rcr r9d, 1");
    __asm__("rcr r8w, 1");
    __asm__("bts ax, 0x47");
    return 0x78f4647a6fcd3ba5 + rsi3 + 0x432a4179a2ecc878 + 0x56a975b1c9c3001c + 0x1f078f58f60a4de4 - 0x260beb3dfbd8a2f3 - 0x257d1e75e5806a4c - 0x2c3cfe14e6535f68 - 0x7d9e3660658baa11 - 0x4877cf0d679f88cf - 0x2c567d04d2f341f2 + 0x576a6e94468628c0;
}

uint64_t log_size_4_var_076(int64_t rdi, int64_t rsi) {
    uint64_t r8_3;

    __asm__("ror edx, cl");
    __asm__("rol ecx, 0xb5");
    r8_3 = 0xc55db70867abafcb >> 86;
    __asm__("ror r10w, 1");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic())))) {
        *reinterpret_cast<int16_t*>(&r8_3) = 0xb2d8;
    }
    __asm__("rcl cx, 1");
    return 0x76890301af029519 + __intrinsic() + 0x3c916ef0de662576 - 0x2e805cbed675935e - 0x61e47a2d6aa510d2 + r8_3 - 0x5bbd056a4de9d89 + 0x6786c3a8 + 0x379b7cf0 + 0x3a8c977a39328524 + 0x17c4e328795f7ec6 + 0x75ca3e9d593c72d2 + 0x7a19b6c6666ac922 + 0x458bb7e9e23e3411;
}

int64_t log_size_4_var_077(int64_t rdi, int64_t rsi) {
    int64_t r13_3;

    r13_3 = 0x489c94823283c453;
    __asm__("shld r9, r14, 0x1");
    __asm__("btr cx, 0x55");
    __asm__("bsf rbp, rdx");
    *reinterpret_cast<signed char*>(&r13_3) = reinterpret_cast<signed char>(83 >> 40);
    return 0x7bdbbd480ad02cf8 - r13_3 + 0x4d4845ac8c1896b4 + -0xe1950b761a072ee3 - 0x738f44b48eb0ac57;
}

int64_t log_size_4_var_079(int64_t rdi, int64_t rsi) {
    __asm__("rol r10, 1");
    __asm__("rol r10w, 1");
    __asm__("rol r9, cl");
    __asm__("bsr r9w, r13W");
    __asm__("shrd ecx, r13d, 0x84");
    return 0xefabae7e8b56b6e4;
}

uint64_t log_size_4_var_081(int64_t rdi, int64_t rsi) {
    int64_t r14_3;

    __asm__("bsr r11, r8");
    *reinterpret_cast<uint32_t*>(&r14_3) = 0x68d5d03f + static_cast<uint1_t>(0xb407685186bfaa7d >> 0x1773299870dad118);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_3) - reinterpret_cast<unsigned char>(0x7f - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_3) < 0x82)));
    __asm__("shrd rsi, r8, 0x1");
    return 0x6481e029b87c86a4 + (0x7c3dda5c9184b5f9 >> 97) + 0x33090ee05dfb2ca8 + 0x4e3728c13ca1a637 + 0x75e65459039fa4c3 + 0x2bb535fa29095ff4 + 0x2d2c0179 + r14_3 + 0x2cd75d8fbf2d3ae4 + 0x5cf867bca07ba93;
}

int64_t log_size_4_var_083(int64_t rdi, int64_t rsi) {
    int64_t r13_3;

    __asm__("bts r10, 0xf0");
    __asm__("rcr ch, 1");
    if (!__intrinsic()) {
    }
    __asm__("ror bx, 0xd3");
    *reinterpret_cast<int32_t*>(&r13_3) = 0x2e9a12c5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = 0;
    if (1) {
        r13_3 = 0xfed7dded;
    }
    __asm__("rcl r12w, cl");
    return 0x3728e44dea80d55d + (__intrinsic() << 43) - 0x44ac2ee27d353a02 - 0x3097a946d4cb4dd4 - 0x5877f88478062625 - 0x751c0a280f14ce3b + 0x361ac5ad800895f8 + 0x25dd6629205ccb54 - 0x217c6d17abebc47c - 0x58fbd3d908b4548c + r13_3 + 0x4c77a7d62d168aa5 - 0x49d4d7477cd0573a - 0x123044edac4921e0;
}

int64_t log_size_4_var_084(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rdi4;
    int64_t r14_5;
    int1_t cf6;
    int64_t rbx7;

    rbp3 = 0xca11e0a369d3a919;
    rdi4 = 0x2993669ffc41ce44;
    r14_5 = 0xd17d0c61327e517f;
    __asm__("btc r14w, bx");
    if (!cf6) {
        *reinterpret_cast<int16_t*>(&rbp3) = 0xce44;
    }
    __asm__("rol rbp, 1");
    __asm__("ror r11b, cl");
    *reinterpret_cast<int32_t*>(&rbx7) = 0x756d0806 >> -8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_5) = 54;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r14_5) = 0xe1c0dc8f;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_5) + 4) = 0;
    }
    if (1) {
        rdi4 = 0xeec12d675d6404fe;
    }
    __asm__("shld r12, r12, 0x42");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) - reinterpret_cast<unsigned char>(13 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) < 0xf4)));
    __asm__("rcl r15, 1");
    return 0x18c13bcbefd6af3 + rbx7 - 0x51677a8e366c4c0f - 0x5e6145fc1e3f2371 + rbp3 + 0x6e52cea150a294b6 + rdi4 + 0x5e0c9fc894f2072e - 0x113ed298a29bfb02 + 0x39d36868 + 0xbc527ec27d9f4b7 - 0xbf6bc6c28a8fb60 + 0x2e7716a7338684ce + r14_5 + 0x6ca9cab059b2b786 - 0x737dbff6660c4007;
}

int64_t log_size_4_var_085(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rdx4;
    int64_t r12_5;

    rbx3 = 0x9842591f6097f7fd;
    rdx4 = 0xb49794d49a15cb2f;
    r12_5 = 0xeb3afe1ffd145455;
    __asm__("rcr r14b, 0xe7");
    __asm__("ror rcx, cl");
    __asm__("btc rsi, 0x97");
    __asm__("ror r15w, 0x43");
    *reinterpret_cast<uint16_t*>(&r12_5) = reinterpret_cast<uint16_t>(0x5444 >> 26);
    if (0) {
        *reinterpret_cast<signed char*>(&rbx3) = 47;
        *reinterpret_cast<signed char*>(&rdx4) = -3;
    }
    __asm__("rol r10w, 1");
    return 0x2c9dadaa18af8f72 + rbx3 + 0x178a355f405b241a + rdx4 - 0x26d305c94436fd + 26 + 0x5e38502f96c3c312 + -0x8e12c05975d37f3e + 0x97c646b7 - 0x11fb1502431005c6 + 0x171b0a8 + r12_5 - 0x79461b98938d9bb5 + 0x404fb8aee78bb976 - 0x3b56e08bf89247fe + 0x3acdfb630341e71b;
}

int64_t log_size_4_var_086(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t r14_4;
    int64_t rdx5;

    rbp3 = 0x5909142e22338244;
    r14_4 = 0xf199c22d59808247;
    *reinterpret_cast<int32_t*>(&rdx5) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    __asm__("xadd dl, r9b");
    __asm__("rcl esi, 0xf");
    __asm__("rcl ebx, 0x36");
    __asm__("shld si, dx, 0x5");
    if (0) {
        *reinterpret_cast<int32_t*>(&r14_4) = 0x22338244;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbp3) = 0x59808247;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = 0;
    }
    __asm__("ror r10b, cl");
    __asm__("rcl r12d, 1");
    __asm__("btc r8, 0x3a");
    return 0x7957999b7050e064 - (rdx5 >> 1) + rbp3 - 0x7b9368fccf0d7096 - 0x2903eb51d509e622 - 0xe7a9463a6e498ee + 0x51ec8f1d7e393e22 - 0x262ee30ae5bb067 + 0xead727e0c37a73c + 0xa1df7a6a8a28ce1 + 0x247abc49a72e1c33 + r14_4 + 0x4cc9c82e0442c430 + 0x6671b8ed862c642b;
}

int64_t log_size_4_var_087(int64_t rdi, int64_t rsi) {
    int64_t rsi3;
    int64_t r8_4;

    rsi3 = 0xebd44411dccc2a7a;
    r8_4 = 0x9a152a9979cd6e0e;
    *reinterpret_cast<signed char*>(&rsi3) = -0x7a;
    __asm__("bts ebp, r9d");
    __asm__("rcr r13d, 1");
    __asm__("btr r15, 0xc8");
    if (1) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0x93ac18b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    }
    return 0x4e329972cc3567d6 - rsi3 + 0x7e130eb5f0c35b0 + r8_4 + 0x2123c3deb81ba764 + 0x5202168a1bf9dbb6 + 0x394554ccab19c046 + 0x34d4fbb4ccd5657b - 0x7a70508ae4d20000 - 0x972a7f66c53e750 + 0x69897576f0ea4665 - 0x73f053e7ef184121;
}

int64_t log_size_4_var_088(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    uint32_t eax4;
    int64_t rdx5;
    int64_t r11_6;

    rcx3 = 0xcec852d43c6be9f0;
    __asm__("ror rdx, cl");
    __asm__("rol cl, 0x46");
    eax4 = 0xff8b070c;
    *reinterpret_cast<uint16_t*>(&rcx3) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax4) + 1);
    *reinterpret_cast<int32_t*>(&rdx5) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_6) = 0xe7ac773 >> -39;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_6) + 4) = 0;
    __asm__("shrd rbp, r13, 0x1");
    __asm__("rcl r9d, 0xb5");
    return 0x71419446a3c37d0c - rcx3 + rdx5 + 0x221d7a919013dee3 - 0x1a06789376afce30 - 0x3cfab59ec7997186 + 0x310ecccde1be1501 + 0x16be4dbcc6643105 + 0x57d4ad2a072991c + r11_6 - 0x231293266dd78dc6 - 0x21271eee88ab9561 + 0x200181fe5a35a92e + 0x723a + 0x66ab5a491b4d194d;
}

uint64_t log_size_4_var_091(int64_t rdi, int64_t rsi) {
    int64_t rsi3;

    rsi3 = 0x2ece156f87900687;
    __asm__("btc ebp, 0x33");
    __asm__("rcl r15w, 1");
    *reinterpret_cast<int16_t*>(&rsi3) = -0x659a;
    __asm__("rcl r8, 1");
    __asm__("ror r8d, cl");
    return 0x6fb8a347f5c751a4 - rsi3 - 0x109fd10faec85a8f + 0x283475cb65cfde3b - 0x7d9d90401b949dca + (0x7341b3cd >> 0xffffffffffffff8e) - 0x6682856b61348007 - 0x3f522f3a5a874952 - 0x58d41af2112c706e + 0x131e33f3a992c648 - 0x65e8098a4576d767 + 0x209a9455af7ed65f;
}

int64_t log_size_4_var_094(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r13_4;

    rax3 = 0x9f3b8f94ece3a057;
    __asm__("bsf ebp, esi");
    __asm__("rcl r15d, cl");
    __asm__("bsr r15, rbp");
    __asm__("xadd dl, ch");
    if (0) {
        *reinterpret_cast<int32_t*>(&rax3) = 0xa87371e0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    __asm__("rcl r15d, 0x59");
    *reinterpret_cast<uint32_t*>(&r13_4) = 0xb9c40aee >> -17 & 0xd35c4809;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = 0;
    return rax3 + 0x102ee23b2980989a + 0x498214ca8491def + 0x1426a6f2f0b1ef54 - 0xc7ee4014fd9f77a + 0x4ab4878cd35c4809 + 0x52a6565353eaa0b5 + 0x1abfc66662430864 - 0x20b4c4c2681f05e5 + 0xfb08e0b8c7298a - 0x12e2f328578c8e20 - 0x4f44989b4025d0a7 + r13_4 + 0x981530d5 + 0x683182ad0060151 - 0x5f27071d478516ac;
}

uint64_t log_size_4_var_095(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t r10_4;
    int64_t rdx5;

    rcx3 = 0x3852be286d8a107d;
    r10_4 = 0x58e3b25f23fcf590;
    __asm__("rol r9d, cl");
    *reinterpret_cast<uint16_t*>(&rdx5) = 0x5b1;
    __asm__("btr rax, r14");
    __asm__("shrd rax, r8, 0xf1");
    __asm__("xadd r15w, r13W");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx5) + 1);
    if (__intrinsic()) {
        r10_4 = 0x1f788503dbaf4df3;
    }
    return 0x2bcb46e51e1ffaf0 + rcx3 - 0x773f59089f82c74f + 0xffffdccb + 0x1b4e6002bfe70654 + 0x33f1d09f815200dd + 0xefe652a98314734 + (reinterpret_cast<uint64_t>(0xa94d3089bb4d7e1c >> -19) >> 0x7d) + r10_4 + 0x31b0c0d12c3c760c + 0x1f788503dbaf4df3 + 0x8d36ef6d - 0x7c1326185d4701e2 + 0x69f0264466a4dccb + 0x5663f327c03e5ea9;
}

int64_t log_size_4_var_096(int64_t rdi, int64_t rsi) {
    int64_t rcx3;

    *reinterpret_cast<int32_t*>(&rcx3) = 0x43cfe2e0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    __asm__("rol dl, cl");
    __asm__("rol r14, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx3) + 1) >> 1);
    __asm__("xadd r9, r9");
    return 0x1c1b1f8f094aa829 - rcx3 + __intrinsic() - 0x72dd416b3ce1da89 - 0x7c7de2710ead49aa + 0xcd013907 + 0x104b489 + 0x5093c8f4 + 0x300a1c5e + 0x4ba66b099b450000 + 0x67d433f1f6f5ba0f + 0x3960501a257bc717 - 0xdd0baefdd41eb1e + 0xa6ab0b9a1e7f170 - 0xe8d714932ed13f0;
}

int64_t log_size_4_var_099(int64_t rdi, int64_t rsi) {
    __asm__("shld esi, ebx, 0x1");
    __asm__("rcl r9b, 0xf3");
    return 0xcab9deda91832ddd;
}

int64_t __assert_fail = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto __assert_fail;
}

int64_t log_size_4_var_002(int64_t rdi, int64_t rsi) {
    int64_t rsi3;
    int64_t r11_4;
    int64_t r15_5;
    int1_t of6;

    rsi3 = 0x630d54f97554ebac;
    r11_4 = 0x9910982bd2c9a5d6;
    r15_5 = 0x3650553981fa2bb9;
    __asm__("rcl r15, 1");
    if (of6) {
        *reinterpret_cast<int16_t*>(&r11_4) = 0xbcac;
    }
    __asm__("btc r11, 0xac");
    *reinterpret_cast<uint16_t*>(&r15_5) = reinterpret_cast<uint16_t>(0x2bb9 >> -42);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rsi3) = 0x2921;
    }
    __asm__("rcr r9b, cl");
    __asm__("rol bp, 0xb3");
    __asm__("rcl ecx, 1");
    __asm__("bsf ax, r12w");
    return 0x17b068d3ce37a5a1 + rsi3 - 0xb2ad6190b1cd6df - 0xb9d78e4c9b63e58 + 0xb1503c20 - 0x5f68a5b094fd5f00 + r11_4 + 0x5688209348356a1c + 0x6474bf7c8ab187fb + 0x4b5f8b32d7b4028 + r15_5 + 0x5996af4cb0972666;
}

int64_t log_size_4_var_009(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t rsi4;
    int64_t r8_5;
    int64_t r9_6;
    int64_t r10_7;
    int64_t rdx8;

    rcx3 = 0xfe62695a3ff86011;
    rsi4 = 0x6289a077e290b0b0;
    r8_5 = 0x682310a0414f8f21;
    r9_6 = 0xaffe0ef57ee0a4de;
    r10_7 = 0x6821f8236357531a;
    *reinterpret_cast<unsigned char*>(&r9_6) = reinterpret_cast<unsigned char>(0xde >> -5);
    *reinterpret_cast<int32_t*>(&rdx8) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
    __asm__("bsr bp, r13W");
    if (!__undefined()) {
        *reinterpret_cast<int16_t*>(&rcx3) = 0x4e06;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1) >> 1);
    if (__intrinsic()) {
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&r10_7) = 0xb0b0;
        *reinterpret_cast<int16_t*>(&rsi4) = 0x531a;
    }
    __asm__("rcl r15, 1");
    *reinterpret_cast<unsigned char*>(&r8_5) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(33 & *reinterpret_cast<unsigned char*>(&rsi4)) + 1);
    return 0x1cce24c94b376f5a + (rcx3 + rcx3) + rdx8 - 0x776436b55b5b524d + rsi4 - 0x44d290fd2b0dc2f6 + r8_5 + r9_6 + r10_7 + 0x2a7ae0fdf92593e5 + 0x236a9499fd275026 + 0x6ec0c1e040936c51 + 0xd54a0707adb4d2 - 0x90492c5f73adeac + 0x1464bc0f722ec158;
}

int64_t log_size_4_var_012(int64_t rdi, int64_t rsi) {
    __asm__("rcr bx, cl");
    __asm__("btc r10d, r12d");
    __asm__("shld ebp, r9d, 0xd9");
    __asm__("shrd rbx, rcx, 0xa5");
    return 0x4ddd1604a3924c6a;
}

int64_t log_size_4_var_018(int64_t rdi, int64_t rsi) {
    int64_t r13_3;
    int64_t r12_4;

    r13_3 = 0x111fe5d7d9bd5228;
    __asm__("bts rsi, 0x80");
    __asm__("btr rbx, 0x70");
    r12_4 = 0xab088958c594db54;
    if (0) {
        *reinterpret_cast<int16_t*>(&r13_3) = 0x1169;
    }
    __asm__("rcr r10, cl");
    __asm__("rol r13d, 1");
    if (1) {
        *reinterpret_cast<int16_t*>(&r12_4) = -78;
    }
    __asm__("rcr r12w, 1");
    return 0x7a19e4db8023b2be + r12_4 + r13_3 - 0x762623acf76a4a69 + 0x62ef71d12b1b2437 - 0x6668823c060a6765;
}

int64_t log_size_4_var_021(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rdi4;
    int64_t rbx5;

    rax3 = 0x2cdcbcb9f2a67170;
    rdi4 = 0xa132882002ee7bbb;
    __asm__("ror rdx, cl");
    __asm__("shrd rax, r11, 0xb");
    *reinterpret_cast<signed char*>(&rax3) = 0x6f;
    if (0) {
        rax3 = 0xa132882002ee7bbb;
        rdi4 = 0x2cdcbcb9f2a6716f;
    }
    *reinterpret_cast<uint32_t*>(&rbx5) = *reinterpret_cast<unsigned char*>(&rdi4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
    __asm__("xadd r13d, r13d");
    *reinterpret_cast<int16_t*>(&rdi4) = 0;
    return rax3 + rbx5 - 0x3e5d822eba4ac2ef + 0x718c85da185b1c08 + 0x7f1d71aa49d8b338 - 0xecfffdd3c4291b3 + rdi4 + 0x1eeea0ef752599c2 + 0x8f4da64a03eb8f7 - 0x705a738ab84f6c72 + 0x3237a4e597e94e86 - 0x2b97d7339065eee2 - 0x8000000000000000 - 0x3a4cdbb2b0c77054 - 0x3767cb70602a11d5 + 0x611099031044550a;
}

int64_t log_size_4_var_023(int64_t rdi, int64_t rsi) {
    int64_t r10_3;
    int64_t r11_4;

    r10_3 = 0xff949628ff8b10d9;
    r11_4 = 0xf399dc5126f0ecde;
    if (1) {
        r11_4 = 0x23b8219b90382ec0;
    }
    *reinterpret_cast<unsigned char*>(&r11_4) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("bts rbx, 0xd0");
    __asm__("btc di, bp");
    __asm__("bsr r14w, ax");
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r10_3) = 0xcbff;
    }
    __asm__("btc ebp, 0xef");
    return 0x110c787558a44d25 - r10_3 + r11_4 + 0x4f89f24f43ff9b43 + 0x66206519bc1b97d7 + (0x8f673dc6f3b55dc9 >> 0x68) + 0x4a4c4da7 + 0x85e87987ee95457;
}

int64_t log_size_4_var_025(int64_t rdi, int64_t rsi) {
    int64_t r10_3;

    r10_3 = 0xd0affcf662a6706b;
    *reinterpret_cast<unsigned char*>(&r10_3) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        r10_3 = 0xc2336fdbecedee5d;
    }
    return 0x77417a1f102f9c2a + r10_3 + 0x7431ee2320042f7f + 0x64c51bd973c27be3 - 0x1d49b443e6ed0000 - 0x3dcc9024131211a3 - 0x4c241d3f4ff22e6f - 0x79ae1f6abcab777c;
}

int64_t log_size_4_var_032(int64_t rdi, int64_t rsi) {
    int64_t rsi3;
    int64_t r10_4;
    int64_t r15_5;
    int64_t r11_6;
    int64_t rsi7;

    rsi3 = 0xfb826520a83d8a93;
    r10_4 = 0x99a2e31ff61eb7ad;
    r15_5 = 0x5fc38e16e8108858;
    *reinterpret_cast<uint16_t*>(&rsi3) = reinterpret_cast<uint16_t>(0x8a93 >> 86);
    __asm__("bts r13, r9");
    __asm__("ror r15, cl");
    __asm__("btc r10d, 0x17");
    __asm__("shld r13, r15, 0x1");
    __asm__("btc bx, 0x4a");
    __asm__("ror ah, 0x18");
    __asm__("rcl rdi, 1");
    *reinterpret_cast<int32_t*>(&r11_6) = *reinterpret_cast<int32_t*>(&rsi3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_6) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi7) = 0xee5844dc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi7) = 0xf61eb7ad;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r10_4) = 0xee5844dc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_4) + 4) = 0;
    }
    __asm__("xadd r15d, r10d");
    *reinterpret_cast<int16_t*>(&r15_5) = reinterpret_cast<int16_t>(0x77a8 - *reinterpret_cast<int16_t*>(&r11_6));
    __asm__("ror rax, 1");
    return 0x7592a8f7bd3071e9 - rsi7 - 0x6084adaa3247ad39 + 0x277098187064debe + 0x2b99f6830b86d0f1 + r10_4 + r11_6 + 0x751cb4df6f624f7 - 0x4deb8ba4c67bd1f2 + r15_5 - 0x393096596b1c1ad;
}

uint64_t log_size_4_var_034(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rbx4;
    int64_t r13_5;
    int64_t r9_6;
    int1_t of7;
    int64_t r15_8;

    rax3 = 0xc07fed688505dc6a;
    rbx4 = 0x9d66112ebf5c7833;
    r13_5 = 0xd367dff6d1532729;
    *reinterpret_cast<int32_t*>(&r9_6) = 0xc1a81972;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_6) + 4) = 0;
    __asm__("rcr ebp, 1");
    if (!of7) {
        r13_5 = 0xc1a81972;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r13_5) = 0xc1a81972;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r15_8) = 0x6f8f94a2 - __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_8) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r9_6) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("lahf ");
    *reinterpret_cast<unsigned char*>(&rbx4) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r15_8) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_8) == 0)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("btc r9, rcx");
    __asm__("rcr ebp, 1");
    return rax3 + rbx4 + 0x3e38b64b20994194 - 0x1d286dec329276df + 0x5a683a3c433e18fe + 0x1e66693c84085eeb + 0x449a0ae5a3295382 - 0x3a0fc8ead4fca027 + r9_6 - 0x3b864dea4f73894c - 0x61a4674ed504d928 + static_cast<uint64_t>(*reinterpret_cast<unsigned char*>(&r13_5)) + r13_5 - 0x28f99f5dae77ae3c + r15_8 + 0x1e3d62665a07881b;
}

int64_t log_size_4_var_038(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    uint64_t r10_4;
    int64_t r10_5;

    rax3 = 0x9c51e4b1cf3af8a5;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1) = --100;
    __asm__("rcl r8d, 1");
    __asm__("cdq ");
    r10_4 = reinterpret_cast<uint64_t>(0x392cda9f64900833 - rax3);
    __asm__("rcl eax, 1");
    *reinterpret_cast<int32_t*>(&r10_5) = *reinterpret_cast<int32_t*>(&r10_4) << 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_5) + 4) = 0;
    __asm__("shld r11, rcx, 0x1");
    *reinterpret_cast<unsigned char*>(&r10_5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_5) - reinterpret_cast<unsigned char>(0xea + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r10_5) < 0xea)));
    return rax3 + 0x53fca5d69b4366ff + 0x3753018682c72e02 - 0x582151fb3715819f - 0x13ff3a6e292fcd02 - 0x7664f44de876768e + 0xbedd43f8d13b1 - 0x1b9a6c8015f49fac - 0x3f5df3bf5a33275f + r10_5 + 0x582151fba2277110 - 0x5e85c411aac854b6 - 0x7f8aabbea6221270 + 0x19ab8a7b17dcef45 - 0x4b32016c1588b516 + 0x4dfd74083fa51b63;
}

int64_t log_size_4_var_044(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t r13_4;
    int64_t rcx5;
    int64_t r11_6;

    rbx3 = 0xe58f3fe1d5aa9b9d;
    r13_4 = 0x7064e6fc2d9bb76;
    *reinterpret_cast<int16_t*>(&rbx3) = 0x817c;
    __asm__("rol r9, 0xa0");
    *reinterpret_cast<int32_t*>(&rcx5) = -0x68a92993;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    __asm__("rol dil, cl");
    *reinterpret_cast<int32_t*>(&r11_6) = 0x815773ce << *reinterpret_cast<unsigned char*>(&rcx5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_6) + 4) = 0;
    __asm__("btc eax, 0xeb");
    __asm__("rcr r15b, 1");
    __asm__("bts r9w, r14w");
    *reinterpret_cast<signed char*>(&rbx3) = reinterpret_cast<signed char>(0x7c << *reinterpret_cast<unsigned char*>(&rcx5));
    *reinterpret_cast<unsigned char*>(&r13_4) = reinterpret_cast<unsigned char>(0x76 ^ *reinterpret_cast<unsigned char*>(&rcx5));
    return 0x2f0243db2e3ac0f2 + rbx3 + rcx5 + 0x4032485a2dd4a8f4 + 0x5dd96dfb9e5f2be1 + 0x14f45b2925489f00 - 0x4b230f1055477e84 + 0x11127187a688131d - 0x758bf8d59444a7bc + 0x7483029a6e8a800c + r11_6 - 0x5207811a3b8c6a9a + r13_4 + 0x3bda42c5225e1147 - 0x5c987b0630cbb00 - 0x29cc97230c0fe5de;
}

uint64_t log_size_4_var_051(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t r11_4;
    int64_t rbx5;

    rcx3 = 0x840f4fecc5be568a;
    r11_4 = 0x111de8ecea9cc39a;
    if (0) {
        r11_4 = 0x8f40f45121a93970;
    }
    *reinterpret_cast<int32_t*>(&rbx5) = *reinterpret_cast<int32_t*>(&r11_4) * 0xd67f6a34;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
    __asm__("bsr rdi, r10");
    __asm__("rol r13b, 1");
    *reinterpret_cast<signed char*>(&rcx3) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx5) + 1)));
    __asm__("rcl sil, 1");
    return 0xf8fb9c9b2eb3f99a - (rbx5 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0xf8fb9c9b2eb3f99a < rbx5 + 1))) + rbx5 + rcx3 + 0x2923c6763feaa918 - 0x2924fae1232dc2ac - 0x68626d7b124c9899 + 0x3dfbc0c8af9e58e8 + 0xc9d35810d8e99e6 + 0xb9 + 0x3785fbacdc73f035 + r11_4 - 0x65faa283e6100bd8 - 0x75190716764b00c6 + 0x73b4027e9798ce7f + 0x290bbfcd + 0x6731eaa8d53f5145;
}

int64_t log_size_4_var_056(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t r9_4;

    rbp3 = 0xd789f5925bc3de9e;
    r9_4 = 0xa75f8671d96d452e;
    __asm__("ror r8b, 1");
    __asm__("bsr rbp, rsi");
    __asm__("cwd ");
    __asm__("btc r8w, 0xe9");
    __asm__("shld cx, r11w, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&rbp3) = 0x452e;
        *reinterpret_cast<int16_t*>(&r9_4) = 0xde9e;
    }
    return 0xc6d1c79188183b0 + rbp3 - 0x5d2bca67874bd123 - 0x3530f9ab69de09b2 - 0x4290e9c799ae5608 + r9_4 - 0x306cdc5ffdc7da14 + 0xffffde1a + 0x27fb55822fbe9012 + 0x369dff508e8d34f2 + 0x378ec23040655aad + 0x38a10a22cba222d8 + 0x5a4ebbbb28227fda;
}

int64_t log_size_4_var_058(int64_t rdi, int64_t rsi) {
    int64_t rsi3;
    int64_t r13_4;

    rsi3 = 0xb68bd5c18876df79;
    r13_4 = 0xe75a10555fa0ec35;
    if (static_cast<int1_t>(reinterpret_cast<uint16_t>(0xe967 >> 57))) {
        *reinterpret_cast<int32_t*>(&rsi3) = 0xfcdcc2ea;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    }
    __asm__("rcr r14w, 0x7f");
    __asm__("shld rsi, r10, cl");
    __asm__("bsf si, r12w");
    if (0) {
        *reinterpret_cast<int32_t*>(&r13_4) = 0x85342674;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = 0;
    }
    __asm__("rcl r12d, 1");
    return 0x47b63af877fd99fe - rsi3 + 0x38a9fbff85342674 + 0xbc297a7d - 0x6ce7a484f76b49c - 0x79c004f603233d16 + 0x42cf2b631ec7e967 + 0x36c854a0 + r13_4 - 0x15df3c4474cfa992 + 0x67973b8da1eb8944 - 0x930237210d58dfc;
}

int64_t log_size_4_var_064(int64_t rdi, int64_t rsi) {
    int64_t rax3;

    *reinterpret_cast<uint32_t*>(&rax3) = 0x6456ef15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    __asm__("ror al, 0x66");
    __asm__("xadd r14d, r9d");
    __asm__("rol r8d, cl");
    if (1) {
        *reinterpret_cast<int16_t*>(&rax3) = 0x59de;
    }
    __asm__("rcr r15, cl");
    __asm__("rcr bl, 1");
    return rax3 + 0x8e89e504 - 0x290cfebfcc16820e + 0x7fab3a55eda0402 - 0x3912f4073701e89f - 0x48f5bf28a7d95951 - 0x73bd0c9312d29230 - 0x1b2d9498cebabf43 + 0x11d6db54eb284de3 - 0x25845d7b07ceff30 - 0x64e8378686ae5aba - 0x3755a9160a33e54a + 0x7ed0f020728f59de + 0x300b10c7e7068ece + 0x4277175917eef6ba - 0x31e33325a55acbee;
}

int64_t log_size_4_var_066(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rdx4;
    int64_t rbx5;

    *reinterpret_cast<int32_t*>(&rax3) = 0xc2452391;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx4) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    __asm__("rol rdi, 1");
    *reinterpret_cast<int16_t*>(&rbx5) = 68;
    __asm__("rcl r14d, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx5) + 1));
    return rax3 + 0x4409c87305440044 - 0x6c9cc6db2adce91e + rdx4 + 0xb6 + 0x33f66deb4a132e44 - 0x477a97f162dd4f06 - 0x54e3b6f1485fa8f9 + (0x1f637cb13f8652c4 - rdx4) + 0x7678c41e6b162dc3 + 0x45d332679297e25b - 0x25be30463989abe2 + 0xc16040e7 - 0x68ffc57366999ffe + 0x1eaf29b03ae73d0c + 0x3d50aadf49be85b;
}

int64_t log_size_4_var_072(int64_t rdi, int64_t rsi) {
    __asm__("shld r9, rsi, 0x1");
    __asm__("rcl si, 1");
    __asm__("rol r12b, 1");
    __asm__("xadd r8b, r14b");
    return 0x2ff476fa5d0a83b0 + __intrinsic() + 0x3132178 + 0x761b14ffac3c66dc - 0x6b3178a4a8a1467e + 0x197ebd28b865d892 - 0x3cd148f9936aa4bb - 0x24698f6d8d156aea - 0x1ebcb767a07c5a4b - 0x6fe36890f43d3adf - 0x4e4c89ec04024525 - 0x722ddb8631d7afde + 0xb23f0ba595ba13f;
}

int64_t log_size_4_var_078(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t r8_4;
    int64_t r9_5;
    int64_t r12_6;
    int32_t eax7;
    int32_t edx8;

    rcx3 = 0x7a2078e1533d5a25;
    r8_4 = 0x1af21380e3c88c5f;
    r9_5 = 0xbe6daf777ae9a267;
    r12_6 = 0x3d05f82c23e26c06;
    eax7 = 0x97c13ce0;
    edx8 = __intrinsic();
    if (*reinterpret_cast<signed char*>(&edx8) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax7) + 1)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax7) + 1) = *reinterpret_cast<signed char*>(&edx8);
    }
    __asm__("rcl r10, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0x7a + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax7) + 1)) + 1);
    *reinterpret_cast<unsigned char*>(&r12_6) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (1) {
        *reinterpret_cast<int32_t*>(&r9_5) = 0xa396a395;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_5) + 4) = 0;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0x76de1aeb;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    }
    return 68 * r12_6 + 0x10dd8912e0e2131e + rcx3 + __intrinsic() - 0xd733fcb5f7e7721 - 0xce82a59d3d2a799 - 0x7af51a4b8921e515 + r8_4 + r9_5 - 0x707138efef015814 + 0x576f0834284b3fe0 + r12_6 + 0xde9ca75eab6cf72 - 0xf583683a0f64acf - 0x1f647aa55c695c6b + 0x41fceef41d4d5598;
}

uint64_t log_size_4_var_080(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rdi4;
    uint64_t r14_5;
    uint64_t rbx6;

    rax3 = 0x489d00849e20836b;
    rdi4 = 0x94293d5b39467e51;
    __asm__("bts ebp, 0x56");
    __asm__("rol bp, 1");
    __asm__("shrd ebp, esi, 0xe4");
    r14_5 = 0x5954d6721abe6f32 >> -26;
    rbx6 = 0x1e69a16bfc9768 | r14_5;
    __asm__("rcl r15d, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rdi4) = 0x8678910f;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    }
    __asm__("cdq ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<signed char>(72 + *reinterpret_cast<signed char*>(&rbx6));
    return rax3 + rbx6 + 0x4fb439df5d525311 + 0x4d543c0d1cdf00db - 0x5de15feae0d9858b + 0x46b1568e3a9bd553 + rdi4 - 0x2344c45ee317139 + 81 - 0x61ee32bff393ec09 + 0x2031b45cf3346e1 + 0x1e9b863cbabf4536 - 0x5ee0270279876ef1 + r14_5 + 0x4ec045c9e785 - 0x3cbcf60fc8e8cc7e;
}

uint64_t log_size_4_var_082(int64_t rdi, int64_t rsi) {
    int64_t rcx3;
    int64_t rbp4;
    int64_t rsi5;
    int64_t r10_6;
    int64_t r11_7;
    int64_t r12_8;
    uint64_t rbx9;
    int32_t tmp32_10;

    rcx3 = 0x26234bccf75ee7c7;
    rbp4 = 0x493bccf165378989;
    rsi5 = 0x26dd483693f90ee0;
    r10_6 = 0x9b569ff2602b1c36;
    r11_7 = 0xe3ac58415c3aaa9b;
    r12_8 = 0xa7c2bffffd20f0bf;
    if (0) {
        *reinterpret_cast<unsigned char*>(&r11_7) = 0xc7;
        *reinterpret_cast<unsigned char*>(&rcx3) = 0x9b;
    }
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(__intrinsic()))) {
        r12_8 = 0x14065e1ee0a5508d;
    }
    *reinterpret_cast<signed char*>(&r10_6) = reinterpret_cast<signed char>(54 >> 0x7c);
    __asm__("bts eax, r14d");
    rbx9 = 0x90ea95058afa4310 >> *reinterpret_cast<unsigned char*>(&rcx3);
    *reinterpret_cast<unsigned char*>(&r11_7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_7) << *reinterpret_cast<unsigned char*>(&rcx3));
    if (0) {
        tmp32_10 = *reinterpret_cast<int32_t*>(&r10_6);
        *reinterpret_cast<int32_t*>(&r10_6) = *reinterpret_cast<int32_t*>(&rbx9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_6) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbx9) = tmp32_10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx9) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&rsi5) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx9) + 1);
    *reinterpret_cast<uint16_t*>(&rbp4) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x8989 + *reinterpret_cast<int16_t*>(&r10_6))));
    return 0x58de98dead35c679 - rbx9 + rcx3 + 0x6250fb3af62f00a7 + rbp4 + rsi5 + 0x14065e1ee0a5bf27 - 0xacad4bb53ee9028 + 0x1c6573b687c78cb8 + r10_6 + r11_7 + r12_8 - 0x260d047679ee6029 - 0x128bc392b8104463 + 0x3c12a40a7edd6ffc - 0x498fc2a96ce3dd69;
}

int64_t log_size_4_var_089(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rdx4;

    rbx3 = 0x660823c5b68e6f54;
    __asm__("ror r10d, cl");
    __asm__("btr eax, 0xca");
    *reinterpret_cast<int16_t*>(&rdx4) = 0;
    __asm__("rcr r13W, 1");
    __asm__("btc r10w, r15w");
    __asm__("bts ecx, edx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx3) + 1) = reinterpret_cast<unsigned char>(0x66 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx4) + 1));
    return 0x1788d506e0980001 + rbx3 + 0x49446a5fdb6af9e0 + 0x660823c5b68e0000 + 0x147d0f0a702d1314 + 0x776477bb78d09912 + 0x3312ec2ba8760ae5 + 0x6a9ddbcb2efd5cbc - 0x4c75bbd50fba254c + 0x6115e89e1d243cdc + 0x17f01e5ffe68cace - 0x600d4d2f81945c0d - 0x47c65bb44630000 + 0x1e01ac948f949bc2 + 0x5c6c09f8 - 0x7a94f27e22864947;
}

int64_t log_size_4_var_092(int64_t rdi, int64_t rsi) {
    int64_t rdx3;

    rdx3 = 0x9803a8cccb8983a0;
    __asm__("rcr sil, cl");
    *reinterpret_cast<unsigned char*>(&rdx3) = reinterpret_cast<unsigned char>(0xa0 - reinterpret_cast<unsigned char>(0x6d + reinterpret_cast<uint1_t>(0xa0 < reinterpret_cast<unsigned char>(0x6d + __intrinsic()))));
    __asm__("bsf cx, di");
    __asm__("shld r10w, r11w, 0xa");
    __asm__("btc r9d, edi");
    __asm__("rcl r15d, cl");
    __asm__("shrd r9, rax, 0x5d");
    __asm__("cdq ");
    return 0x7d4c85025d75aceb - rdx3 - 0x544e8cf15c5e4320 + 0xe87cb13220b0f9f - 0x67a1c2051f4a313f - 0x5532a0083b059ef8 + 0x3ce897a00af1eb22 + 0x6503b2b528d5f839 - 0x42513becb4b11593 + 0x2c963b710af7e942 + 0x7617d0a0 - 0x78a52a1146e33e37 + 0x5200860c + 0x4fb4955c2e1d5d1f;
}

uint64_t log_size_4_var_097(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r11_4;
    uint64_t r13_5;
    int64_t r15_6;
    uint64_t r13_7;
    int64_t rax8;
    int64_t rdx9;

    rax3 = 0xb9fceec5a38e86be;
    r11_4 = 0x4c5e56f6c38b6a77;
    r13_5 = 0x9398ad44ea0f480d;
    r15_6 = 0x1f38b4719d4166e3;
    __asm__("shrd r10d, ebp, cl");
    *reinterpret_cast<signed char*>(&r13_5) = -13;
    __asm__("rol r10w, 1");
    r13_7 = r13_5 >> -22;
    __asm__("shld bp, r11w, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<uint1_t>(__undefined() != __intrinsic());
    *reinterpret_cast<int16_t*>(&r15_6) = reinterpret_cast<int16_t>(0x66e3 + *reinterpret_cast<int16_t*>(&r13_7));
    *reinterpret_cast<unsigned char*>(&r11_4) = __intrinsic();
    __asm__("shld r12, rcx, cl");
    *reinterpret_cast<int32_t*>(&rax8) = *reinterpret_cast<int32_t*>(&rax3) * 0x292a6dea;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx9) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    __asm__("rcl r10w, 1");
    return rax8 - 0x4048d55048eee760 - 0x175f6ae7d6d59216 + rdx9 - 0x4e2570d22c37af9e - 0x674f41f238eff4e7 - 0x74f367f2ca7d8041 + 0x400f4483bf4befbe - 0x60113d7cd549f077 + 0x6f30b7bc3487a70a + r11_4 - 0x617ef00ff27a9a61 + r13_7 + 0x7f31ecf063935a51 + r15_6 - 0x5e4d24147dab90a5;
}

int64_t log_size_4_var_013(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rbx4;

    rbx3 = 0x9c175a15e868a26b;
    __asm__("shld r8w, r13W, 0x7");
    __asm__("shld r10d, r9d, 0x8");
    __asm__("rcr r12b, 1");
    *reinterpret_cast<signed char*>(&rbx3) = reinterpret_cast<signed char>(0x6b >> 99);
    *reinterpret_cast<int32_t*>(&rbx4) = *reinterpret_cast<int32_t*>(&rbx3) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0;
    __asm__("rcl esi, cl");
    __asm__("shrd r10w, r14w, 0x1");
    __asm__("rcl eax, 0x66");
    __asm__("shld r15, r12, 0x1");
    __asm__("rcl dil, cl");
    return 0x1588c69aa26d033a - rbx4 - 0x179f8e4509d01647 + 0x5f578fe0e35360a1 + 0x66b4753c1164c3b5 - 0x3772c6792290cd1e + 0x6cde9f2bd2139423 + 0xe9b9 - 0x6878bd9c083d89cf - 0x132c265dead466a8 - 0x34ccdd952d77a731 + 0x366487c64755e376 + 0x9b6b5e4c8ac44f7 - 0x4e46d2461fbf0113 - 0x76dfab3245fe4626;
}

int64_t log_size_4_var_039(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t r13_4;
    int64_t rdi5;

    rbx3 = 0x29396a451068770e;
    r13_4 = 0xfebd8a11a07629ac;
    __asm__("shrd rax, rax, 0xad");
    __asm__("btc r11d, r8d");
    __asm__("rcr r12, 1");
    *reinterpret_cast<int32_t*>(&rdi5) = 0x27c663a6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    if (__intrinsic()) {
        rdi5 = 0;
    }
    __asm__("shld r9d, r13d, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&r13_4) = 0x2010;
    }
    if (!__intrinsic()) {
        rbx3 = 0x74bcbf88b200f76a;
    }
    __asm__("ror r15d, 0x5f");
    return 0x768c4e8f76c52010 + rbx3 + 0x111fd597ccd35723 - 0x149c887339c91e6a - 0xb53174b0095fff2 - 0x1b1d0b53ba473d56 + rdi5 + 0x58f74531af83c211 + 0xb1f2f5435291805 + 0x74bcbf88b200f76a + 0x495757acd123b243 + r13_4 + 0x55eb8049c33a28ae - 0x3eb5553db3ef33b3 - 0x3ad105e718107143;
}

int64_t log_size_4_var_045(int64_t rdi, int64_t rsi) {
    int64_t rcx3;

    rcx3 = 0x7ccd93b2528e700d;
    __asm__("rol r11, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx3) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic()))) + 1);
    return 0xe58184a9f10001d + rcx3 - 0x7c363a3d35bdc3e + 0x6c63a01760f4921d - 0x3281e7cddd8245c8 + 0xa7d1c1763c6c3b2 + 0x290a72d0d10f00ff + 0x56b735ca33b5f366 - 0x40f2f563278f506c + 0x63147e8e828fd896 + 0x28fe4e95 + 0x11b40000 + 0x5ea72324c5c8b2f0 - 0x7368db667a52be56 + 0x7e6017fd9c141683;
}

int64_t log_size_4_var_067(int64_t rdi, int64_t rsi) {
    __asm__("bts di, 0x8");
    __asm__("shld r11w, r12w, 0xc");
    __asm__("rcl cx, 1");
    __asm__("rol r8d, cl");
    return 0x6c1485a2e363f7a4;
}

int64_t log_size_4_var_073(int64_t rdi, int64_t rsi) {
    int64_t rsi3;

    rsi3 = 0x47af8ac5eba91455;
    __asm__("bts rbx, 0xb1");
    __asm__("shrd r12d, r14d, 0xa1");
    __asm__("btr bx, 0x2b");
    *reinterpret_cast<unsigned char*>(&rsi3) = reinterpret_cast<unsigned char>(85 >> -88);
    __asm__("ror r10w, 1");
    return 0x5b6da22176da943a + rsi3 - 0x4d3e303485c6e5ab - 0x7c89f5a3a5615cca - 0x2fd6148d4eb8d037 + 0x1da9059163cf97cf + 0xf7c1158e + 0xed5e571353a3984 - 0x26c50caab1300e39 - 0x7e5d14e10e68385e - 0x30ddbbf9e738ea29;
}

int64_t log_size_4_var_090(int64_t rdi, int64_t rsi) {
    int64_t rbx3;

    rbx3 = 0x8c76ede2ceebb74d;
    __asm__("shrd eax, r11d, cl");
    if (0) {
    }
    __asm__("rol ah, 1");
    *reinterpret_cast<uint16_t*>(&rbx3) = reinterpret_cast<uint16_t>(0xb74d >> -60);
    return 0xfa9a39ce81f348a - rbx3 - 0x1fa0f62b4a18b107 + 0x731951269e0c3489 + 0xffffffff + 0x6130e30ffe6af577 - 0x4d2313d1662bfc7e - 0x44b37638e53b50d5 + 0x3ebaaa63f48d420f - 0x31feeada2e11cbca + 0xf580900d + 0x384deae7ef44b506 - 0x153648149a3947ee - 0x7a1684dd80308b03 + 0x7944546dbf7332fb + 0x21b52c2c0de0f70f;
}

int64_t log_size_4_var_093(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t r10_4;
    int64_t r11_5;

    rbx3 = 0x1d22a355c40aa843;
    r10_4 = 0xf011674f85d89828;
    r11_5 = 0x1ed155542340987b;
    if (0) {
        *reinterpret_cast<int16_t*>(&rbx3) = 0xbb9b;
    }
    __asm__("rcr r12w, cl");
    *reinterpret_cast<signed char*>(&r10_4) = reinterpret_cast<signed char>(40 >> 42);
    if (__intrinsic()) {
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r11_5) = 0x85f83094;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_5) + 4) = 0;
    }
    return rbx3 - 0x36bd74924b811814 + 0x29e3a14c + 0x7a8d4d1524223cde + 0x49c6e6c5c0dabb9b - 0x36bd74924b811814 + 0xcc559b36 + -0xb40fc38c + r10_4 + r11_5 - 0x31efa60c7a07cf6c - 0x52336373ce61f2f1 + 0x42a14ac05a9925ed + 0x388f6f4711beb3f4 - 0x5b1b05e42ba52cdc;
}

int64_t log_size_4_var_098(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rdx4;
    int64_t r10_5;
    int64_t r15_6;
    int64_t r11_7;

    rbx3 = 0x1cd894cde3d9741e;
    rdx4 = 0xb4254b6ff2f321ed;
    r10_5 = 0xf8804a8545582efd;
    r15_6 = 0x1b553b0745a47d09;
    __asm__("bts rsi, r8");
    if (1) {
        *reinterpret_cast<int16_t*>(&r10_5) = 0x4a9d;
    }
    __asm__("ror r9, 0x37");
    *reinterpret_cast<signed char*>(&r15_6) = -9;
    __asm__("rcl r9w, 1");
    *reinterpret_cast<uint32_t*>(&r11_7) = 0xaaa0c34b & *reinterpret_cast<uint32_t*>(&r10_5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_7) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbx3) = reinterpret_cast<uint16_t>(0x741e >> 78);
    *reinterpret_cast<unsigned char*>(&rdx4) = reinterpret_cast<unsigned char>(0xed >> 78);
    return 0x2413e32e822a1d87 + rbx3 + 0x4b43aa38533e864e + rdx4 - 0x6c108f001988ee3a - 0x6cc07b5e085c4035 - 0x3e0f8b7a115d6ac6 - 0x2f092acf3d33510d - 0x2890ffc71a548df5 + r10_5 + r11_7 + 0x1a0d4c09f0ed46aa - 0x4738b52179d0000 + 0x56e0f2354f8b39af + r15_6 - 0x58bc5742467c34e6;
}

uint64_t log_size_4_var_014(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t rsi4;
    int64_t r12_5;
    int16_t dx6;

    rdx3 = 0x37aa6847392500c;
    rsi4 = 0x445c3d28c5b177e5;
    r12_5 = 0x89bd464d79c2de08;
    *reinterpret_cast<int16_t*>(&rsi4) = reinterpret_cast<int16_t>(0x77e5 >> 93);
    dx6 = __intrinsic();
    *reinterpret_cast<signed char*>(&r12_5) = *reinterpret_cast<signed char*>(&dx6);
    *reinterpret_cast<int16_t*>(&rdx3) = __intrinsic();
    __asm__("rcl ch, 0x38");
    __asm__("cdq ");
    return 0x73460783543cc481 - (0xd5bd64425054395d - (0xd790a37e + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0xd5bd64425054395d < 0xd790a37e + static_cast<uint64_t>(__intrinsic()))))) + rdx3 - 0x70f87d223d14977e + rsi4 - 0x6f368659c14fe7a4 + 0xd790a37e - 0x69104d31635cf699 - 0x2c0d54303cb74532 + 0x4a1d778f7d4cdc1 + (r12_5 + 0x2b0087e6 + 1) - 0x3d0cf4ba234324c5 - 0x4ffbe3064dc078de + static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r12_5)) - 0x32dd3b114ee3a008;
}

uint64_t log_size_4_var_015(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t r11_4;
    int64_t rcx5;
    unsigned char cl6;
    int64_t rsi7;
    uint1_t cf8;
    int64_t rbp9;

    rbp3 = 0xe8f311c476a8a86c;
    r11_4 = 0xc357abe6256da59;
    *reinterpret_cast<int32_t*>(&rcx5) = 0x2615c9f8 >> -8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    cl6 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx5) & 15);
    __asm__("shrd r9w, r9w, cl");
    rsi7 = 0xd7c454d65a4cc11 >> cl6;
    *reinterpret_cast<int16_t*>(&rsi7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi7) << 1);
    cf8 = reinterpret_cast<uint1_t>(cl6 < 42);
    *reinterpret_cast<unsigned char*>(&rcx5) = reinterpret_cast<unsigned char>(cl6 - reinterpret_cast<unsigned char>(41 + cf8));
    if (!cf8) {
        *reinterpret_cast<int16_t*>(&rbp3) = 0x52e3;
    }
    *reinterpret_cast<uint32_t*>(&rbp9) = *reinterpret_cast<uint32_t*>(&rbp3) ^ 0xd067be44;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = 0;
    if (!__intrinsic()) {
        r11_4 = 0x5f4c570b1b380185;
    }
    __asm__("shrd r9w, r14w, 0xa");
    return 0x1978ac57d2874d6e - rcx5 + 0x69222e8c + rbp9 + (rsi7 + 0x5822154fd67752e3) + 0x5f4c570b1b38902d + 0x531147d994d800c0 - 0x4425bdb12f9841bc - 0x88bfc254ddb1de4 + r11_4 + 0x5822154fd67752e3 + 0x4355b06ca2191750 + 0x3e1d8c141673feff + 0x61d49d713ab5d2ec + 0x13d556e357d9a0ea;
}

int64_t log_size_4_var_046(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rcx4;
    int64_t r8_5;
    int64_t rdx6;
    int64_t rcx7;

    rbx3 = 0xeaa5191cdcbf8f06;
    rcx4 = 0x2bcd33b4c77baad4;
    __asm__("btr ax, 0xf1");
    __asm__("rcr bx, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rcx4) = 0xde8bb846;
    }
    __asm__("rcr r13d, cl");
    *reinterpret_cast<int32_t*>(&r8_5) = -0xe0b4ab5e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = 0;
    __asm__("rcr dh, cl");
    __asm__("bts r14d, 0xa4");
    __asm__("xadd cl, dil");
    rdx6 = __intrinsic();
    if (0) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx3) + 1) = 43;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx4) + 1) = -22;
    }
    *reinterpret_cast<unsigned char*>(&rdx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx6) & 0xfd);
    __asm__("ror r14b, 0xab");
    *reinterpret_cast<int32_t*>(&rcx7) = *reinterpret_cast<int32_t*>(&rcx4) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    __asm__("rcr r11w, 0xe5");
    return 0x3fd3258ccff4c260 + rbx3 + rcx7 + rdx6 - 0x6977fe88a3cd2c20 - 0x3b25d0f1e2117147 - 0x87030519b3221d8 + r8_5 + 0x16eb1064de8bb846 - 0x74c156fddaec8303 - 0x73a0e66907034709 - 0x7c9d3638d32cdb63 + 0x3cb61327915277eb - 0x5318af9d2419db8c + 0x500504a8 - 0x3e4b0885966d4f1d;
}

uint64_t log_size_4_var_068(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rbx4;
    int64_t rdx5;
    int64_t r11_6;
    int64_t rcx7;
    uint64_t rax8;

    rax3 = 0xa4450109e3bf19c7;
    rbx4 = 0xfa7fe0efcdde0dfa;
    rdx5 = 0xd4daf6465ab702f4;
    r11_6 = 0xfbbaed8af70a5f32;
    rcx7 = 0xfa4d5a5d2d9f76e1;
    if (0) {
        *reinterpret_cast<signed char*>(&rax3) = -44;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx5) + 1) = -57;
    }
    *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<uint32_t*>(&rax3) - (0x2bb05359 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) < 0x2bb05359 - __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = reinterpret_cast<unsigned char>(0xfa >> -31);
    __asm__("bsf rsi, r13");
    *reinterpret_cast<unsigned char*>(&rbx4) = reinterpret_cast<unsigned char>(0xfa | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax8) + 1));
    *reinterpret_cast<uint16_t*>(&r11_6) = reinterpret_cast<uint16_t>(0x5f32 | *reinterpret_cast<uint16_t*>(&rcx7));
    __asm__("xadd al, al");
    __asm__("bts r10d, 0x29");
    *reinterpret_cast<signed char*>(&rcx7) = -32;
    return (rax8 & 0xaa80fe687e704872) + rbx4 + rcx7 + rdx5 + 0x3c274af8df82f680 + 0x5f87b773719ab9a6 + 0xaa80fe687e704872 - 0x5b0cf2f61618bae8 + 0xf8d00f05 + 0x226a0bc8682efff4 + r11_6 + 0x1db47306 - 0x4482cc9ac0976db6 + 0x4d36ffa1390e9808 + 0xc0452891640f9d0 - 0x65b6fb1ab0e53f95;
}

int64_t log_size_4_var_074(int64_t rdi, int64_t rsi) {
    int64_t rdx3;
    int64_t r12_4;
    int64_t rbp5;
    uint16_t tmp16_6;

    rdx3 = 0x810ada4ccf215c2e;
    r12_4 = 0x5010b6c28bdbf041;
    if (0) {
        *reinterpret_cast<int16_t*>(&rdx3) = 0x4c83;
    }
    __asm__("shrd r12d, esi, 0x1");
    __asm__("rcr eax, 1");
    *reinterpret_cast<int32_t*>(&rbp5) = 0xce2591f0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = 0;
    __asm__("shld di, di, 0x1");
    __asm__("rcl bpl, 1");
    *reinterpret_cast<unsigned char*>(&r12_4) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(65 + *reinterpret_cast<unsigned char*>(&rdx3))));
    tmp16_6 = reinterpret_cast<uint16_t>(0x1b1f + static_cast<uint1_t>(0xe25b41e >> -98));
    *reinterpret_cast<uint16_t*>(&rbp5) = tmp16_6;
    *reinterpret_cast<unsigned char*>(&rdx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3) - reinterpret_cast<unsigned char>(63 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx3) < reinterpret_cast<unsigned char>(63 + reinterpret_cast<uint1_t>(tmp16_6 < 0x91f0)))));
    return 0x30b93772b4febb89 + rdx3 + rbp5 + 89 + 0xe6596a608eef059 + 0x51a44c83 - 0x6cba37dd5245ae89 - 0x177be3b46bc2f7c7 + 0x2a86795aeab13e06 + r12_4 + 0x71c4bb930d3be3b5 + 0xeefb740e25b41e - 0x789df85549d55e81 - 0x211601f9205e4bd;
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

void fun_401383() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x408c20, 0x408c90, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
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

void fun_408c23(int32_t edi, int64_t rsi, int64_t rdx) {
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

void fun_408c93() {
    __asm__("cli ");
    return;
}

void fun_408c9b() {
    __asm__("cli ");
    return;
}

int64_t g40b010 = 0;

void fun_401036() {
    goto g40b010;
}

int64_t main(int64_t rdi, int64_t rsi) {
    uint64_t rax3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    uint64_t rax7;
    int64_t rax8;
    int64_t rax9;
    int64_t rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rax13;
    uint64_t rax14;
    int64_t rax15;
    int64_t rax16;
    uint64_t rax17;
    uint64_t rax18;
    int64_t rax19;
    int64_t rax20;
    int64_t rax21;
    uint64_t rax22;
    uint64_t rax23;
    int64_t rax24;
    int64_t rax25;
    int64_t rax26;
    int64_t rax27;
    int64_t rax28;
    int64_t rax29;
    int64_t rax30;
    int64_t rax31;
    int64_t rax32;
    uint64_t rax33;
    int64_t rax34;
    int64_t rax35;
    int64_t rax36;
    uint64_t rax37;
    int64_t rax38;
    int64_t rax39;
    int64_t rax40;
    int64_t rax41;
    int64_t rax42;
    int64_t rax43;
    int64_t rax44;
    int64_t rax45;
    int64_t rax46;
    int64_t rax47;
    int64_t rax48;
    int64_t rax49;
    int64_t rax50;
    int64_t rax51;
    uint64_t rax52;
    int64_t rax53;
    uint64_t rax54;
    int64_t rax55;
    uint64_t rax56;
    uint64_t rax57;
    int64_t rax58;
    int64_t rax59;
    int64_t rax60;
    int64_t rax61;
    int64_t rax62;
    int64_t rax63;
    int64_t rax64;
    int64_t rax65;
    int64_t rax66;
    int64_t rax67;
    int64_t rax68;
    int64_t rax69;
    int64_t rax70;
    uint64_t rax71;
    int64_t rax72;
    uint64_t rax73;
    int64_t rax74;
    int64_t rax75;
    int64_t rax76;
    int64_t rax77;
    int64_t rax78;
    uint64_t rax79;
    int64_t rax80;
    int64_t rax81;
    int64_t rax82;
    uint64_t rax83;
    uint64_t rax84;
    uint64_t rax85;
    int64_t rax86;
    int64_t rax87;
    int64_t rax88;
    int64_t rax89;
    int64_t rax90;
    int64_t rax91;
    int64_t rax92;
    int64_t rax93;
    uint64_t rax94;
    int64_t rax95;
    int64_t rax96;
    int64_t rax97;
    uint64_t rax98;
    int64_t rax99;
    uint64_t rax100;
    int64_t rax101;
    int64_t rax102;

    rax3 = log_size_4_var_000(rdi, rsi);
    rax4 = log_size_4_var_001(rdi, rsi);
    rax5 = log_size_4_var_002(rdi, rsi);
    rax6 = log_size_4_var_003(rdi, rsi);
    rax7 = log_size_4_var_004(rdi, rsi);
    rax8 = log_size_4_var_005(rdi, rsi);
    rax9 = log_size_4_var_006(rdi, rsi);
    rax10 = log_size_4_var_007(rdi, rsi);
    rax11 = log_size_4_var_008(rdi, rsi);
    rax12 = log_size_4_var_009(rdi, rsi);
    rax13 = log_size_4_var_010(rdi, rsi);
    rax14 = log_size_4_var_011(rdi, rsi);
    rax15 = log_size_4_var_012(rdi, rsi);
    rax16 = log_size_4_var_013(rdi, rsi);
    rax17 = log_size_4_var_014(rdi, rsi);
    rax18 = log_size_4_var_015(rdi, rsi);
    rax19 = log_size_4_var_016(rdi, rsi);
    rax20 = log_size_4_var_017(rdi, rsi);
    rax21 = log_size_4_var_018(rdi, rsi);
    rax22 = log_size_4_var_019(rdi, rsi);
    rax23 = log_size_4_var_020(rdi, rsi);
    rax24 = log_size_4_var_021(rdi, rsi);
    rax25 = log_size_4_var_022(rdi, rsi);
    rax26 = log_size_4_var_023(rdi, rsi);
    rax27 = log_size_4_var_024(rdi, rsi);
    rax28 = log_size_4_var_025(rdi, rsi);
    rax29 = log_size_4_var_026(rdi, rsi);
    rax30 = log_size_4_var_027(rdi, rsi);
    rax31 = log_size_4_var_028(rdi, rsi);
    rax32 = log_size_4_var_029(rdi, rsi);
    rax33 = log_size_4_var_030(rdi, rsi);
    rax34 = log_size_4_var_031(rdi, rsi);
    rax35 = log_size_4_var_032(rdi, rsi);
    rax36 = log_size_4_var_033(rdi, rsi);
    rax37 = log_size_4_var_034(rdi, rsi);
    rax38 = log_size_4_var_035(rdi, rsi);
    rax39 = log_size_4_var_036(rdi, rsi);
    rax40 = log_size_4_var_037(rdi, rsi);
    rax41 = log_size_4_var_038(rdi, rsi);
    rax42 = log_size_4_var_039(rdi, rsi);
    rax43 = log_size_4_var_040(rdi, rsi);
    rax44 = log_size_4_var_041(rdi, rsi);
    rax45 = log_size_4_var_042(rdi, rsi);
    rax46 = log_size_4_var_043(rdi, rsi);
    rax47 = log_size_4_var_044(rdi, rsi);
    rax48 = log_size_4_var_045(rdi, rsi);
    rax49 = log_size_4_var_046(rdi, rsi);
    rax50 = log_size_4_var_047(rdi, rsi);
    rax51 = log_size_4_var_048(rdi, rsi);
    rax52 = log_size_4_var_049(rdi, rsi);
    rax53 = log_size_4_var_050(rdi, rsi);
    rax54 = log_size_4_var_051(rdi, rsi);
    rax55 = log_size_4_var_052(rdi, rsi);
    rax56 = log_size_4_var_053(rdi, rsi);
    rax57 = log_size_4_var_054(rdi, rsi);
    rax58 = log_size_4_var_055(rdi, rsi);
    rax59 = log_size_4_var_056(rdi, rsi);
    rax60 = log_size_4_var_057(rdi, rsi);
    rax61 = log_size_4_var_058(rdi, rsi);
    rax62 = log_size_4_var_059(rdi, rsi);
    rax63 = log_size_4_var_060(rdi, rsi);
    rax64 = log_size_4_var_061(rdi, rsi);
    rax65 = log_size_4_var_062(rdi, rsi);
    rax66 = log_size_4_var_063(rdi, rsi);
    rax67 = log_size_4_var_064(rdi, rsi);
    rax68 = log_size_4_var_065(rdi, rsi);
    rax69 = log_size_4_var_066(rdi, rsi);
    rax70 = log_size_4_var_067(rdi, rsi);
    rax71 = log_size_4_var_068(rdi, rsi);
    rax72 = log_size_4_var_069(rdi, rsi);
    rax73 = log_size_4_var_070(rdi, rsi);
    rax74 = log_size_4_var_071(rdi, rsi);
    rax75 = log_size_4_var_072(rdi, rsi);
    rax76 = log_size_4_var_073(rdi, rsi);
    rax77 = log_size_4_var_074(rdi, rsi);
    rax78 = log_size_4_var_075(rdi, rsi);
    rax79 = log_size_4_var_076(rdi, rsi);
    rax80 = log_size_4_var_077(rdi, rsi);
    rax81 = log_size_4_var_078(rdi, rsi);
    rax82 = log_size_4_var_079(rdi, rsi);
    rax83 = log_size_4_var_080(rdi, rsi);
    rax84 = log_size_4_var_081(rdi, rsi);
    rax85 = log_size_4_var_082(rdi, rsi);
    rax86 = log_size_4_var_083(rdi, rsi);
    rax87 = log_size_4_var_084(rdi, rsi);
    rax88 = log_size_4_var_085(rdi, rsi);
    rax89 = log_size_4_var_086(rdi, rsi);
    rax90 = log_size_4_var_087(rdi, rsi);
    rax91 = log_size_4_var_088(rdi, rsi);
    rax92 = log_size_4_var_089(rdi, rsi);
    rax93 = log_size_4_var_090(rdi, rsi);
    rax94 = log_size_4_var_091(rdi, rsi);
    rax95 = log_size_4_var_092(rdi, rsi);
    rax96 = log_size_4_var_093(rdi, rsi);
    rax97 = log_size_4_var_094(rdi, rsi);
    rax98 = log_size_4_var_095(rdi, rsi);
    rax99 = log_size_4_var_096(rdi, rsi);
    rax100 = log_size_4_var_097(rdi, rsi);
    rax101 = log_size_4_var_098(rdi, rsi);
    rax102 = log_size_4_var_099(rdi, rsi);
    if (rax3 + rax4 + rax5 + rax6 + rax7 + rax8 + rax9 + rax10 + rax11 + rax12 + rax13 + rax14 + rax15 + rax16 + rax17 + rax18 + rax19 + rax20 + rax21 + rax22 + rax23 + rax24 + rax25 + rax26 + rax27 + rax28 + rax29 + rax30 + rax31 + rax32 + rax33 + rax34 + rax35 + rax36 + rax37 + rax38 + rax39 + rax40 + rax41 + rax42 + rax43 + rax44 + rax45 + rax46 + rax47 + rax48 + rax49 + rax50 + rax51 + rax52 + rax53 + rax54 + rax55 + rax56 + rax57 + rax58 + rax59 + rax60 + rax61 + rax62 + rax63 + rax64 + rax65 + rax66 + rax67 + rax68 + rax69 + rax70 + rax71 + rax72 + rax73 + rax74 + rax75 + rax76 + rax77 + rax78 + rax79 + rax80 + rax81 + rax82 + rax83 + rax84 + rax85 + rax86 + rax87 + rax88 + rax89 + rax90 + rax91 + rax92 + rax93 + rax94 + rax95 + rax96 + rax97 + rax98 + rax99 + rax100 + rax101 + rax102) {
        fun_401030("sum==0", "source_complex_with_base_100_funcs_of_size_16.c", 0xd3, "main");
    } else {
        return 0;
    }
}
