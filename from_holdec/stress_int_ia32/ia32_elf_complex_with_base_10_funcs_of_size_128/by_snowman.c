
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049117(int32_t a1, void** a2, int32_t a3) {
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

    eax1 = 0x804d018;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __assert_fail(0x804d018, v2);
        return eax3;
    }
}

uint32_t log_size_7_var_000() {
    uint32_t ebp1;
    uint32_t ecx2;
    uint16_t dx3;
    uint32_t ebx4;
    uint32_t edi5;
    int32_t eax6;
    unsigned char bh7;
    unsigned char tmp8_8;
    uint32_t ecx9;
    int32_t eax10;
    int32_t edx11;
    int16_t cx12;
    int32_t eax13;
    uint32_t edi14;
    uint32_t eax15;
    int32_t edx16;
    uint16_t dx17;
    unsigned char tmp8_18;
    uint32_t esi19;
    unsigned char tmp8_20;
    uint32_t ecx21;

    ebp1 = 0x6c6cbaf6;
    __asm__("shrd bp, dx, cl");
    ecx2 = 0xaa0ecfdb;
    __asm__("rol dx, 0x2");
    __asm__("bts bp, 0x45");
    __asm__("rcr bp, 1");
    __asm__("rcr ah, 1");
    dx3 = 0x509;
    __asm__("shld dx, di, 0x1");
    __asm__("bts ebp, ebx");
    ebx4 = 0x8ec7;
    __asm__("rcr ch, 0xc6");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx3) + 1)) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx3) + 1);
    }
    __asm__("btr dx, ax");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(36 >> 36);
    __asm__("rol dx, 0xb4");
    edi5 = 0x550773f6;
    __asm__("rcr ecx, 1");
    __asm__("btr di, 0xfa");
    *reinterpret_cast<uint16_t*>(&ebp1) = reinterpret_cast<uint16_t>(0x1eae - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ecx2) + reinterpret_cast<uint1_t>(0x1eae < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ecx2) + __intrinsic()))));
    __asm__("bsf edx, ecx");
    eax6 = 0x4a8d5eb1;
    __asm__("xadd bp, cx");
    if (1) {
    }
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx2) << *reinterpret_cast<unsigned char*>(&ecx2)) | 0xc0);
    *reinterpret_cast<uint16_t*>(&eax6) = reinterpret_cast<uint16_t>(0x1eb1 / reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ecx2))));
    __asm__("xadd dl, cl");
    __asm__("rol cl, 1");
    __asm__("rcr dx, 0x64");
    bh7 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1) >> 35) + 98) + 1);
    *reinterpret_cast<unsigned char*>(&ebx4) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(bh7) < reinterpret_cast<signed char>(0) != __intrinsic());
    __asm__("ror ecx, 0xa3");
    tmp8_8 = *reinterpret_cast<unsigned char*>(&eax6);
    *reinterpret_cast<unsigned char*>(&eax6) = bh7;
    ecx9 = 0;
    __asm__("btr di, 0xda");
    eax10 = eax6 * 0xe5ff8ec7;
    edx11 = __intrinsic();
    __asm__("rcl esi, 1");
    *reinterpret_cast<unsigned char*>(&eax10) = __intrinsic();
    __asm__("rcl ch, 1");
    __asm__("btr ebp, esi");
    *reinterpret_cast<uint16_t*>(&edi5) = 0xfff6;
    __asm__("xadd edi, edi");
    *reinterpret_cast<signed char*>(&edx11) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx11) + reinterpret_cast<signed char>(reinterpret_cast<signed char>(tmp8_8) >> 1));
    if (ebp1 == ebp1) {
        ebp1 = ebp1;
    }
    if (__intrinsic()) {
        ebx4 = ebp1;
    }
    if (!__intrinsic()) {
        edi5 = ebp1;
    }
    *reinterpret_cast<unsigned char*>(&cx12) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0) >> -49);
    __asm__("rcr eax, 1");
    __asm__("rcr al, 1");
    *reinterpret_cast<uint16_t*>(&ebp1) = *reinterpret_cast<uint16_t*>(&edx11);
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebp1) = *reinterpret_cast<uint16_t*>(&eax10);
    }
    __asm__("shld eax, eax, 0x1");
    eax13 = eax10 + 0x21e85ec2;
    __asm__("rcr esi, cl");
    *reinterpret_cast<int16_t*>(&eax13) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax13) << *reinterpret_cast<unsigned char*>(&cx12));
    __asm__("ror ebx, 1");
    edi14 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edi5) >> 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&ebx4) = *reinterpret_cast<uint16_t*>(&ebx4);
    eax15 = eax13 * edi5;
    edx16 = 0xe5ff8ec7;
    __asm__("rcr dl, 1");
    dx17 = reinterpret_cast<uint16_t>(0x8ec7 | *reinterpret_cast<uint16_t*>(&ebx4));
    tmp8_18 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax15) + 1))));
    esi19 = __intrinsic() - (0x5f3452e5 - reinterpret_cast<uint1_t>(__intrinsic() < 0x5f3452e5 - reinterpret_cast<uint1_t>(tmp8_18 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1))));
    __asm__("rcl dh, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1) = reinterpret_cast<unsigned char>(tmp8_18 ^ 36);
    tmp8_20 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx12) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax15) + 1));
    *reinterpret_cast<unsigned char*>(&ecx9) = tmp8_20;
    if (tmp8_20 >= *reinterpret_cast<unsigned char*>(&cx12)) {
        *reinterpret_cast<int16_t*>(&esi19) = *reinterpret_cast<int16_t*>(&esi19);
    }
    __asm__("btr ebp, edi");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx16) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx17) + 1) + 40) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx9) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic()) + 53);
    __asm__("ror ebx, 1");
    ecx21 = ecx9 + edi14 + 1;
    if (reinterpret_cast<int32_t>(ecx21) >= reinterpret_cast<int32_t>(0)) {
        ecx21 = edi14;
    }
    *reinterpret_cast<signed char*>(&edx16) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&dx17) >> -71);
    __asm__("bsf ebx, eax");
    *reinterpret_cast<uint16_t*>(&ecx21) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx21) + *reinterpret_cast<int16_t*>(&edi14))));
    return eax15 + ebx4 + ecx21 + edx16 + (reinterpret_cast<int32_t>(ebp1) >> *reinterpret_cast<unsigned char*>(&cx12)) + esi19 + edi14 + 0x467e117b;
}

uint32_t log_size_7_var_001() {
    uint32_t ecx1;
    uint32_t eax2;
    int32_t edx3;
    uint16_t cx4;
    uint32_t ebp5;
    uint32_t edi6;
    uint32_t edx7;
    uint16_t bp8;
    uint32_t ebx9;
    uint16_t bp10;

    __asm__("btr ax, di");
    __asm__("shld dx, bx, cl");
    __asm__("bsf edi, edi");
    if (!__intrinsic()) {
    }
    __asm__("btc cx, 0x5c");
    __asm__("rcl esi, 0x1a");
    __asm__("ror bp, 1");
    __asm__("rcl ebx, 1");
    __asm__("rcl edx, 0x8a");
    __asm__("rol bl, cl");
    ecx1 = 0xd278728;
    __asm__("rcl si, 1");
    __asm__("rcr edx, 1");
    __asm__("rcr esi, 0xf6");
    eax2 = 0;
    edx3 = __intrinsic();
    __asm__("rcr ecx, cl");
    __asm__("rcr ecx, 1");
    __asm__("bts ecx, 0xae");
    cx4 = 0x8728;
    *reinterpret_cast<uint16_t*>(&eax2) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx4) + 1);
    __asm__("ror cl, cl");
    __asm__("rcr eax, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) = 0;
    __asm__("rcr bh, 0x26");
    *reinterpret_cast<uint16_t*>(&ecx1) = 0x8515;
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx3) + 0x5bd0) + __intrinsic());
    ebp5 = 0x60000400;
    if (__intrinsic()) {
        eax2 = eax2;
    }
    edi6 = 0xffff8515;
    if (1) {
        *reinterpret_cast<uint16_t*>(&eax2) = 0x8515;
    }
    __asm__("btr si, si");
    *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx3) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
    __asm__("rcr edx, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0) >> -85);
    __asm__("rol edx, 1");
    __asm__("rcl bl, 1");
    edx7 = reinterpret_cast<uint32_t>(~edx3);
    __asm__("rol bh, 1");
    __asm__("ror bl, 1");
    *reinterpret_cast<uint16_t*>(&eax2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax2) * 0x8515);
    *reinterpret_cast<uint16_t*>(&edx7) = __intrinsic();
    __asm__("bts edi, edx");
    __asm__("rcl bx, cl");
    __asm__("rcr ebx, 1");
    bp8 = 0x92a;
    if (edx7 < 0x11b12f60) {
        edi6 = eax2;
    }
    __asm__("shld dx, ax, 0x4");
    *reinterpret_cast<uint16_t*>(&edi6) = 0;
    __asm__("bts ax, 0x94");
    __asm__("ror edi, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) >> 21);
    if (0) {
        bp8 = 0;
        *reinterpret_cast<uint16_t*>(&edi6) = 0x92a;
    }
    ebx9 = eax2 << 8 & 0xff0000 | eax2 << 24;
    *reinterpret_cast<uint16_t*>(&edx7) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&edx7))) + __intrinsic());
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx9) + 1) = 0;
    __asm__("btc edi, ebp");
    __asm__("xadd eax, eax");
    if (!__undefined()) {
        *reinterpret_cast<uint16_t*>(&ecx1) = 0;
    }
    bp10 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bp8 - 0x1810) + __intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx7) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcl edi, 1");
    __asm__("rcr esi, 1");
    *reinterpret_cast<uint16_t*>(&ecx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx1) - reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx1) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(ecx1 < 0x83f6d10)))))));
    *reinterpret_cast<uint16_t*>(&ebp5) = reinterpret_cast<uint16_t>(bp10 - reinterpret_cast<uint16_t>(bp10 + reinterpret_cast<uint1_t>(bp10 < reinterpret_cast<uint16_t>(bp10 + 1))));
    return 0x1810 - ebx9 + ecx1 + edx7 + ebp5 + 0xf5fd711 + edi6 + 0x7070bc40;
}

uint32_t log_size_7_var_002() {
    int32_t ebx1;
    int32_t ecx2;
    int32_t ebp3;
    uint32_t edi4;
    int32_t eax5;
    uint32_t ecx6;
    uint32_t ebx7;
    int32_t edx8;
    int32_t edx9;
    uint32_t eax10;
    uint32_t tmp32_11;
    uint32_t eax12;
    uint16_t ax13;
    uint32_t ecx14;
    uint32_t eax15;
    uint1_t cf16;
    uint32_t eax17;
    uint16_t si18;
    uint32_t ebp19;
    uint32_t edx20;
    uint32_t ecx21;
    uint32_t edi22;
    uint16_t ax23;
    uint16_t ax24;
    int1_t sf25;
    uint32_t ecx26;
    unsigned char tmp8_27;
    uint32_t esi28;

    ebx1 = 0x3add7b46;
    ecx2 = 0xe4d88c5e;
    ebp3 = 0x3c96e3e3;
    edi4 = 0xa3f2fd7f;
    eax5 = 0xad8acf30;
    *reinterpret_cast<int16_t*>(&ecx2) = 0x18bc;
    *reinterpret_cast<unsigned char*>(&ecx2) = 12;
    __asm__("shld cx, bp, cl");
    __asm__("shld ebp, esi, 0xe4");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) != 70) {
    }
    __asm__("ror edi, cl");
    __asm__("ror cl, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) >> 1);
    *reinterpret_cast<uint16_t*>(&edi4) = 0x510e;
    ecx6 = ecx2 - 0x527530d0 + __intrinsic();
    *reinterpret_cast<uint16_t*>(&ecx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx6) | 0x20bf);
    __asm__("rcr edx, 1");
    __asm__("rcl di, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    ebx7 = ebx1 + 1;
    __asm__("rcl dx, 1");
    if (1) {
        ebp3 = 0xb271e3e3;
    }
    __asm__("bts ebx, eax");
    __asm__("ror al, 0x38");
    *reinterpret_cast<uint16_t*>(&eax5) = 0xff72;
    __asm__("rcr dl, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx7) + 1) - reinterpret_cast<unsigned char>(0x72 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx7) + 1) < 0x72)));
    __asm__("shrd edx, ecx, 0xed");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx6) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx6) + 1) >> 1);
    edx8 = 0x7b56 >> *reinterpret_cast<signed char*>(&ecx6);
    *reinterpret_cast<uint16_t*>(&ebx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx7) ^ *reinterpret_cast<uint16_t*>(&edx8));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    edx9 = __intrinsic();
    __asm__("rcr ebx, 1");
    __asm__("rol cx, 1");
    eax10 = eax5 * ebx7 + 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax10) + 1) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax10) < reinterpret_cast<int32_t>(0) == __intrinsic());
    __asm__("rol si, cl");
    if (*reinterpret_cast<int16_t*>(&edx9) < *reinterpret_cast<int16_t*>(&ebx7)) {
        *reinterpret_cast<uint16_t*>(&edi4) = *reinterpret_cast<uint16_t*>(&ecx6);
    }
    if (0) {
        tmp32_11 = ebx7;
        ebx7 = ecx6;
        ecx6 = tmp32_11;
    }
    __asm__("rol ax, cl");
    *reinterpret_cast<int16_t*>(&ebp3) = static_cast<int16_t>(ecx6 + eax10 + 18);
    eax12 = eax10 * edi4;
    ax13 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax12) >> -55);
    __asm__("xadd ebp, ebp");
    ecx14 = ebp3 + ebp3 * 4 + 29;
    *reinterpret_cast<unsigned char*>(&ebx7) = -*reinterpret_cast<unsigned char*>(&ebx7);
    *reinterpret_cast<uint16_t*>(&ecx14) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx14) - reinterpret_cast<uint16_t>(0x5474 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx14) < 0x5474)));
    __asm__("rol eax, 1");
    __asm__("rcr bh, 1");
    *reinterpret_cast<uint16_t*>(&edi4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi4) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi4) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi4) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi4) + 1))));
    *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx14) | 0xd9);
    *reinterpret_cast<uint16_t*>(&eax12) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax13)));
    eax15 = eax12 - 0x1dd4c5e1;
    cf16 = reinterpret_cast<uint1_t>(eax15 < ecx14);
    eax17 = eax15 - (ecx14 + cf16);
    *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax17) < reinterpret_cast<int32_t>(static_cast<uint32_t>(cf16)));
    __asm__("btc edx, ecx");
    __asm__("rol edx, 1");
    si18 = *reinterpret_cast<unsigned char*>(&ebx7);
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebx7) = *reinterpret_cast<uint16_t*>(&eax17);
    }
    ebp19 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp3) * 0xf4a7)));
    *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx14) >> -35);
    edx20 = 0x11b80ca4;
    __asm__("ror al, 1");
    ecx21 = ecx14 + 0xdd809614;
    __asm__("rcl al, 1");
    __asm__("btc ebx, ecx");
    edi22 = edi4 - 0x190d5b26;
    *reinterpret_cast<uint16_t*>(&ecx21) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx21) - 0x4414)));
    __asm__("ror edi, 0x44");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx20) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx20) + 1) ^ 0xfd);
    if (!__intrinsic()) {
        ebx7 = ecx21;
    }
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx20) + 1)) {
        edi22 = edx20;
    }
    *reinterpret_cast<uint16_t*>(&edi22) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi22) + *reinterpret_cast<uint16_t*>(&ebp19));
    __asm__("rcr bx, cl");
    *reinterpret_cast<unsigned char*>(&ecx21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx21) | 0xc0);
    ax23 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax17) & 0x3fff);
    ax24 = reinterpret_cast<uint16_t>(ax23 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ecx21)));
    *reinterpret_cast<unsigned char*>(&ax24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax24) - 0x9b);
    *reinterpret_cast<uint16_t*>(&edx20) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax23 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&ecx21))) + *reinterpret_cast<uint16_t*>(&edi22)) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(ax24 >> 51)));
    sf25 = *reinterpret_cast<int16_t*>(&edx20) < reinterpret_cast<int16_t>(0);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx21) + 1) = reinterpret_cast<uint1_t>(sf25 == __intrinsic());
    if (!sf25) {
        *reinterpret_cast<uint16_t*>(&ebx7) = si18;
    }
    __asm__("ror ch, cl");
    __asm__("rol dh, cl");
    __asm__("cdq ");
    ecx26 = ecx21 << 31;
    if (*reinterpret_cast<unsigned char*>(&ax24) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx26) + 1)) {
        tmp8_27 = *reinterpret_cast<unsigned char*>(&ax24);
        *reinterpret_cast<unsigned char*>(&ax24) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx26) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx26) + 1) = tmp8_27;
    }
    *reinterpret_cast<unsigned char*>(&edx20) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx20) - 54) + 1);
    *reinterpret_cast<unsigned char*>(&ebx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx7) - *reinterpret_cast<unsigned char*>(&ax24));
    esi28 = ebx7 * 0x9e52e3f1;
    *reinterpret_cast<signed char*>(&ecx26) = -1;
    *reinterpret_cast<uint16_t*>(&eax17) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax24) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ebx7))));
    *reinterpret_cast<uint16_t*>(&edi22) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx26) + 1);
    *reinterpret_cast<unsigned char*>(&ebx7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx7) + 0x74) + 1);
    return eax17 + ebx7 + ecx26 + edx20 + ebp19 + esi28 + edi22 - 0x40315579;
}

uint32_t log_size_7_var_003() {
    uint32_t eax1;
    uint32_t ebx2;
    uint32_t ecx3;
    uint32_t edx4;
    int32_t ebp5;
    uint32_t esi6;
    uint32_t edi7;
    unsigned char dh8;
    uint16_t cx9;
    unsigned char dh10;
    uint32_t ebx11;
    uint16_t cx12;
    uint32_t edx13;
    unsigned char tmp8_14;
    uint32_t eax15;
    uint32_t ebx16;
    uint16_t ax17;
    uint16_t bp18;
    int32_t edx19;
    uint16_t tmp16_20;
    uint16_t ax21;
    uint16_t ax22;
    uint16_t dx23;
    uint32_t esi24;
    uint32_t ecx25;
    uint16_t si26;
    signed char tmp8_27;
    uint16_t cx28;
    unsigned char cl29;
    uint16_t tmp16_30;
    uint32_t eax31;
    int32_t eax32;
    uint16_t ax33;
    int32_t edx34;

    eax1 = 0x29c220c2;
    ebx2 = 0xcb000343;
    ecx3 = 0xef5d9341;
    edx4 = 0x9d5aa2e1;
    ebp5 = 0xa6c11070;
    esi6 = 0x27773797;
    edi7 = 0x70804daa;
    dh8 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1) >> 1);
    cx9 = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebx2) = 0x4daa;
    }
    dh10 = reinterpret_cast<unsigned char>(dh8 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ebx2) + reinterpret_cast<uint1_t>(dh8 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ebx2) + 1))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1)));
    __asm__("rol bp, cl");
    ebx11 = ebx2 | 0x479294a2;
    __asm__("btr ebp, ebx");
    __asm__("xadd di, cx");
    *reinterpret_cast<uint16_t*>(&esi6) = 0x3797;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1) = reinterpret_cast<unsigned char>(dh10 + dh10);
    *reinterpret_cast<unsigned char*>(&cx12) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1)));
    __asm__("shrd di, si, 0x4");
    *reinterpret_cast<int16_t*>(&edx4) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx4) - 1);
    *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx4) >> *reinterpret_cast<unsigned char*>(&cx12));
    edx13 = edx4 << 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx12) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx9) + 1) | 28);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebx11) = *reinterpret_cast<int16_t*>(&eax1);
    }
    tmp8_14 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx13) - 0x70) + 1);
    *reinterpret_cast<unsigned char*>(&edx13) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_14 - 62) + reinterpret_cast<uint1_t>(tmp8_14 < *reinterpret_cast<unsigned char*>(&edx13)));
    __asm__("rcl al, 1");
    if (0) {
        esi6 = edx13;
    }
    eax15 = eax1 ^ 0x51a49f94;
    *reinterpret_cast<uint16_t*>(&ecx3) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx12 - reinterpret_cast<uint16_t>(0x1053 - reinterpret_cast<uint1_t>(cx12 < 0xefae))) + 0x4daa) + 1);
    *reinterpret_cast<uint16_t*>(&esi6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi6) + 1);
    ebx16 = ebx11 - 0xabc05ad;
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) + 15) + reinterpret_cast<uint1_t>(ebx11 < 0xabc05ad));
    ax17 = 86;
    __asm__("lahf ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) - reinterpret_cast<unsigned char>(86 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) < 87)));
    __asm__("ror di, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) - reinterpret_cast<unsigned char>(89 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1) < reinterpret_cast<unsigned char>(89 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(1 + *reinterpret_cast<unsigned char*>(&ebx16)) < 1)))));
    __asm__("rcl bx, 0xb");
    bp18 = reinterpret_cast<uint16_t>(0xf7d6 >> 53);
    edx19 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx16) + 1);
    if (86 == *reinterpret_cast<unsigned char*>(&ebx16)) {
        *reinterpret_cast<unsigned char*>(&ax17) = *reinterpret_cast<unsigned char*>(&ebx16);
        *reinterpret_cast<unsigned char*>(&ebx16) = 86;
    }
    tmp16_20 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x4daa + *reinterpret_cast<uint16_t*>(&esi6))));
    *reinterpret_cast<uint16_t*>(&edi7) = tmp16_20;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp16_20 < 0x4daa) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi7) == 0))) {
        esi6 = edi7;
    }
    ax21 = reinterpret_cast<uint16_t>(ax17 ^ *reinterpret_cast<uint16_t*>(&edx19));
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(ax21 == 0)) {
        ecx3 = edi7;
    }
    __asm__("ror edx, 1");
    ax22 = reinterpret_cast<uint16_t>(ax21 & 0x3fff);
    dx23 = reinterpret_cast<uint16_t>(ax22 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx19) + 1) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&eax15) = reinterpret_cast<uint16_t>(ax22 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx23) + 1)));
    esi24 = esi6 + 1;
    ecx25 = ecx3 * 0xfb8ff2c2;
    __asm__("rcr ah, 0xf5");
    si26 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi24) * 0xf3c2) << 1);
    __asm__("ror dh, 1");
    tmp8_27 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx25) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx25) + 1) = *reinterpret_cast<signed char*>(&dx23);
    *reinterpret_cast<signed char*>(&dx23) = tmp8_27;
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax15) + 1)) + 1);
    __asm__("ror ecx, 0xe");
    if (reinterpret_cast<int16_t>(dx23 & si26) < reinterpret_cast<int16_t>(0)) {
        *reinterpret_cast<uint16_t*>(&ecx25) = bp18;
    }
    __asm__("ror ax, 0xb6");
    cx28 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx25) ^ dx23);
    cl29 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx28) & 15);
    __asm__("shrd bp, si, cl");
    if (bp18 == dx23) {
        tmp16_30 = bp18;
        bp18 = dx23;
        dx23 = tmp16_30;
    }
    *reinterpret_cast<uint16_t*>(&esi24) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(si26) >> cl29);
    __asm__("btr bx, 0xd3");
    __asm__("rcr al, 0x84");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax15) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax15) + 1) ^ 24);
    eax31 = eax15 + 1;
    __asm__("rcl ecx, cl");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx23) + 1)) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx23) + 1);
    }
    __asm__("rcl cx, 1");
    __asm__("ror dx, 1");
    *reinterpret_cast<unsigned char*>(&cx28) = reinterpret_cast<unsigned char>(cl29 & 15);
    __asm__("shld bp, ax, cl");
    __asm__("cwd ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax31) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax31) + 1);
    __asm__("rcl bl, 1");
    __asm__("shrd cx, ax, 0x1");
    __asm__("shld eax, ecx, 0x1");
    __asm__("shrd eax, esi, cl");
    __asm__("bsr ecx, ebp");
    *reinterpret_cast<uint16_t*>(&ecx25) = reinterpret_cast<uint16_t>(cx28 << *reinterpret_cast<unsigned char*>(&cx28));
    __asm__("rol ax, 0xa1");
    eax32 = *reinterpret_cast<int16_t*>(&eax31) * *reinterpret_cast<int16_t*>(&eax31);
    __asm__("rol cl, 0xa9");
    __asm__("xadd ch, dh");
    *reinterpret_cast<uint16_t*>(&edi7) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi7) + bp18) + __intrinsic()) | *reinterpret_cast<uint16_t*>(&esi24));
    ax33 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax32) | 0xc000);
    *reinterpret_cast<uint16_t*>(&edx19) = reinterpret_cast<uint16_t>(ax33 % ax33);
    edx34 = edx19 + 0x54d863be;
    *reinterpret_cast<unsigned char*>(&ecx25) = __intrinsic();
    __asm__("xadd al, bl");
    __asm__("rcl cl, 1");
    *reinterpret_cast<uint16_t*>(&ebp5) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi24) * 0x4579);
    __asm__("rcl ah, 1");
    *reinterpret_cast<uint16_t*>(&ebx16) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx16) - reinterpret_cast<uint16_t>(0x758f - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx16) < reinterpret_cast<uint16_t>(0x758f - __intrinsic()))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx16) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx34) + 1));
    *reinterpret_cast<uint16_t*>(&eax32) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax33 / ax33) * *reinterpret_cast<int16_t*>(&edx34));
    *reinterpret_cast<int16_t*>(&edx34) = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax32) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax32) + 1) >> 85);
    __asm__("btr ecx, edx");
    return eax32 + ebx16 + (reinterpret_cast<int32_t>(ecx25) >> 1) + edx34 + ebp5 + esi24 + edi7 - 0x6ba675f1;
}

uint32_t log_size_7_var_004() {
    uint32_t ebx1;
    int32_t edx2;
    uint32_t ecx3;
    uint32_t eax4;
    uint32_t ebp5;
    uint32_t esi6;
    int1_t less7;
    int16_t tmp16_8;
    int32_t eax9;
    uint32_t ecx10;
    uint32_t esi11;
    uint32_t ebx12;
    uint32_t eax13;
    int32_t edx14;
    uint32_t esi15;
    uint32_t ebx16;
    uint32_t esi17;
    uint32_t edi18;
    uint32_t ebx19;
    uint32_t eax20;
    int32_t ecx21;
    int32_t ecx22;
    uint32_t ebx23;
    int16_t ax24;
    uint32_t edx25;
    uint16_t cx26;
    int32_t eax27;
    uint32_t ebp28;
    uint32_t edi29;

    ebx1 = 0x61157dd7;
    edx2 = 0x72541b03;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) ^ 0xde);
    __asm__("bsf ebx, ebp");
    __asm__("cwd ");
    ecx3 = 0x40d651de ^ ebx1;
    __asm__("rcl dx, cl");
    *reinterpret_cast<int16_t*>(&ecx3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx3) >> 9);
    eax4 = ecx3;
    __asm__("shld edi, edx, 0xf8");
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx1) >> -31);
    ebp5 = 0x2e6c0000;
    __asm__("btr cx, di");
    __asm__("rcr di, cl");
    __asm__("btr ebx, 0x86");
    esi6 = 0xb61b5693 >> -28;
    __asm__("btr eax, ebx");
    __asm__("btr edi, edx");
    less7 = *reinterpret_cast<signed char*>(&ebx1) < *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1);
    *reinterpret_cast<signed char*>(&ebx1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx1) - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1));
    if (less7) {
        ebp5 = ebx1;
    }
    tmp16_8 = *reinterpret_cast<int16_t*>(&esi6);
    *reinterpret_cast<int16_t*>(&esi6) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&eax4));
    __asm__("rcr esi, 1");
    eax9 = tmp16_8 * 0x1b00;
    *reinterpret_cast<unsigned char*>(&eax9) = __intrinsic();
    __asm__("rcl bx, 1");
    *reinterpret_cast<uint16_t*>(&eax9) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax9) / 0xc4cd);
    ecx10 = 0xdb1b265c;
    __asm__("bts eax, 0xf5");
    esi11 = esi6 << 1;
    ebx12 = esi11 * 0xab5a3d2d << 1;
    if (!__intrinsic()) {
        ebp5 = ebp5;
    }
    eax13 = eax9 * ebp5;
    edx14 = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx12) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx12) + 1) + *reinterpret_cast<signed char*>(&ebx12)) + __intrinsic()) - 95);
    *reinterpret_cast<uint16_t*>(&esi11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi11) >> 1);
    esi15 = esi11 - (0x576bee69 - reinterpret_cast<uint1_t>(esi11 < 0xa8941198)) >> 53;
    __asm__("xadd ch, cl");
    if (*reinterpret_cast<int16_t*>(&esi15) == *reinterpret_cast<int16_t*>(&edx14)) {
    }
    *reinterpret_cast<unsigned char*>(&ecx10) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(92 >> 92) + 83) + 1);
    *reinterpret_cast<uint16_t*>(&ecx10) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx10) ^ 0x110c);
    __asm__("rcr dh, 1");
    __asm__("btc cx, ax");
    __asm__("rcl cx, 0x2a");
    ebx16 = ebx12 + 0x68bff577;
    __asm__("rcl bx, 0xf3");
    __asm__("rcr edi, 0x3f");
    *reinterpret_cast<int16_t*>(&ebx16) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx16) - 0x3b33);
    __asm__("ror si, 0xc2");
    __asm__("ror ax, cl");
    __asm__("btc dx, 0xcb");
    esi17 = ebx16;
    __asm__("rol al, 0x7e");
    edi18 = (0x91d2c4cd >> *reinterpret_cast<unsigned char*>(&ecx10)) - 1;
    __asm__("cdq ");
    ebx19 = *reinterpret_cast<unsigned char*>(&ecx10);
    __asm__("ror esi, 0x54");
    *reinterpret_cast<uint16_t*>(&ecx10) = 0x7967;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&eax13) = *reinterpret_cast<int16_t*>(&eax13);
    }
    __asm__("shld esi, ecx, 0x1");
    if (!__undefined()) {
        eax13 = 0xdb1b7967;
    }
    if (__intrinsic()) {
        eax13 = edi18;
    }
    eax20 = eax13 + 1;
    __asm__("bts eax, esi");
    ecx21 = reinterpret_cast<int32_t>(-0xdb1b7967);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax20) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax20) + 1) - 1);
    *reinterpret_cast<uint16_t*>(&esi17) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi17) | *reinterpret_cast<uint16_t*>(&eax20));
    ecx22 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx21) + 1);
    ebx23 = ebx19 ^ 0xd7a34cc5;
    if (0) {
        *reinterpret_cast<uint16_t*>(&eax20) = *reinterpret_cast<uint16_t*>(&eax20);
    }
    ax24 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax20) >> 99);
    __asm__("rol ebp, 0xc7");
    edx25 = ebx23;
    cx26 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx22) - reinterpret_cast<uint16_t>(ax24 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx22) < reinterpret_cast<uint16_t>(ax24 + __intrinsic()))));
    eax27 = 0;
    ebp28 = 0xa2e34e7f;
    *reinterpret_cast<uint16_t*>(&ebp28) = 0x6ff3;
    if (0) {
        *reinterpret_cast<uint16_t*>(&ebp28) = *reinterpret_cast<uint16_t*>(&esi17);
    }
    *reinterpret_cast<unsigned char*>(&cx26) = reinterpret_cast<unsigned char>(1 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax27) + 1) + reinterpret_cast<uint1_t>(1 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax27) + 1) + 1))));
    *reinterpret_cast<uint16_t*>(&ecx22) = reinterpret_cast<uint16_t>(cx26 + 1);
    __asm__("shld ebx, edi, 0x46");
    __asm__("rol dl, cl");
    __asm__("cwd ");
    edi29 = edi18 + 0xed2d44c5 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1) < 73) >> 1;
    *reinterpret_cast<uint16_t*>(&edi29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi29) ^ 0x42bd);
    *reinterpret_cast<signed char*>(&ebx23) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&ebx23)));
    return ebx23 + ~ecx22 + edx25 + ebp28 + esi17 + edi29 - 0x37b138bc;
}

uint32_t log_size_7_var_005() {
    int32_t edx1;
    int32_t edi2;
    uint32_t ebx3;
    int32_t eax4;
    uint32_t ecx5;
    unsigned char ch6;
    unsigned char tmp8_7;
    int32_t edx8;
    uint1_t cf9;
    uint32_t esi10;
    uint32_t ebp11;
    int32_t eax12;
    uint32_t ebx13;
    uint32_t eax14;
    uint32_t esi15;
    uint32_t edx16;
    uint32_t eax17;
    unsigned char cl18;
    uint32_t edi19;
    uint32_t ebx20;
    uint32_t eax21;
    uint32_t ebp22;
    uint32_t esi23;
    uint32_t eax24;
    int32_t edx25;
    uint32_t ebp26;
    uint1_t cf27;
    uint32_t ebx28;
    uint32_t eax29;
    uint32_t edx30;
    uint32_t esi31;
    uint32_t eax32;
    int16_t ax33;
    uint32_t ebx34;
    int16_t ax35;

    edx1 = 0x9f146517;
    edi2 = 0x4a9b75ae;
    ebx3 = 0xa6b2090d;
    eax4 = 0x2bcc0219;
    ecx5 = 0x4577c09c;
    __asm__("rol ah, 0xec");
    if (1) {
        ecx5 = 0x4577c09b;
    }
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())));
    __asm__("rcl eax, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1);
    ch6 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1) & 0xa8);
    __asm__("btc di, 0xa");
    tmp8_7 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ch6 + 0xff) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1) = tmp8_7;
    if (reinterpret_cast<uint1_t>(tmp8_7 < ch6) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1) == 0)) {
        *reinterpret_cast<int16_t*>(&edx1) = *reinterpret_cast<int16_t*>(&edx1);
    }
    *reinterpret_cast<int16_t*>(&eax4) = reinterpret_cast<int16_t>(25 * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(51 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1))));
    __asm__("shld esi, edx, cl");
    edx8 = edx1 >> 1;
    cf9 = reinterpret_cast<uint1_t>(0xef21c0ee < ecx5);
    esi10 = 0xef21c0ee - (ecx5 + cf9);
    ebp11 = 0x94100000 - (edx8 + reinterpret_cast<uint1_t>(0x94100000 < edx8 + cf9));
    __asm__("rcr di, 1");
    *reinterpret_cast<signed char*>(&ebx3) = *reinterpret_cast<signed char*>(&edx8);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1);
    __asm__("rcr ebp, cl");
    eax12 = eax4 + eax4;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&esi10) == 0);
    ebx13 = ebx3 | 0xc0000000;
    eax14 = eax12 / ebx13;
    esi15 = eax12 % ebx13;
    *reinterpret_cast<uint16_t*>(&edx16) = 0;
    __asm__("shld edi, ebp, cl");
    __asm__("shrd ecx, esi, 0x9d");
    *reinterpret_cast<uint16_t*>(&ebx13) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx13)));
    eax17 = eax14 - (ebp11 + reinterpret_cast<uint1_t>(eax14 < ebp11));
    cl18 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx5) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
    if (cl18) {
        edx16 = eax17;
    }
    *reinterpret_cast<uint16_t*>(&esi15) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi15) - reinterpret_cast<uint16_t>(0x1343 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&esi15) < 0x1344)));
    __asm__("btr esi, edi");
    *reinterpret_cast<uint16_t*>(&edi2) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0xf29a) >> *reinterpret_cast<unsigned char*>(&ecx5)) + 77) + 1);
    edi19 = reinterpret_cast<uint32_t>(edi2 + 0x4a136ea4);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx13) + 1) = 0xff;
    *reinterpret_cast<signed char*>(&eax17) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax17) + *reinterpret_cast<signed char*>(&edx16));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax17) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax17) + 1) + cl18) + 1);
    ebx20 = ebx13 & ebp11;
    eax21 = eax17 * eax17;
    *reinterpret_cast<int16_t*>(&eax21) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax21) * reinterpret_cast<signed char>(cl18));
    ebp22 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ebp11) >> -22);
    __asm__("ror ah, 0x8a");
    __asm__("ror ax, 1");
    *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax21) - reinterpret_cast<unsigned char>(0x6f - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax21) < 0x92)));
    __asm__("rcl dx, 1");
    *reinterpret_cast<int16_t*>(&ebp22) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&ebp22));
    esi23 = esi15 + 0xc36a902a + 1;
    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi23) < reinterpret_cast<int32_t>(0) != __intrinsic());
    *reinterpret_cast<signed char*>(&ebx20) = 0;
    __asm__("shrd bx, cx, 0x7");
    eax24 = (eax21 + 0xc17e0e86) * esi23;
    edx25 = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1) + 70);
    *reinterpret_cast<uint16_t*>(&eax24) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax24) >> 1);
    __asm__("rol ecx, cl");
    ebp26 = (ebp22 - (0x2af98d27 - reinterpret_cast<uint1_t>(ebp22 < 0x2af98d27 - __intrinsic())) | 0x35dc933d) - 0x66968e8e;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx20) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx20) + 1) - *reinterpret_cast<signed char*>(&edx25));
    *reinterpret_cast<uint16_t*>(&esi23) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi23) - 0x129) + reinterpret_cast<uint1_t>(esi23 < ebx20));
    cf27 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi19) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax24))));
    *reinterpret_cast<uint16_t*>(&edi19) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi19) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax24) + cf27));
    ebx28 = 0xb114a269;
    if (*reinterpret_cast<int16_t*>(&edi19) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf27))) {
        *reinterpret_cast<uint16_t*>(&ebp26) = *reinterpret_cast<uint16_t*>(&esi23);
    }
    __asm__("shrd ebp, edx, 0x13");
    __asm__("rol bx, cl");
    eax29 = eax24 * edx25;
    edx30 = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcl ch, 1");
    *reinterpret_cast<int16_t*>(&eax29) = 0xa269;
    esi31 = esi23 + 1;
    *reinterpret_cast<int16_t*>(&ebx28) = reinterpret_cast<int16_t>(0xa26a >> *reinterpret_cast<unsigned char*>(&ecx5));
    eax32 = eax29 + ebx28;
    ax33 = *reinterpret_cast<signed char*>(&eax32);
    ebx34 = ebx28 ^ 0x19d6730b;
    __asm__("btr ebx, edi");
    *reinterpret_cast<uint16_t*>(&ebx34) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx34) >> 0x6c);
    __asm__("ror ch, cl");
    ax35 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax33) * *reinterpret_cast<signed char*>(&ebx34));
    __asm__("rcr esi, 1");
    __asm__("xadd dl, dl");
    __asm__("bsr edx, edi");
    __asm__("bts ebp, 0x7f");
    if (0) {
        edx30 = esi31;
    }
    __asm__("ror edi, cl");
    __asm__("bts bp, dx");
    *reinterpret_cast<signed char*>(&ax35) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax35) + 16);
    *reinterpret_cast<uint16_t*>(&eax32) = reinterpret_cast<uint16_t>(ax35 * *reinterpret_cast<uint16_t*>(&edi19));
    *reinterpret_cast<int16_t*>(&edx30) = __intrinsic();
    return eax32 + ebx34 + ecx5 + edx30 + ebp26 + esi31 + edi19 + 0x3535cb23;
}

uint32_t log_size_7_var_006() {
    uint32_t ebx1;
    int32_t ecx2;
    int32_t esi3;
    uint32_t ebp4;
    unsigned char bh5;
    int32_t eax6;
    uint32_t esi7;
    uint32_t edx8;
    uint32_t eax9;
    int16_t cx10;
    uint32_t tmp32_11;
    uint32_t edi12;
    uint32_t ecx13;
    uint32_t esi14;
    uint32_t tmp32_15;
    uint16_t bx16;
    int1_t sf17;
    uint32_t ebx18;
    uint32_t eax19;
    uint32_t edi20;
    uint32_t eax21;
    int1_t zf22;
    uint1_t less23;
    uint32_t eax24;
    uint32_t edx25;
    uint1_t cf26;
    uint1_t less_or_equal27;
    uint32_t edx28;

    ebx1 = 0x4dbcd56a;
    __asm__("rol si, 0x92");
    __asm__("btc edx, 0x59");
    ecx2 = 0x354be4a3;
    esi3 = 0x1332aea5;
    __asm__("xadd edx, edx");
    ebp4 = 0xf9957427;
    bh5 = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    eax6 = 0x40026d5f;
    __asm__("rol esi, cl");
    *reinterpret_cast<uint16_t*>(&esi3) = reinterpret_cast<uint16_t>(0xaea5 >> 81);
    __asm__("rol ebx, 0x94");
    esi7 = reinterpret_cast<uint32_t>(esi3 >> 1);
    __asm__("btr eax, 0x5a");
    __asm__("rcr ebp, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(bh5 - reinterpret_cast<unsigned char>(40 + reinterpret_cast<uint1_t>(bh5 < 40)));
    __asm__("rol dh, 0xf8");
    *reinterpret_cast<uint16_t*>(&eax6) = reinterpret_cast<uint16_t>(0x6d5f >> 0x7c);
    edx8 = eax6 % 0xc5d58a1c;
    eax9 = eax6 / 0xc5d58a1c;
    __asm__("btc dx, 0x6f");
    __asm__("bts ebx, ecx");
    __asm__("shrd eax, ebx, 0x1");
    __asm__("rcr ebx, 1");
    cx10 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx1) * 0x1e00);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    tmp32_11 = 0xc5d58a1c + eax9 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(0x6a + *reinterpret_cast<signed char*>(&edx8)))) < 0x6a);
    edi12 = tmp32_11;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_11 < 0xc5d58a1c) | reinterpret_cast<uint1_t>(edi12 == 0))) {
        ebx1 = esi7;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) + *reinterpret_cast<unsigned char*>(&eax9)) + 1);
    __asm__("rcl eax, 1");
    __asm__("shrd bp, dx, 0x1");
    __asm__("rcl dh, 1");
    __asm__("rcl cl, 1");
    __asm__("rcr ch, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = 0;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) <= *reinterpret_cast<unsigned char*>(&cx10)) {
        eax9 = edx8;
    }
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx10) & 15);
    __asm__("shld di, di, cl");
    __asm__("xadd bx, bp");
    *reinterpret_cast<uint16_t*>(&eax9) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax9) | 0x9309);
    ecx13 = reinterpret_cast<uint32_t>(-ecx2);
    esi14 = esi7 - (ecx13 + reinterpret_cast<uint1_t>(esi7 < ecx13));
    if (edx8 == eax9) {
        tmp32_15 = edx8;
        edx8 = eax9;
        eax9 = tmp32_15;
    }
    if (__intrinsic()) {
    }
    bx16 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx13) * 0xcc5d);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) >> 1);
    *reinterpret_cast<unsigned char*>(&ebx1) = 0xff;
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1))));
    sf17 = *reinterpret_cast<signed char*>(&eax9) < reinterpret_cast<signed char>(0);
    if (sf17 != __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ecx13) = *reinterpret_cast<uint16_t*>(&edx8);
    }
    if (!sf17) {
        eax9 = ecx13;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx16) + 1) >> *reinterpret_cast<signed char*>(&ecx13));
    *reinterpret_cast<uint16_t*>(&edi12) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi12) - reinterpret_cast<uint16_t>(0x66e4 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi12) < 0x991c))) - 0x7618);
    __asm__("rcr bh, cl");
    ebx18 = ebx1 | 0x4f633fd3;
    if (ecx13 == edx8) {
        ecx13 = edx8;
    }
    __asm__("ror dh, 1");
    eax19 = eax9 * 0xf995006a;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx18) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx18) + 1) - reinterpret_cast<unsigned char>(14 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx18) + 1) < 0xf3)));
    __asm__("btc esi, edx");
    __asm__("rcl ecx, 1");
    __asm__("rcr esi, cl");
    __asm__("ror si, cl");
    __asm__("shrd ecx, ebp, cl");
    __asm__("rcl ch, 0x6a");
    __asm__("xadd ah, al");
    __asm__("rol dl, cl");
    *reinterpret_cast<uint16_t*>(&eax19) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax19) & *reinterpret_cast<uint16_t*>(&ecx13)) * 0x6a);
    __asm__("rol eax, 1");
    __asm__("rcr dx, cl");
    *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax19) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx18) + 1));
    edi20 = edi12 + ebx18 + 1;
    __asm__("bts ebx, ebp");
    *reinterpret_cast<uint16_t*>(&ebp4) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x6a + *reinterpret_cast<uint16_t*>(&eax19))));
    __asm__("ror ecx, 1");
    eax21 = eax19 + 0xfd5ff956;
    zf22 = eax21 == 0;
    less23 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax21) < reinterpret_cast<int32_t>(0) != __intrinsic());
    if (less23) {
        *reinterpret_cast<uint16_t*>(&eax21) = *reinterpret_cast<uint16_t*>(&ebx18);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx13) + 1) = less23;
    if (!zf22) {
        ebp4 = eax21;
    }
    *reinterpret_cast<unsigned char*>(&ebx18) = 0xe9;
    eax24 = eax21 * eax21;
    edx25 = __intrinsic();
    cf26 = static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx13) >> *reinterpret_cast<uint16_t*>(&ebx18)));
    *reinterpret_cast<unsigned char*>(&ebx18) = 0xe8;
    less_or_equal27 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic())));
    if (less_or_equal27) {
        *reinterpret_cast<uint16_t*>(&ecx13) = *reinterpret_cast<uint16_t*>(&edx25);
    }
    if (cf26) {
        *reinterpret_cast<uint16_t*>(&ebx18) = *reinterpret_cast<uint16_t*>(&edx25);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx13) + 1) = less_or_equal27;
    if (static_cast<int1_t>(eax24 >> edx25)) {
        *reinterpret_cast<uint16_t*>(&eax24) = *reinterpret_cast<uint16_t*>(&ebx18);
    }
    *reinterpret_cast<unsigned char*>(&ebx18) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx18) + 0x68)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx25) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    edx28 = edx25 >> *reinterpret_cast<signed char*>(&ecx13);
    __asm__("shrd bx, dx, 0xe");
    *reinterpret_cast<uint16_t*>(&ebx18) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx18) - 0x79df);
    *reinterpret_cast<unsigned char*>(&edx28) = 0xff;
    return eax24 + ebx18 + ecx13 + edx28 + ebp4 + esi14 * 0xcaac5a76 + edi20 - 0x29e74a45;
}

uint32_t log_size_7_var_007() {
    int32_t ebx1;
    int32_t ecx2;
    uint32_t edi3;
    int32_t ebx4;
    uint32_t ebp5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t ebx8;
    uint32_t edx9;
    uint32_t ecx10;
    uint32_t esi11;
    uint32_t ebx12;
    uint32_t ebx13;
    uint32_t edx14;
    uint32_t edx15;
    uint32_t ebp16;
    uint32_t edi17;
    uint32_t eax18;
    int16_t bx19;
    uint32_t tmp32_20;
    uint16_t tmp16_21;
    uint32_t ebp22;

    ebx1 = 0x672309f4;
    ecx2 = 0xe3db9313;
    edi3 = 0xfb3ad502;
    if (0) {
        ebx1 = 0xe3db9313;
    }
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx1) & 0x9248);
    if (1) {
    }
    __asm__("rcr ch, 1");
    __asm__("rcl si, 1");
    __asm__("rcl ax, 1");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx1) + 85);
    __asm__("rcl ax, 1");
    __asm__("bts si, 0x7d");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx1) >> 1);
    __asm__("xadd dh, al");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    __asm__("btc ebx, 0x1f");
    __asm__("rol di, 1");
    __asm__("rol dx, cl");
    __asm__("shld esi, esi, 0x27");
    *reinterpret_cast<uint16_t*>(&ecx2) = reinterpret_cast<uint16_t>(~*reinterpret_cast<uint16_t*>(&ecx2));
    ebx4 = ebx1 >> 1;
    __asm__("ror ecx, cl");
    __asm__("btc ebp, 0x80");
    ebp5 = 0xa58135be;
    eax6 = reinterpret_cast<uint32_t>(0x246378c7 >> 61) | 0x42a423e4;
    if (1) {
        ebp5 = 0xfb3ad502;
    }
    __asm__("rcl bp, 1");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(0xec ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1));
    if (!*reinterpret_cast<unsigned char*>(&ecx2)) {
    }
    eax7 = eax6 >> 24 | eax6 >> 8 & 0xff00 | eax6 << 8 & 0xff0000 | eax6 << 24;
    ebx8 = ecx2 + 0xe3;
    edx9 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ecx2)) >> 1;
    __asm__("shrd ebx, edx, cl");
    ecx10 = ecx2 - 1;
    __asm__("shrd bp, si, 0x0");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1) >> 1);
    *reinterpret_cast<unsigned char*>(&ebx8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx8) & 0xcc);
    *reinterpret_cast<int16_t*>(&ecx10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx10) - *reinterpret_cast<int16_t*>(&ebx8));
    esi11 = 0x5b2;
    ebx12 = ebx8 - (ecx10 + reinterpret_cast<uint1_t>(ebx8 < ecx10));
    __asm__("shrd eax, ebp, cl");
    ebx13 = ebx12 - (ebx12 + reinterpret_cast<uint1_t>(ebx12 < ebx12));
    __asm__("btr ecx, ecx");
    *reinterpret_cast<uint16_t*>(&edi3) = reinterpret_cast<uint16_t>(0xd502 & *reinterpret_cast<uint16_t*>(&eax7));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx13) + 1) = *reinterpret_cast<signed char*>(&edx9);
    *reinterpret_cast<uint16_t*>(&eax7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax7) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx9) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax7) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&edx9))))));
    edx14 = edx9 + edi3;
    *reinterpret_cast<int16_t*>(&edx14) = 0x6dea;
    edx15 = edx14 - (edx14 + reinterpret_cast<uint1_t>(edx14 < edx14));
    ebp16 = ebp5 ^ 0xe8d6d093;
    edi17 = edi3 << 1;
    __asm__("rol bx, 1");
    eax18 = eax7 ^ edx15;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx15) + 1) = 0;
    __asm__("rol bp, 1");
    *reinterpret_cast<int16_t*>(&ecx10) = *reinterpret_cast<int16_t*>(&ebx13);
    __asm__("bts esi, esi");
    __asm__("xadd cx, ax");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1) & 90);
    bx19 = 0x875b;
    __asm__("shld bx, bp, 0x1");
    __asm__("bts si, dx");
    *reinterpret_cast<uint16_t*>(&eax18) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax18) >> 0x74);
    if (0) {
        tmp32_20 = ecx10;
        ecx10 = eax18;
        eax18 = tmp32_20;
    }
    __asm__("shrd ebx, ebp, cl");
    *reinterpret_cast<uint16_t*>(&edi17) = reinterpret_cast<uint16_t>(0 << *reinterpret_cast<unsigned char*>(&ecx10));
    *reinterpret_cast<int16_t*>(&edx15) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx15) - 1);
    __asm__("rcl edx, cl");
    __asm__("ror dx, cl");
    __asm__("bsr eax, edx");
    __asm__("ror bx, 1");
    __asm__("ror bx, 1");
    *reinterpret_cast<unsigned char*>(&bx19) = reinterpret_cast<unsigned char>(91 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx15) + 1) + reinterpret_cast<uint1_t>(91 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx15) + 1))))));
    __asm__("btc edx, 0x4b");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx15) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx15) + 1) - 1);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx15) + 1)) {
        bx19 = bx19;
    }
    __asm__("btc cx, 0x85");
    __asm__("shld ax, bp, 0x1");
    *reinterpret_cast<int16_t*>(&ebx13) = reinterpret_cast<int16_t>(bx19 << *reinterpret_cast<unsigned char*>(&ecx10));
    __asm__("rol al, 0x75");
    *reinterpret_cast<int16_t*>(&ecx10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx10) >> *reinterpret_cast<unsigned char*>(&ecx10));
    tmp16_21 = *reinterpret_cast<uint16_t*>(&ebp16);
    *reinterpret_cast<uint16_t*>(&ebp16) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax18) | *reinterpret_cast<uint16_t*>(&edi17));
    *reinterpret_cast<uint16_t*>(&eax18) = tmp16_21;
    ebp22 = ebp16 + 0x4198f677;
    *reinterpret_cast<int16_t*>(&esi11) = -0;
    if (__intrinsic()) {
        ecx10 = ebx13;
    }
    __asm__("rcr cx, 1");
    __asm__("rol cl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx10) + 1));
    if (ebp22 & esi11) {
        eax18 = edi17;
    }
    __asm__("rcr bp, 1");
    __asm__("cdq ");
    *reinterpret_cast<uint16_t*>(&eax18) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&eax18) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ebx13))));
    return eax18 + ebx13 + ecx10 + edx15 + ebp22 + esi11 + (edi17 >> -94) - 0x68afa9f;
}

uint32_t log_size_7_var_008() {
    int32_t ebx1;
    uint32_t ecx2;
    int1_t below_or_equal3;
    int32_t ebp4;
    int32_t edx5;
    uint32_t ecx6;
    int32_t eax7;
    int32_t eax8;
    uint32_t ebx9;
    uint1_t cf10;
    uint16_t si11;
    int32_t eax12;
    uint1_t cf13;
    uint32_t ecx14;
    uint32_t eax15;
    uint16_t bx16;
    int32_t edx17;
    uint32_t esi18;
    uint16_t cx19;
    uint16_t cx20;
    uint32_t ebp21;
    uint16_t bx22;
    uint32_t edx23;
    uint32_t esi24;

    ebx1 = 0xae28b33c;
    ecx2 = 0x525152b2;
    __asm__("xadd esi, edx");
    *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<uint1_t>(!below_or_equal3);
    ebp4 = 0x76b37698;
    __asm__("rcr dl, 1");
    edx5 = 0xdf3b0660;
    *reinterpret_cast<signed char*>(&ebx1) = reinterpret_cast<signed char>(60 << *reinterpret_cast<unsigned char*>(&ecx2));
    __asm__("rcr si, 1");
    __asm__("ror al, 1");
    __asm__("xadd di, bx");
    ecx6 = ecx2 ^ 0xad8ca98d;
    *reinterpret_cast<uint16_t*>(&edx5) = reinterpret_cast<uint16_t>(0x5b4 % reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) | 0xc0))));
    *reinterpret_cast<uint16_t*>(&eax7) = reinterpret_cast<uint16_t>(0x5b4 / reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx5) + 1))));
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) >> 1);
    *reinterpret_cast<uint16_t*>(&ebx1) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx1) | 0x1032);
    eax8 = *reinterpret_cast<int16_t*>(&eax7);
    __asm__("xadd dx, si");
    ebx9 = reinterpret_cast<uint32_t>(ebx1 + 0x6c74289d);
    cf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx6) < 0xbce6);
    *reinterpret_cast<uint16_t*>(&ecx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx6) - reinterpret_cast<uint16_t>(0xbce6 + cf10));
    *reinterpret_cast<uint16_t*>(&ebp4) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1);
    si11 = reinterpret_cast<uint16_t>(0xd763 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp4) + reinterpret_cast<uint1_t>(0xd763 < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp4) + cf10))));
    __asm__("ror bp, cl");
    __asm__("btr bp, 0x99");
    __asm__("ror cl, cl");
    __asm__("bts di, si");
    eax12 = eax8 * ebp4;
    cf13 = reinterpret_cast<uint1_t>(ecx6 < ebx9);
    ecx14 = ecx6 - (ebx9 + cf13);
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(ecx14 == static_cast<uint32_t>(cf13));
    if (!__intrinsic()) {
        si11 = *reinterpret_cast<uint16_t*>(&ebp4);
    }
    __asm__("shrd edx, ecx, cl");
    eax15 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax12)));
    bx16 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx9) & 0x4776);
    *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(bx16 == 0));
    __asm__("rcr al, 1");
    __asm__("ror ax, 0xe0");
    __asm__("shrd edx, edx, 0x1");
    __asm__("rol al, 1");
    __asm__("bsr ebp, ebx");
    __asm__("bts esi, ecx");
    __asm__("rcl cx, 0xe5");
    *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>((si11 ^ 0xed82) == 0)));
    __asm__("btc bp, dx");
    edx17 = __intrinsic() - 1;
    __asm__("bsf ecx, esi");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax15) + 1) = *reinterpret_cast<signed char*>(&edx17);
    esi18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx17)));
    __asm__("shld ebp, ecx, 0x1");
    cx19 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx14) & 0x5fe4);
    *reinterpret_cast<uint16_t*>(&ebp4) = reinterpret_cast<uint16_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebp4) + *reinterpret_cast<uint16_t*>(&ebp4))));
    cx20 = reinterpret_cast<uint16_t>(cx19 - reinterpret_cast<uint16_t>(0x22f7 - reinterpret_cast<uint1_t>(cx19 < 0xdd0a)));
    __asm__("rcl bl, 1");
    __asm__("bts dx, di");
    __asm__("btr ebp, 0xd5");
    __asm__("bts ax, 0x1");
    *reinterpret_cast<int16_t*>(&esi18) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi18) + 0x41c4);
    __asm__("btr cx, si");
    ebp21 = ebp4 + esi18;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx17) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx17) + 1) & 0xfb);
    if (0) {
        eax15 = esi18;
    }
    if (*reinterpret_cast<signed char*>(&bx16) == *reinterpret_cast<signed char*>(&edx17)) {
        *reinterpret_cast<signed char*>(&edx17) = *reinterpret_cast<signed char*>(&bx16);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&bx22) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr dx, 0x9");
    __asm__("ror dh, 1");
    __asm__("btc esi, ecx");
    __asm__("rol bx, 0x44");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx14) + 1) = reinterpret_cast<signed char>(-*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx20) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax15) + 1));
    edx23 = edx17 - eax15;
    *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("xadd ebx, eax");
    *reinterpret_cast<unsigned char*>(&bx22) = __intrinsic();
    __asm__("shld si, cx, 0x6");
    *reinterpret_cast<uint16_t*>(&ebx9) = reinterpret_cast<uint16_t>(bx22 | 0xa074);
    *reinterpret_cast<uint16_t*>(&edx23) = reinterpret_cast<uint16_t>(__intrinsic() - reinterpret_cast<uint16_t>(0x3964 + reinterpret_cast<uint1_t>(__intrinsic() < 0x3965)));
    __asm__("ror di, 0x11");
    __asm__("shld eax, eax, 0x1");
    __asm__("rcl eax, 1");
    esi24 = ebx9 + ebp21 * 8 + 33;
    *reinterpret_cast<uint16_t*>(&esi24) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi24) - 0x7897) + 1);
    __asm__("btr di, cx");
    return ebx9 + ecx14 + edx23 + ebp21 + esi24 - 0x6bffde50 + 0x34c5ab4c;
}

uint32_t log_size_7_var_009() {
    uint32_t ebx1;
    uint32_t ecx2;
    uint32_t edx3;
    int32_t ebp4;
    uint32_t esi5;
    uint32_t eax6;
    unsigned char ch7;
    uint16_t ax8;
    uint16_t ax9;
    int32_t edi10;
    uint32_t edx11;
    int16_t ax12;
    int16_t ax13;
    uint32_t ebp14;
    int16_t ax15;
    unsigned char al16;
    uint32_t ecx17;
    unsigned char tmp8_18;
    uint32_t esi19;
    uint32_t edx20;
    uint16_t ax21;
    int32_t eax22;
    uint32_t esi23;
    int32_t edx24;
    uint32_t eax25;
    uint32_t esi26;
    uint32_t ecx27;
    unsigned char tmp8_28;
    uint32_t ebx29;
    uint32_t edx30;
    uint32_t eax31;
    int1_t below_or_equal32;

    ebx1 = 0x34cdd077;
    ecx2 = 0xc4fbd074;
    edx3 = 0xe38e322f;
    ebp4 = 0x12aa8a5d;
    esi5 = 0x252f5132;
    *reinterpret_cast<uint16_t*>(&ebp4) = 0xc52e;
    __asm__("btc ebx, eax");
    __asm__("rcl bh, 1");
    eax6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1))) >> 1;
    ch7 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) | 0xc0);
    ax8 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax6) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx3) = reinterpret_cast<uint16_t>(ax8 % static_cast<int16_t>(reinterpret_cast<signed char>(ch7)));
    ax9 = reinterpret_cast<uint16_t>(ax8 / static_cast<int16_t>(reinterpret_cast<signed char>(ch7)));
    __asm__("ror bh, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(ch7 ^ 0xad);
    edi10 = 0x349656cf;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&edx3) = 0xc52e;
    }
    __asm__("rol ax, 0x13");
    edx11 = edx3 & 0x74a852c;
    if (1) {
        ebp4 = 0x349656cf;
    }
    *reinterpret_cast<int16_t*>(&esi5) = 0x5132;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi5) = *reinterpret_cast<int16_t*>(&edx11);
    }
    ax12 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax9) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1));
    *reinterpret_cast<unsigned char*>(&ebx1) = 0;
    *reinterpret_cast<unsigned char*>(&ecx2) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1);
    __asm__("shrd si, cx, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax13) + 1) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(__intrinsic() | reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax12) + 1) & 97) - 1 == 0)));
    *reinterpret_cast<unsigned char*>(&ax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax12) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax12) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ax12) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax12) + __intrinsic()))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx11) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx11) + 1) - reinterpret_cast<unsigned char>(42 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx11) + 1) < 0xd7)));
    ebp14 = reinterpret_cast<uint32_t>(-ebp4);
    ax15 = reinterpret_cast<int16_t>(ax13 << *reinterpret_cast<unsigned char*>(&ecx2));
    al16 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ax15) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    ecx17 = ecx2 ^ edx11;
    __asm__("btc esi, 0x4");
    if (!al16) {
        tmp8_18 = al16;
        al16 = 0;
        *reinterpret_cast<unsigned char*>(&ebx1) = tmp8_18;
    }
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx11 & 0xc733bc16) < reinterpret_cast<int32_t>(0))))) {
        ebx1 = esi5;
    }
    esi19 = esi5 - (0x53a3ffa3 - reinterpret_cast<uint1_t>(esi5 < 0xac5c005d));
    edx20 = edx11 << 20 | 0xc58bf7a1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = 0;
    *reinterpret_cast<int16_t*>(&ebp14) = reinterpret_cast<int16_t>(0xb93c >> *reinterpret_cast<unsigned char*>(&ecx17));
    __asm__("ror bp, 1");
    ax21 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(~reinterpret_cast<int16_t>(reinterpret_cast<signed char>(al16) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx20) + 1))) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx20) = reinterpret_cast<uint16_t>(ax21 % -31);
    *reinterpret_cast<int16_t*>(&ebx1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx1) - 1);
    eax22 = reinterpret_cast<int16_t>(ax21 / *reinterpret_cast<signed char*>(&edx20));
    if (__intrinsic()) {
    }
    *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&eax22));
    *reinterpret_cast<int16_t*>(&esi19) = 0x1774;
    if (ebx1 == ebx1) {
        ebx1 = ebx1;
    }
    *reinterpret_cast<uint16_t*>(&eax22) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax22) + 0xc35) + __intrinsic());
    esi23 = esi19 - (edx20 + reinterpret_cast<uint1_t>(esi19 < edx20));
    __asm__("rol ecx, 0xda");
    *reinterpret_cast<unsigned char*>(&ecx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx17) >> 69);
    *reinterpret_cast<int16_t*>(&ecx17) = -*reinterpret_cast<int16_t*>(&ecx17);
    *reinterpret_cast<int16_t*>(&esi23) = static_cast<int16_t>(ecx17);
    __asm__("rcr dx, cl");
    *reinterpret_cast<uint16_t*>(&edi10) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0x56cf) >> 0xff8d);
    edx24 = reinterpret_cast<int32_t>(edx20) >> *reinterpret_cast<unsigned char*>(&ecx17);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx24) + 1) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx24) + 1));
    __asm__("rol cl, 0xd0");
    eax25 = edi10 + eax22 + 0x77;
    __asm__("rcr bl, 1");
    __asm__("shld cx, bp, 0x1");
    esi26 = esi23 - 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi26) < reinterpret_cast<int32_t>(0) == __intrinsic());
    *reinterpret_cast<uint16_t*>(&eax25) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax25) - reinterpret_cast<uint16_t>(0x39f8 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax25) < reinterpret_cast<uint16_t>(0x39f8 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx17) + 1) - 81))) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx17) + 1))))));
    __asm__("btr cx, 0x8a");
    ecx27 = eax25 + edx24 * 2;
    *reinterpret_cast<uint16_t*>(&ecx27) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx27) - 0x4546) + 1);
    __asm__("shrd eax, ebx, 0x1");
    if (!*reinterpret_cast<int16_t*>(&esi26)) {
        ebp14 = eax25;
    }
    tmp8_28 = *reinterpret_cast<unsigned char*>(&ebx1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx24) + 1) = tmp8_28;
    ebx29 = 0;
    edx30 = reinterpret_cast<uint32_t>(edx24 >> -38);
    __asm__("rol bx, cl");
    *reinterpret_cast<uint16_t*>(&eax25) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax25) + *reinterpret_cast<uint16_t*>(&edi10)) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx27) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax25) == 0);
    __asm__("ror edi, 1");
    __asm__("shld dx, di, 0xc");
    *reinterpret_cast<uint16_t*>(&ebx29) = 0xf412;
    __asm__("rcr bp, 1");
    eax31 = eax25 - (0x3e15e40e - reinterpret_cast<uint1_t>(eax25 < 0xc1ea1bf2));
    __asm__("rol esi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx30) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx27) + 1);
    below_or_equal32 = *reinterpret_cast<unsigned char*>(&eax31) <= 96;
    *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax31) - 96);
    if (below_or_equal32) {
        eax31 = ecx27;
    }
    __asm__("btr edi, esi");
    if (__intrinsic()) {
        ebx29 = ebp14;
    }
    __asm__("btc di, 0xf5");
    __asm__("rcl edx, 1");
    *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax31) & 0xed);
    __asm__("shld di, dx, 0xc");
    __asm__("btr bx, ax");
    __asm__("rcr al, 1");
    return eax31 + ebx29 + ecx27 + edx30 + ebp14 - 0x1a5 + 0x55a5ee9b;
}

int32_t __assert_fail = 0x8049056;

void fun_8049050(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto __assert_fail;
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
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x3ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_80490e2() {
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
    fun_8049117(edx5, v4, eax6);
    ebx7 = ebx8 + 0x3f0c;
    fun_8049040(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2cd0, ebx7 - 0x2c70, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049122() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80491c2() {
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

void fun_80491f2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __assert_fail(0x804d018, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_804a332() {
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
    ebx3 = ebx4 + 0x2cc3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804a34f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804a392() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804a39a() {
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

void fun_8049167() {
}

void fun_80491b4() {
}

void fun_80491e1() {
}

void fun_804a38d() {
}

int32_t g804d008 = 0;

void fun_8049046() {
    goto g804d008;
}

void fun_8049171() {
}

void fun_80491b9() {
}

void fun_80491e9() {
}

void fun_8049056() {
    goto 0x8049030;
}

int32_t main() {
    uint32_t eax1;
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;

    eax1 = log_size_7_var_000();
    eax2 = log_size_7_var_001();
    eax3 = log_size_7_var_002();
    eax4 = log_size_7_var_003();
    eax5 = log_size_7_var_004();
    eax6 = log_size_7_var_005();
    eax7 = log_size_7_var_006();
    eax8 = log_size_7_var_007();
    eax9 = log_size_7_var_008();
    eax10 = log_size_7_var_009();
    if (eax1 + eax2 + eax3 + eax4 + eax5 + eax6 + eax7 + eax8 + eax9 + eax10) {
        fun_8049050("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 31, "main");
    } else {
        return 0;
    }
}
