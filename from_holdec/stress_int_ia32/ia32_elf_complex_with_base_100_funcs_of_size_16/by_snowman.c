
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049397(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049046;

void fun_8049040(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __assert_fail(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804f018;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __assert_fail(0x804f018, v2);
        return eax3;
    }
}

int32_t log_size_4_var_000() {
    int32_t ebx1;

    ebx1 = 0x2433915d;
    __asm__("shrd bp, dx, cl");
    __asm__("rol dx, 0x2");
    __asm__("bts bp, 0x45");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(73 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1))));
    __asm__("rcr bp, 1");
    __asm__("rcr ah, 1");
    return 0x5c55ffff + ebx1 - 0x54ccc4e3 + 0x5adbfda8 - 0x6f4b8b4 + 0x647e63f7 - 0x54ccc41e + 0x70aa1c38;
}

uint32_t log_size_4_var_003() {
    uint32_t ecx1;
    uint32_t ebp2;
    uint32_t ebx3;

    ecx1 = 0x63fbe6a;
    ebp2 = reinterpret_cast<uint32_t>(0xb883e28d >> 100);
    *reinterpret_cast<int16_t*>(&ebp2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp2) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) >> 76);
    ebx3 = 0x858000c5;
    __asm__("rcl di, 1");
    __asm__("rol al, 1");
    __asm__("rcl ecx, 1");
    *reinterpret_cast<int16_t*>(&ebx3) = reinterpret_cast<int16_t>(0xc5 + *reinterpret_cast<int16_t*>(&ebp2));
    __asm__("rcl al, 1");
    return 0x6ebfc9a2 - ebx3 + (ecx1 - (0x858000c4 + reinterpret_cast<uint1_t>(ecx1 < 0x858000c4))) + ecx1 * 0xcd179bbc + ebp2 - 0x5598c2a1 + 0x771a2899 + 0x23ad42bb;
}

int32_t log_size_4_var_005() {
    int32_t ebx1;
    int32_t ecx2;

    ebx1 = 0xf186c7ff;
    ecx2 = 0x5ecfb3e;
    __asm__("bts ax, si");
    __asm__("btr edi, esi");
    __asm__("rcl edi, 1");
    if (0) {
    }
    __asm__("rcl eax, 0x1a");
    __asm__("rol ebp, 1");
    __asm__("bsr ecx, esi");
    __asm__("ror ebx, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = __intrinsic();
    return 0x64241df - ebx1 + ecx2 + 0x6e45ca40 + (0xcbf43511 >> 62) - 0x2c321325 - 0x385be646 + 0x35ed98d8;
}

int32_t log_size_4_var_006() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t ebp4;
    int32_t ecx5;
    int32_t edx6;
    unsigned char tmp8_7;
    int1_t cf8;

    eax1 = 0x89083f3b;
    ebx2 = 0x1041aba8;
    ecx3 = 0x2bdde391;
    ebp4 = 0x58f6e078;
    __asm__("bts bx, si");
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<unsigned char>(0x91 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1));
    if (0x91 <= *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1)) {
        ebp4 = ecx3;
    }
    ecx5 = ecx3 * 0x5b57c5ba;
    edx6 = -0xba6de99c;
    __asm__("shld cx, dx, 0x2");
    __asm__("bsf edi, ebx");
    tmp8_7 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx5) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    cf8 = tmp8_7 < *reinterpret_cast<unsigned char*>(&ecx5);
    *reinterpret_cast<unsigned char*>(&ecx5) = tmp8_7;
    if (!cf8) {
    }
    __asm__("btr ebp, edi");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx6) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx6) + 1) + 40) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx5) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx5) + 1) + 53);
    return 0x66b6151d - ecx5 + edx6 + (ebp4 - 1) + 0x5deb474f + 0xc1ae177 - 0x3d66d72d;
}

int32_t log_size_4_var_007() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;
    int32_t ecx4;

    ebx1 = 0x6d82becf;
    ecx2 = 0x83fe6ce;
    edx3 = 0x64c6cac2;
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(0xcac2 >> -29);
    *reinterpret_cast<signed char*>(&ebx1) = reinterpret_cast<signed char>(-49 >> 93);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - 1);
    __asm__("rol ax, 1");
    ecx4 = ecx2 << 1;
    __asm__("rcl cl, 1");
    __asm__("shld cx, bx, 0x8");
    *reinterpret_cast<unsigned char*>(&ecx4) = 12;
    __asm__("shld dx, bx, cl");
    __asm__("rol ax, cl");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) < 7) {
        *reinterpret_cast<int16_t*>(&ecx4) = 0x3726;
    }
    return 0x1811 + ebx1 + ecx4 + edx3 - 0x3f2bc8da + 0x5bd4a83a - 0x704f0bd7 + 0x70dd7fa3;
}

int32_t log_size_4_var_008() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    eax1 = 0x9bc9ba1e;
    ebx2 = 0x45eeba7b;
    ebp3 = 0x66d48826;
    *reinterpret_cast<int16_t*>(&ebx2) = 0x76;
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax1) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax1) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx2) = 0x4076;
    }
    __asm__("rol bl, cl");
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(0x8826 >> 0x76);
    *reinterpret_cast<int16_t*>(&ebx2) = -*reinterpret_cast<int16_t*>(&ebx2);
    return ebx2 + 0x54fb4076 - 0x64366f8c + ebp3 + 0x1fc16056 - 0x317adfa7 + 0x5b78414c;
}

int32_t log_size_4_var_009() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;
    int32_t eax4;
    signed char tmp8_5;

    ebx1 = 0xf3c901cf;
    ecx2 = 0xb42ac43d;
    edx3 = 0xed5317ee;
    eax4 = 0;
    __asm__("btc di, 0xc9");
    if (!__intrinsic()) {
        edx3 = 0x2a06c426;
    }
    __asm__("rol ecx, 0x81");
    *reinterpret_cast<int16_t*>(&edx3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx3) >> 61);
    __asm__("btc di, 0x95");
    __asm__("btc ax, bp");
    tmp8_5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 1);
    *reinterpret_cast<signed char*>(&ebx1) = tmp8_5;
    __asm__("rcl cl, 1");
    __asm__("cdq ");
    if (0x2a06c426 > ebx1) {
        eax4 = edx3;
    }
    __asm__("bsf edx, ebx");
    return eax4 + ebx1 - 0x4bd530c3 + edx3 - 0x5f8c0090 - 0x343c363 + 0x2a06c426 - 0x2355d393;
}

int32_t log_size_4_var_010() {
    int32_t eax1;
    uint16_t cx2;

    eax1 = 0x22b6e4c;
    __asm__("bts ecx, 0xae");
    cx2 = 0x3b90;
    *reinterpret_cast<uint16_t*>(&eax1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx2) + 1);
    __asm__("ror cl, cl");
    __asm__("rcr eax, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = 0;
    __asm__("rcr bh, 0x26");
    return eax1 + 0x5bd00000 + 0x320d397d + 0x1a70b232 - 0x1c3966a1 - 0x29f37eb2 + 0x801470 - 0x63990ff7;
}

uint32_t log_size_4_var_013() {
    int32_t eax1;

    __asm__("shld ebx, ecx, 0x1");
    __asm__("ror bh, 0xe3");
    eax1 = 0x2599ffa8 >> -37;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) - 1);
    return eax1 + 0x62be6524 + 0x16b2d199 + (0x16b2d199 + __intrinsic()) + 0x55445b69 - 0x16057ccd + 0x39f8229c - 0x7c1afbb6;
}

int32_t log_size_4_var_015() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;

    eax1 = 0x608abcb0;
    ebx2 = 0xd1f2a0ec;
    ecx3 = 0x262d80df;
    __asm__("btr ax, 0xea");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1)) {
    }
    __asm__("shrd ecx, edx, cl");
    edx4 = __intrinsic();
    *reinterpret_cast<int16_t*>(&ecx3) = 0x1be;
    *reinterpret_cast<unsigned char*>(&ecx3) = 14;
    __asm__("shld cx, bp, cl");
    __asm__("shld ebp, esi, 0xe4");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) != -20) {
        edx4 = 0x262d010e;
    }
    __asm__("ror edi, cl");
    __asm__("ror cl, cl");
    *reinterpret_cast<int16_t*>(&edx4) = 0x6c3;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) >> 1);
    return 0x6beb01c4 - ecx3 + edx4 - 0x65d57e75 - 0xf2171d4 + 0x5567fa6b + 0x455efccc;
}

int32_t log_size_4_var_016() {
    int32_t esi1;
    int32_t edx2;

    esi1 = 0x2656226a;
    __asm__("bts ebp, ecx");
    __asm__("rcr ch, 1");
    edx2 = 0xe2ecdfa0;
    *reinterpret_cast<int16_t*>(&edx2) = -0xdfa0;
    *reinterpret_cast<int16_t*>(&esi1) = 0x1135;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi1) = 0xc17b;
    }
    __asm__("ror dx, 0x3");
    __asm__("shld ax, bp, 0x1");
    __asm__("cwd ");
    return 0x2d09d80 - edx2 - 0x1c47c17c + esi1 - 0x156593ac - 0x54c4fbab;
}

int32_t log_size_4_var_017() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t eax3;

    ebx1 = 0xbaa53f4b;
    ecx2 = 0x70b50282;
    __asm__("ror bl, 1");
    __asm__("bts edx, ebp");
    __asm__("rcl dl, 0x2d");
    __asm__("btc ebx, 0x93");
    __asm__("rcr cl, 1");
    __asm__("rcl di, cl");
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(0x142 >> 66);
    eax3 = 0xffff8b5d;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1))));
    return eax3 - 0x455ac0b5 + ecx2 + 0x5cbd16bd + 0x3f4b + 0x30f386a3 + 0x4fd9cd62 - 0x8ecbd51;
}

uint32_t log_size_4_var_019() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t ebp4;
    uint16_t tmp16_5;

    eax1 = 0xfeb51aa3;
    ebx2 = 0xe365a43;
    edx3 = 0x8eb8e9d0;
    ebp4 = 0xddea7a2f;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) + 1);
    __asm__("bts edi, edi");
    __asm__("rol ax, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) << 1);
    __asm__("bts eax, 0x43");
    *reinterpret_cast<uint16_t*>(&ebp4) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0x7a2f >> 76) | 0xc000);
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) % *reinterpret_cast<uint16_t*>(&ebp4));
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) / *reinterpret_cast<uint16_t*>(&ebp4));
    __asm__("btr ecx, 0x1e");
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) | 0xbc);
    if (*reinterpret_cast<uint16_t*>(&ebx2) == *reinterpret_cast<uint16_t*>(&edx3)) {
        tmp16_5 = *reinterpret_cast<uint16_t*>(&ebx2);
        *reinterpret_cast<uint16_t*>(&ebx2) = *reinterpret_cast<uint16_t*>(&edx3);
        *reinterpret_cast<uint16_t*>(&edx3) = tmp16_5;
    }
    __asm__("rol edx, cl");
    return eax1 + reinterpret_cast<uint32_t>(ebx2 + 0x446b01c0) - 0x7d5b8ba8 + edx3 + ebp4 + 0x180b4f5f + eax1 + 0x1acab055;
}

int32_t log_size_4_var_020() {
    int32_t edx1;
    int32_t edi2;

    edx1 = 0x12e5c5f0;
    edi2 = 0xda094481;
    __asm__("rcr edx, 1");
    *reinterpret_cast<int16_t*>(&edx1) = 0x7de4;
    __asm__("bts ebp, edi");
    if (__intrinsic()) {
        edx1 = 0x57f9c5ef;
    }
    if (__intrinsic()) {
        edi2 = 0x57f9c5ef;
    }
    __asm__("rcl esi, 1");
    __asm__("rcr ebp, 1");
    return 0x27e669c6 - edx1 + 0x57f9c5ef - 0x1df71034 + edi2 + 0x5d4841a;
}

uint32_t log_size_4_var_021() {
    int32_t ebx1;
    int32_t ecx2;
    uint32_t edx3;

    ebx1 = 0x9290ad7;
    ecx2 = 0xcacfe4f3;
    __asm__("btc di, cx");
    edx3 = 0xf3;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    __asm__("shrd edx, ebx, cl");
    __asm__("btc ebx, ebp");
    *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<unsigned char>(0xf3 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + reinterpret_cast<uint1_t>(0xf3 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 1))));
    __asm__("shld di, bp, 0xc");
    __asm__("shld di, si, cl");
    return 0x4cc8e066 - (ebx1 - 0xf3) + static_cast<int32_t>(*reinterpret_cast<signed char*>(&edx3)) + edx3 - 0x1f580001 + 0x328e9973 + 0x4d6f9729 + 0x243bd0de;
}

int32_t log_size_4_var_023() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;

    eax1 = 0x88a58a6e;
    ebx2 = 0x3a455428;
    __asm__("rol edi, 0x32");
    __asm__("bts bp, 0x39");
    *reinterpret_cast<signed char*>(&eax1) = -0x6e;
    __asm__("rcr ebp, 1");
    __asm__("rol bx, cl");
    __asm__("btr si, si");
    *reinterpret_cast<int16_t*>(&ebx2) = reinterpret_cast<int16_t>(0x5428 >> 0xdc);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = 0;
    __asm__("ror ax, 1");
    __asm__("rcr ax, 0x25");
    edx3 = 0;
    *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<unsigned char>(0 >> 0xdc);
    return eax1 + ebx2 - 0x6db09124 + edx3 + 0x1a457519 + 0xccb8967 + 0x441f9042 - 0x30315776;
}

int32_t log_size_4_var_025() {
    int32_t ecx1;
    int32_t ebp2;
    int32_t ebx3;
    int32_t eax4;
    int32_t edx5;

    ecx1 = 0x3bb42dc3;
    ebp2 = 0x7c77022a;
    ebx3 = 0xbe504de4;
    __asm__("shrd ebp, eax, 0x21");
    eax4 = 0x558e;
    __asm__("ror di, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) - reinterpret_cast<unsigned char>(89 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) < 89)));
    __asm__("rcl bx, 0xb");
    *reinterpret_cast<int16_t*>(&ebp2) = reinterpret_cast<int16_t>(0x22a >> 53);
    edx5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx3) + 1);
    if (0) {
        *reinterpret_cast<signed char*>(&eax4) = -28;
        *reinterpret_cast<signed char*>(&ebx3) = 0x8e;
    }
    return eax4 + ebx3 + ecx1 + edx5 + ebp2 - 0x3f3669f + 0x396941d5 - 0x6db7d651;
}

int32_t log_size_4_var_026() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebp3;

    ebx1 = 0xf112fce;
    edx2 = 0x2d3814a8;
    ebp3 = 0x508209e4;
    __asm__("btc bp, bx");
    *reinterpret_cast<int16_t*>(&edx2) = 0x29d6;
    __asm__("rcr si, cl");
    __asm__("btr ecx, edi");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebp3) = 0x3892;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&edx2) = 0xd622;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1)) | 0xce);
    return 0x323d5734 - edx2 + ebp3 + 0xbe9a2ea - 0x6933c76e + 0x11cca8a5;
}

int32_t log_size_4_var_027() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    int32_t ebp4;
    int32_t esi5;
    int32_t edi6;

    eax1 = 0x53c4feb7;
    ecx2 = 0x2672b64b;
    edx3 = 0x4050c1cc;
    ebp4 = 0x68ebc49e;
    esi5 = 0xf0d94bf3;
    edi6 = 0x491a8ee5;
    __asm__("ror ecx, 0xe");
    if (0) {
        *reinterpret_cast<uint16_t*>(&ecx2) = 0xc49e;
    }
    __asm__("ror ax, 0xb6");
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx2) ^ 0xc1cc);
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx2) & 15);
    __asm__("shrd bp, si, cl");
    if (0) {
        *reinterpret_cast<uint16_t*>(&ebp4) = 0xc1cc;
        *reinterpret_cast<uint16_t*>(&edx3) = 0xc49e;
    }
    *reinterpret_cast<int16_t*>(&esi5) = reinterpret_cast<int16_t>(0x4bf3 >> *reinterpret_cast<unsigned char*>(&ecx2));
    __asm__("btr bx, 0xd3");
    __asm__("rcr al, 0x84");
    *reinterpret_cast<uint16_t*>(&edi6) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0x8ee5 + *reinterpret_cast<uint16_t*>(&ebp4)) + __intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) ^ 24);
    __asm__("rcl ecx, cl");
    return eax1 + 1 - 0x31afb8ff + ecx2 + edx3 + ebp4 + esi5 + edi6 - 0x505b0fe2;
}

uint32_t log_size_4_var_028() {
    int32_t eax1;
    uint32_t ebx2;
    int32_t ecx3;
    uint32_t edx4;
    int32_t edi5;
    uint32_t ebx6;
    int32_t ecx7;
    unsigned char tmp8_8;
    uint1_t cf9;

    eax1 = 0x20e6ebb6;
    ebx2 = 0x98716720;
    ecx3 = 0xca544283;
    edx4 = 0x2cd074c1;
    edi5 = 0xcb59d7b3;
    *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(74 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    ebx6 = ebx2 - 0x2cd074c1;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(ebx2 <= 0x2cd074c1);
    ecx7 = ecx3 - 0x6fffebee;
    __asm__("bts dx, 0x8");
    tmp8_8 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) + 74)));
    cf9 = reinterpret_cast<uint1_t>(tmp8_8 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = tmp8_8;
    if (cf9 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) == 0)) {
        ebx6 = ebx6;
    }
    __asm__("rcl si, cl");
    *reinterpret_cast<int16_t*>(&ecx7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx7) + *reinterpret_cast<int16_t*>(&edx4));
    *reinterpret_cast<int16_t*>(&edi5) = reinterpret_cast<int16_t>(0x284d - *reinterpret_cast<int16_t*>(&eax1));
    return eax1 + (reinterpret_cast<int32_t>(ebx6) >> 0x68) + ecx7 + edx4 + 0x6fffebee - 0x5a57c74a + edi5 + 0x76867ce3;
}

int32_t log_size_4_var_029() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;

    ebx1 = 0x3b5d21da;
    ecx2 = 0x352c5b55;
    __asm__("rol cl, 0xa9");
    __asm__("xadd ch, dh");
    edx3 = 0x355863be;
    *reinterpret_cast<unsigned char*>(&ecx2) = __intrinsic();
    __asm__("xadd al, bl");
    __asm__("rcl cl, 1");
    __asm__("rcl ah, 1");
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(0x21da - reinterpret_cast<uint16_t>(0x758f - reinterpret_cast<uint1_t>(0x21da < reinterpret_cast<uint16_t>(0x758f - __intrinsic()))));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1));
    return 0x5eba0001 + ebx1 + ecx2 + 0x355863be - 0x35bf9350 + 0x664d1630 + 0x48d4f7b6 - 0x7dfe804c;
}

uint32_t log_size_4_var_031() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int16_t ax5;
    int16_t ax6;

    eax1 = 0x47a1beb1;
    ebx2 = 0x80a1dbad;
    ecx3 = 0x77be3c2a;
    edx4 = 0xd1331f02;
    ax5 = reinterpret_cast<int16_t>(-79 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    __asm__("cwd ");
    *reinterpret_cast<signed char*>(&ax6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax5) - 1);
    *reinterpret_cast<unsigned char*>(&ecx3) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax6) + 1) = 42;
    *reinterpret_cast<signed char*>(&edx4) = reinterpret_cast<signed char>(2 << *reinterpret_cast<unsigned char*>(&ecx3));
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(~ax6);
    *reinterpret_cast<uint16_t*>(&ebx2) = reinterpret_cast<uint16_t>(0xdbad >> -31);
    __asm__("btr cx, di");
    __asm__("rcr di, cl");
    __asm__("btr ebx, 0x86");
    __asm__("btr eax, ebx");
    __asm__("btr edi, edx");
    *reinterpret_cast<signed char*>(&ebx2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx2) - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1));
    return eax1 + ebx2 + ecx3 + edx4 + (0x688a2f0b << *reinterpret_cast<unsigned char*>(&ecx3)) + (0x66d785df >> -28) + 0x4269c503 - 0x4abbd049;
}

uint32_t log_size_4_var_033() {
    uint32_t ecx1;
    int32_t edx2;
    int32_t esi3;
    uint32_t ecx4;

    ecx1 = 0xe38ce6c6;
    edx2 = 0x70ab7ad2;
    esi3 = 0xea867cf6;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + 1);
    __asm__("btc ecx, 0xc7");
    *reinterpret_cast<signed char*>(&edx2) = -99;
    if (1) {
        *reinterpret_cast<int16_t*>(&esi3) = 0x7cf6;
    }
    ecx4 = ecx1 - (0x38afd45c - reinterpret_cast<uint1_t>(ecx1 < 0xc7502ba4));
    __asm__("ror eax, 0xb5");
    *reinterpret_cast<uint16_t*>(&ecx4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx4) >> -53);
    __asm__("shld ebp, esi, 0xa2");
    __asm__("xadd ch, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&esi3) = 0x7a9d;
        *reinterpret_cast<int16_t*>(&edx2) = 0x7cf6;
    }
    *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx4) + 83) + 1);
    return 0xda05ed8 + ecx4 + edx2 - 0x22a91014 + esi3 - 58 + 0x630739a4;
}

uint32_t log_size_4_var_034() {
    uint32_t ebx1;
    uint1_t cf2;
    uint32_t esi3;

    __asm__("bts ebx, ebp");
    ebx1 = 0x239f3c7d;
    cf2 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) < 0xeb);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - reinterpret_cast<unsigned char>(22 - cf2));
    __asm__("rcr ebp, 1");
    *reinterpret_cast<int16_t*>(&ebx1) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&ebx1));
    __asm__("cwd ");
    esi3 = 0x48cf5c02 - cf2;
    if (!esi3) {
        ebx1 = 0xdb8a5321;
    }
    __asm__("shrd ax, bx, cl");
    return 0xdb8a5321 + ebx1 + 0xd74e605 - 0x3a2d0c83 + (reinterpret_cast<uint32_t>(0x60766fc0 >> 77) ^ 0xdb8a5305) + esi3 + (0x8e7af811 >> 0xffffff98) - 0x7765ec06;
}

uint32_t log_size_4_var_035() {
    int32_t eax1;
    int16_t ax2;

    eax1 = 0xbeb8edc9;
    __asm__("bts eax, 0xe7");
    ax2 = 0xa4ff;
    __asm__("rcr bx, 1");
    __asm__("rcr ax, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = -1;
    *reinterpret_cast<signed char*>(&eax1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax2) + 1);
    __asm__("cdq ");
    __asm__("ror esi, 0x54");
    return eax1 + 95 + 0x613f7967 + (0x9467759c >> -13) + 0xedc9 - 0x7dee2005 + ((0xed08edc9 >> 95) - 1) - 0x3df89f01;
}

int32_t log_size_4_var_045() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;

    eax1 = 0x10ad5cf2;
    ebx2 = 0x1063675a;
    ecx3 = 0xa74b9be8;
    edx4 = 0x52c2050a;
    __asm__("btr ebx, edi");
    *reinterpret_cast<uint16_t*>(&ebx2) = reinterpret_cast<uint16_t>(0x675a >> 0x6c);
    __asm__("ror ch, cl");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(-14 * *reinterpret_cast<signed char*>(&ebx2));
    __asm__("rcr esi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) - reinterpret_cast<unsigned char>(0x74 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) < reinterpret_cast<unsigned char>(0x74 + __intrinsic()))));
    __asm__("xadd dl, dl");
    __asm__("bsr edx, edi");
    __asm__("bts ebp, 0x7f");
    *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<unsigned char>(10 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    if (0) {
        edx4 = 0x1e3bbd74;
    }
    __asm__("ror edi, cl");
    __asm__("bts bp, dx");
    return eax1 + ebx2 - 0x58b46418 + edx4 + 0x3c97cf6 + 0x1e3bbd74 + 0x5865e85e - 0x399b63b7;
}

int32_t log_size_4_var_046() {
    int32_t ebx1;

    ebx1 = 0xdbca8794;
    __asm__("rcr ax, 1");
    __asm__("rol si, 0x92");
    __asm__("btc edx, 0x59");
    __asm__("xadd edx, edx");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    __asm__("rol esi, cl");
    return 0xb0e7963 - ebx1 + 0x33d4537a + 0x13b9913 - 0x16e0006c - 0x1d6b9228 + 0x5a383415 - 0x3860ffe4;
}

int32_t log_size_4_var_048() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t esi3;
    uint16_t cx4;
    signed char tmp8_5;

    ebx1 = 0xd9920a9e;
    ecx2 = 0xd8c71459;
    esi3 = 0x9218768f;
    __asm__("xadd edi, esi");
    cx4 = 0xd193;
    if (0) {
    }
    tmp8_5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx4) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx4) + 1) = tmp8_5;
    __asm__("btr ax, si");
    __asm__("rcr dl, 1");
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(cx4 ^ 0x768f);
    if (0) {
        esi3 = ebx1;
    }
    __asm__("rcl ax, cl");
    return ebx1 + ecx2 - 0x5c3d42c7 + 0x1fc0e2e9 + esi3 - 0xb42ccb2 - 0x17e6e1f5;
}

uint32_t log_size_4_var_049() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    uint32_t ecx4;

    eax1 = 0x75940462;
    ecx2 = 0x8e3927c2;
    edx3 = 0x634336ed;
    __asm__("ror bh, 0x42");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) & 98);
    __asm__("lahf ");
    *reinterpret_cast<signed char*>(&edx3) = 0x9a;
    ecx4 = reinterpret_cast<uint32_t>(ecx2 - 0x1a2c2fae);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1);
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(0x462 >> *reinterpret_cast<signed char*>(&ecx4));
    __asm__("rol ch, 1");
    return eax1 + (0x7e46c90f - eax1 + 1) + ecx4 + edx3 + 0x504aea0b + 0x47c81084 - 0x463e1904 + 0x69f9b9d5;
}

uint32_t log_size_4_var_051() {
    int32_t ebx1;
    int32_t ebp2;
    int32_t eax3;
    int32_t edx4;

    ebx1 = 0xe2b71726;
    ebp2 = 0x45eaffca;
    eax3 = 0xa923bdca;
    edx4 = __intrinsic();
    if (__intrinsic()) {
    }
    __asm__("rcr cx, 1");
    *reinterpret_cast<uint16_t*>(&eax3) = 0xf764;
    *reinterpret_cast<int16_t*>(&edx4) = __intrinsic();
    __asm__("rol eax, 1");
    __asm__("rcr dx, cl");
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(100 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    __asm__("bts ebx, ebp");
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0xffca + *reinterpret_cast<uint16_t*>(&eax3))));
    return eax3 - 0x1d48e8da + (0xbf5d10b5 >> -75) + edx4 + ebp2 + 0x1fa14579 - 0x79d9e8b3 - 0x68f1d465;
}

int32_t log_size_4_var_052() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t eax3;
    int32_t ecx4;

    ebx1 = 0x13e29a38;
    ecx2 = 0x67ca5ac;
    __asm__("btr ecx, 0xa2");
    __asm__("rcr ah, 1");
    __asm__("ror al, cl");
    eax3 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    *reinterpret_cast<signed char*>(&ecx2) = reinterpret_cast<signed char>(84 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    ecx4 = ecx2 * 0x214ec0de;
    *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx4) & 15);
    __asm__("shld cx, bx, cl");
    __asm__("shrd ecx, edx, 0x1");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx4) == 0))) {
        ebx1 = __intrinsic();
    }
    return eax3 + ebx1 + ecx4 + __intrinsic() + 0x58f7e89f + 0x5a577d0e + 0x42511504 - 0x9d0d674;
}

int32_t log_size_4_var_053() {
    int32_t edx1;
    int32_t eax2;
    uint16_t ax3;
    uint16_t dx4;
    uint16_t ax5;

    edx1 = 0x1759d49e;
    eax2 = 0x9a38f86e >> 76;
    __asm__("ror dx, 1");
    __asm__("btr ecx, esi");
    ax3 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax2) | 0xc000);
    dx4 = reinterpret_cast<uint16_t>(ax3 % ax3);
    __asm__("shrd edx, ebx, 0xaa");
    ax5 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax3 / ax3) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx1) = reinterpret_cast<uint16_t>(ax5 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&dx4) | 0xc0)));
    __asm__("rcl dx, cl");
    return reinterpret_cast<int16_t>(ax5 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&edx1))) - 0x23bdd206 + 0x4456af4c + edx1 - 0x6db728c6 + 0x5be64b9b - 0xbb7d3c1 + 0x7d29d3bb;
}

int32_t log_size_4_var_058() {
    int32_t ecx1;

    ecx1 = 0x9d44dc53;
    __asm__("shrd dx, bx, 0x1");
    __asm__("shrd ebp, edx, 0xfb");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + 0x78)));
    __asm__("rol bp, 1");
    return 0x555c017b + ecx1 + 0x6c91b8d9 - 0x399a734f + 0x4a3d007d + 0x63680000 + 0x2362eec6;
}

uint32_t log_size_4_var_062() {
    uint32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    uint32_t eax5;

    eax1 = 0x21142fd2;
    ebx2 = 0x89e94111;
    ecx3 = 0x83306d14;
    edx4 = 0x8fd5e54d;
    __asm__("ror bp, 1");
    __asm__("rcr cl, 1");
    __asm__("ror dh, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = __intrinsic();
    if (0) {
        *reinterpret_cast<unsigned char*>(&ecx3) = 17;
        *reinterpret_cast<unsigned char*>(&ebx2) = 20;
    }
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(0x2fd2 * *reinterpret_cast<int16_t*>(&ebx2));
    *reinterpret_cast<int16_t*>(&edx4) = __intrinsic();
    __asm__("btc edx, 0x88");
    *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx2) >> -57);
    eax5 = eax1 ^ 0x2c52759a;
    return eax5 + ebx2 + ecx3 + edx4 + 0x8354a24 + 0x1aaf0000 + static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax5)) + 0x32e6fbef;
}

int32_t log_size_4_var_063() {
    int32_t edx1;
    int32_t esi2;

    edx1 = 0x6a21f69f;
    esi2 = 0x77cfbb0e;
    __asm__("ror di, 0xef");
    *reinterpret_cast<uint16_t*>(&edx1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1);
    if (1) {
        *reinterpret_cast<int16_t*>(&esi2) = 0;
    }
    __asm__("rcl ebp, 1");
    __asm__("rcr ah, cl");
    __asm__("ror bp, cl");
    __asm__("btr bp, 0x99");
    __asm__("ror cl, cl");
    __asm__("bts di, si");
    return 0x270eda09 - edx1 - 0x5b07159e + esi2 - 0x53e951b4 + 0x4a46a7b5;
}

int32_t log_size_4_var_064() {
    int32_t ebx1;
    int32_t ecx2;

    ebx1 = 0x3688dad;
    ecx2 = 0x4a4fda7c;
    __asm__("rol si, cl");
    __asm__("bsf edi, ebp");
    __asm__("shrd si, dx, 0x1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - 1);
    __asm__("btr bx, 0x34");
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0x8dad >> 0xff95) & 0x4776);
    __asm__("rcr al, 1");
    __asm__("ror ax, 0xe0");
    return 0x801 + ebx1 + ecx2 + 0x3b662bbe + 0x17480d04 - 0x797e + 0x6730321d + 0x5f99d504;
}

int32_t log_size_4_var_066() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    unsigned char dh4;
    signed char tmp8_5;

    eax1 = 0xda88083d;
    ecx2 = 0xf82259ab;
    edx3 = 0x4afc2337;
    __asm__("btc si, si");
    *reinterpret_cast<signed char*>(&ecx2) = -86;
    if (1 != __intrinsic()) {
        *reinterpret_cast<int16_t*>(&eax1) = 0xeb52;
    }
    if (1) {
        eax1 = 0x4afc2337;
    }
    dh4 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) + 37) + 1);
    __asm__("ror dx, 1");
    *reinterpret_cast<signed char*>(&edx3) = 33;
    if (__intrinsic()) {
        ecx2 = 0xbc064c2e;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(dh4 & 0xc5);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1)) {
        tmp8_5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = tmp8_5;
    }
    __asm__("rcl al, 1");
    return eax1 - 0x43f9b391 + ecx2 + edx3 - 0x371814ae - 0x4fe4ee7a - 0x37186016 + 0x73f41519;
}

uint32_t log_size_4_var_067() {
    __asm__("xadd cx, cx");
    __asm__("shld si, dx, 0x1");
    __asm__("cdq ");
    __asm__("xadd edx, edx");
    __asm__("rol ch, cl");
    return __intrinsic() - (__intrinsic() + (__intrinsic() < __intrinsic() + __intrinsic())) + 0x64770be2 - 0x1fc0b0ae + 0x52b33156 + 0x55a80000 + 0x3fe7456e + 0x2bc72e08;
}

int32_t log_size_4_var_070() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebp3;
    int32_t edi4;

    ebx1 = 0x8a8a78fd;
    edx2 = 0x3f0c399c;
    ebp3 = 0xb4878240;
    edi4 = 0x6015540f;
    __asm__("rol cl, 0x47");
    *reinterpret_cast<signed char*>(&edx2) = reinterpret_cast<signed char>(-100 >> -38);
    __asm__("ror dx, 0x77");
    __asm__("shrd ebx, ecx, 0xa9");
    if (1) {
    }
    *reinterpret_cast<uint16_t*>(&edi4) = reinterpret_cast<uint16_t>(0x540f >> 0xff91);
    __asm__("shrd eax, eax, 0x1");
    if (0) {
        ebp3 = 0x8a8a78fd;
        ebx1 = 0xb4878240;
    }
    __asm__("rcl bx, 1");
    __asm__("rcr si, 1");
    *reinterpret_cast<int16_t*>(&edx2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx2) * 0x457);
    return 0x6097e0ce - ebx1 + edx2 + ebp3 + 0x1d1774bd + edi4 + 0x2cf2f194;
}

int32_t log_size_4_var_071() {
    int32_t ebx1;
    int32_t ebp2;
    int32_t esi3;
    int32_t eax4;
    int32_t edx5;

    ebx1 = 0xa677d620;
    ebp2 = 0x9fa41109;
    esi3 = 0x2fa4d286;
    __asm__("ror bh, 0x56");
    eax4 = 0xfb1e1484;
    edx5 = __intrinsic();
    __asm__("btr dx, 0x71");
    __asm__("shld ecx, ecx, 0x1");
    __asm__("rcl bx, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) & 0xcf);
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(0xd620 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx5) + reinterpret_cast<uint1_t>(0xd620 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&edx5))))));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = 0;
    *reinterpret_cast<uint16_t*>(&esi3) = reinterpret_cast<uint16_t>(0xa84 >> 80);
    *reinterpret_cast<int16_t*>(&ebp2) = reinterpret_cast<int16_t>(0xb93c >> 82);
    *reinterpret_cast<int16_t*>(&eax4) = reinterpret_cast<int16_t>(0xff84 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx5) + 1));
    return eax4 + ebx1 - 0x29c4f6ae + edx5 + ebp2 + esi3 + 0x49335680 + 0x609193aa;
}

int32_t log_size_4_var_073() {
    int32_t ebx1;
    int32_t ecx2;

    ebx1 = 0x20dee2fa;
    ecx2 = 0xb06f6e98;
    __asm__("btr ax, 0xd2");
    __asm__("rcr ax, 1");
    __asm__("rol dx, 1");
    __asm__("ror ah, cl");
    if (1) {
    }
    __asm__("btr ecx, 0x9c");
    if (0) {
    }
    __asm__("rol edi, 0xe0");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(0xfa | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    __asm__("rcl ah, 1");
    return 0x5c3740a8 - ebx1 - 0x4f909168 - 0x5ef7e6c + 0x3ae80331 - 0xa1868df - 0x4e3df2f4;
}

uint32_t log_size_4_var_074() {
    int32_t eax1;
    int32_t ecx2;
    uint32_t edx3;
    uint32_t eax4;
    uint32_t esi5;

    eax1 = 0x2a017d60;
    ecx2 = 0xf6314c9c;
    if (0) {
        eax1 = 0xf6314c9c;
        ecx2 = 0x2a017d60;
    }
    if (!__intrinsic()) {
    }
    edx3 = eax1 % reinterpret_cast<uint32_t>(0xc1fe70b9);
    eax4 = eax1 / reinterpret_cast<uint32_t>(0xc1fe70b9);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - 0x74) >> 0x6c);
    __asm__("btc dx, ax");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) - reinterpret_cast<unsigned char>(27 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) < 0xe5)));
    esi5 = 0x39f4eb07 + eax4;
    *reinterpret_cast<uint16_t*>(&esi5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi5) >> 1);
    __asm__("btc cx, bp");
    __asm__("rcr dx, 1");
    return eax4 - 0x3e018f47 + ecx2 + edx3 + 0x462f09f1 + esi5 - 0xef70000 - 0x5d0016d9;
}

int32_t log_size_4_var_075() {
    __asm__("rol bx, cl");
    __asm__("ror edi, 1");
    __asm__("shld dx, di, 0xc");
    __asm__("rcr bp, 1");
    return 0x22a6ba3c + (0xd504aa36 >> -38) - 0x2c25dc52 + 0x98 - 0x3a81af92;
}

int32_t log_size_4_var_078() {
    int32_t eax1;
    int32_t ecx2;
    int32_t ebx3;
    int32_t eax4;
    int32_t edx5;
    int32_t ecx6;

    eax1 = 0xc5625e5f;
    ecx2 = 0x73237e53;
    *reinterpret_cast<int16_t*>(&ecx2) = 0x6a63;
    __asm__("xadd edx, ebp");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<uint1_t>(__intrinsic());
    ebx3 = 0xb06f05ae;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) >> 55);
    eax4 = eax1 * ecx2;
    edx5 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&eax4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax4) & 0x8c02);
    ecx6 = eax4 * 0x348bbab4;
    __asm__("rcl bp, 0xdb");
    *reinterpret_cast<uint16_t*>(&ebx3) = 0xc5ae;
    *reinterpret_cast<uint16_t*>(&edx5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax4) % 0xc5ae);
    *reinterpret_cast<uint16_t*>(&eax4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax4) / 0xc5ae);
    *reinterpret_cast<int16_t*>(&ecx6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx6) >> 1);
    *reinterpret_cast<unsigned char*>(&ebx3) = reinterpret_cast<unsigned char>(0xae - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx6) + 1) + reinterpret_cast<uint1_t>(0xae < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx6) + 1) + __intrinsic()))));
    return eax4 + ebx3 + ecx6 + edx5 + 0x63b814fb + 0x170e428a - 0x5a44bd9a - 0x32b589f1;
}

int32_t log_size_4_var_081() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edi3;
    int32_t eax4;
    int32_t eax5;

    ebx1 = 0x5609c695;
    ecx2 = 0x7fe484ab;
    edi3 = 0xffffeeb4;
    *reinterpret_cast<int16_t*>(&ebx1) = 0xc694;
    eax4 = reinterpret_cast<int32_t>(-(0x311deeb4 >> -85));
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(eax4 == 0)) {
        ecx2 = 0xffffeeb4;
    }
    *reinterpret_cast<uint16_t*>(&edi3) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0xeeb4 + *reinterpret_cast<int16_t*>(&eax4))));
    eax5 = eax4 << 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> 1);
    __asm__("btr ax, di");
    __asm__("btc ebx, edx");
    __asm__("rcl di, 1");
    return eax5 + ebx1 + ecx2 - 0x530e2d73 + 0x5c1024d5 - 0x91172a7 + edi3 - 0x55ec4df8;
}

uint32_t log_size_4_var_082() {
    uint32_t ecx1;
    uint32_t edi2;

    ecx1 = 0x2d0dfd85;
    edi2 = 0x5da9a157;
    *reinterpret_cast<uint16_t*>(&edi2) = reinterpret_cast<uint16_t>(0xa157 >> -74);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) >> -4);
    __asm__("xadd eax, esi");
    if (1) {
        edi2 = 0x5daec2fd;
    }
    return 0x25bdc3fc + ((ecx1 | 0x5daec2fd) - 0x45f10000) - 0x45f10000 - 0x4566f94c + 0x7ec56ff4 + edi2 - 0x76a7c817;
}

int32_t log_size_4_var_083() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebp3;

    ebx1 = 0xbde822d7;
    edx2 = 0x767ef8de;
    __asm__("bts bx, 0x87");
    __asm__("rol ebx, cl");
    __asm__("rcl ebx, cl");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(0xd7 | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1));
    __asm__("rcr ebp, 0x51");
    ebp3 = ebx1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) - reinterpret_cast<unsigned char>(0x65 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) < 0x66)));
    __asm__("btr dx, 0x31");
    *reinterpret_cast<signed char*>(&edx2) = --34;
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp3) ^ 0x3782);
    return 0x784c4c30 + edx2 + ebp3 - 0x5bfe0669 + 0x2f8a77a2 + 0xaf09ce1;
}

int32_t log_size_4_var_085() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;
    int32_t ebp4;

    ebx1 = 0xa7e28431;
    ecx2 = 0x39457404;
    edx3 = 0xd75a731b;
    ebp4 = 0xcf79ff5f;
    __asm__("bts esi, eax");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) << 4);
    if (0) {
        *reinterpret_cast<int16_t*>(&ebp4) = 0x8431;
        *reinterpret_cast<int16_t*>(&ebx1) = 0xff5f;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 1);
    __asm__("ror ah, cl");
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx1) = 0x2ed5;
    }
    __asm__("bsr ebx, esi");
    __asm__("shld cx, cx, 0x1");
    __asm__("rcr edx, 1");
    return 0x7357d12b - ebx1 + ecx2 + edx3 + (ebp4 - 1) - 0x5c1d4450 + 0x49270120 - 0x6ec4ff00;
}

uint32_t log_size_4_var_086() {
    uint32_t ebx1;
    int32_t ecx2;
    uint16_t cx3;

    ebx1 = 0x98524722;
    ecx2 = 0x8c001cea;
    __asm__("bts ecx, eax");
    *reinterpret_cast<signed char*>(&ebx1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1);
    *reinterpret_cast<unsigned char*>(&cx3) = 10;
    __asm__("shld bp, dx, cl");
    __asm__("rol esi, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) << 1);
    __asm__("shld edi, edx, 0x1");
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx1) = *reinterpret_cast<int16_t*>(&ebx1);
    }
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(cx3 & 0x6adb);
    __asm__("bsr ebp, ebx");
    return 0x48e57fff + (ebx1 >> 1) + ecx2 + 0x7fda7f5d + 0x78cb201c + 0x35f79251 + 0x4f4709a + 0x6963aef7;
}

int32_t log_size_4_var_087() {
    __asm__("ror bh, 1");
    __asm__("rcl bp, 1");
    __asm__("rol esi, 1");
    __asm__("rcl cx, 0xa1");
    return 0x74e222d2;
}

uint32_t log_size_4_var_089() {
    int32_t edx1;
    uint32_t esi2;

    edx1 = 0xbc8ee225;
    __asm__("ror bp, 1");
    __asm__("rcr ah, 0x47");
    esi2 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) + 0xaaf9eb41 - 0x10aabe22;
    __asm__("ror dl, 0x76");
    return 0x25e5333b + (0x122a21fc >> -80) + 0xaaf9eb41 - 0x4371e2b3 + (esi2 >> 24 | esi2 >> 8 & 0xff00 | esi2 << 8 & 0xff0000 | esi2 << 24) - 0x381a9acf + 0x3c0a7819;
}

int32_t log_size_4_var_091() {
    int32_t eax1;
    int32_t edx2;

    eax1 = 0xdf10a5f7;
    edx2 = 0xdb4931ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) >> 1);
    __asm__("rcl esi, cl");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(0xa5f7 * *reinterpret_cast<int16_t*>(&edx2));
    *reinterpret_cast<int16_t*>(&edx2) = __intrinsic();
    __asm__("rcr dh, cl");
    __asm__("bsf ebx, ecx");
    __asm__("rol edi, 1");
    __asm__("rcr si, 1");
    __asm__("rol ah, cl");
    return eax1 + 0x9b18 + 0x7b1e9b18 + edx2 + 0x4d1630f2 + 0x152345d - 0x41370be4 - 0x73f29f;
}

int32_t log_size_4_var_093() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    signed char tmp8_4;

    eax1 = 0xb4b227b2;
    ecx2 = 0x5c5824e;
    edx3 = 0xc143ddfc;
    __asm__("shld dx, dx, cl");
    __asm__("rol ebp, 1");
    __asm__("shrd eax, ebp, 0x6e");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 83);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1)) {
        tmp8_4 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = tmp8_4;
    }
    __asm__("rcr ebx, 0x3");
    *reinterpret_cast<signed char*>(&ecx2) = 13;
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax1) * 0x8991);
    *reinterpret_cast<int16_t*>(&edx3) = __intrinsic();
    __asm__("rcr dl, 0xbe");
    return eax1 - 0x4c5b766f + ecx2 + edx3 + 0x7290ceb4 - 0x39f54bf2 - 0x1fc38000 + 0x2582300f;
}

int32_t log_size_4_var_094() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t esi4;
    uint16_t ax5;

    eax1 = 0xe121b537;
    ebx2 = 0x2d6914ee;
    edx3 = 0xcfbb452a;
    esi4 = 0x2715d5ed;
    *reinterpret_cast<uint16_t*>(&ebx2) = 0x51c4;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1);
    __asm__("btc di, 0xe4");
    __asm__("btr ecx, edx");
    __asm__("rcl eax, 0x84");
    *reinterpret_cast<uint16_t*>(&esi4) = 0xb6b7;
    if (1) {
        *reinterpret_cast<uint16_t*>(&esi4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&ebx2) = 0xc4;
    ax5 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(55 * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1)))) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(ax5 % -60);
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(ax5 / -60);
    return eax1 + ebx2 - 0x7f78c524 + edx3 + 0x23150000 + esi4 + 0x46a187ae - 0x2095554c;
}

int32_t log_size_4_var_095() {
    int32_t ebx1;

    ebx1 = 0x13a6d754;
    __asm__("ror ebx, 0xb4");
    __asm__("xadd si, cx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) & 0x7d) - 0x67);
    __asm__("rcr dl, cl");
    __asm__("rol edx, 1");
    return 0x796c9338 + ebx1 + 0x7d139e4c + __intrinsic() + 0xc978ef3 + 0x5fd92056 - 0x61822b1f + 0x663e16d9;
}

int32_t log_size_4_var_097() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t esi4;
    int32_t edi5;
    uint16_t ax6;

    eax1 = 0x52e4b889;
    ebx2 = 0x8f98c3e3;
    edx3 = 0x7fec784;
    esi4 = 0x2c89edcc;
    edi5 = 0x47a1a367;
    ax6 = 0x23d8;
    *reinterpret_cast<unsigned char*>(&ax6) = reinterpret_cast<unsigned char>(0xd8 - reinterpret_cast<unsigned char>(35 + reinterpret_cast<uint1_t>(0xd8 < reinterpret_cast<unsigned char>(35 + __intrinsic()))));
    __asm__("shld eax, edx, 0x1");
    *reinterpret_cast<int16_t*>(&edx3) = 0x8f08;
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(ax6 >> 0x9a);
    __asm__("ror eax, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1);
    __asm__("rcl bx, 1");
    if (0) {
        esi4 = 0x47a1a367;
        edi5 = 0x2c89edcc;
    }
    __asm__("rol eax, 0x88");
    *reinterpret_cast<int16_t*>(&ebx2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi4) * 0x90f);
    return eax1 + ebx2 - 0x88651f7 + edx3 - 0xab64166 + esi4 + edi5 + 0x7d8c5802;
}

uint32_t log_size_4_var_098() {
    uint32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int32_t edi5;
    uint16_t cx6;
    uint32_t eax7;
    uint16_t tmp16_8;

    eax1 = 0xa941b223;
    ebx2 = 0x1ba6f1f6;
    ecx3 = 0xf3e51fdc;
    edx4 = 0xfc9a56bf;
    edi5 = 0x6ccd7e81;
    cx6 = 0x769b;
    __asm__("ror ax, 0xab");
    if (0) {
        *reinterpret_cast<unsigned char*>(&eax1) = 0x9b;
        *reinterpret_cast<unsigned char*>(&cx6) = 35;
    }
    __asm__("rcl bl, 1");
    eax7 = eax1 >> 1;
    if (__intrinsic()) {
        edi5 = 0xfc9a56bf;
    }
    *reinterpret_cast<int16_t*>(&edi5) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edi5) << *reinterpret_cast<unsigned char*>(&cx6));
    *reinterpret_cast<int16_t*>(&eax7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax7) * 0xf1f6);
    *reinterpret_cast<int16_t*>(&edx4) = __intrinsic();
    *reinterpret_cast<signed char*>(&ebx2) = -46;
    tmp16_8 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(cx6 + 0x78c1)));
    *reinterpret_cast<uint16_t*>(&ecx3) = tmp16_8;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1)) + reinterpret_cast<uint1_t>(tmp16_8 < cx6));
    return eax7 + ebx2 + ecx3 + edx4 + 0x2bf263eb + edi5 - 0x776f0d7e;
}

int32_t log_size_4_var_099() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    int32_t ecx4;

    eax1 = 0x9f72c281;
    ecx2 = 0x2b0f112c;
    *reinterpret_cast<int16_t*>(&ecx2) = 0x546b;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) - 1);
    if (1) {
    }
    edx3 = 0xcbf230f;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) >> 0x6b);
    *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<unsigned char>(15 >> 42);
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax1) + 0xa6a);
    __asm__("shld esi, edx, 0x71");
    __asm__("ror ax, cl");
    *reinterpret_cast<signed char*>(&ecx2) = reinterpret_cast<signed char>(0x6b >> 0x6b);
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) | 61);
    ecx4 = ecx2 - ecx2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx4) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx4) + 1) + *reinterpret_cast<signed char*>(&ecx4)) + 1);
    return eax1 + 0x49421c3d + ecx4 + edx3 + 0x75f98a6e - 0x33943044 + 0x4f118c0a - 0x59f6cab0;
}

int32_t __assert_fail = 0x8049056;

void fun_8049050(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto __assert_fail;
}

int32_t log_size_4_var_001() {
    int32_t ebx1;
    int32_t ebp2;
    int32_t eax3;
    int32_t edx4;
    int16_t dx5;
    unsigned char tmp8_6;
    uint1_t cf7;

    ebx1 = 0xcb5bb1a3;
    ebp2 = 0xbf20b135;
    __asm__("bsr esi, eax");
    eax3 = 0xf503f64;
    edx4 = __intrinsic();
    __asm__("shrd esi, ebp, 0xc3");
    *reinterpret_cast<int16_t*>(&eax3) = 100;
    dx5 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx4) - 0x301a);
    __asm__("btr edi, 0x3d");
    __asm__("xadd ecx, edi");
    tmp8_6 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - 17)));
    cf7 = reinterpret_cast<uint1_t>(tmp8_6 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = tmp8_6;
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xb135 + dx5) + cf7);
    __asm__("rcr ecx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1) >> 1);
    __asm__("bsf ebp, ebp");
    *reinterpret_cast<int16_t*>(&edx4) = reinterpret_cast<int16_t>(dx5 + 0x173c);
    return eax3 + ebx1 - 0x7585ba34 + edx4 + ebp2 - 0x742eadd8 - 0x93d9d5 + 0x4edcbc0b;
}

int32_t log_size_4_var_004() {
    int32_t edx1;
    int32_t edi2;

    edx1 = 0x67000ac5;
    edi2 = 0x5b7f8aee;
    __asm__("rol ah, cl");
    __asm__("bts eax, edx");
    __asm__("cdq ");
    if (!(-59 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1))) {
        edi2 = 0xb28e9f67;
    }
    __asm__("rcr ecx, 1");
    return 0x19f6f49 - edi2 + 0x6763070b;
}

int32_t log_size_4_var_011() {
    int32_t ecx1;

    ecx1 = 0x78fda323;
    __asm__("rcr ax, 0xeb");
    __asm__("rol ch, cl");
    __asm__("rcr dx, 1");
    __asm__("bts ebx, 0x8c");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) ^ 35) >> 35);
    __asm__("rol ch, 1");
    return 0x37d1c7c8 + ecx1 + 0x7fe0877c - 0x48eb48d3 - 0x4aaf2ed8 - 0x8cd8 + 0x62ebdad7;
}

int32_t log_size_4_var_014() {
    int32_t ecx1;
    int32_t edx2;
    int32_t ebp3;

    ecx1 = 0xf6a6de53;
    edx2 = 0xc13ce3c4;
    ebp3 = 0x1170e05b;
    __asm__("shld eax, eax, cl");
    __asm__("btc edi, ebp");
    __asm__("xadd eax, eax");
    if (!__undefined()) {
        *reinterpret_cast<int16_t*>(&ecx1) = 0x6d10;
    }
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(0x1aac + __intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcl edi, 1");
    __asm__("rcr esi, 1");
    return 0x83fa761 + ecx1 + edx2 + ebp3 - 0x4b4391b2 + 0x5a091241 - 0x5003746c;
}

int32_t log_size_4_var_018() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t ebp3;
    int32_t edi4;
    int32_t eax5;
    int32_t edx6;
    int32_t ecx7;

    ebx1 = 0x54749a88;
    ecx2 = 0x8d3be32b;
    ebp3 = 0x83fa44b4;
    edi4 = 0x4e3cb501;
    __asm__("ror ax, 1");
    __asm__("rcr si, 1");
    __asm__("rol si, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&edi4) = 0x482a;
    }
    if (0) {
        ebx1 = 0x8d3be32b;
        ecx2 = 0x54749a88;
    }
    __asm__("rol ax, cl");
    *reinterpret_cast<int16_t*>(&ebp3) = static_cast<int16_t>(ecx2 - 0x31140413 + 18);
    eax5 = 0xceebfbed * edi4;
    edx6 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&eax5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax5) >> -55);
    __asm__("xadd ebp, ebp");
    ecx7 = ebp3 + ebp3 * 4 + 29;
    *reinterpret_cast<signed char*>(&ebx1) = -*reinterpret_cast<signed char*>(&ebx1);
    *reinterpret_cast<int16_t*>(&ebp3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp3) * 0xf4a7);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx6) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx6) + 1) | 0x96);
    return eax5 + ebx1 + ecx7 + edx6 + ebp3 + 0xffa482a + edi4 - 0x3f042f91;
}

uint32_t log_size_4_var_022() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int32_t ebp5;
    uint32_t edi6;
    int1_t zf7;
    uint16_t tmp16_8;
    uint32_t edi9;

    eax1 = 0x44862208;
    ebx2 = 0x78c491e0;
    ecx3 = 0xee8da004;
    edx4 = 0x20be2ccc;
    ebp5 = 0xafa4be6f;
    edi6 = 0xb4245a7c;
    zf7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
    if (zf7) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
    }
    if (!zf7) {
        ebp5 = 0x41cc730e;
    }
    tmp16_8 = reinterpret_cast<uint16_t>(0x4d77 + __intrinsic());
    *reinterpret_cast<uint16_t*>(&edi6) = tmp16_8;
    edi9 = edi6 - (0xb29b503 - reinterpret_cast<uint1_t>(edi6 < 0xb29b503 - reinterpret_cast<uint1_t>(tmp16_8 < 0x5a7c)));
    *reinterpret_cast<uint16_t*>(&edi9) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
    *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xe0 >> -2) + 0x74) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) >> 1) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(2 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1))));
    return eax1 + ebx2 + ecx3 + 0x730e + ebp5 + 0x41cc730e + edi9 + 0x114002f7;
}

int32_t log_size_4_var_024() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t esi3;

    ebx1 = 0xf3d5d14;
    ecx2 = 0x780714b9;
    esi3 = 0x590a5e17;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) | 28);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebx1) = 0x6f42;
    }
    __asm__("rcl al, 1");
    if (0) {
        esi3 = 0x64333e78;
    }
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx2) - reinterpret_cast<uint16_t>(0x5eb - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx2) < 0xfa16))) - 0x4b14) + 1);
    *reinterpret_cast<int16_t*>(&esi3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi3) + 1);
    return 0x5138f0d6 + (ebx1 - 0xabc05ad) + ecx2 + 0x64333e78 - 0x368302f6 + esi3 - 0x73a04b14 + 0x1f238045;
}

int32_t log_size_4_var_030() {
    int32_t ecx1;
    int32_t edi2;
    int32_t edx3;

    ecx1 = 0x40cea7f4;
    edi2 = 0x9bb66f41;
    if (__intrinsic()) {
        edi2 = 0xbec1abd4;
    }
    __asm__("rcr ch, 1");
    __asm__("rcr bx, 1");
    __asm__("btr cx, 0x70");
    __asm__("btc si, bp");
    edx3 = 0xbec1ba38 >> 0xffffff95;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) - 1);
    __asm__("shrd bp, si, 0x9");
    *reinterpret_cast<int16_t*>(&ecx1) = -0xe7f9;
    return 0x107d5daf + ecx1 + edx3 + 0x415b10f2 + 0x31a9691f + edi2 + 0x7cec85c5;
}

int32_t log_size_4_var_032() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    uint1_t less_or_equal5;
    unsigned char tmp8_6;

    eax1 = 0xbbe8f012;
    ebx2 = 0xf858bffe;
    ecx3 = 0x3604393;
    edx4 = 0x14a1da21;
    *reinterpret_cast<unsigned char*>(&ebx2) = 0x7f;
    __asm__("bsf ebp, eax");
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xb4 + __intrinsic()) & 15);
    __asm__("shrd dx, di, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) - reinterpret_cast<unsigned char>(33 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) < 34)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = -reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) & 0x7f);
    less_or_equal5 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) == 0));
    __asm__("xadd si, bx");
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx2) = *reinterpret_cast<int16_t*>(&ecx3);
    }
    if (!less_or_equal5) {
        eax1 = 0x9732f76f;
    }
    __asm__("lahf ");
    tmp8_6 = *reinterpret_cast<unsigned char*>(&ecx3);
    *reinterpret_cast<unsigned char*>(&edx4) = tmp8_6;
    return eax1 + ebx2 + 0x3604321 + edx4 - 0x68cd0891 - 0x1fef9413 - 0xc024f23 + 0x1b97970b;
}

int32_t log_size_4_var_036() {
    __asm__("rcr cx, 1");
    __asm__("rcl al, 1");
    __asm__("btr ecx, esi");
    __asm__("rcl al, 1");
    __asm__("bts dx, 0x86");
    return 0x6215;
}

int32_t log_size_4_var_047() {
    int32_t eax1;
    int32_t ecx2;
    int32_t ebp3;

    eax1 = 0xdc420c7e;
    ecx2 = 0xc69d0eb1;
    ebp3 = 0x32a893cf;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    if (1) {
        ebp3 = 0xffff93cf;
    }
    __asm__("bts ebx, ecx");
    __asm__("shrd eax, ebx, 0x1");
    __asm__("rcr ebx, 1");
    return eax1 + 0x7b - 0x1d480000 + 0x7534627b + ebp3 + 0x5f3f4e3a - 0x6c31 + 0x5ab419f1;
}

int32_t log_size_4_var_050() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int32_t ebp5;

    eax1 = 0xddf88f38;
    ebx2 = 0x8d6eb926;
    ecx3 = 0xa8220b4f;
    edx4 = 0xc0870150;
    ebp5 = 0x89ab0312;
    *reinterpret_cast<unsigned char*>(&ecx3) = 15;
    __asm__("shrd di, dx, cl");
    *reinterpret_cast<int16_t*>(&eax1) = 0x485e;
    __asm__("bts si, 0x5c");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1)));
    *reinterpret_cast<uint16_t*>(&edx4) = reinterpret_cast<uint16_t>(0x150 & *reinterpret_cast<uint16_t*>(&ebx2));
    __asm__("rol ebx, cl");
    *reinterpret_cast<uint16_t*>(&ebx2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx2) + 1);
    if (*reinterpret_cast<uint16_t*>(&ebx2)) {
        *reinterpret_cast<int16_t*>(&eax1) = 0x33ad;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&ecx3) = 0x312;
        *reinterpret_cast<int16_t*>(&ebp5) = 0xb0f;
    }
    if (__intrinsic() == __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&edx4) = *reinterpret_cast<uint16_t*>(&ebx2);
    }
    return eax1 + ebx2 + ecx3 + edx4 + ebp5 - 0x3f64a5a3 - 0x64bacc53 + 0x7740421b;
}

int32_t log_size_4_var_054() {
    int32_t edx1;
    int32_t eax2;

    edx1 = 0x24f92a1e;
    *reinterpret_cast<unsigned char*>(&edx1) = 15;
    __asm__("ror dh, 0x64");
    eax2 = 0xffff8079;
    __asm__("rol di, 0x9d");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) >> 70);
    __asm__("shrd dx, ax, cl");
    *reinterpret_cast<int16_t*>(&eax2) = reinterpret_cast<int16_t>(0x72 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1));
    __asm__("ror dx, 0xde");
    __asm__("rcr edi, 1");
    return eax2 - 0x7ca0a59a + 0x66794d06 + edx1 + 0x50ba5528 + 0x54297ac + 0x47bfcfd0 - 0x8abfa1b;
}

uint32_t log_size_4_var_059() {
    int32_t eax1;

    eax1 = 0x4b93361;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) + 97);
    __asm__("bsf edi, ebp");
    __asm__("btc si, 0x33");
    __asm__("btc edi, 0xe2");
    __asm__("rcl ebx, 1");
    __asm__("ror ebx, cl");
    return eax1 - 0x68697b44 - 0x42c4968c + *reinterpret_cast<uint16_t*>(&eax1) + 0x74 + static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1)) + 0x40c3d8f4 + 0x6d72dacc;
}

int32_t log_size_4_var_065() {
    int32_t ecx1;
    int32_t ebp2;
    int32_t esi3;
    int32_t eax4;

    ecx1 = 0xe42dfbbb;
    ebp2 = 0x6713b7b;
    esi3 = 0x5e3f4af5;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi3) = 0xc818;
    }
    __asm__("xadd edx, ecx");
    *reinterpret_cast<int16_t*>(&esi3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi3) >> 0xbb);
    *reinterpret_cast<int16_t*>(&eax4) = 0xe848;
    *reinterpret_cast<int16_t*>(&ebp2) = reinterpret_cast<int16_t>(0x3b7b >> 0xbb);
    __asm__("ror dx, 0x79");
    *reinterpret_cast<unsigned char*>(&ecx1) = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax4) + 1));
    __asm__("rcr cl, cl");
    __asm__("shrd ecx, ebx, 0x52");
    return 0x7761316e - ecx1 - 0x649de206 + (ebp2 << 1) + esi3 + 0x18c84771 + 0x3a53689a;
}

uint32_t log_size_4_var_068() {
    uint32_t edx1;

    __asm__("rol dx, 0xe");
    __asm__("shrd di, bx, cl");
    __asm__("btr ax, bx");
    edx1 = 0xad4e148a;
    __asm__("rcl di, cl");
    __asm__("rcr ch, 1");
    __asm__("shld bp, ax, 0x1");
    __asm__("lahf ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) - reinterpret_cast<unsigned char>(36 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) < reinterpret_cast<unsigned char>(36 + __intrinsic()))));
    return 0x26f0d2a6 + edx1 + 0x3c5453 + 0x6b3f5762 - 0x4eb0533b + 0xef4e5f2;
}

uint32_t log_size_4_var_072() {
    int32_t ebp1;
    uint32_t esi2;
    uint32_t ebx3;
    uint32_t ecx4;

    ebp1 = 0x69af22b8;
    esi2 = 0x8baa7a3b;
    __asm__("ror dh, 0xc8");
    ebx3 = 0x77fde73b;
    if (!__intrinsic()) {
        esi2 = 0x77fde73b;
    }
    ecx4 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1);
    *reinterpret_cast<int16_t*>(&ebp1) = -0x22b8;
    __asm__("rol esi, 0xc0");
    __asm__("ror eax, 0x6a");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) | 77);
    return 0x7e8987e5 - ebx3 + ecx4 + (0x98c0acc8 >> 79) + ebp1 + esi2 + (0x512d6ba8 - ecx4) + 0x3a98be7b;
}

int32_t log_size_4_var_076() {
    int32_t edx1;

    edx1 = 0x47430118;
    __asm__("bts ax, 0xf0");
    __asm__("rcr di, 1");
    __asm__("rcl dl, 1");
    __asm__("shrd ax, cx, 0x7");
    __asm__("btc eax, ecx");
    *reinterpret_cast<signed char*>(&edx1) = reinterpret_cast<signed char>(24 >> 0x92);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) = 79;
    __asm__("btr bx, di");
    return 0x150f4d96 + edx1 - 0x529935d0 - 0x2028689e + 0x5e1741d - 0x55bdb836;
}

int32_t log_size_4_var_079() {
    int32_t eax1;
    int32_t edx2;

    eax1 = 0x49b1c8fb;
    edx2 = 0xead10f96;
    __asm__("shrd esi, esi, 0x1");
    *reinterpret_cast<int16_t*>(&edx2) = __intrinsic();
    __asm__("ror bh, 1");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(-42 * *reinterpret_cast<signed char*>(&edx2));
    __asm__("rcl esi, 0x23");
    return eax1 + 0x49b112d6 - 0x218017ba + edx2 - 0x64979018 + 0x7d2a6587 + 0x7dc33ad5 - 0x7ed62f5c;
}

uint32_t log_size_4_var_084() {
    int32_t ebx1;
    uint32_t esi2;
    int32_t edx3;

    ebx1 = 0x624fb2a9;
    esi2 = 0x7b3c2044;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi2) = 0xb2a9;
    }
    __asm__("shrd dx, cx, cl");
    *reinterpret_cast<signed char*>(&ebx1) = 0;
    edx3 = __intrinsic();
    __asm__("rcl ebx, 1");
    if (1) {
    }
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx3) + 0x28c9)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1))) + 1);
    return 0x2c6b3800 - ebx1 - 0x42eaf800 + edx3 - 0x1a42b8a0 + (esi2 | 0x6d3a742d) - 0x427a3b16 - 0x697f9506;
}

int32_t log_size_4_var_088() {
    int32_t eax1;
    int32_t edx2;

    __asm__("bts bp, 0xa7");
    __asm__("btc ax, si");
    eax1 = 0x3d8329fa;
    __asm__("rcl di, 1");
    if (__intrinsic()) {
    }
    edx2 = __intrinsic() >> 0x75;
    __asm__("rol ch, 1");
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx2) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1));
    if (0x75 == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = 0x75;
    }
    __asm__("ror bh, cl");
    __asm__("rol dl, 0xef");
    return eax1 - 0x3dacdcea + 0x4e598675 + edx2 + 0x68bbc833 + 0x127bb74a - 0x4d9a37b9 + 0x49985aa6;
}

int32_t log_size_4_var_090() {
    int32_t edx1;
    int32_t ecx2;

    edx1 = 0xbef286b5;
    __asm__("ror esi, 1");
    ecx2 = 0xc1f12c89;
    __asm__("ror eax, cl");
    __asm__("rol al, cl");
    *reinterpret_cast<int16_t*>(&edx1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1);
    if (!__intrinsic()) {
        edx1 = 0x846b5d65;
    }
    __asm__("rcr edi, 1");
    return 0x6a21d140 - edx1 - 0x1b202bb6 - 0x7b94a29b - 0x5e1c349c - 0x7bd71774;
}

uint32_t log_size_4_var_092() {
    uint32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    uint32_t eax4;

    eax1 = 0x98eb0c2a;
    ecx2 = 0x88ae2c5f;
    edx3 = 0xfd3ccad7;
    __asm__("rol al, 1");
    if (95 == *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1)) {
    }
    *reinterpret_cast<unsigned char*>(&ecx2) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(95 & *reinterpret_cast<unsigned char*>(&ecx2));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) - reinterpret_cast<unsigned char>(0x6a + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) < 0x6b)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) >> 1);
    *reinterpret_cast<int16_t*>(&eax1) = -*reinterpret_cast<int16_t*>(&eax1);
    eax4 = eax1 - (eax1 + reinterpret_cast<uint1_t>(eax1 < eax1));
    *reinterpret_cast<uint16_t*>(&eax4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax4) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx3) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax4) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&edx3))))));
    return eax4 + 0x65409865 + ecx2 + edx3 + 0x51e68948 + static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax1)) + 0x5db89535 + 0x6535497c;
}

int32_t log_size_4_var_096() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;

    eax1 = 0xb28ea05e;
    ecx2 = 0x657b691e;
    edx3 = 0x4d058716;
    __asm__("rcr bh, cl");
    __asm__("rcr ecx, 0xa3");
    __asm__("bsr ecx, edx");
    *reinterpret_cast<int16_t*>(&eax1) = 0x2ed2;
    *reinterpret_cast<int16_t*>(&edx3) = __intrinsic();
    __asm__("bsr esi, eax");
    if (0) {
        *reinterpret_cast<int16_t*>(&ecx2) = 0x2ed2;
        *reinterpret_cast<int16_t*>(&eax1) = 0x691e;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - 99) + __intrinsic());
    __asm__("ror di, 1");
    __asm__("bts si, ax");
    return eax1 + 0x7802a04a + ecx2 + edx3 - 0x3dcb10f3 + 0x6d7ff9ff + 0x122c0510 - 0x4bf6e34c;
}

int32_t log_size_4_var_002() {
    int32_t edx1;

    __asm__("rol di, 0x2b");
    __asm__("btc bp, 0x5c");
    __asm__("btr di, 0xfa");
    __asm__("bsf edx, ecx");
    edx1 = __intrinsic();
    __asm__("xadd bp, cx");
    if (1) {
    }
    *reinterpret_cast<uint16_t*>(&edx1) = 0xda0;
    __asm__("xadd dl, cl");
    return 0x678e85be + edx1 - 0x473a92dc - 0x5105e12f + 0x5358ff39 + 0x509fbbba;
}

int32_t log_size_4_var_012() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    eax1 = 0xe96e83be;
    ebx2 = 0x1d57cafa;
    ebp3 = 0x4c9c4754;
    if (__intrinsic()) {
        ebp3 = 0x5b54a736;
    }
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        eax1 = 0x8ddafefb;
    }
    __asm__("rcr dx, 1");
    __asm__("ror ch, 1");
    *reinterpret_cast<uint16_t*>(&ebx2) = 0xeaff;
    __asm__("shld si, di, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) + 1);
    return eax1 + ebx2 - 0x2261 - 0x246252ee + ebp3 + 0x7f44dd9f - 0x72250105 - 0x4ad8bc75;
}

int32_t log_size_4_var_037() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    ebx1 = 0x79b8b334;
    eax2 = 0xe4325778 >> 70;
    __asm__("rcl eax, 0xb6");
    __asm__("rol bh, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    __asm__("btc ebx, esi");
    edx3 = ebx1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1);
    return eax2 - 0x18e18415 + *reinterpret_cast<signed char*>(&eax2) + edx3 + 0x4615f54b - 0x454990e4 + 0x31c45955 + 0x1518d273;
}

uint32_t log_size_4_var_055() {
    int32_t eax1;
    uint1_t cf2;
    uint32_t edx3;

    eax1 = 0x1e088b3;
    __asm__("rcl edi, 1");
    __asm__("shrd ebx, ebp, 0x1");
    cf2 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) < 0xfd);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) - reinterpret_cast<unsigned char>(3 - cf2));
    edx3 = 0x5eea9a6a + cf2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) - 8)));
    return eax1 + 0x44829553 + 0x6b43ba98 + edx3 + 0x121e0098 + 0x71f85fc7 - 0x773567f9 + 0x7c03b42d;
}

uint32_t log_size_4_var_060() {
    int32_t ecx1;
    int32_t ecx2;
    uint16_t cx3;

    ecx1 = 0x4e9ec406;
    *reinterpret_cast<signed char*>(&ecx1) = reinterpret_cast<signed char>(6 >> 81);
    __asm__("rol bl, cl");
    __asm__("bts ecx, 0xad");
    __asm__("shrd eax, esi, cl");
    __asm__("ror bl, 0x1f");
    ecx2 = 0x18fb5e33;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx3) + 1) = __intrinsic();
    *reinterpret_cast<unsigned char*>(&cx3) = 1;
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(cx3 - reinterpret_cast<uint16_t>(0x69b5 - reinterpret_cast<uint1_t>(cx3 < 0x964c)));
    return 0x24fb14e - ecx2 + 0x7523ca0d + (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ecx1)) ^ 0x7523ca0d) + 0x783d964b - 0x7d5b427 - 0x715a92d8;
}

int32_t log_size_4_var_069() {
    int32_t ecx1;
    int32_t eax2;
    signed char tmp8_3;
    int32_t edx4;

    ecx1 = 0xedfe023e;
    eax2 = 0x5aa7;
    __asm__("rol bh, cl");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) == -89) {
        tmp8_3 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = -89;
        *reinterpret_cast<signed char*>(&eax2) = tmp8_3;
    }
    edx4 = __intrinsic();
    __asm__("rcl edi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = -reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) >> 0x81);
    __asm__("rcr ah, cl");
    __asm__("btc esi, 0xdf");
    *reinterpret_cast<uint16_t*>(&ecx1) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0x23e >> 62) - 0x1191) + 1);
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) & 15);
    __asm__("shld si, bx, cl");
    return eax2 * 0xedfe023e + 0x61a4a438 + ecx1 + edx4 + (0xedb91d62 >> 62) + 0x1d62 + 0x194b3c5a + 0x5aee4e8;
}

int32_t log_size_4_var_077() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edi4;

    eax1 = 0x8f89923;
    ebx2 = 0xec42e7b7;
    ecx3 = 0x6e6334dc;
    edi4 = 0xc7887761;
    __asm__("btc ebx, 0xe");
    if (!__intrinsic()) {
        eax1 = 0x8c24571c;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx2) = *reinterpret_cast<int16_t*>(&eax1);
        *reinterpret_cast<int16_t*>(&eax1) = 0xe7b7;
    }
    __asm__("rcl eax, 1");
    *reinterpret_cast<unsigned char*>(&eax1) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    *reinterpret_cast<uint16_t*>(&edi4) = reinterpret_cast<uint16_t>(0xb8d + __intrinsic());
    __asm__("rcr bh, 1");
    *reinterpret_cast<int16_t*>(&ebx2) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx2) - 1) >> -36);
    return eax1 + ebx2 + ecx3 + 0x65411044 - 0x39edd472 + 0x6bb765b4 + edi4 + 0x2e7dff12;
}

uint32_t log_size_4_var_080() {
    int32_t ebx1;
    uint32_t edx2;
    int32_t esi3;
    uint32_t edx4;

    ebx1 = 0x64ae571b;
    edx2 = 0x20e27cd2;
    esi3 = 0xf6d1cb53;
    __asm__("bts esi, edi");
    __asm__("rcl esi, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1)));
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi3) = 0x571b;
    }
    __asm__("rcl ecx, cl");
    __asm__("rol edi, 0x69");
    edx4 = edx2 << 1;
    __asm__("ror bh, 1");
    *reinterpret_cast<int16_t*>(&edx4) = -*reinterpret_cast<int16_t*>(&edx4);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int16_t*>(&esi3) = 0x226d;
    }
    return 0x256aacb9 + edx4 + 0x7a97d5a3 + esi3 + (0x2fa74789 ^ edx4) + 0xadca5e8;
}

int32_t log_size_4_var_038() {
    __asm__("rol bx, 1");
    __asm__("rol dh, cl");
    __asm__("cwd ");
    __asm__("btc ebx, ecx");
    __asm__("rcl ch, 0xdb");
    return 0xa1ef2bf0;
}

uint32_t log_size_4_var_056() {
    int32_t edx1;
    uint32_t ecx2;
    int32_t ebx3;

    edx1 = 0xee5d5bf6;
    __asm__("bts ecx, edx");
    ecx2 = 0x46dde941 >> 65;
    *reinterpret_cast<int16_t*>(&ecx2) = 72;
    ebx3 = 0xf3bae788;
    __asm__("rcr bx, cl");
    __asm__("shrd ecx, edi, 0x1");
    __asm__("rcr ebp, 0xb2");
    __asm__("shrd edx, edx, 0x1");
    *reinterpret_cast<unsigned char*>(&ebx3) = 0;
    *reinterpret_cast<signed char*>(&ecx2) = -57;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) ^ 93);
    *reinterpret_cast<uint16_t*>(&edx1) = reinterpret_cast<uint16_t>(0x5b04 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx3) + reinterpret_cast<uint1_t>(0x5b04 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx3) + 1))));
    return 0x65e5b7a3 - ebx3 + ecx2 + edx1 + 0x6f218c4f + 0xf7ed7d3 + 0xa3ce6d4 + 0x962af89;
}

uint32_t log_size_4_var_061() {
    int32_t ecx1;
    uint32_t ebp2;
    uint32_t edx3;

    ecx1 = 0xf0129add;
    __asm__("ror bx, 1");
    ebp2 = 0x555c0d7d;
    __asm__("rol ch, 1");
    edx3 = 0xffaaf576;
    __asm__("ror di, 0x10");
    __asm__("ror ax, cl");
    if (0) {
        edx3 = 0x555c0d7d;
        ebp2 = 0xffaaf576;
    }
    __asm__("rcl bp, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<uint1_t>(__intrinsic());
    __asm__("ror dh, cl");
    *reinterpret_cast<unsigned char*>(&ecx1) = 0xdd;
    *reinterpret_cast<uint16_t*>(&edx3) = 0x112d;
    return 0x34e8d9e6 - ecx1 + edx3 + ebp2 + 0x51eb427e + (0x7446d92e + __intrinsic()) - 0x4aca7cb5;
}

uint32_t log_size_4_var_039() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebp3;
    uint32_t esi4;

    ebx1 = 0x1f0e2aaf;
    edx2 = 0x956e9206;
    ebp3 = 0xa4837381;
    __asm__("shrd edx, eax, cl");
    __asm__("rol al, 0x1a");
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(0x7381 >> 90);
    *reinterpret_cast<int16_t*>(&edx2) = reinterpret_cast<int16_t>(0x9206 >> -9);
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(0x2aaf >> 31);
    __asm__("cdq ");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx1) ^ 56);
    esi4 = reinterpret_cast<uint32_t>(0xa37809b + ebx1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<uint1_t>(esi4 == 0);
    return 0xe528fe6f * edx2 + ebx1 - 0x2ec8c4fc + __intrinsic() + ebp3 + esi4 - 0x507415b8 - 0x51b9a7fa;
}

int32_t log_size_4_var_040() {
    int32_t eax1;
    int32_t edx2;

    eax1 = 0xf8a3b18;
    edx2 = 0x5fed29b5;
    *reinterpret_cast<signed char*>(&edx2) = -60;
    __asm__("rcr al, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1))))));
    __asm__("rcr bh, 1");
    __asm__("shrd ebx, ebx, 0x1");
    __asm__("rcl dl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) ^ 0x7c);
    __asm__("ror esi, 0x14");
    __asm__("rol ax, 0xd0");
    __asm__("shld edi, ebp, cl");
    __asm__("shrd ecx, esi, 0x9d");
    return eax1 + 0x7cbc74d3 - 0x4b1d34f8 + edx2 - 0x47a2fbb - 0x7043d5d6 - 0x73edf3fc - 0x131f065c;
}

uint32_t log_size_4_var_041() {
    int32_t edx1;

    __asm__("bts dx, 0x8b");
    __asm__("bts ecx, 0x6b");
    edx1 = 0x10d1b1a1 >> -23;
    __asm__("rcr al, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) >> 1);
    __asm__("rcl bp, 1");
    return 0x410292ef + edx1 + 0x31af8ca4 + (0x29aab0bd + edx1 + 1) - 0x46c3f2bb - 0x55a913ea;
}

int32_t log_size_4_var_042() {
    __asm__("rol ecx, 0x4e");
    __asm__("rcr eax, cl");
    __asm__("rol ebx, 1");
    return 0x88d3296a;
}

uint32_t log_size_4_var_043() {
    uint32_t ebx1;
    uint32_t esi2;
    int32_t edi3;
    uint32_t eax4;
    uint32_t eax5;
    int32_t edx6;

    ebx1 = 0xb114a269;
    esi2 = 0xb860cb0a;
    edi3 = 0xf2a23b4f;
    eax4 = 0x6cd3ba6d >> -84;
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax4) | 8);
    eax5 = eax4 * 0xb860cb0a;
    edx6 = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx6) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx6) + 1) + 70);
    *reinterpret_cast<uint16_t*>(&eax5) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax5) >> 1);
    __asm__("rol ecx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - *reinterpret_cast<signed char*>(&edx6));
    *reinterpret_cast<uint16_t*>(&esi2) = reinterpret_cast<uint16_t>(0xc9e1 + reinterpret_cast<uint1_t>(0xb860cb0a < ebx1));
    *reinterpret_cast<int16_t*>(&ebx1) = static_cast<int16_t>(esi2 + 0x66754a73);
    *reinterpret_cast<uint16_t*>(&edi3) = reinterpret_cast<uint16_t>(0x3b4f - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax5) + reinterpret_cast<uint1_t>(0x3b4f < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5))))));
    return eax5 + ebx1 + 0x22841486 + edx6 + ((0xe1fd6fa7 - (0x2af98d27 - reinterpret_cast<uint1_t>(0xe1fd6fa7 < 0x2af98d27 - __intrinsic())) | 0x35dc933d) - 0x66968e8e) + esi2 + edi3 + 0x685af4ac;
}

uint32_t log_size_4_var_044() {
    uint32_t edx1;
    int32_t esi2;
    uint32_t eax3;

    edx1 = 0xe44fb3e4;
    esi2 = 0x39a93a7c;
    __asm__("ror bx, 1");
    __asm__("rcl dl, 1");
    eax3 = 0x76266d36;
    *reinterpret_cast<int16_t*>(&edx1) = 0x46c1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) - 0x6d)));
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1)) {
        *reinterpret_cast<int16_t*>(&esi2) = 0x136;
    }
    if (1) {
        eax3 = edx1;
    }
    return eax3 + 0x51e80dcd + 0x7ecc926c + edx1 + 0x6bf99d7 + esi2 - 0x2607001c + 0x753dd85f;
}

uint32_t log_size_4_var_057() {
    int32_t eax1;
    int32_t ebp2;
    int32_t edx3;
    uint16_t ax4;

    eax1 = 0x7af2e30c;
    ebp2 = 0xbd367ecd;
    __asm__("rcr bh, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) ^ 0x79);
    edx3 = 0x6e22a70a;
    if (1) {
        ebp2 = eax1;
    }
    __asm__("ror ebx, cl");
    ax4 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(ax4 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(ax4 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1)));
    return eax1 - 0x3a310187 + ((0xabb8032d >> -17) + 0x5bff3420) + edx3 + ebp2 - 0x7462030e - 0x3202073e - 0x131e8643;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x5ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_8049362() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_8049397(edx5, v4, eax6);
    ebx7 = ebx8 + 0x5c8c;
    fun_8049040(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2f20, ebx7 - 0x2ec0, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80493a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049442() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = __TMC_END__ == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_8049472() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __assert_fail(0x804f018, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_804c0e2() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2f13;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804c0ff);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804c142() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804c14a() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80493e7() {
}

void fun_8049434() {
}

void fun_8049461() {
}

void fun_804c13d() {
}

int32_t g804f008 = 0;

void fun_8049046() {
    goto g804f008;
}

void fun_80493f1() {
}

void fun_8049439() {
}

void fun_8049469() {
}

void fun_8049056() {
    goto 0x8049030;
}

int32_t main() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    uint32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    uint32_t eax20;
    int32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;
    uint32_t eax29;
    int32_t eax30;
    int32_t eax31;
    uint32_t eax32;
    int32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    int32_t eax37;
    int32_t eax38;
    int32_t eax39;
    uint32_t eax40;
    int32_t eax41;
    uint32_t eax42;
    int32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    int32_t eax46;
    int32_t eax47;
    int32_t eax48;
    int32_t eax49;
    uint32_t eax50;
    int32_t eax51;
    uint32_t eax52;
    int32_t eax53;
    int32_t eax54;
    int32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    int32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    int32_t eax64;
    int32_t eax65;
    int32_t eax66;
    int32_t eax67;
    uint32_t eax68;
    uint32_t eax69;
    int32_t eax70;
    int32_t eax71;
    int32_t eax72;
    uint32_t eax73;
    int32_t eax74;
    uint32_t eax75;
    int32_t eax76;
    int32_t eax77;
    int32_t eax78;
    int32_t eax79;
    int32_t eax80;
    uint32_t eax81;
    int32_t eax82;
    uint32_t eax83;
    int32_t eax84;
    uint32_t eax85;
    int32_t eax86;
    uint32_t eax87;
    int32_t eax88;
    int32_t eax89;
    uint32_t eax90;
    int32_t eax91;
    int32_t eax92;
    uint32_t eax93;
    int32_t eax94;
    int32_t eax95;
    int32_t eax96;
    int32_t eax97;
    int32_t eax98;
    uint32_t eax99;
    int32_t eax100;

    eax1 = log_size_4_var_000();
    eax2 = log_size_4_var_001();
    eax3 = log_size_4_var_002();
    eax4 = log_size_4_var_003();
    eax5 = log_size_4_var_004();
    eax6 = log_size_4_var_005();
    eax7 = log_size_4_var_006();
    eax8 = log_size_4_var_007();
    eax9 = log_size_4_var_008();
    eax10 = log_size_4_var_009();
    eax11 = log_size_4_var_010();
    eax12 = log_size_4_var_011();
    eax13 = log_size_4_var_012();
    eax14 = log_size_4_var_013();
    eax15 = log_size_4_var_014();
    eax16 = log_size_4_var_015();
    eax17 = log_size_4_var_016();
    eax18 = log_size_4_var_017();
    eax19 = log_size_4_var_018();
    eax20 = log_size_4_var_019();
    eax21 = log_size_4_var_020();
    eax22 = log_size_4_var_021();
    eax23 = log_size_4_var_022();
    eax24 = log_size_4_var_023();
    eax25 = log_size_4_var_024();
    eax26 = log_size_4_var_025();
    eax27 = log_size_4_var_026();
    eax28 = log_size_4_var_027();
    eax29 = log_size_4_var_028();
    eax30 = log_size_4_var_029();
    eax31 = log_size_4_var_030();
    eax32 = log_size_4_var_031();
    eax33 = log_size_4_var_032();
    eax34 = log_size_4_var_033();
    eax35 = log_size_4_var_034();
    eax36 = log_size_4_var_035();
    eax37 = log_size_4_var_036();
    eax38 = log_size_4_var_037();
    eax39 = log_size_4_var_038();
    eax40 = log_size_4_var_039();
    eax41 = log_size_4_var_040();
    eax42 = log_size_4_var_041();
    eax43 = log_size_4_var_042();
    eax44 = log_size_4_var_043();
    eax45 = log_size_4_var_044();
    eax46 = log_size_4_var_045();
    eax47 = log_size_4_var_046();
    eax48 = log_size_4_var_047();
    eax49 = log_size_4_var_048();
    eax50 = log_size_4_var_049();
    eax51 = log_size_4_var_050();
    eax52 = log_size_4_var_051();
    eax53 = log_size_4_var_052();
    eax54 = log_size_4_var_053();
    eax55 = log_size_4_var_054();
    eax56 = log_size_4_var_055();
    eax57 = log_size_4_var_056();
    eax58 = log_size_4_var_057();
    eax59 = log_size_4_var_058();
    eax60 = log_size_4_var_059();
    eax61 = log_size_4_var_060();
    eax62 = log_size_4_var_061();
    eax63 = log_size_4_var_062();
    eax64 = log_size_4_var_063();
    eax65 = log_size_4_var_064();
    eax66 = log_size_4_var_065();
    eax67 = log_size_4_var_066();
    eax68 = log_size_4_var_067();
    eax69 = log_size_4_var_068();
    eax70 = log_size_4_var_069();
    eax71 = log_size_4_var_070();
    eax72 = log_size_4_var_071();
    eax73 = log_size_4_var_072();
    eax74 = log_size_4_var_073();
    eax75 = log_size_4_var_074();
    eax76 = log_size_4_var_075();
    eax77 = log_size_4_var_076();
    eax78 = log_size_4_var_077();
    eax79 = log_size_4_var_078();
    eax80 = log_size_4_var_079();
    eax81 = log_size_4_var_080();
    eax82 = log_size_4_var_081();
    eax83 = log_size_4_var_082();
    eax84 = log_size_4_var_083();
    eax85 = log_size_4_var_084();
    eax86 = log_size_4_var_085();
    eax87 = log_size_4_var_086();
    eax88 = log_size_4_var_087();
    eax89 = log_size_4_var_088();
    eax90 = log_size_4_var_089();
    eax91 = log_size_4_var_090();
    eax92 = log_size_4_var_091();
    eax93 = log_size_4_var_092();
    eax94 = log_size_4_var_093();
    eax95 = log_size_4_var_094();
    eax96 = log_size_4_var_095();
    eax97 = log_size_4_var_096();
    eax98 = log_size_4_var_097();
    eax99 = log_size_4_var_098();
    eax100 = log_size_4_var_099();
    if (eax1 + eax2 + eax3 + eax4 + eax5 + eax6 + eax7 + eax8 + eax9 + eax10 + eax11 + eax12 + eax13 + eax14 + eax15 + eax16 + eax17 + eax18 + eax19 + eax20 + eax21 + eax22 + eax23 + eax24 + eax25 + eax26 + eax27 + eax28 + eax29 + eax30 + eax31 + eax32 + eax33 + eax34 + eax35 + eax36 + eax37 + eax38 + eax39 + eax40 + eax41 + eax42 + eax43 + eax44 + eax45 + eax46 + eax47 + eax48 + eax49 + eax50 + eax51 + eax52 + eax53 + eax54 + eax55 + eax56 + eax57 + eax58 + eax59 + eax60 + eax61 + eax62 + eax63 + eax64 + eax65 + eax66 + eax67 + eax68 + eax69 + eax70 + eax71 + eax72 + eax73 + eax74 + eax75 + eax76 + eax77 + eax78 + eax79 + eax80 + eax81 + eax82 + eax83 + eax84 + eax85 + eax86 + eax87 + eax88 + eax89 + eax90 + eax91 + eax92 + eax93 + eax94 + eax95 + eax96 + eax97 + eax98 + eax99 + eax100) {
        fun_8049050("sum==0", "source_complex_with_base_100_funcs_of_size_16.c", 0xd3, "main");
    } else {
        return 0;
    }
}
