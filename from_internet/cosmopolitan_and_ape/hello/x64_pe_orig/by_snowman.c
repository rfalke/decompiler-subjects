
struct s0 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
    uint64_t f8;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    unsigned char f4;
};

unsigned char g404000;

void fun_4026e7();

void fun_401636();

void fun_4017ec();

void fun_4017be(int64_t rcx, int64_t rdx);

void fun_40288a();

int64_t fun_402615(int64_t rcx);

int64_t g40600c;

uint64_t g404688;

int32_t g406004;

int64_t g406018;

int32_t g406020;

int64_t fun_402115();

uint32_t g404630;

uint32_t fun_402083(int64_t rcx);

int64_t g406030;

signed char* g406038;

void fun_401297() {
    int64_t v1;
    struct s0* rdi2;
    struct s1* rdi3;
    struct s2* rdi4;
    struct s3* rdi5;
    int64_t rax6;
    int64_t v7;
    int1_t below_or_equal8;
    signed char ch9;
    signed char cl10;
    unsigned char v11;
    int64_t* r15_12;
    uint64_t rax13;
    uint64_t* rdi14;
    int32_t ecx15;
    uint64_t rdx16;
    uint64_t r8_17;
    uint64_t r8_18;
    uint64_t r8_19;
    int32_t edx20;
    int64_t rdx21;
    int1_t zf22;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rdi2) = 0x404000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
    while (1) {
        addr_4012bf_2:
        rdi2->f0 = __intrinsic();
        rdi3 = reinterpret_cast<struct s1*>(&rdi2->f4);
        rdi3->f0 = __intrinsic();
        rdi4 = reinterpret_cast<struct s2*>(&rdi3->f4);
        rdi4->f0 = __intrinsic();
        rdi5 = reinterpret_cast<struct s3*>(&rdi4->f4);
        rdi5->f0 = __intrinsic();
        rdi2 = reinterpret_cast<struct s0*>(&rdi5->f4);
        while (rax6 = v7, !!*reinterpret_cast<int32_t*>(&rax6)) {
            below_or_equal8 = *reinterpret_cast<unsigned char*>(&rax6) <= g404000;
            if (below_or_equal8) 
                goto addr_4012bf_2;
            ++rdi2;
        }
        break;
    }
    ch9 = 17;
    do {
        __asm__("lodsb ");
        cl10 = 0;
        __asm__("lodsb ");
        do {
            rdi2->f0 = reinterpret_cast<unsigned char>(fun_4026e7);
            rdi2 = reinterpret_cast<struct s0*>(&rdi2->f8);
            cl10 = reinterpret_cast<signed char>(cl10 - 1);
        } while (cl10);
        ch9 = reinterpret_cast<signed char>(ch9 - 1);
    } while (ch9);
    fun_401636();
    fun_4017ec();
    fun_4017be(32, 0x402764);
    fun_4017be(32, fun_40288a);
    if (rdi2->f0 & 8) {
        v11 = reinterpret_cast<unsigned char>(8);
    } else {
        if (!(rdi2->f0 & 32)) {
            if (!(rdi2->f0 & 4)) {
                if (!*r15_12) {
                }
            }
        }
    }
    rdi2->f0 = v11;
    rax13 = reinterpret_cast<uint64_t>(fun_402615);
    rdi2->f8 = reinterpret_cast<uint64_t>(fun_402615);
    *reinterpret_cast<int32_t*>(&rdi14) = 0x404648;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi14) < 0x404690) {
        ecx15 = 0;
        *reinterpret_cast<int32_t*>(&rdx16) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_17 = rax13;
            *reinterpret_cast<uint32_t*>(&r8_18) = *reinterpret_cast<uint32_t*>(&r8_17) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = 0;
            r8_19 = r8_18 << *reinterpret_cast<unsigned char*>(&ecx15);
            ecx15 = ecx15 + 7;
            rdx16 = rdx16 | r8_19;
        } while (*reinterpret_cast<signed char*>(&rax13) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax13) & 64) {
            rdx16 = rdx16 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx15);
        }
        rax13 = rdx16;
        if (*rdi14) {
            rax13 = *rdi14;
        }
        *rdi14 = rax13;
        ++rdi14;
    }
    g40600c = 1;
    edx20 = *reinterpret_cast<int32_t*>(&g404688);
    g406004 = edx20;
    g406018 = 0x405000;
    g406020 = 0x1000;
    rdx21 = reinterpret_cast<int64_t>(fun_402115);
    zf22 = (*reinterpret_cast<unsigned char*>(&g404630) & 2) == 0;
    if (zf22) {
        rdx21 = reinterpret_cast<int64_t>(fun_402083);
    }
    g406030 = rdx21;
    g406038 = reinterpret_cast<signed char*>(0x406000);
    goto v1;
}

int64_t GetStdHandle = 0x2da6;

int64_t g4076a0;

void* g4076b0;

int64_t g4076a8;

int32_t g4076c8;

int32_t g4076e0;

int32_t g4076f8;

int64_t g4076b8;

int64_t g4076d0;

int64_t g4076e8;

void fun_401636() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rax3;
    int64_t rax4;

    rbp1 = GetStdHandle;
    g4076a0 = 3;
    g4076b0 = reinterpret_cast<void*>(0x4076b8);
    g4076a8 = 16;
    g4076c8 = 1;
    g4076e0 = 1;
    g4076f8 = 1;
    rax2 = reinterpret_cast<int64_t>(rbp1(0xf6));
    g4076b8 = rax2;
    rax3 = reinterpret_cast<int64_t>(rbp1(0xf5));
    g4076d0 = rax3;
    rax4 = reinterpret_cast<int64_t>(rbp1(0xf4));
    g4076e8 = rax4;
    return;
}

void fun_4017ec() {
    int64_t rcx1;
    signed char tmp8_2;
    signed char al3;
    signed char* rdi4;

    *reinterpret_cast<int32_t*>(&rcx1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    while (tmp8_2 = *reinterpret_cast<signed char*>(&rcx1), *reinterpret_cast<signed char*>(&rcx1) = al3, al3 = tmp8_2, !rcx1) {
        do {
            *rdi4 = al3;
            ++rdi4;
            *reinterpret_cast<int32_t*>(&rcx1) = *reinterpret_cast<int32_t*>(&rcx1) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
        } while (*reinterpret_cast<int32_t*>(&rcx1));
    }
    return;
}

unsigned char g404035;

void fun_4017be(int64_t rcx, int64_t rdx) {
    unsigned char r8b3;
    int1_t zf4;
    int64_t* rdi5;
    int64_t rsi6;
    int64_t rax7;
    int1_t zf8;

    r8b3 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf4)) << 1);
    do {
        __asm__("lodsb ");
        *rdi5 = rdx;
        ++rdi5;
        rsi6 = rsi6 + 8;
        *reinterpret_cast<int32_t*>(&rcx) = *reinterpret_cast<int32_t*>(&rcx) - 1;
    } while (*reinterpret_cast<int32_t*>(&rcx));
    *reinterpret_cast<int32_t*>(&rax7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    zf8 = (g404035 & 2) == 0;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf8)) | r8b3);
    *reinterpret_cast<unsigned char*>(&rax7) = *reinterpret_cast<unsigned char*>(rsi6 + rax7);
    *rdi5 = rax7 + rdx;
    __asm__("lodsq ");
    return;
}

int64_t fun_401e0a();

int32_t fun_40141f() {
    fun_401e0a();
    return 0;
}

unsigned char fun_40245f();

int32_t fun_401dd2();

uint32_t g407838;

int32_t fun_401609();

uint32_t fun_40156c() {
    uint32_t r13d1;
    uint32_t r13d2;
    unsigned char al3;
    int32_t eax4;
    uint1_t zf5;
    uint32_t ebx6;
    int32_t eax7;
    uint32_t v8;

    r13d1 = g404630;
    r13d2 = r13d1 & 4;
    if (r13d2) {
        r13d2 = 0;
        al3 = fun_40245f();
        if (!al3) {
            addr_4015f8_3:
            return r13d2;
        } else {
            eax4 = fun_401dd2();
            zf5 = reinterpret_cast<uint1_t>(eax4 == 2);
        }
    } else {
        ebx6 = g407838;
        eax7 = fun_401609();
        if (!(eax7 + 1)) {
            g407838 = ebx6;
            goto addr_4015f8_3;
        } else {
            zf5 = reinterpret_cast<uint1_t>((v8 & 0xf000) == 0x2000);
        }
    }
    r13d2 = zf5;
    goto addr_4015f8_3;
}

struct s4 {
    uint32_t f0;
    signed char[4] pad8;
    struct s4* f8;
};

struct s4* g4060a0;

struct s5 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
    int64_t f20;
};

struct s4* fun_0();

int64_t fun_401836();

int64_t fun_40215b() {
    struct s4* rbx1;
    int64_t rax2;
    struct s5* rbx3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rsi6;
    int64_t rdx7;
    struct s4* rax8;

    rbx1 = g4060a0;
    if (!rbx1) {
        rbx1 = reinterpret_cast<struct s4*>(0x4060a8);
        g4060a0 = reinterpret_cast<struct s4*>(0x4060a8);
    }
    if (rbx1->f0 != 0xffffffff) {
        addr_4021c2_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(~rbx1->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        rbx1->f0 = rbx1->f0;
        rbx3 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rbx1) + rax2 * 24);
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        rbx3->f10 = rdi5;
        rbx3->f18 = rsi6;
        rbx3->f20 = rdx7;
    } else {
        if (1 || (rax8 = fun_0(), rax8 == 0)) {
            rax4 = fun_401836();
        } else {
            rax8->f8 = rbx1;
            g4060a0 = rax8;
            rbx1 = rax8;
            goto addr_4021c2_4;
        }
    }
    return rax4;
}

int32_t fun_4025b0();

void fun_40168d();

int32_t fun_401609() {
    int32_t eax1;

    eax1 = fun_4025b0();
    if (eax1 != -1) {
        fun_40168d();
        eax1 = eax1;
    }
    return eax1;
}

int64_t GetFileType = 0x2d88;

int32_t fun_401dd2() {
    int64_t rdi1;
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(GetFileType(rdi1));
    return eax2;
}

struct s6 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s7 {
    signed char[20] pad20;
    int64_t f14;
};

struct s8 {
    signed char[96] pad96;
    int32_t f60;
};

struct s9 {
    signed char[80] pad80;
    int64_t f50;
};

struct s10 {
    signed char[88] pad88;
    int64_t f58;
};

struct s11 {
    signed char[48] pad48;
    int64_t f30;
};

struct s12 {
    signed char[4] pad4;
    int32_t f4;
};

struct s13 {
    signed char[16] pad16;
    int32_t f10;
};

struct s14 {
    signed char[56] pad56;
    int64_t f38;
};

struct s15 {
    signed char[64] pad64;
    int64_t f40;
};

struct s16 {
    signed char[72] pad72;
    int64_t f48;
};

struct s17 {
    signed char[32] pad32;
    int64_t f20;
};

struct s18 {
    signed char[40] pad40;
    int64_t f28;
};

struct s19 {
    signed char[24] pad24;
    int32_t f18;
};

struct s20 {
    signed char[16] pad16;
    int64_t f10;
};

struct s21 {
    signed char[28] pad28;
    int64_t f1c;
};

struct s22 {
    signed char[40] pad40;
    int64_t f28;
};

struct s23 {
    signed char[128] pad128;
    int32_t f80;
};

struct s24 {
    signed char[112] pad112;
    int64_t f70;
};

struct s25 {
    signed char[120] pad120;
    int64_t f78;
};

struct s26 {
    signed char[48] pad48;
    int64_t f30;
};

struct s27 {
    signed char[56] pad56;
    int64_t f38;
};

struct s28 {
    signed char[64] pad64;
    int64_t f40;
};

struct s29 {
    signed char[72] pad72;
    int64_t f48;
};

struct s30 {
    signed char[80] pad80;
    int64_t f50;
};

struct s31 {
    signed char[88] pad88;
    int64_t f58;
};

struct s32 {
    signed char[24] pad24;
    uint32_t f18;
};

struct s33 {
    signed char[24] pad24;
    uint16_t f18;
};

struct s34 {
    signed char[48] pad48;
    int64_t f30;
};

struct s35 {
    signed char[56] pad56;
    int64_t f38;
};

struct s36 {
    signed char[64] pad64;
    int64_t f40;
};

struct s37 {
    signed char[6] pad6;
    uint16_t f6;
};

struct s38 {
    signed char[4] pad4;
    uint16_t f4;
};

struct s39 {
    signed char[112] pad112;
    int32_t f70;
};

struct s40 {
    signed char[16] pad16;
    int64_t f10;
};

struct s41 {
    signed char[96] pad96;
    int64_t f60;
};

struct s42 {
    signed char[40] pad40;
    int64_t f28;
};

struct s43 {
    signed char[40] pad40;
    int64_t f28;
};

struct s44 {
    signed char[24] pad24;
    int32_t f18;
};

struct s45 {
    signed char[104] pad104;
    int64_t f68;
};

struct s46 {
    signed char[32] pad32;
    int64_t f20;
};

struct s47 {
    signed char[48] pad48;
    int64_t f30;
};

struct s48 {
    signed char[56] pad56;
    int64_t f38;
};

struct s49 {
    signed char[64] pad64;
    int64_t f40;
};

struct s50 {
    signed char[72] pad72;
    int64_t f48;
};

struct s51 {
    signed char[16] pad16;
    int64_t f10;
};

struct s52 {
    signed char[24] pad24;
    uint32_t f18;
};

struct s53 {
    signed char[28] pad28;
    int64_t f1c;
};

struct s54 {
    signed char[48] pad48;
    int64_t f30;
};

struct s55 {
    signed char[56] pad56;
    int64_t f38;
};

struct s56 {
    signed char[64] pad64;
    int64_t f40;
};

struct s57 {
    signed char[72] pad72;
    int64_t f48;
};

struct s58 {
    signed char[80] pad80;
    int64_t f50;
};

struct s59 {
    signed char[88] pad88;
    int64_t f58;
};

struct s60 {
    signed char[96] pad96;
    int64_t f60;
};

struct s61 {
    signed char[104] pad104;
    int64_t f68;
};

struct s62 {
    signed char[112] pad112;
    int64_t f70;
};

void fun_40168d() {
    int64_t rdi1;
    uint32_t eax2;
    int64_t r12_3;
    struct s6* rdi4;
    int32_t r14d5;
    int32_t* rdi6;
    int64_t r13_7;
    struct s7* rdi8;
    int64_t r11_9;
    struct s8* rdi10;
    int64_t rbx11;
    struct s9* rdi12;
    int64_t r10_13;
    struct s10* rdi14;
    int64_t rsi15;
    struct s11* rdi16;
    int64_t* rdi17;
    struct s12* rdi18;
    int64_t r15_19;
    struct s13* rdi20;
    int64_t rcx21;
    struct s14* rdi22;
    int64_t rdx23;
    struct s15* rdi24;
    int64_t rax25;
    struct s16* rdi26;
    int64_t r9_27;
    struct s17* rdi28;
    int64_t r8_29;
    struct s18* rdi30;
    struct s19* rdi31;
    struct s20* rdi32;
    struct s21* rdi33;
    struct s22* rdi34;
    struct s23* rdi35;
    struct s24* rdi36;
    struct s25* rdi37;
    struct s26* rdi38;
    struct s27* rdi39;
    struct s28* rdi40;
    struct s29* rdi41;
    struct s30* rdi42;
    struct s31* rdi43;
    struct s32* rdi44;
    struct s33* rdi45;
    struct s34* rdi46;
    struct s35* rdi47;
    struct s36* rdi48;
    int64_t r14_49;
    struct s37* rdi50;
    uint32_t r13d51;
    struct s38* rdi52;
    int64_t r10_53;
    struct s39* rdi54;
    int64_t r15_55;
    int32_t* rdi56;
    int64_t r12_57;
    struct s40* rdi58;
    int64_t r11_59;
    struct s41* rdi60;
    struct s42* rdi61;
    struct s43* rdi62;
    struct s44* rdi63;
    int64_t rbx64;
    struct s45* rdi65;
    struct s46* rdi66;
    struct s47* rdi67;
    struct s48* rdi68;
    struct s49* rdi69;
    struct s50* rdi70;
    int64_t* rdi71;
    struct s51* rdi72;
    struct s52* rdi73;
    struct s53* rdi74;
    struct s54* rdi75;
    struct s55* rdi76;
    struct s56* rdi77;
    struct s57* rdi78;
    struct s58* rdi79;
    struct s59* rdi80;
    struct s60* rdi81;
    struct s61* rdi82;
    struct s62* rdi83;

    if (!rdi1) {
        return;
    }
    eax2 = g404630;
    if (!(*reinterpret_cast<unsigned char*>(&eax2) & 8)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax2) & 32)) {
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 16)) {
                addr_4017b2_6:
                return;
            } else {
                r12_3 = rdi4->f1c;
                r14d5 = *rdi6;
                r13_7 = rdi8->f14;
                r11_9 = rdi10->f60;
                rbx11 = rdi12->f50;
                r10_13 = rdi14->f58;
                rsi15 = rdi16->f30;
                *rdi17 = rdi18->f4;
                *reinterpret_cast<int32_t*>(&r15_19) = rdi20->f10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_19) + 4) = 0;
                rcx21 = rdi22->f38;
                rdx23 = rdi24->f40;
                rax25 = rdi26->f48;
                r9_27 = rdi28->f20;
                r8_29 = rdi30->f28;
                rdi31->f18 = r14d5;
                rdi32->f10 = r15_19;
                rdi33->f1c = r13_7;
                rdi34->f28 = r12_3;
            }
        } else {
            r11_9 = rdi35->f80;
            rbx11 = rdi36->f70;
            r10_13 = rdi37->f78;
            r9_27 = rdi38->f30;
            r8_29 = rdi39->f38;
            rsi15 = rdi40->f40;
            rcx21 = rdi41->f48;
            rdx23 = rdi42->f50;
            rax25 = rdi43->f58;
            rdi44->f18 = rdi45->f18;
        }
        rdi46->f30 = rbx11;
        rdi47->f38 = r11_9;
        rdi48->f40 = r10_13;
    } else {
        *reinterpret_cast<uint32_t*>(&r14_49) = rdi50->f6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_49) + 4) = 0;
        r13d51 = rdi52->f4;
        r10_53 = rdi54->f70;
        r15_55 = *rdi56;
        r12_57 = rdi58->f10;
        r11_59 = rdi60->f60;
        r8_29 = rdi61->f28;
        rdi62->f28 = rdi63->f18;
        rbx64 = rdi65->f68;
        r9_27 = rdi66->f20;
        rsi15 = rdi67->f30;
        rcx21 = rdi68->f38;
        rdx23 = rdi69->f40;
        rax25 = rdi70->f48;
        *rdi71 = r15_55;
        rdi72->f10 = r14_49;
        rdi73->f18 = r13d51;
        rdi74->f1c = r12_57;
        rdi75->f30 = r11_59;
        rdi76->f38 = r10_53;
        rdi77->f40 = rbx64;
    }
    rdi78->f48 = r9_27;
    rdi79->f50 = r8_29;
    rdi80->f58 = rsi15;
    rdi81->f60 = rcx21;
    rdi82->f68 = rdx23;
    rdi83->f70 = rax25;
    goto addr_4017b2_6;
}

struct s63 {
    uint16_t f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_401aa3(signed char* rcx);

void fun_401ace(signed char* rcx);

int32_t fun_401afe(signed char* rcx, struct s63* rdx, uint64_t r8, void* r9) {
    struct s63* r11_5;
    int64_t r13_6;
    int64_t rsi7;
    uint64_t rbx8;
    signed char* v9;
    uint64_t v10;
    uint64_t v11;
    uint64_t rsi12;
    uint64_t v13;
    int64_t rsi14;
    int32_t v15;
    int64_t rax16;
    uint32_t v17;
    uint64_t rax18;
    int32_t r14d19;
    int64_t rsi20;
    uint32_t v21;
    uint64_t r12_22;
    int32_t v23;
    uint64_t r10_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r10_28;
    uint64_t r12_29;
    uint64_t r11_30;
    uint64_t rax31;
    uint64_t r8_32;

    r11_5 = rdx;
    r13_6 = rsi7;
    *reinterpret_cast<int32_t*>(&rbx8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx8) + 4) = 0;
    v9 = rcx;
    v10 = r8;
    v11 = rsi12;
    v13 = reinterpret_cast<uint64_t>(rsi14 + reinterpret_cast<int64_t>(rdx));
    fun_401aa3(rcx);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_401bb7_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_401bb7_5;
            fun_401aa3(rcx);
        }
        break;
        addr_401bb7_5:
        ++rbx8;
        if (rbx8 < v10) {
            rax18 = v11;
            if (rax18 >= v13) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<uint64_t*>(v9 + rbx8 * 8 - 8) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> rsi20)) 
                    goto addr_401cd6_15; else 
                    goto addr_401bf7_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_401aa3(rcx);
                }
                *reinterpret_cast<int32_t*>(&r10_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = 0;
                while (v25 == 34) {
                    fun_401aa3(rcx);
                    ++r10_24;
                }
                rax26 = r12_22;
                if (!r10_24) 
                    goto addr_401c3e_25;
            } else {
                addr_401cd6_15:
                fun_401ace(rcx);
                fun_401aa3(rcx);
                continue;
            }
            while (rax26 > 1) {
                fun_401ace(rcx);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_401c93_29;
            fun_401ace(rcx);
            --r10_24;
            if (!r10_24) 
                continue;
            addr_401c93_29:
            *reinterpret_cast<int32_t*>(&r14_27) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
            r10_28 = r10_24 - reinterpret_cast<uint1_t>(r10_24 < static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d19) < 1)));
            r12_29 = r10_28 + 1;
            while (r12_29 >= r14_27) {
                r14_27 = r14_27 + 3;
                fun_401ace(rcx);
            }
            *reinterpret_cast<int32_t*>(&rcx) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r10_28 % 3 == 0);
            continue;
            addr_401c3e_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_401ace(rcx);
            }
        }
        addr_401ceb_35:
        fun_401ace(rcx);
        continue;
        addr_401bf7_16:
        goto addr_401ceb_35;
    }
    fun_401ace(rcx);
    if (r11_5) {
        r11_30 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_5) - 1);
        rax31 = v11 - r13_6;
        if (rax31 > r11_30) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(r13_6 + rax31) = 0;
    }
    if (v10) {
        r8_32 = v10 - 1;
        if (r8_32 > rbx8) {
            r8_32 = rbx8;
        }
        v9[r8_32 * 8] = reinterpret_cast<signed char>(0);
    }
    return *reinterpret_cast<int32_t*>(&rbx8);
}

uint64_t fun_40263c(signed char* rcx, struct s63* rdx) {
    uint64_t rdi3;
    uint32_t edi4;
    uint64_t rax5;
    int32_t ecx6;
    uint32_t edx7;

    *reinterpret_cast<uint32_t*>(&rdi3) = edi4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdi3) > 0x7f) {
        __asm__("bsr ecx, edi");
        ecx6 = *reinterpret_cast<int32_t*>(0x4029c3 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
        do {
            edx7 = *reinterpret_cast<uint32_t*>(&rdi3);
            *reinterpret_cast<uint32_t*>(&rdi3) = *reinterpret_cast<uint32_t*>(&rdi3) >> 6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rax5) = reinterpret_cast<unsigned char>(0x80 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) & 63));
            rax5 = rax5 << 8;
            *reinterpret_cast<signed char*>(&ecx6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx6) - 1);
        } while (*reinterpret_cast<signed char*>(&ecx6));
        *reinterpret_cast<unsigned char*>(&rax5) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx6) + 1)));
    }
    return rax5 | rdi3;
}

uint32_t fun_40262d(signed char* rcx, struct s63* rdx, uint64_t r8, ...);

void fun_401aa3(signed char* rcx) {
    uint32_t eax2;
    uint16_t** rdi3;
    struct s63* rdi4;
    uint64_t r8_5;
    uint32_t eax6;
    int64_t rax7;

    eax2 = **rdi3;
    if (*reinterpret_cast<uint16_t*>(&eax2) > 0xd7ff) {
        eax6 = fun_40262d(rcx, rdi4, r8_5);
    } else {
        rdi4->f18 = eax2;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rdi4->f0 = reinterpret_cast<uint16_t>(rdi4->f0 + (rax7 + rax7));
    return;
}

void fun_401ace(signed char* rcx) {
    struct s63* rdx2;
    struct s63* rdi3;
    signed char* r8_4;
    uint64_t rax5;
    int32_t esi6;
    uint32_t esi7;
    signed char* rcx8;

    rdx2 = rdi3;
    r8_4 = rdx2->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi6));
    if (esi7 > 0x7f) {
        rax5 = fun_40263c(rcx, rdx2);
    }
    do {
        rcx8 = rdx2->f8;
        if (reinterpret_cast<uint64_t>(r8_4) <= reinterpret_cast<uint64_t>(rcx8)) 
            break;
        rdx2->f8 = rcx8 + 1;
        *rcx8 = *reinterpret_cast<signed char*>(&rax5);
        rax5 = rax5 >> 8;
    } while (rax5);
    return;
}

struct s64 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s65 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_401f6e() {
    int64_t rax1;
    struct s64* rdi2;
    struct s65* rdi3;

    if (!1) {
    }
    *reinterpret_cast<uint32_t*>(&rax1) = rdi2->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax1) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax1) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax1) = 0xffffffff;
    }
    rdi3->f8 = *reinterpret_cast<uint32_t*>(&rax1);
    if (!1) {
        g407838 = 0xffffffff;
    }
    return 0xffffffff;
}

struct s66 {
    signed char[8] pad8;
    int32_t f8;
};

struct s67 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_401fa1() {
    int32_t eax1;
    struct s66* rdi2;
    struct s67* rdi3;

    eax1 = 0;
    if (rdi2->f8 >= 0) {
        eax1 = rdi3->f8;
    }
    return eax1;
}

struct s68 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_401f97() {
    int32_t eax1;
    struct s68* rdi2;

    eax1 = 0;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(rdi2->f8 == -1);
    return eax1;
}

struct s69 {
    signed char[12] pad12;
    int32_t fc;
};

struct s70 {
    signed char[4] pad4;
    int32_t f4;
};

struct s71 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_401f76();

struct s72 {
    signed char[16] pad16;
    int32_t f10;
    int32_t f14;
};

uint64_t g406040;

signed char** g406050;

uint32_t fun_401faf(int64_t rcx) {
    int64_t rdi2;
    uint32_t r12d3;
    struct s69* rdi4;
    uint64_t rax5;
    struct s70* rdi6;
    int1_t zf7;
    struct s71* rdi8;
    uint32_t eax9;
    struct s72* rdi10;
    uint32_t eax11;
    uint64_t rax12;
    uint64_t r13_13;
    signed char** rax14;
    uint32_t eax15;

    if (rdi2) {
        r12d3 = 0;
        if (rdi4->fc == -1 || (*reinterpret_cast<int32_t*>(&rax5) = rdi6->f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0, zf7 = (g404688 & rax5) == 0, zf7)) {
            addr_40204f_3:
            return r12d3;
        } else {
            r12d3 = rdi8->f8;
            if (r12d3) {
                if (r12d3 == 0xffffffff) {
                    r12d3 = 0;
                    goto addr_40204f_3;
                } else {
                    eax9 = fun_401f76();
                    r12d3 = eax9;
                    goto addr_40204f_3;
                }
            } else {
                while (rdi10->f10 != rdi10->f14) {
                    eax11 = fun_402083(rcx);
                    if (eax11 == 0xffffffff) 
                        goto addr_401fee_10;
                    rdi10 = rdi10;
                    r12d3 = r12d3 + eax11;
                }
                goto addr_40204f_3;
            }
        }
    } else {
        rax12 = g406040;
        r12d3 = 0;
        r13_13 = rax12 - 1;
        while (r13_13 != 0xffffffffffffffff) {
            rax14 = g406050;
            if (rax14[r13_13]) {
                eax15 = fun_401faf(rcx);
                if (eax15 == 0xffffffff) 
                    goto addr_401fee_10;
                r12d3 = r12d3 + eax15;
            }
            --r13_13;
        }
        goto addr_40204f_3;
    }
    addr_401fee_10:
    r12d3 = 0xffffffff;
    goto addr_40204f_3;
}

struct s73 {
    signed char[20] pad20;
    uint32_t f14;
};

struct s74 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s75 {
    signed char[32] pad32;
    uint32_t f20;
};

struct s4* fun_40247a(int64_t rcx, int64_t rdx);

struct s76 {
    signed char[16] pad16;
    uint32_t f10;
    signed char[12] pad32;
    int32_t f20;
};

uint32_t fun_402150();

uint32_t fun_402083(int64_t rcx) {
    uint32_t ebx2;
    struct s73* rdi3;
    struct s74* rdi4;
    struct s75* rdi5;
    uint32_t ebx6;
    int64_t rdx7;
    struct s4* rax8;
    int64_t rcx9;
    struct s76* rdi10;
    uint32_t eax11;

    ebx2 = rdi3->f14;
    if (rdi4->f10 >= ebx2) {
        ebx2 = rdi5->f20;
    }
    ebx6 = ebx2 - rdi4->f10;
    *reinterpret_cast<uint32_t*>(&rdx7) = ebx6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rax8 = fun_40247a(rcx, rdx7);
    if (!reinterpret_cast<int1_t>(rax8 == -1)) {
        *reinterpret_cast<int32_t*>(&rcx9) = rdi10->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        rdi10->f10 = *reinterpret_cast<int32_t*>(&rax8) + rdi10->f10 & static_cast<uint32_t>(rcx9 - 1);
        eax11 = ebx6;
    } else {
        eax11 = fun_402150();
    }
    return eax11;
}

struct s77 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s78 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_401f76() {
    int32_t esi1;
    int64_t rax2;
    struct s77* rdi3;
    struct s78* rdi4;

    if (!esi1) {
    }
    *reinterpret_cast<uint32_t*>(&rax2) = rdi3->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax2) = 0xffffffff;
    }
    rdi4->f8 = *reinterpret_cast<uint32_t*>(&rax2);
    if (!1) {
        g407838 = 0xffffffff;
    }
    return 0xffffffff;
}

struct s4* fun_401d0b(int64_t rcx, int64_t rdx);

struct s4* fun_401816();

struct s4* fun_4025c0();

int32_t fun_401826();

struct s4* fun_40247a(int64_t rcx, int64_t rdx) {
    int64_t r12_3;
    int32_t edi4;
    unsigned char al5;
    int1_t zf6;
    unsigned char al7;
    unsigned char al8;
    unsigned char al9;
    struct s4* rax10;
    int32_t eax11;

    r12_3 = edi4;
    if (*reinterpret_cast<int32_t*>(&r12_3) != -1) {
        al5 = fun_40245f();
        if (!al5) {
            zf6 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
            if (!zf6) {
                al7 = fun_40245f();
                if (!al7) {
                    al8 = fun_40245f();
                    if (al8 || (al9 = fun_40245f(), !!al9)) {
                        rax10 = fun_401d0b(-1, 1);
                    } else {
                        rax10 = fun_401816();
                    }
                } else {
                    rax10 = fun_0();
                }
            } else {
                rax10 = fun_4025c0();
            }
        } else {
            rax10 = fun_0();
        }
    } else {
        eax11 = fun_401826();
        rax10 = reinterpret_cast<struct s4*>(static_cast<int64_t>(eax11));
    }
    return rax10;
}

struct s79 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s80 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_402150() {
    uint32_t esi1;
    int64_t rax2;
    struct s79* rdi3;
    struct s80* rdi4;

    esi1 = g407838;
    if (!esi1) {
        esi1 = 0xffffffff;
    }
    *reinterpret_cast<uint32_t*>(&rax2) = rdi3->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax2) = esi1;
    }
    rdi4->f8 = *reinterpret_cast<uint32_t*>(&rax2);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi1) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi1 == 0))) {
        g407838 = esi1;
    }
    return 0xffffffff;
}

struct s4* fun_402750(uint64_t rcx, uint64_t rdx) {
    uint64_t rcx3;

    *reinterpret_cast<int32_t*>(&rcx3) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    if (rdx < 32) {
        rcx3 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(rcx3 * 8 + 0x404420);
}

int64_t fun_40243f() {
    int64_t rax1;
    int64_t rdx2;
    int64_t rcx3;
    int32_t* rsi4;
    int32_t edi5;

    *reinterpret_cast<int32_t*>(&rax1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx2) > *reinterpret_cast<int32_t*>(&rax1)) {
        *reinterpret_cast<int32_t*>(&rcx3) = static_cast<int32_t>(rdx2 + rax1) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
        if (rsi4[*reinterpret_cast<int32_t*>(&rcx3) * 2] > edi5) {
            *reinterpret_cast<int32_t*>(&rdx2) = *reinterpret_cast<int32_t*>(&rcx3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax1) = static_cast<int32_t>(rcx3 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
        }
    }
    return static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax1));
}

uint32_t g404658;

int32_t fun_401826() {
    uint32_t eax1;

    eax1 = g404658;
    g407838 = eax1;
    return 0xff;
}

int64_t g404638;

struct s4* fun_4025c0() {
    goto g404638;
}

struct s81 {
    signed char[16] pad16;
    int32_t f10;
};

unsigned char fun_40245f() {
    int32_t eax1;
    int32_t edi2;
    struct s81* tmp64_3;
    int32_t edi4;
    int32_t esi5;

    eax1 = 0;
    if (edi2) {
        tmp64_3 = reinterpret_cast<struct s81*>(edi4 * 24 + reinterpret_cast<int64_t>(g4076b0));
        *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(tmp64_3->f10 == esi5);
    }
    return *reinterpret_cast<unsigned char*>(&eax1);
}

struct s82 {
    int64_t f0;
    int32_t f8;
};

int64_t fun_401dad();

int64_t WriteFile = 0x2dd2;

struct s4* fun_40297a(int64_t rcx, int64_t rdx, int64_t r8, void* r9);

int64_t FlushFileBuffers = 0x2d2e;

struct s4* fun_401d0b(int64_t rcx, int64_t rdx) {
    void* rbp3;
    int64_t* r13_4;
    int64_t* rdi5;
    struct s82* r12_6;
    struct s82* rsi7;
    int64_t rbx8;
    int64_t r8_9;
    int64_t rdx10;
    void* r9_11;
    int64_t rcx12;
    int32_t eax13;
    struct s4* rax14;
    int32_t v15;
    int64_t rax16;
    int64_t rcx17;
    int32_t v18;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r13_4 = rdi5;
    r12_6 = rsi7;
    rbx8 = rdx;
    while (rbx8 && !r12_6->f8) {
        r12_6 = reinterpret_cast<struct s82*>(reinterpret_cast<int64_t>(r12_6) + 16);
        --rbx8;
    }
    fun_401dad();
    if (!rbx8) {
        *reinterpret_cast<int32_t*>(&r8_9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx10) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&r8_9) = r12_6->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
        rdx10 = r12_6->f0;
    }
    r9_11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp3) - 68);
    rcx12 = *r13_4;
    eax13 = reinterpret_cast<int32_t>(WriteFile(rcx12, rdx10, r8_9, r9_11));
    if (!eax13) {
        rax14 = fun_40297a(rcx12, rdx10, r8_9, r9_11);
    } else {
        if (!v15) {
            *reinterpret_cast<int32_t*>(&rax16) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            while (rbx8 != rax16) {
                ++rax16;
            }
        }
        rcx17 = *r13_4;
        FlushFileBuffers(rcx17, rdx10, r8_9, r9_11);
        *reinterpret_cast<int32_t*>(&rax14) = v18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    }
    return rax14;
}

uint32_t fun_40266f(signed char* rcx, struct s63* rdx) {
    int64_t rax3;
    int64_t rdx4;
    int64_t rbx5;
    uint32_t edx6;
    uint16_t* rdi7;
    uint32_t ecx8;
    uint16_t cx9;
    int64_t rax10;
    uint16_t* rdi11;
    uint32_t ecx12;
    int64_t rdx13;
    int32_t* rsi14;
    int32_t* rsi15;
    uint32_t* rsi16;

    *reinterpret_cast<uint32_t*>(&rax3) = 0;
    do {
        *reinterpret_cast<uint32_t*>(&rdx4) = *reinterpret_cast<uint32_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rbx5) = *reinterpret_cast<uint32_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax3) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        edx6 = rdi7[rdx4];
        ecx8 = edx6;
        cx9 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx8) & 0xfc00);
    } while (cx9 == 0xdc00);
    if (cx9 == 0xd800) {
        *reinterpret_cast<uint32_t*>(&rax10) = rdi11[rax3];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        ecx12 = *reinterpret_cast<uint32_t*>(&rax10);
        if ((*reinterpret_cast<uint16_t*>(&ecx12) & 0xfc00) == 0xdc00) {
            *reinterpret_cast<uint32_t*>(&rdx13) = edx6 << 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            *rsi14 = static_cast<int32_t>(rdx13 + rax10 - 0x35fdc00);
            *reinterpret_cast<uint32_t*>(&rax3) = static_cast<uint32_t>(rbx5 + 2);
        } else {
            *rsi15 = 0xfffd;
            *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
        }
    } else {
        *rsi16 = edx6;
    }
    return *reinterpret_cast<uint32_t*>(&rax3);
}

int64_t GetLastError = 0x2d96;

int64_t fun_401deb() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(GetLastError());
    return rax1;
}

uint64_t* fun_4010fb(uint64_t* rcx, uint64_t* rdx) {
    uint64_t* r8_3;
    int32_t ecx4;
    int32_t esi5;
    uint64_t rax6;
    uint64_t rdi7;
    int64_t rax8;
    uint64_t* rdx9;
    uint64_t rax10;

    r8_3 = rcx;
    ecx4 = 39;
    while (--esi5, rax6 = rdi7 >> *reinterpret_cast<signed char*>(&ecx4), *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<uint32_t*>(&rax6) & 0x1ff, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0, esi5 != -1) {
        rdx9 = rdx + rax8;
        if (!*rdx9) {
            rax10 = *r8_3 - 0x1000;
            *r8_3 = rax10;
            *rdx9 = rax10 | 3;
        }
        ecx4 = ecx4 - 9;
        rdx = reinterpret_cast<uint64_t*>(*rdx9 & 0x3fffffffff000);
    }
    return rdx + rax8;
}

uint32_t fun_401eaa();

uint32_t fun_401e45();

int64_t fun_401e0a() {
    uint32_t eax1;
    int64_t rbx2;
    uint32_t eax3;
    int64_t rax4;

    eax1 = fun_401eaa();
    if (eax1 == 0xffffffff || (*reinterpret_cast<uint32_t*>(&rbx2) = eax1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0, eax3 = fun_401e45(), eax3 + 1 == 0)) {
        *reinterpret_cast<uint32_t*>(&rax4) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax4) = static_cast<uint32_t>(rbx2 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    }
    return rax4;
}

signed char fun_4023ce();

int64_t fun_402870(uint64_t rcx, uint64_t rdx);

int64_t fun_401856();

signed char fun_402286(uint64_t rcx, uint64_t rdx) {
    int64_t r15_3;
    signed char al4;
    int64_t* rdi5;
    uint64_t rsi6;
    uint64_t rax7;
    uint64_t* rsi8;
    uint64_t r8_9;
    uint64_t rcx10;
    uint64_t r14_11;
    struct s4* rax12;
    int64_t rax13;
    int32_t eax14;

    *reinterpret_cast<int32_t*>(&r15_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_3) + 4) = 0;
    fun_4023ce();
    al4 = fun_4023ce();
    if (al4) {
        r15_3 = *rdi5;
    }
    if (!*rdi5) {
        *reinterpret_cast<int32_t*>(&rsi6) = 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
        rax7 = 31 / rdx;
        if (rax7 >= 4) {
            rsi6 = rax7;
        }
    } else {
        rsi6 = (*rsi8 >> 1) + *rsi8;
    }
    if (!*rsi8) {
        *reinterpret_cast<int32_t*>(&r8_9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
    } else {
        r8_9 = rdx * *rsi8;
        if ((rdx | *rsi8) & 0xffffffffffff0000) {
            if (rdx != r8_9 / *rsi8) 
                goto addr_4023b8_11;
        }
    }
    rcx10 = rsi6 + rcx + 1;
    if (!rcx10) {
        *reinterpret_cast<int32_t*>(&r14_11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_11) + 4) = 0;
        goto addr_40234d_15;
    }
    r14_11 = rdx * rcx10;
    if (!((rdx | rcx10) & 0xffffffffffff0000)) {
        addr_40234d_15:
        if (1 || (rax12 = fun_0(), rax12 == 0)) {
            fun_401836();
        } else {
            if (!r15_3 && *rdi5) {
                fun_402750(rcx10, r8_9);
            }
            rax13 = fun_402870(rcx10, r14_11 - r8_9);
            *rsi8 = rcx10;
            *rdi5 = rax13;
            *reinterpret_cast<signed char*>(&eax14) = 1;
            goto addr_4023bf_21;
        }
    } else {
        if (rdx != r14_11 / rcx10) {
            addr_4023b8_11:
            fun_401856();
        } else {
            goto addr_40234d_15;
        }
    }
    eax14 = 0;
    addr_4023bf_21:
    return *reinterpret_cast<signed char*>(&eax14);
}

int64_t fun_4021f0();

void fun_402941();

uint32_t g404648;

void fun_4017fd() {
    uint32_t eax1;
    int64_t rax2;

    fun_4021f0();
    fun_402941();
    eax1 = g404648;
    g407838 = eax1;
    goto rax2;
}

int32_t fun_4025b0() {
    goto g404638;
}

uint32_t fun_40262d(signed char* rcx, struct s63* rdx, uint64_t r8, ...) {
    uint32_t eax4;

    eax4 = fun_40266f(rcx, rdx);
    return eax4;
}

struct s83 {
    signed char[16] pad16;
    int64_t f10;
};

int64_t fun_401dad() {
    int64_t rdx1;
    int64_t rdi2;
    int64_t r8_3;
    int64_t rsi4;
    int64_t rdi5;
    int32_t ecx6;
    int32_t* rdi7;
    int32_t* rsi8;
    struct s83* rsi9;

    rdx1 = rdi2;
    r8_3 = rsi4;
    if (rdi5 == -1) {
        *reinterpret_cast<int32_t*>(&r8_3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = 0;
    } else {
        ecx6 = 8;
        rdi7 = rsi8;
        while (ecx6) {
            --ecx6;
            *rdi7 = 0;
            ++rdi7;
            rsi9 = reinterpret_cast<struct s83*>(reinterpret_cast<int64_t>(rsi9) + 4);
        }
        rsi9->f10 = rdx1;
    }
    return r8_3;
}

struct s84 {
    signed char[20] pad20;
    int32_t f14;
};

struct s85 {
    signed char[24] pad24;
    int64_t f18;
};

struct s86 {
    signed char[32] pad32;
    int32_t f20;
};

struct s87 {
    signed char[20] pad20;
    int32_t f14;
};

struct s88 {
    signed char f0;
    signed char[15] pad16;
    uint32_t f10;
    uint32_t f14;
    signed char[24] pad48;
    int64_t f30;
};

uint32_t fun_401e45() {
    int32_t edi1;
    uint32_t eax2;
    int64_t rax3;
    struct s84* rsi4;
    struct s85* rsi5;
    signed char dil6;
    int64_t rsi7;
    struct s86* rsi8;
    uint32_t eax9;
    struct s87* rsi10;
    uint32_t edx11;
    struct s88* rsi12;
    signed char dil13;
    unsigned char dil14;

    if (edi1 == -1) {
        addr_401ea0_2:
        eax2 = fun_401f6e();
    } else {
        *reinterpret_cast<int32_t*>(&rax3) = rsi4->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        *reinterpret_cast<signed char*>(rsi5->f18 + rax3) = dil6;
        *reinterpret_cast<int32_t*>(&rsi7) = rsi8->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
        eax9 = reinterpret_cast<uint32_t>(rsi10->f14 + 1) & static_cast<uint32_t>(rsi7 - 1);
        edx11 = rsi12->f10;
        rsi12->f14 = eax9;
        if (eax9 == edx11 || (rsi12->f0 == 2 || !(rsi12->f0 - 1) && dil13 == 10)) {
            if (rsi12->f30) {
                goto rsi12->f30;
            }
            if (eax9 == edx11) 
                goto addr_401ea0_2; else 
                goto addr_401e9a_7;
        } else {
            addr_401e9a_7:
            eax2 = dil14;
        }
    }
    return eax2;
}

struct s89 {
    signed char f0;
    signed char[7] pad8;
    uint32_t f8;
    signed char[4] pad16;
    uint32_t f10;
    uint32_t f14;
    int64_t f18;
    int32_t f20;
    signed char[12] pad48;
    int64_t f30;
};

int64_t g404650;

int64_t g404678;

uint32_t fun_401eaa() {
    int64_t r14_1;
    signed char* r13_2;
    signed char* rdi3;
    struct s89* rbx4;
    struct s89* rsi5;
    signed char dl6;
    int64_t rax7;
    int64_t rsi8;
    uint32_t eax9;
    uint32_t ecx10;
    int64_t rdx11;
    uint32_t eax12;
    uint32_t r12d13;
    int32_t eax14;
    int1_t zf15;
    int32_t eax16;
    int64_t rax17;

    *reinterpret_cast<int32_t*>(&r14_1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_1) + 4) = 0;
    r13_2 = rdi3;
    rbx4 = rsi5;
    while (dl6 = *r13_2, !!dl6) {
        *reinterpret_cast<uint32_t*>(&rax7) = rbx4->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        ++r13_2;
        *reinterpret_cast<signed char*>(rbx4->f18 + rax7) = dl6;
        *reinterpret_cast<int32_t*>(&rsi8) = rbx4->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
        eax9 = rbx4->f14 + 1 & static_cast<uint32_t>(rsi8 - 1);
        ecx10 = rbx4->f10;
        rbx4->f14 = eax9;
        if (eax9 == ecx10) 
            goto addr_401f01_4;
        if (rbx4->f0 == 2) 
            goto addr_401f01_4;
        if (rbx4->f0 - 1) 
            goto addr_401f56_7;
        if (dl6 != 10) 
            goto addr_401f56_7;
        addr_401f01_4:
        rdx11 = rbx4->f30;
        if (!rdx11) {
            if (eax9 != ecx10) {
                addr_401f56_7:
                *reinterpret_cast<int32_t*>(&r14_1) = *reinterpret_cast<int32_t*>(&r14_1) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_1) + 4) = 0;
                continue;
            } else {
                eax12 = fun_401f6e();
            }
        } else {
            eax12 = reinterpret_cast<uint32_t>(rdx11());
        }
        r12d13 = eax12;
        if (eax12 == 0xffffffff) {
            eax14 = fun_401fa1();
            zf15 = static_cast<int64_t>(eax14) == g404650;
            if (!zf15) 
                goto addr_401f38_14;
        }
    }
    r12d13 = static_cast<uint32_t>(r14_1 + 1);
    addr_401f62_16:
    return r12d13;
    addr_401f38_14:
    eax16 = fun_401f97();
    if (eax16) {
        rax17 = g404678;
        rbx4->f8 = *reinterpret_cast<uint32_t*>(&rax17);
        g407838 = *reinterpret_cast<uint32_t*>(&rax17);
        goto addr_401f62_16;
    }
}

struct s90 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
};

int64_t fun_4021f0() {
    int64_t r12_1;
    int64_t rdi2;
    int64_t v3;
    int64_t rdx4;
    struct s4* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s90* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s4* r13_11;

    r12_1 = rdi2;
    v3 = rdx4;
    while (rdi5 = g4060a0, !!rdi5) {
        while (1) {
            *reinterpret_cast<uint32_t*>(&rax6) = rdi5->f0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
            do {
                if (!rax6) 
                    break;
                __asm__("bsf ecx, eax");
                edx7 = 1 << *reinterpret_cast<unsigned char*>(&rcx8);
                *reinterpret_cast<int32_t*>(&rcx8) = *reinterpret_cast<int32_t*>(&rcx8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx9) = reinterpret_cast<uint32_t>(~edx7);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
                rax6 = rax6 & rdx9;
            } while (r12_1 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_1 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s90*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_1) 
                goto addr_402259_8;
            if (!r13_11) 
                goto addr_40227e_10;
            rdi5 = r13_11;
        }
        rdx10();
        continue;
        addr_402259_8:
        if (r13_11 && !1) {
            fun_0();
        }
        g4060a0 = r13_11;
    }
    addr_40227e_10:
    return v3;
}

uint32_t g404660;

int64_t fun_401836() {
    uint32_t eax1;

    eax1 = g404660;
    g407838 = eax1;
    return 0xff;
}

uint32_t g404670;

int64_t fun_401856() {
    uint32_t eax1;

    eax1 = g404670;
    g407838 = eax1;
    return 0xff;
}

signed char fun_4023ce() {
    int64_t rdi1;
    int64_t rbx2;
    int64_t rdi3;
    int64_t rax4;
    uint32_t eax5;
    uint32_t eax6;

    if (reinterpret_cast<uint64_t>(0x600000000000 - rdi1) <= 0xfffffffffff) {
        return 0;
    } else {
        rbx2 = rdi3 >> 16;
        rax4 = fun_40243f();
        eax5 = 0;
        if (rax4) {
            eax6 = 1;
            if (*reinterpret_cast<int32_t*>(0x4063c0 + rax4 * 8) != *reinterpret_cast<int32_t*>(&rbx2)) {
                eax6 = 0;
                *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(0x4063c0 + (rax4 - 1) * 8 + 12) == *reinterpret_cast<int32_t*>(&rbx2));
            }
            eax5 = eax6 & 1;
        }
        return *reinterpret_cast<signed char*>(&eax5);
    }
}

int64_t fun_402870(uint64_t rcx, uint64_t rdx) {
    uint64_t rcx3;

    __asm__("movd xmm3, esi");
    *reinterpret_cast<int32_t*>(&rcx3) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    if (rdx < 32) {
        rcx3 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(0x404528 + rcx3 * 8);
}

struct s4* fun_401816() {
    uint32_t eax1;

    eax1 = g404648;
    g407838 = eax1;
    return 0xff;
}

uint32_t g404668;

struct s4* fun_401846() {
    uint32_t eax1;

    eax1 = g404668;
    g407838 = eax1;
    return 0xff;
}

uint32_t g40783c;

int64_t ExitProcess = 0x2d20;

void fun_402941() {
    int1_t zf1;
    int64_t rcx2;
    unsigned char dil3;

    g40783c = g40783c | 4;
    zf1 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x402972]");
        __asm__("hlt ");
    } else {
        *reinterpret_cast<uint32_t*>(&rcx2) = dil3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
        while (1) {
            ExitProcess(rcx2);
        }
    }
}

struct s4* fun_40297a(int64_t rcx, int64_t rdx, int64_t r8, void* r9) {
    int1_t zf5;
    struct s4* rax6;
    int64_t rax7;

    zf5 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
    if (zf5) {
        rax6 = fun_401846();
        return rax6;
    } else {
        rax7 = fun_401deb();
        g407838 = *reinterpret_cast<uint32_t*>(&rax7);
        return -1;
    }
}

struct s91 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

struct s92 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

void fun_401000() {
    uint64_t* rcx1;
    uint64_t* rdx2;
    uint64_t* r15_3;
    uint64_t* rsi4;
    struct s91* r13_5;
    struct s91* rdi6;
    uint64_t r12_7;
    struct s92* rbx8;
    struct s92* rdi9;
    struct s92* rax10;
    uint64_t r12_11;
    uint64_t rax12;
    uint64_t* rax13;
    uint64_t rdx14;

    rcx1 = rdx2;
    r15_3 = rsi4;
    r13_5 = rdi6;
    *reinterpret_cast<int32_t*>(&r12_7) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_7) + 4) = 0;
    rbx8 = rdi9;
    while (rbx8->f8) {
        do {
            rax10 = rbx8;
            rbx8 = reinterpret_cast<struct s92*>(reinterpret_cast<int64_t>(rbx8) + 24);
            if (!(rbx8->f10 - 1)) 
                break;
        } while (rbx8->f8);
        goto addr_401049_5;
        rbx8 = rax10;
        addr_40104e_7:
        if (rbx8->f0 >= r12_7) {
            r12_7 = rbx8->f0;
        }
        r12_11 = r12_7 + 0xfff;
        while (1) {
            r12_7 = r12_11 & 0xfffffffffffff000;
            while (r12_7 < (rbx8->f8 + rbx8->f0 & 0xfffffffffffff000)) {
                while (r13_5->f8 && (r13_5->f10 == 1 || r13_5->f0 + r13_5->f8 < r12_7)) {
                    r13_5 = reinterpret_cast<struct s91*>(reinterpret_cast<int64_t>(r13_5) + 24);
                }
                if (r13_5->f0 > r12_7) 
                    goto addr_4010b1_15;
                rax12 = r13_5->f0 + r13_5->f8;
                if (rax12 > r12_7) 
                    goto addr_4010a8_17;
                addr_4010b1_15:
                rax13 = fun_4010fb(rcx1, r15_3);
                rdx14 = r12_7;
                rcx1 = rcx1;
                r12_7 = r12_7 + 0x1000;
                *rax13 = rdx14 | 3;
            }
            break;
            addr_4010a8_17:
            r12_11 = rax12 + 0xfff;
        }
        rbx8 = reinterpret_cast<struct s92*>(reinterpret_cast<int64_t>(rbx8) + 24);
        continue;
        addr_401049_5:
        goto addr_40104e_7;
    }
    return;
}

void fun_40277e() {
    __asm__("outsd ");
}

void fun_402781() {
    int1_t less_or_equal1;
    int64_t v2;

    __asm__("rol ch, 0xfe");
    if (!less_or_equal1) {
        goto v2;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xeb77");
    }
}

void fun_40278f() {
    __asm__("outsd ");
}

void fun_402792(int64_t rcx) {
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x402759;
}

void fun_402795() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
        goto 0x4027e6;
    }
}

void fun_402798(int64_t rcx, uint64_t rdx) {
    int1_t zf3;
    uint64_t rcx4;
    uint64_t rdx5;
    int64_t rdi6;
    int64_t rdi7;
    uint64_t rcx8;
    uint64_t rcx9;
    signed char* rdi10;
    signed char* rsi11;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf3)) {
        if (rdx < 0x400) 
            goto addr_402771_4;
    } else {
        __asm__("in al, 0x57");
        __asm__("fucomi st0, st3");
        if (rdx < 0x400) {
            rcx4 = 16;
            do {
                rcx4 = rcx4 + 16;
                __asm__("movdqu xmm3, [rsi+rcx-0x20]");
                __asm__("movdqu [rdi+rcx-0x20], xmm3");
            } while (rdx > rcx4);
            __asm__("movdqu xmm3, [rsi+rdx-0x10]");
            __asm__("movdqu [rdi+rdx-0x10], xmm3");
            __asm__("xorps xmm3, xmm3");
            goto 0x4027e7;
        }
    }
    if (rdx > 0x400000) {
        __asm__("movdqu xmm3, [rsi]");
        __asm__("movdqu [rdi], xmm3");
        rdx5 = rdx - ((reinterpret_cast<uint64_t>(rdi6 + 16) & 0xfffffffffffffff0) - rdi7);
        rcx8 = 16;
        do {
            rcx8 = rcx8 + 16;
            __asm__("movdqu xmm3, [rsi+rcx-0x20]");
            __asm__("movntdq [rdi+rcx-0x20], xmm3");
        } while (rdx5 > rcx8);
        __asm__("sfence ");
        __asm__("movdqu xmm3, [rsi+rdx-0x10]");
        __asm__("movdqu [rdi+rdx-0x10], xmm3");
        __asm__("xorps xmm3, xmm3");
        goto 0x4027e7;
    } else {
        rcx9 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx9)) {
            *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
            *rdi10 = *rsi11;
            ++rdi10;
            ++rsi11;
        }
        goto 0x4027e7;
    }
    addr_402771_4:
}

void fun_402898(int64_t rcx, int64_t rdx) {
    int64_t rcx3;
    int32_t ebx4;
    int32_t ebx5;
    int32_t* rdi6;
    int64_t rdi7;
    int64_t v8;
    int1_t sf9;

    rcx3 = rcx - 1;
    if (rcx3) {
        ebx4 = ebx5 * *reinterpret_cast<int32_t*>(&rcx3);
        *rdi6 = ebx4;
        *reinterpret_cast<int32_t*>(rdi7 + rdx - 4) = ebx4;
        goto v8;
    } else {
        if (sf9) 
            goto " ";
    }
}

void fun_4028a7() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int64_t rbx4;

    if (!less_or_equal1) {
        *reinterpret_cast<int64_t*>(rdi2 + rdx3 - 8) = rbx4;
        goto 0x4028ef;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xf177");
    }
}

void fun_4028b2() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
    }
}

struct s93 {
    signed char[106] pad106;
    signed char f6a;
};

struct s94 {
    signed char[106] pad106;
    signed char f6a;
};

void fun_4028b5(int64_t rcx, uint64_t rdx) {
    int1_t zf3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    signed char al8;
    struct s93* rbx9;
    struct s94* rbx10;
    uint64_t rcx11;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf3)) 
        goto 0x40287c;
    __asm__("in al, 0x57");
    __asm__("fucomi st0, st3");
    __asm__("cli ");
    *reinterpret_cast<signed char*>(rax4 + rax5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax6 + rax7) + al8);
    rbx9->f6a = reinterpret_cast<signed char>(rbx10->f6a + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1));
    __asm__("punpcklbw xmm3, xmm3");
    __asm__("punpcklwd xmm3, xmm3");
    __asm__("pshufd xmm3, xmm3, 0x0");
    *reinterpret_cast<int32_t*>(&rcx11) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    do {
        rcx11 = rcx11 + 16;
        __asm__("movdqu [rdi+rcx-0x20], xmm3");
    } while (rdx > rcx11);
    __asm__("movdqu [rdi+rdx-0x10], xmm3");
    __asm__("xorps xmm3, xmm3");
}

struct s95 {
    struct s95* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[50] pad83;
    unsigned char f53;
    signed char[13] pad97;
    unsigned char f61;
    signed char[2] pad100;
    int32_t f64;
    unsigned char f65;
    uint32_t f69;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
    signed char[959524796] pad959524914;
    uint32_t f39313032;
};

struct s96 {
    unsigned char f0;
    signed char[84] pad85;
    unsigned char f55;
    signed char[11] pad97;
    unsigned char f61;
    signed char[19] pad117;
    unsigned char f75;
};

struct s97 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s98 {
    signed char[1] pad1;
    uint32_t f1;
    signed char[27] pad32;
    int32_t f20;
    signed char[37] pad73;
    unsigned char f49;
    signed char[5] pad79;
    unsigned char f4f;
    signed char[21] pad101;
    int32_t f65;
    signed char[3] pad108;
    unsigned char f6c;
    signed char[2] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    uint32_t f72;
};

struct s99 {
    signed char[104] pad104;
    int32_t f68;
};

struct s100 {
    signed char[32] pad32;
    int32_t f20;
};

struct s101 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s102 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s103 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s104 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s105 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s106 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s107 {
    signed char[105] pad105;
    signed char f69;
};

struct s108 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s109 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s110 {
    signed char[111] pad111;
    signed char f6f;
};

struct s111 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s112 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s113 {
    signed char[101] pad101;
    signed char f65;
};

struct s114 {
    signed char[101] pad101;
    signed char f65;
};

unsigned char g402e0e = 0;

unsigned char g402e36 = 0;

struct s115 {
    signed char[101] pad101;
    signed char f65;
};

struct s116 {
    signed char[1] pad1;
    uint32_t f1;
};

unsigned char g402e56 = 0;

int32_t g21415287;

struct s117 {
    signed char[101] pad101;
    uint32_t f65;
};

struct s118 {
    signed char[101] pad101;
    int32_t f65;
};

struct s119 {
    signed char[101] pad101;
    int32_t f65;
};

struct s120 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s121 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s122 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s123 {
    signed char[112] pad112;
    int32_t f70;
};

struct s124 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s125 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s126 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s127 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s128 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s129 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s130 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s131 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s132 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s133 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_4029bc(struct s95* rcx, int16_t dx, unsigned char* r8) {
    struct s95* rdx2;
    void* rsp4;
    int1_t cf5;
    void* al6;
    void* eax7;
    void* eax8;
    void* eax9;
    void* eax10;
    struct s96* rax11;
    struct s97* rbx12;
    struct s98* rsi13;
    int1_t zf14;
    struct s99* rdi15;
    struct s95* rbp16;
    void* rsp17;
    struct s100* rbx18;
    int64_t* rsp19;
    void** rsp20;
    int64_t* rsp21;
    int64_t r11_22;
    int64_t* rsp23;
    int64_t rbx24;
    struct s95** rsp25;
    struct s96** rsp26;
    int64_t* rsp27;
    int64_t r10_28;
    void** rsp29;
    int64_t* rsp30;
    int64_t r13_31;
    int64_t* rsp32;
    int64_t r10_33;
    struct s95** rsp34;
    struct s96** rsp35;
    int64_t* rsp36;
    int64_t r11_37;
    struct s101* rbx38;
    struct s102* rbx39;
    struct s103* rdi40;
    struct s104* rdi41;
    struct s95* rsp42;
    struct s105* rdi43;
    struct s95* r12_44;
    uint1_t cf45;
    int1_t zf46;
    struct s106* edi47;
    struct s107* edi48;
    struct s108* rbx49;
    struct s109* rbx50;
    uint1_t zf51;
    struct s110* rbx52;
    unsigned char* r10_53;
    signed char* r10_54;
    struct s111* rdi55;
    struct s112* rdi56;
    uint1_t cf57;
    uint1_t zf58;
    struct s113* rdi59;
    struct s114* rdi60;
    int1_t zf61;
    struct s95* tmp32_62;
    uint32_t tmp32_63;
    uint1_t zf64;
    uint1_t below_or_equal65;
    signed char* rax66;
    signed char* rax67;
    signed char* rax68;
    struct s95* tmp32_69;
    unsigned char tmp8_70;
    uint1_t cf71;
    struct s95* rdi72;
    struct s115* r15_73;
    uint32_t* rdi74;
    struct s116* rdi75;
    uint32_t* rsi76;
    unsigned char* rax77;
    uint32_t* rbx78;
    int32_t* rbx79;
    int32_t tmp32_80;
    struct s117* rdi81;
    struct s118* rdi82;
    struct s119* rdi83;
    void* rsp84;
    struct s120* rdi85;
    uint1_t cf86;
    uint1_t below_or_equal87;
    struct s95* rsp88;
    struct s95* rsp89;
    struct s95* r12_90;
    struct s121* rdi91;
    struct s122* rdi92;
    struct s123* rdi93;
    struct s124* rdi94;
    struct s125* rdi95;
    struct s126* rdi96;
    struct s127* rdi97;
    struct s128* rdi98;
    struct s129* rdi99;
    struct s95* rsp100;
    struct s130* rdi101;
    struct s131* rdi102;
    struct s132* rdi103;
    struct s133* rdi104;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    rsp4 = __zero_stack_offset();
    if (cf5) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s95**>(rcx) = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rcx)) + reinterpret_cast<signed char>(al6));
        __asm__("rol byte [rcx], 0xc0");
        eax7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax8) + reinterpret_cast<int32_t>(eax9));
        eax10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax7) + reinterpret_cast<int32_t>(eax7));
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10));
        *reinterpret_cast<signed char*>(&eax10) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) - 8) - 8) - 8) - 8) - 8);
        *reinterpret_cast<struct s95**>(&rax11) = reinterpret_cast<struct s95*>(reinterpret_cast<int32_t>(eax10) + 0x5fc05fc + 0x5fc05fc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | rbx12->f6f);
        if (1) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x74) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) = 0;
            goto addr_402a6e_5;
        }
        __asm__("outsd ");
        if (0) {
            addr_402a6e_5:
        } else {
            __asm__("insb ");
            *reinterpret_cast<struct s95**>(&rsi13) = reinterpret_cast<struct s95*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) * 0x706f430a);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
            zf14 = __undefined();
            if (!__undefined()) {
                if (!zf14) 
                    goto addr_402aee_9;
                if (__intrinsic()) 
                    goto addr_402aa4_11; else 
                    goto addr_402a84_12;
            } else {
                *reinterpret_cast<int32_t*>(&rsp4) = rdi15->f68 * 0x30322074;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp4) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx2 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2 + 1) ^ rax11->f0);
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x75) & *reinterpret_cast<unsigned char*>(&rcx));
                if (1) {
                    addr_402a8c_14:
                    if (1) {
                        goto addr_402aaf_16;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbp16) = rsi13->f65 * 0x656c4120;
                    *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                    zf14 = __undefined();
                    if (__undefined()) {
                        goto addr_402a84_12;
                    } else {
                        __asm__("outsb ");
                        if (__intrinsic()) 
                            goto addr_402a86_20;
                    }
                }
            }
        }
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) & *reinterpret_cast<unsigned char*>(&rdx2));
    addr_402aa4_11:
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp17) = reinterpret_cast<uint32_t>(rbx18->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_402b14_23:
        *reinterpret_cast<int32_t*>(&rbp16) = rsi13->f20 * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
        *rsp19 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_402aaf_16:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = 0;
        rax11->f75 = 0;
    }
    addr_402b8b_25:
    rsp20 = reinterpret_cast<void**>(rsp19 - 1);
    *reinterpret_cast<void***>(rsp20) = rsp20;
    rsp21 = reinterpret_cast<int64_t*>(rsp20 - 1);
    *rsp21 = r11_22;
    rsp23 = rsp21 - 1;
    *rsp23 = rbx24;
    rsi13->f4f = reinterpret_cast<unsigned char>(rsi13->f4f & *reinterpret_cast<unsigned char*>(&rax11));
    rsp25 = reinterpret_cast<struct s95**>(rsp23 - 1);
    *rsp25 = rdx2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) & *reinterpret_cast<unsigned char*>(&rax11));
    rsp26 = reinterpret_cast<struct s96**>(rsp25 - 8);
    *rsp26 = rax11;
    rsp27 = reinterpret_cast<int64_t*>(rsp26 - 1);
    *rsp27 = r10_28;
    rsp29 = reinterpret_cast<void**>(rsp27 - 1);
    *reinterpret_cast<void***>(rsp29) = rsp29;
    rsp30 = reinterpret_cast<int64_t*>(rsp29 - 1);
    *rsp30 = r13_31;
    rsp32 = rsp30 - 1;
    *rsp32 = r10_33;
    rax11->f55 = reinterpret_cast<unsigned char>(rax11->f55 & *reinterpret_cast<unsigned char*>(&rdx2));
    rsp34 = reinterpret_cast<struct s95**>(rsp32 - 1);
    *rsp34 = rdx2;
    rsp35 = reinterpret_cast<struct s96**>(rsp34 - 8);
    *rsp35 = rax11;
    rsp36 = reinterpret_cast<int64_t*>(rsp35 - 1);
    *rsp36 = r11_37;
    rbx38->f65 = reinterpret_cast<unsigned char>(rbx39->f65 & *reinterpret_cast<unsigned char*>(&rdx2));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
    rdi40->f4e = reinterpret_cast<unsigned char>(rdi41->f4e & *reinterpret_cast<unsigned char*>(&rax11));
    rsp42 = reinterpret_cast<struct s95*>(rsp36 - 1);
    *reinterpret_cast<struct s95**>(rsp42) = rbp16;
    *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | rdi43->f65);
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & *reinterpret_cast<unsigned char*>(&rdx2));
    }
    __asm__("outsb ");
    if (1) {
        if (!*reinterpret_cast<unsigned char*>(&rax11)) {
            __asm__("a32 outsb ");
            rax11->f61 = reinterpret_cast<unsigned char>(rax11->f61 & *reinterpret_cast<unsigned char*>(&rcx));
            __asm__("outsb ");
            __asm__("outsb ");
            __asm__("outsd ");
            if (rax11->f61) 
                goto addr_402d00_33;
        } else {
            rsi13->f6c = reinterpret_cast<unsigned char>(rsi13->f6c & *reinterpret_cast<unsigned char*>(&rax11));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp42) - 8);
                *reinterpret_cast<struct s95**>(rsp42) = r12_44;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) & *reinterpret_cast<unsigned char*>(&rcx));
                cf45 = 0;
                zf46 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) == 0;
                __asm__("outsb ");
                if (1) 
                    goto addr_402d2f_37; else 
                    goto addr_402cca_38;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) & *reinterpret_cast<unsigned char*>(&rax11));
                if (1) {
                    __asm__("insb ");
                }
            }
        }
    } else {
        addr_402c24_41:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax11) + 1) = 0xff;
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&edi47->f69) = 0;
        if (!*reinterpret_cast<signed char*>(&edi48->f69)) {
            goto addr_402c98_43;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x69) = 0;
            if (1) {
                addr_402c55_45:
                rbx49->f6f = reinterpret_cast<unsigned char>(rbx50->f6f & *reinterpret_cast<unsigned char*>(&rdx2));
                zf51 = reinterpret_cast<uint1_t>(rbx52->f6f == 0);
                goto addr_402c57_46;
            } else {
                if (0) {
                    addr_402ca9_48:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 83) & *reinterpret_cast<unsigned char*>(&rdx2));
                    *r10_53 = reinterpret_cast<unsigned char>(*r10_54 + *reinterpret_cast<unsigned char*>(&rcx));
                    goto addr_402cb2_49;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_402c9c_51:
                        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi13) | *r8);
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rsi13)));
                        goto addr_402ca9_48;
                    } else {
                        __asm__("insd ");
                        goto addr_402c3d_53;
                    }
                }
            }
        }
    }
    addr_402d65_54:
    addr_402d00_33:
    if (0) {
        cf45 = 0;
        zf46 = (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rcx)) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax11))) == 0;
    } else {
        rdi55->f65 = reinterpret_cast<unsigned char>(rdi56->f65 & *reinterpret_cast<unsigned char*>(&rax11));
        cf57 = 0;
        zf58 = reinterpret_cast<uint1_t>(rdi59->f65 == 0);
        if (!0) {
        }
        __asm__("outsb ");
        if (zf58) 
            goto addr_402de0_59; else 
            goto addr_402d77_60;
    }
    addr_402d2f_37:
    __asm__("insb ");
    if (!zf46) {
        addr_402da7_61:
        *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) + rdi60->f65);
        zf61 = *reinterpret_cast<unsigned char*>(&rax11) == 0;
        if (zf61) {
            addr_402dff_62:
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        } else {
            if (!zf61) {
            }
        }
    } else {
        rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp42) - 8);
        *reinterpret_cast<struct s95**>(rsp42) = reinterpret_cast<struct s95*>(0x656c6946);
        if (!zf46) {
            __asm__("outsd ");
            if (0) 
                goto addr_402da5_67; else 
                goto addr_402da5_67;
        } else {
            addr_402d3c_68:
            if (cf45) {
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                goto addr_402db5_70;
            } else {
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                tmp32_62 = rcx;
                rcx = *reinterpret_cast<struct s95**>(&rax11);
                *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                *reinterpret_cast<struct s95**>(&rax11) = tmp32_62;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                tmp32_63 = rsi13->f72 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax11));
                cf45 = reinterpret_cast<uint1_t>(tmp32_63 < rsi13->f72);
                rsi13->f72 = tmp32_63;
                zf64 = reinterpret_cast<uint1_t>(rsi13->f72 == 0);
                below_or_equal65 = reinterpret_cast<uint1_t>(cf45 | zf64);
                __asm__("outsb ");
                goto addr_402d47_72;
            }
        }
    }
    g402e0e = reinterpret_cast<unsigned char>(g402e0e & *reinterpret_cast<unsigned char*>(&rcx + 1));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    *reinterpret_cast<struct s95**>(&rax11) = *reinterpret_cast<struct s95**>(&rax11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    *reinterpret_cast<struct s95**>(&rax66) = *reinterpret_cast<struct s95**>(&rax11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax66) + 4) = 0;
    *rax66 = reinterpret_cast<signed char>(*rax66 + *reinterpret_cast<signed char*>(&rax66));
    *reinterpret_cast<struct s95**>(&rax67) = *reinterpret_cast<struct s95**>(&rax66);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax67) + 4) = 0;
    *rax67 = reinterpret_cast<signed char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    __asm__("outsb ");
    *reinterpret_cast<struct s95**>(&rax68) = *reinterpret_cast<struct s95**>(&rax67);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
    *rax68 = reinterpret_cast<signed char>(*rax68 + *reinterpret_cast<signed char*>(&rax68));
    g402e36 = *reinterpret_cast<unsigned char*>(&rcx + 1);
    *rax68 = reinterpret_cast<signed char>(*rax68 + *reinterpret_cast<signed char*>(&rax68));
    tmp32_69 = *reinterpret_cast<struct s95**>(&rsi13);
    *reinterpret_cast<struct s95**>(&rsi13) = *reinterpret_cast<struct s95**>(&rax68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
    *reinterpret_cast<struct s95**>(&rax11) = tmp32_69;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    goto addr_402e3e_78;
    addr_402da5_67:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax11) + 1) = reinterpret_cast<unsigned char>(0xff + *reinterpret_cast<unsigned char*>(&rdx2));
    goto addr_402da7_61;
    addr_402d47_72:
    goto addr_402d49_79;
    addr_402de0_59:
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    goto addr_402de8_80;
    addr_402d77_60:
    if (0) {
        addr_402de8_80:
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax11) + 1) = 41;
        tmp8_70 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        cf71 = reinterpret_cast<uint1_t>(tmp8_70 < rax11->f0);
        rax11->f0 = tmp8_70;
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2 + 1) + reinterpret_cast<uint1_t>(rax11->f0 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2 + 1) + cf71))));
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        goto addr_402df3_81;
    } else {
        __asm__("outsb ");
        __asm__("insd ");
        __asm__("outsb ");
        if (zf58) {
            addr_402dd2_83:
            goto addr_402dd4_84;
        } else {
            if (zf58) {
                addr_402df3_81:
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                goto addr_402dff_62;
            } else {
                cf57 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax11)) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)));
                *reinterpret_cast<struct s95**>(&rax11) = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax11)) - reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                zf58 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s95**>(&rax11) == 0);
                if (zf58) {
                    addr_402dd4_84:
                    rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp42) - 8);
                    *reinterpret_cast<struct s95**>(rsp42) = rdi72;
                    if (cf57) {
                        addr_402e40_87:
                    } else {
                        if (zf58) {
                            addr_402e3e_78:
                            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                            goto addr_402e40_87;
                        } else {
                            goto addr_402de0_59;
                        }
                    }
                } else {
                    if (!(*reinterpret_cast<signed char*>(&r8) + r15_73->f65)) 
                        goto addr_402de8_80; else 
                        goto addr_402d9c_92;
                }
            }
        }
    }
    rdi74 = &rdi75->f1;
    rsi76 = &rsi13->f1;
    *reinterpret_cast<struct s95**>(&rax77) = *reinterpret_cast<struct s95**>(&rax11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax77) + 4) = 0;
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *reinterpret_cast<unsigned char*>(&rdx2 + 1) = 45;
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    g402e56 = reinterpret_cast<unsigned char>(g402e56 >> *reinterpret_cast<unsigned char*>(&rcx));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + *reinterpret_cast<signed char*>(&rax77));
    *rax77 = reinterpret_cast<unsigned char>(*rax77 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax77)));
    *rbx78 = *rbx79 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax77));
    *rsi76 = *rsi76 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax77));
    *reinterpret_cast<struct s95**>(rcx) = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rcx)) + reinterpret_cast<unsigned char>(rcx));
    *rdi74 = *rdi74 + reinterpret_cast<unsigned char>(rcx);
    *reinterpret_cast<struct s95**>(rdx2) = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx2)));
    tmp32_80 = g21415287 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx2));
    g21415287 = tmp32_80;
    addr_402d9c_92:
    addr_402cca_38:
    cf45 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)) < reinterpret_cast<unsigned char>(rcx));
    below_or_equal65 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)) <= reinterpret_cast<unsigned char>(rcx));
    *reinterpret_cast<struct s95**>(rdx2) = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)) - reinterpret_cast<unsigned char>(rcx));
    zf64 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s95**>(rdx2) == 0);
    __asm__("outsd ");
    if (__intrinsic()) {
        addr_402d49_79:
        if (below_or_equal65) {
            addr_402db5_70:
            __asm__("xlatb ");
        } else {
            if (cf45) {
            }
            __asm__("outsb ");
            __asm__("insd ");
            __asm__("outsb ");
            if (zf64) 
                goto addr_402da7_61; else 
                goto addr_402d54_99;
        }
    } else {
        if (cf45) {
            goto addr_402d3c_68;
        } else {
            rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s95**>(rsp42) = reinterpret_cast<struct s95*>(0x30322074);
            goto addr_402cd3_103;
        }
    }
    addr_402d54_99:
    if (zf64) {
        *reinterpret_cast<uint32_t*>(&rsp42) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x73) * 0x71f0000;
        *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
        cf57 = __intrinsic();
        zf58 = __undefined();
        goto addr_402dd2_83;
    } else {
        rdi81->f65 = rdi82->f65 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rax11));
        if (!rdi83->f65) 
            goto addr_402da5_67;
    }
    __asm__("outsd ");
    __asm__("insd ");
    __asm__("insd ");
    goto addr_402d65_54;
    addr_402cd3_103:
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp16) + 0x39313032) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp16) + 0x39313032) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(&rsi13));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 97) & *reinterpret_cast<unsigned char*>(&rcx));
    cf45 = 0;
    zf64 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 97) == 0);
    below_or_equal65 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf64));
    if (!0) {
        __asm__("outsd ");
        rax11->f61 = reinterpret_cast<unsigned char>(rax11->f61 & *reinterpret_cast<unsigned char*>(&rdx2));
        __asm__("insb ");
    }
    addr_402c98_43:
    __asm__("outsd ");
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) - 32);
    goto addr_402c9c_51;
    addr_402c57_46:
    if (!zf51) {
    }
    addr_402cb2_49:
    __asm__("insb ");
    addr_402c3d_53:
    *reinterpret_cast<int32_t*>(&rsp84) = rsi13->f20 * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp84) + 4) = 0;
    rdi85->f72 = 0;
    *reinterpret_cast<struct s95**>(&rsi13) = reinterpret_cast<struct s95*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 32) * 0x74206f74);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
    *reinterpret_cast<struct s95**>(reinterpret_cast<int64_t>(rsp84) - 8) = reinterpret_cast<struct s95*>(0x72462065);
    goto addr_402c55_45;
    addr_402a84_12:
    if (zf14) {
        addr_402aee_9:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) & *reinterpret_cast<unsigned char*>(&rcx));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf86 = 0;
            goto addr_402b65_115;
        } else {
            *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s95**>(rdx2)));
            cf86 = 0;
            zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
            below_or_equal87 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf51));
            rsp88 = reinterpret_cast<struct s95*>(reinterpret_cast<int64_t>(rsp4) - 8);
            *reinterpret_cast<struct s95**>(rsp88) = rsp88;
            rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp88) - 8);
            *reinterpret_cast<struct s95**>(rsp42) = reinterpret_cast<struct s95*>(0x70207369);
            if (0) {
                goto addr_402b71_118;
            }
        }
    } else {
        addr_402a86_20:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x72) = 0;
        __asm__("insd ");
        goto addr_402a8c_14;
    }
    addr_402b01_119:
    if (0) {
        addr_402b65_115:
        if (0) 
            goto addr_402bd4_120;
    } else {
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) & *reinterpret_cast<unsigned char*>(&rcx + 1));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x73)) {
            addr_402b80_122:
            rsp89 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s95**>(rsp89) = r12_90;
            rcx = *reinterpret_cast<struct s95**>(rsp89);
            rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rsp89) + 8);
            rdi91->f72 = reinterpret_cast<unsigned char>(rdi92->f72 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsi13->f49 = reinterpret_cast<unsigned char>(rsi13->f49 & *reinterpret_cast<unsigned char*>(&rax11));
            goto addr_402b8b_25;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp17) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x75) * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
            goto addr_402b14_23;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsp42) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp16) + 100) * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
    cf86 = __intrinsic();
    zf51 = __undefined();
    below_or_equal87 = reinterpret_cast<uint1_t>(cf86 | zf51);
    if (cf86) {
        if (cf86) {
            addr_402bf4_126:
            *reinterpret_cast<uint32_t*>(&rsp42) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp16) + 0x69);
            *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
            if (below_or_equal87) {
                *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | rsi13->f6f);
                if (*reinterpret_cast<unsigned char*>(&rax11)) 
                    goto addr_402cd3_103;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = 0;
                *reinterpret_cast<int32_t*>(&rbp16) = rdi93->f70;
                *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_402c24_41;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
                    rdi94->f4e = reinterpret_cast<unsigned char>(rdi95->f4e & *reinterpret_cast<unsigned char*>(&rax11));
                    *reinterpret_cast<struct s95**>(reinterpret_cast<unsigned char>(rsp42) - 8) = rbp16;
                    rdi96->f65 = reinterpret_cast<unsigned char>(rdi97->f65 & *reinterpret_cast<unsigned char*>(&rax11));
                    __asm__("outsb ");
                    if (0) 
                        goto addr_402c75_133; else 
                        goto addr_402c14_134;
                }
            }
        } else {
            addr_402bd4_120:
            __asm__("insd ");
            __asm__("outsd ");
            if (!cf86) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x74) = 0;
            }
        }
    } else {
        addr_402b71_118:
        __asm__("outsb ");
        if (zf51) {
            if (!below_or_equal87) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x65) = 0;
                below_or_equal87 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x65) == 0)));
                goto addr_402bf4_126;
            }
        } else {
            rdi98->f66 = reinterpret_cast<unsigned char>(rdi99->f66 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp100 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s95**>(rsp100) = rdx2;
            rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<unsigned char>(rsp100) - 8);
            *reinterpret_cast<struct s95**>(rsp42) = rsp42;
            goto addr_402b80_122;
        }
    }
    addr_402c75_133:
    addr_402c14_134:
    __asm__("insb ");
    rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & *reinterpret_cast<unsigned char*>(&rdx2));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
    rdi101->f4e = reinterpret_cast<unsigned char>(rdi102->f4e & *reinterpret_cast<unsigned char*>(&rax11));
    rsp42 = reinterpret_cast<struct s95*>(reinterpret_cast<int64_t>(rsp4) - 8);
    *reinterpret_cast<struct s95**>(rsp42) = rbp16;
    rdi103->f65 = reinterpret_cast<unsigned char>(rdi104->f65 & *reinterpret_cast<unsigned char*>(&rax11));
    cf86 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_402a9f_142;
    goto addr_402b01_119;
    addr_402a9f_142:
    __asm__("insb ");
    rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & *reinterpret_cast<unsigned char*>(&rdx2));
}

struct s134 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s135 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s136 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s137 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s138 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s139 {
    signed char[111] pad111;
    signed char f6f;
};

struct s140 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s141 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s142 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s143 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s144 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s145 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_402a29(struct s134* rcx, int16_t dx) {
    struct s135* rdx2;
    int1_t cf3;
    int1_t cf4;
    int1_t zf5;
    int1_t sf6;
    struct s136* rsi7;
    struct s137* rsi8;
    unsigned char ah9;
    struct s138* rbx10;
    int1_t zf11;
    struct s139* rbx12;
    struct s140* rdi13;
    struct s141* rdi14;
    void* rsp15;
    int1_t zf16;
    void** rax17;
    void** rax18;
    struct s142* rsi19;
    struct s143* rsi20;
    unsigned char ah21;
    struct s144* rbp22;
    struct s145* rbp23;
    unsigned char ah24;
    void* rax25;
    int64_t rbp26;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    if (cf3) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf4) {
        goto addr_402a50_4;
    }
    if (!zf5) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf6) 
        goto addr_402a35_7;
    addr_402a41_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_402ace_12;
    } else {
        addr_402a50_4:
    }
    rdi13->f41 = reinterpret_cast<unsigned char>(rdi14->f41 & *reinterpret_cast<unsigned char*>(&rdx2));
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf16 = *reinterpret_cast<void**>(&rsp15) == *rax17;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp15)) <= reinterpret_cast<uint32_t>(*rax18)) 
        goto addr_402b55_15;
    addr_402b55_15:
    if (zf16) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf16) 
        goto addr_402b5a_18;
    rsi19->f6f = reinterpret_cast<unsigned char>(rsi20->f6f & ah21);
    addr_402b5a_18:
    rbp22->f76 = reinterpret_cast<unsigned char>(rbp23->f76 & ah24);
    addr_402ace_12:
    addr_402a35_7:
    *reinterpret_cast<unsigned char*>(&rdx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax25) + rbp26 * 2 + 0x69));
    if (1) {
        rdx2->f65 = 0;
        if (__undefined()) 
            goto addr_402ace_12; else 
            goto "???";
    } else {
        if (0) 
            goto " as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("outsd ");
        if (0) 
            goto "ublic License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
            goto addr_402a41_9;
    }
}

struct s146 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s147 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s148 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s149 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_402a51(int64_t rcx, unsigned char dl) {
    void* rsp3;
    int1_t cf4;
    int1_t sf5;
    int1_t zf6;
    void** rax7;
    void** rax8;
    struct s146* rsi9;
    struct s147* rsi10;
    unsigned char al11;
    struct s148* rbx12;
    struct s149* rbx13;

    rsp3 = __zero_stack_offset();
    if (cf4) {
        if (!sf5) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf6) 
            goto addr_402ac2_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp3)) < reinterpret_cast<int32_t>(*rax7)) {
            if (*reinterpret_cast<void**>(&rsp3) != *rax8) {
            }
        }
    }
    addr_402ac2_4:
    rsi9->f72 = reinterpret_cast<unsigned char>(rsi10->f72 & al11);
    rbx12->f6f = reinterpret_cast<unsigned char>(rbx13->f6f & dl);
}

void fun_402a71() {
    int1_t cf1;

    __asm__("outsd ");
    if (cf1) 
        goto " GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insd ");
    __asm__("outsd ");
}

void fun_402ab6() {
    __asm__("insb ");
}

struct s150 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s151 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s152 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s153 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_402acf(struct s150* rcx) {
    int1_t cf2;
    struct s151* rsi3;
    struct s152* rsi4;
    unsigned char al5;
    struct s153* rsi6;
    unsigned char al7;

    if (!cf2) {
        rsi3->f6f = reinterpret_cast<unsigned char>(rsi4->f6f & al5);
        if (rsi6->f6f) {
            rcx->f4e = reinterpret_cast<unsigned char>(rcx->f4e & al7);
        }
    }
}

struct s154 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_402ad8() {
    void* rsp1;
    int1_t zf2;
    void** rax3;
    void** rax4;
    int64_t rbp5;
    struct s154* rdi6;
    void* rax7;
    void* rax8;
    unsigned char dh9;

    rsp1 = __zero_stack_offset();
    if (!zf2) {
        __asm__("outsd ");
        __asm__("outsb ");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp1)) <= reinterpret_cast<uint32_t>(*rax3)) 
            goto "ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp1)) < reinterpret_cast<uint32_t>(*rax4)) 
            goto "thout even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        *reinterpret_cast<int32_t*>(&rbp5) = rdi6->f6e * 0x6f203220;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) + rbp5 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax8) + rbp5 * 2 + 0x65) & dh9);
    }
}

void fun_402b24() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s155 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s156 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s157 {
    signed char[115] pad115;
    signed char f73;
};

void fun_402b2f() {
    struct s155* rbp1;
    struct s156* rbp2;
    unsigned char dh3;
    struct s157* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_402b3a() {
    int1_t zf1;

    if (!zf1) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_402bc4() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s158 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s159 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_402bdd() {
    struct s158* rax1;
    struct s159* rax2;
    unsigned char ch3;

    if (!__undefined()) 
        goto "he GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!__intrinsic()) 
        goto "e Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (!__undefined()) 
        goto "Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    rax1->f61 = reinterpret_cast<unsigned char>(rax2->f61 & ch3);
}

void fun_402c19() {
    __asm__("insb ");
}

void fun_402c5e() {
    int1_t cf1;

    if (cf1) 
        goto "cense)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com"; else 
        goto "???";
}

void fun_402c67() {
    int1_t zf1;

    if (zf1) 
        goto "ght 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    __asm__("outsd ");
    __asm__("outsb ");
    __asm__("outsb ");
}

struct s160 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s161 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_402c79(int64_t rcx) {
    struct s160* rsi2;
    struct s161* rsi3;
    unsigned char al4;

    __asm__("outsb ");
    if (__undefined()) 
        goto "sign Hannover, Germany\ninfo@paland.com";
    if (__undefined()) 
        goto "land Printf (MIT License)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    rsi2->f69 = reinterpret_cast<unsigned char>(rsi3->f69 & al4);
}

struct s162 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s163 {
    signed char[114] pad114;
    unsigned char f72;
};

void fun_402cb4() {
    struct s162* rax1;
    struct s163* rax2;
    unsigned char dl3;

    __asm__("outsb ");
    rax1->f72 = reinterpret_cast<unsigned char>(rax2->f72 & dl3);
}

void fun_402cea() {
    __asm__("outsb ");
    if (1) 
        goto "etCommandLineW"; else 
        goto "???";
}

void fun_402d08() {
    int1_t sf1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;

    __asm__("outsb ");
    if (!sf1) {
        *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    }
}

void fun_402d14() {
    __asm__("outsb ");
}

void fun_402d21() {
    int1_t cf1;
    int32_t eax2;
    uint32_t eax3;

    cf1 = reinterpret_cast<uint32_t>(eax2 + 0x74697845) < eax3;
    if (cf1) 
        goto "GetLastError";
    if (!cf1) 
        goto 0x402d2e; else 
        goto "???";
}

void fun_402d66() {
    __asm__("outsb ");
    if (__undefined()) 
        goto "etDefaultDllDirectories"; else 
        goto "???";
}

void fun_402d9d() {
    int1_t cf1;
    int1_t cf2;

    if (!cf1) 
        goto 0x402e13;
    if (cf2) 
        goto 0x402e14; else 
        goto "???";
}

void fun_402db0() {
    __asm__("outsb ");
    __asm__("insb ");
}

void fun_402dbf() {
    int1_t zf1;
    int1_t zf2;

    if (!zf1) 
        goto 0x402e2d;
    if (zf2) 
        goto 0x402e07;
    __asm__("insb ");
    __asm__("insb ");
}

void fun_402e7b() {
    int32_t* rbx1;
    int32_t* rbx2;
    int32_t ebx3;

    *rbx1 = *rbx2 + ebx3;
}

void fun_402e83() {
}

void fun_402e8a(int64_t rcx, int32_t edx) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;
    uint32_t* rax12;
    uint32_t* rax13;
    uint32_t eax14;
    int32_t eax15;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
    *rax12 = *rax13 | eax14;
    *reinterpret_cast<int32_t*>(rcx + 0x120104) = *reinterpret_cast<int32_t*>(rcx + 0x120104) + eax15;
    *reinterpret_cast<int32_t*>(rcx + 0x1c0a100f) = *reinterpret_cast<int32_t*>(rcx + 0x1c0a100f) + edx;
}

void fun_402e9f() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
}

void fun_402ea5() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;
    int32_t* rax5;
    signed char al6;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
    *reinterpret_cast<signed char*>(&rax5) = reinterpret_cast<signed char>(al6 + 16);
    *rax5 = *rax5 - 0x5f7d0000;
}

struct s164 {
    unsigned char f0;
    signed char[1711345791] pad1711345792;
    int32_t f66011080;
};

struct s165 {
    signed char[46] pad46;
    signed char f2e;
};

struct s166 {
    signed char[46] pad46;
    signed char f2e;
};

void fun_402eb3() {
    void* rsp1;
    struct s164* rax2;
    signed char dl3;
    struct s165* rsi4;
    struct s166* rsi5;

    rsp1 = __zero_stack_offset();
    *reinterpret_cast<void**>(&rax2) = *reinterpret_cast<void**>(&rsp1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (1) {
        goto addr_402f2f_3;
    } else {
        if (1) {
            addr_402f2f_3:
        } else {
            if (!1) {
            }
        }
        *reinterpret_cast<void**>(&rax2) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax2)) | 0xce);
        *reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1)) + dl3);
        rax2->f0 = reinterpret_cast<unsigned char>(rax2->f0 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + 0x66011080) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + 0x66011080) - 0x7be0f0d2;
        rax2->f0 = reinterpret_cast<unsigned char>(rax2->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax2)));
        rax2->f0 = reinterpret_cast<unsigned char>(rax2->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax2)));
        rsi4->f2e = reinterpret_cast<signed char>(rsi5->f2e + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1)));
    }
}

void fun_402ec8() {
    int64_t rbp1;
    int64_t rbp2;
    signed char ah3;
    int64_t rax4;
    int16_t ax5;
    signed char dl6;

    *reinterpret_cast<signed char*>(rbp1 - 96) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp2 - 96) + ah3);
    *reinterpret_cast<uint32_t*>(&rax4) = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax5));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *reinterpret_cast<signed char*>(rax4 + 0xc160409) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax4 + 0xc160409) + dl6);
}

void fun_402f06(uint32_t* rcx, int64_t rdx) {
    signed char* rax3;
    signed char ah4;
    int64_t rsi5;
    int64_t rsi6;
    unsigned char al7;

    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<signed char>(ah4 + *reinterpret_cast<signed char*>(&rdx));
    *rax3 = reinterpret_cast<signed char>(*rax3 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1));
    *rcx = *rcx + *reinterpret_cast<uint32_t*>(&rax3);
    *reinterpret_cast<uint32_t*>(rsi5 + rdx) = *reinterpret_cast<uint32_t*>(rsi6 + rdx) | *reinterpret_cast<uint32_t*>(&rax3);
    *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<unsigned char>(al7 | 38);
    __asm__("retf ");
    *rax3 = reinterpret_cast<signed char>(*rax3 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1));
    __asm__("out 0x1, eax");
    *rcx = *rcx + *reinterpret_cast<int32_t*>(&rcx);
    *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax3) + 22) | 0xce);
    *rax3 = reinterpret_cast<signed char>(*rax3 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1));
    *rcx = *rcx + *reinterpret_cast<uint32_t*>(&rax3);
}

void fun_402f23() {
}

void fun_402f25(signed char cl, signed char dl) {
    signed char* rsi3;
    signed char* rsi4;
    int64_t rdi5;
    int64_t rdi6;
    int32_t edi7;
    int64_t rdi8;
    int64_t rdi9;
    signed char bh10;

    *rsi3 = reinterpret_cast<signed char>(*rsi4 + cl);
    *reinterpret_cast<int32_t*>(rdi5 - 19) = *reinterpret_cast<int32_t*>(rdi6 - 19) + edi7;
    *reinterpret_cast<signed char*>(rdi8 - 0x80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rdi9 - 0x80) + reinterpret_cast<signed char>(bh10 + dl));
}

void fun_40114f() {
    uint64_t* rax1;

    rax1 = fun_4010fb(0x3220, 0x6f000);
    *rax1 = *rax1 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_401214() {
    return 0;
}

void fun_401240() {
    return;
}

int64_t fun_402615(int64_t rcx) {
    int64_t rax2;
    uint32_t eax3;
    uint32_t eax4;
    int1_t cf5;

    *reinterpret_cast<uint32_t*>(&rax2) = eax3 >> 16 & 0xfff | eax4 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    cf5 = *reinterpret_cast<uint16_t*>(&rax2) < 0xfff;
    if (!cf5) {
        *reinterpret_cast<uint32_t*>(&rax2) = g404668;
    } else {
        __asm__("syscall ");
        if (!cf5) {
            return rax2;
        }
    }
    g407838 = *reinterpret_cast<uint32_t*>(&rax2);
    return 0xff;
}

void fun_4026e7() {
    return;
}

void fun_4027d5() {
    int64_t rbx1;
    int64_t rsi2;
    int64_t rdx3;
    int64_t* rdi4;
    int64_t* rsi5;
    int64_t rdi6;
    int64_t rdx7;

    rbx1 = *reinterpret_cast<int64_t*>(rsi2 + rdx3 - 8);
    *rdi4 = *rsi5;
    *reinterpret_cast<int64_t*>(rdi6 + rdx7 - 8) = rbx1;
}

void fun_40286d() {
}

void fun_40288a() {
    uint64_t rdx1;
    int32_t eax2;
    int32_t esi3;
    int64_t rcx4;
    int64_t rdx5;
    signed char* rdi6;

    if (rdx1 >= 0x400) {
        eax2 = esi3;
        rcx4 = rdx5;
        while (*reinterpret_cast<int32_t*>(&rcx4)) {
            *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(&rcx4) - 1;
            *rdi6 = *reinterpret_cast<signed char*>(&eax2);
            ++rdi6;
        }
        goto 0x4028ef;
    }
}

void fun_4028f2() {
    uint64_t* rdi1;
    unsigned char sil2;

    *rdi1 = static_cast<uint64_t>(sil2) * 0x101010101010101;
}

struct s167 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s168 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s169 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_40117b() {
    struct s167* r9_1;
    struct s167* rdi2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s168* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s168* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s168* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s169* rax18;

    r9_1 = rdi2;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_1) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s168*>(&r9_1->f18);
    if (1 < r10d3) {
        do {
            rbx7 = rdx6->f0;
            r13_8 = rdx6->f8;
            r8_9 = rdx6;
            r12d10 = rdx6->f10;
            r14d11 = rdx6->f14;
            *reinterpret_cast<uint32_t*>(&rax12) = r11d5;
            do {
                ecx13 = *reinterpret_cast<uint32_t*>(&rax12);
                *reinterpret_cast<uint32_t*>(&rax12) = *reinterpret_cast<uint32_t*>(&rax12) - 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
                if (rbx7 == (r8_9 - 1)->f0) 
                    break;
                rsi14 = &(r8_9 - 1)->f0;
                rdi15 = r8_9;
                --r8_9;
                zf16 = *reinterpret_cast<uint32_t*>(&rax12) == 0;
                ecx17 = 6;
                while (ecx17) {
                    --ecx17;
                    rdi15->f0 = *rsi14;
                    rdi15 = reinterpret_cast<struct s168*>(&rdi15->pad8);
                    ++rsi14;
                }
            } while (!zf16);
            goto addr_4011e5_12;
            *reinterpret_cast<uint32_t*>(&rax12) = ecx13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            continue;
            addr_4011e5_12:
            ++r11d5;
            ++rdx6;
            rax18 = reinterpret_cast<struct s169*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_1));
            rax18->f0 = rbx7;
            rax18->f8 = r13_8;
            rax18->f10 = r12d10;
            rax18->f14 = r14d11;
        } while (r11d5 < r10d3);
        return;
    } else {
        return;
    }
}

void fun_401217() {
    __asm__("cli ");
    __asm__("hlt ");
}

void fun_401245() {
    int64_t v1;
    int64_t* r14_2;
    int64_t* rdi3;
    int64_t rcx4;
    int64_t rcx5;
    int64_t* rdi6;
    int64_t* rax7;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<unsigned char*>(&g404630) = 8;
    r14_2 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + *reinterpret_cast<int32_t*>(&v1) * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi3) = reinterpret_cast<int32_t>(" -");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx4) = 11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    while (rcx4) {
        --rcx4;
        *rdi3 = reinterpret_cast<int64_t>(fun_401214);
        ++rdi3;
    }
    *reinterpret_cast<uint32_t*>(&rcx5) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rdi6 = r14_2;
    do {
        if (!rcx5) 
            break;
        --rcx5;
        ++rdi6;
    } while (*rdi6);
    fun_401297();
    g40783c = g40783c | 1;
    *reinterpret_cast<int32_t*>(&rax7) = 0x403008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    while (0x403010 != rax7) {
        *rax7();
        ++rax7;
    }
    fun_40141f();
    fun_4017fd();
}

uint64_t g406048;

int64_t fun_401433() {
    signed char* r12_1;
    int1_t zf2;
    uint32_t eax3;
    int1_t zf4;
    signed char* r13_5;
    uint64_t r12_6;
    signed char** rax7;
    uint64_t rbx8;
    signed char** rdx9;
    uint64_t r14_10;
    int1_t cf11;
    signed char al12;
    signed char** rax13;
    int64_t rax14;

    r12_1 = g406038;
    zf2 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
    if (!zf2 || (eax3 = fun_40156c(), !!eax3)) {
        *r12_1 = 1;
    }
    zf4 = g406050 == 0;
    r13_5 = r12_1;
    if (zf4) {
        g406050 = reinterpret_cast<signed char**>(0x406058);
        g406048 = 8;
        fun_40215b();
    }
    r12_6 = g406040;
    rax7 = g406050;
    rbx8 = r12_6 - 1;
    do {
        if (rbx8 == 0xffffffffffffffff) 
            break;
        rdx9 = rax7 + rbx8;
        --rbx8;
    } while (*reinterpret_cast<int64_t*>(rax7 + rbx8 + 1));
    goto addr_4014cf_9;
    r14_10 = r12_6 + 1;
    cf11 = r14_10 < g406048;
    if (cf11 || (al12 = fun_402286(1, 8), !!al12)) {
        rax13 = g406050;
        rbx8 = r12_6;
        rax13[r12_6] = r13_5;
        g406040 = r14_10;
    }
    *reinterpret_cast<int32_t*>(&rax14) = *reinterpret_cast<int32_t*>(&rbx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    addr_40151b_13:
    return rax14;
    addr_4014cf_9:
    *rdx9 = r13_5;
    *reinterpret_cast<int32_t*>(&rax14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    goto addr_40151b_13;
}

void fun_40205a() {
    uint64_t rax1;
    uint64_t rax2;
    signed char** rcx3;
    signed char** rcx4;
    signed char* rdi5;

    rax1 = g406040;
    rax2 = rax1 - 1;
    do {
        if (rax2 == 0xffffffffffffffff) 
            break;
        rcx3 = g406050;
        rcx4 = rcx3 + rax2;
        --rax2;
    } while (*rcx4 != rdi5);
    goto addr_40207d_4;
    return;
    addr_40207d_4:
    *rcx4 = reinterpret_cast<signed char*>(0);
    return;
}

struct s170 {
    signed char[20] pad20;
    int32_t f14;
};

struct s171 {
    signed char[16] pad16;
    int32_t f10;
};

struct s172 {
    signed char[24] pad24;
    int64_t f18;
};

struct s173 {
    signed char[32] pad32;
    int32_t f20;
};

struct s174 {
    signed char[20] pad20;
    int32_t f14;
};

struct s175 {
    signed char[20] pad20;
    uint32_t f14;
};

int64_t fun_4020d8() {
    int32_t r8d1;
    int64_t rcx2;
    struct s170* rdi3;
    struct s171* rdi4;
    uint32_t eax5;
    struct s172* rdi6;
    int64_t rsi7;
    struct s173* rdi8;
    struct s174* rdi9;
    struct s175* rdi10;
    int64_t rax11;

    r8d1 = 0;
    while (*reinterpret_cast<int32_t*>(&rcx2) = rdi3->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0, *reinterpret_cast<int32_t*>(&rcx2) != rdi4->f10) {
        __asm__("in al, dx");
        if (*reinterpret_cast<unsigned char*>(&eax5) & 1) {
            __asm__("in al, dx");
            ++r8d1;
            *reinterpret_cast<unsigned char*>(rdi6->f18 + rcx2) = *reinterpret_cast<unsigned char*>(&eax5);
            *reinterpret_cast<int32_t*>(&rsi7) = rdi8->f20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
            eax5 = reinterpret_cast<uint32_t>(rdi9->f14 + 1) & static_cast<uint32_t>(rsi7 - 1);
            rdi10->f14 = eax5;
        } else {
            __asm__("pause ");
        }
    }
    *reinterpret_cast<int32_t*>(&rax11) = r8d1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    return rax11;
}

void fun_4025d0(int64_t rcx) {
    uint64_t rax2;
    int16_t ax3;

    *reinterpret_cast<int32_t*>(&rax2) = ax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax2) < 0) 
        goto 0x4025f2;
    __asm__("syscall ");
    if (rax2 < 0xfffffffffffff001) {
        return;
    }
}

int64_t fun_4026d0() {
    int32_t ecx1;
    int64_t rdi2;
    int64_t rax3;
    unsigned char dil4;
    int64_t rax5;
    int64_t rdi6;
    uint32_t edi7;
    uint32_t edi8;
    int64_t rcx9;

    ecx1 = static_cast<int32_t>(rdi2 - 7);
    if (*reinterpret_cast<unsigned char*>(&ecx1) > 85) {
        *reinterpret_cast<uint32_t*>(&rax3) = dil4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0x7f || !(*reinterpret_cast<unsigned char*>(0x404320 + rax3) & 16)) {
            *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax3) & 0xffffffc0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdi6) = (edi7 & 7) << 24 | (edi8 & 56) << 13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax3) = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdi6 + rax5 * 4) + 0x3030305c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
        return rax3;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<unsigned char*>(&ecx1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        goto *reinterpret_cast<int64_t*>(rcx9 * 8 + 0x404070);
    }
}

void fun_4026ea() {
    return;
}

void fun_402740() {
}

struct s176 {
    signed char[2] pad2;
    signed char f2;
};

struct s177 {
    signed char[2] pad2;
    signed char f2;
};

struct s178 {
    signed char[1] pad1;
    signed char f1;
};

struct s179 {
    signed char[1] pad1;
    signed char f1;
};

void fun_4027f8() {
    struct s176* rdi1;
    struct s177* rsi2;
    struct s178* rdi3;
    struct s179* rsi4;
    signed char* rdi5;
    signed char* rsi6;

    rdi1->f2 = rsi2->f2;
    rdi3->f1 = rsi4->f1;
    *rdi5 = *rsi6;
    goto 0x4027e7;
}

void fun_4027e9() {
    int32_t ebx1;
    int64_t rsi2;
    int64_t rdx3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rdi6;
    int64_t rdx7;

    ebx1 = *reinterpret_cast<int32_t*>(rsi2 + rdx3 - 4);
    *rdi4 = *rsi5;
    *reinterpret_cast<int32_t*>(rdi6 + rdx7 - 4) = ebx1;
}

struct s180 {
    signed char[2] pad2;
    signed char f2;
};

struct s181 {
    signed char[1] pad1;
    signed char f1;
};

void fun_402922() {
    struct s180* rdi1;
    signed char sil2;
    struct s181* rdi3;
    signed char sil4;
    signed char* rdi5;
    signed char sil6;

    rdi1->f2 = sil2;
    rdi3->f1 = sil4;
    *rdi5 = sil6;
    goto 0x4028ef;
}

void fun_40290e() {
}

int64_t fun_401e02() {
    return 0x407838;
}

struct s182 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s183 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s184 {
    signed char[111] pad111;
    signed char f6f;
};

struct s185 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_4029a1() {
    struct s182* rdi1;
    struct s183* rdi2;
    unsigned char dh3;
    struct s184* rsi4;
    struct s185* rsi5;
    signed char ch6;

    rdi1->f6f = reinterpret_cast<unsigned char>(rdi2->f6f & dh3);
    if (!0) {
        rsi4->f6f = reinterpret_cast<signed char>(rsi5->f6f + ch6);
        __asm__("insb ");
        __asm__("insb ");
        if (0) 
            goto "Roberts Tunney\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("insb ");
    }
}

void fun_401223() {
    goto 0x401222;
}

void fun_40124e() {
    int1_t zf1;
    int64_t rdi2;

    zf1 = rdi2 == 0;
    if (!zf1) {
    }
    if (zf1) 
        goto 0x40125e;
    *reinterpret_cast<unsigned char*>(&g404630) = 32;
}

struct s186 {
    signed char[20] pad20;
    int32_t f14;
};

struct s187 {
    signed char[16] pad16;
    int32_t f10;
};

struct s188 {
    signed char[32] pad32;
    int32_t f20;
};

struct s189 {
    signed char[16] pad16;
    uint32_t f10;
};

int64_t fun_402115() {
    int32_t r8d1;
    struct s186* rdi2;
    struct s187* rdi3;
    uint32_t eax4;
    struct s188* rdi5;
    struct s189* rdi6;
    int64_t rax7;

    r8d1 = 0;
    while (rdi2->f14 != rdi3->f10) {
        __asm__("in al, dx");
        if (*reinterpret_cast<unsigned char*>(&eax4) & 32) {
            __asm__("out dx, al");
            ++r8d1;
            eax4 = reinterpret_cast<uint32_t>(rdi5->f20 - 1);
            rdi6->f10 = reinterpret_cast<uint32_t>(rdi3->f10 + 1) & eax4;
        } else {
            __asm__("pause ");
        }
    }
    *reinterpret_cast<int32_t*>(&rax7) = r8d1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

int64_t SetDefaultDllDirectories = 0x2db6;

int64_t GetCommandLineW = 0x2d5c;

int64_t GetEnvironmentStringsW = 0x2d6e;

int64_t FreeEnvironmentStringsW = 0x2d42;

void fun_401867() {
    int64_t rcx1;
    void* rbp2;
    int32_t eax3;
    int64_t rax4;
    void* r9_5;
    uint16_t* rax6;
    struct s63* rdx7;
    uint16_t* r13_8;
    void* rax9;
    signed char* rcx10;
    void* v11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t v14;
    int64_t rax15;
    signed char* rcx16;
    signed char* r10_17;
    uint64_t r8_18;
    struct s63* rdx19;
    signed char* r11_20;
    signed char* rax21;
    uint32_t r9d22;
    uint64_t rax23;
    uint32_t eax24;
    uint32_t eax25;
    int64_t rax26;
    void* rax27;
    void* rcx28;

    *reinterpret_cast<int32_t*>(&rcx1) = 0x800;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax3 = reinterpret_cast<int32_t>(SetDefaultDllDirectories(0x800));
    if (!eax3) {
        rax4 = reinterpret_cast<int64_t>(GetStdHandle(-12));
        r9_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp2) - 0x8030);
        WriteFile(rax4, "nodll\n", 6, r9_5);
        *reinterpret_cast<int32_t*>(&rcx1) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
        ExitProcess(1, 0x4018af, 6, r9_5);
    }
    g404630 = 4;
    GetCommandLineW(rcx1, 0x4018af, 6, r9_5);
    rax6 = reinterpret_cast<uint16_t*>(GetEnvironmentStringsW(rcx1, 0x4018af, 6, r9_5));
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    r13_8 = rax6;
    fun_401afe(reinterpret_cast<int64_t>(rbp2) - 0xd030, 0x3fff, 0x200, r9_5);
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (rcx10 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(v11) + reinterpret_cast<int64_t>(rax9)), *reinterpret_cast<signed char*>(&rdx7) = *rcx10, !!*reinterpret_cast<signed char*>(&rdx7)) {
        if (*reinterpret_cast<signed char*>(&rdx7) == 92) {
            *rcx10 = 47;
        }
        rax9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax9) + 1);
    }
    eax12 = *r13_8;
    if (*reinterpret_cast<uint16_t*>(&eax12) > 0xd7ff) {
        eax13 = fun_40262d(rcx10, rdx7, 0x200, rcx10, rdx7, 0x200);
    } else {
        v14 = eax12;
        eax13 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax15) = eax13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    rcx16 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) - 0x8030);
    r10_17 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) - 50);
    *reinterpret_cast<int32_t*>(&r8_18) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = 0;
    rdx19 = reinterpret_cast<struct s63*>(reinterpret_cast<int64_t>(r13_8) + (rax15 + rax15));
    r11_20 = rcx16;
    while (v14) {
        ++r8_18;
        if (r8_18 <= 0x1ff) {
            rax21 = reinterpret_cast<signed char*>(0);
            if (reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(r10_17)) {
                rax21 = rcx16;
            }
            *reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rbp2) + r8_18 * 8 - 0xe038) = rax21;
        }
        do {
            r9d22 = v14;
            rax23 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r9d22)));
            if (r9d22 > 0x7f) {
                rax23 = fun_40263c(rcx16, rdx19);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx16) >= reinterpret_cast<uint64_t>(r10_17)) 
                    break;
                ++rcx16;
                rax23 = rax23 >> 8;
            } while (rax23);
            eax24 = rdx19->f0;
            if (*reinterpret_cast<uint16_t*>(&eax24) > 0xd7ff) {
                eax25 = fun_40262d(rcx16, rdx19, r8_18);
            } else {
                v14 = eax24;
                eax25 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax26) = eax25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            rdx19 = reinterpret_cast<struct s63*>(reinterpret_cast<int64_t>(rdx19) + (rax26 + rax26));
        } while (r9d22);
        rax27 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx16) - reinterpret_cast<uint64_t>(r11_20));
        if (reinterpret_cast<uint64_t>(rax27) > 0x7ffd) {
            rax27 = reinterpret_cast<void*>(0x7ffd);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) + reinterpret_cast<uint64_t>(rax27) - 0x8030) = 0;
    }
    if (reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(r10_17)) {
        ++rcx16;
    }
    rcx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx16) - reinterpret_cast<uint64_t>(r11_20));
    if (reinterpret_cast<uint64_t>(rcx28) > 0x7ffe) {
        rcx28 = reinterpret_cast<void*>(0x7ffe);
    }
    if (r8_18 > 0x1ff) {
        r8_18 = 0x1ff;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) + reinterpret_cast<uint64_t>(rcx28) - 0x8030) = 0;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp2) + r8_18 * 8 - 0xe030) = 0;
    FreeEnvironmentStringsW(r13_8);
    goto 0x401524;
}

void fun_4025fa() {
    goto 0x402607;
}

void fun_4026ed() {
    return;
}

void fun_402970() {
    goto 0x40296f;
}

void fun_401225() {
    int64_t rcx1;

    rcx1 = 8;
    while (*reinterpret_cast<int32_t*>(&rcx1)) {
        *reinterpret_cast<int32_t*>(&rcx1) = *reinterpret_cast<int32_t*>(&rcx1) - 1;
    }
    while (1) {
        __asm__("cli ");
        __asm__("lidt [rsi-0x8]");
        __asm__("ud2 ");
    }
}

void fun_402600() {
}

int64_t fun_4026f0() {
    int64_t rax1;
    uint32_t eax2;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 | 0xa5c6e00;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    return rax1;
}

void fun_402972() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
}

void fun_4026f6() {
    return;
}

void fun_4026f9() {
    return;
}

void fun_4026fc() {
    return;
}

void fun_4026ff() {
    return;
}

void fun_402702() {
    return;
}

void fun_402705() {
    return;
}

void fun_402708() {
    return;
}
