
uint32_t g443c74;

uint32_t g440668;

void fun_405211();

struct s0 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

uint64_t* fun_401158(uint64_t* rcx, uint64_t* rdx);

void* fun_401000() {
    int1_t zf1;
    uint64_t* rcx2;
    struct s0* r13_3;
    uint64_t r12_4;
    struct s0* rbx5;
    struct s0* rax6;
    uint64_t r12_7;
    uint64_t rax8;
    uint64_t* rax9;
    uint64_t rdx10;

    g443c74 = g443c74 | 2;
    zf1 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("syscall ");
        __asm__("syscall ");
    }
    fun_405211();
    rcx2 = reinterpret_cast<uint64_t*>(0);
    r13_3 = reinterpret_cast<struct s0*>(0x86);
    *reinterpret_cast<int32_t*>(&r12_4) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = 0;
    rbx5 = reinterpret_cast<struct s0*>(0x86);
    while (rbx5->f8) {
        do {
            rax6 = rbx5;
            rbx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx5) + 24);
            if (!(rbx5->f10 - 1)) 
                break;
        } while (rbx5->f8);
        goto addr_4010a6_7;
        rbx5 = rax6;
        addr_4010ab_9:
        if (rbx5->f0 >= r12_4) {
            r12_4 = rbx5->f0;
        }
        r12_7 = r12_4 + 0xfff;
        while (1) {
            r12_4 = r12_7 & 0xfffffffffffff000;
            while (r12_4 < (rbx5->f8 + rbx5->f0 & 0xfffffffffffff000)) {
                while (r13_3->f8 && (r13_3->f10 == 1 || r13_3->f0 + r13_3->f8 < r12_4)) {
                    r13_3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r13_3) + 24);
                }
                if (r13_3->f0 > r12_4) 
                    goto addr_40110e_17;
                rax8 = r13_3->f0 + r13_3->f8;
                if (rax8 > r12_4) 
                    goto addr_401105_19;
                addr_40110e_17:
                rax9 = fun_401158(rcx2, 6);
                rdx10 = r12_4;
                rcx2 = rcx2;
                r12_4 = r12_4 + 0x1000;
                *rax9 = rdx10 | 3;
            }
            break;
            addr_401105_19:
            r12_7 = rax8 + 0xfff;
        }
        rbx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx5) + 24);
        continue;
        addr_4010a6_7:
        goto addr_4010ab_9;
    }
    goto 0xdf;
}

uint64_t g440000;

struct s1 {
    int32_t f0;
    int32_t f4;
    int64_t f8;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

unsigned char g440008;

void fun_404f07();

struct s5 {
    int64_t f0;
    int64_t f8;
};

void fun_40161f();

int64_t fun_40189d();

struct s6 {
    int64_t f0;
    int64_t f8;
};

struct s7 {
    int64_t f0;
    int64_t f8;
};

int64_t fun_40517e();

struct s8 {
    int64_t f0;
    int64_t f8;
};

void fun_40186f(int64_t rcx, uint64_t rdx);

void fun_4050cc();

struct s9 {
    int64_t f0;
    unsigned char f8;
};

int64_t fun_4051e0(int64_t rcx, uint32_t edx);

struct s10 {
    unsigned char f0;
    signed char[7] pad8;
    uint64_t f8;
};

struct s11 {
    uint64_t f0;
    int64_t f8;
};

int64_t fun_404e35(int64_t rcx);

struct s12 {
    int64_t f0;
    int64_t f8;
};

int64_t GetSystemInfo = 0x57bc;

int64_t g44200c;

uint64_t g440798;

int32_t g442004;

int64_t g442018;

int32_t g442020;

int64_t fun_402250();

uint32_t fun_4021be(int64_t rcx);

int64_t g442030;

signed char* g442038;

struct s14 {
    struct s14* f0;
    signed char[4] pad8;
    struct s14* f8;
    signed char[4] pad16;
    struct s14* f10;
    signed char[4] pad24;
    struct s14* f18;
};

struct s13 {
    struct s14* f0;
    signed char[4] pad8;
    struct s14* f8;
    signed char[4] pad16;
    struct s13* f10;
    uint32_t f18;
};

struct s13* fun_403fed(struct s14* rcx);

struct s15 {
    int64_t f0;
    int64_t f8;
};

void fun_4015cb();

struct s14* fun_403ae8(struct s14* rcx, uint64_t rdx);

struct s13* fun_4043d8(struct s14* rcx, uint64_t rdx, int64_t r8);

void fun_4012f0() {
    int32_t eax1;
    int32_t edx2;
    struct s1* rdi3;
    struct s2* rdi4;
    struct s3* rdi5;
    struct s4* rdi6;
    int64_t rax7;
    int64_t v8;
    int1_t below_or_equal9;
    signed char ch10;
    signed char cl11;
    int32_t r15_12;
    struct s5* rdi13;
    struct s6* rdi14;
    struct s7* rdi15;
    struct s8* rdi16;
    uint64_t rdx17;
    int64_t* r13_18;
    struct s9* rdi19;
    struct s10* rdi20;
    unsigned char v21;
    int64_t* r15_22;
    struct s11* rdi23;
    uint64_t rax24;
    struct s12* v25;
    uint64_t* rdi26;
    int32_t ecx27;
    uint64_t r8_28;
    uint64_t r8_29;
    uint64_t r8_30;
    int32_t edx31;
    int64_t rdx32;
    int1_t zf33;
    struct s15* rdi34;
    int64_t v35;

    __asm__("rdtsc ");
    *reinterpret_cast<int32_t*>(&g440000) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g440000) + 4) = edx2;
    rdi3 = reinterpret_cast<struct s1*>(0x440008);
    while (1) {
        addr_40131d_8:
        rdi3->f0 = __intrinsic();
        rdi4 = reinterpret_cast<struct s2*>(&rdi3->f4);
        rdi4->f0 = __intrinsic();
        rdi5 = reinterpret_cast<struct s3*>(&rdi4->f4);
        rdi5->f0 = __intrinsic();
        rdi6 = reinterpret_cast<struct s4*>(&rdi5->f4);
        rdi6->f0 = __intrinsic();
        rdi3 = reinterpret_cast<struct s1*>(&rdi6->f4);
        while (rax7 = v8, !!*reinterpret_cast<int32_t*>(&rax7)) {
            below_or_equal9 = *reinterpret_cast<unsigned char*>(&rax7) <= g440008;
            if (below_or_equal9) 
                goto addr_40131d_8;
            ++rdi3;
        }
        break;
    }
    ch10 = 17;
    do {
        __asm__("lodsb ");
        cl11 = 0;
        __asm__("lodsb ");
        do {
            rdi3->f0 = reinterpret_cast<int32_t>(fun_404f07);
            rdi3 = reinterpret_cast<struct s1*>(&rdi3->f8);
            cl11 = reinterpret_cast<signed char>(cl11 - 1);
        } while (cl11);
        ch10 = reinterpret_cast<signed char>(ch10 - 1);
    } while (ch10);
    rdi3->f0 = r15_12;
    rdi13 = reinterpret_cast<struct s5*>(&rdi3->f8);
    fun_40161f();
    fun_40189d();
    rdi13->f0 = -1;
    rdi14 = reinterpret_cast<struct s6*>(&rdi13->f8);
    rdi14->f0 = -1;
    rdi15 = reinterpret_cast<struct s7*>(&rdi14->f8);
    rdi15->f0 = reinterpret_cast<int64_t>(fun_40517e);
    rdi16 = reinterpret_cast<struct s8*>(&rdi15->f8);
    fun_40186f(32, 0x404f84);
    *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fun_4050cc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
    fun_40186f(32, fun_4050cc);
    rdi16->f0 = *r13_18;
    rdi19 = reinterpret_cast<struct s9*>(&rdi16->f8);
    rdi19->f0 = reinterpret_cast<int64_t>(fun_4051e0);
    rdi20 = reinterpret_cast<struct s10*>(&rdi19->f8);
    if (rdi20->f0 & 8) {
        v21 = reinterpret_cast<unsigned char>(8);
    } else {
        if (!(rdi20->f0 & 32)) {
            if (!(rdi20->f0 & 4)) {
                if (!*r15_22) {
                }
            }
        }
    }
    rdi20->f0 = v21;
    rdi23 = reinterpret_cast<struct s11*>(&rdi20->f8);
    rax24 = reinterpret_cast<uint64_t>(fun_404e35);
    rdi23->f0 = reinterpret_cast<uint64_t>(fun_404e35);
    v25 = reinterpret_cast<struct s12*>(&rdi23->f8);
    *reinterpret_cast<int32_t*>(&rdi26) = 0x440698;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi26) < 0x4407a0) {
        ecx27 = 0;
        *reinterpret_cast<int32_t*>(&rdx17) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_28 = rax24;
            *reinterpret_cast<uint32_t*>(&r8_29) = *reinterpret_cast<uint32_t*>(&r8_28) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = 0;
            r8_30 = r8_29 << *reinterpret_cast<unsigned char*>(&ecx27);
            ecx27 = ecx27 + 7;
            rdx17 = rdx17 | r8_30;
        } while (*reinterpret_cast<signed char*>(&rax24) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax24) & 64) {
            rdx17 = rdx17 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx27);
        }
        rax24 = rdx17;
        if (*rdi26) {
            rax24 = *rdi26;
        }
        *rdi26 = rax24;
        ++rdi26;
    }
    GetSystemInfo(0x443c40, rdx17);
    g44200c = 1;
    edx31 = *reinterpret_cast<int32_t*>(&g440798);
    g442004 = edx31;
    g442018 = 0x441000;
    g442020 = 0x1000;
    rdx32 = reinterpret_cast<int64_t>(fun_402250);
    zf33 = (*reinterpret_cast<unsigned char*>(&g440668) & 2) == 0;
    if (zf33) {
        rdx32 = reinterpret_cast<int64_t>(fun_4021be);
    }
    g442030 = rdx32;
    g442038 = reinterpret_cast<signed char*>(0x442000);
    v25->f0 = reinterpret_cast<int64_t>(fun_403fed);
    rdi34 = reinterpret_cast<struct s15*>(&v25->f8);
    fun_4015cb();
    rdi34->f0 = reinterpret_cast<int64_t>(fun_403ae8);
    rdi34->f8 = reinterpret_cast<int64_t>(fun_4043d8);
    goto v35;
}

int64_t GetStdHandle = 0x57ac;

int64_t g443aa0;

void* g443ab0;

int64_t g443aa8;

int32_t g443ac8;

int32_t g443ae0;

int32_t g443af8;

int64_t g443ab8;

int64_t g443ad0;

int64_t g443ae8;

void fun_40161f() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rax3;
    int64_t rax4;

    rbp1 = GetStdHandle;
    g443aa0 = 3;
    g443ab0 = reinterpret_cast<void*>(0x443ab8);
    g443aa8 = 16;
    g443ac8 = 1;
    g443ae0 = 1;
    g443af8 = 1;
    rax2 = reinterpret_cast<int64_t>(rbp1(0xf6));
    g443ab8 = rax2;
    rax3 = reinterpret_cast<int64_t>(rbp1(0xf5));
    g443ad0 = rax3;
    rax4 = reinterpret_cast<int64_t>(rbp1(0xf4));
    g443ae8 = rax4;
    return;
}

int64_t fun_40189d() {
    int64_t rcx1;
    signed char tmp8_2;
    int64_t rax3;
    signed char* rdi4;

    *reinterpret_cast<int32_t*>(&rcx1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    while (tmp8_2 = *reinterpret_cast<signed char*>(&rcx1), *reinterpret_cast<signed char*>(&rcx1) = *reinterpret_cast<signed char*>(&rax3), *reinterpret_cast<signed char*>(&rax3) = tmp8_2, !rcx1) {
        do {
            *rdi4 = *reinterpret_cast<signed char*>(&rax3);
            ++rdi4;
            *reinterpret_cast<int32_t*>(&rcx1) = *reinterpret_cast<int32_t*>(&rcx1) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
        } while (*reinterpret_cast<int32_t*>(&rcx1));
    }
    return rax3;
}

unsigned char g44003d;

void fun_40186f(int64_t rcx, uint64_t rdx) {
    unsigned char r8b3;
    int1_t zf4;
    uint64_t* rdi5;
    void* rsi6;
    int64_t rax7;
    int1_t zf8;

    r8b3 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf4)) << 1);
    do {
        __asm__("lodsb ");
        *rdi5 = rdx;
        ++rdi5;
        rsi6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi6) + 8);
        *reinterpret_cast<int32_t*>(&rcx) = *reinterpret_cast<int32_t*>(&rcx) - 1;
    } while (*reinterpret_cast<int32_t*>(&rcx));
    *reinterpret_cast<int32_t*>(&rax7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    zf8 = (g44003d & 2) == 0;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf8)) | r8b3);
    *reinterpret_cast<unsigned char*>(&rax7) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi6) + rax7);
    *rdi5 = rax7 + rdx;
    __asm__("lodsq ");
    return;
}

void fun_404491();

void fun_4015cb() {
    fun_404491();
    return;
}

int64_t fun_401f47();

int32_t fun_4014ce() {
    fun_401f47();
    return 0;
}

unsigned char fun_404c6c();

int32_t fun_401eb0();

uint32_t g443c70;

int32_t fun_401711();

uint32_t fun_401674() {
    uint32_t r13d1;
    uint32_t r13d2;
    unsigned char al3;
    int32_t eax4;
    uint1_t zf5;
    uint32_t ebx6;
    int32_t eax7;
    uint32_t v8;

    r13d1 = g440668;
    r13d2 = r13d1 & 4;
    if (r13d2) {
        r13d2 = 0;
        al3 = fun_404c6c();
        if (!al3) {
            addr_401700_3:
            return r13d2;
        } else {
            eax4 = fun_401eb0();
            zf5 = reinterpret_cast<uint1_t>(eax4 == 2);
        }
    } else {
        ebx6 = g443c70;
        eax7 = fun_401711();
        if (!(eax7 + 1)) {
            g443c70 = ebx6;
            goto addr_401700_3;
        } else {
            zf5 = reinterpret_cast<uint1_t>((v8 & 0xf000) == 0x2000);
        }
    }
    r13d2 = zf5;
    goto addr_401700_3;
}

struct s16 {
    uint32_t f0;
    signed char[4] pad8;
    struct s16* f8;
};

struct s16* g4424a0;

struct s17 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
    int64_t f20;
};

struct s16* fun_402296();

struct s14* fun_4018e7();

struct s14* fun_404540() {
    struct s16* rbx1;
    int64_t rax2;
    struct s17* rbx3;
    struct s14* rax4;
    int64_t rdi5;
    int64_t rsi6;
    int64_t rdx7;
    struct s16* rax8;

    rbx1 = g4424a0;
    if (!rbx1) {
        g4424a0 = reinterpret_cast<struct s16*>(0x4424a8);
        *reinterpret_cast<int32_t*>(&rbx1) = 0x4424a8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx1) + 4) = 0;
    }
    if (rbx1->f0 != 0xffffffff) {
        addr_4045a7_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(~rbx1->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        rbx1->f0 = rbx1->f0;
        rbx3 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rbx1) + rax2 * 24);
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(&rax4 + 1) = 0;
        rbx3->f10 = rdi5;
        rbx3->f18 = rsi6;
        rbx3->f20 = rdx7;
    } else {
        if (rax8 = fun_402296(), rax8 == 0) {
            rax4 = fun_4018e7();
        } else {
            rax8->f8 = rbx1;
            g4424a0 = rax8;
            rbx1 = rax8;
            goto addr_4045a7_4;
        }
    }
    return rax4;
}

int32_t fun_404db0();

void fun_40173e();

int32_t fun_401711() {
    int32_t eax1;

    eax1 = fun_404db0();
    if (eax1 != -1) {
        fun_40173e();
        eax1 = eax1;
    }
    return eax1;
}

int64_t GetFileType = 0x578e;

int32_t fun_401eb0() {
    int64_t rdi1;
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(GetFileType(rdi1));
    return eax2;
}

struct s18 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s19 {
    signed char[20] pad20;
    int64_t f14;
};

struct s20 {
    signed char[96] pad96;
    int32_t f60;
};

struct s21 {
    signed char[80] pad80;
    int64_t f50;
};

struct s22 {
    signed char[88] pad88;
    int64_t f58;
};

struct s23 {
    signed char[48] pad48;
    int64_t f30;
};

struct s24 {
    signed char[4] pad4;
    int32_t f4;
};

struct s25 {
    signed char[16] pad16;
    int32_t f10;
};

struct s26 {
    signed char[56] pad56;
    int64_t f38;
};

struct s27 {
    signed char[64] pad64;
    int64_t f40;
};

struct s28 {
    signed char[72] pad72;
    int64_t f48;
};

struct s29 {
    signed char[32] pad32;
    int64_t f20;
};

struct s30 {
    signed char[40] pad40;
    int64_t f28;
};

struct s31 {
    signed char[24] pad24;
    int32_t f18;
};

struct s32 {
    signed char[16] pad16;
    int64_t f10;
};

struct s33 {
    signed char[28] pad28;
    int64_t f1c;
};

struct s34 {
    signed char[40] pad40;
    int64_t f28;
};

struct s35 {
    signed char[128] pad128;
    int32_t f80;
};

struct s36 {
    signed char[112] pad112;
    int64_t f70;
};

struct s37 {
    signed char[120] pad120;
    int64_t f78;
};

struct s38 {
    signed char[48] pad48;
    int64_t f30;
};

struct s39 {
    signed char[56] pad56;
    int64_t f38;
};

struct s40 {
    signed char[64] pad64;
    int64_t f40;
};

struct s41 {
    signed char[72] pad72;
    int64_t f48;
};

struct s42 {
    signed char[80] pad80;
    int64_t f50;
};

struct s43 {
    signed char[88] pad88;
    int64_t f58;
};

struct s44 {
    signed char[24] pad24;
    uint32_t f18;
};

struct s45 {
    signed char[24] pad24;
    uint16_t f18;
};

struct s46 {
    signed char[48] pad48;
    int64_t f30;
};

struct s47 {
    signed char[56] pad56;
    int64_t f38;
};

struct s48 {
    signed char[64] pad64;
    int64_t f40;
};

struct s49 {
    signed char[6] pad6;
    uint16_t f6;
};

struct s50 {
    signed char[4] pad4;
    uint16_t f4;
};

struct s51 {
    signed char[112] pad112;
    int32_t f70;
};

struct s52 {
    signed char[16] pad16;
    int64_t f10;
};

struct s53 {
    signed char[96] pad96;
    int64_t f60;
};

struct s54 {
    signed char[40] pad40;
    int64_t f28;
};

struct s55 {
    signed char[40] pad40;
    int64_t f28;
};

struct s56 {
    signed char[24] pad24;
    int32_t f18;
};

struct s57 {
    signed char[104] pad104;
    int64_t f68;
};

struct s58 {
    signed char[32] pad32;
    int64_t f20;
};

struct s59 {
    signed char[48] pad48;
    int64_t f30;
};

struct s60 {
    signed char[56] pad56;
    int64_t f38;
};

struct s61 {
    signed char[64] pad64;
    int64_t f40;
};

struct s62 {
    signed char[72] pad72;
    int64_t f48;
};

struct s63 {
    signed char[16] pad16;
    int64_t f10;
};

struct s64 {
    signed char[24] pad24;
    uint32_t f18;
};

struct s65 {
    signed char[28] pad28;
    int64_t f1c;
};

struct s66 {
    signed char[48] pad48;
    int64_t f30;
};

struct s67 {
    signed char[56] pad56;
    int64_t f38;
};

struct s68 {
    signed char[64] pad64;
    int64_t f40;
};

struct s69 {
    signed char[72] pad72;
    int64_t f48;
};

struct s70 {
    signed char[80] pad80;
    int64_t f50;
};

struct s71 {
    signed char[88] pad88;
    int64_t f58;
};

struct s72 {
    signed char[96] pad96;
    int64_t f60;
};

struct s73 {
    signed char[104] pad104;
    int64_t f68;
};

struct s74 {
    signed char[112] pad112;
    int64_t f70;
};

void fun_40173e() {
    int64_t rdi1;
    uint32_t eax2;
    int64_t r12_3;
    struct s18* rdi4;
    int32_t r14d5;
    int32_t* rdi6;
    int64_t r13_7;
    struct s19* rdi8;
    int64_t r11_9;
    struct s20* rdi10;
    int64_t rbx11;
    struct s21* rdi12;
    int64_t r10_13;
    struct s22* rdi14;
    int64_t rsi15;
    struct s23* rdi16;
    int64_t* rdi17;
    struct s24* rdi18;
    int64_t r15_19;
    struct s25* rdi20;
    int64_t rcx21;
    struct s26* rdi22;
    int64_t rdx23;
    struct s27* rdi24;
    int64_t rax25;
    struct s28* rdi26;
    int64_t r9_27;
    struct s29* rdi28;
    int64_t r8_29;
    struct s30* rdi30;
    struct s31* rdi31;
    struct s32* rdi32;
    struct s33* rdi33;
    struct s34* rdi34;
    struct s35* rdi35;
    struct s36* rdi36;
    struct s37* rdi37;
    struct s38* rdi38;
    struct s39* rdi39;
    struct s40* rdi40;
    struct s41* rdi41;
    struct s42* rdi42;
    struct s43* rdi43;
    struct s44* rdi44;
    struct s45* rdi45;
    struct s46* rdi46;
    struct s47* rdi47;
    struct s48* rdi48;
    int64_t r14_49;
    struct s49* rdi50;
    uint32_t r13d51;
    struct s50* rdi52;
    int64_t r10_53;
    struct s51* rdi54;
    int64_t r15_55;
    int32_t* rdi56;
    int64_t r12_57;
    struct s52* rdi58;
    int64_t r11_59;
    struct s53* rdi60;
    struct s54* rdi61;
    struct s55* rdi62;
    struct s56* rdi63;
    int64_t rbx64;
    struct s57* rdi65;
    struct s58* rdi66;
    struct s59* rdi67;
    struct s60* rdi68;
    struct s61* rdi69;
    struct s62* rdi70;
    int64_t* rdi71;
    struct s63* rdi72;
    struct s64* rdi73;
    struct s65* rdi74;
    struct s66* rdi75;
    struct s67* rdi76;
    struct s68* rdi77;
    struct s69* rdi78;
    struct s70* rdi79;
    struct s71* rdi80;
    struct s72* rdi81;
    struct s73* rdi82;
    struct s74* rdi83;

    if (!rdi1) {
        return;
    }
    eax2 = g440668;
    if (!(*reinterpret_cast<unsigned char*>(&eax2) & 8)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax2) & 32)) {
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 16)) {
                addr_401863_6:
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
    goto addr_401863_6;
}

struct s75 {
    uint16_t f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_401b52(signed char* rcx);

void fun_401b7d(signed char* rcx);

int32_t fun_401bad(signed char* rcx, struct s75* rdx, uint64_t r8, void* r9) {
    struct s75* r11_5;
    uint64_t r10_6;
    int64_t r13_7;
    int64_t rsi8;
    uint64_t rbx9;
    signed char* v10;
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
    uint64_t r9_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r9_28;
    uint64_t r12_29;
    uint64_t r11_30;
    uint64_t rax31;
    uint64_t r10_32;

    r11_5 = rdx;
    r10_6 = r8;
    r13_7 = rsi8;
    *reinterpret_cast<int32_t*>(&rbx9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx9) + 4) = 0;
    v10 = rcx;
    v11 = rsi12;
    v13 = reinterpret_cast<uint64_t>(rsi14 + reinterpret_cast<int64_t>(rdx));
    fun_401b52(rcx);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_401c5e_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_401c5e_5;
            fun_401b52(rcx);
        }
        break;
        addr_401c5e_5:
        ++rbx9;
        if (rbx9 < r10_6) {
            rax18 = v11;
            if (rax18 >= v13) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<uint64_t*>(v10 + rbx9 * 8 - 8) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> rsi20)) 
                    goto addr_401d82_15; else 
                    goto addr_401c9d_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_401b52(rcx);
                }
                *reinterpret_cast<int32_t*>(&r9_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = 0;
                while (v25 == 34) {
                    fun_401b52(rcx);
                    ++r9_24;
                }
                rax26 = r12_22;
                if (!r9_24) 
                    goto addr_401ce6_25;
            } else {
                addr_401d82_15:
                fun_401b7d(rcx);
                fun_401b52(rcx);
                continue;
            }
            while (rax26 > 1) {
                fun_401b7d(rcx);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_401d3e_29;
            fun_401b7d(rcx);
            --r9_24;
            if (!r9_24) 
                continue;
            addr_401d3e_29:
            *reinterpret_cast<int32_t*>(&r14_27) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
            r9_28 = r9_24 - reinterpret_cast<uint1_t>(r9_24 < static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d19) < 1)));
            r12_29 = r9_28 + 1;
            while (r12_29 >= r14_27) {
                r14_27 = r14_27 + 3;
                fun_401b7d(rcx);
            }
            *reinterpret_cast<int32_t*>(&rcx) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r9_28 % 3 == 0);
            continue;
            addr_401ce6_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_401b7d(rcx);
            }
        }
        addr_401d99_35:
        fun_401b7d(rcx);
        continue;
        addr_401c9d_16:
        goto addr_401d99_35;
    }
    fun_401b7d(rcx);
    if (r11_5) {
        r11_30 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_5) - 1);
        rax31 = v11 - r13_7;
        if (rax31 > r11_30) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(r13_7 + rax31) = 0;
    }
    if (r10_6) {
        r10_32 = r10_6 - 1;
        if (r10_32 > rbx9) {
            r10_32 = rbx9;
        }
        v10[r10_32 * 8] = reinterpret_cast<signed char>(0);
    }
    return *reinterpret_cast<int32_t*>(&rbx9);
}

uint64_t fun_404e5c(signed char* rcx, struct s75* rdx) {
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
        ecx6 = *reinterpret_cast<int32_t*>(0x405347 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
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

uint32_t fun_404e4d(signed char* rcx, struct s75* rdx, uint64_t r8, ...);

void fun_401b52(signed char* rcx) {
    uint32_t eax2;
    uint16_t** rdi3;
    struct s75* rdi4;
    uint64_t r8_5;
    uint32_t eax6;
    int64_t rax7;

    eax2 = **rdi3;
    if (*reinterpret_cast<uint16_t*>(&eax2) > 0xd7ff) {
        eax6 = fun_404e4d(rcx, rdi4, r8_5);
    } else {
        rdi4->f18 = eax2;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rdi4->f0 = reinterpret_cast<uint16_t>(rdi4->f0 + (rax7 + rax7));
    return;
}

void fun_401b7d(signed char* rcx) {
    struct s75* rdx2;
    struct s75* rdi3;
    signed char* r8_4;
    uint64_t rax5;
    int32_t esi6;
    uint32_t esi7;
    signed char* rcx8;

    rdx2 = rdi3;
    r8_4 = rdx2->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi6));
    if (esi7 > 0x7f) {
        rax5 = fun_404e5c(rcx, rdx2);
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

struct s76 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s77 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_4020ab() {
    int64_t rax1;
    struct s76* rdi2;
    struct s77* rdi3;

    if (!1) {
    }
    *reinterpret_cast<uint32_t*>(&rax1) = rdi2->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax1) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax1) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax1) = 0xffffffff;
    }
    rdi3->f8 = *reinterpret_cast<uint32_t*>(&rax1);
    if (!1) {
        g443c70 = 0xffffffff;
    }
    return 0xffffffff;
}

struct s78 {
    signed char[8] pad8;
    int32_t f8;
};

struct s79 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_4020de() {
    int32_t eax1;
    struct s78* rdi2;
    struct s79* rdi3;

    eax1 = 0;
    if (rdi2->f8 >= 0) {
        eax1 = rdi3->f8;
    }
    return eax1;
}

struct s80 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_4020d4() {
    int32_t eax1;
    struct s80* rdi2;

    eax1 = 0;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(rdi2->f8 == -1);
    return eax1;
}

struct s81 {
    signed char[12] pad12;
    int32_t fc;
};

struct s82 {
    signed char[4] pad4;
    int32_t f4;
};

struct s83 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_4020b3();

struct s84 {
    signed char[16] pad16;
    int32_t f10;
    int32_t f14;
};

uint64_t g442040;

signed char** g442050;

uint32_t fun_4020ec(int64_t rcx) {
    int64_t rdi2;
    uint32_t r12d3;
    struct s81* rdi4;
    uint64_t rax5;
    struct s82* rdi6;
    int1_t zf7;
    struct s83* rdi8;
    uint32_t eax9;
    struct s84* rdi10;
    uint32_t eax11;
    uint64_t rax12;
    uint64_t r13_13;
    signed char** rax14;
    uint32_t eax15;

    if (rdi2) {
        r12d3 = 0;
        if (rdi4->fc == -1 || (*reinterpret_cast<int32_t*>(&rax5) = rdi6->f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0, zf7 = (g440798 & rax5) == 0, zf7)) {
            addr_40218c_3:
            return r12d3;
        } else {
            r12d3 = rdi8->f8;
            if (r12d3) {
                if (r12d3 == 0xffffffff) {
                    r12d3 = 0;
                    goto addr_40218c_3;
                } else {
                    eax9 = fun_4020b3();
                    r12d3 = eax9;
                    goto addr_40218c_3;
                }
            } else {
                while (rdi10->f10 != rdi10->f14) {
                    eax11 = fun_4021be(rcx);
                    if (eax11 == 0xffffffff) 
                        goto addr_40212b_10;
                    rdi10 = rdi10;
                    r12d3 = r12d3 + eax11;
                }
                goto addr_40218c_3;
            }
        }
    } else {
        rax12 = g442040;
        r12d3 = 0;
        r13_13 = rax12 - 1;
        while (r13_13 != 0xffffffffffffffff) {
            rax14 = g442050;
            if (rax14[r13_13]) {
                eax15 = fun_4020ec(rcx);
                if (eax15 == 0xffffffff) 
                    goto addr_40212b_10;
                r12d3 = r12d3 + eax15;
            }
            --r13_13;
        }
        goto addr_40218c_3;
    }
    addr_40212b_10:
    r12d3 = 0xffffffff;
    goto addr_40218c_3;
}

struct s85 {
    signed char[20] pad20;
    uint32_t f14;
};

struct s86 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s87 {
    signed char[32] pad32;
    uint32_t f20;
};

struct s14* fun_404c87(int64_t rcx, int64_t rdx);

struct s88 {
    signed char[16] pad16;
    uint32_t f10;
    signed char[12] pad32;
    int32_t f20;
};

uint32_t fun_40228b();

uint32_t fun_4021be(int64_t rcx) {
    uint32_t ebx2;
    struct s85* rdi3;
    struct s86* rdi4;
    struct s87* rdi5;
    uint32_t ebx6;
    int64_t rdx7;
    struct s14* rax8;
    int64_t rcx9;
    struct s88* rdi10;
    uint32_t eax11;

    ebx2 = rdi3->f14;
    if (rdi4->f10 >= ebx2) {
        ebx2 = rdi5->f20;
    }
    ebx6 = ebx2 - rdi4->f10;
    *reinterpret_cast<uint32_t*>(&rdx7) = ebx6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rax8 = fun_404c87(rcx, rdx7);
    if (!reinterpret_cast<int1_t>(rax8 == 0xffffffffffffffff)) {
        *reinterpret_cast<int32_t*>(&rcx9) = rdi10->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        rdi10->f10 = *reinterpret_cast<int32_t*>(&rax8) + rdi10->f10 & static_cast<uint32_t>(rcx9 - 1);
        eax11 = ebx6;
    } else {
        eax11 = fun_40228b();
    }
    return eax11;
}

struct s89 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s90 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_4020b3() {
    int32_t esi1;
    int64_t rax2;
    struct s89* rdi3;
    struct s90* rdi4;

    if (!esi1) {
    }
    *reinterpret_cast<uint32_t*>(&rax2) = rdi3->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax2) = 0xffffffff;
    }
    rdi4->f8 = *reinterpret_cast<uint32_t*>(&rax2);
    if (!1) {
        g443c70 = 0xffffffff;
    }
    return 0xffffffff;
}

struct s14* fun_401dba(int64_t rcx, int64_t rdx);

struct s14* fun_4018c7();

struct s14* fun_0();

struct s14* fun_404de0();

int32_t fun_4018d7();

struct s14* fun_404c87(int64_t rcx, int64_t rdx) {
    int64_t r12_3;
    int32_t edi4;
    unsigned char al5;
    int1_t zf6;
    unsigned char al7;
    unsigned char al8;
    unsigned char al9;
    struct s14* rax10;
    int32_t eax11;

    r12_3 = edi4;
    if (*reinterpret_cast<int32_t*>(&r12_3) != -1) {
        al5 = fun_404c6c();
        if (!al5) {
            zf6 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
            if (!zf6) {
                al7 = fun_404c6c();
                if (!al7) {
                    al8 = fun_404c6c();
                    if (al8 || (al9 = fun_404c6c(), !!al9)) {
                        rax10 = fun_401dba(-1, 1);
                    } else {
                        rax10 = fun_4018c7();
                    }
                } else {
                    rax10 = fun_0();
                }
            } else {
                rax10 = fun_404de0();
            }
        } else {
            rax10 = fun_0();
        }
    } else {
        eax11 = fun_4018d7();
        rax10 = reinterpret_cast<struct s14*>(static_cast<int64_t>(eax11));
    }
    return rax10;
}

struct s91 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s92 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_40228b() {
    uint32_t esi1;
    int64_t rax2;
    struct s91* rdi3;
    struct s92* rdi4;

    esi1 = g443c70;
    if (!esi1) {
        esi1 = 0xffffffff;
    }
    *reinterpret_cast<uint32_t*>(&rax2) = rdi3->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax2) = esi1;
    }
    rdi4->f8 = *reinterpret_cast<uint32_t*>(&rax2);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi1) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi1 == 0))) {
        g443c70 = esi1;
    }
    return 0xffffffff;
}

struct s93 {
    struct s14* f0;
    uint32_t f4;
    int64_t f8;
    signed char[16] pad32;
    struct s14* f20;
    signed char[20] pad56;
    int64_t f38;
    signed char[792] pad856;
    uint64_t f358;
    signed char[40] pad904;
    int64_t f388;
};

struct s95 {
    void* f0;
    void* f8;
    int64_t f10;
    uint32_t f18;
};

struct s94 {
    signed char[904] pad904;
    struct s95* f388;
};

uint32_t fun_40452c(struct s14* rcx, struct s14* rdx);

void* fun_4022ef(struct s14* rcx, struct s14* rdx) {
    void* r14_3;
    struct s93* r12_4;
    struct s93* rdi5;
    struct s94* rdi6;
    uint32_t r13d7;
    uint32_t r13d8;
    void* rdx9;
    void* rdx10;
    int64_t rbx11;
    void* rbx12;
    struct s14* rbx13;
    struct s14* rdx14;
    int64_t rdx15;
    void* r15_16;
    struct s14* rcx17;
    struct s14* rdx18;
    int64_t r8_19;
    struct s14* rax20;
    struct s14* rsi21;
    uint32_t eax22;
    uint64_t rdx23;
    struct s14* eax24;
    uint32_t edx25;
    uint32_t ecx26;
    int64_t rax27;
    uint64_t rcx28;
    int64_t rcx29;
    uint32_t edx30;
    struct s14* ecx31;
    uint32_t esi32;
    int64_t rsi33;
    struct s14* rdx34;
    struct s14* rdx35;
    struct s14* r9_36;
    struct s14* rdx37;
    uint32_t ecx38;
    uint64_t rcx39;
    uint64_t rax40;
    uint64_t rax41;
    struct s14* rax42;

    *reinterpret_cast<int32_t*>(&r14_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    r12_4 = rdi5;
    if (!rdi6->f388 || ((r13d7 = rdi6->f388->f18, (*reinterpret_cast<unsigned char*>(&r13d7) & 1) == 0) || (r13d8 = r13d7 & 8, !!r13d8))) {
        addr_402591_2:
        r12_4->f38 = 0x80;
        return r14_3;
    } else {
        rdx9 = rdi6->f388->f0;
        *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rdx9) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx10)) {
            rbx11 = -(reinterpret_cast<int64_t>(rdi6->f388->f0) + 16);
            *reinterpret_cast<uint32_t*>(&rbx12) = *reinterpret_cast<uint32_t*>(&rbx11) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx12) + 4) = 0;
            rdx10 = rbx12;
        }
        rbx13 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdi6->f388->f0) + reinterpret_cast<uint64_t>(rdx10));
        *reinterpret_cast<int32_t*>(&r14_3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
        rdx14 = rbx13->f8;
        *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint32_t*>(&rdx14) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
        if (rdx15 - 1) 
            goto addr_402591_2;
    }
    r14_3 = rdi6->f388->f8;
    r15_16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx13->f8) & 0xfffffffffffffff8);
    rcx17 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx13) + reinterpret_cast<uint64_t>(r15_16));
    rdx18 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdi6->f388->f0) + reinterpret_cast<uint64_t>(r14_3) + 0xffffffffffffffb0);
    if (reinterpret_cast<uint32_t>(rcx17) < reinterpret_cast<uint32_t>(rdx18)) {
        addr_40258e_7:
        *reinterpret_cast<int32_t*>(&r14_3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
        goto addr_402591_2;
    } else {
        r8_19 = rdi6->f388->f10;
        if (r12_4->f20 == rbx13) {
            r12_4->f20 = reinterpret_cast<struct s14*>(0);
            r12_4->f8 = 0;
            goto addr_40246c_10;
        }
        rax20 = rbx13->f18;
        rsi21 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 48);
        if (rax20 != rbx13) 
            goto addr_4023a9_12;
    }
    rax20 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 40);
    rcx17 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx13) + 40);
    if (rax20) {
        addr_4023d1_14:
        rdx18 = rax20;
    } else {
        rax20 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 32);
        if (!rax20) {
            addr_4023fb_16:
            if (!rsi21) {
                addr_40246c_10:
                eax22 = fun_40452c(rcx17, rdx18);
                if (eax22) {
                    rdx23 = reinterpret_cast<uint64_t>(r15_16) >> 8;
                    eax24 = *reinterpret_cast<struct s14**>(&rdx23);
                    if (*reinterpret_cast<struct s14**>(&rdx23) && (eax24 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx23)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx25 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx23)) ^ 31;
                        ecx26 = 38 - edx25;
                        *reinterpret_cast<void**>(&rax27) = reinterpret_cast<void*>(31 - edx25);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
                        rcx28 = reinterpret_cast<uint64_t>(r15_16) >> *reinterpret_cast<signed char*>(&ecx26);
                        *reinterpret_cast<uint32_t*>(&rcx29) = *reinterpret_cast<uint32_t*>(&rcx28) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
                        eax24 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx29 + rax27 * 2));
                    }
                    edx30 = r12_4->f4;
                    ecx31 = eax24;
                    esi32 = 1 << *reinterpret_cast<unsigned char*>(&ecx31);
                    *reinterpret_cast<struct s14**>(&(rbx13 + 2)->f0) = eax24;
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 40) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 32) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(&rsi33) = eax24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
                    if (edx30 & esi32) 
                        goto addr_402513_20; else 
                        goto addr_4024f6_21;
                } else {
                    r12_4->f358 = r12_4->f358 - reinterpret_cast<uint64_t>(r14_3);
                    r12_4->f388 = r8_19;
                    goto addr_402591_2;
                }
            } else {
                rdx34 = *reinterpret_cast<struct s14**>(&(rbx13 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx34 + 1) = 0;
                rcx17 = rdx34;
                rdx18 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(r12_4) + reinterpret_cast<uint32_t>(rdx34) * 8);
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 0x258) != rbx13) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi21) + 32) != rbx13) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi21) + 40) = rax20;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi21) + 32) = rax20;
                    }
                    if (rax20) 
                        goto addr_40241f_28;
                    goto addr_40246c_10;
                } else {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 0x258) = rax20;
                    if (!rax20) {
                        __asm__("rol eax, cl");
                        r12_4->f4 = r12_4->f4 & 0xfffffffe;
                        goto addr_40246c_10;
                    } else {
                        addr_40241f_28:
                        rdx35 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 48) = rsi21;
                        if (rdx35) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 32) = rdx35;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx35) + 48) = rax20;
                            goto addr_40245b_33;
                        }
                    }
                }
            }
        } else {
            rcx17 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx13) + 32);
            goto addr_4023d1_14;
        }
    }
    addr_4023d4_35:
    r9_36 = rcx17;
    rax20 = rdx18;
    rcx17 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx18) + 40);
    rdx18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 40);
    if (rdx18) 
        goto addr_4023d4_35;
    rdx18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 32);
    rcx17 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax20) + 32);
    if (rdx18) 
        goto addr_4023d4_35;
    *reinterpret_cast<struct s14**>(&r9_36->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_4023fb_16;
    addr_402513_20:
    rdx37 = *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(r12_4) + rsi33 * 8 + 0x258);
    if (eax24 != 31) {
        r13d8 = 57 - (reinterpret_cast<uint32_t>(eax24) >> 1);
    }
    ecx38 = r13d8;
    rcx39 = reinterpret_cast<uint64_t>(r15_16) << *reinterpret_cast<unsigned char*>(&ecx38);
    while ((reinterpret_cast<uint32_t>(rdx37->f8) & 0xfffffffffffffff8) != r15_16) {
        rax40 = rcx39;
        rcx39 = rcx39 + rcx39;
        rax41 = (rax40 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx37) + rax41 * 8)) 
            goto addr_402560_42;
        rdx37 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx37) + rax41 * 8);
    }
    rax42 = rdx37->f10;
    rax42->f18 = rbx13;
    rdx37->f10 = rbx13;
    rbx13->f10 = rax42;
    rbx13->f18 = rdx37;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 48) = reinterpret_cast<struct s14*>(0);
    goto addr_40258e_7;
    addr_402560_42:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx37) + rax41 * 8) = rbx13;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 48) = rdx37;
    addr_402568_45:
    rbx13->f18 = rbx13;
    rbx13->f10 = rbx13;
    goto addr_40258e_7;
    addr_4024f6_21:
    r12_4->f4 = edx30 | esi32;
    *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(r12_4) + rsi33 * 8 + 0x258) = rbx13;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 48) = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(r12_4) + rsi33 * 8 + 0x258);
    goto addr_402568_45;
    addr_40245b_33:
    rdx18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx13) + 40);
    if (rdx18) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax20) + 40) = rdx18;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx18) + 48) = rax20;
        goto addr_40246c_10;
    }
    addr_4023a9_12:
    rdx18 = rbx13->f10;
    rdx18->f18 = rax20;
    rax20->f10 = rdx18;
    goto addr_4023fb_16;
}

struct s14* fun_4018f7();

struct s14* fun_404abb() {
    struct s14* rax1;

    rax1 = fun_4018f7();
    return rax1;
}

uint32_t fun_404ac1(struct s14* rcx);

uint32_t fun_40452c(struct s14* rcx, struct s14* rdx) {
    uint32_t eax3;

    eax3 = fun_404ac1(rcx);
    return eax3;
}

struct s96 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s97 {
    signed char[40] pad40;
    struct s96* f28;
};

struct s98 {
    signed char[16] pad16;
    uint64_t f10;
};

int64_t g442480;

struct s99 {
    signed char[48] pad48;
    int64_t f30;
};

void fun_4022a8() {
    int64_t rax1;
    int64_t rsi2;
    int64_t rax3;
    int64_t rax4;
    int64_t rsi5;
    struct s96* rcx6;
    int64_t rsi7;
    uint64_t r8_8;
    int64_t rdx9;
    struct s97* rdi10;
    struct s98* rdi11;
    int64_t rax12;
    int64_t rsi13;
    int64_t rdx14;
    struct s99* rdi15;

    rax1 = rsi2;
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax1) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3)) {
        rax4 = -(rsi5 + 16);
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax4) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    rcx6 = reinterpret_cast<struct s96*>(rsi7 + rax3);
    r8_8 = reinterpret_cast<uint64_t>(rdx9 - rax3);
    rdi10->f28 = rcx6;
    rdi11->f10 = r8_8;
    rcx6->f8 = r8_8 | 1;
    rax12 = g442480;
    *reinterpret_cast<int64_t*>(rsi13 + rdx14 + 8) = 80;
    rdi15->f30 = rax12;
    return;
}

struct s14* fun_40481d();

struct s14* fun_404518() {
    struct s14* rax1;

    rax1 = fun_40481d();
    return rax1;
}

uint32_t g4420a4;

uint32_t g4420a0;

struct s14* g4420a8;

struct s14* g4420b0;

void* g442470;

int32_t g442410;

struct s14* g442478;

uint64_t g442408;

uint64_t g4423f8;

uint64_t g442400;

struct s14* g4420c8;

struct s14* g4420b8;

struct s14* g4420c0;

struct s100 {
    struct s14* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s14* g442418;

struct s14* g442420;

uint32_t g442430;

struct s101 {
    struct s14* f0;
    signed char[4] pad8;
    void* f8;
    struct s101* f10;
};

struct s13* g442428;

uint64_t g442460;

int64_t g4420d8;

uint64_t g4420e0;

struct s102 {
    signed char[16] pad16;
    struct s102* f10;
    struct s102* f18;
};

struct s103 {
    struct s103* f0;
    uint64_t f8;
    struct s103* f10;
    struct s103* f18;
    int64_t f20;
    int64_t f28;
    struct s103* f30;
    uint32_t f38;
};

struct s104 {
    struct s14* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s13* fun_402b64(struct s14* rcx, void* rdx) {
    uint64_t rdi3;
    uint64_t rdi4;
    struct s14* rbx5;
    uint32_t edi6;
    int64_t rdi7;
    uint64_t rax8;
    void* r9_9;
    uint32_t esi10;
    uint32_t eax11;
    uint32_t ecx12;
    int64_t rsi13;
    uint64_t rdx14;
    int64_t rdx15;
    int64_t rax16;
    struct s14* rdx17;
    struct s14* rax18;
    uint64_t rdi19;
    int64_t rdi20;
    uint32_t esi21;
    uint64_t rcx22;
    uint32_t eax23;
    uint32_t ecx24;
    uint32_t eax25;
    int64_t rax26;
    void* rcx27;
    struct s14* rcx28;
    struct s14* rdx29;
    struct s14* rdx30;
    struct s14* rax31;
    void* rcx32;
    uint64_t rdx33;
    int1_t zf34;
    int1_t cf35;
    uint64_t rsi36;
    struct s14* r12_37;
    uint64_t rdi38;
    uint64_t rax39;
    struct s14* r12_40;
    uint64_t rdx41;
    uint64_t rcx42;
    uint64_t rax43;
    struct s13* rax44;
    struct s14* rax45;
    struct s14* r9_46;
    uint64_t rax47;
    uint64_t rax48;
    int1_t below_or_equal49;
    struct s14* r10_50;
    struct s14* rdx51;
    uint64_t tmp64_52;
    int1_t below_or_equal53;
    struct s14* rdx54;
    struct s14* rcx55;
    struct s100* rsi56;
    struct s14* rdx57;
    struct s14* rdx58;
    struct s14* rsi59;
    void* r10_60;
    struct s14* rcx61;
    struct s14* r8_62;
    struct s14* rax63;
    struct s14* rdx64;
    uint32_t ecx65;
    int1_t cf66;
    struct s101* rcx67;
    uint32_t esi68;
    uint32_t r11d69;
    struct s14* r13_70;
    void* rax71;
    void* rdx72;
    void* rdx73;
    int64_t rax74;
    void* rax75;
    struct s14* r11_76;
    struct s13* rax77;
    struct s13* rdi78;
    struct s14** rsi79;
    int32_t ecx80;
    struct s14* rax81;
    struct s14* rdx82;
    struct s14* rsi83;
    uint64_t rcx84;
    uint64_t rdx85;
    struct s14* eax86;
    uint32_t edx87;
    uint32_t ecx88;
    int64_t rax89;
    uint64_t rcx90;
    int64_t rcx91;
    uint32_t edx92;
    struct s14* ecx93;
    uint32_t edi94;
    int64_t rdi95;
    uint32_t edx96;
    int64_t rax97;
    uint32_t esi98;
    struct s14* rax99;
    struct s14* rdx100;
    struct s14* rcx101;
    uint32_t ecx102;
    struct s14* rdx103;
    uint64_t rcx104;
    uint64_t rax105;
    uint64_t rax106;
    struct s14* rax107;
    struct s14* rcx108;
    void* rcx109;
    int64_t rcx110;
    struct s14* rdx111;
    struct s14* rax112;
    void* r8_113;
    int1_t zf114;
    struct s14* rcx115;
    int64_t rcx116;
    uint64_t rcx117;
    uint64_t rsi118;
    struct s14* edx119;
    uint32_t esi120;
    uint32_t ecx121;
    int64_t rdx122;
    uint64_t rcx123;
    int64_t rcx124;
    uint32_t esi125;
    struct s14* ecx126;
    uint32_t edi127;
    int64_t rdi128;
    uint32_t esi129;
    int64_t rdx130;
    uint32_t edi131;
    struct s14* rdx132;
    struct s14* rcx133;
    struct s14* rsi134;
    void* rbx135;
    struct s14* rdi136;
    struct s14* rdi137;
    struct s14* tmp64_138;
    struct s14* rsi139;
    uint32_t ecx140;
    uint64_t rcx141;
    uint64_t rdx142;
    uint64_t rdx143;
    struct s14* rdx144;
    struct s14* r10_145;
    struct s14* rcx146;
    int64_t r10_147;
    struct s14* rcx148;
    struct s14* r12_149;
    struct s14* rcx150;
    struct s14* rcx151;
    struct s14* tmp64_152;
    struct s14* rax153;
    uint64_t rax154;
    struct s102* rax155;
    struct s14* rcx156;
    struct s14* r11_157;
    struct s103* r8_158;
    uint64_t rcx159;
    uint64_t rsi160;
    uint32_t edx161;
    uint32_t esi162;
    uint32_t ecx163;
    int64_t rdx164;
    uint64_t rcx165;
    int64_t rcx166;
    uint32_t esi167;
    uint32_t ecx168;
    uint32_t edi169;
    int64_t rdi170;
    uint32_t esi171;
    int64_t rdx172;
    uint32_t edi173;
    struct s103* rdx174;
    struct s103* rcx175;
    int64_t r8_176;
    struct s14* rcx177;
    uint32_t ecx178;
    struct s103* rsi179;
    uint64_t rcx180;
    uint64_t rdx181;
    uint64_t rdx182;
    struct s103* rdx183;
    struct s14* rcx184;
    uint32_t ecx185;
    struct s14* r11_186;
    struct s14* r10_187;
    uint64_t rcx188;
    void* rdx189;
    struct s14* r9_190;
    uint32_t edi191;
    int64_t rax192;
    struct s14* rcx193;
    struct s14* r8_194;
    struct s14* rdx195;
    struct s14* rcx196;
    struct s14* rdx197;
    struct s14* r10_198;
    void* r12_199;
    int64_t rdi200;
    uint32_t r8d201;
    int64_t rcx202;
    int64_t rax203;
    void* rdi204;
    struct s14* r10_205;
    void* r8_206;
    struct s14* r11_207;
    struct s104* rdx208;
    struct s14* rsi209;
    struct s14* rbx210;
    uint32_t r10d211;
    uint64_t rcx212;
    struct s14* rdx213;
    int64_t r8_214;
    uint32_t r11d215;
    struct s14* r8_216;
    struct s14* rcx217;
    struct s14* rbx218;
    struct s14* r11_219;
    struct s14* rcx220;
    struct s14* r10_221;
    struct s14* rdx222;
    uint64_t rcx223;
    int64_t rdi224;
    uint32_t r9d225;
    struct s14* rdi226;
    struct s14* rcx227;
    int64_t r11_228;
    struct s14* rcx229;
    struct s14* r13_230;
    struct s14* rcx231;
    struct s14* rcx232;
    int64_t rcx233;
    int64_t rax234;
    void* r9_235;
    struct s14* rdi236;
    void* rdx237;
    struct s14* r8_238;
    struct s14* rbx239;

    if (rdi3 > 0xe0) {
        if (rdi4 > 0xffffffffffffff7f) {
            rbx5 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
            goto addr_403291_4;
        }
        edi6 = g4420a4;
        rbx5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdi7 + 31) & 0xfffffffffffffff0);
        if (!edi6) 
            goto addr_403291_4;
        rax8 = reinterpret_cast<uint32_t>(rbx5) >> 8;
        r9_9 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(rbx5));
        esi10 = *reinterpret_cast<uint32_t*>(&rax8);
        if (*reinterpret_cast<uint32_t*>(&rax8) && (esi10 = 31, *reinterpret_cast<uint32_t*>(&rax8) <= 0xffff)) {
            __asm__("bsr eax, eax");
            eax11 = *reinterpret_cast<uint32_t*>(&rax8) ^ 31;
            ecx12 = 38 - eax11;
            *reinterpret_cast<uint32_t*>(&rsi13) = 31 - eax11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
            rdx14 = reinterpret_cast<uint32_t>(rbx5) >> *reinterpret_cast<signed char*>(&ecx12);
            *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint32_t*>(&rdx14) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
            esi10 = static_cast<uint32_t>(rdx15 + rsi13 * 2);
        }
        *reinterpret_cast<uint32_t*>(&rax16) = esi10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx17) = 0;
        *reinterpret_cast<int32_t*>(&rdx17 + 1) = 0;
        rax18 = *reinterpret_cast<struct s14**>(rax16 * 8 + 0x4422f8);
        if (rax18) 
            goto addr_402f46_9;
    } else {
        *reinterpret_cast<int32_t*>(&rbx5) = 32;
        *reinterpret_cast<int32_t*>(&rbx5 + 1) = 0;
        if (rdi19 > 14) {
            rbx5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdi20 + 31) & 0xfffffffffffffff0);
        }
        esi21 = g4420a0;
        rcx22 = reinterpret_cast<uint32_t>(rbx5) >> 3;
        eax23 = esi21 >> *reinterpret_cast<unsigned char*>(&rcx22);
        if (!(*reinterpret_cast<unsigned char*>(&eax23) & 3)) 
            goto addr_402bf4_13; else 
            goto addr_402ba3_14;
    }
    addr_402fba_15:
    if (!(reinterpret_cast<uint32_t>(rdx17) | reinterpret_cast<uint32_t>(rax18))) {
        ecx24 = esi10;
        eax25 = 0xfffffffe << *reinterpret_cast<unsigned char*>(&ecx24) & edi6;
        if (!eax25) 
            goto addr_403291_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax26) = -eax25 & eax25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
        rdx17 = *reinterpret_cast<struct s14**>(rax26 * 8 + 0x4422f8);
        *reinterpret_cast<int32_t*>(&rax18) = 0;
        *reinterpret_cast<int32_t*>(&rax18 + 1) = 0;
    }
    while (rdx17) {
        rcx27 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rdx17->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rcx27) < reinterpret_cast<uint64_t>(r9_9)) {
            r9_9 = rcx27;
            rax18 = rdx17;
        }
        rcx28 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx17) + 32);
        if (!rcx28) {
            rcx28 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx17) + 40);
        }
        rdx17 = rcx28;
    }
    rdx29 = g4420a8;
    if (!rax18 || reinterpret_cast<uint64_t>(r9_9) >= reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx29) - reinterpret_cast<uint32_t>(rbx5))) {
        addr_403291_4:
        rdx30 = g4420a8;
        if (reinterpret_cast<uint32_t>(rdx30) < reinterpret_cast<uint32_t>(rbx5)) {
            rax31 = g4420b0;
            if (reinterpret_cast<uint32_t>(rax31) <= reinterpret_cast<uint32_t>(rbx5)) {
                rcx32 = g442470;
                rdx33 = -reinterpret_cast<uint64_t>(rcx32);
                zf34 = (*reinterpret_cast<unsigned char*>(&g442410) & 1) == 0;
                if (zf34 || ((cf35 = reinterpret_cast<uint32_t>(rbx5) < reinterpret_cast<uint32_t>(g442478), cf35) || (!rax31 || ((rsi36 = g442408, r12_37 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx32) + 62 & rdx33), !!rsi36) && ((rdi38 = g4423f8, rax39 = rdi38 + reinterpret_cast<uint32_t>(r12_37), rdi38 >= rax39) || rsi36 < rax39) || reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_37))))) {
                    r12_40 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx32) + 95 & rdx33);
                    if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_40) || (rdx41 = g442408, !!rdx41) && ((rcx42 = g4423f8, rax43 = reinterpret_cast<uint32_t>(r12_40) + rcx42, rcx42 >= rax43) || rdx41 < rax43)) {
                        addr_403ade_28:
                        *reinterpret_cast<int32_t*>(&rax44) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax44) + 4) = 0;
                    } else {
                        rax45 = fun_404518();
                        r9_46 = rax45;
                        rax47 = g4423f8;
                        rax48 = rax47 + reinterpret_cast<uint32_t>(r12_40);
                        below_or_equal49 = rax48 <= g442400;
                        g4423f8 = rax48;
                        if (!below_or_equal49) {
                            g442400 = rax48;
                        }
                        r10_50 = g4420c8;
                        if (r10_50) 
                            goto addr_4034bf_32; else 
                            goto addr_403451_33;
                    }
                } else {
                    rax18 = fun_404518();
                    *reinterpret_cast<struct s14**>(&rax18->f0) = reinterpret_cast<struct s14*>(0);
                    rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffe0);
                    rdx51 = g4420b8;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffe8) = 11;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(r12_37) + 0xfffffffffffffff0) = 0;
                    if (!rdx51 || reinterpret_cast<uint32_t>(rax18) < reinterpret_cast<uint32_t>(rdx51)) {
                        g4420b8 = rax18;
                    }
                    tmp64_52 = reinterpret_cast<uint32_t>(r12_37) + g4423f8;
                    below_or_equal53 = tmp64_52 <= g442400;
                    g4423f8 = tmp64_52;
                    if (!below_or_equal53) {
                        g442400 = tmp64_52;
                        goto addr_403ad3_38;
                    }
                }
            } else {
                rdx54 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax31) - reinterpret_cast<uint32_t>(rbx5));
                goto addr_403aaa_40;
            }
        } else {
            rax18 = g4420c0;
            rcx55 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx30) - reinterpret_cast<uint32_t>(rbx5));
            rsi56 = reinterpret_cast<struct s100*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rdx30));
            if (reinterpret_cast<uint32_t>(rcx55) <= reinterpret_cast<uint32_t>(31)) {
                g4420a8 = reinterpret_cast<struct s14*>(0);
                g4420c0 = reinterpret_cast<struct s14*>(0);
                rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx30) | 3);
                rsi56->f8 = rsi56->f8 | 1;
                goto addr_403ad3_38;
            } else {
                rdx57 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
                g4420a8 = rcx55;
                g4420c0 = rdx57;
                rdx57->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx55) | 1);
                rsi56->f0 = rcx55;
                goto addr_403acb_44;
            }
        }
    } else {
        rdx58 = rax18->f18;
        rsi59 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 48);
        r10_60 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(r9_9));
        if (rdx58 != rax18) {
            rcx61 = rax18->f10;
            rcx61->f18 = rdx58;
            rdx58->f10 = rcx61;
            goto addr_403094_47;
        }
        rdx58 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 40);
        r8_62 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + 40);
        if (rdx58) 
            goto addr_40306a_49; else 
            goto addr_40305d_50;
    }
    addr_403ae0_51:
    return rax44;
    addr_4034bf_32:
    rax63 = g442418;
    rdx64 = g442420;
    if (!reinterpret_cast<int1_t>(r9_46 == reinterpret_cast<uint32_t>(rax63) + reinterpret_cast<uint32_t>(rdx64)) || ((ecx65 = g442430, !!(*reinterpret_cast<unsigned char*>(&ecx65) & 8)) || (!(*reinterpret_cast<unsigned char*>(&ecx65) & 1) || (reinterpret_cast<uint32_t>(r10_50) < reinterpret_cast<uint32_t>(rax63) || reinterpret_cast<uint32_t>(r9_46) <= reinterpret_cast<uint32_t>(r10_50))))) {
        cf66 = reinterpret_cast<uint32_t>(r9_46) < reinterpret_cast<uint32_t>(g4420b8);
        if (cf66) {
            g4420b8 = r9_46;
        }
        *reinterpret_cast<int32_t*>(&rcx67) = 0x442418;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx67) + 4) = 0;
        if (!reinterpret_cast<int1_t>(rax63 == reinterpret_cast<uint32_t>(r9_46) + reinterpret_cast<uint32_t>(r12_40))) 
            goto addr_403884_55;
        esi68 = g442430;
        r11d69 = esi68 & 8;
        if (r11d69) 
            goto addr_403884_55;
        if (*reinterpret_cast<unsigned char*>(&esi68) & 1) 
            goto addr_403555_58;
    } else {
        g442420 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx64) + reinterpret_cast<uint32_t>(r12_40));
        goto addr_403507_60;
    }
    do {
        addr_403884_55:
        r13_70 = rcx67->f0;
        if (reinterpret_cast<uint32_t>(r10_50) < reinterpret_cast<uint32_t>(r13_70)) 
            continue;
        r13_70 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rcx67->f8));
        if (reinterpret_cast<uint32_t>(r10_50) < reinterpret_cast<uint32_t>(r13_70)) 
            break;
        rcx67 = rcx67->f10;
    } while (rcx67);
    goto addr_40389e_63;
    addr_4038a8_64:
    rax71 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r13_70) + 0xffffffffffffffb1);
    rdx72 = rax71;
    *reinterpret_cast<uint32_t*>(&rdx73) = *reinterpret_cast<uint32_t*>(&rdx72) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx73) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx73)) {
        rax74 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(rax71));
        *reinterpret_cast<uint32_t*>(&rax75) = *reinterpret_cast<uint32_t*>(&rax74) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = 0;
        rdx73 = rax75;
    }
    r11_76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rdx73) + 0xffffffffffffffa1);
    if (reinterpret_cast<uint32_t>(r11_76) < reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(r10_50) + 32)) {
        r11_76 = r10_50;
    }
    fun_4022a8();
    rax77 = reinterpret_cast<struct s13*>(&r11_76->f10);
    r11_76->f8 = reinterpret_cast<struct s14*>(51);
    rdi78 = reinterpret_cast<struct s13*>(&r11_76->f10);
    *reinterpret_cast<int32_t*>(&rsi79) = 0x442418;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi79) + 4) = 0;
    ecx80 = 8;
    while (ecx80) {
        --ecx80;
        rdi78->f0 = *rsi79;
        rdi78 = reinterpret_cast<struct s13*>(&rdi78->pad8);
        ++rsi79;
    }
    g442428 = rax77;
    rax81 = r11_76 + 2;
    g442418 = r9_46;
    g442420 = r12_40;
    g442430 = 1;
    do {
        *reinterpret_cast<struct s14**>(&rax81->f0) = reinterpret_cast<struct s14*>(11);
        rax81 = reinterpret_cast<struct s14*>(&rax81->f8);
    } while (reinterpret_cast<uint32_t>(r13_70) > reinterpret_cast<uint32_t>(rax81));
    if (r10_50 == r11_76) {
        addr_403a9b_74:
        rdx82 = g4420b0;
        if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(rdx82)) {
            fun_4018e7();
            goto addr_403ade_28;
        } else {
            rdx54 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx82) - reinterpret_cast<uint32_t>(rbx5));
        }
    } else {
        r11_76->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r11_76->f8) & 0xfffffffffffffffe);
        rsi83 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r11_76) - reinterpret_cast<uint32_t>(r10_50));
        rcx84 = reinterpret_cast<uint32_t>(rsi83) >> 3;
        r10_50->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi83) | 1);
        *reinterpret_cast<struct s14**>(&r11_76->f0) = rsi83;
        if (reinterpret_cast<uint32_t>(rsi83) > reinterpret_cast<uint32_t>(0xff)) {
            rdx85 = reinterpret_cast<uint32_t>(rsi83) >> 8;
            eax86 = *reinterpret_cast<struct s14**>(&rdx85);
            if (*reinterpret_cast<struct s14**>(&rdx85) && (eax86 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx85)) <= 0xffff)) {
                __asm__("bsr edx, edx");
                edx87 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx85)) ^ 31;
                ecx88 = 38 - edx87;
                *reinterpret_cast<void**>(&rax89) = reinterpret_cast<void*>(31 - edx87);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax89) + 4) = 0;
                rcx90 = reinterpret_cast<uint32_t>(rsi83) >> *reinterpret_cast<signed char*>(&ecx88);
                *reinterpret_cast<uint32_t*>(&rcx91) = *reinterpret_cast<uint32_t*>(&rcx90) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx91) + 4) = 0;
                eax86 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx91 + rax89 * 2));
            }
            edx92 = g4420a4;
            ecx93 = eax86;
            edi94 = 1 << *reinterpret_cast<unsigned char*>(&ecx93);
            *reinterpret_cast<struct s14**>(&(r10_50 + 2)->f0) = eax86;
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_50) + 40) = reinterpret_cast<struct s14*>(0);
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_50) + 32) = reinterpret_cast<struct s14*>(0);
            *reinterpret_cast<struct s14**>(&rdi95) = eax86;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi95) + 4) = 0;
            if (edx92 & edi94) 
                goto addr_403a23_81; else 
                goto addr_403a05_82;
        } else {
            edx96 = g4420a0;
            *reinterpret_cast<int32_t*>(&rax97) = static_cast<int32_t>(rcx84 + rcx84);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax97) + 4) = 0;
            esi98 = 1 << *reinterpret_cast<unsigned char*>(&rcx84);
            rax99 = reinterpret_cast<struct s14*>(rax97 * 8 + 0x4420e8);
            if (edx96 & esi98) {
                rdx100 = rax99->f10;
            } else {
                g4420a0 = edx96 | esi98;
                rdx100 = rax99;
            }
            rax99->f10 = r10_50;
            rdx100->f18 = r10_50;
            r10_50->f10 = rdx100;
            r10_50->f18 = rax99;
            goto addr_403a9b_74;
        }
    }
    addr_403aaa_40:
    rax18 = g4420c8;
    g4420b0 = rdx54;
    rcx101 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
    g4420c8 = rcx101;
    rcx101->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx54) | 1);
    addr_403acb_44:
    rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    addr_403ad3_38:
    rax44 = reinterpret_cast<struct s13*>(&rax18->f10);
    goto addr_403ae0_51;
    addr_403a23_81:
    ecx102 = 0;
    rdx103 = *reinterpret_cast<struct s14**>(rdi95 * 8 + 0x4422f8);
    if (eax86 != 31) {
        ecx102 = 57 - (reinterpret_cast<uint32_t>(eax86) >> 1);
    }
    rcx104 = reinterpret_cast<uint32_t>(rsi83) << *reinterpret_cast<unsigned char*>(&ecx102);
    while (rsi83 != (reinterpret_cast<uint32_t>(rdx103->f8) & 0xfffffffffffffff8)) {
        rax105 = rcx104;
        rcx104 = rcx104 + rcx104;
        rax106 = (rax105 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx103) + rax106 * 8)) 
            goto addr_403a6d_91;
        rdx103 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx103) + rax106 * 8);
    }
    rax107 = rdx103->f10;
    rax107->f18 = r10_50;
    rdx103->f10 = r10_50;
    r10_50->f10 = rax107;
    r10_50->f18 = rdx103;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_50) + 48) = reinterpret_cast<struct s14*>(0);
    goto addr_403a9b_74;
    addr_403a6d_91:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx103) + rax106 * 8) = r10_50;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_50) + 48) = rdx103;
    addr_403a75_94:
    r10_50->f18 = r10_50;
    r10_50->f10 = r10_50;
    goto addr_403a9b_74;
    addr_403a05_82:
    *reinterpret_cast<struct s14**>(rdi95 * 8 + 0x4422f8) = r10_50;
    g4420a4 = edx92 | edi94;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_50) + 48) = reinterpret_cast<struct s14*>(rdi95 * 8 + 0x4422f8);
    goto addr_403a75_94;
    addr_40389e_63:
    __asm__("ud2 ");
    goto addr_4038a8_64;
    addr_403555_58:
    rcx108 = rax63;
    g442418 = r9_46;
    *reinterpret_cast<uint32_t*>(&rcx109) = *reinterpret_cast<uint32_t*>(&rcx108) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx109) + 4) = 0;
    g442420 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx64) + reinterpret_cast<uint32_t>(r12_40));
    if (*reinterpret_cast<uint32_t*>(&rcx109)) {
        rcx110 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rax63->f10));
        *reinterpret_cast<uint32_t*>(&rcx109) = *reinterpret_cast<uint32_t*>(&rcx110) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx109) + 4) = 0;
    }
    rdx111 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax63) + reinterpret_cast<uint64_t>(rcx109));
    rax112 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_46) + reinterpret_cast<uint32_t>(rbx5));
    r8_113 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx111) - reinterpret_cast<uint32_t>(r9_46)) - reinterpret_cast<uint32_t>(rbx5));
    r9_46->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    if (r10_50 == rdx111) 
        goto addr_403599_97;
    zf114 = rdx111 == g4420c0;
    if (!zf114) {
        rcx115 = rdx111->f8;
        *reinterpret_cast<uint32_t*>(&rcx116) = *reinterpret_cast<uint32_t*>(&rcx115) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx116) + 4) = 0;
        if (rcx116 - 1) {
            addr_40371a_100:
            rdx111->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx111->f8) & 0xfffffffffffffffe);
            rcx117 = reinterpret_cast<uint64_t>(r8_113) >> 3;
            rax112->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_113) | 1);
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rax112) + reinterpret_cast<uint64_t>(r8_113)) = r8_113;
            if (reinterpret_cast<uint64_t>(r8_113) > 0xff) {
                rsi118 = reinterpret_cast<uint64_t>(r8_113) >> 8;
                edx119 = *reinterpret_cast<struct s14**>(&rsi118);
                if (*reinterpret_cast<struct s14**>(&rsi118) && (edx119 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi118)) <= 0xffff)) {
                    __asm__("bsr esi, esi");
                    esi120 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi118)) ^ 31;
                    ecx121 = 38 - esi120;
                    *reinterpret_cast<void**>(&rdx122) = reinterpret_cast<void*>(31 - esi120);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx122) + 4) = 0;
                    rcx123 = reinterpret_cast<uint64_t>(r8_113) >> *reinterpret_cast<signed char*>(&ecx121);
                    *reinterpret_cast<uint32_t*>(&rcx124) = *reinterpret_cast<uint32_t*>(&rcx123) & 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx124) + 4) = 0;
                    edx119 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx124 + rdx122 * 2));
                }
                esi125 = g4420a4;
                ecx126 = edx119;
                edi127 = 1 << *reinterpret_cast<unsigned char*>(&ecx126);
                *reinterpret_cast<struct s14**>(&(rax112 + 2)->f0) = edx119;
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax112) + 40) = reinterpret_cast<struct s14*>(0);
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax112) + 32) = reinterpret_cast<struct s14*>(0);
                *reinterpret_cast<struct s14**>(&rdi128) = edx119;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi128) + 4) = 0;
                if (!(esi125 & edi127)) 
                    goto addr_4037e2_104;
            } else {
                esi129 = g4420a0;
                *reinterpret_cast<int32_t*>(&rdx130) = static_cast<int32_t>(rcx117 + rcx117);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx130) + 4) = 0;
                edi131 = 1 << *reinterpret_cast<unsigned char*>(&rcx117);
                rdx132 = reinterpret_cast<struct s14*>(rdx130 * 8 + 0x4420e8);
                if (esi129 & edi131) {
                    rcx133 = rdx132->f10;
                } else {
                    rcx133 = rdx132;
                    g4420a0 = esi129 | edi131;
                }
                rdx132->f10 = rax112;
                rcx133->f18 = rax112;
                rax112->f10 = rcx133;
                rax112->f18 = rdx132;
                goto addr_40387b_109;
            }
        } else {
            rsi134 = rdx111->f18;
            rbx135 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx111->f8) & 0xfffffffffffffff8);
            if (reinterpret_cast<uint32_t>(rdx111->f8) <= reinterpret_cast<uint32_t>(0xff)) {
                rdi136 = rdx111->f10;
                if (rdi136 != rsi134) {
                    rdi136->f18 = rsi134;
                    rsi134->f10 = rdi136;
                    goto addr_403714_113;
                } else {
                    __asm__("rol esi, cl");
                    g4420a0 = g4420a0 & 0xfffffffe;
                    goto addr_403714_113;
                }
            }
            rdi137 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx111) + 48);
            if (rdx111 == rsi134) 
                goto addr_40365a_116; else 
                goto addr_40364c_117;
        }
    } else {
        tmp64_138 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_113) + reinterpret_cast<uint32_t>(g4420a8));
        g4420c0 = rax112;
        g4420a8 = tmp64_138;
        rax112->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_138) | 1);
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax112) + reinterpret_cast<uint32_t>(tmp64_138)) = tmp64_138;
        goto addr_40387b_109;
    }
    rsi139 = *reinterpret_cast<struct s14**>(rdi128 * 8 + 0x4422f8);
    if (edx119 != 31) {
        r11d69 = 57 - (reinterpret_cast<uint32_t>(edx119) >> 1);
    }
    ecx140 = r11d69;
    rcx141 = reinterpret_cast<uint64_t>(r8_113) << *reinterpret_cast<unsigned char*>(&ecx140);
    while (r8_113 != (reinterpret_cast<uint32_t>(rsi139->f8) & 0xfffffffffffffff8)) {
        rdx142 = rcx141;
        rcx141 = rcx141 + rcx141;
        rdx143 = (rdx142 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi139) + rdx143 * 8)) 
            goto addr_40384d_124;
        rsi139 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi139) + rdx143 * 8);
    }
    rdx144 = rsi139->f10;
    rdx144->f18 = rax112;
    rsi139->f10 = rax112;
    rax112->f10 = rdx144;
    rax112->f18 = rsi139;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax112) + 48) = reinterpret_cast<struct s14*>(0);
    addr_40387b_109:
    rax44 = reinterpret_cast<struct s13*>(&r9_46->f10);
    goto addr_403ae0_51;
    addr_40384d_124:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi139) + rdx143 * 8) = rax112;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax112) + 48) = rsi139;
    addr_403855_127:
    rax112->f18 = rax112;
    rax112->f10 = rax112;
    goto addr_40387b_109;
    addr_4037e2_104:
    *reinterpret_cast<struct s14**>(rdi128 * 8 + 0x4422f8) = rax112;
    g4420a4 = esi125 | edi127;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax112) + 48) = reinterpret_cast<struct s14*>(rdi128 * 8 + 0x4422f8);
    goto addr_403855_127;
    addr_40365a_116:
    rsi134 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx111) + 40);
    r10_145 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx111) + 40);
    if (rsi134) {
        addr_403674_128:
        rcx146 = rsi134;
    } else {
        rsi134 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx111) + 32);
        if (!rsi134) {
            addr_40369f_130:
            if (!rdi137) {
                addr_403714_113:
                rdx111 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx111) + reinterpret_cast<uint64_t>(rbx135));
                r8_113 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r8_113) + reinterpret_cast<uint64_t>(rbx135));
                goto addr_40371a_100;
            } else {
                *reinterpret_cast<struct s14**>(&r10_147) = *reinterpret_cast<struct s14**>(&(rdx111 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_147) + 4) = 0;
                if (rdx111 != *reinterpret_cast<struct s14**>(r10_147 * 8 + 0x4422f8)) {
                    if (rdx111 != *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi137) + 32)) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi137) + 40) = rsi134;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi137) + 32) = rsi134;
                    }
                    if (rsi134) 
                        goto addr_4036c6_136;
                    goto addr_403714_113;
                } else {
                    *reinterpret_cast<struct s14**>((r10_147 + 74) * 8 + 0x4420a8) = rsi134;
                    if (!rsi134) {
                        __asm__("rol esi, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_403714_113;
                    } else {
                        addr_4036c6_136:
                        rcx148 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx111) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi134) + 48) = rdi137;
                        if (rcx148) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi134) + 32) = rcx148;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx148) + 48) = rsi134;
                            goto addr_403703_141;
                        }
                    }
                }
            }
        } else {
            r10_145 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx111) + 32);
            goto addr_403674_128;
        }
    }
    addr_403677_143:
    r12_149 = r10_145;
    rsi134 = rcx146;
    r10_145 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx146) + 40);
    rcx146 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx146) + 40);
    if (rcx146) 
        goto addr_403677_143;
    rcx146 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi134) + 32);
    r10_145 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi134) + 32);
    if (rcx146) 
        goto addr_403677_143;
    *reinterpret_cast<struct s14**>(&r12_149->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_40369f_130;
    addr_403703_141:
    rcx150 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx111) + 40);
    if (rcx150) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi134) + 40) = rcx150;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx150) + 48) = rsi134;
        goto addr_403714_113;
    }
    addr_40364c_117:
    rcx151 = rdx111->f10;
    rcx151->f18 = rsi134;
    rsi134->f10 = rcx151;
    goto addr_40369f_130;
    addr_403599_97:
    tmp64_152 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_113) + reinterpret_cast<uint32_t>(g4420b0));
    g4420c8 = rax112;
    g4420b0 = tmp64_152;
    rax112->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_152) | 1);
    goto addr_40387b_109;
    addr_403507_60:
    fun_4022a8();
    goto addr_403a9b_74;
    addr_403451_33:
    rax153 = g4420b8;
    if (!rax153 || reinterpret_cast<uint32_t>(r9_46) < reinterpret_cast<uint32_t>(rax153)) {
        g4420b8 = r9_46;
    }
    rax154 = g442460;
    g442418 = r9_46;
    g442420 = r12_40;
    g442430 = 1;
    g4420d8 = 0x80;
    g4420e0 = rax154;
    *reinterpret_cast<int32_t*>(&rax155) = 0x4420e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax155) + 4) = 0;
    do {
        rax155->f18 = rax155;
        rax155->f10 = rax155;
        rax155 = reinterpret_cast<struct s102*>(&rax155->f10);
    } while (!reinterpret_cast<int1_t>(0x4422e8 == rax155));
    goto addr_403507_60;
    addr_40306a_49:
    rcx156 = rdx58;
    addr_40306d_151:
    r11_157 = r8_62;
    rdx58 = rcx156;
    r8_62 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx156) + 40);
    rcx156 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx156) + 40);
    if (rcx156) 
        goto addr_40306d_151;
    rcx156 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx58) + 32);
    r8_62 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx58) + 32);
    if (rcx156) 
        goto addr_40306d_151;
    *reinterpret_cast<struct s14**>(&r11_157->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_403094_47;
    addr_40305d_50:
    rdx58 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 32);
    if (!rdx58) {
        addr_403094_47:
        if (!rsi59) {
            addr_403103_154:
            if (reinterpret_cast<uint64_t>(r9_9) > 31) {
                r8_158 = reinterpret_cast<struct s103*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
                rcx159 = reinterpret_cast<uint64_t>(r9_9) >> 3;
                rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                r8_158->f8 = reinterpret_cast<uint64_t>(r9_9) | 1;
                *reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r8_158) + reinterpret_cast<uint64_t>(r9_9)) = r9_9;
                if (reinterpret_cast<uint64_t>(r9_9) > 0xff) {
                    rsi160 = reinterpret_cast<uint64_t>(r9_9) >> 8;
                    edx161 = *reinterpret_cast<uint32_t*>(&rsi160);
                    if (*reinterpret_cast<uint32_t*>(&rsi160) && (edx161 = 31, *reinterpret_cast<uint32_t*>(&rsi160) <= 0xffff)) {
                        __asm__("bsr esi, esi");
                        esi162 = *reinterpret_cast<uint32_t*>(&rsi160) ^ 31;
                        ecx163 = 38 - esi162;
                        *reinterpret_cast<uint32_t*>(&rdx164) = 31 - esi162;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx164) + 4) = 0;
                        rcx165 = reinterpret_cast<uint64_t>(r9_9) >> *reinterpret_cast<signed char*>(&ecx163);
                        *reinterpret_cast<uint32_t*>(&rcx166) = *reinterpret_cast<uint32_t*>(&rcx165) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx166) + 4) = 0;
                        edx161 = static_cast<uint32_t>(rcx166 + rdx164 * 2);
                    }
                    esi167 = g4420a4;
                    ecx168 = edx161;
                    edi169 = 1 << *reinterpret_cast<unsigned char*>(&ecx168);
                    r8_158->f38 = edx161;
                    r8_158->f28 = 0;
                    r8_158->f20 = 0;
                    *reinterpret_cast<uint32_t*>(&rdi170) = edx161;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi170) + 4) = 0;
                    if (!(esi167 & edi169)) 
                        goto addr_4031ef_159;
                } else {
                    esi171 = g4420a0;
                    *reinterpret_cast<int32_t*>(&rdx172) = static_cast<int32_t>(rcx159 + rcx159);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx172) + 4) = 0;
                    edi173 = 1 << *reinterpret_cast<unsigned char*>(&rcx159);
                    rdx174 = reinterpret_cast<struct s103*>(rdx172 * 8 + 0x4420e8);
                    if (esi171 & edi173) {
                        rcx175 = rdx174->f10;
                    } else {
                        rcx175 = rdx174;
                        g4420a0 = esi171 | edi173;
                    }
                    rdx174->f10 = r8_158;
                    rcx175->f18 = r8_158;
                    r8_158->f10 = rcx175;
                    r8_158->f18 = rdx174;
                    goto addr_403ad3_38;
                }
            } else {
                rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r10_60) | 3);
                *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r10_60) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r10_60) + 8) | 1;
                goto addr_403ad3_38;
            }
        } else {
            *reinterpret_cast<struct s14**>(&r8_176) = *reinterpret_cast<struct s14**>(&(rax18 + 2)->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_176) + 4) = 0;
            if (*reinterpret_cast<struct s14**>(r8_176 * 8 + 0x4422f8) != rax18) {
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi59) + 32) != rax18) {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi59) + 40) = rdx58;
                } else {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi59) + 32) = rdx58;
                }
                if (rdx58) 
                    goto addr_4030b8_170;
                goto addr_403103_154;
            } else {
                *reinterpret_cast<struct s14**>((r8_176 + 74) * 8 + 0x4420a8) = rdx58;
                if (!rdx58) {
                    __asm__("btr edi, r8d");
                    g4420a4 = edi6;
                    goto addr_403103_154;
                } else {
                    addr_4030b8_170:
                    rcx177 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 32);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx58) + 48) = rsi59;
                    if (rcx177) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx58) + 32) = rcx177;
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx177) + 48) = rdx58;
                        goto addr_4030f2_175;
                    }
                }
            }
        }
    } else {
        r8_62 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + 32);
        goto addr_40306a_49;
    }
    ecx178 = 0;
    rsi179 = *reinterpret_cast<struct s103**>(rdi170 * 8 + 0x4422f8);
    if (edx161 != 31) {
        ecx178 = 57 - (edx161 >> 1);
    }
    rcx180 = reinterpret_cast<uint64_t>(r9_9) << *reinterpret_cast<unsigned char*>(&ecx178);
    while (r9_9 != (rsi179->f8 & 0xfffffffffffffff8)) {
        rdx181 = rcx180;
        rcx180 = rcx180 + rcx180;
        rdx182 = (rdx181 >> 63) + 4;
        if (!*reinterpret_cast<struct s103**>(reinterpret_cast<uint64_t>(rsi179) + rdx182 * 8)) 
            goto addr_403257_182;
        rsi179 = *reinterpret_cast<struct s103**>(reinterpret_cast<uint64_t>(rsi179) + rdx182 * 8);
    }
    rdx183 = rsi179->f10;
    rdx183->f18 = r8_158;
    rsi179->f10 = r8_158;
    r8_158->f10 = rdx183;
    r8_158->f18 = rsi179;
    r8_158->f30 = reinterpret_cast<struct s103*>(0);
    goto addr_403ad3_38;
    addr_403257_182:
    *reinterpret_cast<struct s103**>(reinterpret_cast<uint64_t>(rsi179) + rdx182 * 8) = r8_158;
    r8_158->f30 = rsi179;
    addr_40325f_185:
    r8_158->f18 = r8_158;
    r8_158->f10 = r8_158;
    goto addr_403ad3_38;
    addr_4031ef_159:
    *reinterpret_cast<struct s103**>(rdi170 * 8 + 0x4422f8) = r8_158;
    g4420a4 = esi167 | edi169;
    r8_158->f30 = reinterpret_cast<struct s103*>(rdi170 * 8 + 0x4422f8);
    goto addr_40325f_185;
    addr_4030f2_175:
    rcx184 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 40);
    if (rcx184) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx58) + 40) = rcx184;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx184) + 48) = rdx58;
        goto addr_403103_154;
    }
    addr_402f46_9:
    ecx185 = 0;
    if (esi10 != 31) {
        ecx185 = 57 - (esi10 >> 1);
    }
    *reinterpret_cast<int32_t*>(&r11_186) = 0;
    *reinterpret_cast<int32_t*>(&r11_186 + 1) = 0;
    *reinterpret_cast<int32_t*>(&r10_187) = 0;
    *reinterpret_cast<int32_t*>(&r10_187 + 1) = 0;
    rcx188 = reinterpret_cast<uint32_t>(rbx5) << *reinterpret_cast<unsigned char*>(&ecx185);
    while (1) {
        rdx189 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rax18->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rdx189) < reinterpret_cast<uint64_t>(r9_9)) {
            if (!rdx189) 
                goto addr_402faf_191;
            r9_9 = rdx189;
            r10_187 = rax18;
        }
        rdx17 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 40);
        rax18 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + ((rcx188 >> 63) + 4) * 8);
        if (!rdx17 || rdx17 == rax18) {
            rdx17 = r11_186;
        }
        if (!rax18) 
            break;
        rcx188 = rcx188 + rcx188;
        r11_186 = rdx17;
    }
    rax18 = r10_187;
    goto addr_402fba_15;
    addr_402faf_191:
    rdx17 = rax18;
    *reinterpret_cast<int32_t*>(&r9_9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = 0;
    goto addr_402fba_15;
    addr_402bf4_13:
    r9_190 = g4420a8;
    if (reinterpret_cast<uint32_t>(r9_190) >= reinterpret_cast<uint32_t>(rbx5)) 
        goto addr_403291_4;
    if (!eax23) {
        edi191 = g4420a4;
        if (!edi191) 
            goto addr_403291_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax192) = -edi191 & edi191;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax192) + 4) = 0;
        rcx193 = *reinterpret_cast<struct s14**>(rax192 * 8 + 0x4422f8);
        rax18 = rcx193;
        r8_194 = reinterpret_cast<struct s14*>((reinterpret_cast<uint32_t>(rcx193->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        while ((rdx195 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx193) + 32), !!rdx195) || (rdx195 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx193) + 40), !!rdx195)) {
            rcx196 = reinterpret_cast<struct s14*>((reinterpret_cast<uint32_t>(rdx195->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
            if (reinterpret_cast<uint32_t>(rcx196) < reinterpret_cast<uint32_t>(r8_194)) {
                r8_194 = rcx196;
                rax18 = rdx195;
            }
            rcx193 = rdx195;
        }
        rdx197 = rax18->f18;
        r10_198 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 48);
        r12_199 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(r8_194));
        if (rdx197 != rax18) 
            goto addr_402d7e_206;
    } else {
        *reinterpret_cast<int32_t*>(&rdi200) = 1 << *reinterpret_cast<unsigned char*>(&rcx22);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi200) + 4) = 0;
        r8d201 = static_cast<uint32_t>(rdi200 + rdi200);
        *reinterpret_cast<int32_t*>(&rcx202) = reinterpret_cast<int32_t>(-(eax23 << *reinterpret_cast<unsigned char*>(&rcx22) & (-r8d201 | r8d201)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx202) + 4) = 0;
        __asm__("bsf ecx, eax");
        *reinterpret_cast<int32_t*>(&rax203) = static_cast<int32_t>(rcx202 + rcx202);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax203) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi204) = static_cast<int32_t>(rcx202 * 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi204) + 4) = 0;
        r10_205 = reinterpret_cast<struct s14*>(rax203 * 8 + 0x4420e8);
        r8_206 = rdi204;
        rax18 = r10_205->f10;
        r11_207 = rax18->f10;
        if (r10_205 != r11_207) {
            r11_207->f18 = r10_205;
            r10_205->f10 = r11_207;
        } else {
            g4420a0 = esi21 & reinterpret_cast<uint32_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx202)));
        }
        rdx208 = reinterpret_cast<struct s104*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(rdi204));
        rsi209 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdi204) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint32_t>(rsi209) > reinterpret_cast<uint32_t>(31)) {
            rbx210 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(rax18));
            rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
            rbx210->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi209) | 1);
            rdx208->f0 = rsi209;
            if (r9_190) {
                r10d211 = g4420a0;
                rcx212 = reinterpret_cast<uint32_t>(r9_190) >> 3;
                rdx213 = g4420c0;
                *reinterpret_cast<int32_t*>(&r8_214) = static_cast<int32_t>(rcx212 + rcx212);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_214) + 4) = 0;
                r11d215 = 1 << *reinterpret_cast<unsigned char*>(&rcx212);
                r8_216 = reinterpret_cast<struct s14*>(r8_214 * 8 + 0x4420e8);
                if (r10d211 & r11d215) {
                    rcx217 = r8_216->f10;
                } else {
                    rcx217 = r8_216;
                    g4420a0 = r10d211 | r11d215;
                }
                r8_216->f10 = rdx213;
                rcx217->f18 = rdx213;
                rdx213->f10 = rcx217;
                rdx213->f18 = r8_216;
            }
            g4420a8 = rsi209;
            g4420c0 = rbx210;
            goto addr_403ad3_38;
        } else {
            *reinterpret_cast<uint32_t*>(&rbx218) = *reinterpret_cast<uint32_t*>(&r8_206) | 3;
            *reinterpret_cast<int32_t*>(&rbx218 + 1) = 0;
            rax18->f8 = rbx218;
            rdx208->f8 = rdx208->f8 | 1;
            goto addr_403ad3_38;
        }
    }
    rdx197 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 40);
    r11_219 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + 40);
    if (rdx197) {
        addr_402da6_219:
        rcx220 = rdx197;
    } else {
        rdx197 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 32);
        if (!rdx197) {
            addr_402dd1_221:
            if (!r10_198) {
                addr_402e40_222:
                if (reinterpret_cast<uint32_t>(r8_194) > reinterpret_cast<uint32_t>(31)) {
                    r10_221 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
                    rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                    r10_221->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_194) | 1);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_221) + reinterpret_cast<uint32_t>(r8_194)) = r8_194;
                    if (r9_190) {
                        rdx222 = g4420c0;
                        rcx223 = reinterpret_cast<uint32_t>(r9_190) >> 3;
                        *reinterpret_cast<int32_t*>(&rdi224) = static_cast<int32_t>(rcx223 + rcx223);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi224) + 4) = 0;
                        r9d225 = 1 << *reinterpret_cast<unsigned char*>(&rcx223);
                        rdi226 = reinterpret_cast<struct s14*>(rdi224 * 8 + 0x4420e8);
                        if (esi21 & r9d225) {
                            rcx227 = rdi226->f10;
                        } else {
                            rcx227 = rdi226;
                            g4420a0 = esi21 | r9d225;
                        }
                        rdi226->f10 = rdx222;
                        rcx227->f18 = rdx222;
                        rdx222->f10 = rcx227;
                        rdx222->f18 = rdi226;
                    }
                    g4420a8 = r8_194;
                    g4420c0 = r10_221;
                    goto addr_403ad3_38;
                } else {
                    rax18->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r12_199) | 3);
                    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r12_199) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r12_199) + 8) | 1;
                    goto addr_403ad3_38;
                }
            } else {
                *reinterpret_cast<struct s14**>(&r11_228) = *reinterpret_cast<struct s14**>(&(rax18 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_228) + 4) = 0;
                if (*reinterpret_cast<struct s14**>(r11_228 * 8 + 0x4422f8) != rax18) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_198) + 32) != rax18) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_198) + 40) = rdx197;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_198) + 32) = rdx197;
                    }
                    if (rdx197) 
                        goto addr_402df5_235;
                    goto addr_402e40_222;
                } else {
                    *reinterpret_cast<struct s14**>((r11_228 + 74) * 8 + 0x4420a8) = rdx197;
                    if (!rdx197) {
                        __asm__("btr edi, r11d");
                        g4420a4 = edi191;
                        goto addr_402e40_222;
                    } else {
                        addr_402df5_235:
                        rcx229 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx197) + 48) = r10_198;
                        if (rcx229) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx197) + 32) = rcx229;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx229) + 48) = rdx197;
                            goto addr_402e2f_240;
                        }
                    }
                }
            }
        } else {
            r11_219 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax18) + 32);
            goto addr_402da6_219;
        }
    }
    addr_402da9_242:
    r13_230 = r11_219;
    rdx197 = rcx220;
    r11_219 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx220) + 40);
    rcx220 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx220) + 40);
    if (rcx220) 
        goto addr_402da9_242;
    rcx220 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx197) + 32);
    r11_219 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx197) + 32);
    if (rcx220) 
        goto addr_402da9_242;
    *reinterpret_cast<struct s14**>(&r13_230->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_402dd1_221;
    addr_402e2f_240:
    rcx231 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax18) + 40);
    if (rcx231) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx197) + 40) = rcx231;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx231) + 48) = rdx197;
        goto addr_402e40_222;
    }
    addr_402d7e_206:
    rcx232 = rax18->f10;
    rcx232->f18 = rdx197;
    rdx197->f10 = rcx232;
    goto addr_402dd1_221;
    addr_402ba3_14:
    *reinterpret_cast<uint32_t*>(&rcx233) = *reinterpret_cast<int32_t*>(&rcx22) + (~eax23 & 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx233) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax234) = static_cast<int32_t>(rcx233 + rcx233);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax234) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_235) = static_cast<int32_t>(rcx233 * 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_235) + 4) = 0;
    rdi236 = reinterpret_cast<struct s14*>(rax234 * 8 + 0x4420e8);
    rdx237 = r9_235;
    rax18 = rdi236->f10;
    r8_238 = rax18->f10;
    if (rdi236 != r8_238) {
        r8_238->f18 = rdi236;
        rdi236->f10 = r8_238;
    } else {
        __asm__("btr esi, ecx");
        g4420a0 = esi21;
    }
    *reinterpret_cast<uint32_t*>(&rbx239) = *reinterpret_cast<uint32_t*>(&rdx237) | 3;
    *reinterpret_cast<int32_t*>(&rbx239 + 1) = 0;
    rax18->f8 = rbx239;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r9_235) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r9_235) + 8) | 1;
    goto addr_403ad3_38;
}

struct s13* fun_4050b2(struct s14* rcx, uint64_t rdx) {
    uint64_t rcx3;

    __asm__("movd xmm3, esi");
    *reinterpret_cast<int32_t*>(&rcx3) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    if (rdx < 32) {
        rcx3 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(0x440550 + rcx3 * 8);
}

uint32_t g4406f8;

struct s14* fun_4018e7() {
    uint32_t eax1;

    eax1 = g4406f8;
    g443c70 = eax1;
    return 0xff;
}

struct s14* g4420d0;

struct s14* fun_403ae8(struct s14* rcx, uint64_t rdx) {
    int64_t rdi3;
    struct s14* rax4;
    struct s14* rdi5;
    void* rdi6;
    struct s14* v7;
    struct s14* rsi8;
    struct s14* rcx9;
    struct s14* rdi10;
    struct s14* rax11;
    struct s14* rsi12;
    uint64_t rbx13;
    uint32_t eax14;
    int1_t zf15;
    struct s14* rcx16;
    int64_t rcx17;
    struct s14* rdx18;
    struct s14* rdx19;
    struct s14* r8_20;
    struct s14* r8_21;
    struct s14* rcx22;
    struct s14* r9_23;
    struct s14* rcx24;
    struct s14* r8_25;
    int1_t zf26;
    struct s14* r10_27;
    struct s14* tmp64_28;
    void* r8_29;
    struct s14* rdx30;
    struct s14* tmp64_31;
    int1_t below_or_equal32;
    struct s14* rcx33;
    struct s14* rax34;
    struct s14* rdx35;
    struct s14* r13_36;
    struct s14* rdi37;
    struct s14* rcx38;
    struct s14* r10_39;
    uint64_t rcx40;
    uint32_t edx41;
    int64_t rax42;
    uint32_t esi43;
    struct s14* rax44;
    struct s14* rdx45;
    uint64_t rsi46;
    struct s14* edx47;
    uint32_t esi48;
    uint32_t ecx49;
    int64_t rdx50;
    uint64_t rcx51;
    int64_t rcx52;
    uint32_t esi53;
    struct s14* ecx54;
    uint32_t r8d55;
    int64_t r8_56;
    uint32_t ecx57;
    struct s14* rsi58;
    uint64_t rcx59;
    uint64_t rdx60;
    uint64_t rdx61;
    struct s14* rax62;
    int1_t zf63;
    struct s14* r14_64;
    struct s13* rax65;
    uint32_t r13d66;
    uint32_t r13d67;
    struct s14* rdx68;
    void* rdx69;
    int64_t rbx70;
    void* rbx71;
    struct s14* rbx72;
    struct s14* rdx73;
    int64_t rdx74;
    void* r15_75;
    struct s14* rcx76;
    struct s14* rdx77;
    int1_t zf78;
    struct s13* r8_79;
    struct s14* rax80;
    struct s14* rsi81;
    uint32_t eax82;
    uint64_t rdx83;
    struct s14* eax84;
    uint32_t edx85;
    uint32_t ecx86;
    int64_t rax87;
    uint64_t rcx88;
    int64_t rcx89;
    uint32_t edx90;
    struct s14* ecx91;
    uint32_t esi92;
    int64_t rsi93;
    struct s14* rdx94;
    struct s14* rdx95;
    struct s14* r9_96;
    struct s14* rdx97;
    uint32_t ecx98;
    uint64_t rcx99;
    uint64_t rax100;
    uint64_t rax101;
    struct s14* rax102;
    struct s14* r8_103;
    struct s14* rcx104;
    struct s14* r9_105;
    struct s14* rcx106;
    int64_t r9_107;
    struct s14* rcx108;
    struct s14* r11_109;
    struct s14* rcx110;
    struct s14* rsi111;
    struct s14* eax112;
    void* r10_113;
    uint64_t rax114;
    struct s14* rbx115;
    struct s14* rax116;
    uint32_t eax117;
    struct s14* rdx118;
    void* rax119;
    void* rbx120;
    struct s14* rax121;
    int1_t below_or_equal122;
    struct s14* rax123;
    struct s14* rcx124;

    if (!rdi3) {
        return rax4;
    }
    rdi5 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdi6) + 0xfffffffffffffff0);
    v7 = rsi8;
    rcx9 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff8);
    rax11 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx9) & 0xfffffffffffffff8);
    rsi12 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rax11));
    if (*reinterpret_cast<unsigned char*>(&rcx9) & 1) 
        goto addr_403c97_4;
    rdi5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) - reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)));
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx9) & 3);
    if (!*reinterpret_cast<unsigned char*>(&rcx9)) {
        rbx13 = reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)) + 32;
        eax14 = fun_40452c(rcx9, rdi10);
        if (!eax14) {
            g4423f8 = g4423f8 - rbx13;
            goto addr_403fe8_8;
        }
    }
    rax11 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)));
    zf15 = g4420c0 == rdi5;
    if (!zf15) 
        goto addr_403b53_10;
    rcx16 = rsi12->f8;
    *reinterpret_cast<uint32_t*>(&rcx17) = *reinterpret_cast<uint32_t*>(&rcx16) & 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = 0;
    if (rcx17 == 3) {
        rdx18 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi12->f8) & 0xfffffffffffffffe);
        g4420a8 = rax11;
        rsi12->f8 = rdx18;
        rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) | 1);
        *reinterpret_cast<struct s14**>(&rsi12->f0) = rax11;
        goto addr_403fe8_8;
    }
    addr_403b53_10:
    rdx19 = rdi5->f18;
    if (reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)) <= 0xff) {
        r8_20 = rdi5->f10;
        if (r8_20 != rdx19) {
            r8_20->f18 = rdx19;
            rdx19->f10 = r8_20;
            goto addr_403c97_4;
        } else {
            __asm__("rol edx, cl");
            g4420a0 = g4420a0 & 0xfffffffe;
            goto addr_403c97_4;
        }
    }
    r8_21 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48);
    if (rdi5 != rdx19) {
        rcx22 = rdi5->f10;
        rcx22->f18 = rdx19;
        rdx19->f10 = rcx22;
        goto addr_403bea_18;
    }
    rdx19 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    r9_23 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rdx19) {
        addr_403bc0_20:
        rcx24 = rdx19;
    } else {
        rdx19 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 32);
        if (!rdx19) {
            addr_403bea_18:
            if (!r8_21) {
                addr_403c97_4:
                r8_25 = rsi12->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_25) & 2) {
                    rsi12->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_25) & 0xfffffffffffffffe);
                    rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) | 1);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rax11)) = rax11;
                    goto addr_403e84_23;
                } else {
                    zf26 = g4420c8 == rsi12;
                    r10_27 = g4420c0;
                    if (!zf26) {
                        if (rsi12 == r10_27) {
                            tmp64_28 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint32_t>(g4420a8));
                            g4420c0 = rdi5;
                            g4420a8 = tmp64_28;
                            rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_28) | 1);
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(tmp64_28)) = tmp64_28;
                            goto addr_403fe8_8;
                        }
                        r8_29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_25) & 0xfffffffffffffff8);
                        rdx30 = rsi12->f18;
                        rax11 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint64_t>(r8_29));
                        if (reinterpret_cast<uint64_t>(r8_29) > 0xf8) 
                            goto addr_403d7d_28; else 
                            goto addr_403d55_29;
                    } else {
                        tmp64_31 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint32_t>(g4420b0));
                        g4420c8 = rdi5;
                        g4420b0 = tmp64_31;
                        rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(tmp64_31) | 1);
                        if (rdi5 == r10_27) {
                            g4420c0 = reinterpret_cast<struct s14*>(0);
                            g4420a8 = reinterpret_cast<struct s14*>(0);
                        }
                        below_or_equal32 = reinterpret_cast<uint32_t>(tmp64_31) <= reinterpret_cast<uint32_t>(g4420d0);
                        if (below_or_equal32) 
                            goto addr_403fe8_8;
                        rcx33 = v7;
                        if (!1) 
                            goto addr_4025c0_35;
                        rax34 = g4420c8;
                        if (!rax34) 
                            goto addr_4025c0_35;
                        rdx35 = g4420b0;
                        if (reinterpret_cast<uint32_t>(rdx35) <= reinterpret_cast<uint32_t>(80)) 
                            goto addr_4025e0_38;
                        rcx33 = reinterpret_cast<struct s14*>(0x442418);
                        r13_36 = reinterpret_cast<struct s14*>(0x442418);
                        do {
                            rdi37 = *reinterpret_cast<struct s14**>(&r13_36->f0);
                            if (reinterpret_cast<uint32_t>(rax34) < reinterpret_cast<uint32_t>(rdi37)) 
                                continue;
                            r9_23 = r13_36->f8;
                            r8_25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi37) + reinterpret_cast<uint32_t>(r9_23));
                            if (reinterpret_cast<uint32_t>(rax34) < reinterpret_cast<uint32_t>(r8_25)) 
                                goto addr_402619_42;
                            r13_36 = r13_36->f10;
                        } while (r13_36);
                        goto addr_402610_44;
                    }
                }
            } else {
                r9_23 = *reinterpret_cast<struct s14**>(&(rdi5 + 2)->f0);
                *reinterpret_cast<int32_t*>(&r9_23 + 1) = 0;
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_23) * 8 + 0x4422f8) != rdi5) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_21) + 32) != rdi5) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_21) + 40) = rdx19;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_21) + 32) = rdx19;
                    }
                    if (rdx19) 
                        goto addr_403c15_50;
                    goto addr_403c97_4;
                } else {
                    *reinterpret_cast<struct s14**>((reinterpret_cast<uint32_t>(r9_23) + 74) * 8 + 0x4420a8) = rdx19;
                    if (!rdx19) {
                        __asm__("rol edx, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_403c97_4;
                    } else {
                        addr_403c15_50:
                        rcx38 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx19) + 48) = r8_21;
                        if (rcx38) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx19) + 32) = rcx38;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx38) + 48) = rdx19;
                            goto addr_403c52_55;
                        }
                    }
                }
            }
        } else {
            r9_23 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) + 32);
            goto addr_403bc0_20;
        }
    }
    addr_403bc3_57:
    r10_39 = r9_23;
    rdx19 = rcx24;
    r9_23 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx24) + 40);
    rcx24 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx24) + 40);
    if (rcx24) 
        goto addr_403bc3_57;
    rcx24 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx19) + 32);
    r9_23 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx19) + 32);
    if (rcx24) 
        goto addr_403bc3_57;
    *reinterpret_cast<struct s14**>(&r10_39->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_403bea_18;
    addr_403e84_23:
    rcx40 = reinterpret_cast<uint32_t>(rax11) >> 3;
    if (reinterpret_cast<uint32_t>(rax11) <= reinterpret_cast<uint32_t>(0xff)) {
        edx41 = g4420a0;
        *reinterpret_cast<int32_t*>(&rax42) = static_cast<int32_t>(rcx40 + rcx40);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax42) + 4) = 0;
        esi43 = 1 << *reinterpret_cast<unsigned char*>(&rcx40);
        rax44 = reinterpret_cast<struct s14*>(rax42 * 8 + 0x4420e8);
        if (edx41 & esi43) {
            rdx45 = rax44->f10;
        } else {
            g4420a0 = edx41 | esi43;
            rdx45 = rax44;
        }
        rax44->f10 = rdi5;
        rdx45->f18 = rdi5;
        rdi5->f10 = rdx45;
        rdi5->f18 = rax44;
        goto addr_403fe8_8;
    }
    rsi46 = reinterpret_cast<uint32_t>(rax11) >> 8;
    edx47 = *reinterpret_cast<struct s14**>(&rsi46);
    if (*reinterpret_cast<struct s14**>(&rsi46) && (edx47 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi46)) <= 0xffff)) {
        __asm__("bsr esi, esi");
        esi48 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi46)) ^ 31;
        ecx49 = 38 - esi48;
        *reinterpret_cast<void**>(&rdx50) = reinterpret_cast<void*>(31 - esi48);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = 0;
        rcx51 = reinterpret_cast<uint32_t>(rax11) >> *reinterpret_cast<signed char*>(&ecx49);
        *reinterpret_cast<uint32_t*>(&rcx52) = *reinterpret_cast<uint32_t*>(&rcx51) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = 0;
        edx47 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx52 + rdx50 * 2));
    }
    esi53 = g4420a4;
    ecx54 = edx47;
    r8d55 = 1 << *reinterpret_cast<unsigned char*>(&ecx54);
    *reinterpret_cast<struct s14**>(&(rdi5 + 2)->f0) = edx47;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 40) = reinterpret_cast<struct s14*>(0);
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 32) = reinterpret_cast<struct s14*>(0);
    *reinterpret_cast<struct s14**>(&r8_56) = edx47;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_56) + 4) = 0;
    if (!(esi53 & r8d55)) 
        goto addr_403f3c_67;
    ecx57 = 0;
    rsi58 = *reinterpret_cast<struct s14**>(r8_56 * 8 + 0x4422f8);
    if (edx47 != 31) {
        ecx57 = 57 - (reinterpret_cast<uint32_t>(edx47) >> 1);
    }
    rcx59 = reinterpret_cast<uint32_t>(rax11) << *reinterpret_cast<unsigned char*>(&ecx57);
    while ((reinterpret_cast<uint32_t>(rsi58->f8) & 0xfffffffffffffff8) != rax11) {
        rdx60 = rcx59;
        rcx59 = rcx59 + rcx59;
        rdx61 = (rdx60 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi58) + rdx61 * 8)) 
            goto addr_403fa4_73;
        rsi58 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi58) + rdx61 * 8);
    }
    rax62 = rsi58->f10;
    rax62->f18 = rdi5;
    rsi58->f10 = rdi5;
    rdi5->f10 = rax62;
    rdi5->f18 = rsi58;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s14*>(0);
    addr_403fd2_76:
    --g4420d8;
    zf63 = g4420d8 == 0;
    if (!zf63) {
        addr_403fe8_8:
        return v7;
    } else {
        *reinterpret_cast<int32_t*>(&r14_64) = 0;
        *reinterpret_cast<int32_t*>(&r14_64 + 1) = 0;
        rax65 = g442428;
        if (!rax65) 
            goto addr_402591_79;
        r13d66 = rax65->f18;
        if (!(*reinterpret_cast<unsigned char*>(&r13d66) & 1)) 
            goto addr_402591_79;
        r13d67 = r13d66 & 8;
        if (r13d67) 
            goto addr_402591_79;
        rdx68 = rax65->f0;
        *reinterpret_cast<uint32_t*>(&rdx69) = *reinterpret_cast<uint32_t*>(&rdx68) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx69)) {
            rbx70 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rax65->f0->f10));
            *reinterpret_cast<uint32_t*>(&rbx71) = *reinterpret_cast<uint32_t*>(&rbx70) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx71) + 4) = 0;
            rdx69 = rbx71;
        }
        rbx72 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax65->f0) + reinterpret_cast<uint64_t>(rdx69));
        *reinterpret_cast<int32_t*>(&r14_64) = 0;
        *reinterpret_cast<int32_t*>(&r14_64 + 1) = 0;
        rdx73 = rbx72->f8;
        *reinterpret_cast<uint32_t*>(&rdx74) = *reinterpret_cast<uint32_t*>(&rdx73) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx74) + 4) = 0;
        if (rdx74 - 1) {
            addr_402591_79:
            g4420d8 = 0x80;
            return r14_64;
        } else {
            r14_64 = rax65->f8;
            r15_75 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx72->f8) & 0xfffffffffffffff8);
            rcx76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx72) + reinterpret_cast<uint64_t>(r15_75));
            rdx77 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax65->f0) + reinterpret_cast<uint32_t>(r14_64) + 0xffffffffffffffb0);
            if (reinterpret_cast<uint32_t>(rcx76) < reinterpret_cast<uint32_t>(rdx77)) {
                addr_40258e_86:
                *reinterpret_cast<int32_t*>(&r14_64) = 0;
                *reinterpret_cast<int32_t*>(&r14_64 + 1) = 0;
                goto addr_402591_79;
            } else {
                zf78 = g4420c0 == rbx72;
                r8_79 = rax65->f10;
                if (zf78) {
                    g4420c0 = reinterpret_cast<struct s14*>(0);
                    g4420a8 = reinterpret_cast<struct s14*>(0);
                    goto addr_40246c_89;
                }
                rax80 = rbx72->f18;
                rsi81 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48);
                if (rax80 != rbx72) 
                    goto addr_4023a9_91;
            }
        }
    }
    rax80 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax80) + 40);
    rcx76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rax80) {
        addr_4023d1_93:
        rdx77 = rax80;
    } else {
        rax80 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 32);
        if (!rax80) {
            addr_4023fb_95:
            if (!rsi81) {
                addr_40246c_89:
                eax82 = fun_40452c(rcx76, rdx77);
                if (eax82) {
                    rdx83 = reinterpret_cast<uint64_t>(r15_75) >> 8;
                    eax84 = *reinterpret_cast<struct s14**>(&rdx83);
                    if (*reinterpret_cast<struct s14**>(&rdx83) && (eax84 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx83)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx85 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdx83)) ^ 31;
                        ecx86 = 38 - edx85;
                        *reinterpret_cast<void**>(&rax87) = reinterpret_cast<void*>(31 - edx85);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
                        rcx88 = reinterpret_cast<uint64_t>(r15_75) >> *reinterpret_cast<signed char*>(&ecx86);
                        *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rcx88) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
                        eax84 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx89 + rax87 * 2));
                    }
                    edx90 = g4420a4;
                    ecx91 = eax84;
                    esi92 = 1 << *reinterpret_cast<unsigned char*>(&ecx91);
                    *reinterpret_cast<struct s14**>(&(rbx72 + 2)->f0) = eax84;
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 40) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 32) = reinterpret_cast<struct s14*>(0);
                    *reinterpret_cast<struct s14**>(&rsi93) = eax84;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi93) + 4) = 0;
                    if (edx90 & esi92) 
                        goto addr_402513_99; else 
                        goto addr_4024f6_100;
                } else {
                    g4423f8 = g4423f8 - reinterpret_cast<uint32_t>(r14_64);
                    g442428 = r8_79;
                    goto addr_402591_79;
                }
            } else {
                rdx94 = *reinterpret_cast<struct s14**>(&(rbx72 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx94 + 1) = 0;
                rcx76 = rdx94;
                rdx77 = reinterpret_cast<struct s14*>(0x4420a0 + reinterpret_cast<uint32_t>(rdx94) * 8);
                if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx77) + 0x258) != rbx72) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi81) + 32) != rbx72) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi81) + 40) = rax80;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi81) + 32) = rax80;
                    }
                    if (rax80) 
                        goto addr_40241f_107;
                    goto addr_40246c_89;
                } else {
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx77) + 0x258) = rax80;
                    if (!rax80) {
                        __asm__("rol eax, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_40246c_89;
                    } else {
                        addr_40241f_107:
                        rdx95 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax80) + 48) = rsi81;
                        if (rdx95) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax80) + 32) = rdx95;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx95) + 48) = rax80;
                            goto addr_40245b_112;
                        }
                    }
                }
            }
        } else {
            rcx76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rbx72) + 32);
            goto addr_4023d1_93;
        }
    }
    addr_4023d4_114:
    r9_96 = rcx76;
    rax80 = rdx77;
    rcx76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx77) + 40);
    rdx77 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx77) + 40);
    if (rdx77) 
        goto addr_4023d4_114;
    rdx77 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax80) + 32);
    rcx76 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax80) + 32);
    if (rdx77) 
        goto addr_4023d4_114;
    *reinterpret_cast<struct s14**>(&r9_96->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_4023fb_95;
    addr_402513_99:
    rdx97 = *reinterpret_cast<struct s14**>(0x4420a0 + rsi93 * 8 + 0x258);
    if (eax84 != 31) {
        r13d67 = 57 - (reinterpret_cast<uint32_t>(eax84) >> 1);
    }
    ecx98 = r13d67;
    rcx99 = reinterpret_cast<uint64_t>(r15_75) << *reinterpret_cast<unsigned char*>(&ecx98);
    while ((reinterpret_cast<uint32_t>(rdx97->f8) & 0xfffffffffffffff8) != r15_75) {
        rax100 = rcx99;
        rcx99 = rcx99 + rcx99;
        rax101 = (rax100 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8)) 
            goto addr_402560_121;
        rdx97 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8);
    }
    rax102 = rdx97->f10;
    rax102->f18 = rbx72;
    rdx97->f10 = rbx72;
    rbx72->f10 = rax102;
    rbx72->f18 = rdx97;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48) = reinterpret_cast<struct s14*>(0);
    goto addr_40258e_86;
    addr_402560_121:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8) = rbx72;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48) = rdx97;
    addr_402568_124:
    rbx72->f18 = rbx72;
    rbx72->f10 = rbx72;
    goto addr_40258e_86;
    addr_4024f6_100:
    g4420a4 = edx90 | esi92;
    *reinterpret_cast<struct s14**>(0x4420a0 + rsi93 * 8 + 0x258) = rbx72;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 48) = reinterpret_cast<struct s14*>(0x4420a0 + rsi93 * 8 + 0x258);
    goto addr_402568_124;
    addr_40245b_112:
    rdx77 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rdx77) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax80) + 40) = rdx77;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx77) + 48) = rax80;
        goto addr_40246c_89;
    }
    addr_4023a9_91:
    rdx77 = rbx72->f10;
    rdx77->f18 = rax80;
    rax80->f10 = rdx77;
    goto addr_4023fb_95;
    addr_403fa4_73:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi58) + rdx61 * 8) = rdi5;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48) = rsi58;
    addr_403fac_126:
    rdi5->f18 = rdi5;
    rdi5->f10 = rdi5;
    goto addr_403fd2_76;
    addr_403f3c_67:
    *reinterpret_cast<struct s14**>(r8_56 * 8 + 0x4422f8) = rdi5;
    g4420a4 = esi53 | r8d55;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s14*>(r8_56 * 8 + 0x4422f8);
    goto addr_403fac_126;
    addr_403d7d_28:
    r8_103 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi12) + 48);
    if (rsi12 != rdx30) {
        rcx104 = rsi12->f10;
        rcx104->f18 = rdx30;
        rdx30->f10 = rcx104;
        goto addr_403dd8_128;
    }
    rdx30 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi12) + 40);
    r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi12) + 40);
    if (rdx30) {
        addr_403dae_130:
        rcx106 = rdx30;
    } else {
        rdx30 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi12) + 32);
        if (!rdx30) {
            addr_403dd8_128:
            if (!r8_103) {
                addr_403e4d_132:
                rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax11) | 1);
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rax11)) = rax11;
                if (rdi5 == r10_27) {
                    g4420a8 = rax11;
                    goto addr_403fe8_8;
                }
            } else {
                *reinterpret_cast<struct s14**>(&r9_107) = *reinterpret_cast<struct s14**>(&(rsi12 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_107) + 4) = 0;
                if (*reinterpret_cast<struct s14**>(r9_107 * 8 + 0x4422f8) != rsi12) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_103) + 32) != rsi12) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_103) + 40) = rdx30;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_103) + 32) = rdx30;
                    }
                    if (rdx30) 
                        goto addr_403dff_139;
                    goto addr_403e4d_132;
                } else {
                    *reinterpret_cast<struct s14**>((r9_107 + 74) * 8 + 0x4420a8) = rdx30;
                    if (!rdx30) {
                        __asm__("rol edx, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_403e4d_132;
                    } else {
                        addr_403dff_139:
                        rcx108 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi12) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx30) + 48) = r8_103;
                        if (rcx108) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx30) + 32) = rcx108;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx108) + 48) = rdx30;
                            goto addr_403e3c_144;
                        }
                    }
                }
            }
        } else {
            r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi12) + 32);
            goto addr_403dae_130;
        }
    }
    addr_403db1_146:
    r11_109 = r9_105;
    rdx30 = rcx106;
    r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx106) + 40);
    rcx106 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx106) + 40);
    if (rcx106) 
        goto addr_403db1_146;
    rcx106 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx30) + 32);
    r9_105 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx30) + 32);
    if (rcx106) 
        goto addr_403db1_146;
    *reinterpret_cast<struct s14**>(&r11_109->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_403dd8_128;
    addr_403e3c_144:
    rcx110 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi12) + 40);
    if (rcx110) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx30) + 40) = rcx110;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx110) + 48) = rdx30;
        goto addr_403e4d_132;
    }
    addr_403d55_29:
    rsi111 = rsi12->f10;
    if (rsi111 != rdx30) {
        rsi111->f18 = rdx30;
        rdx30->f10 = rsi111;
        goto addr_403e4d_132;
    } else {
        __asm__("rol edx, cl");
        g4420a0 = g4420a0 & 0xfffffffe;
        goto addr_403e4d_132;
    }
    addr_402619_42:
    eax112 = r13_36->f18;
    if (*reinterpret_cast<unsigned char*>(&eax112) & 8) 
        goto addr_4025e0_38;
    if (!(*reinterpret_cast<unsigned char*>(&eax112) & 1)) 
        goto addr_4025e0_38;
    r10_113 = g442470;
    rax114 = reinterpret_cast<uint32_t>(rdx35) + reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff - reinterpret_cast<uint32_t>(80);
    rdx35 = reinterpret_cast<struct s14*>(rax114 % reinterpret_cast<uint64_t>(r10_113));
    rbx115 = reinterpret_cast<struct s14*>((rax114 / reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff) * reinterpret_cast<uint64_t>(r10_113));
    if (reinterpret_cast<uint32_t>(rbx115) > reinterpret_cast<uint32_t>(r9_23)) 
        goto addr_4025e0_38;
    do {
        if (reinterpret_cast<uint32_t>(rdi37) > reinterpret_cast<uint32_t>(rcx33)) 
            continue;
        if (reinterpret_cast<uint32_t>(r8_25) > reinterpret_cast<uint32_t>(rcx33)) 
            goto addr_4025e0_38;
        rcx33 = rcx33->f10;
    } while (rcx33);
    *reinterpret_cast<int32_t*>(&rcx33) = 0;
    *reinterpret_cast<int32_t*>(&rcx33 + 1) = 0;
    rdx35 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_23) - reinterpret_cast<uint32_t>(rbx115));
    rax116 = fun_404abb();
    if (reinterpret_cast<uint32_t>(rax116) + 1 || (eax117 = fun_40452c(0, rdx35), !eax117)) {
        if (rbx115) {
            r13_36->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r13_36->f8) - reinterpret_cast<uint32_t>(rbx115));
            rdx118 = g4420b0;
            g4423f8 = g4423f8 - reinterpret_cast<uint32_t>(rbx115);
            rdx35 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx118) - reinterpret_cast<uint32_t>(rbx115));
            fun_4022a8();
        }
    } else {
        addr_4025e0_38:
        *reinterpret_cast<int32_t*>(&rbx115) = 0;
        *reinterpret_cast<int32_t*>(&rbx115 + 1) = 0;
    }
    rax119 = fun_4022ef(rcx33, rdx35);
    rbx120 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx115) + reinterpret_cast<uint64_t>(rax119));
    if (!rbx120) {
        rax121 = g4420d0;
        below_or_equal122 = reinterpret_cast<uint32_t>(g4420b0) <= reinterpret_cast<uint32_t>(rax121);
        if (below_or_equal122) {
            addr_4025c0_35:
            *reinterpret_cast<int32_t*>(&rbx120) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx120) + 4) = 0;
        } else {
            g4420d0 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
        }
    }
    *reinterpret_cast<int32_t*>(&rax123) = 0;
    *reinterpret_cast<int32_t*>(&rax123 + 1) = 0;
    *reinterpret_cast<unsigned char*>(&rax123) = reinterpret_cast<uint1_t>(!!rbx120);
    return rax123;
    addr_402610_44:
    __asm__("ud2 ");
    goto addr_402619_42;
    addr_403c52_55:
    rcx124 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rcx124) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx19) + 40) = rcx124;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx124) + 48) = rdx19;
        goto addr_403c97_4;
    }
}

struct s105 {
    void* f0;
    void* f8;
    struct s14* f10;
};

struct s106 {
    uint32_t f0;
    uint32_t f4;
    void* f8;
    void* f10;
    struct s14* f18;
    signed char[4] pad32;
    struct s14* f20;
    signed char[4] pad40;
    struct s14* f28;
    signed char[812] pad856;
    uint64_t f358;
    uint64_t f360;
};

struct s107 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s108 {
    void* f0;
    uint64_t f8;
};

struct s109 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s110 {
    uint32_t f0;
    signed char[596] pad600;
    struct s14* f258;
};

void fun_4026e8(struct s14* rcx, struct s14* rdx);

struct s105* fun_404049(struct s14* rcx, void* rdx, int64_t r8) {
    struct s105* r13_4;
    struct s105* rsi5;
    struct s106* r12_6;
    struct s106* rdi7;
    void* rdi8;
    uint64_t rsi9;
    struct s107* rsi10;
    void* rdx11;
    void* rax12;
    void* r14_13;
    void* rbx14;
    struct s14* rax15;
    void* rdx16;
    int1_t cf17;
    uint64_t rbx18;
    int1_t below_or_equal19;
    struct s14* r9_20;
    struct s14* r10_21;
    void* r10_22;
    void* r8_23;
    struct s14* rax24;
    struct s14* r11_25;
    struct s14* rdx26;
    struct s14* r10_27;
    void* rcx28;
    uint64_t rsi29;
    struct s108* rax30;
    void* r8_31;
    struct s14* rcx32;
    void* rdx33;
    uint64_t rsi34;
    void* r9_35;
    struct s14* rax36;
    struct s14* rdx37;
    uint64_t rsi38;
    struct s14* rdx39;
    uint64_t rsi40;
    struct s109* rax41;
    struct s14* rdx42;
    struct s110* rdx43;
    struct s14* rdx44;
    struct s14* rbx45;
    struct s14* rdx46;
    struct s14* rdx47;

    r13_4 = rsi5;
    r12_6 = rdi7;
    rdi8 = rdx;
    rsi9 = rsi10->f8;
    rdx11 = reinterpret_cast<void*>(rsi9 & 0xfffffffffffffff8);
    if (!(*reinterpret_cast<unsigned char*>(&rsi9) & 3)) {
        if (reinterpret_cast<uint64_t>(rdi8) <= 0xff) 
            goto addr_40407f_3;
        rax12 = g442470;
        if (reinterpret_cast<uint64_t>(rdx11) < reinterpret_cast<uint64_t>(rdi8) + 8) 
            goto addr_4040aa_5;
        if (reinterpret_cast<uint64_t>(rdx11) - reinterpret_cast<uint64_t>(rdi8) <= reinterpret_cast<uint64_t>(rax12) + reinterpret_cast<uint64_t>(rax12)) 
            goto addr_4043c9_7;
        addr_4040aa_5:
        r14_13 = r13_4->f0;
        rbx14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax12) + reinterpret_cast<uint64_t>(rdi8) + 62 & -reinterpret_cast<uint64_t>(rax12));
        rax15 = fun_404abb();
        if (rax15 == 0xffffffffffffffff) 
            goto addr_40407f_3;
        r13_4 = reinterpret_cast<struct s105*>(reinterpret_cast<uint32_t>(rax15) + reinterpret_cast<uint64_t>(r14_13));
        rdx16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx14) - reinterpret_cast<uint64_t>(r14_13));
        cf17 = reinterpret_cast<uint32_t>(rax15) < reinterpret_cast<uint32_t>(r12_6->f18);
        r13_4->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx16) - 32);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdx16) - 24) = 11;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdx16) - 16) = 0;
        if (cf17) {
            r12_6->f18 = rax15;
        }
        rbx18 = reinterpret_cast<uint64_t>(rbx14) + r12_6->f358 - (reinterpret_cast<uint64_t>(rdx11) + reinterpret_cast<uint64_t>(r14_13) + 32);
        below_or_equal19 = rbx18 <= r12_6->f360;
        r12_6->f358 = rbx18;
        if (!below_or_equal19) {
            r12_6->f360 = rbx18;
            goto addr_4043c9_7;
        }
    }
    r9_20 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdx11));
    if (reinterpret_cast<uint64_t>(rdx11) < reinterpret_cast<uint64_t>(rdi8)) {
        if (r12_6->f28 != r9_20) {
            if (r12_6->f20 != r9_20) {
                r10_21 = r9_20->f8;
                if (*reinterpret_cast<unsigned char*>(&r10_21) & 2 || (r10_22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r10_21) & 0xfffffffffffffff8), r8_23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx11) + reinterpret_cast<uint64_t>(r10_22)), reinterpret_cast<uint64_t>(r8_23) < reinterpret_cast<uint64_t>(rdi8))) {
                    addr_40407f_3:
                    *reinterpret_cast<int32_t*>(&r13_4) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = 0;
                    goto addr_4043c9_7;
                } else {
                    rax24 = r9_20->f18;
                    r11_25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_23) - reinterpret_cast<uint64_t>(rdi8));
                    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r10_22) >> 3);
                    if (reinterpret_cast<uint64_t>(r10_22) <= 0xf8) {
                        rdx26 = r9_20->f10;
                        if (rdx26 != rax24) {
                            rdx26->f18 = rax24;
                            rax24->f10 = rdx26;
                            goto addr_40437b_19;
                        } else {
                            __asm__("rol eax, cl");
                            r12_6->f0 = r12_6->f0 & 0xfffffffe;
                            goto addr_40437b_19;
                        }
                    }
                    r10_27 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_20) + 48);
                    if (r9_20 != rax24) 
                        goto addr_4042b7_22;
                }
            } else {
                rcx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_6->f8) + reinterpret_cast<uint64_t>(rdx11));
                if (reinterpret_cast<uint64_t>(rcx28) < reinterpret_cast<uint64_t>(rdi8)) 
                    goto addr_40407f_3;
                *reinterpret_cast<uint32_t*>(&rsi29) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
                rax30 = reinterpret_cast<struct s108*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rcx28));
                r8_31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx28) - reinterpret_cast<uint64_t>(rdi8));
                if (reinterpret_cast<uint64_t>(r8_31) <= 31) {
                    r13_4->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx28) | rsi29 | 2);
                    rax30->f8 = rax30->f8 | 1;
                    r12_6->f8 = reinterpret_cast<void*>(0);
                    r12_6->f20 = reinterpret_cast<struct s14*>(0);
                    goto addr_4043c9_7;
                } else {
                    rcx32 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8));
                    r13_4->f8 = reinterpret_cast<void*>(rsi29 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    rcx32->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r8_31) | 1);
                    rax30->f0 = r8_31;
                    rax30->f8 = rax30->f8 & 0xfffffffffffffffe;
                    r12_6->f8 = r8_31;
                    r12_6->f20 = rcx32;
                    goto addr_4043c9_7;
                }
            }
        } else {
            rdx33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx11) + reinterpret_cast<uint64_t>(r12_6->f10));
            if (reinterpret_cast<uint64_t>(rdx33) <= reinterpret_cast<uint64_t>(rdi8)) 
                goto addr_40407f_3;
            *reinterpret_cast<uint32_t*>(&rsi34) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = 0;
            r9_35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx33) - reinterpret_cast<uint64_t>(rdi8));
            rax36 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8));
            r13_4->f8 = reinterpret_cast<void*>(rsi34 | reinterpret_cast<uint64_t>(rdi8) | 2);
            rax36->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(r9_35) | 1);
            r12_6->f28 = rax36;
            r12_6->f10 = r9_35;
            goto addr_4043c9_7;
        }
    } else {
        rdx37 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdx11) - reinterpret_cast<uint64_t>(rdi8));
        if (reinterpret_cast<uint32_t>(rdx37) <= reinterpret_cast<uint32_t>(31)) {
            addr_4043c9_7:
            return r13_4;
        } else {
            *reinterpret_cast<uint32_t*>(&rsi38) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = 0;
            r13_4->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi8) | rsi38 | 2);
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8) + 8) = reinterpret_cast<uint32_t>(rdx37) | 3;
            r9_20->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_20->f8) | 1);
            goto addr_4043c1_31;
        }
    }
    rax24 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_20) + 40);
    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_20) + 40);
    if (rax24) {
        addr_4042df_33:
        rdx39 = rax24;
    } else {
        rax24 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_20) + 32);
        if (!rax24) {
            addr_404309_35:
            if (!r10_27) {
                addr_40437b_19:
                *reinterpret_cast<uint32_t*>(&rsi40) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = 0;
                rax41 = reinterpret_cast<struct s109*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(r8_23));
                if (reinterpret_cast<uint32_t>(r11_25) > reinterpret_cast<uint32_t>(31)) {
                    r13_4->f8 = reinterpret_cast<void*>(rsi40 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8) + 8) = reinterpret_cast<uint32_t>(r11_25) | 3;
                    rax41->f8 = rax41->f8 | 1;
                    rdx37 = r11_25;
                    goto addr_4043c1_31;
                } else {
                    r13_4->f8 = reinterpret_cast<void*>(rsi40 | reinterpret_cast<uint64_t>(r8_23) | 2);
                    rax41->f8 = rax41->f8 | 1;
                    goto addr_4043c9_7;
                }
            } else {
                rdx42 = *reinterpret_cast<struct s14**>(&(r9_20 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx42 + 1) = 0;
                rcx = rdx42;
                rdx43 = reinterpret_cast<struct s110*>(reinterpret_cast<int64_t>(r12_6) + reinterpret_cast<uint32_t>(rdx42) * 8);
                if (rdx43->f258 != r9_20) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_27) + 32) != r9_20) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_27) + 40) = rax24;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r10_27) + 32) = rax24;
                    }
                    if (rax24) 
                        goto addr_40432e_43;
                    goto addr_40437b_19;
                } else {
                    rdx43->f258 = rax24;
                    if (!rax24) {
                        __asm__("rol eax, cl");
                        r12_6->f4 = r12_6->f4 & 0xfffffffe;
                        goto addr_40437b_19;
                    } else {
                        addr_40432e_43:
                        rdx44 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_20) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax24) + 48) = r10_27;
                        if (rdx44) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax24) + 32) = rdx44;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx44) + 48) = rax24;
                            goto addr_40436a_48;
                        }
                    }
                }
            }
        } else {
            rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r9_20) + 32);
            goto addr_4042df_33;
        }
    }
    addr_4042e2_50:
    rbx45 = rcx;
    rax24 = rdx39;
    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx39) + 40);
    rdx39 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx39) + 40);
    if (rdx39) 
        goto addr_4042e2_50;
    rdx39 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax24) + 32);
    rcx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax24) + 32);
    if (rdx39) 
        goto addr_4042e2_50;
    *reinterpret_cast<struct s14**>(&rbx45->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_404309_35;
    addr_4043c1_31:
    fun_4026e8(rcx, rdx37);
    goto addr_4043c9_7;
    addr_40436a_48:
    rdx46 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r9_20) + 40);
    if (rdx46) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax24) + 40) = rdx46;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdx46) + 48) = rax24;
        goto addr_40437b_19;
    }
    addr_4042b7_22:
    rdx47 = r9_20->f10;
    rdx47->f18 = rax24;
    rax24->f10 = rdx47;
    goto addr_404309_35;
}

int64_t fun_404f70(struct s14* rcx, uint64_t rdx) {
    uint64_t rcx3;

    *reinterpret_cast<int32_t*>(&rcx3) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    if (rdx < 32) {
        rcx3 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(rcx3 * 8 + 0x440448);
}

int64_t g440680;

void fun_40229c() {
    goto g440680;
}

struct s14* fun_404c04(struct s14* rcx, struct s14* rdx, ...) {
    uint64_t rax3;
    int64_t rcx4;
    int32_t* rsi5;
    int32_t edi6;

    *reinterpret_cast<int32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx) > *reinterpret_cast<int32_t*>(&rax3)) {
        *reinterpret_cast<int32_t*>(&rcx4) = static_cast<int32_t>(reinterpret_cast<uint32_t>(rdx) + rax3) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
        if (rsi5[*reinterpret_cast<int32_t*>(&rcx4) * 2] > edi6) {
            *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rcx4);
            *reinterpret_cast<int32_t*>(&rdx + 1) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax3) = static_cast<int32_t>(rcx4 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
    }
    return static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax3));
}

struct s14* fun_404dc0();

struct s14* fun_404c24(struct s14* rcx, int64_t rdx, int64_t r8, int64_t r9) {
    struct s14* rax5;

    rax5 = fun_404dc0();
    return rax5;
}

int64_t CreateFileMappingNumaW = 0x56ae;

struct s14* fun_401e9a(struct s14* rcx, int64_t rdx, int64_t r8, void* r9, int64_t a5, uint64_t a6) {
    int64_t rax7;
    int64_t rdi8;
    int64_t rsi9;
    struct s14* rax10;

    rax7 = CreateFileMappingNumaW;
    rax10 = reinterpret_cast<struct s14*>(rax7(rdi8, rsi9, rdx, rcx));
    return rax10;
}

struct s14* fun_404c31(struct s14* rcx, int64_t rdx, uint64_t r8) {
    struct s14* rax4;
    int32_t esi5;
    uint32_t edi6;
    int32_t esi7;
    uint32_t esi8;
    int64_t rdi9;
    uint32_t edi10;

    *reinterpret_cast<uint32_t*>(&rax4) = reinterpret_cast<uint32_t>(esi5 >> 1) & 1 | edi6 & 2 | reinterpret_cast<uint32_t>(esi7 >> 2) & 0x20000000 | esi8 << 5 & 0x80000000 | static_cast<uint32_t>(rdi9 * 4) & 4 | edi10 << 3 & 32;
    *reinterpret_cast<int32_t*>(&rax4 + 1) = 0;
    return rax4;
}

int64_t MapViewOfFileExNuma = 0x57cc;

struct s14* fun_401edf(struct s14* rcx, int64_t rdx, uint64_t r8, void* r9, int64_t a5, struct s14* a6) {
    int64_t rax7;
    int64_t rdi8;
    int64_t rsi9;
    struct s14* rax10;

    rax7 = MapViewOfFileExNuma;
    rax10 = reinterpret_cast<struct s14*>(rax7(rdi8, rsi9, rdx, rcx));
    return rax10;
}

int64_t CloseHandle = 0x56a0;

int32_t fun_401e81(struct s14* rcx, ...) {
    int64_t rdi2;
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(CloseHandle(rdi2));
    return eax3;
}

struct s14* fun_405092(uint64_t rcx, uint64_t rdx) {
    uint1_t df3;
    uint64_t rcx4;
    uint64_t rdi5;
    uint64_t rsi6;
    signed char* rdi7;
    int64_t rdi8;
    signed char* rsi9;
    int64_t rsi10;
    uint64_t tmp64_11;
    struct s14* rax12;

    df3 = 0;
    rcx4 = rdx;
    if (rdi5 >= rsi6) {
        rdi7 = reinterpret_cast<signed char*>(rdi8 + rcx4 - 1);
        rsi9 = reinterpret_cast<signed char*>(rsi10 + rcx4 - 1);
        df3 = 1;
    }
    tmp64_11 = 1 - 2 * static_cast<uint64_t>(df3);
    while (*reinterpret_cast<int32_t*>(&rcx4)) {
        *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(&rcx4) - 1;
        *rdi7 = *rsi9;
        rdi7 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi7) + tmp64_11);
        rsi9 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsi9) + tmp64_11);
    }
    return rax12;
}

int64_t g440670;

uint32_t fun_404dd0() {
    goto g440670;
}

uint32_t g4406c0;

int32_t fun_4018d7() {
    uint32_t eax1;

    eax1 = g4406c0;
    g443c70 = eax1;
    return 0xff;
}

struct s14* fun_404de0() {
    goto g440670;
}

struct s111 {
    signed char[16] pad16;
    int32_t f10;
};

unsigned char fun_404c6c() {
    int32_t eax1;
    int32_t edi2;
    struct s111* tmp64_3;
    int32_t edi4;
    int32_t esi5;

    eax1 = 0;
    if (edi2) {
        tmp64_3 = reinterpret_cast<struct s111*>(edi4 * 24 + reinterpret_cast<int64_t>(g443ab0));
        *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(tmp64_3->f10 == esi5);
    }
    return *reinterpret_cast<unsigned char*>(&eax1);
}

struct s112 {
    int64_t f0;
    int32_t f8;
};

int64_t fun_401e5c();

int64_t WriteFile = 0x5810;

struct s14* fun_4052d6(struct s14* rcx, int64_t rdx, uint64_t r8, void* r9);

int64_t FlushFileBuffers = 0x56f6;

struct s14* fun_401dba(int64_t rcx, int64_t rdx) {
    void* rbp3;
    struct s14** r13_4;
    struct s14** rdi5;
    struct s112* r12_6;
    struct s112* rsi7;
    int64_t rbx8;
    uint64_t r8_9;
    int64_t rdx10;
    void* r9_11;
    struct s14* rcx12;
    int32_t eax13;
    struct s14* rax14;
    int32_t v15;
    int64_t rax16;
    struct s14* rcx17;
    int32_t v18;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r13_4 = rdi5;
    r12_6 = rsi7;
    rbx8 = rdx;
    while (rbx8 && !r12_6->f8) {
        r12_6 = reinterpret_cast<struct s112*>(reinterpret_cast<int64_t>(r12_6) + 16);
        --rbx8;
    }
    fun_401e5c();
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
        rax14 = fun_4052d6(rcx12, rdx10, r8_9, r9_11);
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
        *reinterpret_cast<int32_t*>(&rax14 + 1) = 0;
    }
    return rax14;
}

uint32_t fun_404e8f(signed char* rcx, struct s75* rdx) {
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

int64_t GetLastError = 0x579c;

int64_t fun_401ec9() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(GetLastError());
    return rax1;
}

signed char* fun_4058c3(int64_t rcx) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    signed char* rax11;
    signed char* rax12;
    signed char al13;
    signed char* rax14;
    signed char* rax15;
    signed char al16;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    if (!(rcx - 1)) {
        *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
        *rax11 = reinterpret_cast<signed char>(*rax12 + al13);
        *rax14 = reinterpret_cast<signed char>(*rax15 + al16);
    }
}

int64_t ExitProcess = 0x56e8;

void fun_405211() {
    int1_t zf1;
    int64_t rcx2;
    unsigned char dil3;

    g443c74 = g443c74 | 4;
    zf1 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x405242]");
        __asm__("hlt ");
    } else {
        *reinterpret_cast<uint32_t*>(&rcx2) = dil3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
        while (1) {
            ExitProcess(rcx2);
        }
    }
}

uint64_t* fun_401158(uint64_t* rcx, uint64_t* rdx) {
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

uint32_t g443c68;

int64_t g442468;

int32_t g442488;

void fun_404491() {
    int1_t zf1;
    int1_t cf2;
    uint32_t eax3;
    void* rax4;
    uint64_t rax5;

    zf1 = g442460 == 0;
    if (zf1) {
        cf2 = g443c68 < 0x10000;
        eax3 = 0x10000;
        if (!cf2) {
            eax3 = g443c68;
        }
        *reinterpret_cast<uint32_t*>(&rax4) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        if (reinterpret_cast<uint64_t>(rax4) + 0xffffffffffffffff & reinterpret_cast<uint64_t>(rax4)) {
            rax4 = fun_401000();
        }
        g442470 = rax4;
        rax5 = g440000;
        g442468 = 0x1000;
        g442478 = reinterpret_cast<struct s14*>(0x40000);
        g442480 = 0xa00000;
        g442488 = 5;
        g442410 = 5;
        g442460 = rax5 & 0xfffffffffffffff8 | 8;
    }
    return;
}

uint32_t fun_401fe7();

uint32_t fun_401f82();

int64_t fun_401f47() {
    uint32_t eax1;
    int64_t rbx2;
    uint32_t eax3;
    int64_t rax4;

    eax1 = fun_401fe7();
    if (eax1 == 0xffffffff || (*reinterpret_cast<uint32_t*>(&rbx2) = eax1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0, eax3 = fun_401f82(), eax3 + 1 == 0)) {
        *reinterpret_cast<uint32_t*>(&rax4) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax4) = static_cast<uint32_t>(rbx2 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    }
    return rax4;
}

signed char fun_4047b0(struct s14* rcx);

int64_t fun_4022a2();

int64_t fun_401907();

signed char fun_40466a(struct s14* rcx, uint64_t rdx) {
    struct s13* r15_3;
    signed char al4;
    struct s13** rdi5;
    void* rsi6;
    void* rax7;
    struct s14** rsi8;
    uint64_t r8_9;
    struct s14* rcx10;
    uint64_t r14_11;
    int64_t rax12;
    struct s13* rax13;
    int32_t eax14;

    *reinterpret_cast<int32_t*>(&r15_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_3) + 4) = 0;
    fun_4047b0(rcx);
    al4 = fun_4047b0(rcx);
    if (al4) {
        r15_3 = *rdi5;
    }
    if (!*rdi5) {
        *reinterpret_cast<int32_t*>(&rsi6) = 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
        rax7 = reinterpret_cast<void*>(31 / rdx);
        if (reinterpret_cast<uint64_t>(rax7) >= 4) {
            rsi6 = rax7;
        }
    } else {
        rsi6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(*rsi8) >> 1) + reinterpret_cast<uint32_t>(*rsi8));
    }
    if (!*rsi8) {
        *reinterpret_cast<int32_t*>(&r8_9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
    } else {
        r8_9 = rdx * reinterpret_cast<uint32_t>(*rsi8);
        if ((rdx | reinterpret_cast<uint32_t>(*rsi8)) & 0xffffffffffff0000) {
            if (rdx != r8_9 / reinterpret_cast<uint32_t>(*rsi8)) 
                goto addr_40479a_11;
        }
    }
    rcx10 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rsi6) + reinterpret_cast<uint32_t>(rcx) + 1);
    if (!rcx10) {
        *reinterpret_cast<int32_t*>(&r14_11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_11) + 4) = 0;
        goto addr_404731_15;
    }
    r14_11 = rdx * reinterpret_cast<uint32_t>(rcx10);
    if (!((rdx | reinterpret_cast<uint32_t>(rcx10)) & 0xffffffffffff0000)) {
        addr_404731_15:
        if (rax12 = fun_4022a2(), rax12 == 0) {
            fun_4018e7();
        } else {
            if (!r15_3 && *rdi5) {
                fun_404f70(rcx10, r8_9);
            }
            rax13 = fun_4050b2(rcx10, r14_11 - r8_9);
            *rsi8 = rcx10;
            *rdi5 = rax13;
            *reinterpret_cast<signed char*>(&eax14) = 1;
            goto addr_4047a1_21;
        }
    } else {
        if (rdx != r14_11 / reinterpret_cast<uint32_t>(rcx10)) {
            addr_40479a_11:
            fun_401907();
        } else {
            goto addr_404731_15;
        }
    }
    eax14 = 0;
    addr_4047a1_21:
    return *reinterpret_cast<signed char*>(&eax14);
}

int64_t fun_4045d5();

uint32_t g4406a8;

void fun_4018ae() {
    uint32_t eax1;
    int64_t rax2;

    fun_4045d5();
    fun_405211();
    eax1 = g4406a8;
    g443c70 = eax1;
    goto rax2;
}

int32_t fun_404db0() {
    goto g440670;
}

uint32_t fun_404e4d(signed char* rcx, struct s75* rdx, uint64_t r8, ...) {
    uint32_t eax4;

    eax4 = fun_404e8f(rcx, rdx);
    return eax4;
}

struct s113 {
    signed char[16] pad16;
    int64_t f10;
};

int64_t fun_401e5c() {
    int64_t rdx1;
    int64_t rdi2;
    int64_t r8_3;
    int64_t rsi4;
    int64_t rdi5;
    int32_t ecx6;
    int32_t* rdi7;
    int32_t* rsi8;
    struct s113* rsi9;

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
            rsi9 = reinterpret_cast<struct s113*>(reinterpret_cast<int64_t>(rsi9) + 4);
        }
        rsi9->f10 = rdx1;
    }
    return r8_3;
}

struct s114 {
    signed char[20] pad20;
    int32_t f14;
};

struct s115 {
    signed char[24] pad24;
    int64_t f18;
};

struct s116 {
    signed char[32] pad32;
    int32_t f20;
};

struct s117 {
    signed char[20] pad20;
    int32_t f14;
};

struct s118 {
    signed char f0;
    signed char[15] pad16;
    uint32_t f10;
    uint32_t f14;
    signed char[24] pad48;
    int64_t f30;
};

uint32_t fun_401f82() {
    int32_t edi1;
    uint32_t eax2;
    int64_t rax3;
    struct s114* rsi4;
    struct s115* rsi5;
    signed char dil6;
    int64_t rsi7;
    struct s116* rsi8;
    uint32_t eax9;
    struct s117* rsi10;
    uint32_t edx11;
    struct s118* rsi12;
    signed char dil13;
    unsigned char dil14;

    if (edi1 == -1) {
        addr_401fdd_2:
        eax2 = fun_4020ab();
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
                goto addr_401fdd_2; else 
                goto addr_401fd7_7;
        } else {
            addr_401fd7_7:
            eax2 = dil14;
        }
    }
    return eax2;
}

struct s119 {
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

int64_t g4406b8;

int64_t g440710;

uint32_t fun_401fe7() {
    int64_t r14_1;
    signed char* r13_2;
    signed char* rdi3;
    struct s119* rbx4;
    struct s119* rsi5;
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
            goto addr_40203e_4;
        if (rbx4->f0 == 2) 
            goto addr_40203e_4;
        if (rbx4->f0 - 1) 
            goto addr_402093_7;
        if (dl6 != 10) 
            goto addr_402093_7;
        addr_40203e_4:
        rdx11 = rbx4->f30;
        if (!rdx11) {
            if (eax9 != ecx10) {
                addr_402093_7:
                *reinterpret_cast<int32_t*>(&r14_1) = *reinterpret_cast<int32_t*>(&r14_1) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_1) + 4) = 0;
                continue;
            } else {
                eax12 = fun_4020ab();
            }
        } else {
            eax12 = reinterpret_cast<uint32_t>(rdx11());
        }
        r12d13 = eax12;
        if (eax12 == 0xffffffff) {
            eax14 = fun_4020de();
            zf15 = static_cast<int64_t>(eax14) == g4406b8;
            if (!zf15) 
                goto addr_402075_14;
        }
    }
    r12d13 = static_cast<uint32_t>(r14_1 + 1);
    addr_40209f_16:
    return r12d13;
    addr_402075_14:
    eax16 = fun_4020d4();
    if (eax16) {
        rax17 = g440710;
        rbx4->f8 = *reinterpret_cast<uint32_t*>(&rax17);
        g443c70 = *reinterpret_cast<uint32_t*>(&rax17);
        goto addr_40209f_16;
    }
}

struct s120 {
    uint32_t f0;
    uint32_t f4;
    struct s14* f8;
    signed char[4] pad16;
    void* f10;
    signed char[8] pad32;
    struct s14* f20;
    signed char[4] pad40;
    struct s14* f28;
    signed char[812] pad856;
    uint64_t f358;
};

struct s121 {
    uint32_t f0;
    signed char[596] pad600;
    struct s14* f258;
};

struct s122 {
    uint32_t f0;
    signed char[596] pad600;
    struct s14* f258;
};

void fun_4026e8(struct s14* rcx, struct s14* rdx) {
    struct s120* rbx3;
    struct s120* rdi4;
    struct s14* rdi5;
    struct s14* rsi6;
    struct s14* rax7;
    struct s14* rsi8;
    void* rsi9;
    struct s14* rcx10;
    int64_t rcx11;
    struct s14* r8_12;
    struct s14* rax13;
    struct s14* rax14;
    struct s14* r8_15;
    struct s14* r8_16;
    uint64_t r12_17;
    uint32_t eax18;
    struct s14* r10_19;
    void* r8_20;
    struct s14* rax21;
    struct s14* rsi22;
    struct s14* r8_23;
    struct s14* rdx24;
    void* rdx25;
    struct s14* r9_26;
    struct s14* rcx27;
    uint64_t rcx28;
    uint64_t rsi29;
    struct s14* eax30;
    uint32_t esi31;
    uint32_t ecx32;
    int64_t rax33;
    uint64_t rcx34;
    int64_t rcx35;
    uint32_t esi36;
    struct s14* ecx37;
    uint32_t r8d38;
    int64_t r8_39;
    int64_t rax40;
    uint32_t esi41;
    struct s14* rax42;
    struct s14* rdx43;
    int64_t r9_44;
    struct s121* r9_45;
    struct s14* rcx46;
    struct s14* r11_47;
    uint32_t ecx48;
    struct s14* rsi49;
    uint64_t rcx50;
    uint64_t rax51;
    uint64_t rax52;
    struct s14* rax53;
    struct s14* rcx54;
    struct s14* rcx55;
    struct s14* r9_56;
    struct s14* rcx57;
    struct s14* r10_58;
    int64_t r9_59;
    struct s122* r9_60;
    struct s14* rcx61;
    struct s14* rcx62;
    struct s14* rcx63;

    rbx3 = rdi4;
    rdi5 = rsi6;
    rax7 = rdi5->f8;
    rsi8 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rsi9) + reinterpret_cast<uint32_t>(rdx));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 1) 
        goto addr_402874_2;
    rdi5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) - reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi5->f0)));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 3) {
        rdx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi5->f0)));
        if (rbx3->f20 == rdi5) {
            rcx10 = rsi8->f8;
            *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&rcx10) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            if (rcx11 != 3) {
                addr_402874_2:
                r8_12 = rsi8->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_12) & 2) {
                    rsi8->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(r8_12) & 0xfffffffffffffffe);
                    rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) | 1);
                    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                    goto addr_402a21_7;
                }
            } else {
                rax13 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi8->f8) & 0xfffffffffffffffe);
                rbx3->f8 = rdx;
                rsi8->f8 = rax13;
                rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s14**>(&rsi8->f0) = rdx;
                goto addr_402b5f_9;
            }
        } else {
            rax14 = rdi5->f18;
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi5->f0)) <= reinterpret_cast<uint32_t>(0xff)) {
                r8_15 = rdi5->f10;
                if (r8_15 != rax14) {
                    r8_15->f18 = rax14;
                    rax14->f10 = r8_15;
                    goto addr_402874_2;
                } else {
                    __asm__("rol eax, cl");
                    rbx3->f0 = rbx3->f0 & 0xfffffffe;
                    goto addr_402874_2;
                }
            }
            r8_16 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48);
            if (rdi5 == rax14) 
                goto addr_40278b_15; else 
                goto addr_40277d_16;
        }
    } else {
        r12_17 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rdi5->f0)) + reinterpret_cast<uint32_t>(rdx) + 32;
        eax18 = fun_40452c(rcx, rdx);
        if (!eax18) {
            rbx3->f358 = rbx3->f358 - r12_17;
            goto addr_402b5f_9;
        }
    }
    r10_19 = rbx3->f20;
    if (rbx3->f28 != rsi8) {
        if (rsi8 != r10_19) {
            r8_20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_12) & 0xfffffffffffffff8);
            rax21 = rsi8->f18;
            rdx = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(r8_20));
            if (reinterpret_cast<uint64_t>(r8_20) <= 0xf8) {
                rsi22 = rsi8->f10;
                if (rsi22 != rax21) {
                    rsi22->f18 = rax21;
                    rax21->f10 = rsi22;
                    goto addr_4029ed_24;
                } else {
                    __asm__("rol eax, cl");
                    rbx3->f0 = rbx3->f0 & 0xfffffffe;
                    goto addr_4029ed_24;
                }
            }
            r8_23 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 48);
            if (rsi8 != rax21) 
                goto addr_40292b_27;
        } else {
            rdx24 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(rbx3->f8));
            rbx3->f20 = rdi5;
            rbx3->f8 = rdx24;
            rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx24) | 1);
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rdx24)) = rdx24;
            goto addr_402b5f_9;
        }
    } else {
        rdx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(rbx3->f10));
        rbx3->f28 = rdi5;
        rbx3->f10 = rdx25;
        rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdx25) | 1);
        if (rdi5 == r10_19) {
            rbx3->f20 = reinterpret_cast<struct s14*>(0);
            rbx3->f8 = reinterpret_cast<struct s14*>(0);
            goto addr_402b5f_9;
        }
    }
    rax21 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    r9_26 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rax21) {
        addr_402953_32:
        rcx27 = rax21;
    } else {
        rax21 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 32);
        if (!rax21) {
            addr_40297d_34:
            if (!r8_23) {
                addr_4029ed_24:
                rdi5->f8 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                if (rdi5 != r10_19) {
                    addr_402a21_7:
                    rcx28 = reinterpret_cast<uint32_t>(rdx) >> 3;
                    if (reinterpret_cast<uint32_t>(rdx) > reinterpret_cast<uint32_t>(0xff)) {
                        rsi29 = reinterpret_cast<uint32_t>(rdx) >> 8;
                        eax30 = *reinterpret_cast<struct s14**>(&rsi29);
                        if (*reinterpret_cast<struct s14**>(&rsi29) && (eax30 = reinterpret_cast<struct s14*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi29)) <= 0xffff)) {
                            __asm__("bsr esi, esi");
                            esi31 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s14**>(&rsi29)) ^ 31;
                            ecx32 = 38 - esi31;
                            *reinterpret_cast<void**>(&rax33) = reinterpret_cast<void*>(31 - esi31);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = 0;
                            rcx34 = reinterpret_cast<uint32_t>(rdx) >> *reinterpret_cast<signed char*>(&ecx32);
                            *reinterpret_cast<uint32_t*>(&rcx35) = *reinterpret_cast<uint32_t*>(&rcx34) & 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = 0;
                            eax30 = reinterpret_cast<struct s14*>(static_cast<uint32_t>(rcx35 + rax33 * 2));
                        }
                        esi36 = rbx3->f4;
                        ecx37 = eax30;
                        r8d38 = 1 << *reinterpret_cast<unsigned char*>(&ecx37);
                        *reinterpret_cast<struct s14**>(&(rdi5 + 2)->f0) = eax30;
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 40) = reinterpret_cast<struct s14*>(0);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 32) = reinterpret_cast<struct s14*>(0);
                        *reinterpret_cast<struct s14**>(&r8_39) = eax30;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_39) + 4) = 0;
                        if (esi36 & r8d38) 
                            goto addr_402ae7_38; else 
                            goto addr_402acc_39;
                    } else {
                        *reinterpret_cast<int32_t*>(&rax40) = static_cast<int32_t>(rcx28 + rcx28);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = 0;
                        esi41 = 1 << *reinterpret_cast<unsigned char*>(&rcx28);
                        rax42 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx3) + rax40 * 8 + 72);
                        if (rbx3->f0 & esi41) {
                            rdx43 = rax42->f10;
                        } else {
                            rbx3->f0 = rbx3->f0 | esi41;
                            rdx43 = rax42;
                        }
                        rax42->f10 = rdi5;
                        rdx43->f18 = rdi5;
                        rdi5->f10 = rdx43;
                        rdi5->f18 = rax42;
                        goto addr_402b5f_9;
                    }
                } else {
                    rbx3->f8 = rdx;
                    goto addr_402b5f_9;
                }
            } else {
                *reinterpret_cast<struct s14**>(&r9_44) = *reinterpret_cast<struct s14**>(&(rsi8 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_44) + 4) = 0;
                r9_45 = reinterpret_cast<struct s121*>(reinterpret_cast<int64_t>(rbx3) + r9_44 * 8);
                if (r9_45->f258 != rsi8) {
                    if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_23) + 32) != rsi8) {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_23) + 40) = rax21;
                    } else {
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_23) + 32) = rax21;
                    }
                    if (rax21) 
                        goto addr_4029a2_50;
                    goto addr_4029ed_24;
                } else {
                    r9_45->f258 = rax21;
                    if (!rax21) {
                        __asm__("rol eax, cl");
                        rbx3->f4 = rbx3->f4 & 0xfffffffe;
                        goto addr_4029ed_24;
                    } else {
                        addr_4029a2_50:
                        rcx46 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 32);
                        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax21) + 48) = r8_23;
                        if (rcx46) {
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax21) + 32) = rcx46;
                            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx46) + 48) = rax21;
                            goto addr_4029dc_55;
                        }
                    }
                }
            }
        } else {
            r9_26 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rsi8) + 32);
            goto addr_402953_32;
        }
    }
    addr_402956_57:
    r11_47 = r9_26;
    rax21 = rcx27;
    r9_26 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx27) + 40);
    rcx27 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx27) + 40);
    if (rcx27) 
        goto addr_402956_57;
    rcx27 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax21) + 32);
    r9_26 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax21) + 32);
    if (rcx27) 
        goto addr_402956_57;
    *reinterpret_cast<struct s14**>(&r11_47->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_40297d_34;
    addr_402ae7_38:
    ecx48 = 0;
    rsi49 = *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(rbx3) + r8_39 * 8 + 0x258);
    if (eax30 != 31) {
        ecx48 = 57 - (reinterpret_cast<uint32_t>(eax30) >> 1);
    }
    rcx50 = reinterpret_cast<uint32_t>(rdx) << *reinterpret_cast<unsigned char*>(&ecx48);
    while ((reinterpret_cast<uint32_t>(rsi49->f8) & 0xfffffffffffffff8) != rdx) {
        rax51 = rcx50;
        rcx50 = rcx50 + rcx50;
        rax52 = (rax51 >> 63) + 4;
        if (!*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi49) + rax52 * 8)) 
            goto addr_402b31_64;
        rsi49 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi49) + rax52 * 8);
    }
    rax53 = rsi49->f10;
    rax53->f18 = rdi5;
    rsi49->f10 = rdi5;
    rdi5->f10 = rax53;
    rdi5->f18 = rsi49;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s14*>(0);
    addr_402b5f_9:
    return;
    addr_402b31_64:
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi49) + rax52 * 8) = rdi5;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48) = rsi49;
    addr_402b39_67:
    rdi5->f18 = rdi5;
    rdi5->f10 = rdi5;
    goto addr_402b5f_9;
    addr_402acc_39:
    rbx3->f4 = esi36 | r8d38;
    *reinterpret_cast<struct s14**>(reinterpret_cast<int64_t>(rbx3) + r8_39 * 8 + 0x258) = rdi5;
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx3) + r8_39 * 8 + 0x258);
    goto addr_402b39_67;
    addr_4029dc_55:
    rcx54 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rcx54) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax21) + 40) = rcx54;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx54) + 48) = rax21;
        goto addr_4029ed_24;
    }
    addr_40292b_27:
    rcx55 = rsi8->f10;
    rcx55->f18 = rax21;
    rax21->f10 = rcx55;
    goto addr_40297d_34;
    addr_40278b_15:
    rax14 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    r9_56 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rax14) {
        addr_4027a5_69:
        rcx57 = rax14;
    } else {
        rax14 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 32);
        if (!rax14) {
            addr_4027cf_71:
            if (!r8_16) 
                goto addr_402874_2; else 
                goto addr_4027d8_72;
        } else {
            r9_56 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rdi5) + 32);
            goto addr_4027a5_69;
        }
    }
    addr_4027a8_74:
    r10_58 = r9_56;
    rax14 = rcx57;
    r9_56 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rcx57) + 40);
    rcx57 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx57) + 40);
    if (rcx57) 
        goto addr_4027a8_74;
    rcx57 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax14) + 32);
    r9_56 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax14) + 32);
    if (rcx57) 
        goto addr_4027a8_74;
    *reinterpret_cast<struct s14**>(&r10_58->f0) = reinterpret_cast<struct s14*>(0);
    goto addr_4027cf_71;
    addr_4027d8_72:
    *reinterpret_cast<struct s14**>(&r9_59) = *reinterpret_cast<struct s14**>(&(rdi5 + 2)->f0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_59) + 4) = 0;
    r9_60 = reinterpret_cast<struct s122*>(reinterpret_cast<int64_t>(rbx3) + r9_59 * 8);
    if (r9_60->f258 != rdi5) {
        if (*reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_16) + 32) != rdi5) {
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_16) + 40) = rax14;
        } else {
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(r8_16) + 32) = rax14;
        }
        if (!rax14) 
            goto addr_402830_81;
    } else {
        r9_60->f258 = rax14;
        if (!rax14) {
            __asm__("rol eax, cl");
            rbx3->f4 = rbx3->f4 & 0xfffffffe;
            goto addr_402874_2;
        }
    }
    rcx61 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 32);
    *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax14) + 48) = r8_16;
    if (rcx61) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax14) + 32) = rcx61;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx61) + 48) = rax14;
    }
    rcx62 = *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rcx62) {
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax14) + 40) = rcx62;
        *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rcx62) + 48) = rax14;
        goto addr_402874_2;
    }
    addr_402830_81:
    goto addr_402874_2;
    addr_40277d_16:
    rcx63 = rdi5->f10;
    rcx63->f18 = rax14;
    rax14->f10 = rcx63;
    goto addr_4027cf_71;
}

uint32_t g440700;

struct s14* fun_4018f7() {
    uint32_t eax1;

    eax1 = g440700;
    g443c70 = eax1;
    return 0xff;
}

struct s14* g4427c0;

int32_t fun_401ef5();

uint32_t fun_404ac1(struct s14* rcx) {
    int64_t rdi2;
    int64_t rsi3;
    uint32_t r13d4;
    int64_t rdi5;
    int64_t rdi6;
    struct s14* rdx7;
    int32_t r12d8;
    struct s14* rax9;
    struct s14* r14_10;
    struct s14* rbx11;
    int1_t zf12;
    int32_t eax13;
    int32_t eax14;
    uint32_t eax15;
    struct s14* rdx16;
    uint64_t rcx17;
    struct s14* rdx18;
    void* tmp64_19;

    if (reinterpret_cast<uint64_t>(rdi2 - 1) > 0xfffffffffffffffd || !rsi3) {
        r13d4 = 0;
    } else {
        rdi5 = rdi6 >> 16;
        rdx7 = g4427c0;
        r12d8 = *reinterpret_cast<int32_t*>(&rdi5);
        r13d4 = 0;
        rax9 = fun_404c04(rcx, rdx7);
        r14_10 = rax9;
        while (rax9 && (rbx11 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax9) + 0xffffffffffffffff), r12d8 <= *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rbx11) * 8 + 0x4427cc))) {
            zf12 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
            if (!zf12) {
                eax13 = fun_401ef5();
                if (!eax13) {
                    r13d4 = 0xffffffff;
                }
                eax14 = fun_401e81(rcx);
                if (!eax14) {
                    r13d4 = 0xffffffff;
                }
            } else {
                eax15 = fun_404dd0();
                r13d4 = r13d4 | eax15;
            }
            rax9 = rbx11;
        }
        if (reinterpret_cast<uint32_t>(rax9) < reinterpret_cast<uint32_t>(r14_10)) 
            goto addr_404b80_13;
    }
    addr_404bf5_14:
    return r13d4;
    addr_404b80_13:
    rdx16 = g4427c0;
    if (reinterpret_cast<uint32_t>(rdx16) > reinterpret_cast<uint32_t>(r14_10)) {
        rcx17 = (reinterpret_cast<uint32_t>(rax9) + 1) * 8;
        fun_405092(rcx17, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx16) - reinterpret_cast<uint32_t>(r14_10)) << 3);
        rdx18 = g4427c0;
        rax9 = fun_405092(rcx17, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx18) - reinterpret_cast<uint32_t>(r14_10)) << 3);
    }
    tmp64_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint32_t>(g4427c0));
    g4427c0 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(tmp64_19) - reinterpret_cast<uint32_t>(r14_10));
    goto addr_404bf5_14;
}

uint64_t g440728;

uint32_t g440730;

uint32_t fun_40524a();

struct s14* fun_40481d() {
    uint64_t rcx1;
    uint32_t ecx2;
    void* r15_3;
    uint32_t r13d4;
    uint64_t rbx5;
    uint64_t rdi6;
    uint32_t r14d7;
    struct s14* r14_8;
    struct s14* rdx9;
    struct s14* rcx10;
    uint32_t r13d11;
    struct s14* rax12;
    struct s14* r12_13;
    struct s14* rax14;
    int32_t r10d15;
    uint64_t r8_16;
    int64_t rsi17;
    int64_t rdi18;
    uint64_t rsi19;
    uint64_t r14_20;
    uint32_t eax21;
    int64_t r8_22;
    int64_t rdx23;
    void* r9_24;
    struct s14* rcx25;
    struct s14* rax26;
    uint64_t r8_27;
    struct s14* rax28;
    struct s14* rax29;
    struct s14* rax30;
    struct s14* rdx31;
    uint64_t r13_32;
    struct s14* rax33;
    struct s14* rdx34;
    uint64_t rcx35;
    struct s14* rax36;
    struct s14* rdx37;

    rcx1 = g440728;
    ecx2 = *reinterpret_cast<uint32_t*>(&rcx1) | g440730;
    r15_3 = reinterpret_cast<void*>(0);
    r13d4 = ecx2 | 2;
    rbx5 = rdi6;
    r14d7 = g440668;
    *reinterpret_cast<uint32_t*>(&r14_8) = r14d7 & 4;
    if (!*reinterpret_cast<uint32_t*>(&r14_8) || !0) {
        rbx5 = rbx5 + 0xffff;
        *reinterpret_cast<int16_t*>(&rbx5) = 0;
    }
    rdx9 = g4427c0;
    *reinterpret_cast<uint32_t*>(&rcx10) = r13d4 & 16;
    *reinterpret_cast<int32_t*>(&rcx10 + 1) = 0;
    if (*reinterpret_cast<uint32_t*>(&rcx10)) {
        addr_4048fd_5:
        if (!reinterpret_cast<int1_t>(rdx9 == 0x12c)) {
            if (!*reinterpret_cast<uint32_t*>(&rcx10)) {
                fun_404c04(reinterpret_cast<int64_t>(r15_3) >> 16, rdx9);
            } else {
                fun_40452c(rcx10, rdx9);
            }
            r13d11 = r13d4 | 16;
            if (!*reinterpret_cast<uint32_t*>(&r14_8)) 
                goto addr_40494d_10;
        } else {
            rax12 = fun_4018e7();
            r12_13 = rax12;
            goto addr_404aa9_12;
        }
    } else {
        if (rax14 = rdx9, r15_3 = reinterpret_cast<void*>(0x200000000000), rdx9 == 0) {
            addr_4048f9_14:
            *reinterpret_cast<int16_t*>(&r15_3) = 0;
            goto addr_4048fd_5;
        } else {
            r10d15 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rdx9) * 8 + 0x4427c4);
            r8_16 = rbx5 >> 16;
            do {
                rax14 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(rax14) - 1);
                *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax14) * 8 + 0x4427cc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = 0;
                rdi18 = rsi17 + 1;
                if (rdi18 + r8_16 > 0x30000000) 
                    continue;
                if (*reinterpret_cast<int32_t*>(&rsi17) > 0x1ffffffe) 
                    goto addr_4048de_18;
            } while (rax14);
            goto addr_4048ec_20;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsi19) = r13d11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
    r14_20 = rbx5 >> 32;
    eax21 = fun_40524a();
    *reinterpret_cast<int32_t*>(&r8_22) = *reinterpret_cast<int32_t*>(&rbx5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx23) = eax21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
    if (!1) {
    }
    *reinterpret_cast<int32_t*>(&r9_24) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx25) = *reinterpret_cast<uint32_t*>(&r14_20);
    *reinterpret_cast<int32_t*>(&rcx25 + 1) = 0;
    rax26 = fun_401e9a(rcx25, rdx23, r8_22, 0, 0xff, rsi19);
    r14_8 = rax26;
    r8_27 = rsi19;
    if (rax26) 
        goto addr_4049bc_24;
    addr_4049f7_25:
    rax28 = fun_4052d6(rcx25, rdx23, r8_27, r9_24);
    addr_4049fc_26:
    r12_13 = rax28;
    r14_8 = reinterpret_cast<struct s14*>(0xffffffffffffffff);
    goto addr_404a03_27;
    addr_4049bc_24:
    rax29 = fun_404c31(rcx25, rdx23, r8_27);
    r9_24 = r15_3;
    r8_27 = rbx5;
    rax30 = fun_401edf(0, 0, r8_27, r9_24, 0xff, rax29);
    rdx23 = 0xff;
    r12_13 = rax30;
    rcx25 = rax29;
    if (rax30) {
        addr_404a03_27:
        if (r12_13 != 0xffffffffffffffff) {
            rdx31 = g4427c0;
            r13_32 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(r12_13) >> 16);
            rax33 = fun_404c04(rcx25, rdx31, rcx25, rdx31);
            rdx34 = g4427c0;
            if (reinterpret_cast<uint32_t>(rdx34) > reinterpret_cast<uint32_t>(rax33)) {
                rcx35 = (reinterpret_cast<uint32_t>(rax33) + 2) * 8;
                rax36 = fun_405092(rcx35, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx34) - reinterpret_cast<uint32_t>(rax33)) << 3);
                rdx37 = g4427c0;
                rax33 = fun_405092(rcx35, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx37) - reinterpret_cast<uint32_t>(rax36)) << 3);
            }
            g4427c0 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(g4427c0) + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax33) * 8 + 0x4427c8) = *reinterpret_cast<int32_t*>(&r13_32);
            *reinterpret_cast<struct s14**>(reinterpret_cast<uint32_t>(rax33) * 8 + 0x443128) = r14_8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax33) * 8 + 0x4427cc) = static_cast<int32_t>((rbx5 + 0xffff >> 16) + r13_32 - 1);
        }
    } else {
        fun_401e81(rcx25, rcx25);
        goto addr_4049f7_25;
    }
    addr_404aa9_12:
    return r12_13;
    addr_40494d_10:
    *reinterpret_cast<uint32_t*>(&rcx25) = r13d11;
    *reinterpret_cast<int32_t*>(&rcx25 + 1) = 0;
    rax28 = fun_404c24(rcx25, 3, -1, 0);
    goto addr_4049fc_26;
    addr_4048de_18:
    r15_3 = reinterpret_cast<void*>(rdi18 << 16);
    goto addr_4048f9_14;
    addr_4048ec_20:
    r15_3 = reinterpret_cast<void*>(static_cast<int64_t>(r10d15 + 1) << 16);
    goto addr_4048f9_14;
}

struct s123 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
};

int64_t fun_4045d5() {
    int64_t r12_1;
    int64_t rdi2;
    int64_t v3;
    int64_t rdx4;
    struct s16* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s123* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s16* r13_11;

    r12_1 = rdi2;
    v3 = rdx4;
    while (rdi5 = g4424a0, !!rdi5) {
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
            } while (r12_1 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_1 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s123*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_1) 
                goto addr_40463b_7;
            if (!r13_11) 
                goto addr_404662_9;
            rdi5 = r13_11;
        }
        rdx10();
        continue;
        addr_40463b_7:
        if (r13_11 && !0) {
            fun_40229c();
        }
        g4424a0 = r13_11;
    }
    addr_404662_9:
    return v3;
}

uint32_t g440708;

int64_t fun_401907() {
    uint32_t eax1;

    eax1 = g440708;
    g443c70 = eax1;
    return 0xff;
}

signed char fun_4047b0(struct s14* rcx) {
    int64_t rdi2;
    int64_t rbx3;
    int64_t rdi4;
    struct s14* rdx5;
    struct s14* rax6;
    uint32_t eax7;
    uint32_t eax8;

    if (reinterpret_cast<uint64_t>(0x600000000000 - rdi2) <= 0xfffffffffff) {
        return 0;
    } else {
        rbx3 = rdi4 >> 16;
        rdx5 = g4427c0;
        rax6 = fun_404c04(rcx, rdx5);
        eax7 = 0;
        if (rax6) {
            eax8 = 1;
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax6) * 8 + 0x4427c0) != *reinterpret_cast<int32_t*>(&rbx3)) {
                eax8 = 0;
                *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(rax6) + 0xffffffffffffffff) * 8 + 0x4427cc) == *reinterpret_cast<int32_t*>(&rbx3));
            }
            eax7 = eax8 & 1;
        }
        return *reinterpret_cast<signed char*>(&eax7);
    }
}

struct s14* fun_404dc0() {
    goto g440670;
}

uint32_t fun_40524a() {
    uint32_t eax1;
    uint32_t esi2;
    uint32_t edi3;
    uint32_t edi4;
    uint32_t edx5;
    uint32_t edi6;
    unsigned char dil7;
    uint32_t edi8;
    uint64_t rcx9;
    int64_t rdx10;
    int32_t esi11;
    uint64_t rsi12;
    uint32_t edi13;

    eax1 = esi2;
    if ((edi3 & 7) != 7) {
        if ((edi4 & 3) != 3) {
            edx5 = 32;
            if ((edi6 & 5) != 5 && (edx5 = 16, !(dil7 & 4))) {
                edx5 = (edi8 & 1) + 1;
            }
        } else {
            edx5 = 4;
            if (!(*reinterpret_cast<unsigned char*>(&eax1) & 1)) {
                rcx9 = g440728;
                *reinterpret_cast<uint32_t*>(&rdx10) = reinterpret_cast<uint1_t>(rcx9 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(esi11)) & rcx9));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
                edx5 = static_cast<uint32_t>(rdx10 * 4 + 4);
            }
        }
    } else {
        edx5 = 64;
        if (!(*reinterpret_cast<unsigned char*>(&eax1) & 1)) {
            rsi12 = g440728;
            if (rsi12 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax1))) & rsi12)) {
                edx5 = 0x80;
            }
        }
    }
    return (eax1 | edi13) & 0xdd000000 | edx5;
}

struct s14* fun_4052d6(struct s14* rcx, int64_t rdx, uint64_t r8, void* r9) {
    int1_t zf5;
    struct s14* rax6;
    int64_t rax7;

    zf5 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (zf5) {
        rax6 = fun_4018f7();
        return rax6;
    } else {
        rax7 = fun_401ec9();
        g443c70 = *reinterpret_cast<uint32_t*>(&rax7);
        return 0xffffffffffffffff;
    }
}

int64_t UnmapViewOfFile = 0x57fe;

int32_t fun_401ef5() {
    int64_t rdi1;
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(UnmapViewOfFile(rdi1));
    return eax2;
}

struct s14* fun_4018c7() {
    uint32_t eax1;

    eax1 = g4406a8;
    g443c70 = eax1;
    return 0xff;
}

void fun_404f9e() {
    __asm__("outsd ");
}

void fun_404fa1() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int64_t rbx4;
    int64_t v5;

    __asm__("rol ch, 0xfe");
    if (!less_or_equal1) {
        *reinterpret_cast<int64_t*>(rdi2 + rdx3 - 8) = rbx4;
        goto v5;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xeb77");
    }
}

void fun_404faf() {
    __asm__("outsd ");
}

void fun_404fb2(int64_t rcx) {
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x404f79;
}

void fun_404fb5() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int32_t ebx4;

    if (!less_or_equal1) {
        *reinterpret_cast<int32_t*>(rdi2 + rdx3 - 4) = ebx4;
        goto 0x405007;
    }
}

void fun_404fb8(int64_t rcx, uint64_t rdx) {
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
            goto addr_404f91_4;
    } else {
        __asm__("in eax, 0xef");
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
            __asm__("pxor xmm3, xmm3");
            goto 0x405008;
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
        __asm__("pxor xmm3, xmm3");
        goto 0x405008;
    } else {
        rcx9 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx9)) {
            *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
            *rdi10 = *rsi11;
            ++rdi10;
            ++rsi11;
        }
        goto 0x405008;
    }
    addr_404f91_4:
}

void fun_4050da(int64_t rcx, int64_t rdx) {
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

void fun_4050e9() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int64_t rbx4;

    if (!less_or_equal1) {
        *reinterpret_cast<int64_t*>(rdi2 + rdx3 - 8) = rbx4;
        goto 0x405131;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xf177");
    }
}

void fun_4050f4() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
    }
}

struct s124 {
    signed char[106] pad106;
    signed char f6a;
};

struct s125 {
    signed char[106] pad106;
    signed char f6a;
};

void fun_4050f7(int64_t rcx, uint64_t rdx) {
    int1_t zf3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    signed char al8;
    struct s124* rbx9;
    struct s125* rbx10;
    uint64_t rcx11;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf3)) 
        goto 0x4050be;
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

struct s126 {
    struct s126* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[40] pad73;
    unsigned char f49;
    signed char[5] pad79;
    unsigned char f4f;
    signed char[3] pad83;
    unsigned char f53;
    int32_t f54;
    unsigned char f55;
    signed char[8] pad97;
    unsigned char f61;
    signed char[2] pad100;
    int32_t f64;
    unsigned char f65;
    int32_t f67;
    unsigned char f69;
    unsigned char f6c;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    void* f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
    signed char[1] pad119;
    int32_t f77;
    signed char[959524791] pad959524914;
    uint32_t f39313032;
};

struct s127 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s128 {
    signed char[104] pad104;
    int32_t f68;
};

struct s129 {
    signed char[32] pad32;
    int32_t f20;
};

struct s130 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s131 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s132 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s133 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s134 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s135 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s136 {
    signed char[105] pad105;
    signed char f69;
};

struct s137 {
    signed char[111] pad111;
    unsigned char f6f;
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
    signed char[101] pad101;
    uint32_t f65;
};

struct s141 {
    signed char[101] pad101;
    int32_t f65;
};

struct s142 {
    signed char[101] pad101;
    int32_t f65;
};

struct s143 {
    signed char[101] pad101;
    signed char f65;
};

struct s144 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s145 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s146 {
    signed char[101] pad101;
    signed char f65;
};

struct s147 {
    signed char[101] pad101;
    void* f65;
};

int64_t g4f;

void* ge00000000000056;

struct s148 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s149 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s150 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s151 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s152 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s153 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s154 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s155 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s156 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s157 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s158 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s159 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s160 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s161 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_405340(struct s126* rcx, int16_t dx, unsigned char* r8) {
    struct s126* rdx2;
    void* rsp4;
    int1_t cf5;
    void* al6;
    void* eax7;
    void* eax8;
    void* eax9;
    void* eax10;
    struct s126* rax11;
    struct s127* rbx12;
    struct s126* rsi13;
    int1_t zf14;
    struct s128* rdi15;
    struct s126* rbp16;
    void* rsp17;
    struct s129* rbx18;
    int64_t* rsp19;
    void** rsp20;
    int64_t* rsp21;
    int64_t r11_22;
    int64_t* rsp23;
    int64_t rbx24;
    struct s126** rsp25;
    struct s126** rsp26;
    int64_t* rsp27;
    int64_t r10_28;
    void** rsp29;
    int64_t* rsp30;
    int64_t r13_31;
    int64_t* rsp32;
    int64_t r10_33;
    struct s126** rsp34;
    struct s126** rsp35;
    int64_t* rsp36;
    int64_t r11_37;
    struct s130* rbx38;
    struct s131* rbx39;
    struct s132* rdi40;
    struct s133* rdi41;
    struct s126* rsp42;
    struct s134* rdi43;
    struct s126* r12_44;
    struct s135* edi45;
    struct s136* edi46;
    struct s137* rbx47;
    struct s138* rbx48;
    uint1_t zf49;
    struct s139* rbx50;
    unsigned char* r10_51;
    signed char* r10_52;
    struct s126* tmp32_53;
    int1_t cf54;
    uint1_t zf55;
    int1_t sf56;
    struct s126* tmp32_57;
    void* tmp32_58;
    uint1_t cf59;
    struct s140* rdi60;
    struct s141* rdi61;
    struct s142* rdi62;
    struct s143* r15_63;
    void* rsp64;
    struct s144* rdi65;
    struct s145* rdi66;
    struct s146* rdi67;
    uint1_t cf68;
    uint1_t below_or_equal69;
    signed char* rdi70;
    signed char* rdi71;
    signed char bl72;
    struct s147* rdi73;
    unsigned char* rdi74;
    signed char* rdi75;
    struct s126* rsp76;
    struct s126* rdi77;
    struct s126* rsp78;
    struct s126* rsp79;
    struct s126* rdi80;
    struct s126* rsp81;
    struct s126* rdi82;
    signed char* rdi83;
    signed char* rdi84;
    signed char bl85;
    struct s126* rdi86;
    int64_t rdi87;
    void* bl88;
    void* rsp89;
    struct s148* rdi90;
    uint1_t cf91;
    uint1_t below_or_equal92;
    struct s126* rsp93;
    struct s126* rsp94;
    struct s126* r12_95;
    struct s149* rdi96;
    struct s150* rdi97;
    struct s151* rdi98;
    struct s152* rdi99;
    struct s153* rdi100;
    struct s154* rdi101;
    struct s155* rdi102;
    struct s156* rdi103;
    struct s157* rdi104;
    struct s126* rsp105;
    struct s158* rdi106;
    struct s159* rdi107;
    struct s160* rdi108;
    struct s161* rdi109;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    rsp4 = __zero_stack_offset();
    if (cf5) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s126**>(rcx) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rcx)) + reinterpret_cast<unsigned char>(al6));
        __asm__("rol byte [rcx], 0xc0");
        eax7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax8) + reinterpret_cast<int32_t>(eax9));
        eax10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax7) + reinterpret_cast<int32_t>(eax7));
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10));
        *reinterpret_cast<signed char*>(&eax10) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) - 8) - 8) - 8) - 8) - 8);
        rax11 = reinterpret_cast<struct s126*>(reinterpret_cast<int32_t>(eax10) + 0x5fc05fc + 0x5fc05fc);
        *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
        *reinterpret_cast<void**>(&rax11) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)) | rbx12->f6f);
        if (1) 
            goto addr_4053ed_5; else 
            goto addr_405380_6;
    }
    addr_4053a9_7:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) & *reinterpret_cast<unsigned char*>(&rdx2));
    addr_4053ed_5:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x74) & *reinterpret_cast<unsigned char*>(&rcx + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) = 0;
    goto addr_4053f2_9;
    addr_405380_6:
    __asm__("outsd ");
    if (0) {
        addr_4053f2_9:
    } else {
        __asm__("insb ");
        *reinterpret_cast<uint32_t*>(&rsi13) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) * 0x706f430a;
        *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
        zf14 = __undefined();
        if (!__undefined()) {
            if (!zf14) 
                goto addr_405472_12;
            if (!__intrinsic()) 
                goto addr_405408_14;
        } else {
            *reinterpret_cast<int32_t*>(&rsp4) = rdi15->f68 * 0x30322074;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp4) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rdx2 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x75) & *reinterpret_cast<unsigned char*>(&rcx));
            if (1) {
                addr_405410_16:
                if (1) {
                    goto addr_405433_18;
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rbp16) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 0x65) * 0x656c4120;
                *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                zf14 = __undefined();
                if (__undefined()) {
                    goto addr_405408_14;
                } else {
                    __asm__("outsb ");
                    if (__intrinsic()) 
                        goto addr_40540a_22; else 
                        goto addr_4053a9_7;
                }
            }
        }
    }
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp17) = reinterpret_cast<uint32_t>(rbx18->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_405498_24:
        *reinterpret_cast<uint32_t*>(&rbp16) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 32) * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
        *rsp19 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_405433_18:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) = 0;
    }
    addr_40550f_26:
    rsp20 = reinterpret_cast<void**>(rsp19 - 1);
    *reinterpret_cast<void***>(rsp20) = rsp20;
    rsp21 = reinterpret_cast<int64_t*>(rsp20 - 1);
    *rsp21 = r11_22;
    rsp23 = rsp21 - 1;
    *rsp23 = rbx24;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 79) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    rsp25 = reinterpret_cast<struct s126**>(rsp23 - 1);
    *rsp25 = rdx2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    rsp26 = rsp25 - 8;
    *rsp26 = rax11;
    rsp27 = reinterpret_cast<int64_t*>(rsp26 - 8);
    *rsp27 = r10_28;
    rsp29 = reinterpret_cast<void**>(rsp27 - 1);
    *reinterpret_cast<void***>(rsp29) = rsp29;
    rsp30 = reinterpret_cast<int64_t*>(rsp29 - 1);
    *rsp30 = r13_31;
    rsp32 = rsp30 - 1;
    *rsp32 = r10_33;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 85) & *reinterpret_cast<unsigned char*>(&rdx2));
    rsp34 = reinterpret_cast<struct s126**>(rsp32 - 1);
    *rsp34 = rdx2;
    rsp35 = rsp34 - 8;
    *rsp35 = rax11;
    rsp36 = reinterpret_cast<int64_t*>(rsp35 - 8);
    *rsp36 = r11_37;
    rbx38->f65 = reinterpret_cast<unsigned char>(rbx39->f65 & *reinterpret_cast<unsigned char*>(&rdx2));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
    rdi40->f4e = reinterpret_cast<unsigned char>(rdi41->f4e & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    rsp42 = reinterpret_cast<struct s126*>(rsp36 - 1);
    *reinterpret_cast<struct s126**>(rsp42) = rbp16;
    *reinterpret_cast<void**>(&rax11) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)) | rdi43->f65);
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) & *reinterpret_cast<unsigned char*>(&rdx2));
    }
    __asm__("outsb ");
    if (1) {
        if (!*reinterpret_cast<void**>(&rax11)) {
            __asm__("a32 outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 97) & *reinterpret_cast<unsigned char*>(&rcx));
            __asm__("outsb ");
            __asm__("outsb ");
            __asm__("outsd ");
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 97)) 
                goto addr_405684_34;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 0x6c) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp42) - 8);
                *reinterpret_cast<struct s126**>(rsp42) = r12_44;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 99) & *reinterpret_cast<unsigned char*>(&rcx));
                __asm__("outsb ");
                if (1) 
                    goto addr_4056b3_38; else 
                    goto addr_40564e_39;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x6f) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                if (1) {
                    __asm__("insb ");
                }
            }
        }
    } else {
        addr_4055a8_42:
        *reinterpret_cast<unsigned char*>(&rax11 + 1) = 0xff;
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&edi45->f69) = 0;
        if (!*reinterpret_cast<signed char*>(&edi46->f69)) {
            goto addr_40561c_44;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x69) = 0;
            if (1) {
                addr_4055d9_46:
                rbx47->f6f = reinterpret_cast<unsigned char>(rbx48->f6f & *reinterpret_cast<unsigned char*>(&rdx2));
                zf49 = reinterpret_cast<uint1_t>(rbx50->f6f == 0);
                goto addr_4055db_47;
            } else {
                if (0) {
                    addr_40562d_49:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 83) & *reinterpret_cast<unsigned char*>(&rdx2));
                    *r10_51 = reinterpret_cast<unsigned char>(*r10_52 + *reinterpret_cast<unsigned char*>(&rcx));
                    goto addr_405636_50;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_405620_52:
                        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi13) | *r8);
                        *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) ^ *reinterpret_cast<uint32_t*>(&rsi13));
                        goto addr_40562d_49;
                    } else {
                        __asm__("insd ");
                        goto addr_4055c1_54;
                    }
                }
            }
        }
    }
    tmp32_53 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rax11) + 0x74697845);
    cf54 = reinterpret_cast<unsigned char>(tmp32_53) < reinterpret_cast<unsigned char>(rax11);
    rax11 = tmp32_53;
    *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
    zf55 = reinterpret_cast<uint1_t>(rax11 == 0);
    *reinterpret_cast<struct s126**>(reinterpret_cast<unsigned char>(rsp42) - 8) = rax11;
    if (cf54) {
        if (zf55) {
            addr_4057cb_57:
            goto addr_4057cd_58;
        } else {
            __asm__("outsd ");
            __asm__("outsb ");
            if (reinterpret_cast<signed char>(rax11) < reinterpret_cast<signed char>(0)) {
            }
        }
    } else {
        *reinterpret_cast<unsigned char*>(&rsp42) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x73);
        *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
        if (!cf54) 
            goto addr_4056f6_62; else 
            goto addr_4056f6_62;
    }
    addr_4057af_63:
    goto addr_4057b0_64;
    addr_4056f6_62:
    zf55 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rcx)) & reinterpret_cast<unsigned char>(rax11)) == 0);
    sf56 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rcx)) & reinterpret_cast<unsigned char>(rax11)) < reinterpret_cast<int32_t>(0);
    __asm__("insb ");
    if (!zf55) 
        goto addr_40576f_66;
    rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp42) - 8);
    *reinterpret_cast<struct s126**>(rsp42) = reinterpret_cast<struct s126*>(0x656c6946);
    if (!zf55) {
        *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    } else {
        if (0) {
            addr_40577b_70:
            __asm__("insd ");
            goto addr_40577d_71;
        } else {
            *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
            tmp32_57 = rcx;
            rcx = rax11;
            rax11 = tmp32_57;
            *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
            tmp32_58 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi13) + 0x72)) + reinterpret_cast<unsigned char>(rax11));
            cf59 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_58) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi13) + 0x72)));
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi13) + 0x72) = tmp32_58;
            zf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi13) + 0x72) == 0);
            sf56 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi13) + 0x72)) < reinterpret_cast<signed char>(0);
            __asm__("outsb ");
            if (cf59 | zf55) 
                goto addr_40577d_71; else 
                goto addr_405714_74;
        }
    }
    *reinterpret_cast<void**>(&rax11) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)) & 2);
    zf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rax11) == 0);
    sf56 = __intrinsic();
    goto addr_40576f_66;
    addr_40577d_71:
    addr_405714_74:
    if (cf59) 
        goto addr_405785_76;
    __asm__("outsb ");
    __asm__("insd ");
    __asm__("outsb ");
    if (zf55) {
        addr_40576f_66:
        if (zf55) {
            goto addr_4057bb_79;
        } else {
            goto addr_40577b_70;
        }
    } else {
        if (zf55) {
            if (zf55) {
                addr_4057da_83:
                if (sf56) {
                    addr_40582c_84:
                } else {
                    if (zf55) {
                    }
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rbp16) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp16) + 84) * 0x657079);
                *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                goto addr_40579a_88;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rbp16) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rsi13) + 0x67) * 0xbd005773);
            *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
            rdi60->f65 = rdi61->f65 + reinterpret_cast<unsigned char>(rax11);
            if (rdi62->f65) {
                __asm__("outsd ");
                __asm__("insd ");
                __asm__("insd ");
            }
        }
    }
    addr_40584d_91:
    *reinterpret_cast<struct s126**>(reinterpret_cast<unsigned char>(rsp42) - 8) = rsi13;
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    __asm__("enter 0x56, 0x0");
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    addr_40579a_88:
    if (!(*reinterpret_cast<signed char*>(&r8) + r15_63->f65)) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<uint32_t*>(&rsp64) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x73) * 0x69f0000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp64) + 4) = 0;
        *reinterpret_cast<struct s126**>(reinterpret_cast<int64_t>(rsp64) - 8) = rbp16;
        __asm__("outsb ");
        __asm__("insd ");
    }
    addr_405684_34:
    if (!0) {
        rdi65->f65 = reinterpret_cast<unsigned char>(rdi66->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
        zf55 = reinterpret_cast<uint1_t>(rdi67->f65 == 0);
        sf56 = __intrinsic();
        if (!0) {
        }
    }
    addr_4056b3_38:
    addr_40564e_39:
    cf68 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rdx2)) < reinterpret_cast<unsigned char>(rcx));
    below_or_equal69 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rdx2)) <= reinterpret_cast<unsigned char>(rcx));
    *reinterpret_cast<struct s126**>(rdx2) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rdx2)) - reinterpret_cast<unsigned char>(rcx));
    zf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s126**>(rdx2) == 0);
    sf56 = reinterpret_cast<signed char>(*reinterpret_cast<struct s126**>(rdx2)) < reinterpret_cast<signed char>(0);
    __asm__("outsd ");
    if (__intrinsic()) 
        goto addr_4056cd_101;
    if (cf68) {
        __asm__("outsb ");
        if (!zf55) {
            goto addr_405732_105;
        }
    } else {
        rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp42) - 8);
        *reinterpret_cast<struct s126**>(rsp42) = reinterpret_cast<struct s126*>(0x30322074);
    }
    addr_405657_108:
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp16) + 0x39313032) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp16) + 0x39313032) ^ *reinterpret_cast<uint32_t*>(&rsi13);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 97) & *reinterpret_cast<unsigned char*>(&rcx));
    cf68 = 0;
    zf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 97) == 0);
    sf56 = __intrinsic();
    below_or_equal69 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf55));
    if (!0) {
        __asm__("outsd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 97) & *reinterpret_cast<unsigned char*>(&rdx2));
        __asm__("insb ");
    }
    if (0) {
        addr_405732_105:
    } else {
        addr_4056cd_101:
    }
    if (zf55) {
        __asm__("outsb ");
        if (!sf56) {
            addr_4057cd_58:
            if (__intrinsic()) {
                addr_405828_114:
                goto addr_40582b_115;
            } else {
                *reinterpret_cast<unsigned char*>(&rsp42) = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp16) + 0x77) * 0x6946664f);
                *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
                sf56 = __undefined();
                zf55 = __undefined();
                __asm__("insb ");
                goto addr_4057da_83;
            }
        } else {
            addr_405785_76:
        }
    } else {
        __asm__("outsb ");
        if (below_or_equal69) {
            __asm__("outsd ");
        } else {
            if (cf68) {
                addr_4057b0_64:
                if (zf55) {
                    __asm__("insb ");
                    *rdi70 = reinterpret_cast<signed char>(*rdi71 + bl72);
                } else {
                    if (!zf55) {
                    }
                }
            } else {
                __asm__("outsb ");
                __asm__("insd ");
                __asm__("outsb ");
                if (zf55) 
                    goto addr_40579a_88; else 
                    goto addr_405747_126;
            }
        }
    }
    *reinterpret_cast<unsigned char*>(&rax11 + 1) = reinterpret_cast<unsigned char>(0xff + *reinterpret_cast<unsigned char*>(&rdx2));
    *reinterpret_cast<void**>(&rax11) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)) + reinterpret_cast<unsigned char>(rdi73->f65));
    zf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rax11) == 0);
    goto addr_4057af_63;
    addr_405818_128:
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    goto addr_405828_114;
    addr_405747_126:
    if (zf55) {
        addr_4057bb_79:
        __asm__("in eax, 0x2");
        if (zf55) {
            if (zf55) {
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                rdi74[reinterpret_cast<unsigned char>(rdx2) * 2] = reinterpret_cast<unsigned char>(rdi75[reinterpret_cast<unsigned char>(rdx2) * 2] + 0xff);
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                rsp76 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp42) - 8);
                *reinterpret_cast<struct s126**>(rsp76) = rdi77;
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                rsp78 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp76) - 8);
                *reinterpret_cast<struct s126**>(rsp78) = rax11;
                rsp79 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp78) - 8);
                *reinterpret_cast<struct s126**>(rsp79) = rdi80;
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                __asm__("outsb ");
                rsp81 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp79) - 8);
                *reinterpret_cast<struct s126**>(rsp81) = rdi82;
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                rdi83[reinterpret_cast<unsigned char>(rdx2) * 2] = reinterpret_cast<signed char>(rdi84[reinterpret_cast<unsigned char>(rdx2) * 2] + bl85);
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                __asm__("lodsb ");
                *reinterpret_cast<struct s126**>(reinterpret_cast<unsigned char>(rsp81) - 8) = rdi86;
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<unsigned char*>(&rax11 + 1) = reinterpret_cast<unsigned char>(0xff + *reinterpret_cast<unsigned char*>(&rcx));
                g4f = rdi87;
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
            } else {
                goto addr_405818_128;
            }
        } else {
            if (!sf56) {
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                *reinterpret_cast<void**>(&rax11) = ge00000000000056;
                goto addr_40584d_91;
            } else {
                if (zf55) {
                    addr_40582b_115:
                    *reinterpret_cast<struct s126**>(rax11) = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rax11)) + reinterpret_cast<unsigned char>(bl88));
                    goto addr_40582c_84;
                } else {
                    __asm__("insd ");
                    __asm__("outsb ");
                    __asm__("outsw ");
                    goto addr_4057cb_57;
                }
            }
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rbp16) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rsi13) + 0x67) * 0x5773);
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        if (reinterpret_cast<unsigned char>(rax11) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rdx2))) {
            __asm__("insd ");
        }
    }
    addr_40561c_44:
    __asm__("outsd ");
    __asm__("outsb ");
    *reinterpret_cast<void**>(&rax11) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)) - 32);
    goto addr_405620_52;
    addr_4055db_47:
    if (!zf49) {
    }
    addr_405636_50:
    __asm__("insb ");
    addr_4055c1_54:
    *reinterpret_cast<uint32_t*>(&rsp89) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 32) * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp89) + 4) = 0;
    rdi90->f72 = 0;
    *reinterpret_cast<uint32_t*>(&rsi13) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 32) * 0x74206f74;
    *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
    rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<int64_t>(rsp89) - 8);
    *reinterpret_cast<struct s126**>(rsp42) = reinterpret_cast<struct s126*>(0x72462065);
    goto addr_4055d9_46;
    addr_405408_14:
    if (zf14) {
        addr_405472_12:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 99) & *reinterpret_cast<unsigned char*>(&rcx));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf91 = 0;
            goto addr_4054e9_146;
        } else {
            *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s126**>(rdx2)));
            cf91 = 0;
            zf49 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
            below_or_equal92 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf49));
            rsp93 = reinterpret_cast<struct s126*>(reinterpret_cast<int64_t>(rsp4) - 8);
            *reinterpret_cast<struct s126**>(rsp93) = rsp93;
            rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp93) - 8);
            *reinterpret_cast<struct s126**>(rsp42) = reinterpret_cast<struct s126*>(0x70207369);
            if (0) {
                goto addr_4054f5_149;
            }
        }
    } else {
        addr_40540a_22:
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp16) + 0x72) = reinterpret_cast<void*>(0);
        __asm__("insd ");
        goto addr_405410_16;
    }
    addr_405485_150:
    if (0) {
        addr_4054e9_146:
        if (0) 
            goto addr_405558_151;
    } else {
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) & *reinterpret_cast<unsigned char*>(&rcx + 1));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x73)) {
            addr_405504_153:
            rsp94 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s126**>(rsp94) = r12_95;
            rcx = *reinterpret_cast<struct s126**>(rsp94);
            rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rsp94) + 8);
            rdi96->f72 = reinterpret_cast<unsigned char>(rdi97->f72 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 73) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
            goto addr_40550f_26;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp17) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x75) * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
            goto addr_405498_24;
        }
    }
    *reinterpret_cast<unsigned char*>(&rsp42) = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp16) + 100) * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
    cf91 = __intrinsic();
    zf49 = __undefined();
    below_or_equal92 = reinterpret_cast<uint1_t>(cf91 | zf49);
    if (cf91) {
        if (cf91) {
            addr_405578_157:
            *reinterpret_cast<unsigned char*>(&rsp42) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x69);
            *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
            if (below_or_equal92) {
                *reinterpret_cast<void**>(&rax11) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi13) + 0x6f));
                if (*reinterpret_cast<void**>(&rax11)) 
                    goto addr_405657_108;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = 0;
                *reinterpret_cast<uint32_t*>(&rbp16) = rdi98->f70;
                *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_4055a8_42;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
                    rdi99->f4e = reinterpret_cast<unsigned char>(rdi100->f4e & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                    *reinterpret_cast<struct s126**>(reinterpret_cast<unsigned char>(rsp42) - 8) = rbp16;
                    rdi101->f65 = reinterpret_cast<unsigned char>(rdi102->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
                    __asm__("outsb ");
                    if (0) 
                        goto addr_4055f9_164; else 
                        goto addr_405598_165;
                }
            }
        } else {
            addr_405558_151:
            __asm__("insd ");
            __asm__("outsd ");
            if (!cf91) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp16) + 0x74) = 0;
            }
        }
    } else {
        addr_4054f5_149:
        __asm__("outsb ");
        if (zf49) {
            if (!below_or_equal92) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x65) = 0;
                below_or_equal92 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x65) == 0)));
                goto addr_405578_157;
            }
        } else {
            rdi103->f66 = reinterpret_cast<unsigned char>(rdi104->f66 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp105 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s126**>(rsp105) = rdx2;
            rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<unsigned char>(rsp105) - 8);
            *reinterpret_cast<struct s126**>(rsp42) = rsp42;
            goto addr_405504_153;
        }
    }
    addr_4055f9_164:
    addr_405598_165:
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) & *reinterpret_cast<unsigned char*>(&rdx2));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
    rdi106->f4e = reinterpret_cast<unsigned char>(rdi107->f4e & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    rsp42 = reinterpret_cast<struct s126*>(reinterpret_cast<int64_t>(rsp4) - 8);
    *reinterpret_cast<struct s126**>(rsp42) = rbp16;
    rdi108->f65 = reinterpret_cast<unsigned char>(rdi109->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11)));
    cf91 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_405423_173;
    goto addr_405485_150;
    addr_405423_173:
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 0x75) & *reinterpret_cast<unsigned char*>(&rdx2));
}

struct s162 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s163 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s164 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s165 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s166 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s167 {
    signed char[111] pad111;
    signed char f6f;
};

struct s168 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s169 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s170 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s171 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s172 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s173 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_4053ad(struct s162* rcx, int16_t dx) {
    struct s163* rdx2;
    int1_t cf3;
    int1_t cf4;
    int1_t zf5;
    int1_t sf6;
    struct s164* rsi7;
    struct s165* rsi8;
    unsigned char ah9;
    struct s166* rbx10;
    int1_t zf11;
    struct s167* rbx12;
    struct s168* rdi13;
    struct s169* rdi14;
    void* rsp15;
    int1_t zf16;
    void** rax17;
    void** rax18;
    struct s170* rsi19;
    struct s171* rsi20;
    unsigned char ah21;
    struct s172* rbp22;
    struct s173* rbp23;
    unsigned char ah24;
    void* rax25;
    int64_t rbp26;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    if (cf3) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf4) {
        goto addr_4053d4_4;
    }
    if (!zf5) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf6) 
        goto addr_4053b9_7;
    addr_4053c5_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_405452_12;
    } else {
        addr_4053d4_4:
    }
    rdi13->f41 = reinterpret_cast<unsigned char>(rdi14->f41 & *reinterpret_cast<unsigned char*>(&rdx2));
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf16 = *reinterpret_cast<void**>(&rsp15) == *rax17;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp15)) <= reinterpret_cast<uint32_t>(*rax18)) 
        goto addr_4054d9_15;
    addr_4054d9_15:
    if (zf16) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf16) 
        goto addr_4054de_18;
    rsi19->f6f = reinterpret_cast<unsigned char>(rsi20->f6f & ah21);
    addr_4054de_18:
    rbp22->f76 = reinterpret_cast<unsigned char>(rbp23->f76 & ah24);
    addr_405452_12:
    addr_4053b9_7:
    *reinterpret_cast<unsigned char*>(&rdx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax25) + rbp26 * 2 + 0x69));
    if (1) {
        rdx2->f65 = 0;
        if (__undefined()) 
            goto addr_405452_12; else 
            goto "???";
    } else {
        if (0) 
            goto " as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("outsd ");
        if (0) 
            goto "ublic License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
            goto addr_4053c5_9;
    }
}

struct s174 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s175 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s176 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s177 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_4053d5(int64_t rcx, unsigned char dl) {
    void* rsp3;
    int1_t cf4;
    int1_t sf5;
    int1_t zf6;
    void** rax7;
    void** rax8;
    struct s174* rsi9;
    struct s175* rsi10;
    unsigned char al11;
    struct s176* rbx12;
    struct s177* rbx13;

    rsp3 = __zero_stack_offset();
    if (cf4) {
        if (!sf5) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf6) 
            goto addr_405446_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp3)) < reinterpret_cast<int32_t>(*rax7)) {
            if (*reinterpret_cast<void**>(&rsp3) != *rax8) {
            }
        }
    }
    addr_405446_4:
    rsi9->f72 = reinterpret_cast<unsigned char>(rsi10->f72 & al11);
    rbx12->f6f = reinterpret_cast<unsigned char>(rbx13->f6f & dl);
}

void fun_4053f5() {
    int1_t cf1;

    __asm__("outsd ");
    if (cf1) 
        goto " GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insd ");
    __asm__("outsd ");
}

void fun_40543a() {
    __asm__("insb ");
}

struct s178 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s179 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s180 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s181 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_405453(struct s178* rcx) {
    int1_t cf2;
    struct s179* rsi3;
    struct s180* rsi4;
    unsigned char al5;
    struct s181* rsi6;
    unsigned char al7;

    if (!cf2) {
        rsi3->f6f = reinterpret_cast<unsigned char>(rsi4->f6f & al5);
        if (rsi6->f6f) {
            rcx->f4e = reinterpret_cast<unsigned char>(rcx->f4e & al7);
        }
    }
}

struct s182 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_40545c() {
    void* rsp1;
    int1_t zf2;
    void** rax3;
    void** rax4;
    int64_t rbp5;
    struct s182* rdi6;
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

void fun_4054a8() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s183 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s184 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s185 {
    signed char[115] pad115;
    signed char f73;
};

void fun_4054b3() {
    struct s183* rbp1;
    struct s184* rbp2;
    unsigned char dh3;
    struct s185* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_4054be() {
    int1_t zf1;

    if (!zf1) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_405548() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s186 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s187 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_405561() {
    struct s186* rax1;
    struct s187* rax2;
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

void fun_40559d() {
    __asm__("insb ");
}

void fun_4055e2() {
    int1_t cf1;

    if (cf1) 
        goto "cense)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com"; else 
        goto "???";
}

void fun_4055eb() {
    int1_t zf1;

    if (zf1) 
        goto "ght 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    __asm__("outsd ");
    __asm__("outsb ");
    __asm__("outsb ");
}

struct s188 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s189 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_4055fd(int64_t rcx) {
    struct s188* rsi2;
    struct s189* rsi3;
    unsigned char al4;

    __asm__("outsb ");
    if (__undefined()) 
        goto "sign Hannover, Germany\ninfo@paland.com";
    if (__undefined()) 
        goto "land Printf (MIT License)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    rsi2->f69 = reinterpret_cast<unsigned char>(rsi3->f69 & al4);
}

struct s190 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s191 {
    signed char[114] pad114;
    unsigned char f72;
};

void fun_405638() {
    struct s190* rax1;
    struct s191* rax2;
    unsigned char dl3;

    __asm__("outsb ");
    rax1->f72 = reinterpret_cast<unsigned char>(rax2->f72 & dl3);
}

struct s192 {
    signed char[65] pad65;
    unsigned char f41;
};

void fun_40566e() {
    unsigned char dl1;
    struct s192* rax2;
    signed char* rdi3;
    signed char* rdi4;
    signed char bh5;

    __asm__("outsb ");
    if (!1) 
        goto "???";
    if (!(dl1 | rax2->f41)) 
        goto "leInformationByHandle";
    __asm__("outsd ");
    __asm__("insb ");
    *rdi3 = reinterpret_cast<signed char>(*rdi4 + bh5);
}

void fun_40568c() {
    int1_t sf1;
    unsigned char tmp8_2;
    signed char* rax3;
    signed char al4;
    int1_t cf5;
    unsigned char* rax6;
    unsigned char* rax7;
    signed char* rax8;
    signed char al9;

    __asm__("outsb ");
    if (!sf1) {
        tmp8_2 = reinterpret_cast<unsigned char>(*rax3 + al4);
        cf5 = tmp8_2 < *rax6;
        *rax7 = tmp8_2;
        *rax8 = al9;
        __asm__("insb ");
        __asm__("outsd ");
        if (!cf5) 
            goto "FreeEnvironmentStringsW";
    }
}

void fun_405698() {
    __asm__("outsb ");
}

void fun_4056a9() {
    int64_t rsi1;
    int64_t rsi2;
    signed char bh3;

    __asm__("outsb ");
    __asm__("insb ");
    *reinterpret_cast<signed char*>(rsi1 + 0x65724300) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rsi2 + 0x65724300) + bh3);
}

void fun_4056b4() {
    int1_t zf1;

    if (zf1) {
    }
}

void fun_4056c5() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    __asm__("rol byte [rax], 0x43");
}

void fun_4056ce() {
    int1_t zf1;

    if (zf1) 
        goto 0x405735;
    if (__intrinsic() | __undefined()) 
        goto "tStringsW";
    __asm__("outsd ");
    __asm__("outsd ");
    __asm__("outsb ");
}

void fun_40572e() {
    __asm__("outsb ");
}

void fun_405768() {
    __asm__("outsb ");
    __asm__("insb ");
}

void fun_40577e() {
    int1_t zf1;

    if (!zf1) {
        __asm__("outsd ");
    }
}

void fun_405786() {
    int1_t sf1;
    signed char* rbx2;
    signed char* rbx3;
    signed char ch4;

    __asm__("outsb ");
    __asm__("insb ");
    *rbx2 = reinterpret_cast<signed char>(*rbx3 + ch4);
}

void fun_4057a3() {
    int1_t cf1;
    int1_t cf2;

    if (!cf1) 
        goto "le";
    if (cf2) 
        goto "e"; else 
        goto "???";
}

void fun_4057b6() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    __asm__("outsb ");
    __asm__("insb ");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_4057e1() {
}

void fun_4057eb() {
    int1_t zf1;
    int1_t zf2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;

    if (!zf1) 
        goto "V";
    if (!zf2) 
        goto "???";
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
}

void fun_405804() {
    int1_t of1;

    if (of1) 
        goto 0x40585c; else 
        goto "???";
}

void fun_405812() {
    int1_t cf1;

    if (cf1) 
        goto 0x40587e; else 
        goto "???";
}

void fun_40582e() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
}

void fun_405861(int64_t rcx, int16_t dx) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;
    signed char* rax12;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
    rax12 = fun_4058c3(rcx);
    *rax12 = reinterpret_cast<signed char>(*rax12 + *reinterpret_cast<signed char*>(&rax12));
    *rax12 = reinterpret_cast<signed char>(*rax12 + *reinterpret_cast<signed char*>(&rax12));
    *rax12 = reinterpret_cast<signed char>(*rax12 + *reinterpret_cast<signed char*>(&rax12));
    *rax12 = reinterpret_cast<signed char>(*rax12 + *reinterpret_cast<signed char*>(&rax12));
    *rax12 = reinterpret_cast<signed char>(*rax12 + *reinterpret_cast<signed char*>(&rax12));
}

void fun_4058d1(signed char* rcx, signed char dl) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    unsigned char tmp8_9;
    signed char* rax10;
    signed char al11;
    uint1_t cf12;
    unsigned char* rax13;
    unsigned char* rax14;
    unsigned char* rax15;
    signed char* rax16;
    signed char bl17;
    signed char* rax18;
    signed char* rax19;
    signed char al20;
    signed char* rax21;
    signed char* rax22;
    signed char al23;
    signed char* rax24;
    signed char* rax25;
    signed char al26;
    signed char* rax27;
    signed char* rax28;
    signed char al29;
    signed char* rax30;
    signed char* rax31;
    signed char al32;
    signed char* rax33;
    signed char* rax34;
    signed char al35;
    int64_t rax36;
    int64_t rax37;
    signed char* rax38;
    signed char* rax39;
    signed char al40;
    signed char al41;
    signed char al42;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    tmp8_9 = reinterpret_cast<unsigned char>(*rax10 + al11);
    cf12 = reinterpret_cast<uint1_t>(tmp8_9 < *rax13);
    *rax14 = tmp8_9;
    *rax15 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rax16 + bl17) + cf12);
    *rax18 = reinterpret_cast<signed char>(*rax19 + al20);
    *rax21 = reinterpret_cast<signed char>(*rax22 + al23);
    *rax24 = reinterpret_cast<signed char>(*rax25 + al26);
    *rax27 = reinterpret_cast<signed char>(*rax28 + al29);
    *rax30 = reinterpret_cast<signed char>(*rax31 + al32);
    *rax33 = reinterpret_cast<signed char>(*rax34 + al35);
    *reinterpret_cast<signed char*>(rax36 + 0x801f0f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax37 + 0x801f0f) + dl);
    *rax38 = reinterpret_cast<signed char>(*rax39 + al40);
    *rcx = reinterpret_cast<signed char>(*rcx + al41);
    *rcx = reinterpret_cast<signed char>(*rcx + al42);
}

int32_t g21417d0f;

void fun_4058f6(int32_t* rcx, int32_t* rdx) {
    int32_t* rdi3;
    int32_t* rdi4;
    int32_t tmp32_5;

    *rcx = *rcx + *reinterpret_cast<int32_t*>(&rcx);
    *rdi3 = *rdi4 + *reinterpret_cast<int32_t*>(&rcx);
    *rdx = *rdx + *reinterpret_cast<int32_t*>(&rdx);
    tmp32_5 = g21417d0f + *reinterpret_cast<int32_t*>(&rdx);
    g21417d0f = tmp32_5;
}

void fun_405903() {
    int32_t* rbx1;
    int32_t* rbx2;
    int32_t ebx3;

    *rbx1 = *rbx2 + ebx3;
}

void fun_40590b() {
}

void fun_405912(int64_t rcx, int32_t edx) {
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

void fun_405927() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
}

struct s193 {
    signed char f0;
    signed char[31917183] pad31917184;
    unsigned char f1e70480;
};

void fun_40592d(unsigned char cl, unsigned char* rdx) {
    unsigned char* rsi3;
    signed char* rsi4;
    signed char al5;
    uint1_t cf6;
    uint32_t* rax7;
    signed char al8;
    uint32_t tmp32_9;
    int1_t cf10;
    int32_t eax11;
    int32_t ebp12;
    signed char tmp8_13;
    int64_t rsi14;
    int64_t rsi15;
    struct s193* rax16;
    unsigned char* rsi17;
    unsigned char* rsi18;

    *rsi3 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi4 + al5) + cf6);
    *reinterpret_cast<signed char*>(&rax7) = reinterpret_cast<signed char>(al8 + 16);
    tmp32_9 = *rax7 - 0x5e7c0000;
    cf10 = tmp32_9 < *rax7;
    *rax7 = tmp32_9;
    __asm__("wait ");
    eax11 = ebp12;
    tmp8_13 = *reinterpret_cast<signed char*>(rsi14 + 0x72728686);
    *reinterpret_cast<signed char*>(rsi15 + 0x72728686) = *reinterpret_cast<signed char*>(&eax11);
    if (!cf10) {
        if (!cf10) {
            if (cf10) {
                *reinterpret_cast<signed char*>(&eax11) = reinterpret_cast<signed char>(tmp8_13 + 22);
                *reinterpret_cast<int32_t*>(&rax16) = eax11 + 0x2241815;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
                *rsi17 = reinterpret_cast<unsigned char>(*rsi18 | cl);
                __asm__("retf ");
                rax16->f0 = reinterpret_cast<signed char>(rax16->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax16) + 1));
                *rdx = reinterpret_cast<unsigned char>(*rdx + *reinterpret_cast<unsigned char*>(&rax16));
                rax16->f1e70480 = reinterpret_cast<unsigned char>(rax16->f1e70480 & *reinterpret_cast<unsigned char*>(&rax16));
            }
        }
    }
}

struct s194 {
    unsigned char f0;
    signed char[2140930311] pad2140930312;
    signed char f7f9c0108;
};

int32_t gffffffff800302d4;

void fun_405950(int64_t rcx, signed char* rdx) {
    int64_t rbp3;
    int64_t rbp4;
    signed char ah5;
    int64_t rax6;
    int16_t ax7;
    uint32_t* rsi8;
    uint32_t* rsi9;
    struct s194* rax10;
    unsigned char* rsi11;
    unsigned char* rsi12;
    uint32_t* rbx13;
    int32_t* rbx14;
    int32_t tmp32_15;

    *reinterpret_cast<signed char*>(rbp3 - 96) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp4 - 96) + ah5);
    *reinterpret_cast<uint32_t*>(&rax6) = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax7));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    *reinterpret_cast<signed char*>(rax6 + 0x7e77f9c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax6 + 0x7e77f9c) + *reinterpret_cast<signed char*>(&rdx));
    *rsi8 = *rsi9 | *reinterpret_cast<uint32_t*>(&rcx);
    *reinterpret_cast<signed char*>(&rax6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax6) + 22);
    *reinterpret_cast<uint32_t*>(&rax10) = *reinterpret_cast<uint32_t*>(&rax6) + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    rsi11[rcx * 8] = reinterpret_cast<unsigned char>(rsi12[rcx * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1) + *reinterpret_cast<signed char*>(&rdx));
    *reinterpret_cast<unsigned char*>(rax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax10) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1));
    *rbx13 = *rbx14 + *reinterpret_cast<uint32_t*>(&rax10);
    *reinterpret_cast<unsigned char*>(rax10) = 0;
    tmp32_15 = gffffffff800302d4 + *reinterpret_cast<int32_t*>(&rdx);
    gffffffff800302d4 = tmp32_15;
    *reinterpret_cast<signed char*>(&rax10) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax10)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10) * 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10) * 4) + 16);
    *rdx = reinterpret_cast<signed char>(*rdx + *reinterpret_cast<signed char*>(&rax10));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + 0x7f9c0108) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + 0x7f9c0108) + *reinterpret_cast<signed char*>(&rax10));
}

void fun_4059b9(uint32_t ecx) {
    uint32_t* rsi2;
    uint32_t* rsi3;

    *rsi2 = *rsi3 | ecx;
}

void fun_4059d3(signed char* rcx) {
    signed char* rax2;
    int32_t eax3;
    int64_t rax4;

    *reinterpret_cast<int32_t*>(&rax2) = eax3 + *reinterpret_cast<int32_t*>(rax4 + 0xc02080);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    *rcx = reinterpret_cast<signed char>(static_cast<int32_t>(*rcx));
    *reinterpret_cast<signed char*>(&rax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax2) + *rax2);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) - 100);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) == 0))) 
        goto 0x4059cb;
}

struct s195 {
    unsigned char f0;
    signed char[75498623] pad75498624;
    int32_t f4800480;
};

void fun_4059e5(int64_t rcx, int32_t* rdx) {
    uint32_t* rsi3;
    uint32_t* rsi4;
    int32_t eax5;
    signed char al6;
    struct s195* rax7;
    unsigned char* rsi8;
    unsigned char* rsi9;
    uint32_t* rbx10;
    signed char bh11;
    int64_t rdi12;
    int64_t rdi13;
    uint32_t tmp32_14;
    uint1_t cf15;
    uint1_t less_or_equal16;

    *rsi3 = *rsi4 | *reinterpret_cast<uint32_t*>(&rcx);
    *reinterpret_cast<signed char*>(&eax5) = reinterpret_cast<signed char>(al6 + 22);
    *reinterpret_cast<uint32_t*>(&rax7) = reinterpret_cast<uint32_t>(eax5 + 0x23f1815);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rsi8[rcx * 8] = reinterpret_cast<unsigned char>(rsi9[rcx * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx10) + 1) = reinterpret_cast<signed char>(bh11 + *reinterpret_cast<signed char*>(&rdx));
    rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax7) + 1));
    *rbx10 = *rbx10 + *reinterpret_cast<uint32_t*>(&rax7);
    do {
        rax7->f0 = 0;
        rdx[rdi12 * 2] = rdx[rdi13 * 2] + *reinterpret_cast<int32_t*>(&rdx);
        rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1));
        tmp32_14 = *reinterpret_cast<uint32_t*>(&rax7) + rax7->f4800480;
        cf15 = reinterpret_cast<uint1_t>(tmp32_14 < *reinterpret_cast<uint32_t*>(&rax7));
        *reinterpret_cast<uint32_t*>(&rax7) = tmp32_14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        rax7->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(rax7->f0)) + cf15);
        *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax7) + rax7->f0);
        rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 | 1);
        less_or_equal16 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(rax7->f0 == 0));
    } while (!less_or_equal16);
}

void fun_405a12() {
    __asm__("out 0x3, eax");
}

void fun_405a16(int16_t cx, signed char dl) {
    int64_t rbx3;
    signed char bh4;

    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx3) + 1) = reinterpret_cast<signed char>(bh4 + dl);
    *reinterpret_cast<unsigned char*>(rbx3 - 0x30fd2ffe) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rbx3 - 0x30fd2ffe) | *reinterpret_cast<unsigned char*>(&cx));
}

struct s196 {
    signed char[127] pad127;
    signed char f7f;
};

struct s197 {
    signed char[127] pad127;
    signed char f7f;
};

struct s198 {
    signed char[127] pad127;
    signed char f7f;
};

struct s199 {
    signed char[127] pad127;
    signed char f7f;
};

void fun_405a21() {
    signed char* rdx1;
    signed char* rdx2;
    signed char al3;
    int64_t rdi4;
    int64_t rdi5;
    int32_t edi6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char ah12;
    struct s196* rdi13;
    struct s197* rdi14;
    signed char bh15;
    struct s198* rdi16;
    struct s199* rdi17;
    int64_t rax18;
    int64_t rax19;
    int64_t rax20;
    int64_t rax21;
    signed char al22;
    unsigned char* rax23;
    unsigned char* rax24;
    int64_t rax25;
    int64_t rax26;
    signed char* rax27;
    int64_t rax28;
    signed char* rax29;
    int64_t rax30;
    int64_t rax31;
    int64_t rax32;

    *rdx1 = reinterpret_cast<signed char>(*rdx2 + al3);
    __asm__("rol dword [rcx], 0xe");
    *reinterpret_cast<int32_t*>(rdi4 - 19) = *reinterpret_cast<int32_t*>(rdi5 - 19) + edi6;
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + ah12);
    rdi13->f7f = reinterpret_cast<signed char>(rdi14->f7f + bh15);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rdi16->f7f < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rdi17->f7f == 0))) {
        *reinterpret_cast<signed char*>(rax18 - 0x7ff37f80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax19 - 0x7ff37f80) - 0x80);
        *reinterpret_cast<signed char*>(rax20 - 0x7f7f7fff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax21 - 0x7f7f7fff) + al22);
        *rax23 = reinterpret_cast<unsigned char>(*rax24 | 0x80);
        *reinterpret_cast<signed char*>(rax25 - 0x7f7ff380) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax26 - 0x7f7ff380) + 16);
        rax27[rax28 * 4] = reinterpret_cast<signed char>(rax29[rax30 * 4] - 0x80);
        *reinterpret_cast<signed char*>(rax31 + 0x7e77e04) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax32 + 0x7e77e04) + 9);
    }
}

struct s200 {
    unsigned char f0;
    signed char[1081347] pad1081348;
    unsigned char f108004;
};

void fun_405a57(int64_t rcx, signed char dl) {
    int32_t eax3;
    signed char al4;
    struct s200* rax5;
    unsigned char* rsi6;
    unsigned char* rsi7;
    int32_t* rbx8;
    int32_t* rbx9;
    uint32_t tmp32_10;
    uint1_t cf11;

    *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(al4 + 22);
    *reinterpret_cast<int32_t*>(&rax5) = eax3 + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    rsi6[rcx * 8] = reinterpret_cast<unsigned char>(rsi7[rcx * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax5) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax5) + 1) + dl);
    rax5->f0 = reinterpret_cast<unsigned char>(rax5->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax5) + 1));
    *rbx8 = *rbx9 + *reinterpret_cast<int32_t*>(&rax5);
    rax5->f0 = 0;
    tmp32_10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax5) - 0x7f6bef80) - 0x7f5aef80;
    cf11 = reinterpret_cast<uint1_t>(tmp32_10 < *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax5) - 0x7f6bef80));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax5) - 0x7f6bef80) = tmp32_10;
    rax5->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax5->f0 - 80) + cf11);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax5) - 0x7f7ffcf0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax5) - 0x7f7ffcf0) - 0x80);
    rax5->f108004 = reinterpret_cast<unsigned char>(rax5->f108004 | *reinterpret_cast<unsigned char*>(&rax5));
    *reinterpret_cast<unsigned char*>(&rax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax5) + rax5->f0);
    rax5->f0 = reinterpret_cast<unsigned char>(rax5->f0 | 1);
}

void fun_4011ac() {
    uint64_t* rax1;

    rax1 = fun_401158(0x3220, 0x6f000);
    *rax1 = *rax1 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_40126d() {
    return 0;
}

void fun_401299() {
    return;
}

int64_t fun_404e35(int64_t rcx) {
    int64_t rax2;
    uint32_t eax3;
    uint32_t eax4;
    int1_t cf5;

    *reinterpret_cast<uint32_t*>(&rax2) = eax3 >> 16 & 0xfff | eax4 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    cf5 = *reinterpret_cast<uint16_t*>(&rax2) < 0xfff;
    if (!cf5) {
        *reinterpret_cast<uint32_t*>(&rax2) = g440700;
    } else {
        __asm__("syscall ");
        if (!cf5) {
            return rax2;
        }
    }
    g443c70 = *reinterpret_cast<uint32_t*>(&rax2);
    return 0xff;
}

void fun_404f07() {
    return;
}

void fun_404ff6() {
    int64_t* rdi1;
    int64_t* rsi2;

    *rdi1 = *rsi2;
}

void fun_40508f() {
}

void fun_4050af() {
}

void fun_4050cc() {
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
        goto 0x405131;
    }
}

void fun_405134() {
    uint64_t* rdi1;
    unsigned char sil2;

    *rdi1 = static_cast<uint64_t>(sil2) * 0x101010101010101;
}

int64_t fun_40517e() {
    int64_t rdi1;
    int64_t rsi2;
    int64_t rdx3;
    int64_t rax4;
    uint64_t r8_5;
    uint64_t rdx6;
    int64_t rcx7;
    int64_t rax8;
    int64_t rdx9;
    int64_t rdi10;
    int64_t rsi11;

    if (rdi1 == rsi2 || !rdx3) {
        addr_4051dd_2:
        *reinterpret_cast<uint32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        r8_5 = (rdx6 >> 4) + 1;
        rcx7 = -16;
        do {
            rcx7 = rcx7 + 16;
            --r8_5;
            if (!r8_5) 
                goto addr_4051c3_5;
            __asm__("movdqu xmm0, [rdi+rcx]");
            __asm__("movdqu xmm1, [rsi+rcx]");
            __asm__("pcmpeqb xmm0, xmm1");
            __asm__("pmovmskb eax, xmm0");
            *reinterpret_cast<int32_t*>(&rax8) = *reinterpret_cast<int32_t*>(&rax8) - 0xffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        } while (!*reinterpret_cast<int32_t*>(&rax8));
        goto addr_4051bd_7;
    }
    addr_4051df_8:
    return rax4;
    do {
        addr_4051c3_5:
        if (rdx9 == rcx7) 
            goto addr_4051dd_2;
        ++rcx7;
        *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(rdi10 + rcx7 - 1) - *reinterpret_cast<unsigned char*>(rsi11 + rcx7 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } while (!*reinterpret_cast<uint32_t*>(&rax4));
    goto addr_4051df_8;
    addr_4051bd_7:
    __asm__("bsf eax, eax");
    rcx7 = rcx7 + rax8;
    goto addr_4051c3_5;
}

struct s201 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s202 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s203 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_4011d4() {
    struct s201* r9_1;
    struct s201* rdi2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s202* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s202* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s202* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s203* rax18;

    r9_1 = rdi2;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_1) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s202*>(&r9_1->f18);
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
                    rdi15 = reinterpret_cast<struct s202*>(&rdi15->pad8);
                    ++rsi14;
                }
            } while (!zf16);
            goto addr_40123e_12;
            *reinterpret_cast<uint32_t*>(&rax12) = ecx13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            continue;
            addr_40123e_12:
            ++r11d5;
            ++rdx6;
            rax18 = reinterpret_cast<struct s203*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_1));
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

void fun_401270() {
    __asm__("cli ");
    __asm__("hlt ");
}

void fun_40129e() {
    int64_t v1;
    int64_t* r14_2;
    int64_t* rdi3;
    int64_t rcx4;
    int64_t rcx5;
    int64_t* rdi6;
    int64_t* rax7;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<unsigned char*>(&g440668) = 8;
    r14_2 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + *reinterpret_cast<int32_t*>(&v1) * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi3) = 0x406018;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx4) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    while (rcx4) {
        --rcx4;
        *rdi3 = reinterpret_cast<int64_t>(fun_40126d);
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
    fun_4012f0();
    g443c74 = g443c74 | 1;
    *reinterpret_cast<int32_t*>(&rax7) = 0x406008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    while (0x406010 != rax7) {
        *rax7();
        ++rax7;
    }
    fun_4014ce();
    fun_4018ae();
}

uint64_t g442048;

int64_t fun_4014e0() {
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

    r12_1 = g442038;
    zf2 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (!zf2 || (eax3 = fun_401674(), !!eax3)) {
        *r12_1 = 1;
    }
    zf4 = g442050 == 0;
    r13_5 = r12_1;
    if (zf4) {
        g442050 = reinterpret_cast<signed char**>(0x442058);
        g442048 = 8;
        fun_404540();
    }
    r12_6 = g442040;
    rax7 = g442050;
    rbx8 = r12_6 - 1;
    do {
        if (rbx8 == 0xffffffffffffffff) 
            break;
        rdx9 = rax7 + rbx8;
        --rbx8;
    } while (*reinterpret_cast<int64_t*>(rax7 + rbx8 + 1));
    goto addr_401577_9;
    r14_10 = r12_6 + 1;
    cf11 = r14_10 < g442048;
    if (cf11 || (al12 = fun_40466a(1, 8), !!al12)) {
        rax13 = g442050;
        rbx8 = r12_6;
        rax13[r12_6] = r13_5;
        g442040 = r14_10;
    }
    *reinterpret_cast<int32_t*>(&rax14) = *reinterpret_cast<int32_t*>(&rbx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    addr_4015c2_13:
    return rax14;
    addr_401577_9:
    *rdx9 = r13_5;
    *reinterpret_cast<int32_t*>(&rax14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    goto addr_4015c2_13;
}

void fun_402197() {
    uint64_t rax1;
    uint64_t rax2;
    signed char** rcx3;
    signed char** rcx4;
    signed char* rdi5;

    rax1 = g442040;
    rax2 = rax1 - 1;
    do {
        if (rax2 == 0xffffffffffffffff) 
            break;
        rcx3 = g442050;
        rcx4 = rcx3 + rax2;
        --rax2;
    } while (*rcx4 != rdi5);
    goto addr_4021b8_4;
    return;
    addr_4021b8_4:
    *rcx4 = reinterpret_cast<signed char*>(0);
    return;
}

int64_t g440678;

struct s16* fun_402296() {
    goto g440678;
}

struct s204 {
    signed char[20] pad20;
    int32_t f14;
};

struct s205 {
    signed char[16] pad16;
    int32_t f10;
};

struct s206 {
    signed char[24] pad24;
    int64_t f18;
};

struct s207 {
    signed char[32] pad32;
    int32_t f20;
};

struct s208 {
    signed char[20] pad20;
    int32_t f14;
};

struct s209 {
    signed char[20] pad20;
    uint32_t f14;
};

int64_t fun_402213() {
    int32_t r8d1;
    int64_t rcx2;
    struct s204* rdi3;
    struct s205* rdi4;
    uint32_t eax5;
    struct s206* rdi6;
    int64_t rsi7;
    struct s207* rdi8;
    struct s208* rdi9;
    struct s209* rdi10;
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

struct s13* fun_4043d8(struct s14* rcx, uint64_t rdx, int64_t r8) {
    int64_t rdi4;
    uint64_t rsi5;
    int64_t rsi6;
    void* rdx7;
    uint64_t rsi8;
    int64_t rsi9;
    struct s105* rax10;
    struct s13* rax11;
    uint64_t rdx12;
    int64_t rdi13;
    uint64_t rdx14;
    uint64_t rsi15;

    if (!rdi4) {
        goto fun_402b64;
    }
    if (rsi5 <= 0xffffffffffffff7f) {
        if (rsi6) {
            *reinterpret_cast<int32_t*>(&rdx7) = 32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
            if (rsi8 > 14) {
                rdx7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi9 + 31) & 0xfffffffffffffff0);
            }
            rax10 = fun_404049(1, rdx7, r8);
            if (!rax10) {
                rax11 = fun_402b64(1, rdx7);
                if (rax11) {
                    rdx12 = *reinterpret_cast<uint64_t*>(rdi13 - 8);
                    rdx14 = (rdx12 & 0xfffffffffffffff8) - 16;
                    if (rdx14 > rsi15) {
                        rdx14 = rsi15;
                    }
                    fun_404f70(1, rdx14);
                    fun_403ae8(1, rdx14);
                    rax11 = rax11;
                }
            } else {
                rax11 = reinterpret_cast<struct s13*>(&rax10->f10);
            }
        } else {
            fun_403ae8(rcx, rdx);
            goto addr_404419_14;
        }
    } else {
        fun_4018e7();
        goto addr_404419_14;
    }
    addr_404489_16:
    return rax11;
    addr_404419_14:
    *reinterpret_cast<int32_t*>(&rax11) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    goto addr_404489_16;
}

int64_t g440688;

int64_t fun_4022a2() {
    goto g440688;
}

void fun_404df0(int64_t rcx) {
    uint64_t rax2;
    int16_t ax3;

    *reinterpret_cast<int32_t*>(&rax2) = ax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax2) < 0) 
        goto 0x404e12;
    __asm__("syscall ");
    if (rax2 < 0xfffffffffffff001) {
        return;
    }
}

int64_t fun_404ef0() {
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
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0x7f || !(*reinterpret_cast<unsigned char*>(0x440330 + rax3) & 16)) {
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
        goto *reinterpret_cast<int64_t*>(rcx9 * 8 + 0x440078);
    }
}

void fun_404f0a() {
    return;
}

void fun_404f60() {
}

struct s210 {
    signed char[2] pad2;
    signed char f2;
};

struct s211 {
    signed char[2] pad2;
    signed char f2;
};

struct s212 {
    signed char[1] pad1;
    signed char f1;
};

struct s213 {
    signed char[1] pad1;
    signed char f1;
};

void fun_405019() {
    struct s210* rdi1;
    struct s211* rsi2;
    struct s212* rdi3;
    struct s213* rsi4;
    signed char* rdi5;
    signed char* rsi6;

    rdi1->f2 = rsi2->f2;
    rdi3->f1 = rsi4->f1;
    *rdi5 = *rsi6;
    goto 0x405008;
}

void fun_40500a() {
    int32_t* rdi1;
    int32_t* rsi2;

    *rdi1 = *rsi2;
}

struct s214 {
    signed char[2] pad2;
    signed char f2;
};

struct s215 {
    signed char[1] pad1;
    signed char f1;
};

void fun_405164() {
    struct s214* rdi1;
    signed char sil2;
    struct s215* rdi3;
    signed char sil4;
    signed char* rdi5;
    signed char sil6;

    rdi1->f2 = sil2;
    rdi3->f1 = sil4;
    *rdi5 = sil6;
    goto 0x405131;
}

void fun_405150() {
}

int64_t fun_4051e0(int64_t rcx, uint32_t edx) {
    int64_t rax3;
    uint32_t ebx4;
    int64_t rcx5;
    int64_t rsi6;
    int64_t rdi7;
    int64_t rdi8;
    int64_t rsi9;

    *reinterpret_cast<uint32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    ebx4 = 0;
    *reinterpret_cast<uint32_t*>(&rcx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (edx && rsi6 != rdi7) {
        while (*reinterpret_cast<uint32_t*>(&rcx5) < edx && ((*reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(rdi8 + rcx5), ebx4 = *reinterpret_cast<unsigned char*>(rsi9 + rcx5), !!*reinterpret_cast<signed char*>(&rax3)) && *reinterpret_cast<signed char*>(&rax3) == *reinterpret_cast<signed char*>(&ebx4))) {
            *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<uint32_t*>(&rcx5) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        }
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax3) - ebx4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    return rax3;
}

void fun_405240() {
    goto 0x40523f;
}

struct s216 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s217 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s218 {
    signed char[111] pad111;
    signed char f6f;
};

struct s219 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_405301() {
    struct s216* rdi1;
    struct s217* rdi2;
    unsigned char dh3;
    struct s218* rsi4;
    struct s219* rsi5;
    signed char ch6;
    unsigned char* rax7;
    unsigned char al8;
    unsigned char* rax9;
    unsigned char tmp8_10;
    int1_t cf11;

    rdi1->f6f = reinterpret_cast<unsigned char>(rdi2->f6f & dh3);
    if (0) 
        goto 0x405377;
    rsi4->f6f = reinterpret_cast<signed char>(rsi5->f6f + ch6);
    __asm__("insb ");
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(al8 | *rax9);
    *rax7 = reinterpret_cast<unsigned char>(*rax7 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax7) + reinterpret_cast<uint1_t>(*rax7 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax7))))));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<int32_t*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    *rax7 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    tmp8_10 = reinterpret_cast<unsigned char>(*rax7 + *reinterpret_cast<unsigned char*>(&rax7));
    cf11 = tmp8_10 < *rax7;
    *rax7 = tmp8_10;
    if (cf11) 
        goto "Roberts Tunney\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insb ");
}

void fun_40127c() {
    goto 0x40127b;
}

void fun_4012a7() {
    int1_t zf1;
    int64_t rdi2;

    zf1 = rdi2 == 0;
    if (!zf1) {
    }
    if (zf1) 
        goto 0x4012b7;
    *reinterpret_cast<unsigned char*>(&g440668) = 32;
}

struct s220 {
    signed char[20] pad20;
    int32_t f14;
};

struct s221 {
    signed char[16] pad16;
    int32_t f10;
};

struct s222 {
    signed char[32] pad32;
    int32_t f20;
};

struct s223 {
    signed char[16] pad16;
    uint32_t f10;
};

int64_t fun_402250() {
    int32_t r8d1;
    struct s220* rdi2;
    struct s221* rdi3;
    uint32_t eax4;
    struct s222* rdi5;
    struct s223* rdi6;
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

struct s13* fun_403fed(struct s14* rcx) {
    uint64_t rbx2;
    int64_t rdi3;
    int64_t rdi4;
    uint64_t rsi5;
    uint64_t rdi6;
    uint64_t rsi7;
    void* rdx8;
    uint64_t rdi9;
    uint64_t rsi10;
    uint64_t rdi11;
    struct s13* rax12;

    *reinterpret_cast<int32_t*>(&rbx2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
    if (rdi3 && ((rbx2 = rdi4 * rsi5, !!((rdi6 | rsi7) & 0xffffffffffff0000)) && (rdx8 = reinterpret_cast<void*>(rbx2 % rdi9), rsi10 != rbx2 / rdi11))) {
        rbx2 = 0xffffffffffffffff;
    }
    rax12 = fun_402b64(rcx, rdx8);
    if (rax12 && *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax12) + 0xfffffffffffffff8) & 3) {
        rax12 = fun_4050b2(rcx, rbx2);
    }
    return rax12;
}

int64_t SetDefaultDllDirectories = 0x57e2;

int64_t GetCommandLineW = 0x5724;

int64_t GetEnvironmentStringsW = 0x5736;

int64_t FreeEnvironmentStringsW = 0x570a;

void fun_401918() {
    int64_t rcx1;
    void* rbp2;
    int32_t eax3;
    int64_t rax4;
    void* r9_5;
    uint16_t* rax6;
    struct s75* rdx7;
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
    struct s75* rdx19;
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
        ExitProcess(1, 0x401960, 6, r9_5);
    }
    g440668 = 4;
    GetCommandLineW(rcx1, 0x401960, 6, r9_5);
    rax6 = reinterpret_cast<uint16_t*>(GetEnvironmentStringsW(rcx1, 0x401960, 6, r9_5));
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    r13_8 = rax6;
    fun_401bad(reinterpret_cast<int64_t>(rbp2) - 0xd030, 0x3fff, 0x200, r9_5);
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
        eax13 = fun_404e4d(rcx10, rdx7, 0x200, rcx10, rdx7, 0x200);
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
    rdx19 = reinterpret_cast<struct s75*>(reinterpret_cast<int64_t>(r13_8) + (rax15 + rax15));
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
                rax23 = fun_404e5c(rcx16, rdx19);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx16) >= reinterpret_cast<uint64_t>(r10_17)) 
                    break;
                ++rcx16;
                rax23 = rax23 >> 8;
            } while (rax23);
            eax24 = rdx19->f0;
            if (*reinterpret_cast<uint16_t*>(&eax24) > 0xd7ff) {
                eax25 = fun_404e4d(rcx16, rdx19, r8_18);
            } else {
                v14 = eax24;
                eax25 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax26) = eax25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            rdx19 = reinterpret_cast<struct s75*>(reinterpret_cast<int64_t>(rdx19) + (rax26 + rax26));
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
    goto 0x4015d7;
}

int64_t fun_401f3f() {
    return 0x443c70;
}

void fun_401f0e() {
}

void fun_404e1a() {
    goto 0x404e27;
}

void fun_404f0d() {
    return;
}

void fun_405242() {
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

void fun_40127e() {
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

void fun_404e20() {
}

int64_t fun_404f10() {
    int64_t rax1;
    uint32_t eax2;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 | 0xa5c6e00;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    return rax1;
}

void fun_404f16() {
    return;
}

void fun_404f19() {
    return;
}

void fun_404f1c() {
    return;
}

void fun_404f1f() {
    return;
}

void fun_404f22() {
    return;
}

void fun_404f25() {
    return;
}

void fun_404f28() {
    return;
}
