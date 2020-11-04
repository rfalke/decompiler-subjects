
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
    int32_t ebp1;
    uint32_t edi2;
    uint32_t ebx3;
    uint32_t eax4;
    uint32_t ecx5;
    uint16_t cx6;
    uint32_t edx7;
    uint32_t eax8;
    int32_t esi9;
    uint16_t ax10;
    uint32_t edi11;
    uint32_t eax12;
    int32_t ebp13;
    unsigned char tmp8_14;
    uint1_t cf15;
    uint32_t ebx16;
    uint16_t ax17;
    uint32_t edx18;
    uint32_t esi19;
    int16_t cx20;
    uint16_t ax21;
    uint16_t dx22;
    uint16_t ax23;
    uint16_t ax24;

    ebp1 = 0x32c19c67;
    edi2 = reinterpret_cast<uint32_t>(0x1661159d >> 0x94);
    ebx3 = 0xc2405a80;
    *reinterpret_cast<int16_t*>(&edi2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edi2) >> 1);
    __asm__("rcl cx, cl");
    __asm__("rcl edx, cl");
    eax4 = 0x9c67;
    __asm__("ror dl, 1");
    ecx5 = 0x14431494 >> -98;
    __asm__("btr si, 0x3c");
    __asm__("cwd ");
    if (0) {
        *reinterpret_cast<uint16_t*>(&eax4) = 0xf153;
    }
    __asm__("rcr esi, 1");
    cx6 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax4) * 0x32e3);
    *reinterpret_cast<uint16_t*>(&eax4) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax4) ^ 0xf577);
    edx7 = 0x8cb73ed;
    eax8 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax4) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(__intrinsic())));
    esi9 = 0;
    __asm__("btr si, 0xd");
    *reinterpret_cast<uint16_t*>(&esi9) = 0;
    __asm__("rcl ax, 0x6");
    __asm__("xadd bp, di");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&edx7) = *reinterpret_cast<uint16_t*>(&eax8);
    }
    ax10 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax8) - 0x51b8)));
    __asm__("rcr bp, 1");
    *reinterpret_cast<uint16_t*>(&edx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx7) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx7) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edx7) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx7) + 1))));
    edi11 = edi2 - (0x7aa22cc5 + reinterpret_cast<uint1_t>(edi2 < 0x7aa22cc5)) + edx7 + 1;
    __asm__("rol bl, 0xd1");
    __asm__("rol esi, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax10) + 1) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())) ^ 0xf0);
    __asm__("rol bh, 0xb8");
    *reinterpret_cast<uint16_t*>(&ebp1) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0x9c67) >> -28);
    *reinterpret_cast<uint16_t*>(&ebx3) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax10) + 1);
    __asm__("rol di, 0x11");
    __asm__("shld ebx, ebx, cl");
    *reinterpret_cast<uint16_t*>(&eax8) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax10 & 0x3fff) / static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx6) + 1) | 0xc0)));
    __asm__("ror dh, cl");
    __asm__("shrd ebp, eax, 0x1");
    eax12 = eax8 >> 24 | eax8 >> 8 & 0xff00 | eax8 << 8 & 0xff0000 | eax8 << 24;
    ebp13 = ~ebp1;
    __asm__("shld ecx, ecx, cl");
    __asm__("rcl ecx, 1");
    if (edi11 >= 0xfb50677c) {
        *reinterpret_cast<uint16_t*>(&ebp13) = *reinterpret_cast<uint16_t*>(&ebp13);
    }
    if (!__intrinsic()) {
        esi9 = ebp13;
    }
    tmp8_14 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx3) + 59);
    cf15 = reinterpret_cast<uint1_t>(tmp8_14 < *reinterpret_cast<unsigned char*>(&ebx3));
    *reinterpret_cast<unsigned char*>(&ebx3) = tmp8_14;
    if (cf15 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx3) == 0)) {
    }
    if (*reinterpret_cast<signed char*>(&ebx3) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&eax12) = *reinterpret_cast<uint16_t*>(&ebp13);
    }
    *reinterpret_cast<uint16_t*>(&ecx5) = *reinterpret_cast<unsigned char*>(&eax12);
    *reinterpret_cast<uint16_t*>(&edi11) = 0;
    __asm__("rcl cl, 1");
    if (*reinterpret_cast<uint16_t*>(&ecx5) == *reinterpret_cast<uint16_t*>(&ecx5)) {
        *reinterpret_cast<uint16_t*>(&ecx5) = *reinterpret_cast<uint16_t*>(&ecx5);
    }
    ebx16 = ebx3 << *reinterpret_cast<unsigned char*>(&ecx5);
    if (ecx5 + 1) {
        *reinterpret_cast<uint16_t*>(&esi9) = 0;
    }
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) | 0xc0);
    ax17 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax12) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx7) = reinterpret_cast<uint16_t>(ax17 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&ebx16)));
    edx18 = edx7;
    __asm__("shld ebx, edx, 0x51");
    *reinterpret_cast<uint16_t*>(&ebp13) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebp13) >> 1);
    __asm__("rcr bx, 0xec");
    esi19 = reinterpret_cast<uint32_t>(esi9 - 0x94654a0 + 1);
    cx20 = 0xa070;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx20) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx20) + 1) | 0xc0);
    ax21 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax17 / *reinterpret_cast<signed char*>(&ebx16)) + *reinterpret_cast<int16_t*>(&ebx16)))) & 0x3fff);
    dx22 = reinterpret_cast<uint16_t>(ax21 % static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx20) + 1)));
    ax23 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax21 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx20) + 1))) >> 0x76);
    ax24 = reinterpret_cast<uint16_t>(ax23 - reinterpret_cast<uint16_t>(0x2ad8 + reinterpret_cast<uint1_t>(ax23 < 0x2ad8)));
    __asm__("btc si, di");
    *reinterpret_cast<unsigned char*>(&edx18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx22) - reinterpret_cast<unsigned char>(0x73 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&dx22) < 0x73)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx18) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx22) + 1) >> 1);
    __asm__("btr edx, esi");
    __asm__("ror cl, 0xee");
    __asm__("shld edx, eax, 0x1");
    *reinterpret_cast<uint16_t*>(&eax12) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax24) * reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&ebx16) & *reinterpret_cast<unsigned char*>(&edx18)))));
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&esi19) = *reinterpret_cast<uint16_t*>(&eax12);
    }
    __asm__("btr eax, 0xe8");
    *reinterpret_cast<unsigned char*>(&ebx16) = 0xff;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) + 1);
    __asm__("bsr eax, ebx");
    return eax12 + ebx16 + 0x6b330000 + (edx18 >> 1) + (ebp13 + 0x67b6664) + (esi19 & 0xadfa054a) + edi11 - 0x7e1abf95;
}

uint32_t log_size_7_var_001() {
    uint32_t eax1;
    uint32_t ebp2;
    uint32_t ebx3;
    uint16_t bp4;
    int32_t ecx5;
    uint1_t cf6;
    uint32_t eax7;
    uint32_t ebx8;
    uint32_t ebp9;
    int16_t dx10;
    uint16_t di11;
    uint32_t ecx12;
    uint32_t eax13;
    uint32_t esi14;
    uint32_t tmp32_15;
    uint32_t ebp16;
    uint16_t tmp16_17;
    uint32_t eax18;
    uint32_t ebp19;
    uint32_t ebx20;
    uint32_t edx21;
    uint32_t eax22;
    uint32_t edi23;
    uint32_t eax24;
    unsigned char tmp8_25;
    uint32_t tmp32_26;
    uint32_t edx27;
    uint32_t ecx28;
    uint32_t ebx29;

    eax1 = 0xbafe11f;
    ebp2 = 0x36a2a80b;
    __asm__("btc di, 0x6f");
    __asm__("rcr ax, cl");
    __asm__("rol cl, cl");
    __asm__("shld si, dx, 0xd");
    __asm__("rcr eax, 1");
    __asm__("lahf ");
    if (!__intrinsic()) {
    }
    *reinterpret_cast<int16_t*>(&eax1) = 0xbc1e;
    __asm__("rcr dh, 0x3d");
    __asm__("ror ecx, 0xd6");
    __asm__("btr ax, ax");
    ebx3 = 0xcc1629e7;
    bp4 = 0x5016;
    __asm__("rcl edx, 1");
    ecx5 = 0x1879299b;
    if (0) {
        ebx3 = 0xbafbc1e;
    }
    if (1) {
        bp4 = *reinterpret_cast<uint16_t*>(&ebx3);
    }
    __asm__("ror dl, 1");
    __asm__("rcl bx, 0xce");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx3) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx5) + 1) <= 78);
    cf6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx3) < 0x2e0b);
    *reinterpret_cast<uint16_t*>(&ebx3) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx3) - 0x2e0b);
    eax7 = eax1 + 0x7527d74a + cf6;
    __asm__("shld ax, ax, 0x1");
    __asm__("rcl ebp, cl");
    ebx8 = ebx3 >> 0x6c;
    __asm__("ror dl, 0x39");
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(bp4 ^ 0x515f);
    ebp9 = ebp2 << 1;
    if (1) {
        ebp9 = 0x861c1a48;
    }
    dx10 = *reinterpret_cast<int16_t*>(&ebx8);
    *reinterpret_cast<int16_t*>(&ebx8) = 0;
    di11 = reinterpret_cast<uint16_t>(0xeb5e >> reinterpret_cast<signed char>(0x65 - reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx5) + 1) - 78)));
    ecx12 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax7)));
    eax13 = eax7 - 0x808dda03;
    if (eax13) {
        *reinterpret_cast<int16_t*>(&ebp9) = dx10;
    }
    if (reinterpret_cast<int32_t>(eax7) <= reinterpret_cast<int32_t>(0x808dda03)) {
        *reinterpret_cast<uint16_t*>(&eax13) = di11;
    }
    __asm__("rcl edx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx8) + 1) = 0;
    if (1) {
        ecx12 = ebx8;
    }
    esi14 = 0x861c1a48 & eax13;
    tmp32_15 = ebp9 + 0x7065966e;
    ebp16 = tmp32_15;
    *reinterpret_cast<uint16_t*>(&ecx12) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx12) + *reinterpret_cast<uint16_t*>(&ebp16)) + reinterpret_cast<uint1_t>(tmp32_15 < ebp9));
    __asm__("rol bl, 0x9e");
    if (*reinterpret_cast<uint16_t*>(&ecx12) == *reinterpret_cast<uint16_t*>(&esi14)) {
        tmp16_17 = *reinterpret_cast<uint16_t*>(&ecx12);
        *reinterpret_cast<uint16_t*>(&ecx12) = *reinterpret_cast<uint16_t*>(&esi14);
        *reinterpret_cast<uint16_t*>(&esi14) = tmp16_17;
    }
    __asm__("btc bp, di");
    *reinterpret_cast<uint16_t*>(&ebp16) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebp16) >> *reinterpret_cast<unsigned char*>(&ecx12));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx12) + 1) = 0;
    if (*reinterpret_cast<uint16_t*>(&esi14) == di11) {
        *reinterpret_cast<uint16_t*>(&esi14) = di11;
    }
    __asm__("bts cx, bx");
    *reinterpret_cast<uint16_t*>(&eax13) = reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax13) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax13) + 1))));
    eax18 = eax13 * 0xce1ae27d;
    ebp19 = ebp16 << *reinterpret_cast<unsigned char*>(&ecx12);
    __asm__("bsr ebx, ecx");
    __asm__("bts esi, 0x5d");
    if (__intrinsic() | reinterpret_cast<uint1_t>(ebp19 == 0)) {
        ecx12 = ebp19;
    }
    __asm__("rcr edx, 0x8e");
    __asm__("ror al, 1");
    __asm__("cdq ");
    __asm__("shrd cx, si, cl");
    ebx20 = ebx8 | 0xc0000000;
    edx21 = eax18 % ebx20;
    eax22 = eax18 / ebx20;
    __asm__("bsf edx, edx");
    edi23 = eax22;
    __asm__("xadd esi, edi");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebx20) = *reinterpret_cast<int16_t*>(&ebp19);
    }
    *reinterpret_cast<unsigned char*>(&ebx20) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx20) + 30) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx20) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax22) >= 0x355a);
    __asm__("rcl cl, 1");
    eax24 = eax22 << 1;
    tmp8_25 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) & 0xc3) & 15);
    *reinterpret_cast<unsigned char*>(&ecx12) = *reinterpret_cast<unsigned char*>(&edx21);
    *reinterpret_cast<unsigned char*>(&edx21) = tmp8_25;
    tmp32_26 = ebp19 + ecx12 + 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx12) + 1) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_26 < ebp19) | reinterpret_cast<uint1_t>(tmp32_26 == 0)));
    edx27 = -(edx21 & 0x5a28e0bd);
    *reinterpret_cast<uint16_t*>(&edx27) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx27) + *reinterpret_cast<uint16_t*>(&edi23)) + 1);
    ecx28 = ecx12 << 1;
    ebx29 = ebx20 | tmp32_26;
    *reinterpret_cast<uint16_t*>(&edi23) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi23) + *reinterpret_cast<int16_t*>(&ecx28))));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx28) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx28) + 1) - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx28) + 1));
    *reinterpret_cast<int16_t*>(&eax24) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax24) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx29) + 1));
    __asm__("rcl bp, cl");
    return eax24 + ebx29 + (ecx28 >> 24 | ecx28 >> 8 & 0xff00 | ecx28 << 8 & 0xff0000 | ecx28 << 24) + edx27 + tmp32_26 + (esi14 - (edx27 + reinterpret_cast<uint1_t>(esi14 < edx27))) + (edi23 | tmp32_26) + 0x41ee92d3;
}

uint32_t log_size_7_var_002() {
    int32_t ecx1;
    int32_t edx2;
    uint32_t ebx3;
    uint32_t eax4;
    uint32_t ecx5;
    uint32_t ebx6;
    uint32_t eax7;
    uint32_t ecx8;
    uint32_t eax9;
    int16_t cx10;
    uint32_t ebp11;
    unsigned char bh12;
    uint32_t eax13;
    uint16_t ax14;
    int16_t cx15;
    unsigned char tmp8_16;
    uint32_t ebx17;
    uint16_t bx18;
    uint16_t tmp16_19;
    int32_t esi20;
    uint32_t eax21;
    uint32_t edx22;
    uint32_t ebx23;
    uint32_t tmp32_24;
    uint32_t edx25;
    uint32_t edi26;
    uint32_t ebx27;

    ecx1 = 0x80e4ee83;
    edx2 = 0x2cade637;
    ebx3 = 0x7729d23a + __intrinsic();
    if (__intrinsic()) {
        ecx1 = 0x7fdec289;
    }
    __asm__("rcr bp, 1");
    __asm__("rcr bx, 1");
    __asm__("rcr ecx, 1");
    eax4 = 0x92258f94;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1) >> 1);
    *reinterpret_cast<unsigned char*>(&ebx3) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx2) + 1));
    *reinterpret_cast<signed char*>(&eax4) = -71;
    __asm__("shld ebp, edx, cl");
    __asm__("btr edx, 0xe");
    ecx5 = ecx1 + ebx3;
    __asm__("rcr dh, 1");
    __asm__("cwd ");
    __asm__("rcr esi, 1");
    __asm__("ror edx, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax4) + 1) >> 1) >> 1);
    __asm__("bts edi, ebp");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr al, cl");
    if (__intrinsic() != __intrinsic()) {
        eax4 = eax4;
    }
    ebx6 = eax4 * 0x30f78b46;
    __asm__("btc dx, 0xc4");
    eax7 = eax4 | 0xc0000000;
    ecx8 = -ecx5 | 0xc0000000;
    eax9 = eax7 / eax7 / ecx8;
    *reinterpret_cast<uint16_t*>(&ebx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx6) | 0x9576);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx10) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx8) + 1) << *reinterpret_cast<unsigned char*>(&ecx8));
    ebp11 = 0xc93be069;
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1) + *reinterpret_cast<unsigned char*>(&ecx8));
    bh12 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx6) + 1) >> *reinterpret_cast<unsigned char*>(&ecx8));
    *reinterpret_cast<unsigned char*>(&cx10) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx8) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1))));
    *reinterpret_cast<int16_t*>(&eax9) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax9) * *reinterpret_cast<signed char*>(&eax9));
    __asm__("btc ecx, 0xd2");
    eax13 = eax9 ^ 0x7dffe825;
    __asm__("rcr di, 1");
    __asm__("btr bp, 0xd6");
    if (__intrinsic()) {
        cx10 = 0xfb5a;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) = reinterpret_cast<unsigned char>(bh12 - reinterpret_cast<unsigned char>(65 + reinterpret_cast<uint1_t>(bh12 < 65)));
    ax14 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax13) >> 1);
    *reinterpret_cast<unsigned char*>(&cx15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx10) & 15);
    __asm__("shld di, di, cl");
    if (0) {
        tmp8_16 = *reinterpret_cast<unsigned char*>(&cx15);
        *reinterpret_cast<unsigned char*>(&cx15) = *reinterpret_cast<unsigned char*>(&ebx6);
        *reinterpret_cast<unsigned char*>(&ebx6) = tmp8_16;
    }
    *reinterpret_cast<uint16_t*>(&eax13) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax14) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx6) + 1))));
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax13) + 1)) {
    }
    ebx17 = ebx6 | 0xc93be069;
    bx18 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx17) - reinterpret_cast<uint16_t>(0x6727 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx17) < reinterpret_cast<uint16_t>(0x6727 - __intrinsic()))));
    __asm__("btc ebp, edi");
    tmp16_19 = reinterpret_cast<uint16_t>(bx18 + 0x476d);
    *reinterpret_cast<uint16_t*>(&ebx17) = tmp16_19;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx15) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx10) + 1) + 4) + reinterpret_cast<uint1_t>(tmp16_19 < bx18));
    __asm__("rcl ch, 1");
    esi20 = 0x9bfd4db;
    __asm__("rol bx, 0x95");
    *reinterpret_cast<uint16_t*>(&ecx8) = reinterpret_cast<uint16_t>(cx15 >> *reinterpret_cast<unsigned char*>(&cx15));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx17) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx17) + 1) << 1);
    eax21 = (eax13 + 0xea8009) * ecx8;
    __asm__("bts dx, 0xb4");
    edx22 = reinterpret_cast<uint32_t>(~__intrinsic());
    ebx23 = ebx17 - 0x6689038c;
    __asm__("rcr si, cl");
    __asm__("rcl bx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx8) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx8) + 1));
    *reinterpret_cast<int16_t*>(&eax21) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax21) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax21) + 1));
    tmp32_24 = edx22 + 0x9bfd4db;
    edx25 = tmp32_24;
    *reinterpret_cast<uint16_t*>(&esi20) = reinterpret_cast<uint16_t>(0xd4db - reinterpret_cast<uint16_t>(0x2c62 + reinterpret_cast<uint1_t>(0xd4db < reinterpret_cast<uint16_t>(0x2c62 + reinterpret_cast<uint1_t>(tmp32_24 < edx22)))));
    __asm__("shld bp, ax, 0x1");
    __asm__("rcl edx, 1");
    *reinterpret_cast<unsigned char*>(&ecx8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx8) & 15);
    __asm__("shld cx, si, cl");
    if (!static_cast<int1_t>(edx25 >> ebx23)) {
        edx25 = ebx23;
    }
    edi26 = reinterpret_cast<uint32_t>(-0xfe6765e9);
    __asm__("shrd eax, eax, 0xc2");
    __asm__("bts ecx, ebp");
    *reinterpret_cast<uint16_t*>(&edi26) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi26) + 0x6b8) + *reinterpret_cast<uint16_t*>(&ecx8)) + 1);
    *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax21) - 1);
    ebx27 = (ebx23 ^ 0x6a36b9) >> 92;
    __asm__("btc edx, eax");
    __asm__("rcl eax, 1");
    *reinterpret_cast<uint16_t*>(&ebp11) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xf034 >> -42) + 0x6374)));
    *reinterpret_cast<int16_t*>(&ebx27) = -*reinterpret_cast<int16_t*>(&ebx27);
    __asm__("rcl al, 0x50");
    __asm__("shld esi, edi, cl");
    return eax21 + ebx27 + ecx8 + edx25 + ebp11 + esi20 + edi26 - 0x5b9d037e;
}

uint32_t log_size_7_var_003() {
    uint32_t ecx1;
    uint32_t edx2;
    uint32_t ebp3;
    int32_t esi4;
    uint32_t edi5;
    int32_t ebx6;
    uint32_t eax7;
    uint32_t edi8;
    unsigned char cl9;
    unsigned char bh10;
    uint32_t ebx11;
    uint32_t ecx12;
    uint16_t si13;
    uint16_t ax14;
    uint32_t edx15;
    uint32_t eax16;
    uint16_t dx17;
    uint32_t esi18;
    uint32_t ebx19;
    unsigned char tmp8_20;
    uint32_t ecx21;
    uint32_t edx22;
    uint32_t ebx23;
    uint32_t esi24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;

    ecx1 = 0xc7d5ace1;
    edx2 = 0xfc76bcb9;
    ebp3 = 0x383c6374;
    esi4 = 0x749950f;
    edi5 = 0x732dc8b5;
    if (1) {
        *reinterpret_cast<uint16_t*>(&esi4) = 0x2ca8;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + 0xb9);
    ebx6 = 0xd2d9c8ec;
    *reinterpret_cast<uint16_t*>(&ecx1) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx1) + 0xc8ec) + 1);
    __asm__("shld di, dx, 0xd");
    *reinterpret_cast<uint16_t*>(&edi5) = reinterpret_cast<uint16_t>(0xc8b5 & *reinterpret_cast<uint16_t*>(&ecx1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = __intrinsic();
    __asm__("ror al, 1");
    *reinterpret_cast<unsigned char*>(&ebx6) = reinterpret_cast<unsigned char>(0xec + *reinterpret_cast<unsigned char*>(&ecx1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) & 0xb9);
    if (1) {
        *reinterpret_cast<uint16_t*>(&ebx6) = *reinterpret_cast<uint16_t*>(&edi5);
    }
    __asm__("rcr edx, 1");
    *reinterpret_cast<uint16_t*>(&ebp3) = reinterpret_cast<uint16_t>(0x6374 & *reinterpret_cast<uint16_t*>(&ecx1));
    __asm__("rcr si, 0x32");
    __asm__("bsf edi, ecx");
    eax7 = 0xe18;
    edi8 = edi5 - (0xacc684b - reinterpret_cast<uint1_t>(edi5 < 0xf53397b5));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    cl9 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) - 1);
    bh10 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) + 24)));
    if (reinterpret_cast<signed char>(bh10) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<uint16_t*>(&esi4) = 0x8531;
    }
    *reinterpret_cast<int16_t*>(&edi8) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edi8) >> cl9);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) = reinterpret_cast<unsigned char>(bh10 | cl9);
    __asm__("rcr esi, 0xe");
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl9 - 4) + 1);
    ebx11 = reinterpret_cast<uint32_t>((ebx6 << 1) - 0x53bedde5);
    ecx12 = ecx1 ^ ebp3;
    __asm__("bts dx, 0x3d");
    si13 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi4) ^ 0x86d8);
    *reinterpret_cast<unsigned char*>(&ecx12) = __intrinsic();
    __asm__("btr dx, 0x2c");
    ax14 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax7) * *reinterpret_cast<uint16_t*>(&ecx12));
    *reinterpret_cast<uint16_t*>(&edx2) = __intrinsic();
    __asm__("rcl eax, 1");
    if (1) {
        *reinterpret_cast<uint16_t*>(&edx2) = ax14;
    }
    *reinterpret_cast<uint16_t*>(&eax7) = reinterpret_cast<uint16_t>(ax14 - 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx11) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx11) + 1) >> 68);
    edx15 = edx2 << 1;
    __asm__("rcl ah, 1");
    __asm__("rol dh, 1");
    __asm__("rcl ebp, 1");
    *reinterpret_cast<uint16_t*>(&esi4) = reinterpret_cast<uint16_t>(si13 - reinterpret_cast<uint16_t>(0x74f4 + reinterpret_cast<uint1_t>(si13 < 0x74f5)));
    __asm__("ror bp, cl");
    __asm__("btc cx, 0xac");
    eax16 = eax7 >> 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx12) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("ror di, cl");
    dx17 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx15) | *reinterpret_cast<uint16_t*>(&ebx11));
    esi18 = esi4 + eax16 + 1;
    __asm__("ror cl, 1");
    *reinterpret_cast<uint16_t*>(&ecx12) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx12) + 0x75da) + 1);
    __asm__("btc esi, ecx");
    ebx19 = ebx11 << *reinterpret_cast<unsigned char*>(&ecx12);
    __asm__("rol cl, 0xf9");
    tmp8_20 = *reinterpret_cast<unsigned char*>(&ecx12);
    *reinterpret_cast<unsigned char*>(&ecx12) = *reinterpret_cast<unsigned char*>(&dx17);
    *reinterpret_cast<unsigned char*>(&dx17) = tmp8_20;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ecx12) = *reinterpret_cast<uint16_t*>(&esi18);
    }
    __asm__("bts ebx, edx");
    *reinterpret_cast<uint16_t*>(&ebx19) = -*reinterpret_cast<uint16_t*>(&ebx19);
    *reinterpret_cast<uint16_t*>(&edx15) = -dx17;
    *reinterpret_cast<unsigned char*>(&ebx19) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        *reinterpret_cast<uint16_t*>(&ebx19) = *reinterpret_cast<uint16_t*>(&ecx12);
    }
    *reinterpret_cast<int16_t*>(&eax16) = 0;
    *reinterpret_cast<uint16_t*>(&ecx21) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx12) >> *reinterpret_cast<unsigned char*>(&ecx12));
    edx22 = edx15 ^ esi18;
    if (!edx22) {
        ecx21 = esi18;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx22) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx22) + 1) + *reinterpret_cast<unsigned char*>(&ecx21))));
    ebx23 = ebx19 >> 100;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) << *reinterpret_cast<unsigned char*>(&ecx21));
    esi24 = eax16;
    eax25 = esi18;
    __asm__("shrd esi, esi, 0x1");
    *reinterpret_cast<unsigned char*>(&ebx23) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (!__intrinsic()) {
        eax25 = 0x383c0000;
    }
    __asm__("rcl ch, 1");
    if (__intrinsic()) {
        esi24 = edi8 + 0x63cf8685 & 0x2c85416c;
    }
    __asm__("rol dh, 0x62");
    eax26 = eax25 & 0x74f38578;
    __asm__("rol dl, 1");
    *reinterpret_cast<uint16_t*>(&edx22) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx22) & *reinterpret_cast<uint16_t*>(&eax26)) + *reinterpret_cast<int16_t*>(&ebx23));
    __asm__("bsf edx, ecx");
    eax27 = eax26 + 0x39c48794;
    if (!__intrinsic()) {
    }
    __asm__("xadd ebp, ebp");
    __asm__("rcl ebx, 0xf6");
    return eax27 + ebx23 - 0x2f26d5b6 + edx22 + 0x383c0000 + esi24 + (0xd0d92a4a - (eax27 + reinterpret_cast<uint1_t>(0xd0d92a4a < eax27 + 1))) + 0x7d1cba6a;
}

uint32_t log_size_7_var_004() {
    int32_t eax1;
    uint32_t ecx2;
    uint32_t ebx3;
    unsigned char bh4;
    uint32_t ecx5;
    uint1_t cf6;
    uint32_t ecx7;
    unsigned char ah8;
    int32_t ebx9;
    uint32_t esi10;
    int32_t eax11;
    uint32_t ecx12;
    uint16_t bx13;
    uint1_t cf14;
    uint32_t edi15;
    int32_t ebx16;
    uint32_t ebp17;
    uint32_t esi18;
    uint32_t ebp19;
    int32_t edx20;
    int32_t eax21;
    uint32_t ebx22;

    eax1 = 0xc81d6060;
    ecx2 = 0x77a23c16;
    __asm__("rol cx, cl");
    __asm__("rcr bx, 1");
    ebx3 = 0xd6a828a0;
    bh4 = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) - reinterpret_cast<unsigned char>(bh4 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx2) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(bh4)))));
    __asm__("shrd bp, si, 0x1");
    *reinterpret_cast<uint16_t*>(&ebx3) = bh4;
    ecx5 = 0xa277 | ecx2 << 8 & 0xff0000 | 0x16000000;
    *reinterpret_cast<signed char*>(&ecx5) = -0x77;
    cf6 = reinterpret_cast<uint1_t>(ecx5 < 0x1de64fc8);
    ecx7 = ecx5 - (0x1de64fc7 + cf6);
    ah8 = reinterpret_cast<uint1_t>(ecx5 > 0x1de64fc7 + cf6);
    __asm__("rcr cx, 0xb7");
    *reinterpret_cast<int16_t*>(&eax1) = reinterpret_cast<int16_t>(96 * reinterpret_cast<signed char>(ah8 - reinterpret_cast<unsigned char>(0xc9 + reinterpret_cast<uint1_t>(ah8 < 0xc9))));
    *reinterpret_cast<unsigned char*>(&ecx7) = 0;
    __asm__("rol dl, 0x47");
    __asm__("xadd dh, ah");
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())));
    ebx9 = eax1;
    esi10 = reinterpret_cast<uint32_t>(0x9749af5b >> -51);
    __asm__("shrd si, dx, 0x6");
    eax11 = 0x3f46b888;
    ecx12 = ecx7 * 0x9ddb8c25;
    __asm__("ror bp, cl");
    __asm__("shld edx, eax, cl");
    *reinterpret_cast<uint16_t*>(&eax11) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xb888 * *reinterpret_cast<uint16_t*>(&ebx9)) * *reinterpret_cast<uint16_t*>(&ecx12));
    __asm__("rcr cl, cl");
    bx13 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx9) >> 1);
    __asm__("rol dx, 1");
    *reinterpret_cast<uint16_t*>(&ecx12) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx12) >> 19) << 1);
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&esi10) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi10) | 0xf76f) ^ bx13);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) = __intrinsic();
    __asm__("rcl bp, 1");
    __asm__("bts cx, 0xd8");
    __asm__("rcl bp, 1");
    __asm__("rcl edx, 1");
    __asm__("rcr bx, 1");
    *reinterpret_cast<uint16_t*>(&eax11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax11) - 1);
    __asm__("ror al, 1");
    __asm__("rol ax, cl");
    *reinterpret_cast<uint16_t*>(&ebx9) = reinterpret_cast<uint16_t>(bx13 + 1);
    __asm__("shld edx, edi, cl");
    __asm__("shld ebx, edi, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1))))));
    __asm__("btc edx, edx");
    __asm__("rcr eax, 1");
    cf14 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx12) + 1) < 0x7a);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx12) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx12) + 1) - reinterpret_cast<unsigned char>(0x79 + cf14));
    edi15 = ebx3 - (0x545a22bc + reinterpret_cast<uint1_t>(ebx3 < 0x545a22bc + cf14));
    ebx16 = ebx9 - 0x105abf8d;
    ebp17 = *reinterpret_cast<uint16_t*>(&eax11);
    *reinterpret_cast<unsigned char*>(&ecx12) = reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax11) + 1));
    esi18 = esi10 | ecx12;
    *reinterpret_cast<unsigned char*>(&ecx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx12) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) + 1))));
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) | 0xa5);
    __asm__("shld esi, eax, 0x1");
    if (!__intrinsic()) {
    }
    ebp19 = ebp17 - (ecx12 + reinterpret_cast<uint1_t>(ebp17 < ecx12 + 1));
    *reinterpret_cast<int16_t*>(&ebp19) = -*reinterpret_cast<int16_t*>(&ebp19);
    edx20 = 0x36bcd9c5;
    *reinterpret_cast<uint16_t*>(&ecx12) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx12) | *reinterpret_cast<uint16_t*>(&edi15));
    eax21 = eax11 >> *reinterpret_cast<unsigned char*>(&ecx12);
    __asm__("rcl dx, 1");
    __asm__("rol ax, cl");
    __asm__("rol dh, 0x8d");
    ebx22 = reinterpret_cast<uint32_t>(ebx16 >> -92);
    *reinterpret_cast<int16_t*>(&edx20) = __intrinsic();
    __asm__("rcr cx, 1");
    *reinterpret_cast<uint16_t*>(&eax21) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax21) * *reinterpret_cast<uint16_t*>(&edi15)) >> 1);
    *reinterpret_cast<unsigned char*>(&ecx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) & 15);
    __asm__("shrd cx, dx, cl");
    return eax21 + ebx22 + ecx12 + (edx20 - 0x2004e62d) + -ebp19 + -esi18 + (edi15 - (ebx22 + reinterpret_cast<uint1_t>(edi15 < ebx22))) + 0x38bbc1b1;
}

uint32_t log_size_7_var_005() {
    int32_t edx1;
    int32_t ebp2;
    uint32_t esi3;
    int16_t cx4;
    int32_t eax5;
    uint32_t ecx6;
    uint32_t edx7;
    uint32_t eax8;
    int32_t edx9;
    int32_t ebx10;
    uint32_t ebp11;
    uint32_t ecx12;
    uint16_t cx13;
    uint32_t esi14;
    uint32_t edx15;
    uint32_t eax16;
    uint32_t ebx17;
    uint32_t edi18;
    uint32_t edx19;
    uint16_t bp20;
    uint32_t esi21;
    uint32_t eax22;
    uint32_t ecx23;
    int32_t eax24;
    uint32_t eax25;
    uint32_t ecx26;
    uint16_t ax27;
    uint32_t ecx28;
    uint32_t ebp29;

    edx1 = 0x53350eea;
    ebp2 = 0x635c12ca;
    esi3 = 0x3e87249c;
    __asm__("rcr ecx, 1");
    cx4 = -0xaa80;
    __asm__("rcr cl, 1");
    __asm__("bts esi, 0x8f");
    __asm__("rcr dl, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) << *reinterpret_cast<unsigned char*>(&cx4));
    eax5 = 0x1043dfa * edx1;
    ecx6 = 0xffffffa8;
    __asm__("ror cl, cl");
    __asm__("rcl bp, 0x49");
    __asm__("rol al, cl");
    __asm__("rol bh, cl");
    if (0) {
        *reinterpret_cast<uint16_t*>(&esi3) = 0x12ca;
        *reinterpret_cast<uint16_t*>(&ebp2) = 0x249c;
    }
    edx7 = __intrinsic() >> 0xa8;
    *reinterpret_cast<int16_t*>(&eax5) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax5) + *reinterpret_cast<int16_t*>(&edx7));
    __asm__("ror edx, 0x5e");
    __asm__("xadd cx, bp");
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp2) - reinterpret_cast<uint16_t>(0x2503 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebp2) < 0xdafe)));
    __asm__("bsf edx, ecx");
    eax8 = eax5 * esi3;
    edx9 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&edx9) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx9) + *reinterpret_cast<uint16_t*>(&esi3))));
    __asm__("xadd edi, ebp");
    __asm__("shrd ax, bx, 0x1");
    __asm__("ror cx, 0xa3");
    *reinterpret_cast<int16_t*>(&eax8) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax8) - 0x540f);
    ebx10 = 0x5b91a131;
    __asm__("rcl esi, 0x41");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) + 0x6a);
    __asm__("shrd eax, ebx, 0x1");
    ebp11 = ebp2 - 0x79242015 + 1;
    __asm__("ror al, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx6) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edx9) < reinterpret_cast<int16_t>(0) == __intrinsic()) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx10) + 1)) ^ 0xa8);
    __asm__("rol bp, 1");
    ecx12 = ecx6 >> 1;
    cx13 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx12) | *reinterpret_cast<uint16_t*>(&ebp11));
    __asm__("rol ecx, 1");
    esi14 = esi3 | 0xc0000000;
    edx15 = eax8 % esi14;
    eax16 = eax8 / esi14;
    ebx17 = 0x31a1915b;
    edi18 = (0x2c367251 + edx9 + 1) * 0xcb25e734;
    *reinterpret_cast<uint16_t*>(&eax16) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax16) * cx13);
    *reinterpret_cast<int16_t*>(&edx15) = __intrinsic();
    edx19 = edx15 >> 42;
    *reinterpret_cast<uint16_t*>(&ecx12) = reinterpret_cast<uint16_t>(cx13 & 0x9c7b);
    __asm__("bts bp, 0x20");
    if (*reinterpret_cast<signed char*>(&eax16) == *reinterpret_cast<signed char*>(&edx19)) {
        *reinterpret_cast<signed char*>(&eax16) = *reinterpret_cast<signed char*>(&edx19);
    }
    *reinterpret_cast<unsigned char*>(&ebx17) = __intrinsic();
    bp20 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebp11) >> 1);
    __asm__("rol di, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) - *reinterpret_cast<signed char*>(&ecx12));
    __asm__("xadd dx, bx");
    esi21 = *reinterpret_cast<uint16_t*>(&ebx17);
    if (*reinterpret_cast<uint16_t*>(&ebx17) == *reinterpret_cast<uint16_t*>(&ebx17)) {
        *reinterpret_cast<uint16_t*>(&ebx17) = *reinterpret_cast<uint16_t*>(&ebx17);
    }
    eax22 = eax16 - eax16;
    __asm__("rcl dh, 1");
    ecx23 = ecx12 ^ esi21;
    __asm__("shld ecx, edx, 0x60");
    eax24 = reinterpret_cast<int16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&eax22) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax22) + 1)))) >> 10);
    eax25 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax24)));
    *reinterpret_cast<unsigned char*>(&ebx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx17) << *reinterpret_cast<unsigned char*>(&ecx23));
    if (1) {
        bp20 = *reinterpret_cast<uint16_t*>(&edi18);
    }
    *reinterpret_cast<uint16_t*>(&eax25) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax25) - reinterpret_cast<uint16_t>(0x47fb + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax25) < 0x47fb)));
    ecx26 = (ecx23 & 0x4b09527c) - eax25;
    *reinterpret_cast<int16_t*>(&esi21) = 0x82d9;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&esi21) = *reinterpret_cast<int16_t*>(&ecx26);
    }
    ax27 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax25) >> 36);
    *reinterpret_cast<uint16_t*>(&eax25) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax27) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ebx17)))) >> -24);
    *reinterpret_cast<uint16_t*>(&ebp11) = reinterpret_cast<uint16_t>(bp20 & *reinterpret_cast<uint16_t*>(&edi18));
    *reinterpret_cast<unsigned char*>(&ecx26) = 1;
    __asm__("rcl ebp, 1");
    __asm__("ror bl, 0xb9");
    *reinterpret_cast<uint16_t*>(&ebx17) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx17) + 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&ebx17) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx17) == 0)) {
    }
    __asm__("shld bx, bp, 0x1");
    __asm__("rcr bl, 0xd8");
    __asm__("ror bl, 0x82");
    ecx28 = ecx26 & 0xab284dd1;
    __asm__("rcl dx, 1");
    __asm__("btc ax, 0xcb");
    ebp29 = ebp11 >> 24 | ebp11 >> 8 & 0xff00 | ebp11 << 8 & 0xff0000 | ebp11 << 24;
    __asm__("rol esi, 1");
    *reinterpret_cast<uint16_t*>(&eax25) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax25) - 0x3cb7) + __intrinsic());
    *reinterpret_cast<uint16_t*>(&ebp29) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp29) - 0x2c8a) + 1);
    *reinterpret_cast<uint16_t*>(&edi18) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edi18) >> 1) + 1);
    return eax25 + (reinterpret_cast<int32_t>(ebx17) >> 1) + ecx28 - 0x58c5 + ebp29 + esi21 + edi18 - 0x847be94;
}

uint32_t log_size_7_var_006() {
    int32_t ebx1;
    uint32_t ebp2;
    int32_t edi3;
    uint32_t ebx4;
    int32_t eax5;
    uint32_t esi6;
    int32_t ecx7;
    int32_t eax8;
    int32_t edx9;
    int16_t dx10;
    unsigned char ch11;
    uint32_t ebx12;
    uint32_t edx13;
    uint16_t bx14;
    uint16_t tmp16_15;
    uint1_t below_or_equal16;
    uint32_t edi17;
    uint16_t bp18;
    uint32_t eax19;

    ebx1 = 0x5602bf48;
    ebp2 = 0x1113ed6b;
    edi3 = 0xe5968004;
    __asm__("rol dx, 1");
    *reinterpret_cast<unsigned char*>(&ebx1) = reinterpret_cast<unsigned char>(72 >> -20);
    ebx4 = ebx1 + 0x199e0001;
    __asm__("rcr ebx, 0xb1");
    __asm__("rcl dh, cl");
    __asm__("ror dx, 0x3b");
    eax5 = 0;
    if (1) {
    }
    esi6 = 0xee3f92ac;
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&ebx4) <= reinterpret_cast<int16_t>(0xfd94));
    if (*reinterpret_cast<uint16_t*>(&ebx4) >= 0xfd94) {
        esi6 = ebx4;
    }
    ecx7 = 0xccf0071;
    __asm__("rcl esi, 1");
    __asm__("shrd esi, eax, cl");
    eax8 = ~eax5;
    edx9 = 0x1214ffff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx10) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx9) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx4) + 1));
    *reinterpret_cast<unsigned char*>(&dx10) = reinterpret_cast<unsigned char>(0xff & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1));
    *reinterpret_cast<int16_t*>(&edx9) = reinterpret_cast<int16_t>(dx10 * 0x2c58);
    __asm__("shld edi, eax, 0xe6");
    ch11 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx7) + 1) ^ *reinterpret_cast<unsigned char*>(&edx9));
    if (ch11) {
    }
    if (1) {
        *reinterpret_cast<uint16_t*>(&ebx4) = *reinterpret_cast<uint16_t*>(&ebx4);
    }
    *reinterpret_cast<unsigned char*>(&edx9) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx9) + 0x71)));
    ebx12 = ebx4 - (0x5696332d + reinterpret_cast<uint1_t>(ebx4 < 0x5696332e));
    __asm__("bts ebp, 0x19");
    *reinterpret_cast<uint16_t*>(&edi3) = 0xec9a;
    *reinterpret_cast<signed char*>(&eax8) = 0x81;
    edx13 = edx9 + eax8 + 1;
    __asm__("ror ah, cl");
    __asm__("rol bx, 1");
    __asm__("rcr dh, cl");
    __asm__("bsf eax, edi");
    bx14 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx12) & 0x2911);
    __asm__("lahf ");
    __asm__("rcr si, 1");
    __asm__("ror ebp, 1");
    __asm__("rol eax, 1");
    __asm__("rcl edi, 1");
    __asm__("ror edi, 0x41");
    *reinterpret_cast<uint16_t*>(&eax8) = 0x5000;
    *reinterpret_cast<uint16_t*>(&edx13) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx13) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        edi3 = 0xffff5000;
        eax8 = 0xe596ec9a;
    }
    tmp16_15 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(reinterpret_cast<signed char>(ch11) + *reinterpret_cast<uint16_t*>(&edx13))));
    *reinterpret_cast<uint16_t*>(&esi6) = tmp16_15;
    below_or_equal16 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp16_15 < reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(ch11)))) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&esi6) == 0));
    if (below_or_equal16) {
        *reinterpret_cast<uint16_t*>(&esi6) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&eax8) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx14) + 1))));
    }
    if (!below_or_equal16) {
        *reinterpret_cast<uint16_t*>(&edx13) = *reinterpret_cast<uint16_t*>(&edi3);
    }
    edi17 = reinterpret_cast<uint32_t>(edi3 + 1);
    *reinterpret_cast<uint16_t*>(&ebx12) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(bx14)))) + static_cast<uint1_t>(edx13 >> 0x1c3a753f));
    __asm__("shld ecx, esi, 0x62");
    __asm__("shrd esi, ebp, 0x84");
    __asm__("rol ch, cl");
    __asm__("bsf edx, eax");
    *reinterpret_cast<uint16_t*>(&edx13) = 0xc0;
    __asm__("shld di, dx, 0x1");
    __asm__("ror cx, 0x61");
    __asm__("ror bh, 1");
    __asm__("xadd si, bp");
    bp18 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xf2e9 >> -45) * 0x84b2);
    eax19 = 0x1c3a0000 & edi17;
    __asm__("btr dx, 0x1a");
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(bp18 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi6) + reinterpret_cast<uint1_t>(bp18 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&esi6))))));
    if (reinterpret_cast<int32_t>(ebp2 & 0x6883be94) < reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<uint16_t*>(&eax19) = 0xc010;
    }
    *reinterpret_cast<uint16_t*>(&eax19) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax19) + *reinterpret_cast<uint16_t*>(&ebp2))));
    return eax19 + ebx12 + 0xccfc010 + edx13 + ebp2 + esi6 + edi17 - 0x228a2400;
}

uint32_t log_size_7_var_007() {
    int32_t ebx1;
    int32_t ebp2;
    uint32_t esi3;
    uint32_t edx4;
    uint16_t tmp16_5;
    uint1_t cf6;
    uint32_t edx7;
    uint16_t si8;
    uint32_t edi9;
    uint32_t edi10;
    uint32_t ecx11;
    uint16_t cx12;
    uint16_t cx13;
    uint32_t eax14;
    uint32_t esi15;
    uint32_t eax16;
    uint16_t si17;
    uint16_t ax18;
    uint16_t dx19;
    uint1_t zf20;
    uint16_t ax21;
    uint32_t esi22;
    uint32_t eax23;
    int32_t ebp24;
    uint32_t ebx25;
    uint32_t ecx26;

    ebx1 = 0xcfc38870;
    ebp2 = 0xf145b73f;
    __asm__("shld dx, di, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) - reinterpret_cast<unsigned char>(60 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) < 61)));
    esi3 = 0x71723d63;
    edx4 = 0x5715500a;
    __asm__("shrd si, cx, 0x1");
    __asm__("rcl cx, 1");
    *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<unsigned char>(10 - reinterpret_cast<unsigned char>(0x6c + reinterpret_cast<uint1_t>(10 < reinterpret_cast<unsigned char>(0x6c + __intrinsic()))));
    __asm__("rcl cl, 1");
    tmp16_5 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx1) + 0x5284)));
    cf6 = reinterpret_cast<uint1_t>(tmp16_5 < *reinterpret_cast<uint16_t*>(&ebx1));
    if (!tmp16_5) {
    }
    edx7 = -edx4;
    si8 = reinterpret_cast<uint16_t>(0x3d62 ^ reinterpret_cast<uint16_t>(0x6987 - cf6));
    __asm__("rcl ebx, 1");
    __asm__("rol ecx, cl");
    __asm__("ror dl, cl");
    __asm__("bts bp, 0x79");
    __asm__("btc bx, bp");
    *reinterpret_cast<uint16_t*>(&esi3) = reinterpret_cast<uint16_t>(si8 + si8);
    edi9 = esi3;
    __asm__("shrd ax, si, cl");
    *reinterpret_cast<uint16_t*>(&ebp2) = reinterpret_cast<uint16_t>(0xb73f ^ *reinterpret_cast<uint16_t*>(&edi9));
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebp2) == 0)) {
        edi9 = edi9;
    }
    if (__intrinsic()) {
        esi3 = edx7;
    }
    if (__intrinsic()) {
    }
    edi10 = 0x5715f10f;
    ecx11 = edi9;
    __asm__("rcr ecx, 1");
    __asm__("rol bp, cl");
    cx12 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx11) - *reinterpret_cast<uint16_t*>(&esi3));
    __asm__("shrd dx, si, 0x1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx7) + 1) = -48;
    __asm__("rcl bp, 1");
    __asm__("btc esi, 0xab");
    __asm__("rcr edx, 1");
    *reinterpret_cast<unsigned char*>(&cx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx12) >> 1);
    eax14 = *reinterpret_cast<uint16_t*>(&ebp2);
    __asm__("shld ebx, esi, 0xa2");
    *reinterpret_cast<int16_t*>(&edi10) = *reinterpret_cast<signed char*>(&eax14);
    esi15 = esi3 + 0x5715f10f + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx11) < *reinterpret_cast<uint16_t*>(&esi3)) + 1;
    __asm__("rcl si, 1");
    __asm__("ror cl, 0xbf");
    __asm__("ror edx, 0x92");
    eax16 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax14) >> 63);
    __asm__("ror dl, 0xb4");
    si17 = static_cast<uint16_t>(edx7 + ebp2 * 4 + 0x73);
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) - 38) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx13) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx12) + 1) - *reinterpret_cast<unsigned char*>(&eax16));
    if (__intrinsic()) {
    }
    __asm__("rcl di, 0xb5");
    ax18 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax16) & 0x3fff);
    dx19 = reinterpret_cast<uint16_t>(ax18 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&edx7) | 0xc0)));
    zf20 = reinterpret_cast<uint1_t>(dx19 == si17);
    if (zf20) {
        si17 = dx19;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf20)) {
        *reinterpret_cast<uint16_t*>(&ebp2) = cx13;
    }
    __asm__("rcl esi, 1");
    *reinterpret_cast<unsigned char*>(&ecx11) = 1;
    __asm__("ror si, cl");
    __asm__("shld eax, esi, 0x34");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
    }
    ax21 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(ax18 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&dx19))) >> 1);
    __asm__("ror dh, cl");
    __asm__("rol bl, 1");
    *reinterpret_cast<uint16_t*>(&esi15) = reinterpret_cast<uint16_t>(si17 + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx11) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&esi15) < reinterpret_cast<int16_t>(0));
    __asm__("ror bx, 1");
    *reinterpret_cast<uint16_t*>(&eax16) = reinterpret_cast<uint16_t>(ax21 * ax21);
    __asm__("shld ebx, edx, cl");
    __asm__("rol ah, 0x7f");
    esi22 = (esi15 - ecx11) * 0x4aa711b;
    eax23 = eax16 | 0xa00413c6;
    ebp24 = ebp2 + 1;
    __asm__("bts eax, ebp");
    ebx25 = ebp24 + eax23;
    *reinterpret_cast<int16_t*>(&ebx25) = *reinterpret_cast<int16_t*>(&esi22);
    ecx26 = ebx25;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx25) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx25) + 1) << *reinterpret_cast<unsigned char*>(&ecx26));
    *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&eax23)) >> *reinterpret_cast<unsigned char*>(&ecx26));
    __asm__("shld esi, edi, 0xd2");
    __asm__("ror al, cl");
    __asm__("rol si, cl");
    return eax23 + ebx25 + ecx26 + edi10 + ebp24 + edi10 - 0x718466bd;
}

uint32_t log_size_7_var_008() {
    int32_t edx1;
    uint32_t edi2;
    int32_t ecx3;
    int32_t eax4;
    uint32_t esi5;
    uint32_t ebx6;
    unsigned char bh7;
    int16_t ax8;
    uint1_t less_or_equal9;
    uint32_t eax10;
    int32_t edx11;
    uint32_t ebx12;
    uint32_t ecx13;
    uint16_t ax14;
    uint32_t ebp15;
    uint32_t ebx16;
    uint32_t edx17;
    uint32_t ecx18;
    uint16_t tmp16_19;
    uint1_t cf20;
    uint16_t cx21;
    uint32_t edi22;
    uint32_t ebp23;
    int16_t ax24;
    int32_t ebx25;

    edx1 = 0x66ca8fdd;
    __asm__("shld bx, si, cl");
    edi2 = reinterpret_cast<uint32_t>(-0xe980a1d5);
    ecx3 = 0x24595f97;
    __asm__("btr si, 0xf8");
    __asm__("rcr esi, cl");
    eax4 = 0x2800000;
    if (0) {
        *reinterpret_cast<int16_t*>(&eax4) = 0x8fdd;
        *reinterpret_cast<int16_t*>(&edx1) = 0;
    }
    __asm__("bts bx, 0x95");
    esi5 = 0xce3441d6;
    if (!__intrinsic()) {
        esi5 = edi2;
    }
    ebx6 = static_cast<uint16_t>(eax4 + eax4 + 0x19d22b1a);
    if (1) {
        ebx6 = esi5;
    }
    bh7 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx6) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx6))))));
    __asm__("rcl di, 0x92");
    *reinterpret_cast<unsigned char*>(&ebx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx6) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx3) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) = reinterpret_cast<unsigned char>(bh7 & 0x6b);
    __asm__("rcr di, 0x54");
    __asm__("btr cx, 0xc9");
    __asm__("rol edx, cl");
    ax8 = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1)) * *reinterpret_cast<signed char*>(&edx1)) * 0x5694);
    __asm__("rol si, 0xcd");
    *reinterpret_cast<unsigned char*>(&ax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax8) & 0xce);
    __asm__("rol dh, cl");
    __asm__("shrd ebx, ecx, 0x6d");
    *reinterpret_cast<unsigned char*>(&ebx6) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx6) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1)) + 1);
    less_or_equal9 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&ebx6) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx6) == 0));
    *reinterpret_cast<uint16_t*>(&edi2) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1)));
    if (!less_or_equal9) {
    }
    if (less_or_equal9) {
        esi5 = ebx6;
    }
    if (0) {
        *reinterpret_cast<uint16_t*>(&esi5) = *reinterpret_cast<uint16_t*>(&edi2);
    }
    *reinterpret_cast<int16_t*>(&ecx3) = 0x5f00;
    __asm__("shld esi, ecx, cl");
    __asm__("rol bp, 1");
    __asm__("shrd si, cx, 0x1");
    __asm__("rcl ebx, 1");
    __asm__("xadd cx, bx");
    *reinterpret_cast<unsigned char*>(&ebx6) = 1;
    __asm__("shld edx, eax, 0x1");
    __asm__("bts edx, 0xe7");
    __asm__("shrd si, cx, 0xd");
    *reinterpret_cast<int16_t*>(&eax4) = -reinterpret_cast<int16_t>(ax8 * __intrinsic());
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(__intrinsic() == __intrinsic());
    __asm__("rol esi, 1");
    eax10 = reinterpret_cast<uint32_t>(eax4 * ecx3);
    edx11 = __intrinsic();
    __asm__("rcl eax, 0x5e");
    ebx12 = ebx6 - 1;
    __asm__("bsr ebp, edx");
    __asm__("rol edx, 1");
    __asm__("rcl si, 1");
    if (!__intrinsic()) {
        eax10 = ebx12;
    }
    __asm__("rcl dh, 0x17");
    __asm__("btc dx, 0xc5");
    ecx13 = ecx3 + esi5;
    __asm__("rcl ebp, 1");
    __asm__("shrd esi, edx, 0x32");
    __asm__("shrd esi, ebp, 0x1");
    __asm__("rcr ax, 1");
    ax14 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax10) ^ *reinterpret_cast<uint16_t*>(&edi2)) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx11) = reinterpret_cast<uint16_t>(ax14 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&edx11) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&eax10) = reinterpret_cast<uint16_t>(ax14 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&edx11)));
    *reinterpret_cast<uint16_t*>(&ebx12) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx12) | *reinterpret_cast<uint16_t*>(&ecx13));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax10) + 1) = __intrinsic();
    ebp15 = ebx12;
    ebx16 = 0x827f5694;
    edx17 = reinterpret_cast<uint32_t>(edx11 * 0x4c370c16 + 1);
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&eax10) = *reinterpret_cast<uint16_t*>(&eax10);
    }
    __asm__("rcr si, 1");
    *reinterpret_cast<signed char*>(&ecx13) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx13) - 1);
    ecx18 = ecx13 - (0x827f5694 + reinterpret_cast<uint1_t>(ecx13 < 0x827f5694));
    __asm__("rcl eax, 0xde");
    __asm__("bts si, bp");
    __asm__("rol ax, 0x9e");
    *reinterpret_cast<unsigned char*>(&edx17) = 0x94;
    *reinterpret_cast<unsigned char*>(&ebx16) = __intrinsic();
    tmp16_19 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx18) + *reinterpret_cast<int16_t*>(&edx17));
    cf20 = reinterpret_cast<uint1_t>(tmp16_19 < *reinterpret_cast<uint16_t*>(&ecx18));
    cx21 = tmp16_19;
    if (!reinterpret_cast<uint1_t>(cf20 | reinterpret_cast<uint1_t>(cx21 == 0))) {
        edx17 = ebx16;
    }
    *reinterpret_cast<uint16_t*>(&ebp15) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp15) - 0x2f85) + cf20);
    edi22 = edi2 - (0x6a58e5b6 - reinterpret_cast<uint1_t>(edi2 < 0x95a71a4a)) ^ 0xc078881a;
    ebp23 = ebp15 - eax10;
    ax24 = 0xb17a;
    *reinterpret_cast<unsigned char*>(&eax10) = 61;
    __asm__("shld ebx, edi, 0x1");
    ebx25 = 0;
    __asm__("shrd esi, eax, 0x1");
    __asm__("ror di, 0x83");
    *reinterpret_cast<signed char*>(&ebx25) = reinterpret_cast<signed char>(0 >> *reinterpret_cast<signed char*>(&cx21));
    *reinterpret_cast<uint16_t*>(&ecx18) = reinterpret_cast<uint16_t>(cx21 >> 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax10) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax24) + 1) & 0x72);
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax10) + 1)) {
        *reinterpret_cast<int16_t*>(&ebp23) = *reinterpret_cast<int16_t*>(&edi22);
    }
    __asm__("rcr ebp, cl");
    return eax10 + ebx25 + ecx18 + edx17 + ebp23 + (esi5 & 0x49a95b55) + edi22 + 0x4f7fbd;
}

uint32_t log_size_7_var_009() {
    int32_t eax1;
    uint32_t ebx2;
    uint16_t ax3;
    int32_t edi4;
    uint32_t ecx5;
    uint32_t esi6;
    int16_t tmp16_7;
    uint32_t eax8;
    int32_t edx9;
    uint32_t edx10;
    int16_t cx11;
    uint32_t esi12;
    uint32_t ebp13;
    uint32_t eax14;
    uint16_t si15;
    int16_t tmp16_16;
    uint16_t bx17;
    uint16_t cx18;
    uint32_t edx19;
    uint16_t si20;
    uint32_t edi21;
    uint16_t cx22;
    uint32_t ebp23;
    uint32_t tmp32_24;
    unsigned char tmp8_25;

    eax1 = 0x3ebe947a;
    ebx2 = 0x2f1b1400;
    ax3 = 1;
    edi4 = 0xcc4d08be >> 0x78 >> 0x77;
    __asm__("cdq ");
    ecx5 = 0;
    esi6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1);
    __asm__("btc eax, edx");
    __asm__("ror dx, 0x1c");
    __asm__("ror eax, 0xd7");
    if (0) {
    }
    *reinterpret_cast<int16_t*>(&ecx5) = reinterpret_cast<signed char>(87 >> -37);
    tmp16_7 = *reinterpret_cast<int16_t*>(&edi4);
    *reinterpret_cast<int16_t*>(&eax1) = tmp16_7;
    __asm__("rcl bl, cl");
    eax8 = (reinterpret_cast<uint32_t>(eax1 * 0x5df58424) >> 0xffffff81) * ecx5;
    edx9 = __intrinsic();
    edx10 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&edx9)));
    if (!__intrinsic()) {
        edx10 = ecx5;
    }
    __asm__("rcr ecx, cl");
    *reinterpret_cast<unsigned char*>(&cx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx5) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1));
    __asm__("btc bx, 0xf6");
    *reinterpret_cast<int16_t*>(&esi6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi6) << 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx11) + 1) = 0;
    __asm__("rol ebx, 1");
    __asm__("rcr bh, 1");
    __asm__("lahf ");
    __asm__("rcr ebx, 1");
    esi12 = esi6 ^ 0xd4fa899;
    if (1) {
        ebx2 = 0xaf6d6dbf;
    }
    ebp13 = 0;
    __asm__("bsr eax, edi");
    if (!(0xaf6d6dbf >> *reinterpret_cast<unsigned char*>(&cx11))) {
        *reinterpret_cast<int16_t*>(&edx10) = cx11;
    }
    __asm__("bsr esi, eax");
    __asm__("rol ebp, 0x1d");
    eax14 = 0xffff98ed;
    __asm__("ror cl, 1");
    si15 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi12) << 1);
    *reinterpret_cast<uint16_t*>(&ebp13) = reinterpret_cast<uint16_t>(0x98ed - reinterpret_cast<uint16_t>(0x6c49 + reinterpret_cast<uint1_t>(0x98ed < reinterpret_cast<uint16_t>(0x6c49 + __intrinsic()))));
    if (0) {
        tmp16_16 = *reinterpret_cast<int16_t*>(&edx10);
        *reinterpret_cast<int16_t*>(&edx10) = cx11;
        cx11 = tmp16_16;
    }
    bx17 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx2) + si15) + 1);
    cx18 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(cx11 + 0xe7c) + 1);
    __asm__("rcr eax, 1");
    __asm__("xadd bx, di");
    edx19 = edx10;
    si20 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si15 + 0x77d9) + 1);
    __asm__("rcr dx, 1");
    __asm__("rcl dx, 1");
    __asm__("rcr cl, cl");
    *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(-*reinterpret_cast<signed char*>(&bx17));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx18) + 1) = -38;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&bx17) + 1) >> 1) ^ 0xf3);
    if (0) {
        edx19 = 0xffffdee4;
    }
    edi21 = cx18;
    __asm__("rcl al, cl");
    __asm__("shld ecx, esi, 0x1");
    cx22 = 0x1001;
    *reinterpret_cast<uint16_t*>(&eax14) = si20;
    ebp23 = ebp13 & 0xddc09ccc;
    *reinterpret_cast<uint16_t*>(&esi12) = reinterpret_cast<uint16_t>(si20 | *reinterpret_cast<uint16_t*>(&ebx2));
    __asm__("bts ebx, 0x2e");
    *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) + 1) ^ 29);
    __asm__("rcr ax, cl");
    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<unsigned char>(15 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax14) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx22) + 1)) + 0x6f) + 1);
    __asm__("rol si, 1");
    *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx2) - reinterpret_cast<unsigned char>(0x65 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx2) < 0x9b)));
    *reinterpret_cast<int16_t*>(&edx19) = 0xd1e9;
    __asm__("ror ch, 0x8a");
    if (edx19 == eax14) {
        tmp32_24 = edx19;
        edx19 = eax14;
        eax14 = tmp32_24;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebx2) = *reinterpret_cast<uint16_t*>(&eax14);
    }
    if (0) {
        tmp8_25 = *reinterpret_cast<unsigned char*>(&ecx5);
        *reinterpret_cast<unsigned char*>(&ecx5) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = tmp8_25;
    }
    *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx2) + *reinterpret_cast<unsigned char*>(&eax14)) + __intrinsic());
    *reinterpret_cast<uint16_t*>(&esi12) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi12) + 0x7df7)));
    __asm__("rcl ch, 1");
    if (!static_cast<int1_t>(edx19 >> edx19)) {
        *reinterpret_cast<int16_t*>(&ebp23) = *reinterpret_cast<int16_t*>(&ecx5);
    }
    return eax14 + ebx2 + ecx5 + edx19 + ebp23 + esi12 + edi21 - 0x1d70f597;
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
    fun_8049040(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2cc0, ebx7 - 0x2c60, edx5, v4, eax6);
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

void fun_804a342() {
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
    ebx3 = ebx4 + 0x2cb3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804a35f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804a3a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804a3aa() {
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

void fun_804a39d() {
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
