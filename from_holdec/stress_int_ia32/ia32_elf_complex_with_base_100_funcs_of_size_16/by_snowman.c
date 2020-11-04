
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

uint32_t log_size_4_var_000() {
    int32_t ecx1;
    int32_t edx2;
    int32_t esi3;
    uint32_t edx4;

    ecx1 = 0x4c53054a;
    edx2 = 0x3b1f59e5;
    esi3 = 0xefec61ab;
    __asm__("btc bx, bx");
    *reinterpret_cast<signed char*>(&edx2) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) >> 1);
    __asm__("rcl al, 1");
    edx4 = 0x3baca595;
    *reinterpret_cast<int16_t*>(&esi3) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&edx2));
    __asm__("btc edi, 0x4f");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    return 0x268d4337 - -0xcc53054a + edx4 + 0x7989d165 + esi3 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + 0x38760e3a;
}

int32_t log_size_4_var_002() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    int32_t esi4;
    int32_t edi5;
    int32_t ecx6;

    eax1 = 0x5cf11f05;
    ecx2 = 0x529aa9c2;
    edx3 = 0xb48c8792;
    esi4 = 0xb59bcc2;
    edi5 = 0x3fae0aa4;
    *reinterpret_cast<uint16_t*>(&esi4) = -0xbcc2;
    __asm__("shrd dx, dx, 0x9");
    *reinterpret_cast<uint16_t*>(&eax1) = 0x3e0a;
    *reinterpret_cast<uint16_t*>(&edi5) = 0x3eae;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - 0x6e)));
    *reinterpret_cast<signed char*>(&eax1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1);
    __asm__("rcl si, 1");
    if (1) {
        *reinterpret_cast<uint16_t*>(&edi5) = *reinterpret_cast<uint16_t*>(&esi4);
    }
    ecx6 = ecx2 >> -62;
    *reinterpret_cast<uint16_t*>(&edi5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi5) - 0xe362);
    *reinterpret_cast<signed char*>(&ecx6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx6) >> 1);
    return eax1 + 0x7d434b8b + ecx6 - 0x4b73786e - 0x4dd7e57d + esi4 + edi5 + 0x5f67ad38;
}

uint32_t log_size_4_var_003() {
    uint32_t eax1;
    uint32_t ebx2;
    uint32_t ebx3;

    eax1 = 0xd550e3de;
    ebx2 = 0xafdd0ba2;
    __asm__("ror dx, 1");
    __asm__("bts si, 0xf2");
    *reinterpret_cast<int16_t*>(&ebx2) = -0xba2;
    ebx3 = ebx2 ^ 0xd550e3de;
    *reinterpret_cast<uint16_t*>(&eax1) = 1;
    __asm__("btr bp, 0x5e");
    *reinterpret_cast<int16_t*>(&ebx3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx3) >> -14);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 23);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) ^ 54);
    return eax1 + ebx3 + 0x3dc9bb97 - 0x4e380000 + 0xf439507 - 0x1ef50022 - 0x7e0d8c77 + 0x4e4f1a0a;
}

uint32_t log_size_4_var_006() {
    int32_t eax1;
    uint32_t ebx2;
    uint32_t ecx3;
    uint32_t ecx4;
    uint32_t edx5;
    uint32_t eax6;
    uint32_t ebx7;
    uint1_t zf8;
    uint16_t ax9;

    eax1 = 0x8ee6df2a;
    ebx2 = 0xd7680b77;
    ecx3 = 0x3f21c220;
    __asm__("ror ecx, 0xf");
    if (__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&ecx3) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) >> *reinterpret_cast<signed char*>(&ecx3));
    ecx4 = ecx3 | 0xc0000000;
    edx5 = 0x8ee6df2a % ecx4;
    eax6 = 0x8ee6df2a / ecx4;
    *reinterpret_cast<uint16_t*>(&eax6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax6) * 0xbfe1);
    ebx7 = ebx2 & eax6;
    zf8 = reinterpret_cast<uint1_t>(ebx7 == 0);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<uint1_t>(!zf8);
    if (reinterpret_cast<uint1_t>(__intrinsic()) | zf8) {
        edx5 = ecx4;
    }
    ax9 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax6) | 0xc000);
    *reinterpret_cast<uint16_t*>(&edx5) = reinterpret_cast<uint16_t>(ax9 % ax9);
    *reinterpret_cast<uint16_t*>(&eax6) = reinterpret_cast<uint16_t>(ax9 / ax9);
    return eax6 + ebx7 + ecx4 + edx5 - 0x73b8401f + (0xb21f75e0 >> 0xffffff9a) + 0x34176ebb - 0xb576430;
}

uint32_t log_size_4_var_007() {
    int32_t eax1;
    uint32_t ecx2;
    uint32_t ecx3;
    uint32_t edx4;
    uint32_t eax5;

    eax1 = 0xcfd0f80d;
    ecx2 = 0xd1c596f0;
    *reinterpret_cast<int16_t*>(&eax1) = -0xf80d;
    *reinterpret_cast<int16_t*>(&ecx2) = 0x2de0;
    __asm__("rcl cx, 1");
    __asm__("xadd bh, ch");
    if (0) {
        *reinterpret_cast<int16_t*>(&ecx2) = 0xea73;
    }
    ecx3 = ecx2 | 0xc0000000;
    edx4 = eax1 % ecx3;
    eax5 = eax1 / ecx3;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) == 0x73) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = 0x73;
    }
    __asm__("rcr ebx, 1");
    __asm__("bts ax, 0x1c");
    *reinterpret_cast<int16_t*>(&eax5) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax5) * 0xea73);
    *reinterpret_cast<int16_t*>(&edx4) = __intrinsic();
    __asm__("rol dx, 1");
    return eax5 + 0x73 + ecx3 + edx4 + 0x73ddf4a5 + 0x5610ceb2 - 0x45953b5 - 0x1b854a26;
}

uint32_t log_size_4_var_008() {
    uint32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    uint32_t esi4;

    eax1 = 0xfcd197ee;
    ebx2 = 0x36b3c3fc;
    ecx3 = 0x18f183dd;
    *reinterpret_cast<int16_t*>(&ecx3) = 0xc1ee;
    esi4 = 0xe159ac7f;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1))))));
    *reinterpret_cast<int16_t*>(&esi4) = reinterpret_cast<int16_t>(0xac7f >> -18);
    __asm__("ror al, 0x9a");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = 31;
    *reinterpret_cast<signed char*>(&eax1) = --55;
    __asm__("shrd eax, edx, cl");
    __asm__("btr esi, 0x16");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) - reinterpret_cast<unsigned char>(18 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) < 18)));
    return (eax1 ^ 0x808fed1a) + ebx2 + ecx3 + 0x67c24f58 + 0x303cd12e + (esi4 >> 1) + 0x1247cbb9 - 0x2884bd86;
}

int32_t log_size_4_var_011() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edi3;
    int32_t eax4;

    ebx1 = 0x691e6e16;
    ecx2 = 0xc6c46770;
    edi3 = 0xac6a6701;
    eax4 = 0x2eca;
    *reinterpret_cast<int16_t*>(&ecx2) = reinterpret_cast<int16_t>(0x6770 >> 0x70);
    *reinterpret_cast<uint16_t*>(&eax4) = 0x6ecb;
    *reinterpret_cast<int16_t*>(&ebx1) = 0x6552;
    if (!__intrinsic()) {
    }
    __asm__("bts dx, 0x5f");
    __asm__("shrd cx, dx, 0xc");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) & 13);
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&edi3) = 0x356f;
    }
    __asm__("rol ch, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> 1);
    __asm__("shrd cx, di, 0x1");
    __asm__("rcl si, cl");
    return eax4 + ebx1 + ecx2 - 0x7c7cca91 + 0x4d87b24c + 0x3b17e120 + edi3 + 0x178f6809;
}

int32_t log_size_4_var_012() {
    int32_t eax1;
    int32_t ebp2;
    int32_t edi3;

    eax1 = 0xa84bde39;
    ebp2 = 0x119b7cb7;
    edi3 = 0x9ec13cf5;
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(0x7cb7 >> 0x66);
    *reinterpret_cast<signed char*>(&eax1) = -57;
    __asm__("rcl ebx, 0x39");
    __asm__("rcr eax, 1");
    __asm__("rcr cx, cl");
    __asm__("shrd ebx, edx, 0x1");
    __asm__("rcr ebp, cl");
    *reinterpret_cast<int16_t*>(&edi3) = reinterpret_cast<int16_t>(0x3cf5 >> 80);
    __asm__("rol cl, 0x42");
    return eax1 * 0x3fba7f3f + 0x2d774f36 + 0x9d81550 + (__intrinsic() >> 1) + ebp2 - 0x44322ef2 + edi3 - 0x7ff88f7a;
}

int32_t log_size_4_var_014() {
    int32_t eax1;
    int32_t edx2;

    eax1 = 0xad33ca4e;
    edx2 = 0x8b304313;
    __asm__("btr ecx, esi");
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(19 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) + reinterpret_cast<uint1_t>(19 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) + 1))));
    __asm__("rcr ax, 1");
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(78 & *reinterpret_cast<unsigned char*>(&edx2));
    __asm__("rcr ch, 1");
    __asm__("rcl eax, cl");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax1) - 0x1c88);
    if (0) {
        eax1 = eax1;
    }
    if (0) {
    }
    return eax1 - 0x69fec7de - 0x2fca893b + edx2 + 0x36f95a88 + 0x22c954f1 - 0x16e1c88 + 0xfda325e;
}

uint32_t log_size_4_var_015() {
    int32_t eax1;
    int32_t esi2;

    eax1 = 0xe3fa718d;
    esi2 = 0xc618f4c4;
    __asm__("btc ax, si");
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(0x718d >> -85);
    *reinterpret_cast<uint16_t*>(&esi2) = 0x1bcc;
    if (0) {
        esi2 = eax1;
        eax1 = 0xc6181bcc;
    }
    __asm__("bts ebx, ebx");
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(0xcc >> -36);
    __asm__("btc edi, esi");
    __asm__("rcr bh, 1");
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) - reinterpret_cast<uint16_t>(0x73bd - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax1) < 0x8c44)));
    return eax1 + 0x7b6b8c43 + (0xba7ec8ab - (0x1ec47c1e - reinterpret_cast<uint1_t>(0xba7ec8ab < 0x1ec47c1e - __intrinsic()))) - 0xc9506cf - 0x618b7a10 + esi2 - 0x1ec47c1e - 0x53fac89f;
}

uint32_t log_size_4_var_016() {
    int32_t eax1;
    int32_t ecx2;
    int16_t bx3;
    unsigned char tmp8_4;
    uint1_t cf5;
    uint32_t esi6;

    eax1 = 0xe6286fad;
    ecx2 = 0xa5645b3e;
    __asm__("ror edi, cl");
    *reinterpret_cast<uint16_t*>(&ecx2) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1);
    __asm__("rol ebp, cl");
    bx3 = 0x6ca0;
    __asm__("bts ebx, 0x85");
    tmp8_4 = reinterpret_cast<unsigned char>(0xad + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&bx3) + 1));
    *reinterpret_cast<unsigned char*>(&eax1) = tmp8_4;
    cf5 = reinterpret_cast<uint1_t>(0x9ae7d9f8 < eax1 + reinterpret_cast<uint1_t>(tmp8_4 < 0xad));
    esi6 = 0x9ae7d9f8 - (eax1 + cf5);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<uint1_t>(esi6 != static_cast<uint32_t>(cf5));
    if (cf5) {
        *reinterpret_cast<int16_t*>(&eax1) = *reinterpret_cast<int16_t*>(&eax1);
    }
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax1) >> 1);
    __asm__("rcl eax, 1");
    return eax1 + 0x68dc + ecx2 + 0xa0 + 0x3b51dee8 + esi6 - 0x18235741 + 0x383ea785;
}

int32_t log_size_4_var_017() {
    int32_t ebx1;
    int32_t edx2;
    int1_t less3;
    int32_t ebx4;

    ebx1 = 0x89bc80ac;
    edx2 = 0xf24d0375;
    __asm__("shld ebp, ebx, 0x1");
    if (less3) {
    }
    *reinterpret_cast<signed char*>(&ebx1) = -15;
    __asm__("rol dx, cl");
    __asm__("rcl bx, cl");
    __asm__("cdq ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1));
    ebx4 = -ebx1;
    __asm__("xadd cl, bl");
    __asm__("lahf ");
    if (!ebx4) {
    }
    return 0x4e03033a + ebx4 - 0x14ecd81b - 0xdb2fcc6 + 0x2a7945b3 + 0x6d496124 - 0x60f1d57a - 0x10a4401d;
}

int32_t log_size_4_var_018() {
    int32_t ecx1;

    ecx1 = 0xe399506b;
    __asm__("rol ch, cl");
    *reinterpret_cast<signed char*>(&ecx1) = -0x6b;
    __asm__("xadd di, di");
    __asm__("rcl edx, 1");
    __asm__("bsf ebp, edx");
    __asm__("xadd bp, ax");
    __asm__("rcl si, 1");
    __asm__("rol eax, 0x14");
    return 0x6addff34 - ecx1 + 0x5f61265a - 0x71258b09 + 0x2b87c782 + 0x446337b4 - 0x6a0c6cd9;
}

uint32_t log_size_4_var_021() {
    int32_t ecx1;
    int32_t edx2;
    int32_t eax3;
    int16_t ax4;
    int16_t dx5;
    int16_t cx6;

    ecx1 = 0xeebdbf34;
    edx2 = 0x94957802;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) | 100);
    eax3 = -30;
    ax4 = -30;
    *reinterpret_cast<unsigned char*>(&ax4) = reinterpret_cast<unsigned char>(0xe2 >> 0x80);
    __asm__("ror ah, 0x2a");
    *reinterpret_cast<int16_t*>(&eax3) = reinterpret_cast<int16_t>(ax4 * 0x4ce6);
    dx5 = __intrinsic();
    cx6 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx1) >> -84);
    __asm__("btr edx, 0x2f");
    *reinterpret_cast<int16_t*>(&ecx1) = reinterpret_cast<int16_t>(cx6 + 0x7b52);
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<uint1_t>(cx6 >= 0x84ae);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx5) + 1) << 1);
    return eax3 + (0x60d43d22 - __intrinsic() << 1) + ecx1 + edx2 + 0x9d5615 + 0x24224ce6 + 0x46fc8f18 - 0x2d672e2d;
}

int32_t log_size_4_var_024() {
    int32_t ebx1;

    __asm__("rol bl, 0x9c");
    __asm__("rol bl, cl");
    __asm__("rcl edi, 1");
    __asm__("shld cx, di, 0x0");
    ebx1 = -1;
    __asm__("shld dx, cx, 0x6");
    __asm__("xadd ebp, edi");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(0xff >> 48);
    return 0x8e299bb + ebx1 + 0x4196cd1e - 0x338c0000 - 0xcc8853a + 0x16c0df68 - 0x41b3364;
}

int32_t log_size_4_var_027() {
    int32_t edx1;

    edx1 = 0x945aee43;
    __asm__("rcr ah, 1");
    __asm__("btr ebp, eax");
    __asm__("shrd ax, di, cl");
    *reinterpret_cast<int16_t*>(&edx1) = __intrinsic();
    return 0x3d682d3c - edx1 + 0x5b6becb6 - 0x4db495ac - 0x4b49be2f - 0x195f6d50;
}

uint32_t log_size_4_var_030() {
    uint32_t ebp1;
    int32_t eax2;
    int32_t ecx3;

    ebp1 = reinterpret_cast<uint32_t>(0x34963c95 >> 0x77);
    __asm__("rol bl, cl");
    eax2 = 0x4e6c4b8c;
    *reinterpret_cast<uint16_t*>(&ecx3) = 0x46ec;
    __asm__("rol dl, cl");
    __asm__("shrd si, cx, 0xc");
    __asm__("ror ebx, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = reinterpret_cast<signed char>(-*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    __asm__("shld bx, bp, 0x8");
    *reinterpret_cast<int16_t*>(&ebp1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax2) * 0x2808);
    return eax2 + (0xc3d98a13 - (0x66360655 - reinterpret_cast<uint1_t>(0xc3d98a13 < 0x66360655 - __intrinsic()))) + 0x75b44601 + __intrinsic() + ebp1 - 0x5630777f + 0x1c345d9 + 0x2f33e579;
}

int32_t log_size_4_var_032() {
    int32_t edx1;

    edx1 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&edx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx1) ^ 0x7d7d);
    __asm__("rcr dh, 1");
    if (1) {
    }
    __asm__("rcl si, cl");
    __asm__("bsr eax, ecx");
    __asm__("ror cl, cl");
    return 0x6630971c + edx1 - 0x2aa7 + 0x52b5f86d - 0x7a512aa7 - 0x2c263512;
}

int32_t log_size_4_var_033() {
    int32_t eax1;
    int32_t ebp2;

    eax1 = 0x47cfd25b;
    ebp2 = 0xa526a2d6;
    __asm__("rcr ebx, 1");
    *reinterpret_cast<int16_t*>(&eax1) = 0x7777;
    __asm__("rcr bx, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) >> -14);
    __asm__("ror ax, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebp2) = *reinterpret_cast<int16_t*>(&eax1);
    }
    __asm__("shld ecx, esi, cl");
    *reinterpret_cast<int16_t*>(&ebp2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp2) + 0x3297);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) - 63);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&eax1) = *reinterpret_cast<int16_t*>(&eax1);
    }
    return eax1 + 0x26253bae + (0x6f6dfcf2 + eax1) + 0x42a5bd48 + ebp2 - 0x19f806f1 + 0x3e88ffff - 0x22da4224;
}

uint32_t log_size_4_var_034() {
    int32_t eax1;
    int32_t ebx2;
    uint32_t ecx3;
    uint32_t ebp4;
    uint32_t ebp5;

    eax1 = 0xabdaf236;
    ebx2 = 0xe7b0f899;
    ecx3 = 0x237b4c2;
    ebp4 = 0x63454558;
    __asm__("rol cx, cl");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(54 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    *reinterpret_cast<int16_t*>(&ebp4) = 0x4557;
    if (__intrinsic()) {
        ebp4 = 0x237b4c2;
    }
    __asm__("rcr dl, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) >> 79);
    __asm__("btc edx, eax");
    ebp5 = ebp4 - (0x2b05b719 - reinterpret_cast<uint1_t>(ebp4 < 0xd4fa48e7));
    *reinterpret_cast<uint16_t*>(&ebp5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp5) - reinterpret_cast<uint16_t>(0x33a - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebp5) < 0xfcc7)));
    __asm__("rcl ch, 1");
    __asm__("rcr si, cl");
    return eax1 + ebx2 + 0x237578f - 0xcc8033a + ebp5 + 0x312fd1c4 - 0x5df31cb3 + 0x768c108c;
}

uint32_t log_size_4_var_035() {
    int32_t eax1;
    int32_t ebx2;
    uint32_t ecx3;
    uint32_t ecx4;

    eax1 = 0xc4128b7a;
    ebx2 = 0x18667e15;
    ecx3 = 0xa334cc9f;
    *reinterpret_cast<unsigned char*>(&ecx3) = 19;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) >> 0x80);
    __asm__("btc ax, 0xec");
    __asm__("btc ebp, eax");
    ecx4 = ecx3 - (0x11488427 + reinterpret_cast<uint1_t>(ecx3 < 0x11488427 + __intrinsic()));
    __asm__("rcr ch, 1");
    __asm__("shrd edx, edx, 0x1");
    __asm__("rcl ecx, cl");
    __asm__("shrd eax, eax, 0x1b");
    __asm__("shrd edx, esi, 0x93");
    __asm__("cdq ");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(0x7a * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1));
    if (*reinterpret_cast<signed char*>(&ecx4) < 0x7e) {
    }
    return eax1 + 0x18667e15 + ecx4 - 0x698ae018 + 0x784bc3f - 0x3ea41dbc - 0x28b2326f + 0x67f89041;
}

int32_t log_size_4_var_036() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edi3;
    int32_t edx4;

    eax1 = 0xe4cfeea3;
    ecx2 = 0xb1d7b216;
    edi3 = 0xbc4c49d1;
    __asm__("rol dl, cl");
    __asm__("ror ch, 1");
    edx4 = 0xd760e4fd;
    __asm__("rcl bh, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = -reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) | 37);
    if (__intrinsic() != __intrinsic()) {
        *reinterpret_cast<int16_t*>(&edi3) = *reinterpret_cast<int16_t*>(&ecx2);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1))));
    if (__intrinsic()) {
        edi3 = 0x457f6a34;
    }
    return 0xba39e3 - ecx2 + edx4 + 0x457f6a34 - 0x617de380 + edi3 - 0x28cb8758;
}

int32_t log_size_4_var_037() {
    int32_t edx1;
    int32_t esi2;

    edx1 = 0xf05ec66e;
    esi2 = 0xeef1abd;
    __asm__("ror bl, 1");
    __asm__("shrd esi, edi, 0xa9");
    __asm__("btr si, ax");
    __asm__("shld ax, dx, cl");
    __asm__("bsr esi, esi");
    if (1) {
        esi2 = 0xc31ef3c3;
    }
    __asm__("shld bp, di, 0x1");
    *reinterpret_cast<int16_t*>(&edx1) = __intrinsic();
    return 0x3ed9cf80 - edx1 + 0x19b64020 + esi2 + 0x22a4e69c + 0x4f01104a;
}

uint32_t log_size_4_var_038() {
    int32_t ebx1;
    int32_t ebp2;
    int32_t esi3;
    int16_t ax4;
    uint32_t tmp32_5;

    ebx1 = 0x332efc94;
    ebp2 = 0x3b7f41f7;
    esi3 = 0x74f0d919;
    *reinterpret_cast<int16_t*>(&esi3) = 13;
    ax4 = reinterpret_cast<int16_t>(80 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    tmp32_5 = 0xa4dae658 + __intrinsic();
    if (tmp32_5 < 0xe1510187) {
    }
    __asm__("rol bl, 0xf7");
    __asm__("rol ebx, 0x24");
    if (0) {
        esi3 = 0x3b7f41f7;
        ebp2 = 0x74f0000d;
    }
    *reinterpret_cast<signed char*>(&ebx1) = reinterpret_cast<signed char>(~static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()))))));
    return ax4 + ebx1 + tmp32_5 + 0xd8ab8f2 + ebp2 + esi3 + 0x97239ec + 0x60c91fb9;
}

int32_t log_size_4_var_039() {
    __asm__("rol ebp, cl");
    __asm__("shrd di, dx, cl");
    __asm__("ror esi, cl");
    __asm__("rol dh, 1");
    __asm__("rcr bh, 1");
    __asm__("btr esi, edx");
    return 0x2c605a34;
}

int32_t log_size_4_var_041() {
    int32_t eax1;
    int32_t ebx2;

    eax1 = 0x5014c8fd;
    __asm__("bts edx, ebx");
    __asm__("shld bp, ax, 0x0");
    ebx2 = 0xf076c000;
    if (0) {
    }
    *reinterpret_cast<signed char*>(&eax1) = -91;
    if (0) {
        eax1 = 0x80433080;
    }
    if (!__intrinsic()) {
        ebx2 = 0xfa6f4ba0;
    }
    return eax1 + ebx2 - 0x1d455680 - 0x7fbccf80 + (0xb51cf4e6 >> 0x80) - 0x590b460 - 0x2ba4da7b - 0x31695450;
}

uint32_t log_size_4_var_042() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebp3;
    int32_t edi4;
    int32_t esi5;

    ebx1 = 0x94be9979;
    edx2 = 0xff434c42;
    ebp3 = 0x68390eef;
    edi4 = 0xd37cfb7f;
    __asm__("rol ah, 1");
    __asm__("ror cx, 0xdb");
    *reinterpret_cast<signed char*>(&edx2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    esi5 = edx2;
    if (0) {
        *reinterpret_cast<int16_t*>(&esi5) = 0x9979;
    }
    *reinterpret_cast<int16_t*>(&edi4) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx2) * 0x73b9);
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(0xeef >> 0xff8d);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic())))) {
        edx2 = ebp3;
    }
    __asm__("btc esi, 0x6b");
    return 0x4fa63d0d - (0xe1aa5478 >> 0x78) + edx2 + ebp3 + esi5 + edi4 - 0x53c31cc0;
}

int32_t log_size_4_var_043() {
    int32_t ebx1;

    ebx1 = 0x9ac1ed1;
    __asm__("shld di, bx, 0xc");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> 1);
    __asm__("rcl bl, cl");
    *reinterpret_cast<int16_t*>(&ebx1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx1) >> 0x95);
    __asm__("ror si, cl");
    __asm__("rol edi, 0x57");
    return 0x54ecc2ca + ebx1 + 0x54ecc2ca + 0x1531ba1e - 0x6ecb347d - 0x2d670336 + 0x73f969a4 - 0x7d3d73f6;
}

int32_t log_size_4_var_045() {
    int32_t ebx1;

    ebx1 = 0xc1fd5fc9;
    __asm__("xadd ch, bh");
    __asm__("cdq ");
    *reinterpret_cast<uint16_t*>(&ebx1) = 0xfbf6;
    __asm__("rcl eax, cl");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(0xf6 >> -54);
    return 0x596814c7 + ebx1 + 0x66e99501 - 0x35b12975 + 0x7e626d06 + 0x2bb1b39 - 0x2565105c + 0x2999716d;
}

uint32_t log_size_4_var_048() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;
    int32_t esi4;
    int32_t edi5;
    uint32_t ebp6;
    uint16_t tmp16_7;
    uint1_t cf8;

    ebx1 = 0xf0ea1087;
    ecx2 = 0xbdec78c0;
    edx3 = 0x8c78dfb1;
    esi4 = 0xffbb1f43;
    edi5 = 0x8b297368;
    ebp6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    if (1 != __intrinsic()) {
        esi4 = 0x8b297368;
    }
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(0x78c0 & *reinterpret_cast<uint16_t*>(&esi4));
    tmp16_7 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp6) + 0xfd);
    cf8 = reinterpret_cast<uint1_t>(tmp16_7 < *reinterpret_cast<uint16_t*>(&ebp6));
    *reinterpret_cast<uint16_t*>(&ebp6) = tmp16_7;
    *reinterpret_cast<uint16_t*>(&edi5) = reinterpret_cast<uint16_t>(0x73ef + cf8);
    __asm__("rcr ebx, cl");
    *reinterpret_cast<uint16_t*>(&edx3) = *reinterpret_cast<uint16_t*>(&ebp6);
    return 0xdbe0ea9 + ecx2 + edx3 + ebp6 + esi4 + edi5 - 0x6e75885a;
}

int32_t log_size_4_var_049() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ecx3;

    ebx1 = 0x58491914;
    __asm__("xadd ebp, edx");
    edx2 = 0xbd148981;
    if (0) {
        edx2 = 0x6fc849de;
    }
    __asm__("rcl edi, 0x4e");
    ecx3 = 0x5afd08c;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    __asm__("rcl ebx, 0x66");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) + 62);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) >= 0) {
        ebx1 = ebx1;
    }
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx2) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1)) + 1);
    *reinterpret_cast<int16_t*>(&edx2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx2) * 0x39da);
    __asm__("rcl edx, 1");
    return 0x5afd08c + ebx1 + ecx3 + edx2 + 0xde2ce5e + 0x6931fec8 + 0x6fc849de + 0x2c7c89db;
}

int32_t log_size_4_var_050() {
    int32_t ecx1;

    ecx1 = 0xe726ea47 >> 71;
    __asm__("rol bx, cl");
    __asm__("rol bh, cl");
    __asm__("rcr ecx, 1");
    *reinterpret_cast<uint16_t*>(&ecx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx1) & 0x3551);
    __asm__("btc si, bx");
    __asm__("btc dx, bx");
    __asm__("rcr dh, 1");
    return 0x1be38900 - ecx1 - 0x4aea863c - 0xdf164fa + 0x3fb43551 + 0x52afc00b + 0x6273f895;
}

int32_t log_size_4_var_052() {
    int32_t edx1;
    int32_t esi2;
    int32_t eax3;
    uint16_t ax4;

    edx1 = 0x9ce94778;
    esi2 = 0x69f62508;
    if (0) {
    }
    __asm__("rcr ah, 0xdf");
    eax3 = -0x54002899;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&eax3) = 0x3680;
    }
    __asm__("shrd cx, dx, cl");
    __asm__("rol eax, cl");
    *reinterpret_cast<uint16_t*>(&esi2) = reinterpret_cast<uint16_t>(0x2508 ^ *reinterpret_cast<uint16_t*>(&eax3));
    __asm__("rcr ebp, 0x6b");
    ax4 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax3) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx1) = reinterpret_cast<uint16_t>(ax4 % -20);
    *reinterpret_cast<uint16_t*>(&eax3) = reinterpret_cast<uint16_t>(ax4 / -20);
    return eax3 + 0x711e88ec + 0x6413310f + edx1 + 0x2e5ed68e + esi2 + 0x30563680 - 0x5bebcd09;
}

int32_t log_size_4_var_053() {
    int32_t ecx1;
    int32_t edx2;
    uint1_t cf3;

    ecx1 = 0xf3f431ef;
    __asm__("btr bx, 0x63");
    __asm__("xadd ecx, ebx");
    edx2 = -0x8db31511;
    cf3 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx2) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1))));
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx2) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + cf3));
    if (*reinterpret_cast<signed char*>(&edx2) < reinterpret_cast<signed char>(static_cast<uint32_t>(cf3))) {
    }
    __asm__("rcr ebp, 1");
    __asm__("ror ax, 0x12");
    __asm__("btr bx, 0xcf");
    return 0x2f463683 + edx2 - 0x56f8afa5 + 0x6896291f - 0x2c8de60a + 0x59ecf81c;
}

int32_t log_size_4_var_054() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    int32_t esi4;
    int32_t edi5;
    int32_t ebx6;

    eax1 = 0x2b440620;
    ecx2 = 0x504534b4;
    edx3 = 0xffc81563;
    esi4 = 0x8a3d7dea;
    edi5 = 0xa047ce9f;
    __asm__("shrd ebx, ecx, cl");
    __asm__("bts edx, ecx");
    ebx6 = 0;
    if (1) {
    }
    if (1) {
        edx3 = 0;
    }
    *reinterpret_cast<int16_t*>(&ecx2) = reinterpret_cast<int16_t>(0x3400 - *reinterpret_cast<int16_t*>(&edx3));
    __asm__("shrd ax, dx, 0x1");
    if (0) {
        esi4 = 0xa047ce9f;
        edi5 = 0x8a3d7dea;
    }
    __asm__("xadd bx, bp");
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&edx3) = 0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) | 0xc6);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&eax1) = 0x445d;
    }
    __asm__("ror ecx, cl");
    return eax1 + ebx6 + ecx2 + edx3 + 0x445d + esi4 + edi5 - 0x7d08c4d0;
}

int32_t log_size_4_var_055() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t ebp4;
    uint16_t tmp16_5;
    uint1_t cf6;

    eax1 = 0xadd154e4;
    ebx2 = 0x3d7b076;
    edx3 = 0x27ef6fbe;
    ebp4 = 0xb1b3774c >> -81;
    __asm__("btr ax, 0xd7");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1));
    tmp16_5 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp4) - 0x68a5)));
    cf6 = reinterpret_cast<uint1_t>(tmp16_5 < *reinterpret_cast<uint16_t*>(&ebp4));
    *reinterpret_cast<uint16_t*>(&ebp4) = tmp16_5;
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(0x795 + cf6);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1)) + 1);
    __asm__("rcr ah, 1");
    return eax1 + ebx2 - 0x1dd25451 + edx3 + ebp4 - 0x17371b5b - 0x69d5fc28 - 0x3ab8db36;
}

uint32_t log_size_4_var_057() {
    uint32_t ebx1;
    uint32_t eax2;

    ebx1 = 0x1531560d;
    eax2 = reinterpret_cast<uint32_t>(-0xe7c22716);
    __asm__("shrd bp, di, 0x1");
    *reinterpret_cast<signed char*>(&ebx1) = -90;
    __asm__("rcr ebp, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> 1);
    __asm__("xadd edx, esi");
    return eax2 + ebx1 + 0x6b7dfcc + (0xe5b83180 ^ eax2) + 0x184c0000 + 0x53747bbd - 0x371ca3bc - 0xffa27f7;
}

uint32_t log_size_4_var_059() {
    int32_t eax1;
    int32_t ecx2;
    uint32_t edx3;
    int32_t esi4;

    eax1 = 0x4c145a6a;
    ecx2 = 0x3bf0ba09;
    edx3 = 0x4f691ede;
    esi4 = 0x6a1c2349;
    *reinterpret_cast<int16_t*>(&ecx2) = 0x29a2;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1));
    *reinterpret_cast<signed char*>(&edx3) = reinterpret_cast<signed char>(-34 >> 0xa2);
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(0x6a * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    if (0) {
        esi4 = 0x9518c791;
    }
    __asm__("shrd si, bp, 0xe");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xa2 >> 0xa2) & 15);
    __asm__("shld ax, dx, cl");
    return eax1 - 0x292007 + ecx2 + edx3 + (0x2e561579 | edx3) + esi4 - 0x6ae7386f - 0x45fa434d;
}

uint32_t log_size_4_var_060() {
    int32_t ecx1;
    int32_t eax2;
    int32_t edx3;
    uint32_t ebx4;

    ecx1 = 0x8b22068;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
    __asm__("rcr cx, cl");
    eax2 = 0x4671741e * __intrinsic();
    edx3 = __intrinsic();
    ebx4 = *reinterpret_cast<unsigned char*>(&eax2);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) - reinterpret_cast<unsigned char>(47 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) < 48)));
    *reinterpret_cast<uint16_t*>(&eax2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax2) >> 21);
    return eax2 + ebx4 + ecx1 + edx3 + 0x65d87141 + (0x390d1b6e >> -37) - 0x73148abf - 0x4cd4c475;
}

int32_t log_size_4_var_062() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    int32_t edi4;

    eax1 = 0x16f7e9f7;
    ecx2 = 0xe535a4cc;
    edx3 = 0x39201e66;
    edi4 = 0xb4ac6137;
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(-9 * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1)))) | 0x53ac);
    if (!__intrinsic()) {
        edi4 = 0;
    }
    __asm__("rcl bl, 1");
    __asm__("rcr dx, 1");
    __asm__("ror edi, 0x90");
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1)) {
    }
    __asm__("rol eax, 0xcd");
    __asm__("shrd bx, di, 0x1");
    *reinterpret_cast<uint16_t*>(&edx3) = 0xd093;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) >> 1);
    return eax1 - 0x404e7b44 - 0x1aca0001 + edx3 + 0xeed86dd + edi4 + 0x168fde3c;
}

int32_t log_size_4_var_063() {
    int32_t eax1;
    int32_t ebx2;
    signed char tmp8_3;

    eax1 = 0xc75eac7d;
    ebx2 = 0x850bf8c2;
    __asm__("rol ebp, 1");
    *reinterpret_cast<int16_t*>(&ebx2) = 0x73d;
    __asm__("rol bp, 1");
    __asm__("rcr ah, 1");
    tmp8_3 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = tmp8_3;
    __asm__("xadd ax, ax");
    return eax1 * ebx2 + ebx2 + 0x60181e26 + __intrinsic() + 0x17fa7bd0 + 0x2e8020b7 - 0x641401e6 + 0x103151ee;
}

int32_t log_size_4_var_067() {
    int32_t ebx1;
    int32_t esi2;

    ebx1 = 0xd5764f8e;
    esi2 = 0x6bd30754;
    if (1) {
    }
    if (1) {
        esi2 = 0xb8731ad4;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = __undefined();
    __asm__("rol ch, 0x68");
    __asm__("rcr ecx, 1");
    __asm__("rcr cl, 1");
    __asm__("rcr edi, cl");
    return 0x216b0837 - ebx1 + __intrinsic() - 0x478ce52c + esi2 + (0x58219d16 + ebx1) - 0x4641ca1c;
}

int32_t log_size_4_var_068() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;

    ebx1 = 0x7db6d3b0;
    ecx2 = 0x5fd11637;
    edx3 = 0xb100bc4f;
    __asm__("ror bl, 0x8d");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> -19);
    __asm__("shld ebp, esi, cl");
    __asm__("shrd di, cx, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) - reinterpret_cast<unsigned char>(53 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) < 53))) & 28);
    *reinterpret_cast<int16_t*>(&ecx2) = 0x15e8;
    __asm__("ror ebx, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - reinterpret_cast<unsigned char>(79 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) < 79)));
    return 79 + ebx1 + ecx2 + edx3 + 0x41278cc8 - 0x3dabcd0a + 0xd3b0 + 0x99c6dd1;
}

int32_t log_size_4_var_070() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;
    int32_t edi4;
    int32_t eax5;
    unsigned char ah6;
    signed char tmp8_7;

    ebx1 = 0x6e64f43d;
    ecx2 = 0x1341670f;
    edx3 = 0x9153399e;
    edi4 = 0x1cfe34f;
    eax5 = 0x687987a8;
    __asm__("btc ecx, 0x49");
    __asm__("rcl di, 1");
    ah6 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) << 1);
    *reinterpret_cast<uint16_t*>(&edi4) = reinterpret_cast<uint16_t>(0x568c >> 92);
    __asm__("rol bl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) = reinterpret_cast<unsigned char>(ah6 - reinterpret_cast<unsigned char>(3 + reinterpret_cast<uint1_t>(ah6 < 4)));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1)) {
        tmp8_7 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = tmp8_7;
    }
    if (0) {
        edx3 = 0x134167cd;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx1) = 0x3418;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&eax5) = 0x67cd;
    }
    return eax5 + ebx1 + 0x134167cd + edx3 + 0x3c144f66 - 0x3d64cbe8 + edi4 - 0x7bf121c8;
}

uint32_t log_size_4_var_071() {
    uint32_t ebx1;
    uint32_t ecx2;
    uint1_t less3;
    signed char tmp8_4;

    ebx1 = 0x55a1f866;
    __asm__("shrd ebp, ebp, cl");
    *reinterpret_cast<uint16_t*>(&ebx1) = 0xfda8;
    ecx2 = 0x2128984;
    less3 = reinterpret_cast<uint1_t>(__intrinsic());
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(less3))) {
        ebx1 = 0x48b531fc;
    }
    if (less3) {
    }
    __asm__("bts ebp, 0xb8");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1)) {
        ecx2 = ebx1;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> *reinterpret_cast<signed char*>(&ecx2));
    if (*reinterpret_cast<signed char*>(&ebx1) == *reinterpret_cast<signed char*>(&ecx2)) {
        tmp8_4 = *reinterpret_cast<signed char*>(&ebx1);
        *reinterpret_cast<signed char*>(&ebx1) = *reinterpret_cast<signed char*>(&ecx2);
        *reinterpret_cast<signed char*>(&ecx2) = tmp8_4;
    }
    __asm__("ror cx, cl");
    return 0x5f481ea9 - ebx1 + ecx2 + __intrinsic() - 0x2241b99e + 0x26c43db0 + 0x5d2b15e9 + 0x39fb63e8;
}

uint32_t log_size_4_var_072() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int32_t ebp5;
    uint32_t esi6;

    eax1 = 0x2a1820ad;
    ebx2 = 0x4464cb3e;
    ecx3 = 0x4a967021;
    edx4 = 0x7f34a2cc;
    ebp5 = 0xd68c439;
    esi6 = 0xb1d5086a >> 33;
    __asm__("rol ch, 1");
    *reinterpret_cast<int16_t*>(&eax1) = 0x639c;
    *reinterpret_cast<int16_t*>(&edx4) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&ebp5) = reinterpret_cast<uint16_t>(0xc439 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi6) + reinterpret_cast<uint1_t>(0xc439 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&esi6))))));
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(0xff & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1));
    *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax1) == 0))));
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<unsigned char>(0x6a >> 0x8f);
    return eax1 + 0x4464cbc0 + ecx3 + edx4 + ebp5 + esi6 + 0x7d27994b - 0x1bc30a10;
}

int32_t log_size_4_var_076() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebx3;

    ebx1 = 0x23412d;
    edx2 = 0x522b1abe;
    __asm__("shld edx, ebx, cl");
    __asm__("bts esi, 0xfe");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - reinterpret_cast<unsigned char>(63 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) < 64)));
    ebx3 = ebx1 * 0xaa2bac91;
    *reinterpret_cast<unsigned char*>(&ebx3) = __intrinsic();
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1)) {
    }
    __asm__("shld di, dx, 0x5");
    __asm__("rcl esi, cl");
    return 0x1ed09abe + ebx3 - 0x4de4f283 + 0x522b1abe - 0x471fa638 + 0x2f13baef;
}

uint32_t log_size_4_var_077() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t ecx4;
    uint16_t ax5;

    eax1 = 0xb9dc354e;
    ebx2 = 0xd59f557d;
    edx3 = 0xa5c835c6;
    __asm__("bts si, 0xf3");
    *reinterpret_cast<signed char*>(&eax1) = -78;
    *reinterpret_cast<uint16_t*>(&ecx4) = 0xef14;
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) % 0xef14);
    *reinterpret_cast<int16_t*>(&ebx2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx4) + 1);
    __asm__("ror ah, 1");
    __asm__("btr eax, 0x34");
    __asm__("rcr dx, 1");
    __asm__("bsf eax, ebp");
    ax5 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) / 0xef14) & 0xf0f3);
    return *reinterpret_cast<unsigned char*>(&ax5) + ebx2 + 0x7dcbef14 + edx3 - 0x29a3dc4 + 0x1000600 - 0x10ec + 0x8659492;
}

uint32_t log_size_4_var_079() {
    uint32_t edi1;
    uint32_t edi2;
    uint32_t edx3;

    edi1 = 0x8bbc805c;
    *reinterpret_cast<uint16_t*>(&edi1) = reinterpret_cast<uint16_t>(0x805c >> -9);
    __asm__("ror si, 0x5e");
    __asm__("btc ecx, 0x47");
    __asm__("shrd ebp, ecx, cl");
    edi2 = edi1 ^ 0x114463bd;
    edx3 = 0xe4fb43c5 - edi2;
    __asm__("rol eax, 0x40");
    __asm__("rcl cx, 1");
    __asm__("ror edx, 1");
    __asm__("rcr ebp, cl");
    return 0x3c20e202 + (edx3 - (0x1ad23535 - reinterpret_cast<uint1_t>(edx3 < 0xe52dcacb))) + 0x43f5bdc0 + 0x43c408ce + edi2 + 0x3114fbbe;
}

uint32_t log_size_4_var_081() {
    int32_t esi1;
    uint32_t eax2;

    esi1 = 0x12235639;
    __asm__("rol eax, cl");
    __asm__("bsr edx, edx");
    __asm__("shrd ax, bp, cl");
    __asm__("rcl dh, 0xd0");
    __asm__("ror esi, cl");
    __asm__("ror cx, 1");
    eax2 = 0xf7531fc1 >> 73;
    *reinterpret_cast<uint16_t*>(&eax2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax2) | 0x5639);
    *reinterpret_cast<uint16_t*>(&esi1) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0x5639) >> 90);
    __asm__("shld bp, dx, cl");
    return eax2 + 0x126d4f3d + 0x1014bf0a - 0x45fa5f59 - 0x1f615b62 + esi1 + 0xbe390a8 + 0x6815fa0c;
}

uint32_t log_size_4_var_086() {
    int32_t eax1;
    uint32_t ecx2;
    int32_t edx3;
    int32_t ebp4;
    int32_t esi5;
    unsigned char dh6;
    uint32_t ecx7;
    int16_t dx8;

    eax1 = 0xc8fa234a;
    ecx2 = 0x10a38174;
    edx3 = 0xb4233e;
    ebp4 = 0x1d5829f8;
    esi5 = 0x41f567da;
    dh6 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) >> 0x74);
    __asm__("rol bh, 1");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<uint1_t>(!__intrinsic());
    ecx7 = ecx2 - (ecx2 + reinterpret_cast<uint1_t>(ecx2 < ecx2 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(dh6 + 0x73) < dh6)));
    __asm__("ror edx, cl");
    __asm__("ror di, 0x8b");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) - 6) + 1);
    *reinterpret_cast<int16_t*>(&ebp4) = reinterpret_cast<int16_t>(0x29f8 >> *reinterpret_cast<signed char*>(&ecx7));
    dx8 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx7) * 0x14bb);
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&dx8)));
    *reinterpret_cast<uint16_t*>(&esi5) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x67da + *reinterpret_cast<uint16_t*>(&edx3))));
    return eax1 - 0x517e4706 + ecx7 + edx3 + ebp4 + esi5 - 0x772abf11 - 0x60523ffe;
}

uint32_t log_size_4_var_090() {
    int32_t ebx1;
    int32_t ecx2;

    ebx1 = 0x57573615;
    ecx2 = 0xc1f29b6e;
    *reinterpret_cast<uint16_t*>(&ecx2) = 0xfbfe;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcl dx, cl");
    __asm__("bts ecx, ebx");
    __asm__("ror ch, 1");
    __asm__("rcl edi, 0x34");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(0xfe - reinterpret_cast<unsigned char>(86 + reinterpret_cast<uint1_t>(0xfe < reinterpret_cast<unsigned char>(86 + static_cast<uint1_t>(0xe862198a >> 0x15c5ffe2)))));
    return -0x3d570081 + ebx1 + ecx2 + 0x2c978630 + 0x15c5ffe2 + 0x3f1df09c + 0xe862198a + 0x9eab6d3;
}

uint32_t log_size_4_var_092() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t esi3;
    uint32_t edx4;
    int32_t esi5;

    ebx1 = 0x9d51a7c8;
    ecx2 = 0x8a32e3b4;
    esi3 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    __asm__("cdq ");
    __asm__("btc bp, bx");
    __asm__("shld dx, cx, 0xa");
    edx4 = 0x77db3d44;
    esi5 = esi3 - 0x9ecfa6e;
    if (!esi5) {
        *reinterpret_cast<int16_t*>(&edx4) = 0xa7;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 1) >> -56);
    return 0x22aeff59 - ecx2 + edx4 - 0x4d464830 + esi5 + 0x689c13a9 + 0x65679d7d;
}

uint32_t log_size_4_var_093() {
    int32_t ecx1;
    uint32_t edx2;
    uint32_t eax3;
    uint32_t edx4;
    uint32_t ebx5;
    unsigned char tmp8_6;

    ecx1 = 0xb2a847e7;
    edx2 = 0x13f67452;
    eax3 = 0xa6b1609b;
    __asm__("rcr bl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)) >> 0xe7);
    edx4 = edx2 | 0xc0da9c71;
    *reinterpret_cast<signed char*>(&edx4) = 7;
    if (0) {
        ecx1 = 0x3cc0046d;
    }
    if (1) {
        *reinterpret_cast<int16_t*>(&edx4) = 0xea86;
    }
    ebx5 = edx4 * 0xac7e822e;
    __asm__("rcl bp, cl");
    tmp8_6 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx5) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx5) + 1));
    *reinterpret_cast<unsigned char*>(&ebx5) = *reinterpret_cast<unsigned char*>(&ecx1);
    *reinterpret_cast<unsigned char*>(&ecx1) = tmp8_6;
    return 0xa6b1609b + ebx5 + ecx1 + edx4 + 0x75344cf6 - 0x864157a + 0x550c04ed + 0x3f9eac2;
}

int32_t log_size_4_var_094() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;

    eax1 = 0xcfcd7ab3;
    ebx2 = 0xde865c2d;
    edx3 = 0xe8359c7f;
    *reinterpret_cast<int16_t*>(&edx3) = __intrinsic();
    *reinterpret_cast<int16_t*>(&eax1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1);
    __asm__("shrd edx, ecx, cl");
    __asm__("xadd dl, bl");
    __asm__("rcl cx, 1");
    __asm__("shld edi, ebp, 0x1");
    __asm__("shrd ax, dx, 0x3");
    __asm__("btr ax, 0x1c");
    *reinterpret_cast<unsigned char*>(&edx3) = __intrinsic();
    return eax1 - 0x2179e3f4 + 0xa07cf43 + edx3 - 0x6a37a060 + 0x336ebd5e + 0x75e56577 + 0x159c7d37;
}

uint32_t log_size_4_var_098() {
    uint32_t ecx1;
    int32_t esi2;
    uint32_t ebp3;
    uint32_t edi4;

    ecx1 = 0x5fe699db;
    esi2 = 0x1b478ce0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1);
    __asm__("bsr ebp, ebx");
    ebp3 = reinterpret_cast<uint32_t>(0xb899ffd6 >> -33);
    edi4 = 0x6ddb34b1 - ecx1;
    *reinterpret_cast<uint16_t*>(&edi4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi4) - reinterpret_cast<uint16_t>(0x61fe + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi4) < 0x61fe)));
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp3) >> 0x68);
    __asm__("xadd ebx, ebx");
    __asm__("rcr bh, cl");
    *reinterpret_cast<int16_t*>(&esi2) = reinterpret_cast<int16_t>(0x8ce0 >> -47);
    return 0x2863d8e4 + ecx1 - 0x5ae98911 + ebp3 + esi2 + (edi4 ^ ecx1) - 0x4fb6b88d;
}

int32_t __assert_fail = 0x8049056;

void fun_8049050(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto __assert_fail;
}

int32_t log_size_4_var_001() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;

    eax1 = 0xd3037da7;
    ebx2 = 0xb6e23948;
    ecx3 = 0x558678fc;
    __asm__("ror ecx, 0x7b");
    __asm__("rcl ch, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebx2) = 0x9af0;
    }
    *reinterpret_cast<int16_t*>(&eax1) = -0x3ed3;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("xadd ebp, edi");
    __asm__("shrd ecx, eax, cl");
    __asm__("cdq ");
    return eax1 + ebx2 + ecx3 + (0xd4819af0 >> *reinterpret_cast<unsigned char*>(&ecx3)) + 0x1805070 - 0x1d6ba6bd - 0x400c4b5f;
}

uint32_t log_size_4_var_004() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int1_t zf5;

    eax1 = 0x19cdeb05;
    ebx2 = 0xd9ade50;
    ecx3 = 0xd670ba56;
    edx4 = 0x6a8480d5;
    __asm__("rol dh, 1");
    __asm__("shld esi, ecx, 0x1");
    __asm__("ror dx, 0x10");
    __asm__("ror edx, 0xff");
    __asm__("shrd bx, cx, 0x1");
    __asm__("rcr bp, 0x11");
    __asm__("shld dx, dx, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = reinterpret_cast<uint1_t>(!zf5);
    __asm__("shrd esi, ebx, 0x1");
    __asm__("ror cx, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    return 0x19cdeb05 + ebx2 - 0x298f45aa + edx4 + (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) - 0x298f45aa + 1) + 0x6b70d9e5 - 0x7eebaea0 + 0x6a296740;
}

int32_t log_size_4_var_009() {
    int32_t ebx1;
    int32_t ecx2;

    ebx1 = 0xffa5ca11;
    ecx2 = 0x88221d85;
    __asm__("shrd ebx, ecx, 0x1");
    __asm__("ror bp, 0xa4");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = __intrinsic();
    __asm__("btc edi, 0xc5");
    *reinterpret_cast<int16_t*>(&ecx2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx1) * 0x17fb);
    return 0x13b1c0e8 + ebx1 + ecx2 + 0xb0e00e1 - 0x155ee944 + 0x41c029b4 + 0x1ca5c90e + 0x2d716b4e;
}

uint32_t log_size_4_var_013() {
    int32_t eax1;
    int32_t ecx2;
    uint32_t edx3;
    int1_t less4;

    eax1 = 0xcf307849;
    ecx2 = 0x19674299;
    __asm__("btr eax, ebp");
    edx3 = 0x85;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) - 0x7b) + 1);
    __asm__("shrd bp, si, 0xf");
    less4 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) < 13;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) - 13);
    if (less4) {
        *reinterpret_cast<int16_t*>(&ecx2) = 0;
    }
    __asm__("rcr ax, 1");
    __asm__("ror edi, 0xe0");
    return eax1 + 0xc4d0000 + ecx2 + edx3 + 0xfe85 + 0x99 + 0x3052979f - 0x592c1220;
}

int32_t log_size_4_var_019() {
    int32_t ecx1;
    int32_t edx2;

    ecx1 = 0x80665a8a;
    edx2 = 0xbc84d463;
    *reinterpret_cast<int16_t*>(&edx2) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1))))));
    __asm__("ror dl, cl");
    __asm__("xadd edi, ecx");
    __asm__("btc edx, 0x79");
    __asm__("shrd edi, edi, 0xd7");
    return 0x62edf7e6 - edx2 + 0x35ebbebb + 0x14bf1474 - 0xe6b6b53 - 0xd4e65b1;
}

uint32_t log_size_4_var_022() {
    int32_t eax1;
    int32_t edi2;
    int32_t edx3;
    int16_t ax4;
    uint32_t ecx5;

    eax1 = 0x2b5b4976;
    edi2 = 0x83f52d8;
    __asm__("ror ecx, cl");
    *reinterpret_cast<int16_t*>(&edi2) = reinterpret_cast<int16_t>(0x52d8 >> 0xff8c);
    edx3 = 0xcd888815;
    ax4 = 0xa7b4;
    ecx5 = 0xd9441cf >> -49;
    __asm__("shrd ebx, esi, 0xfe");
    *reinterpret_cast<unsigned char*>(&ax4) = reinterpret_cast<unsigned char>(0xb4 >> 47);
    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx5) & 15);
    __asm__("shrd si, bp, cl");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(ax4 * *reinterpret_cast<int16_t*>(&ecx5));
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(__intrinsic() + 0x701e) + 1);
    return eax1 + 0x29d284dd + ecx5 + edx3 + 0x7c24e0bd - 0x67fa5e3f + edi2 - 0x75e6dcb2;
}

uint32_t log_size_4_var_025() {
    int32_t ebx1;
    int32_t edx2;
    uint32_t esi3;
    int32_t edi4;
    uint16_t di5;
    int32_t edx6;

    ebx1 = 0x8362ba8;
    edx2 = 0xe1e794ad;
    esi3 = 0xa7864a0a;
    edi4 = 0x575af7d1;
    di5 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1)));
    __asm__("shld dx, dx, 0x6");
    *reinterpret_cast<int16_t*>(&esi3) = -0x4a09;
    __asm__("bts di, 0x4");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) + 0x94)));
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1));
    *reinterpret_cast<uint16_t*>(&edi4) = reinterpret_cast<uint16_t>(di5 >> 40);
    __asm__("ror ch, 0x7e");
    edx6 = edx2 - 1;
    *reinterpret_cast<uint16_t*>(&edx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx6) & 0xb8db);
    __asm__("rcl esi, 1");
    return 0x63b59b2f + ebx1 - 0x311710d8 + edx6 - 0x3f783d93 + (esi3 - (0x175d24e4 + reinterpret_cast<uint1_t>(esi3 < 0x175d24e4))) + edi4 - 0x54f1232a;
}

int32_t log_size_4_var_028() {
    int32_t edi1;

    edi1 = 0xfcb597e5;
    __asm__("bsr edi, ebx");
    *reinterpret_cast<uint16_t*>(&edi1) = reinterpret_cast<uint16_t>(0x97e5 >> -89);
    __asm__("rcr dl, 1");
    __asm__("rcr cx, 1");
    __asm__("lahf ");
    __asm__("ror bx, cl");
    return 0x1e4c0f35 - edi1 + 0x1e4d41d2;
}

int32_t log_size_4_var_031() {
    int32_t edx1;
    int32_t ebx2;

    edx1 = 0x15f1f60f;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) ^ 60);
    __asm__("rcr bl, 1");
    __asm__("btc cx, bp");
    ebx2 = 0xd8b729f6;
    __asm__("rcr eax, cl");
    __asm__("rol dx, cl");
    __asm__("ror bl, cl");
    __asm__("btr edx, eax");
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx2) = 0x29f6;
    }
    if (1) {
        ebx2 = 0xb301935b;
    }
    return 0xd66e8d2 + ebx2 - 0xe6d0213 + edx1 + 0x42195f93 + 0x76683afd - 0x4cfe6ca5 - 0x25f3c6ae;
}

uint32_t log_size_4_var_040() {
    int32_t eax1;
    int32_t edx2;
    int32_t esi3;
    int32_t edi4;
    int32_t ecx5;
    uint1_t cf6;
    uint32_t tmp32_7;

    eax1 = 0xf4b1c303;
    edx2 = 0xbceaa911;
    esi3 = 0x92604c0a;
    edi4 = 0xcdca6336;
    *reinterpret_cast<int16_t*>(&esi3) = 0xf51b;
    __asm__("rcr esi, 1");
    if (__intrinsic()) {
    }
    ecx5 = 0x10f0d127;
    *reinterpret_cast<int16_t*>(&ecx5) = 0xd126;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic())))) {
        *reinterpret_cast<int16_t*>(&ecx5) = 0x9125;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&esi3) = 0x6336;
        *reinterpret_cast<int16_t*>(&edi4) = 0xf51b;
    }
    cf6 = reinterpret_cast<uint1_t>(0x5640 < reinterpret_cast<uint16_t>(0x39d - __intrinsic()));
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(0x5640 - reinterpret_cast<uint16_t>(0x39d - cf6));
    tmp32_7 = 0x709da96 + cf6;
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(17 - reinterpret_cast<unsigned char>(82 + reinterpret_cast<uint1_t>(17 < reinterpret_cast<unsigned char>(82 + reinterpret_cast<uint1_t>(tmp32_7 < 0xb1759125)))));
    return eax1 + tmp32_7 + ecx5 + edx2 + (0xad2a552 - edx2) + esi3 + edi4 + 0x6d564a2d;
}

int32_t log_size_4_var_044() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;

    eax1 = 0x5653cc79;
    ebx2 = 0xff2b1bde;
    edx3 = 0xa90aded8;
    __asm__("ror bp, cl");
    *reinterpret_cast<signed char*>(&ebx2) = reinterpret_cast<signed char>(-34 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    __asm__("rol ax, cl");
    __asm__("rcr ch, 1");
    __asm__("bts esi, eax");
    __asm__("shld edi, ebx, 0x1");
    if (1 == __intrinsic()) {
        edx3 = 0xa71ae0e4;
    }
    __asm__("rcl bp, 1");
    return 0x5653d772 + ebx2 + 0x2e2b2530 + edx3 - 0xc59bd86 - 0x58e51f1c + 0x297cec68 - 0x2a70aacf;
}

uint32_t log_size_4_var_046() {
    uint32_t ebx1;
    int32_t eax2;
    uint32_t edx3;

    __asm__("btc ax, dx");
    ebx1 = 0x2200000;
    eax2 = 0x2197f16b;
    edx3 = 0xeeb72c1 >> -83;
    *reinterpret_cast<uint16_t*>(&eax2) = 1;
    *reinterpret_cast<int16_t*>(&edx3) = 0x1ae5;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr dl, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) + 1);
    return eax2 + ebx1 - 0x3e463a22 + edx3 - 0x266b297a - 0x231f63e7 + 0x259bed51 + 0x3e7cc3db;
}

uint32_t log_size_4_var_051() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t esi4;

    eax1 = 0x683c143d;
    ebx2 = 0x221142eb;
    edx3 = 0x52d1ceee;
    esi4 = 0xcd13f3ac;
    __asm__("rol cx, 0x78");
    *reinterpret_cast<int16_t*>(&eax1) = 0x27fe;
    if (0) {
        esi4 = 0x7674db8f;
    }
    __asm__("btc ax, 0x46");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) + 1);
    __asm__("ror ebp, 0x71");
    *reinterpret_cast<int16_t*>(&ebx2) = reinterpret_cast<int16_t>(0x42eb - *reinterpret_cast<int16_t*>(&edx3));
    __asm__("rcl ebp, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    __asm__("shld ebx, edi, 0x4a");
    return eax1 + ebx2 + 0x7674db8f + edx3 + *reinterpret_cast<uint16_t*>(&esi4) + esi4 - 0x2bd3a6e4 - 0x1890704b;
}

uint32_t log_size_4_var_056() {
    uint32_t ebx1;

    __asm__("shld ecx, ebp, cl");
    __asm__("ror cl, 1");
    ebx1 = 0x5aa1c27b;
    __asm__("btc ecx, ecx");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> 1);
    __asm__("ror ebp, cl");
    __asm__("bsr ebx, ebp");
    if (__intrinsic()) {
    }
    __asm__("rcl cl, 0x5d");
    return 0x7c8bb93e + ebx1 + 0x5c97a7d3 + 0x56fa9dc + -0xcd75d69b - 0x4e530364 + 0x455f5098 - 0x7a0ef62;
}

uint32_t log_size_4_var_058() {
    int32_t ebx1;
    int32_t ecx2;
    uint32_t edx3;
    uint32_t esi4;
    uint32_t edx5;

    ebx1 = 0x8345c6ab;
    ecx2 = 0x22c3f484;
    edx3 = 0x3901c419;
    esi4 = 0x1e151a6f;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = 1;
    if (0) {
        esi4 = 0x3901c419;
    }
    __asm__("cdq ");
    if (0) {
        *reinterpret_cast<signed char*>(&ebx1) = 25;
        *reinterpret_cast<signed char*>(&edx3) = -85;
    }
    edx5 = edx3 - (0x163d274d + reinterpret_cast<uint1_t>(edx3 < 0x163d274e));
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(0xf484 >> 89);
    *reinterpret_cast<uint16_t*>(&edx5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx5) >> 1);
    __asm__("rcl bh, 1");
    *reinterpret_cast<int16_t*>(&esi4) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi4) * 0xc8fe);
    *reinterpret_cast<int16_t*>(&ebx1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx1) * 0x2dfa);
    return 0x7ed93d33 + ebx1 + ecx2 + reinterpret_cast<int32_t>(~edx5) + 0x216fcfcc + esi4 - 0x49c471d2 - 0x30e0cb6c;
}

uint32_t log_size_4_var_061() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edx3;
    unsigned char cl4;
    unsigned char cl5;
    unsigned char tmp8_6;

    ebx1 = 0xf86c35a7;
    ecx2 = 0x9f2e7616;
    edx3 = 0x41590572;
    cl4 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    cl5 = reinterpret_cast<unsigned char>(cl4 & 15);
    __asm__("shld di, dx, cl");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) == cl5) {
        tmp8_6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1);
        cl5 = tmp8_6;
    }
    __asm__("rcl ah, 1");
    __asm__("rcr di, 0x36");
    __asm__("ror edi, cl");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(cl5 & 15);
    __asm__("shld ax, si, cl");
    return 0x50f79e3f + ecx2 + 0x41590547 - 0x2ab7090b + 0x72931984 + (0x4ce5f5d >> cl4) + 0x56a504d3;
}

int32_t log_size_4_var_064() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edi3;
    uint1_t cf4;
    int32_t edx5;

    ebx1 = 0x48e648;
    ecx2 = 0x1fb95733;
    edi3 = 0xd65a372e;
    cf4 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) < 51);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - 51);
    edx5 = reinterpret_cast<int16_t>(0x7c29 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx1) + reinterpret_cast<uint1_t>(0x7c29 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx1) + cf4))));
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(0x7c29) < reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx1) + cf4));
    __asm__("ror cx, cl");
    __asm__("ror eax, 1");
    __asm__("ror eax, 0x46");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(51 >> -87);
    *reinterpret_cast<uint16_t*>(&edi3) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx1) * 0xd720) ^ *reinterpret_cast<uint16_t*>(&ecx2));
    __asm__("ror dx, 0xf6");
    return 0xfa + ebx1 + ecx2 + edx5 - 0x6ee8b8fb + 0x5d3205fe + edi3 + 0x1b5b04cf;
}

int32_t log_size_4_var_069() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t edi3;

    ebx1 = 0x40a9801;
    ecx2 = 0x1d60ec03;
    edi3 = 0x2a5d3dff;
    __asm__("rcl ecx, 1");
    __asm__("shld bx, si, 0x1");
    if (0) {
        *reinterpret_cast<int16_t*>(&edi3) = 0;
    }
    __asm__("ror al, 1");
    __asm__("rol edx, cl");
    *reinterpret_cast<signed char*>(&ecx2) = reinterpret_cast<signed char>(3 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    __asm__("shrd di, bp, 0xf");
    *reinterpret_cast<int16_t*>(&ebx1) = reinterpret_cast<int16_t>(0x9853 >> 0x6d);
    return 0x5abcfe4c - ebx1 + ecx2 - 0x252ad02b + 0x6bc883d9 + 0x6cea0000 + edi3 + 0x6395a4ce;
}

int32_t log_size_4_var_073() {
    int32_t eax1;
    int32_t edx2;
    uint16_t ax3;
    int32_t ecx4;

    eax1 = 0x12de5fed;
    edx2 = 0x13468d6b;
    ax3 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(--19 * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1)))) | 0xc000);
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(ax3 / ax3);
    __asm__("xadd dl, bh");
    ecx4 = eax1;
    *reinterpret_cast<int16_t*>(&edx2) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(ax3 % ax3) >> *reinterpret_cast<signed char*>(&ecx4));
    __asm__("shld si, bx, 0xd");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx4) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx4) + 1));
    __asm__("btc di, si");
    __asm__("rcl edi, 1");
    return 0x56cc506b + ecx4 + edx2 + 1 + 0x79f7005e + 0x78e787d - 0x60447bd;
}

uint32_t log_size_4_var_078() {
    int32_t edx1;
    uint32_t esi2;
    int32_t eax3;
    uint32_t ecx4;
    uint32_t esi5;
    uint16_t ax6;

    edx1 = 0x9df68e8c;
    esi2 = 0xefd76027;
    eax3 = 0x12e0;
    *reinterpret_cast<signed char*>(&edx1) = reinterpret_cast<signed char>(0x8c >> -64);
    ecx4 = 0xbc80b331 >> 81;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xe0 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx4) + 1)) + 1);
    *reinterpret_cast<uint16_t*>(&esi2) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1);
    esi5 = esi2 >> *reinterpret_cast<unsigned char*>(&ecx4);
    __asm__("bts ecx, esi");
    ax6 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax3) + 1);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(ax6) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(ax6 == 0))) {
    }
    *reinterpret_cast<uint16_t*>(&eax3) = reinterpret_cast<uint16_t>(ax6 >> *reinterpret_cast<unsigned char*>(&ecx4));
    *reinterpret_cast<uint16_t*>(&esi5) = *reinterpret_cast<unsigned char*>(&ecx4);
    return eax3 + 0x1ff4690f + ecx4 + edx1 - 0x1ab66961 + esi5 + 0x5cbc1967 + 0x302bf26e;
}

int32_t log_size_4_var_080() {
    int32_t edx1;
    int32_t ebp2;
    int32_t eax3;

    edx1 = 0x3d71f03b;
    ebp2 = 0x85fb486f;
    *reinterpret_cast<int16_t*>(&edx1) = __intrinsic();
    eax3 = 0xee114009;
    if (__intrinsic()) {
        ebp2 = 0xee114009;
    }
    __asm__("shrd ax, cx, 0x1");
    __asm__("btc bx, di");
    __asm__("rcl edx, 1");
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1))));
    if (!*reinterpret_cast<unsigned char*>(&edx1)) {
    }
    return 0x592a118e + (0xbb04b8d2 - ebp2) + edx1 + ebp2 - 0x70b9c5c2 + 0x19980048 - 0x37ef3a76;
}

uint32_t log_size_4_var_082() {
    uint32_t eax1;

    __asm__("rol bp, 1");
    __asm__("xadd ebx, ebx");
    __asm__("shrd ax, bp, cl");
    __asm__("shrd eax, edi, cl");
    __asm__("shrd bx, cx, 0x1");
    __asm__("rcl dx, cl");
    eax1 = 0xcc11e77d >> -84;
    __asm__("btr ax, 0x79");
    *reinterpret_cast<signed char*>(&eax1) = 0x70;
    __asm__("xadd dx, bx");
    return eax1 - 0x67677190 - 0x5e51ebfb + 0x22257bd + 0x5a6176ae + 0x3bf7488c + 0x37b23c10 + 0x5cee97d7;
}

int32_t log_size_4_var_087() {
    int32_t ecx1;
    int32_t edi2;

    ecx1 = 0x2d00f3b7;
    edi2 = 0xa3da3148;
    __asm__("rol ecx, 1");
    __asm__("rol eax, 1");
    __asm__("rcl bx, 1");
    __asm__("shld dx, di, 0x1");
    *reinterpret_cast<uint16_t*>(&edi2) = reinterpret_cast<uint16_t>(0x3148 >> -73);
    __asm__("rcl cx, 0xbc");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) >> 1);
    return 0x75b17cff + ecx1 - 0x748835a0 + 0x4a5fe9a - 0x30b5b970 + edi2 - 0x51dee628;
}

int32_t log_size_4_var_091() {
    int32_t ebx1;
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    ebx1 = 0x673f3696;
    ebp2 = 0xc1ed7874;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >> 94);
    __asm__("bts ebx, ecx");
    edx3 = 0x7850cb2d;
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx1) - 0x5c48) + __intrinsic());
    __asm__("shrd di, ax, 0x1");
    __asm__("rcr esi, 0xd2");
    eax4 = 0x6751;
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(0xcb2d >> -87);
    __asm__("ror dh, 1");
    *reinterpret_cast<uint16_t*>(&eax4) = 0x2211;
    __asm__("rol ax, cl");
    *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax4) + 1));
    if (0) {
        *reinterpret_cast<uint16_t*>(&ebp2) = 0x2211;
        *reinterpret_cast<uint16_t*>(&eax4) = 0x7874;
    }
    return eax4 + ebx1 + 0x6e3328a9 + edx3 + ebp2 - 0x1399ac84 - 0xf13bf4b + 0x12fc4c4a;
}

int32_t log_size_4_var_095() {
    int32_t ecx1;

    ecx1 = 0xb8eb6a7;
    __asm__("rol bh, 0x51");
    __asm__("shrd edi, ecx, 0x1");
    __asm__("btc eax, 0xf0");
    __asm__("rol dx, cl");
    __asm__("shld cx, di, 0xa");
    __asm__("ror cx, 1");
    *reinterpret_cast<unsigned char*>(&ecx1) = __intrinsic();
    return 0x6799407a - -ecx1 + __intrinsic() + 0x2b4c8821 - 0x200301 - 0x11956b32 + 0x3d3a42fe;
}

int32_t log_size_4_var_099() {
    int32_t ecx1;

    ecx1 = 0x2047ae6d;
    __asm__("rcl dl, 1");
    __asm__("rcl edi, 1");
    __asm__("ror dl, 0xa2");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) ^ 0xbe) << 1);
    __asm__("rcr ax, 1");
    __asm__("rol eax, cl");
    __asm__("ror ecx, cl");
    return 0x7a58233f + ecx1 + 0x20a7fbc + 0xb8fa - 0x1ca00438 + 0x1323b8fa - 0x114a10a8;
}

uint32_t log_size_4_var_005() {
    int32_t ebp1;
    int32_t edi2;
    uint32_t edx3;
    int16_t dx4;
    int32_t eax5;

    ebp1 = 0xafa3649f;
    edi2 = 0xddfd8cc;
    edx3 = 0x39801c79;
    dx4 = -__intrinsic();
    eax5 = 0xa229f85;
    if (0) {
        ebp1 = 0xafa3649f;
    }
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebp1) = 79;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx3) + 1) = __intrinsic();
    if (1) {
        edi2 = ebp1;
    }
    *reinterpret_cast<int16_t*>(&eax5) = reinterpret_cast<int16_t>(5 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1));
    __asm__("btc esi, eax");
    *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx4) >> 79);
    return eax5 - 0x7a84b5ab + 0x7bbc004f + edx3 + ebp1 + 0x22a682c1 + edi2 + 0x39396838;
}

int32_t log_size_4_var_010() {
    int32_t esi1;
    int32_t edi2;
    int32_t ecx3;
    int32_t ebx4;
    int32_t eax5;

    esi1 = 0x9843f9dc;
    edi2 = 0x60153278;
    __asm__("rcl bx, 1");
    ecx3 = 0xcf2b437d >> 0x7d;
    if (0) {
        *reinterpret_cast<int16_t*>(&edi2) = 0x349c;
    }
    if (0) {
        esi1 = 0x922627d9;
    }
    ebx4 = 0x3c9dbfff;
    __asm__("rcl ecx, 0x75");
    eax5 = 0x922627d9 * edi2;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&edi2) = *reinterpret_cast<int16_t*>(&ecx3);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx4) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx4) + 1) + 1);
    __asm__("rcr edx, 1");
    return eax5 + ebx4 + ecx3 + __intrinsic() + esi1 + edi2 + 0x455d9a3a;
}

uint32_t log_size_4_var_020() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    uint32_t edx4;
    signed char tmp8_5;
    int16_t bx6;

    eax1 = 0x2f29066a;
    ebx2 = 0xb730e046;
    ecx3 = 0x8c2f18ce;
    __asm__("btc edi, ebx");
    __asm__("btc ebx, edx");
    __asm__("rcr eax, 1");
    edx4 = 0xf12;
    *reinterpret_cast<uint16_t*>(&edx4) = reinterpret_cast<uint16_t>(0xf12 - reinterpret_cast<uint16_t>(0x3dcd + reinterpret_cast<uint1_t>(0xf12 < reinterpret_cast<uint16_t>(0x3dcd + *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax1) + 1)))));
    __asm__("xadd ebp, edi");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1)) {
        tmp8_5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1) = tmp8_5;
    }
    *reinterpret_cast<signed char*>(&bx6) = 70;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx6) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1) - 84);
    *reinterpret_cast<int16_t*>(&ebx2) = reinterpret_cast<int16_t>(bx6 + 1);
    *reinterpret_cast<uint16_t*>(&eax1) = reinterpret_cast<uint16_t>(0x66a - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx4) + reinterpret_cast<uint1_t>(0x66a < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx4) + 1))));
    return eax1 + ebx2 - 0x73d0e732 + edx4 + (0xe324d93f - (0x73d0e732 - reinterpret_cast<uint1_t>(0xe324d93f < 0x73d0e732 - __intrinsic()))) + 0x523d0f12 - 0x762d32cf + 0x4ee061a2;
}

int32_t log_size_4_var_023() {
    int32_t ebx1;
    int32_t ecx2;

    ebx1 = 0xa59acaf;
    ecx2 = 0xc5c877e6;
    if (0x83 == *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1)) {
    }
    __asm__("rcr edx, 1");
    __asm__("shrd dx, di, 0xc");
    *reinterpret_cast<signed char*>(&ebx1) = reinterpret_cast<signed char>(-81 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    __asm__("bts edx, ebp");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = 0x82;
    __asm__("rcr esi, 0xe5");
    __asm__("btc ax, 0xdf");
    return 0x7316527d - ebx1 - 0x3a3788c2 + 0x4ae41576 - 0x7f655466 + 0x4fdb8de4 + 0x7de60389 + 0x3482ebbc;
}

uint32_t log_size_4_var_026() {
    uint32_t edx1;

    __asm__("rcr si, cl");
    __asm__("shrd dx, bp, 0xd");
    edx1 = 0;
    if (__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&edx1) = reinterpret_cast<uint16_t>(0 >> -19);
    __asm__("shrd ebp, ebp, 0x1");
    return 0x3011db87 - edx1 + 0x4b4d9c50 + 0x7b7aa463 - 0x66155d93;
}

uint32_t log_size_4_var_029() {
    uint32_t edx1;
    int32_t eax2;
    int32_t ecx3;

    edx1 = 0xa13fa97;
    __asm__("ror dx, cl");
    *reinterpret_cast<signed char*>(&edx1) = -84;
    eax2 = 0xc999dbf;
    ecx3 = 0x6819fefb;
    __asm__("btr bp, ax");
    if (0) {
        eax2 = 0x6819fefb;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1))))));
    return eax2 - 0x4d516641 + 0x6819fefb + edx1 + 0x1ddbd307 - 0x45c0d29d - 0xcef4fc8 + 0x3601727;
}

uint32_t log_size_4_var_047() {
    int32_t eax1;
    int32_t ebx2;
    int32_t esi3;
    uint32_t esi4;

    eax1 = 0xa184bc0a;
    ebx2 = 0x9e0f406a;
    esi3 = 0xd00f5fa4;
    __asm__("ror si, 0xcd");
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx2) = 0x48fa;
    }
    if (1) {
        esi3 = 0x1904dfae;
    }
    __asm__("rcr ebx, 1");
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax1) + 1)) {
    }
    esi4 = reinterpret_cast<uint32_t>(esi3 - 0x319c339c);
    *reinterpret_cast<unsigned char*>(&ebx2) = 0;
    return 0x5e7bfff6 - ebx2 + (0xf46a1463 & esi4) + 0x7a58e68b - 0x54f933e0 + esi4 + 0x1904dfae - 0x7ac11a77;
}

int32_t log_size_4_var_065() {
    int32_t ecx1;
    int32_t eax2;
    int32_t esi3;

    ecx1 = 0xd4d2761d;
    __asm__("btr si, 0x3f");
    eax2 = 0x1a727825;
    esi3 = 0;
    *reinterpret_cast<int16_t*>(&esi3) = reinterpret_cast<int16_t>(0 >> -73);
    __asm__("btr ax, 0xde");
    __asm__("rcl dl, 1");
    *reinterpret_cast<int16_t*>(&eax2) = reinterpret_cast<int16_t>(0x7825 >> 29);
    *reinterpret_cast<unsigned char*>(&ecx1) = 0xff;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) - *reinterpret_cast<signed char*>(&eax2));
    __asm__("rcr si, 1");
    return eax2 + 0x5f01dcc9 + ecx1 - 0x1ff11e6c + 0x59a32b0f + esi3 + 0x7bc9ba1f + 0x4d6864de;
}

uint32_t log_size_4_var_074() {
    uint32_t esi1;

    __asm__("rcr bx, 1");
    esi1 = 0xb010abea >> 54;
    __asm__("shrd cx, si, cl");
    __asm__("shrd eax, ecx, 0xa4");
    __asm__("bts ecx, 0xa0");
    __asm__("ror bh, 1");
    return 0x29d7c128 + (esi1 - (0x22e6209e - reinterpret_cast<uint1_t>(esi1 < 0xdd19df63))) + 0x56860000 - 0x69600993;
}

uint32_t log_size_4_var_083() {
    int32_t ecx1;
    int32_t edx2;

    ecx1 = 0x8d63a9f;
    edx2 = 0xf0d0b71c;
    __asm__("shld di, ax, 0x1");
    __asm__("shld cx, cx, cl");
    *reinterpret_cast<int16_t*>(&edx2) = reinterpret_cast<int16_t>(0xb71c >> -88);
    __asm__("bsr ebx, ecx");
    __asm__("btc eax, 0x23");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) - reinterpret_cast<unsigned char>(35 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) < 35)));
    *reinterpret_cast<unsigned char*>(&ecx1) = 15;
    __asm__("shld si, ax, cl");
    return 0xac871e8 - ecx1 + edx2 + 0x54651d3d + 0x72089217 + (0x1cfe37b0 >> -80) + 0x3feb22b6;
}

int32_t log_size_4_var_088() {
    int32_t ebx1;

    ebx1 = 0x7855398a;
    __asm__("shrd esi, eax, 0x1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - 1);
    __asm__("ror si, cl");
    __asm__("ror edx, 1");
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx1) >> 1);
    return 0x74860000 + ebx1 - 0x2accc410 + 0x62c10000 + 0x4beaedf0 - 0x738e1e83 - 0x28962fe4 + 0x23032cb5;
}

int32_t log_size_4_var_096() {
    int32_t ebx1;

    ebx1 = 0x3ed09836;
    __asm__("rcl bp, 0x82");
    *reinterpret_cast<signed char*>(&ebx1) = reinterpret_cast<signed char>(54 >> -79);
    __asm__("cwd ");
    __asm__("bsf ebp, ecx");
    __asm__("ror ebx, 1");
    __asm__("rcl dh, 0x8d");
    return 0x36290000 + ebx1 + 0x1e40 + 0x3a609a81 + 0x713b7565 - 0x7e3b281e + 0x4f1645b5 - 0x60cc2a3c;
}

int32_t log_size_4_var_066() {
    int32_t eax1;
    int32_t ecx2;

    eax1 = 0x3c335e92;
    __asm__("cwd ");
    *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(0x92 >> 0x95);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic())))) {
    }
    __asm__("lahf ");
    if (1) {
        *reinterpret_cast<int16_t*>(&eax1) = *reinterpret_cast<int16_t*>(&eax1);
    }
    ecx2 = eax1 + 0x2621653c + 0x2e9a7dfe;
    __asm__("shrd dx, di, 0xb");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax1) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    __asm__("btc edi, 0xe3");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1);
    __asm__("btc ebx, ebx");
    return eax1 + 0x66f15dc1 + ecx2 - 0x320053b6 + 0x1310b29e + (0xf6e23253 >> *reinterpret_cast<signed char*>(&ecx2)) + 0x51da5718 - 0x66feb23f;
}

int32_t log_size_4_var_075() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ecx3;
    int32_t edx4;
    int32_t esi5;

    eax1 = 0xf6dc3563;
    ebx2 = 0xa600a45;
    ecx3 = 0xeab758a2;
    edx4 = 0x4f19ff91;
    __asm__("ror edx, cl");
    esi5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1);
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(99 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1));
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ecx3) = 0xa00;
    }
    if (!__intrinsic()) {
        eax1 = 0xf1607a45;
    }
    *reinterpret_cast<signed char*>(&ecx3) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx2) + 1);
    __asm__("rcl ch, 1");
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    __asm__("btr ax, bx");
    return 0x152c + eax1 + ecx3 + edx4 + 0x39c7152c + esi5 - 0xe9f85bb - 0x60820b04;
}

uint32_t log_size_4_var_084() {
    int32_t eax1;
    int32_t ebx2;
    int32_t edx3;
    int32_t esi4;
    uint32_t edi5;
    uint16_t ax6;
    signed char tmp8_7;

    eax1 = 0x8a93fb24;
    ebx2 = 0xf5b77084;
    edx3 = 0x3eb00528;
    esi4 = 0xe600afdb;
    edi5 = 0xa29464a6 >> 0x72;
    __asm__("btr edx, ecx");
    *reinterpret_cast<uint16_t*>(&esi4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi5) * 0xb66a);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<uint16_t*>(&edi5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi5) | 0xc000);
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(0xfb24 % *reinterpret_cast<uint16_t*>(&edi5));
    ax6 = reinterpret_cast<uint16_t>(0xfb24 / *reinterpret_cast<uint16_t*>(&edi5));
    __asm__("ror eax, 0x7f");
    *reinterpret_cast<int16_t*>(&ebx2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx2) + 0x4c55);
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax6) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1));
    tmp8_7 = *reinterpret_cast<signed char*>(&ebx2);
    *reinterpret_cast<signed char*>(&ebx2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = tmp8_7;
    return eax1 + ebx2 + edx3 + 0x68a84137 + esi4 + edi5 + 0x67c818f8;
}

int32_t log_size_4_var_089() {
    int32_t edx1;
    int16_t dx2;
    uint1_t cf3;
    unsigned char tmp8_4;
    int32_t ebx5;

    edx1 = 0x8bb56323;
    dx2 = 0x7c44;
    cf3 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx2) + 1) < 0xbc);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx2) + 1) - reinterpret_cast<unsigned char>(68 - cf3));
    tmp8_4 = reinterpret_cast<unsigned char>(7 + cf3);
    *reinterpret_cast<unsigned char*>(&edx1) = tmp8_4;
    if (tmp8_4 >= 68) {
    }
    ebx5 = edx1;
    if (*reinterpret_cast<signed char*>(&edx1) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<int16_t*>(&ebx5) = 0;
    }
    __asm__("rcr dl, 0x9e");
    return 0x5113964e + ebx5 - 0x616ca3d + 0x3f12acaa - 0x3f01b82 - 0x2ce3da1c + 0x1b0ebcdb;
}

int32_t log_size_4_var_097() {
    int32_t ebx1;
    int32_t ecx2;
    unsigned char ch3;

    ebx1 = 0xaf4d0350;
    ecx2 = 0x863b81c9;
    __asm__("rol cl, cl");
    __asm__("btc edx, eax");
    __asm__("rcr cl, 1");
    ch3 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 0x92) + 1);
    if (reinterpret_cast<signed char>(ch3) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        ebx1 = 0x3f49d5b5;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(ch3 + 1);
    __asm__("shrd si, si, 0x1");
    __asm__("rcr dx, 1");
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx2) + *reinterpret_cast<int16_t*>(&ebx1))));
    __asm__("ror dl, 0x12");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) != *reinterpret_cast<signed char*>(&ecx2)) {
        *reinterpret_cast<uint16_t*>(&ecx2) = 0xde3a;
    }
    return 0x3f49d5b5 + ebx1 + ecx2 + 0x6c8f6ad0 - 0x4ff963c3 + 0x6a1f6ad0 - 0x547d21c6 + 0x58d563c8;
}

uint32_t log_size_4_var_085() {
    uint32_t ecx1;
    int32_t edx2;
    int32_t esi3;
    uint32_t edi4;
    uint32_t edx5;

    ecx1 = 0x784b6806;
    edx2 = 0xb1ef44ac;
    esi3 = 0x16a3a6ca;
    edi4 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1);
    *reinterpret_cast<signed char*>(&ecx1) = 12;
    __asm__("rcl ax, cl");
    __asm__("btc bp, 0xb1");
    edx5 = 0x1c5af88c;
    if (0) {
        ecx1 = edi4;
        edi4 = 0x784b680c;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) - reinterpret_cast<unsigned char>(0x7a + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) < reinterpret_cast<unsigned char>(0x7a + __intrinsic()))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1))));
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi3) = *reinterpret_cast<int16_t*>(&edx5);
    }
    return 0x27d3e467 - ecx1 + edx5 - 0x41cbfd07 + esi3 + edi4 + 0x7553f4e;
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
    fun_8049040(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2f60, ebx7 - 0x2f00, edx5, v4, eax6);
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

void fun_804c0a2() {
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
    ebx3 = ebx4 + 0x2f53;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804c0bf);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804c102() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804c10a() {
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

void fun_804c0fd() {
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
    uint32_t eax1;
    int32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    uint32_t eax14;
    int32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    int32_t eax24;
    int32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    int32_t eax28;
    int32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    int32_t eax37;
    int32_t eax38;
    uint32_t eax39;
    int32_t eax40;
    uint32_t eax41;
    int32_t eax42;
    uint32_t eax43;
    int32_t eax44;
    int32_t eax45;
    int32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    int32_t eax50;
    int32_t eax51;
    uint32_t eax52;
    int32_t eax53;
    int32_t eax54;
    int32_t eax55;
    int32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    int32_t eax63;
    int32_t eax64;
    int32_t eax65;
    int32_t eax66;
    int32_t eax67;
    int32_t eax68;
    int32_t eax69;
    int32_t eax70;
    int32_t eax71;
    uint32_t eax72;
    uint32_t eax73;
    int32_t eax74;
    uint32_t eax75;
    int32_t eax76;
    int32_t eax77;
    uint32_t eax78;
    uint32_t eax79;
    uint32_t eax80;
    int32_t eax81;
    uint32_t eax82;
    uint32_t eax83;
    uint32_t eax84;
    uint32_t eax85;
    uint32_t eax86;
    uint32_t eax87;
    int32_t eax88;
    int32_t eax89;
    int32_t eax90;
    uint32_t eax91;
    int32_t eax92;
    uint32_t eax93;
    uint32_t eax94;
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
