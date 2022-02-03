
uint32_t g443c74 = 0;

uint32_t g440668 = 0;

void fun_405211(signed char dil);

struct s0 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

uint64_t* fun_401158(uint64_t rdi, int64_t rsi, uint64_t* rdx, uint64_t* rcx);

void* fun_401000() {
    int1_t zf1;
    uint64_t* rcx2;
    uint64_t r14_3;
    struct s0* r13_4;
    uint64_t r12_5;
    struct s0* rbx6;
    struct s0* rax7;
    uint64_t r12_8;
    uint64_t rax9;
    uint64_t rdi10;
    uint64_t* rax11;
    uint64_t rdx12;

    g443c74 = g443c74 | 2;
    zf1 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("syscall ");
        __asm__("syscall ");
    }
    fun_405211(0x86);
    rcx2 = reinterpret_cast<uint64_t*>(0);
    *reinterpret_cast<int32_t*>(&r14_3) = 0x400000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    r13_4 = reinterpret_cast<struct s0*>(0x86);
    *reinterpret_cast<int32_t*>(&r12_5) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = 0;
    rbx6 = reinterpret_cast<struct s0*>(0x86);
    while (rbx6->f8) {
        do {
            rax7 = rbx6;
            rbx6 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx6) + 24);
            if (!(rbx6->f10 - 1)) 
                break;
        } while (rbx6->f8);
        goto addr_4010a6_7;
        rbx6 = rax7;
        addr_4010ab_9:
        if (rbx6->f0 >= r12_5) {
            r12_5 = rbx6->f0;
        }
        r12_8 = r12_5 + 0xfff;
        while (1) {
            r12_5 = r12_8 & 0xfffffffffffff000;
            while (r12_5 < (rbx6->f8 + rbx6->f0 & 0xfffffffffffff000)) {
                while (r13_4->f8 && (r13_4->f10 == 1 || r13_4->f0 + r13_4->f8 < r12_5)) {
                    r13_4 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r13_4) + 24);
                }
                if (r13_4->f0 > r12_5) 
                    goto addr_40110e_17;
                rax9 = r13_4->f0 + r13_4->f8;
                if (rax9 > r12_5) 
                    goto addr_401105_19;
                addr_40110e_17:
                rdi10 = r14_3;
                r14_3 = r14_3 + 0x1000;
                rax11 = fun_401158(rdi10, 3, 6, rcx2);
                rdx12 = r12_5;
                rcx2 = rcx2;
                r12_5 = r12_5 + 0x1000;
                *rax11 = rdx12 | 3;
            }
            break;
            addr_401105_19:
            r12_8 = rax9 + 0xfff;
        }
        rbx6 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx6) + 24);
        continue;
        addr_4010a6_7:
        goto addr_4010ab_9;
    }
    goto 0xdf;
}

uint64_t g440000 = 0;

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

unsigned char g440008 = 0;

void fun_404f07();

struct s5 {
    int64_t f0;
    int64_t f8;
};

void fun_40161f(struct s5* rdi, int64_t rsi);

int64_t fun_40189d();

struct s6 {
    int64_t f0;
    int64_t f8;
};

struct s7 {
    int64_t f0;
    int64_t f8;
};

int64_t fun_40517e(int64_t rdi, int64_t rsi, uint64_t rdx);

struct s8 {
    int64_t f0;
    int64_t f8;
};

void fun_40186f();

struct s9 {
    int64_t f0;
    unsigned char f8;
};

int64_t fun_4051e0(int64_t rdi, int64_t rsi, uint32_t edx, int64_t rcx);

struct s10 {
    unsigned char f0;
    signed char[7] pad8;
    uint64_t f8;
};

struct s11 {
    uint64_t f0;
    int64_t f8;
};

int64_t fun_404e35();

struct s12 {
    int64_t f0;
    int64_t f8;
};

int64_t g406088 = 0x57bc;

int64_t g44200c = 0;

uint64_t g440798 = 0;

int32_t g442004 = 0;

int64_t g442018 = 0;

int32_t g442020 = 0;

struct s13 {
    signed char[16] pad16;
    uint32_t f10;
    uint32_t f14;
    signed char[8] pad32;
    int32_t f20;
};

int64_t fun_402250(struct s13* rdi);

struct s14 {
    signed char f0;
    signed char[3] pad4;
    int32_t f4;
    uint32_t f8;
    int32_t fc;
    uint32_t f10;
    uint32_t f14;
    int64_t f18;
    uint32_t f20;
    signed char[12] pad48;
    int64_t f30;
};

uint32_t fun_4021be(struct s14* rdi);

int64_t g442030 = 0;

struct s14* g442038 = reinterpret_cast<struct s14*>(0);

struct s15 {
    struct s15* f0;
    signed char[4] pad8;
    struct s15* f8;
};

struct s16 {
    void* f0;
    void* f8;
    struct s15* f10;
};

struct s15* fun_403fed(uint64_t rdi, struct s16* rsi);

struct s17 {
    int64_t f0;
    int64_t f8;
};

void fun_4015cb(struct s17* rdi, int64_t rsi);

struct s15* fun_403ae8(struct s15* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx);

struct s15* fun_4043d8(struct s15* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx, int64_t r8);

void fun_4012f0() {
    int32_t eax1;
    int32_t edx2;
    struct s1* rdi3;
    int64_t rsi4;
    struct s2* rdi5;
    struct s3* rdi6;
    struct s4* rdi7;
    int64_t rax8;
    int64_t v9;
    int1_t below_or_equal10;
    signed char ch11;
    signed char cl12;
    int32_t r15_13;
    struct s5* rdi14;
    int64_t rsi15;
    struct s6* rdi16;
    struct s7* rdi17;
    struct s8* rdi18;
    int64_t* r13_19;
    struct s9* rdi20;
    struct s10* rdi21;
    int64_t v22;
    unsigned char v23;
    int64_t* r15_24;
    struct s11* rdi25;
    uint64_t rax26;
    struct s12* v27;
    uint64_t* rdi28;
    int32_t ecx29;
    uint64_t rdx30;
    uint64_t r8_31;
    uint64_t r8_32;
    uint64_t r8_33;
    int32_t edx34;
    int64_t rdx35;
    int1_t zf36;
    struct s17* rdi37;
    int64_t v38;

    __asm__("rdtsc ");
    *reinterpret_cast<int32_t*>(&g440000) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g440000) + 4) = edx2;
    rdi3 = reinterpret_cast<struct s1*>(0x440008);
    rsi4 = 0x4058f8;
    while (1) {
        addr_40131d_8:
        rdi3->f0 = __intrinsic();
        rdi5 = reinterpret_cast<struct s2*>(&rdi3->f4);
        rdi5->f0 = __intrinsic();
        rdi6 = reinterpret_cast<struct s3*>(&rdi5->f4);
        rdi6->f0 = __intrinsic();
        rdi7 = reinterpret_cast<struct s4*>(&rdi6->f4);
        rdi7->f0 = __intrinsic();
        rdi3 = reinterpret_cast<struct s1*>(&rdi7->f4);
        rsi4 = rsi4 + 4 + 4 + 4 + 4;
        while (rax8 = v9, !!*reinterpret_cast<int32_t*>(&rax8)) {
            below_or_equal10 = *reinterpret_cast<unsigned char*>(&rax8) <= g440008;
            if (below_or_equal10) 
                goto addr_40131d_8;
            ++rdi3;
        }
        break;
    }
    ch11 = 17;
    do {
        __asm__("lodsb ");
        cl12 = 0;
        __asm__("lodsb ");
        do {
            rdi3->f0 = reinterpret_cast<int32_t>(fun_404f07);
            rdi3 = reinterpret_cast<struct s1*>(&rdi3->f8);
            rsi4 = rsi4 + 8;
            cl12 = reinterpret_cast<signed char>(cl12 - 1);
        } while (cl12);
        ch11 = reinterpret_cast<signed char>(ch11 - 1);
    } while (ch11);
    rdi3->f0 = r15_13;
    rdi14 = reinterpret_cast<struct s5*>(&rdi3->f8);
    rsi15 = rsi4 + 6 + 8;
    fun_40161f(rdi14, rsi15);
    fun_40189d();
    rdi14->f0 = -1;
    rdi16 = reinterpret_cast<struct s6*>(&rdi14->f8);
    rdi16->f0 = -1;
    rdi17 = reinterpret_cast<struct s7*>(&rdi16->f8);
    rdi17->f0 = reinterpret_cast<int64_t>(fun_40517e);
    rdi18 = reinterpret_cast<struct s8*>(&rdi17->f8);
    fun_40186f();
    fun_40186f();
    rdi18->f0 = *r13_19;
    rdi20 = reinterpret_cast<struct s9*>(&rdi18->f8);
    rdi20->f0 = reinterpret_cast<int64_t>(fun_4051e0);
    rdi21 = reinterpret_cast<struct s10*>(&rdi20->f8);
    v22 = rsi15 + 8 + 8 + 8 + 8 + 8;
    if (rdi21->f0 & 8) {
        v23 = reinterpret_cast<unsigned char>(8);
    } else {
        if (!(rdi21->f0 & 32)) {
            if (!(rdi21->f0 & 4)) {
                if (!*r15_24) {
                }
            }
        }
    }
    rdi21->f0 = v23;
    rdi25 = reinterpret_cast<struct s11*>(&rdi21->f8);
    rax26 = reinterpret_cast<uint64_t>(fun_404e35);
    rdi25->f0 = reinterpret_cast<uint64_t>(fun_404e35);
    v27 = reinterpret_cast<struct s12*>(&rdi25->f8);
    *reinterpret_cast<int32_t*>(&rdi28) = 0x440698;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi28) < 0x4407a0) {
        ecx29 = 0;
        *reinterpret_cast<int32_t*>(&rdx30) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_31 = rax26;
            *reinterpret_cast<uint32_t*>(&r8_32) = *reinterpret_cast<uint32_t*>(&r8_31) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = 0;
            r8_33 = r8_32 << *reinterpret_cast<unsigned char*>(&ecx29);
            ecx29 = ecx29 + 7;
            rdx30 = rdx30 | r8_33;
        } while (*reinterpret_cast<signed char*>(&rax26) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax26) & 64) {
            rdx30 = rdx30 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx29);
        }
        rax26 = rdx30;
        if (*rdi28) {
            rax26 = *rdi28;
        }
        *rdi28 = rax26;
        ++rdi28;
    }
    g406088();
    g44200c = 1;
    edx34 = *reinterpret_cast<int32_t*>(&g440798);
    g442004 = edx34;
    g442018 = 0x441000;
    g442020 = 0x1000;
    rdx35 = reinterpret_cast<int64_t>(fun_402250);
    zf36 = (*reinterpret_cast<unsigned char*>(&g440668) & 2) == 0;
    if (zf36) {
        rdx35 = reinterpret_cast<int64_t>(fun_4021be);
    }
    g442030 = rdx35;
    g442038 = reinterpret_cast<struct s14*>(0x442000);
    v27->f0 = reinterpret_cast<int64_t>(fun_403fed);
    rdi37 = reinterpret_cast<struct s17*>(&v27->f8);
    fun_4015cb(rdi37, v22 + 8);
    rdi37->f0 = reinterpret_cast<int64_t>(fun_403ae8);
    rdi37->f8 = reinterpret_cast<int64_t>(fun_4043d8);
    goto v38;
}

int64_t g406080 = 0x57ac;

int64_t g443aa0 = 0;

void*** g443ab0 = reinterpret_cast<void***>(0);

int64_t g443aa8 = 0;

int32_t g443ac8 = 0;

int32_t g443ae0 = 0;

int32_t g443af8 = 0;

int64_t g443ab8 = 0;

int64_t g443ad0 = 0;

int64_t g443ae8 = 0;

void fun_40161f(struct s5* rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;

    rbp3 = g406080;
    g443aa0 = 3;
    g443ab0 = reinterpret_cast<void***>(0x443ab8);
    g443aa8 = 16;
    g443ac8 = 1;
    g443ae0 = 1;
    g443af8 = 1;
    rax4 = reinterpret_cast<int64_t>(rbp3());
    g443ab8 = rax4;
    rax5 = reinterpret_cast<int64_t>(rbp3());
    g443ad0 = rax5;
    rax6 = reinterpret_cast<int64_t>(rbp3());
    g443ae8 = rax6;
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

unsigned char g44003d = 0;

void fun_40186f() {
    unsigned char r8b1;
    int1_t zf2;
    int64_t* rdi3;
    int64_t rdx4;
    int64_t rsi5;
    int32_t ecx6;
    int64_t rax7;
    int1_t zf8;
    int64_t rdx9;

    r8b1 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf2)) << 1);
    do {
        __asm__("lodsb ");
        *rdi3 = rdx4;
        ++rdi3;
        rsi5 = rsi5 + 8;
        --ecx6;
    } while (ecx6);
    *reinterpret_cast<int32_t*>(&rax7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    zf8 = (g44003d & 2) == 0;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf8)) | r8b1);
    *reinterpret_cast<unsigned char*>(&rax7) = *reinterpret_cast<unsigned char*>(rsi5 + rax7);
    *rdi3 = rax7 + rdx9;
    __asm__("lodsq ");
    return;
}

void fun_404491();

void fun_4015cb(struct s17* rdi, int64_t rsi) {
    fun_404491();
    return;
}

int64_t fun_401f47(signed char* rdi);

struct s18 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s19 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_405301(struct s18* rdi, struct s19* rsi);

int32_t fun_4014ce(int64_t rdi, void* rsi, int64_t* rdx) {
    fun_401f47(fun_405301);
    return 0;
}

unsigned char fun_404c6c(int32_t edi, int32_t esi);

int32_t fun_401eb0(void** rdi, int64_t rsi);

uint32_t g443c70 = 0;

int32_t fun_401711();

uint32_t fun_401674(int32_t edi) {
    uint32_t r13d2;
    uint32_t r13d3;
    unsigned char al4;
    void*** tmp64_5;
    void** rdi6;
    int32_t eax7;
    uint1_t zf8;
    uint32_t ebx9;
    int32_t eax10;
    uint32_t v11;

    r13d2 = g440668;
    r13d3 = r13d2 & 4;
    if (r13d3) {
        r13d3 = 0;
        al4 = fun_404c6c(edi, 1);
        if (!al4) {
            addr_401700_3:
            return r13d3;
        } else {
            tmp64_5 = g443ab0 + edi * 3;
            rdi6 = *tmp64_5;
            eax7 = fun_401eb0(rdi6, 1);
            zf8 = reinterpret_cast<uint1_t>(eax7 == 2);
        }
    } else {
        ebx9 = g443c70;
        eax10 = fun_401711();
        if (!(eax10 + 1)) {
            g443c70 = ebx9;
            goto addr_401700_3;
        } else {
            zf8 = reinterpret_cast<uint1_t>((v11 & 0xf000) == 0x2000);
        }
    }
    r13d3 = zf8;
    goto addr_401700_3;
}

struct s20 {
    uint32_t f0;
    signed char[4] pad8;
    struct s20* f8;
};

struct s20* g4424a0 = reinterpret_cast<struct s20*>(0);

struct s21 {
    uint32_t f0;
    signed char[12] pad16;
    struct s15* f10;
    signed char[4] pad24;
    struct s15* f18;
    signed char[4] pad32;
    struct s15* f20;
};

struct s20* fun_402296(struct s15* rdi, struct s15* rsi);

struct s15* fun_4018e7(struct s15* rdi, struct s15* rsi, struct s15* rdx);

struct s15* fun_404540(struct s15* rdi, struct s15* rsi, struct s15* rdx) {
    struct s15* r13_4;
    struct s15* r12_5;
    struct s20* rbx6;
    int64_t rax7;
    struct s21* rbx8;
    struct s15* rax9;
    struct s20* rax10;

    r13_4 = rdi;
    r12_5 = rsi;
    rbx6 = g4424a0;
    if (!rbx6) {
        g4424a0 = reinterpret_cast<struct s20*>(0x4424a8);
        *reinterpret_cast<int32_t*>(&rbx6) = 0x4424a8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = 0;
    }
    if (rbx6->f0 != 0xffffffff) {
        addr_4045a7_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(~rbx6->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        rbx6->f0 = rbx6->f0;
        rbx8 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rbx6) + rax7 * 24);
        *reinterpret_cast<int32_t*>(&rax9) = 0;
        *reinterpret_cast<int32_t*>(&rax9 + 1) = 0;
        rbx8->f10 = r13_4;
        rbx8->f18 = r12_5;
        rbx8->f20 = rdx;
    } else {
        if (*reinterpret_cast<int32_t*>(&rsi) = 0x310, *reinterpret_cast<int32_t*>(&rsi + 1) = 0, *reinterpret_cast<int32_t*>(&rdi) = 1, *reinterpret_cast<int32_t*>(&rdi + 1) = 0, rax10 = fun_402296(1, 0x310), rax10 == 0) {
            rax9 = fun_4018e7(rdi, rsi, rdx);
        } else {
            rax10->f8 = rbx6;
            g4424a0 = rax10;
            rbx6 = rax10;
            goto addr_4045a7_4;
        }
    }
    return rax9;
}

int32_t fun_404db0();

struct s22 {
    uint16_t f0;
    signed char[2] pad4;
    uint16_t f4;
    uint16_t f6;
    signed char[8] pad16;
    int32_t f10;
    int32_t f14;
    uint16_t f18;
    signed char[2] pad28;
    int32_t f1c;
    int32_t f20;
    signed char[4] pad40;
    int32_t f28;
    signed char[4] pad48;
    int32_t f30;
    signed char[4] pad56;
    int32_t f38;
    signed char[4] pad64;
    int32_t f40;
    signed char[4] pad72;
    int32_t f48;
    signed char[4] pad80;
    int32_t f50;
    signed char[4] pad88;
    int32_t f58;
    signed char[4] pad96;
    int32_t f60;
    signed char[4] pad104;
    int32_t f68;
    signed char[4] pad112;
    int32_t f70;
    signed char[4] pad120;
    int32_t f78;
    signed char[4] pad128;
    int32_t f80;
};

void fun_40173e(struct s22* rdi);

int32_t fun_401711() {
    int32_t eax1;
    struct s22* rsi2;

    eax1 = fun_404db0();
    if (eax1 != -1) {
        fun_40173e(rsi2);
        eax1 = eax1;
    }
    return eax1;
}

int64_t g406070 = 0x578e;

int32_t fun_401eb0(void** rdi, int64_t rsi) {
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(g406070());
    return eax3;
}

void fun_40173e(struct s22* rdi) {
    uint32_t eax2;
    int32_t r12_3;
    uint16_t r14d4;
    int32_t r13_5;
    int32_t r11_6;
    int32_t rbx7;
    int32_t r10_8;
    int32_t rsi9;
    int32_t r15_10;
    int32_t rcx11;
    int32_t rdx12;
    int32_t rax13;
    int32_t r9_14;
    int32_t r8_15;
    int32_t r14_16;
    uint16_t r13d17;
    int32_t r10_18;
    uint16_t r15_19;
    int32_t r12_20;
    int32_t r11_21;
    int32_t rbx22;

    if (!rdi) {
        return;
    }
    eax2 = g440668;
    if (!(*reinterpret_cast<unsigned char*>(&eax2) & 8)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax2) & 32)) {
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 16)) {
                addr_401863_6:
                return;
            } else {
                r12_3 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f1c));
                r14d4 = rdi->f0;
                r13_5 = rdi->f14;
                r11_6 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f60));
                rbx7 = rdi->f50;
                r10_8 = rdi->f58;
                rsi9 = rdi->f30;
                rdi->f0 = reinterpret_cast<uint16_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4)));
                r15_10 = rdi->f10;
                (&r15_10)[1] = 0;
                rcx11 = rdi->f38;
                rdx12 = rdi->f40;
                rax13 = rdi->f48;
                r9_14 = rdi->f20;
                r8_15 = rdi->f28;
                rdi->f18 = r14d4;
                rdi->f10 = r15_10;
                rdi->f1c = r13_5;
                rdi->f28 = r12_3;
            }
        } else {
            r11_6 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f80));
            rbx7 = rdi->f70;
            r10_8 = rdi->f78;
            r9_14 = rdi->f30;
            r8_15 = rdi->f38;
            rsi9 = rdi->f40;
            rcx11 = rdi->f48;
            rdx12 = rdi->f50;
            rax13 = rdi->f58;
            rdi->f18 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(rdi->f18));
        }
        rdi->f30 = rbx7;
        rdi->f38 = r11_6;
        rdi->f40 = r10_8;
    } else {
        *reinterpret_cast<uint32_t*>(&r14_16) = rdi->f6;
        (&r14_16)[1] = 0;
        r13d17 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(rdi->f4));
        r10_18 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f70));
        r15_19 = reinterpret_cast<uint16_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0)));
        r12_20 = rdi->f10;
        r11_21 = rdi->f60;
        r8_15 = rdi->f28;
        rdi->f28 = reinterpret_cast<int32_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18)));
        rbx22 = rdi->f68;
        r9_14 = rdi->f20;
        rsi9 = rdi->f30;
        rcx11 = rdi->f38;
        rdx12 = rdi->f40;
        rax13 = rdi->f48;
        rdi->f0 = r15_19;
        rdi->f10 = r14_16;
        rdi->f18 = r13d17;
        rdi->f1c = r12_20;
        rdi->f30 = r11_21;
        rdi->f38 = r10_18;
        rdi->f40 = rbx22;
    }
    rdi->f48 = r9_14;
    rdi->f50 = r8_15;
    rdi->f58 = rsi9;
    rdi->f60 = rcx11;
    rdi->f68 = rdx12;
    rdi->f70 = rax13;
    goto addr_401863_6;
}

struct s23 {
    struct s23* f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_401b52(struct s23* rdi);

void fun_401b7d(struct s23* rdi, uint32_t* rsi);

int32_t fun_401bad(struct s23* rdi, void* rsi, struct s23* rdx, int64_t* rcx, uint64_t r8, void* r9) {
    struct s23* r11_7;
    uint64_t r10_8;
    void* rbp9;
    void* r13_10;
    uint64_t rbx11;
    int64_t* v12;
    void* v13;
    void* v14;
    int32_t v15;
    int64_t rax16;
    uint32_t v17;
    void* rax18;
    int32_t r14d19;
    uint32_t* rsi20;
    uint32_t v21;
    uint64_t r12_22;
    int32_t v23;
    uint64_t r9_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r9_28;
    uint64_t r12_29;
    void* r11_30;
    void* rax31;
    uint64_t r10_32;

    r11_7 = rdx;
    r10_8 = r8;
    rbp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r13_10 = rsi;
    *reinterpret_cast<int32_t*>(&rbx11) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx11) + 4) = 0;
    v12 = rcx;
    v13 = rsi;
    v14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint16_t>(rdx));
    fun_401b52(reinterpret_cast<int64_t>(rbp9) - 80);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_401c5e_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_401c5e_5;
            fun_401b52(reinterpret_cast<int64_t>(rbp9) - 80);
        }
        break;
        addr_401c5e_5:
        ++rbx11;
        if (rbx11 < r10_8) {
            rax18 = v13;
            if (reinterpret_cast<uint64_t>(rax18) >= reinterpret_cast<uint64_t>(v14)) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<void**>(v12 + rbx11 - 1) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> reinterpret_cast<uint64_t>(rsi20))) 
                    goto addr_401d82_15; else 
                    goto addr_401c9d_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_401b52(reinterpret_cast<int64_t>(rbp9) - 80);
                }
                *reinterpret_cast<int32_t*>(&r9_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = 0;
                while (v25 == 34) {
                    fun_401b52(reinterpret_cast<int64_t>(rbp9) - 80);
                    ++r9_24;
                }
                rax26 = r12_22;
                if (!r9_24) 
                    goto addr_401ce6_25;
            } else {
                addr_401d82_15:
                fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, rsi20);
                fun_401b52(reinterpret_cast<int64_t>(rbp9) - 80);
                continue;
            }
            while (rax26 > 1) {
                fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, 92);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_401d3e_29;
            fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, 34);
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
                fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, 34);
            }
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r9_28 % 3 == 0);
            continue;
            addr_401ce6_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, 92);
            }
        }
        addr_401d99_35:
        fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, 0);
        continue;
        addr_401c9d_16:
        goto addr_401d99_35;
    }
    fun_401b7d(reinterpret_cast<int64_t>(rbp9) - 80, 0);
    if (r11_7) {
        r11_30 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(r11_7) - 1);
        rax31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v13) - reinterpret_cast<uint64_t>(r13_10));
        if (reinterpret_cast<uint64_t>(rax31) > reinterpret_cast<uint64_t>(r11_30)) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r13_10) + reinterpret_cast<uint64_t>(rax31)) = 0;
    }
    if (r10_8) {
        r10_32 = r10_8 - 1;
        if (r10_32 > rbx11) {
            r10_32 = rbx11;
        }
        v12[r10_32] = 0;
    }
    return *reinterpret_cast<int32_t*>(&rbx11);
}

uint64_t fun_404e5c(uint32_t edi, uint32_t* rsi, struct s23* rdx, signed char* rcx) {
    uint64_t rdi5;
    uint64_t rax6;
    int32_t ecx7;
    uint32_t edx8;

    *reinterpret_cast<uint32_t*>(&rdi5) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdi5) > 0x7f) {
        __asm__("bsr ecx, edi");
        ecx7 = *reinterpret_cast<int32_t*>(0x405347 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
        do {
            edx8 = *reinterpret_cast<uint32_t*>(&rdi5);
            *reinterpret_cast<uint32_t*>(&rdi5) = *reinterpret_cast<uint32_t*>(&rdi5) >> 6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(0x80 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx8) & 63));
            rax6 = rax6 << 8;
            *reinterpret_cast<signed char*>(&ecx7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx7) - 1);
        } while (*reinterpret_cast<signed char*>(&ecx7));
        *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx7) + 1)));
    }
    return rax6 | rdi5;
}

uint32_t fun_404e4d(struct s23* rdi, uint32_t* rsi, struct s23* rdx, signed char* rcx, uint64_t r8, ...);

void fun_401b52(struct s23* rdi) {
    struct s23* rdi2;
    uint32_t eax3;
    signed char* rcx4;
    uint64_t r8_5;
    uint32_t eax6;
    void* rax7;

    rdi2 = *reinterpret_cast<struct s23**>(&rdi->f0);
    eax3 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s23**>(&rdi2->f0));
    if (*reinterpret_cast<uint16_t*>(&eax3) > 0xd7ff) {
        eax6 = fun_404e4d(rdi2, &rdi->f18, rdi, rcx4, r8_5);
    } else {
        rdi->f18 = eax3;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<struct s23**>(&rdi->f0) = reinterpret_cast<struct s23*>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s23**>(&rdi->f0)) + (reinterpret_cast<int64_t>(rax7) + reinterpret_cast<int64_t>(rax7)));
    return;
}

void fun_401b7d(struct s23* rdi, uint32_t* rsi) {
    struct s23* rdx3;
    signed char* r8_4;
    uint64_t rax5;
    signed char* rcx6;
    signed char* rcx7;

    rdx3 = rdi;
    r8_4 = rdx3->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi)));
    if (*reinterpret_cast<uint32_t*>(&rsi) > 0x7f) {
        rax5 = fun_404e5c(*reinterpret_cast<uint32_t*>(&rsi), rsi, rdx3, rcx6);
    }
    do {
        rcx7 = rdx3->f8;
        if (reinterpret_cast<uint64_t>(r8_4) <= reinterpret_cast<uint64_t>(rcx7)) 
            break;
        rdx3->f8 = rcx7 + 1;
        *rcx7 = *reinterpret_cast<signed char*>(&rax5);
        rax5 = rax5 >> 8;
    } while (rax5);
    return;
}

uint32_t fun_4020ab(struct s14* rdi, uint32_t esi) {
    int64_t rax3;

    if (!1) {
    }
    *reinterpret_cast<uint32_t*>(&rax3) = rdi->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
    }
    rdi->f8 = *reinterpret_cast<uint32_t*>(&rax3);
    if (!1) {
        g443c70 = 0xffffffff;
    }
    return 0xffffffff;
}

uint32_t fun_4020de(struct s14* rdi) {
    uint32_t eax2;

    eax2 = 0;
    if (reinterpret_cast<int32_t>(rdi->f8) >= reinterpret_cast<int32_t>(0)) {
        eax2 = rdi->f8;
    }
    return eax2;
}

int32_t fun_4020d4(struct s14* rdi) {
    int32_t eax2;

    eax2 = 0;
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(rdi->f8 == 0xffffffff);
    return eax2;
}

uint32_t fun_4020b3(struct s14* rdi, uint32_t esi);

uint64_t g442040 = 0;

struct s14** g442050 = reinterpret_cast<struct s14**>(0);

uint32_t fun_4020ec(struct s14* rdi) {
    uint32_t r12d2;
    uint64_t rax3;
    int1_t zf4;
    uint32_t eax5;
    uint32_t eax6;
    uint64_t rax7;
    uint64_t r13_8;
    struct s14** rax9;
    struct s14* rdi10;
    uint32_t eax11;

    if (rdi) {
        r12d2 = 0;
        if (rdi->fc == -1 || (*reinterpret_cast<int32_t*>(&rax3) = rdi->f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0, zf4 = (g440798 & rax3) == 0, zf4)) {
            addr_40218c_3:
            return r12d2;
        } else {
            r12d2 = rdi->f8;
            if (r12d2) {
                if (r12d2 == 0xffffffff) {
                    r12d2 = 0;
                    goto addr_40218c_3;
                } else {
                    eax5 = fun_4020b3(rdi, r12d2);
                    r12d2 = eax5;
                    goto addr_40218c_3;
                }
            } else {
                while (rdi->f10 != rdi->f14) {
                    eax6 = fun_4021be(rdi);
                    if (eax6 == 0xffffffff) 
                        goto addr_40212b_10;
                    rdi = rdi;
                    r12d2 = r12d2 + eax6;
                }
                goto addr_40218c_3;
            }
        }
    } else {
        rax7 = g442040;
        r12d2 = 0;
        r13_8 = rax7 - 1;
        while (r13_8 != 0xffffffffffffffff) {
            rax9 = g442050;
            rdi10 = rax9[r13_8];
            if (rdi10) {
                eax11 = fun_4020ec(rdi10);
                if (eax11 == 0xffffffff) 
                    goto addr_40212b_10;
                r12d2 = r12d2 + eax11;
            }
            --r13_8;
        }
        goto addr_40218c_3;
    }
    addr_40212b_10:
    r12d2 = 0xffffffff;
    goto addr_40218c_3;
}

struct s15* fun_404c87(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

uint32_t fun_40228b(struct s14* rdi);

uint32_t fun_4021be(struct s14* rdi) {
    int64_t rsi2;
    uint32_t ebx3;
    uint32_t ebx4;
    int64_t rsi5;
    int32_t edi6;
    int64_t rdx7;
    int64_t rcx8;
    struct s15* rax9;
    int64_t rcx10;
    uint32_t eax11;

    *reinterpret_cast<uint32_t*>(&rsi2) = rdi->f10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
    ebx3 = rdi->f14;
    if (*reinterpret_cast<uint32_t*>(&rsi2) >= ebx3) {
        ebx3 = rdi->f20;
    }
    ebx4 = ebx3 - *reinterpret_cast<uint32_t*>(&rsi2);
    rsi5 = rsi2 + rdi->f18;
    edi6 = rdi->fc;
    *reinterpret_cast<uint32_t*>(&rdx7) = ebx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rax9 = fun_404c87(edi6, rsi5, rdx7, rcx8);
    if (!reinterpret_cast<int1_t>(rax9 == 0xffffffffffffffff)) {
        *reinterpret_cast<uint32_t*>(&rcx10) = rdi->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        rdi->f10 = *reinterpret_cast<int32_t*>(&rax9) + rdi->f10 & static_cast<uint32_t>(rcx10 - 1);
        eax11 = ebx4;
    } else {
        eax11 = fun_40228b(rdi);
    }
    return eax11;
}

uint32_t fun_4020b3(struct s14* rdi, uint32_t esi) {
    int64_t rax3;

    if (!esi) {
        esi = 0xffffffff;
    }
    *reinterpret_cast<uint32_t*>(&rax3) = rdi->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax3) = esi;
    }
    rdi->f8 = *reinterpret_cast<uint32_t*>(&rax3);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi == 0))) {
        g443c70 = esi;
    }
    return 0xffffffff;
}

struct s24 {
    int64_t f0;
    int32_t f8;
};

struct s15* fun_401dba(void*** rdi, struct s24* rsi, int64_t rdx, struct s15* rcx);

struct s15* fun_4018c7(int64_t rdi, int64_t rsi);

struct s15* fun_0(void** rdi, void* rsi, int64_t rdx);

struct s15* fun_404de0(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_4018d7();

struct s15* fun_404c87(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
    void* rbp5;
    int64_t r12_6;
    unsigned char al7;
    int1_t zf8;
    unsigned char al9;
    unsigned char al10;
    int64_t rdi11;
    unsigned char al12;
    void*** tmp64_13;
    struct s15* rax14;
    void** tmp64_15;
    int64_t rdi16;
    void*** tmp64_17;
    void** rdi18;
    int32_t eax19;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r12_6 = edi;
    if (*reinterpret_cast<int32_t*>(&r12_6) != -1) {
        al7 = fun_404c6c(*reinterpret_cast<int32_t*>(&r12_6), 5);
        if (!al7) {
            zf8 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
            if (!zf8) {
                al9 = fun_404c6c(*reinterpret_cast<int32_t*>(&r12_6), 2);
                if (!al9) {
                    al10 = fun_404c6c(*reinterpret_cast<int32_t*>(&r12_6), 1);
                    if (al10 || (*reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(&r12_6), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0, al12 = fun_404c6c(*reinterpret_cast<int32_t*>(&rdi11), 4), !!al12)) {
                        tmp64_13 = g443ab0 + *reinterpret_cast<int32_t*>(&r12_6) * 3;
                        rax14 = fun_401dba(tmp64_13, reinterpret_cast<int64_t>(rbp5) - 48, 1, 0xffffffffffffffff);
                    } else {
                        rax14 = fun_4018c7(rdi11, 4);
                    }
                } else {
                    tmp64_15 = reinterpret_cast<void**>(g443ab0 + *reinterpret_cast<int32_t*>(&r12_6) * 3);
                    rax14 = fun_0(tmp64_15, reinterpret_cast<int64_t>(rbp5) - 48, 1);
                }
            } else {
                *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(&r12_6);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = 0;
                rax14 = fun_404de0(rdi16, rsi, rdx);
            }
        } else {
            tmp64_17 = g443ab0 + r12_6 * 3;
            rdi18 = *tmp64_17;
            rax14 = fun_0(rdi18, reinterpret_cast<int64_t>(rbp5) - 48, 1);
        }
    } else {
        eax19 = fun_4018d7();
        rax14 = reinterpret_cast<struct s15*>(static_cast<int64_t>(eax19));
    }
    return rax14;
}

uint32_t fun_40228b(struct s14* rdi) {
    uint32_t esi2;
    int64_t rax3;

    esi2 = g443c70;
    if (!esi2) {
        esi2 = 0xffffffff;
    }
    *reinterpret_cast<uint32_t*>(&rax3) = rdi->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax3) = esi2;
    }
    rdi->f8 = *reinterpret_cast<uint32_t*>(&rax3);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi2 == 0))) {
        g443c70 = esi2;
    }
    return 0xffffffff;
}

struct s26 {
    struct s15* f0;
    signed char[4] pad8;
    struct s15* f8;
    signed char[4] pad16;
    struct s26* f10;
    uint32_t f18;
};

struct s25 {
    struct s15* f0;
    uint32_t f4;
    int64_t f8;
    signed char[16] pad32;
    struct s15* f20;
    signed char[20] pad56;
    int64_t f38;
    signed char[792] pad856;
    uint64_t f358;
    signed char[40] pad904;
    struct s26* f388;
};

uint32_t fun_40452c(struct s15* rdi, struct s15* rsi, struct s15* rdx, ...);

struct s15* fun_4022ef(struct s25* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx) {
    struct s15* r14_5;
    struct s25* r12_6;
    uint32_t r13d7;
    uint32_t r13d8;
    struct s15* rdi9;
    struct s15* rdx10;
    void* rdx11;
    int64_t rbx12;
    void* rbx13;
    struct s15* rbx14;
    struct s15* rdx15;
    int64_t rdx16;
    void* r15_17;
    struct s15* rdx18;
    struct s26* r8_19;
    struct s15* rax20;
    struct s15* rsi21;
    struct s15* rcx22;
    uint32_t eax23;
    uint64_t rdx24;
    struct s15* eax25;
    uint32_t edx26;
    uint32_t ecx27;
    int64_t rax28;
    uint64_t rcx29;
    int64_t rcx30;
    uint32_t edx31;
    struct s15* ecx32;
    uint32_t esi33;
    int64_t rsi34;
    int64_t rdx35;
    struct s15* rdx36;
    struct s15* r9_37;
    struct s15* rdx38;
    uint32_t ecx39;
    uint64_t rcx40;
    uint64_t rax41;
    uint64_t rax42;
    struct s15* rax43;

    *reinterpret_cast<int32_t*>(&r14_5) = 0;
    *reinterpret_cast<int32_t*>(&r14_5 + 1) = 0;
    r12_6 = rdi;
    if (!rdi->f388 || ((r13d7 = rdi->f388->f18, (*reinterpret_cast<unsigned char*>(&r13d7) & 1) == 0) || (r13d8 = r13d7 & 8, !!r13d8))) {
        addr_402591_2:
        r12_6->f38 = 0x80;
        return r14_5;
    } else {
        rdi9 = rdi->f388->f0;
        rdx10 = rdi9;
        *reinterpret_cast<uint32_t*>(&rdx11) = *reinterpret_cast<uint32_t*>(&rdx10) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx11)) {
            rbx12 = reinterpret_cast<int64_t>(-reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rdi9) + 16));
            *reinterpret_cast<uint32_t*>(&rbx13) = *reinterpret_cast<uint32_t*>(&rbx12) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = 0;
            rdx11 = rbx13;
        }
        rbx14 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi9) + reinterpret_cast<uint64_t>(rdx11));
        *reinterpret_cast<int32_t*>(&r14_5) = 0;
        *reinterpret_cast<int32_t*>(&r14_5 + 1) = 0;
        rdx15 = rbx14->f8;
        *reinterpret_cast<uint32_t*>(&rdx16) = *reinterpret_cast<uint32_t*>(&rdx15) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        if (rdx16 - 1) 
            goto addr_402591_2;
    }
    r14_5 = rdi->f388->f8;
    r15_17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx14->f8) & 0xfffffffffffffff8);
    rdx18 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi9) + reinterpret_cast<uint32_t>(r14_5) + 0xffffffffffffffb0);
    if (reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rbx14) + reinterpret_cast<uint64_t>(r15_17)) < reinterpret_cast<uint32_t>(rdx18)) {
        addr_40258e_7:
        *reinterpret_cast<int32_t*>(&r14_5) = 0;
        *reinterpret_cast<int32_t*>(&r14_5 + 1) = 0;
        goto addr_402591_2;
    } else {
        r8_19 = rdi->f388->f10;
        if (r12_6->f20 == rbx14) {
            r12_6->f20 = reinterpret_cast<struct s15*>(0);
            r12_6->f8 = 0;
            goto addr_40246c_10;
        }
        rax20 = (rbx14 + 2)->f0;
        rsi21 = (rbx14 + 4)->f0;
        if (rax20 != rbx14) 
            goto addr_4023a9_12;
    }
    rax20 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 40);
    rcx22 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx14) + 40);
    if (rax20) {
        addr_4023d1_14:
        rdx18 = rax20;
    } else {
        rax20 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 32);
        if (!rax20) {
            addr_4023fb_16:
            if (!rsi21) {
                addr_40246c_10:
                eax23 = fun_40452c(rdi9, r14_5, rdx18, rdi9, r14_5, rdx18);
                if (eax23) {
                    rdx24 = reinterpret_cast<uint64_t>(r15_17) >> 8;
                    eax25 = *reinterpret_cast<struct s15**>(&rdx24);
                    if (*reinterpret_cast<struct s15**>(&rdx24) && (eax25 = reinterpret_cast<struct s15*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdx24)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx26 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdx24)) ^ 31;
                        ecx27 = 38 - edx26;
                        *reinterpret_cast<void**>(&rax28) = reinterpret_cast<void*>(31 - edx26);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                        rcx29 = reinterpret_cast<uint64_t>(r15_17) >> *reinterpret_cast<signed char*>(&ecx27);
                        *reinterpret_cast<uint32_t*>(&rcx30) = *reinterpret_cast<uint32_t*>(&rcx29) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = 0;
                        eax25 = reinterpret_cast<struct s15*>(static_cast<uint32_t>(rcx30 + rax28 * 2));
                    }
                    edx31 = r12_6->f4;
                    ecx32 = eax25;
                    esi33 = 1 << *reinterpret_cast<unsigned char*>(&ecx32);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 56) = eax25;
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 40) = reinterpret_cast<struct s15*>(0);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 32) = reinterpret_cast<struct s15*>(0);
                    *reinterpret_cast<struct s15**>(&rsi34) = eax25;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = 0;
                    if (edx31 & esi33) 
                        goto addr_402513_20; else 
                        goto addr_4024f6_21;
                } else {
                    r12_6->f358 = r12_6->f358 - reinterpret_cast<uint32_t>(r14_5);
                    r12_6->f388 = r8_19;
                    goto addr_402591_2;
                }
            } else {
                *reinterpret_cast<struct s15**>(&rdx35) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = 0;
                rdx18 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(r12_6) + rdx35 * 8);
                if ((rdx18 + 50)->f0 != rbx14) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi21) + 32) != rbx14) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi21) + 40) = rax20;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi21) + 32) = rax20;
                    }
                    if (rax20) 
                        goto addr_40241f_28;
                    goto addr_40246c_10;
                } else {
                    (rdx18 + 50)->f0 = rax20;
                    if (!rax20) {
                        __asm__("rol eax, cl");
                        r12_6->f4 = r12_6->f4 & 0xfffffffe;
                        goto addr_40246c_10;
                    } else {
                        addr_40241f_28:
                        rdx36 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 32);
                        (rax20 + 4)->f0 = rsi21;
                        if (rdx36) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 32) = rdx36;
                            (rdx36 + 4)->f0 = rax20;
                            goto addr_40245b_33;
                        }
                    }
                }
            }
        } else {
            rcx22 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx14) + 32);
            goto addr_4023d1_14;
        }
    }
    addr_4023d4_35:
    r9_37 = rcx22;
    rax20 = rdx18;
    rcx22 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx18) + 40);
    rdx18 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx18) + 40);
    if (rdx18) 
        goto addr_4023d4_35;
    rdx18 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 32);
    rcx22 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax20) + 32);
    if (rdx18) 
        goto addr_4023d4_35;
    *reinterpret_cast<struct s15**>(&r9_37->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_4023fb_16;
    addr_402513_20:
    rdx38 = *reinterpret_cast<struct s15**>(reinterpret_cast<int64_t>(r12_6) + rsi34 * 8 + 0x258);
    if (eax25 != 31) {
        r13d8 = 57 - (reinterpret_cast<uint32_t>(eax25) >> 1);
    }
    ecx39 = r13d8;
    rcx40 = reinterpret_cast<uint64_t>(r15_17) << *reinterpret_cast<unsigned char*>(&ecx39);
    while ((reinterpret_cast<uint32_t>(rdx38->f8) & 0xfffffffffffffff8) != r15_17) {
        rax41 = rcx40;
        rcx40 = rcx40 + rcx40;
        rax42 = (rax41 >> 63) + 4;
        if (!*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx38) + rax42 * 8)) 
            goto addr_402560_42;
        rdx38 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx38) + rax42 * 8);
    }
    rax43 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx38) + 16);
    (rax43 + 2)->f0 = rbx14;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx38) + 16) = rbx14;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 16) = rax43;
    (rbx14 + 2)->f0 = rdx38;
    (rbx14 + 4)->f0 = reinterpret_cast<struct s15*>(0);
    goto addr_40258e_7;
    addr_402560_42:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx38) + rax42 * 8) = rbx14;
    (rbx14 + 4)->f0 = rdx38;
    addr_402568_45:
    (rbx14 + 2)->f0 = rbx14;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 16) = rbx14;
    goto addr_40258e_7;
    addr_4024f6_21:
    r12_6->f4 = edx31 | esi33;
    *reinterpret_cast<struct s15**>(reinterpret_cast<int64_t>(r12_6) + rsi34 * 8 + 0x258) = rbx14;
    (rbx14 + 4)->f0 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(r12_6) + rsi34 * 8 + 0x258);
    goto addr_402568_45;
    addr_40245b_33:
    rdx18 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 40);
    if (rdx18) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 40) = rdx18;
        (rdx18 + 4)->f0 = rax20;
        goto addr_40246c_10;
    }
    addr_4023a9_12:
    rdx18 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx14) + 16);
    (rdx18 + 2)->f0 = rax20;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 16) = rdx18;
    goto addr_4023fb_16;
}

struct s15* fun_4018f7();

struct s15* fun_404abb() {
    struct s15* rax1;

    rax1 = fun_4018f7();
    return rax1;
}

uint32_t fun_404ac1(struct s15* rdi, struct s15* rsi);

uint32_t fun_40452c(struct s15* rdi, struct s15* rsi, struct s15* rdx, ...) {
    uint32_t eax4;

    eax4 = fun_404ac1(rdi, rsi);
    return eax4;
}

struct s15* g442480 = reinterpret_cast<struct s15*>(0);

void fun_4022a8(struct s15* rdi, struct s15* rsi, struct s15* rdx) {
    struct s15* rax4;
    void* rax5;
    int64_t rax6;
    struct s15* rcx7;
    struct s15* r8_8;
    struct s15* rax9;

    rax4 = rsi;
    *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax5)) {
        rax6 = reinterpret_cast<int64_t>(-reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rsi) + 16));
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax6) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    rcx7 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi) + reinterpret_cast<uint64_t>(rax5));
    r8_8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) - reinterpret_cast<uint64_t>(rax5));
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi) + 40) = rcx7;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi) + 16) = r8_8;
    rcx7->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r8_8) | 1);
    rax9 = g442480;
    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rsi) + reinterpret_cast<uint32_t>(rdx) + 8) = 80;
    (rdi + 4)->f0 = rax9;
    return;
}

struct s15* fun_40481d(struct s15* rdi);

struct s15* fun_404518(struct s15* rdi) {
    struct s15* rax2;

    rax2 = fun_40481d(rdi);
    return rax2;
}

uint32_t g4420a4 = 0;

uint32_t g4420a0 = 0;

struct s15* g4420a8 = reinterpret_cast<struct s15*>(0);

struct s15* g4420b0 = reinterpret_cast<struct s15*>(0);

void* g442470 = reinterpret_cast<void*>(0);

int32_t g442410 = 0;

struct s15* g442478 = reinterpret_cast<struct s15*>(0);

uint64_t g442408 = 0;

uint64_t g4423f8 = 0;

uint64_t g442400 = 0;

struct s15* g4420c8 = reinterpret_cast<struct s15*>(0);

struct s15* g4420b8 = reinterpret_cast<struct s15*>(0);

struct s15* g4420c0 = reinterpret_cast<struct s15*>(0);

struct s27 {
    struct s15* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s15* g442418 = reinterpret_cast<struct s15*>(0);

struct s15* g442420 = reinterpret_cast<struct s15*>(0);

uint32_t g442430 = 0;

struct s28 {
    struct s15* f0;
    signed char[4] pad8;
    void* f8;
    struct s28* f10;
};

struct s15* g442428 = reinterpret_cast<struct s15*>(0);

uint64_t g442460 = 0;

int64_t g4420d8 = 0;

uint64_t g4420e0 = 0;

struct s29 {
    signed char[16] pad16;
    struct s29* f10;
    struct s29* f18;
};

struct s30 {
    struct s30* f0;
    uint64_t f8;
    struct s30* f10;
    struct s30* f18;
    int64_t f20;
    int64_t f28;
    struct s30* f30;
    uint32_t f38;
};

struct s31 {
    struct s15* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s15* fun_402b64(struct s15* rdi, struct s16* rsi, void* rdx, struct s15* rcx) {
    struct s15* rbx5;
    uint32_t edi6;
    uint64_t rax7;
    void* r9_8;
    uint32_t esi9;
    uint32_t eax10;
    uint32_t ecx11;
    int64_t rsi12;
    uint64_t rdx13;
    int64_t rdx14;
    int64_t rax15;
    struct s15* rdx16;
    struct s15* rax17;
    uint32_t esi18;
    uint64_t rcx19;
    uint32_t eax20;
    uint32_t ecx21;
    uint32_t eax22;
    int64_t rax23;
    void* rcx24;
    struct s15* rcx25;
    struct s15* rdx26;
    struct s15* rdx27;
    struct s15* rax28;
    void* rcx29;
    uint64_t rdx30;
    int1_t zf31;
    int1_t cf32;
    uint64_t rsi33;
    struct s15* r12_34;
    uint64_t rdi35;
    uint64_t rax36;
    struct s15* r12_37;
    uint64_t rdx38;
    uint64_t rcx39;
    uint64_t rax40;
    struct s15* rax41;
    struct s15* rax42;
    struct s15* r9_43;
    uint64_t rax44;
    uint64_t rax45;
    int1_t below_or_equal46;
    struct s15* r10_47;
    struct s15* rdx48;
    uint64_t tmp64_49;
    int1_t below_or_equal50;
    struct s15* rdx51;
    struct s15* rcx52;
    struct s27* rsi53;
    struct s15* rdx54;
    struct s15* rdx55;
    struct s15* rsi56;
    void* r10_57;
    struct s15* rcx58;
    struct s15* r8_59;
    struct s15* rax60;
    struct s15* rdx61;
    uint32_t ecx62;
    int1_t cf63;
    struct s28* rcx64;
    uint32_t esi65;
    uint32_t r11d66;
    struct s15* rsi67;
    struct s15* rdx68;
    struct s15* rdx69;
    struct s15* r13_70;
    void* rax71;
    void* rdx72;
    void* rdx73;
    int64_t rax74;
    void* rax75;
    struct s15* r11_76;
    struct s15* rax77;
    struct s15* rdi78;
    int32_t ecx79;
    struct s15* rax80;
    struct s15* rdx81;
    uint64_t rcx82;
    uint64_t rdx83;
    struct s15* eax84;
    uint32_t edx85;
    uint32_t ecx86;
    int64_t rax87;
    uint64_t rcx88;
    int64_t rcx89;
    uint32_t edx90;
    struct s15* ecx91;
    uint32_t edi92;
    uint32_t edx93;
    int64_t rax94;
    struct s15* rax95;
    struct s15* rdx96;
    struct s15* rcx97;
    uint32_t ecx98;
    struct s15* rdx99;
    uint64_t rcx100;
    uint64_t rax101;
    uint64_t rax102;
    struct s15* rax103;
    struct s15* rcx104;
    void* rcx105;
    int64_t rcx106;
    struct s15* rdx107;
    struct s15* rax108;
    void* r8_109;
    int1_t zf110;
    struct s15* rcx111;
    int64_t rcx112;
    uint64_t rcx113;
    uint64_t rsi114;
    struct s15* edx115;
    uint32_t esi116;
    uint32_t ecx117;
    int64_t rdx118;
    uint64_t rcx119;
    int64_t rcx120;
    uint32_t esi121;
    struct s15* ecx122;
    uint32_t edi123;
    int64_t rdi124;
    uint32_t esi125;
    int64_t rdx126;
    uint32_t edi127;
    struct s15* rdx128;
    struct s15* rcx129;
    struct s15* rsi130;
    void* rbx131;
    struct s15* rdi132;
    struct s15* rdi133;
    struct s15* tmp64_134;
    struct s15* rsi135;
    uint32_t ecx136;
    uint64_t rcx137;
    uint64_t rdx138;
    uint64_t rdx139;
    struct s15* rdx140;
    struct s15* r10_141;
    struct s15* rcx142;
    int64_t r10_143;
    struct s15* rcx144;
    struct s15* r12_145;
    struct s15* rcx146;
    struct s15* rcx147;
    struct s15* tmp64_148;
    struct s15* rax149;
    uint64_t rax150;
    struct s29* rax151;
    struct s15* rcx152;
    struct s15* r11_153;
    struct s30* r8_154;
    uint64_t rcx155;
    uint64_t rsi156;
    uint32_t edx157;
    uint32_t esi158;
    uint32_t ecx159;
    int64_t rdx160;
    uint64_t rcx161;
    int64_t rcx162;
    uint32_t esi163;
    uint32_t ecx164;
    uint32_t edi165;
    int64_t rdi166;
    uint32_t esi167;
    int64_t rdx168;
    uint32_t edi169;
    struct s30* rdx170;
    struct s30* rcx171;
    int64_t r8_172;
    struct s15* rcx173;
    uint32_t ecx174;
    struct s30* rsi175;
    uint64_t rcx176;
    uint64_t rdx177;
    uint64_t rdx178;
    struct s30* rdx179;
    struct s15* rcx180;
    uint32_t ecx181;
    struct s15* r11_182;
    struct s15* r10_183;
    uint64_t rcx184;
    void* rdx185;
    struct s15* r9_186;
    uint32_t edi187;
    int64_t rax188;
    struct s15* rcx189;
    struct s15* r8_190;
    struct s15* rdx191;
    struct s15* rcx192;
    struct s15* rdx193;
    struct s15* r10_194;
    void* r12_195;
    int64_t rdi196;
    uint32_t r8d197;
    int64_t rcx198;
    int64_t rax199;
    void* rdi200;
    struct s15* r10_201;
    void* r8_202;
    struct s15* r11_203;
    struct s31* rdx204;
    struct s15* rsi205;
    struct s15* rbx206;
    uint32_t r10d207;
    uint64_t rcx208;
    struct s15* rdx209;
    int64_t r8_210;
    uint32_t r11d211;
    struct s15* r8_212;
    struct s15* rcx213;
    struct s15* rbx214;
    struct s15* r11_215;
    struct s15* rcx216;
    struct s15* r10_217;
    struct s15* rdx218;
    uint64_t rcx219;
    int64_t rdi220;
    uint32_t r9d221;
    struct s15* rdi222;
    struct s15* rcx223;
    int64_t r11_224;
    struct s15* rcx225;
    struct s15* r13_226;
    struct s15* rcx227;
    struct s15* rcx228;
    int64_t rcx229;
    int64_t rax230;
    void* r9_231;
    struct s15* rdi232;
    void* rdx233;
    struct s15* r8_234;
    struct s15* rbx235;

    if (reinterpret_cast<uint32_t>(rdi) > reinterpret_cast<uint32_t>(0xe0)) {
        if (reinterpret_cast<uint32_t>(rdi) > reinterpret_cast<uint32_t>(0xffffffffffffff7f)) {
            rbx5 = reinterpret_cast<struct s15*>(0xffffffffffffffff);
            goto addr_403291_4;
        }
        edi6 = g4420a4;
        rbx5 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi) + 31 & 0xfffffffffffffff0);
        if (!edi6) 
            goto addr_403291_4;
        rax7 = reinterpret_cast<uint32_t>(rbx5) >> 8;
        r9_8 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(rbx5));
        esi9 = *reinterpret_cast<uint32_t*>(&rax7);
        if (*reinterpret_cast<uint32_t*>(&rax7) && (esi9 = 31, *reinterpret_cast<uint32_t*>(&rax7) <= 0xffff)) {
            __asm__("bsr eax, eax");
            eax10 = *reinterpret_cast<uint32_t*>(&rax7) ^ 31;
            ecx11 = 38 - eax10;
            *reinterpret_cast<uint32_t*>(&rsi12) = 31 - eax10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
            rdx13 = reinterpret_cast<uint32_t>(rbx5) >> *reinterpret_cast<signed char*>(&ecx11);
            *reinterpret_cast<uint32_t*>(&rdx14) = *reinterpret_cast<uint32_t*>(&rdx13) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
            esi9 = static_cast<uint32_t>(rdx14 + rsi12 * 2);
        }
        *reinterpret_cast<uint32_t*>(&rax15) = esi9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx16) = 0;
        *reinterpret_cast<int32_t*>(&rdx16 + 1) = 0;
        rax17 = *reinterpret_cast<struct s15**>(rax15 * 8 + 0x4422f8);
        if (rax17) 
            goto addr_402f46_9;
    } else {
        *reinterpret_cast<int32_t*>(&rbx5) = 32;
        *reinterpret_cast<int32_t*>(&rbx5 + 1) = 0;
        if (reinterpret_cast<uint32_t>(rdi) > reinterpret_cast<uint32_t>(14)) {
            rbx5 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi) + 31 & 0xfffffffffffffff0);
        }
        esi18 = g4420a0;
        rcx19 = reinterpret_cast<uint32_t>(rbx5) >> 3;
        eax20 = esi18 >> *reinterpret_cast<unsigned char*>(&rcx19);
        if (!(*reinterpret_cast<unsigned char*>(&eax20) & 3)) 
            goto addr_402bf4_13; else 
            goto addr_402ba3_14;
    }
    addr_402fba_15:
    if (!(reinterpret_cast<uint32_t>(rdx16) | reinterpret_cast<uint32_t>(rax17))) {
        ecx21 = esi9;
        eax22 = 0xfffffffe << *reinterpret_cast<unsigned char*>(&ecx21) & edi6;
        if (!eax22) 
            goto addr_403291_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax23) = -eax22 & eax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        rdx16 = *reinterpret_cast<struct s15**>(rax23 * 8 + 0x4422f8);
        *reinterpret_cast<int32_t*>(&rax17) = 0;
        *reinterpret_cast<int32_t*>(&rax17 + 1) = 0;
    }
    while (rdx16) {
        rcx24 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rdx16->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rcx24) < reinterpret_cast<uint64_t>(r9_8)) {
            r9_8 = rcx24;
            rax17 = rdx16;
        }
        rcx25 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx16) + 32);
        if (!rcx25) {
            rcx25 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx16) + 40);
        }
        rdx16 = rcx25;
    }
    rdx26 = g4420a8;
    if (!rax17 || reinterpret_cast<uint64_t>(r9_8) >= reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx26) - reinterpret_cast<uint32_t>(rbx5))) {
        addr_403291_4:
        rdx27 = g4420a8;
        if (reinterpret_cast<uint32_t>(rdx27) < reinterpret_cast<uint32_t>(rbx5)) {
            rax28 = g4420b0;
            if (reinterpret_cast<uint32_t>(rax28) <= reinterpret_cast<uint32_t>(rbx5)) {
                rcx29 = g442470;
                rdx30 = -reinterpret_cast<uint64_t>(rcx29);
                zf31 = (*reinterpret_cast<unsigned char*>(&g442410) & 1) == 0;
                if (zf31 || ((cf32 = reinterpret_cast<uint32_t>(rbx5) < reinterpret_cast<uint32_t>(g442478), cf32) || (!rax28 || ((rsi33 = g442408, r12_34 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx29) + 62 & rdx30), !!rsi33) && ((rdi35 = g4423f8, rax36 = rdi35 + reinterpret_cast<uint32_t>(r12_34), rdi35 >= rax36) || rsi33 < rax36) || reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_34))))) {
                    r12_37 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx29) + 95 & rdx30);
                    if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_37) || (rdx38 = g442408, !!rdx38) && ((rcx39 = g4423f8, rax40 = reinterpret_cast<uint32_t>(r12_37) + rcx39, rcx39 >= rax40) || rdx38 < rax40)) {
                        addr_403ade_28:
                        *reinterpret_cast<int32_t*>(&rax41) = 0;
                        *reinterpret_cast<int32_t*>(&rax41 + 1) = 0;
                    } else {
                        rax42 = fun_404518(r12_37);
                        r9_43 = rax42;
                        rax44 = g4423f8;
                        rax45 = rax44 + reinterpret_cast<uint32_t>(r12_37);
                        below_or_equal46 = rax45 <= g442400;
                        g4423f8 = rax45;
                        if (!below_or_equal46) {
                            g442400 = rax45;
                        }
                        r10_47 = g4420c8;
                        if (r10_47) 
                            goto addr_4034bf_32; else 
                            goto addr_403451_33;
                    }
                } else {
                    rax17 = fun_404518(r12_34);
                    *reinterpret_cast<struct s15**>(&rax17->f0) = reinterpret_cast<struct s15*>(0);
                    rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r12_34) + 0xffffffffffffffe0);
                    rdx48 = g4420b8;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(r12_34) + 0xffffffffffffffe8) = 11;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(r12_34) + 0xfffffffffffffff0) = 0;
                    if (!rdx48 || reinterpret_cast<uint32_t>(rax17) < reinterpret_cast<uint32_t>(rdx48)) {
                        g4420b8 = rax17;
                    }
                    tmp64_49 = reinterpret_cast<uint32_t>(r12_34) + g4423f8;
                    below_or_equal50 = tmp64_49 <= g442400;
                    g4423f8 = tmp64_49;
                    if (!below_or_equal50) {
                        g442400 = tmp64_49;
                        goto addr_403ad3_38;
                    }
                }
            } else {
                rdx51 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax28) - reinterpret_cast<uint32_t>(rbx5));
                goto addr_403aaa_40;
            }
        } else {
            rax17 = g4420c0;
            rcx52 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx27) - reinterpret_cast<uint32_t>(rbx5));
            rsi53 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rdx27));
            if (reinterpret_cast<uint32_t>(rcx52) <= reinterpret_cast<uint32_t>(31)) {
                g4420a8 = reinterpret_cast<struct s15*>(0);
                g4420c0 = reinterpret_cast<struct s15*>(0);
                rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx27) | 3);
                rsi53->f8 = rsi53->f8 | 1;
                goto addr_403ad3_38;
            } else {
                rdx54 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
                g4420a8 = rcx52;
                g4420c0 = rdx54;
                rdx54->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx52) | 1);
                rsi53->f0 = rcx52;
                goto addr_403acb_44;
            }
        }
    } else {
        rdx55 = (rax17 + 2)->f0;
        rsi56 = (rax17 + 4)->f0;
        r10_57 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(r9_8));
        if (rdx55 != rax17) {
            rcx58 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 16);
            (rcx58 + 2)->f0 = rdx55;
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx55) + 16) = rcx58;
            goto addr_403094_47;
        }
        rdx55 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 40);
        r8_59 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + 40);
        if (rdx55) 
            goto addr_40306a_49; else 
            goto addr_40305d_50;
    }
    addr_403ae0_51:
    return rax41;
    addr_4034bf_32:
    rax60 = g442418;
    rdx61 = g442420;
    if (!reinterpret_cast<int1_t>(r9_43 == reinterpret_cast<uint32_t>(rax60) + reinterpret_cast<uint32_t>(rdx61)) || ((ecx62 = g442430, !!(*reinterpret_cast<unsigned char*>(&ecx62) & 8)) || (!(*reinterpret_cast<unsigned char*>(&ecx62) & 1) || (reinterpret_cast<uint32_t>(r10_47) < reinterpret_cast<uint32_t>(rax60) || reinterpret_cast<uint32_t>(r9_43) <= reinterpret_cast<uint32_t>(r10_47))))) {
        cf63 = reinterpret_cast<uint32_t>(r9_43) < reinterpret_cast<uint32_t>(g4420b8);
        if (cf63) {
            g4420b8 = r9_43;
        }
        *reinterpret_cast<int32_t*>(&rcx64) = 0x442418;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx64) + 4) = 0;
        if (!reinterpret_cast<int1_t>(rax60 == reinterpret_cast<uint32_t>(r9_43) + reinterpret_cast<uint32_t>(r12_37))) 
            goto addr_403884_55;
        esi65 = g442430;
        r11d66 = esi65 & 8;
        if (r11d66) 
            goto addr_403884_55;
        if (*reinterpret_cast<unsigned char*>(&esi65) & 1) 
            goto addr_403555_58;
    } else {
        rsi67 = r10_47;
        g442420 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx61) + reinterpret_cast<uint32_t>(r12_37));
        rdx68 = g4420b0;
        rdx69 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx68) + reinterpret_cast<uint32_t>(r12_37));
        goto addr_403507_60;
    }
    do {
        addr_403884_55:
        r13_70 = rcx64->f0;
        if (reinterpret_cast<uint32_t>(r10_47) < reinterpret_cast<uint32_t>(r13_70)) 
            continue;
        r13_70 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rcx64->f8));
        if (reinterpret_cast<uint32_t>(r10_47) < reinterpret_cast<uint32_t>(r13_70)) 
            break;
        rcx64 = rcx64->f10;
    } while (rcx64);
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
    r11_76 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rdx73) + 0xffffffffffffffa1);
    if (reinterpret_cast<uint32_t>(r11_76) < reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(r10_47) + 32)) {
        r11_76 = r10_47;
    }
    fun_4022a8(0x4420a0, r9_43, reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffb0);
    rax77 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r11_76) + 16);
    r11_76->f8 = reinterpret_cast<struct s15*>(51);
    rdi78 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r11_76) + 16);
    *reinterpret_cast<uint32_t*>(&rsi67) = 0x442418;
    *reinterpret_cast<int32_t*>(&rsi67 + 1) = 0;
    ecx79 = 8;
    while (ecx79) {
        --ecx79;
        *reinterpret_cast<struct s15**>(&rdi78->f0) = *reinterpret_cast<struct s15**>(&rsi67->f0);
        rdi78 = reinterpret_cast<struct s15*>(&rdi78->pad8);
        rsi67 = reinterpret_cast<struct s15*>(&rsi67->pad8);
    }
    g442428 = rax77;
    rax80 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r11_76) + 56);
    g442418 = r9_43;
    g442420 = r12_37;
    g442430 = 1;
    do {
        *reinterpret_cast<struct s15**>(&rax80->f0) = reinterpret_cast<struct s15*>(11);
        rax80 = reinterpret_cast<struct s15*>(&rax80->f8);
    } while (reinterpret_cast<uint32_t>(r13_70) > reinterpret_cast<uint32_t>(rax80));
    if (r10_47 == r11_76) {
        addr_403a9b_74:
        rdx81 = g4420b0;
        if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(rdx81)) {
            fun_4018e7(rdi78, rsi67, rdx81);
            goto addr_403ade_28;
        } else {
            rdx51 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx81) - reinterpret_cast<uint32_t>(rbx5));
        }
    } else {
        r11_76->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r11_76->f8) & 0xfffffffffffffffe);
        rsi67 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r11_76) - reinterpret_cast<uint32_t>(r10_47));
        rcx82 = reinterpret_cast<uint32_t>(rsi67) >> 3;
        r10_47->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi67) | 1);
        *reinterpret_cast<struct s15**>(&r11_76->f0) = rsi67;
        if (reinterpret_cast<uint32_t>(rsi67) > reinterpret_cast<uint32_t>(0xff)) {
            rdx83 = reinterpret_cast<uint32_t>(rsi67) >> 8;
            eax84 = *reinterpret_cast<struct s15**>(&rdx83);
            if (*reinterpret_cast<struct s15**>(&rdx83) && (eax84 = reinterpret_cast<struct s15*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdx83)) <= 0xffff)) {
                __asm__("bsr edx, edx");
                edx85 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdx83)) ^ 31;
                ecx86 = 38 - edx85;
                *reinterpret_cast<void**>(&rax87) = reinterpret_cast<void*>(31 - edx85);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
                rcx88 = reinterpret_cast<uint32_t>(rsi67) >> *reinterpret_cast<signed char*>(&ecx86);
                *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rcx88) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
                eax84 = reinterpret_cast<struct s15*>(static_cast<uint32_t>(rcx89 + rax87 * 2));
            }
            edx90 = g4420a4;
            ecx91 = eax84;
            edi92 = 1 << *reinterpret_cast<unsigned char*>(&ecx91);
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_47) + 56) = eax84;
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_47) + 40) = reinterpret_cast<struct s15*>(0);
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_47) + 32) = reinterpret_cast<struct s15*>(0);
            rdi78 = eax84;
            *reinterpret_cast<int32_t*>(&rdi78 + 1) = 0;
            if (edx90 & edi92) 
                goto addr_403a23_81; else 
                goto addr_403a05_82;
        } else {
            edx93 = g4420a0;
            *reinterpret_cast<int32_t*>(&rax94) = static_cast<int32_t>(rcx82 + rcx82);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax94) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rsi67) = 1 << *reinterpret_cast<unsigned char*>(&rcx82);
            *reinterpret_cast<int32_t*>(&rsi67 + 1) = 0;
            rax95 = reinterpret_cast<struct s15*>(rax94 * 8 + 0x4420e8);
            if (edx93 & *reinterpret_cast<uint32_t*>(&rsi67)) {
                rdx96 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax95) + 16);
            } else {
                g4420a0 = edx93 | *reinterpret_cast<uint32_t*>(&rsi67);
                rdx96 = rax95;
            }
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax95) + 16) = r10_47;
            (rdx96 + 2)->f0 = r10_47;
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_47) + 16) = rdx96;
            (r10_47 + 2)->f0 = rax95;
            goto addr_403a9b_74;
        }
    }
    addr_403aaa_40:
    rax17 = g4420c8;
    g4420b0 = rdx51;
    rcx97 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
    g4420c8 = rcx97;
    rcx97->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx51) | 1);
    addr_403acb_44:
    rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    addr_403ad3_38:
    rax41 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + 16);
    goto addr_403ae0_51;
    addr_403a23_81:
    ecx98 = 0;
    rdx99 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi78) * 8 + 0x4422f8);
    if (eax84 != 31) {
        ecx98 = 57 - (reinterpret_cast<uint32_t>(eax84) >> 1);
    }
    rcx100 = reinterpret_cast<uint32_t>(rsi67) << *reinterpret_cast<unsigned char*>(&ecx98);
    while (rsi67 != (reinterpret_cast<uint32_t>(rdx99->f8) & 0xfffffffffffffff8)) {
        rax101 = rcx100;
        rcx100 = rcx100 + rcx100;
        rax102 = (rax101 >> 63) + 4;
        rdi78 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx99) + rax102 * 8);
        if (!rdi78) 
            goto addr_403a6d_91;
        rdx99 = rdi78;
    }
    rax103 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx99) + 16);
    (rax103 + 2)->f0 = r10_47;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx99) + 16) = r10_47;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_47) + 16) = rax103;
    (r10_47 + 2)->f0 = rdx99;
    (r10_47 + 4)->f0 = reinterpret_cast<struct s15*>(0);
    goto addr_403a9b_74;
    addr_403a6d_91:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx99) + rax102 * 8) = r10_47;
    (r10_47 + 4)->f0 = rdx99;
    addr_403a75_94:
    (r10_47 + 2)->f0 = r10_47;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_47) + 16) = r10_47;
    goto addr_403a9b_74;
    addr_403a05_82:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi78) * 8 + 0x4422f8) = r10_47;
    g4420a4 = edx90 | edi92;
    (r10_47 + 4)->f0 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi78) * 8 + 0x4422f8);
    goto addr_403a75_94;
    addr_40389e_63:
    __asm__("ud2 ");
    goto addr_4038a8_64;
    addr_403555_58:
    rcx104 = rax60;
    g442418 = r9_43;
    *reinterpret_cast<uint32_t*>(&rcx105) = *reinterpret_cast<uint32_t*>(&rcx104) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx105) + 4) = 0;
    g442420 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx61) + reinterpret_cast<uint32_t>(r12_37));
    if (*reinterpret_cast<uint32_t*>(&rcx105)) {
        rcx106 = reinterpret_cast<int64_t>(-reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rax60) + 16));
        *reinterpret_cast<uint32_t*>(&rcx105) = *reinterpret_cast<uint32_t*>(&rcx106) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx105) + 4) = 0;
    }
    rdx107 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax60) + reinterpret_cast<uint64_t>(rcx105));
    rax108 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r9_43) + reinterpret_cast<uint32_t>(rbx5));
    r8_109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx107) - reinterpret_cast<uint32_t>(r9_43)) - reinterpret_cast<uint32_t>(rbx5));
    r9_43->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    if (r10_47 == rdx107) 
        goto addr_403599_97;
    zf110 = rdx107 == g4420c0;
    if (!zf110) {
        rcx111 = rdx107->f8;
        *reinterpret_cast<uint32_t*>(&rcx112) = *reinterpret_cast<uint32_t*>(&rcx111) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx112) + 4) = 0;
        if (rcx112 - 1) {
            addr_40371a_100:
            rdx107->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx107->f8) & 0xfffffffffffffffe);
            rcx113 = reinterpret_cast<uint64_t>(r8_109) >> 3;
            rax108->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r8_109) | 1);
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rax108) + reinterpret_cast<uint64_t>(r8_109)) = r8_109;
            if (reinterpret_cast<uint64_t>(r8_109) > 0xff) {
                rsi114 = reinterpret_cast<uint64_t>(r8_109) >> 8;
                edx115 = *reinterpret_cast<struct s15**>(&rsi114);
                if (*reinterpret_cast<struct s15**>(&rsi114) && (edx115 = reinterpret_cast<struct s15*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rsi114)) <= 0xffff)) {
                    __asm__("bsr esi, esi");
                    esi116 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rsi114)) ^ 31;
                    ecx117 = 38 - esi116;
                    *reinterpret_cast<void**>(&rdx118) = reinterpret_cast<void*>(31 - esi116);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx118) + 4) = 0;
                    rcx119 = reinterpret_cast<uint64_t>(r8_109) >> *reinterpret_cast<signed char*>(&ecx117);
                    *reinterpret_cast<uint32_t*>(&rcx120) = *reinterpret_cast<uint32_t*>(&rcx119) & 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx120) + 4) = 0;
                    edx115 = reinterpret_cast<struct s15*>(static_cast<uint32_t>(rcx120 + rdx118 * 2));
                }
                esi121 = g4420a4;
                ecx122 = edx115;
                edi123 = 1 << *reinterpret_cast<unsigned char*>(&ecx122);
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + 56) = edx115;
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + 40) = reinterpret_cast<struct s15*>(0);
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + 32) = reinterpret_cast<struct s15*>(0);
                *reinterpret_cast<struct s15**>(&rdi124) = edx115;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi124) + 4) = 0;
                if (!(esi121 & edi123)) 
                    goto addr_4037e2_104;
            } else {
                esi125 = g4420a0;
                *reinterpret_cast<int32_t*>(&rdx126) = static_cast<int32_t>(rcx113 + rcx113);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx126) + 4) = 0;
                edi127 = 1 << *reinterpret_cast<unsigned char*>(&rcx113);
                rdx128 = reinterpret_cast<struct s15*>(rdx126 * 8 + 0x4420e8);
                if (esi125 & edi127) {
                    rcx129 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx128) + 16);
                } else {
                    rcx129 = rdx128;
                    g4420a0 = esi125 | edi127;
                }
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx128) + 16) = rax108;
                (rcx129 + 2)->f0 = rax108;
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + 16) = rcx129;
                (rax108 + 2)->f0 = rdx128;
                goto addr_40387b_109;
            }
        } else {
            rsi130 = (rdx107 + 2)->f0;
            rbx131 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx107->f8) & 0xfffffffffffffff8);
            if (reinterpret_cast<uint32_t>(rdx107->f8) <= reinterpret_cast<uint32_t>(0xff)) {
                rdi132 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 16);
                if (rdi132 != rsi130) {
                    (rdi132 + 2)->f0 = rsi130;
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi130) + 16) = rdi132;
                    goto addr_403714_113;
                } else {
                    __asm__("rol esi, cl");
                    g4420a0 = g4420a0 & 0xfffffffe;
                    goto addr_403714_113;
                }
            }
            rdi133 = (rdx107 + 4)->f0;
            if (rdx107 == rsi130) 
                goto addr_40365a_116; else 
                goto addr_40364c_117;
        }
    } else {
        tmp64_134 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r8_109) + reinterpret_cast<uint32_t>(g4420a8));
        g4420c0 = rax108;
        g4420a8 = tmp64_134;
        rax108->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(tmp64_134) | 1);
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + reinterpret_cast<uint32_t>(tmp64_134)) = tmp64_134;
        goto addr_40387b_109;
    }
    rsi135 = *reinterpret_cast<struct s15**>(rdi124 * 8 + 0x4422f8);
    if (edx115 != 31) {
        r11d66 = 57 - (reinterpret_cast<uint32_t>(edx115) >> 1);
    }
    ecx136 = r11d66;
    rcx137 = reinterpret_cast<uint64_t>(r8_109) << *reinterpret_cast<unsigned char*>(&ecx136);
    while (r8_109 != (reinterpret_cast<uint32_t>(rsi135->f8) & 0xfffffffffffffff8)) {
        rdx138 = rcx137;
        rcx137 = rcx137 + rcx137;
        rdx139 = (rdx138 >> 63) + 4;
        if (!*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi135) + rdx139 * 8)) 
            goto addr_40384d_124;
        rsi135 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi135) + rdx139 * 8);
    }
    rdx140 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi135) + 16);
    (rdx140 + 2)->f0 = rax108;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi135) + 16) = rax108;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + 16) = rdx140;
    (rax108 + 2)->f0 = rsi135;
    (rax108 + 4)->f0 = reinterpret_cast<struct s15*>(0);
    addr_40387b_109:
    rax41 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r9_43) + 16);
    goto addr_403ae0_51;
    addr_40384d_124:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi135) + rdx139 * 8) = rax108;
    (rax108 + 4)->f0 = rsi135;
    addr_403855_127:
    (rax108 + 2)->f0 = rax108;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax108) + 16) = rax108;
    goto addr_40387b_109;
    addr_4037e2_104:
    *reinterpret_cast<struct s15**>(rdi124 * 8 + 0x4422f8) = rax108;
    g4420a4 = esi121 | edi123;
    (rax108 + 4)->f0 = reinterpret_cast<struct s15*>(rdi124 * 8 + 0x4422f8);
    goto addr_403855_127;
    addr_40365a_116:
    rsi130 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 40);
    r10_141 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx107) + 40);
    if (rsi130) {
        addr_403674_128:
        rcx142 = rsi130;
    } else {
        rsi130 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 32);
        if (!rsi130) {
            addr_40369f_130:
            if (!rdi133) {
                addr_403714_113:
                rdx107 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx107) + reinterpret_cast<uint64_t>(rbx131));
                r8_109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r8_109) + reinterpret_cast<uint64_t>(rbx131));
                goto addr_40371a_100;
            } else {
                *reinterpret_cast<struct s15**>(&r10_143) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_143) + 4) = 0;
                if (rdx107 != *reinterpret_cast<struct s15**>(r10_143 * 8 + 0x4422f8)) {
                    if (rdx107 != *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi133) + 32)) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi133) + 40) = rsi130;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi133) + 32) = rsi130;
                    }
                    if (rsi130) 
                        goto addr_4036c6_136;
                    goto addr_403714_113;
                } else {
                    *reinterpret_cast<struct s15**>((r10_143 + 74) * 8 + 0x4420a8) = rsi130;
                    if (!rsi130) {
                        __asm__("rol esi, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_403714_113;
                    } else {
                        addr_4036c6_136:
                        rcx144 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 32);
                        (rsi130 + 4)->f0 = rdi133;
                        if (rcx144) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi130) + 32) = rcx144;
                            (rcx144 + 4)->f0 = rsi130;
                            goto addr_403703_141;
                        }
                    }
                }
            }
        } else {
            r10_141 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx107) + 32);
            goto addr_403674_128;
        }
    }
    addr_403677_143:
    r12_145 = r10_141;
    rsi130 = rcx142;
    r10_141 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx142) + 40);
    rcx142 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx142) + 40);
    if (rcx142) 
        goto addr_403677_143;
    rcx142 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi130) + 32);
    r10_141 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi130) + 32);
    if (rcx142) 
        goto addr_403677_143;
    *reinterpret_cast<struct s15**>(&r12_145->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_40369f_130;
    addr_403703_141:
    rcx146 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 40);
    if (rcx146) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi130) + 40) = rcx146;
        (rcx146 + 4)->f0 = rsi130;
        goto addr_403714_113;
    }
    addr_40364c_117:
    rcx147 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx107) + 16);
    (rcx147 + 2)->f0 = rsi130;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi130) + 16) = rcx147;
    goto addr_40369f_130;
    addr_403599_97:
    tmp64_148 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r8_109) + reinterpret_cast<uint32_t>(g4420b0));
    g4420c8 = rax108;
    g4420b0 = tmp64_148;
    rax108->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(tmp64_148) | 1);
    goto addr_40387b_109;
    addr_403507_60:
    rdi78 = reinterpret_cast<struct s15*>(0x4420a0);
    *reinterpret_cast<int32_t*>(&rdi78 + 1) = 0;
    fun_4022a8(0x4420a0, rsi67, rdx69);
    goto addr_403a9b_74;
    addr_403451_33:
    rax149 = g4420b8;
    if (!rax149 || reinterpret_cast<uint32_t>(r9_43) < reinterpret_cast<uint32_t>(rax149)) {
        g4420b8 = r9_43;
    }
    rax150 = g442460;
    g442418 = r9_43;
    g442420 = r12_37;
    g442430 = 1;
    g4420d8 = 0x80;
    g4420e0 = rax150;
    *reinterpret_cast<int32_t*>(&rax151) = 0x4420e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax151) + 4) = 0;
    do {
        rax151->f18 = rax151;
        rax151->f10 = rax151;
        rax151 = reinterpret_cast<struct s29*>(&rax151->f10);
    } while (!reinterpret_cast<int1_t>(0x4422e8 == rax151));
    rdx69 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffb0);
    rsi67 = r9_43;
    goto addr_403507_60;
    addr_40306a_49:
    rcx152 = rdx55;
    addr_40306d_151:
    r11_153 = r8_59;
    rdx55 = rcx152;
    r8_59 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx152) + 40);
    rcx152 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx152) + 40);
    if (rcx152) 
        goto addr_40306d_151;
    rcx152 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx55) + 32);
    r8_59 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx55) + 32);
    if (rcx152) 
        goto addr_40306d_151;
    *reinterpret_cast<struct s15**>(&r11_153->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_403094_47;
    addr_40305d_50:
    rdx55 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 32);
    if (!rdx55) {
        addr_403094_47:
        if (!rsi56) {
            addr_403103_154:
            if (reinterpret_cast<uint64_t>(r9_8) > 31) {
                r8_154 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
                rcx155 = reinterpret_cast<uint64_t>(r9_8) >> 3;
                rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                r8_154->f8 = reinterpret_cast<uint64_t>(r9_8) | 1;
                *reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r8_154) + reinterpret_cast<uint64_t>(r9_8)) = r9_8;
                if (reinterpret_cast<uint64_t>(r9_8) > 0xff) {
                    rsi156 = reinterpret_cast<uint64_t>(r9_8) >> 8;
                    edx157 = *reinterpret_cast<uint32_t*>(&rsi156);
                    if (*reinterpret_cast<uint32_t*>(&rsi156) && (edx157 = 31, *reinterpret_cast<uint32_t*>(&rsi156) <= 0xffff)) {
                        __asm__("bsr esi, esi");
                        esi158 = *reinterpret_cast<uint32_t*>(&rsi156) ^ 31;
                        ecx159 = 38 - esi158;
                        *reinterpret_cast<uint32_t*>(&rdx160) = 31 - esi158;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx160) + 4) = 0;
                        rcx161 = reinterpret_cast<uint64_t>(r9_8) >> *reinterpret_cast<signed char*>(&ecx159);
                        *reinterpret_cast<uint32_t*>(&rcx162) = *reinterpret_cast<uint32_t*>(&rcx161) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx162) + 4) = 0;
                        edx157 = static_cast<uint32_t>(rcx162 + rdx160 * 2);
                    }
                    esi163 = g4420a4;
                    ecx164 = edx157;
                    edi165 = 1 << *reinterpret_cast<unsigned char*>(&ecx164);
                    r8_154->f38 = edx157;
                    r8_154->f28 = 0;
                    r8_154->f20 = 0;
                    *reinterpret_cast<uint32_t*>(&rdi166) = edx157;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi166) + 4) = 0;
                    if (!(esi163 & edi165)) 
                        goto addr_4031ef_159;
                } else {
                    esi167 = g4420a0;
                    *reinterpret_cast<int32_t*>(&rdx168) = static_cast<int32_t>(rcx155 + rcx155);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx168) + 4) = 0;
                    edi169 = 1 << *reinterpret_cast<unsigned char*>(&rcx155);
                    rdx170 = reinterpret_cast<struct s30*>(rdx168 * 8 + 0x4420e8);
                    if (esi167 & edi169) {
                        rcx171 = rdx170->f10;
                    } else {
                        rcx171 = rdx170;
                        g4420a0 = esi167 | edi169;
                    }
                    rdx170->f10 = r8_154;
                    rcx171->f18 = r8_154;
                    r8_154->f10 = rcx171;
                    r8_154->f18 = rdx170;
                    goto addr_403ad3_38;
                }
            } else {
                rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r10_57) | 3);
                *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r10_57) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r10_57) + 8) | 1;
                goto addr_403ad3_38;
            }
        } else {
            *reinterpret_cast<struct s15**>(&r8_172) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 56);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_172) + 4) = 0;
            if (*reinterpret_cast<struct s15**>(r8_172 * 8 + 0x4422f8) != rax17) {
                if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi56) + 32) != rax17) {
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi56) + 40) = rdx55;
                } else {
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi56) + 32) = rdx55;
                }
                if (rdx55) 
                    goto addr_4030b8_170;
                goto addr_403103_154;
            } else {
                *reinterpret_cast<struct s15**>((r8_172 + 74) * 8 + 0x4420a8) = rdx55;
                if (!rdx55) {
                    __asm__("btr edi, r8d");
                    g4420a4 = edi6;
                    goto addr_403103_154;
                } else {
                    addr_4030b8_170:
                    rcx173 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 32);
                    (rdx55 + 4)->f0 = rsi56;
                    if (rcx173) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx55) + 32) = rcx173;
                        (rcx173 + 4)->f0 = rdx55;
                        goto addr_4030f2_175;
                    }
                }
            }
        }
    } else {
        r8_59 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + 32);
        goto addr_40306a_49;
    }
    ecx174 = 0;
    rsi175 = *reinterpret_cast<struct s30**>(rdi166 * 8 + 0x4422f8);
    if (edx157 != 31) {
        ecx174 = 57 - (edx157 >> 1);
    }
    rcx176 = reinterpret_cast<uint64_t>(r9_8) << *reinterpret_cast<unsigned char*>(&ecx174);
    while (r9_8 != (rsi175->f8 & 0xfffffffffffffff8)) {
        rdx177 = rcx176;
        rcx176 = rcx176 + rcx176;
        rdx178 = (rdx177 >> 63) + 4;
        if (!*reinterpret_cast<struct s30**>(reinterpret_cast<uint64_t>(rsi175) + rdx178 * 8)) 
            goto addr_403257_182;
        rsi175 = *reinterpret_cast<struct s30**>(reinterpret_cast<uint64_t>(rsi175) + rdx178 * 8);
    }
    rdx179 = rsi175->f10;
    rdx179->f18 = r8_154;
    rsi175->f10 = r8_154;
    r8_154->f10 = rdx179;
    r8_154->f18 = rsi175;
    r8_154->f30 = reinterpret_cast<struct s30*>(0);
    goto addr_403ad3_38;
    addr_403257_182:
    *reinterpret_cast<struct s30**>(reinterpret_cast<uint64_t>(rsi175) + rdx178 * 8) = r8_154;
    r8_154->f30 = rsi175;
    addr_40325f_185:
    r8_154->f18 = r8_154;
    r8_154->f10 = r8_154;
    goto addr_403ad3_38;
    addr_4031ef_159:
    *reinterpret_cast<struct s30**>(rdi166 * 8 + 0x4422f8) = r8_154;
    g4420a4 = esi163 | edi165;
    r8_154->f30 = reinterpret_cast<struct s30*>(rdi166 * 8 + 0x4422f8);
    goto addr_40325f_185;
    addr_4030f2_175:
    rcx180 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 40);
    if (rcx180) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx55) + 40) = rcx180;
        (rcx180 + 4)->f0 = rdx55;
        goto addr_403103_154;
    }
    addr_402f46_9:
    ecx181 = 0;
    if (esi9 != 31) {
        ecx181 = 57 - (esi9 >> 1);
    }
    *reinterpret_cast<int32_t*>(&r11_182) = 0;
    *reinterpret_cast<int32_t*>(&r11_182 + 1) = 0;
    *reinterpret_cast<int32_t*>(&r10_183) = 0;
    *reinterpret_cast<int32_t*>(&r10_183 + 1) = 0;
    rcx184 = reinterpret_cast<uint32_t>(rbx5) << *reinterpret_cast<unsigned char*>(&ecx181);
    while (1) {
        rdx185 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rax17->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rdx185) < reinterpret_cast<uint64_t>(r9_8)) {
            if (!rdx185) 
                goto addr_402faf_191;
            r9_8 = rdx185;
            r10_183 = rax17;
        }
        rdx16 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 40);
        rax17 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + ((rcx184 >> 63) + 4) * 8);
        if (!rdx16 || rdx16 == rax17) {
            rdx16 = r11_182;
        }
        if (!rax17) 
            break;
        rcx184 = rcx184 + rcx184;
        r11_182 = rdx16;
    }
    rax17 = r10_183;
    goto addr_402fba_15;
    addr_402faf_191:
    rdx16 = rax17;
    *reinterpret_cast<int32_t*>(&r9_8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    goto addr_402fba_15;
    addr_402bf4_13:
    r9_186 = g4420a8;
    if (reinterpret_cast<uint32_t>(r9_186) >= reinterpret_cast<uint32_t>(rbx5)) 
        goto addr_403291_4;
    if (!eax20) {
        edi187 = g4420a4;
        if (!edi187) 
            goto addr_403291_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax188) = -edi187 & edi187;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax188) + 4) = 0;
        rcx189 = *reinterpret_cast<struct s15**>(rax188 * 8 + 0x4422f8);
        rax17 = rcx189;
        r8_190 = reinterpret_cast<struct s15*>((reinterpret_cast<uint32_t>(rcx189->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        while ((rdx191 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx189) + 32), !!rdx191) || (rdx191 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx189) + 40), !!rdx191)) {
            rcx192 = reinterpret_cast<struct s15*>((reinterpret_cast<uint32_t>(rdx191->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
            if (reinterpret_cast<uint32_t>(rcx192) < reinterpret_cast<uint32_t>(r8_190)) {
                r8_190 = rcx192;
                rax17 = rdx191;
            }
            rcx189 = rdx191;
        }
        rdx193 = (rax17 + 2)->f0;
        r10_194 = (rax17 + 4)->f0;
        r12_195 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(r8_190));
        if (rdx193 != rax17) 
            goto addr_402d7e_206;
    } else {
        *reinterpret_cast<int32_t*>(&rdi196) = 1 << *reinterpret_cast<unsigned char*>(&rcx19);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi196) + 4) = 0;
        r8d197 = static_cast<uint32_t>(rdi196 + rdi196);
        *reinterpret_cast<int32_t*>(&rcx198) = reinterpret_cast<int32_t>(-(eax20 << *reinterpret_cast<unsigned char*>(&rcx19) & (-r8d197 | r8d197)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx198) + 4) = 0;
        __asm__("bsf ecx, eax");
        *reinterpret_cast<int32_t*>(&rax199) = static_cast<int32_t>(rcx198 + rcx198);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax199) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi200) = static_cast<int32_t>(rcx198 * 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi200) + 4) = 0;
        r10_201 = reinterpret_cast<struct s15*>(rax199 * 8 + 0x4420e8);
        r8_202 = rdi200;
        rax17 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_201) + 16);
        r11_203 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 16);
        if (r10_201 != r11_203) {
            (r11_203 + 2)->f0 = r10_201;
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_201) + 16) = r11_203;
        } else {
            g4420a0 = esi18 & reinterpret_cast<uint32_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx198)));
        }
        rdx204 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(rdi200));
        rsi205 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdi200) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint32_t>(rsi205) > reinterpret_cast<uint32_t>(31)) {
            rbx206 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(rax17));
            rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) | 3);
            rbx206->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi205) | 1);
            rdx204->f0 = rsi205;
            if (r9_186) {
                r10d207 = g4420a0;
                rcx208 = reinterpret_cast<uint32_t>(r9_186) >> 3;
                rdx209 = g4420c0;
                *reinterpret_cast<int32_t*>(&r8_210) = static_cast<int32_t>(rcx208 + rcx208);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_210) + 4) = 0;
                r11d211 = 1 << *reinterpret_cast<unsigned char*>(&rcx208);
                r8_212 = reinterpret_cast<struct s15*>(r8_210 * 8 + 0x4420e8);
                if (r10d207 & r11d211) {
                    rcx213 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_212) + 16);
                } else {
                    rcx213 = r8_212;
                    g4420a0 = r10d207 | r11d211;
                }
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_212) + 16) = rdx209;
                (rcx213 + 2)->f0 = rdx209;
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx209) + 16) = rcx213;
                (rdx209 + 2)->f0 = r8_212;
            }
            g4420a8 = rsi205;
            g4420c0 = rbx206;
            goto addr_403ad3_38;
        } else {
            *reinterpret_cast<uint32_t*>(&rbx214) = *reinterpret_cast<uint32_t*>(&r8_202) | 3;
            *reinterpret_cast<int32_t*>(&rbx214 + 1) = 0;
            rax17->f8 = rbx214;
            rdx204->f8 = rdx204->f8 | 1;
            goto addr_403ad3_38;
        }
    }
    rdx193 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 40);
    r11_215 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + 40);
    if (rdx193) {
        addr_402da6_219:
        rcx216 = rdx193;
    } else {
        rdx193 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 32);
        if (!rdx193) {
            addr_402dd1_221:
            if (!r10_194) {
                addr_402e40_222:
                if (reinterpret_cast<uint32_t>(r8_190) > reinterpret_cast<uint32_t>(31)) {
                    r10_217 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint32_t>(rbx5));
                    rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                    r10_217->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r8_190) | 1);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_217) + reinterpret_cast<uint32_t>(r8_190)) = r8_190;
                    if (r9_186) {
                        rdx218 = g4420c0;
                        rcx219 = reinterpret_cast<uint32_t>(r9_186) >> 3;
                        *reinterpret_cast<int32_t*>(&rdi220) = static_cast<int32_t>(rcx219 + rcx219);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi220) + 4) = 0;
                        r9d221 = 1 << *reinterpret_cast<unsigned char*>(&rcx219);
                        rdi222 = reinterpret_cast<struct s15*>(rdi220 * 8 + 0x4420e8);
                        if (esi18 & r9d221) {
                            rcx223 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi222) + 16);
                        } else {
                            rcx223 = rdi222;
                            g4420a0 = esi18 | r9d221;
                        }
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi222) + 16) = rdx218;
                        (rcx223 + 2)->f0 = rdx218;
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx218) + 16) = rcx223;
                        (rdx218 + 2)->f0 = rdi222;
                    }
                    g4420a8 = r8_190;
                    g4420c0 = r10_217;
                    goto addr_403ad3_38;
                } else {
                    rax17->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r12_195) | 3);
                    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r12_195) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r12_195) + 8) | 1;
                    goto addr_403ad3_38;
                }
            } else {
                *reinterpret_cast<struct s15**>(&r11_224) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_224) + 4) = 0;
                if (*reinterpret_cast<struct s15**>(r11_224 * 8 + 0x4422f8) != rax17) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_194) + 32) != rax17) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_194) + 40) = rdx193;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_194) + 32) = rdx193;
                    }
                    if (rdx193) 
                        goto addr_402df5_235;
                    goto addr_402e40_222;
                } else {
                    *reinterpret_cast<struct s15**>((r11_224 + 74) * 8 + 0x4420a8) = rdx193;
                    if (!rdx193) {
                        __asm__("btr edi, r11d");
                        g4420a4 = edi187;
                        goto addr_402e40_222;
                    } else {
                        addr_402df5_235:
                        rcx225 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 32);
                        (rdx193 + 4)->f0 = r10_194;
                        if (rcx225) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx193) + 32) = rcx225;
                            (rcx225 + 4)->f0 = rdx193;
                            goto addr_402e2f_240;
                        }
                    }
                }
            }
        } else {
            r11_215 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) + 32);
            goto addr_402da6_219;
        }
    }
    addr_402da9_242:
    r13_226 = r11_215;
    rdx193 = rcx216;
    r11_215 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx216) + 40);
    rcx216 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx216) + 40);
    if (rcx216) 
        goto addr_402da9_242;
    rcx216 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx193) + 32);
    r11_215 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx193) + 32);
    if (rcx216) 
        goto addr_402da9_242;
    *reinterpret_cast<struct s15**>(&r13_226->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_402dd1_221;
    addr_402e2f_240:
    rcx227 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 40);
    if (rcx227) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx193) + 40) = rcx227;
        (rcx227 + 4)->f0 = rdx193;
        goto addr_402e40_222;
    }
    addr_402d7e_206:
    rcx228 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 16);
    (rcx228 + 2)->f0 = rdx193;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx193) + 16) = rcx228;
    goto addr_402dd1_221;
    addr_402ba3_14:
    *reinterpret_cast<uint32_t*>(&rcx229) = *reinterpret_cast<int32_t*>(&rcx19) + (~eax20 & 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx229) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax230) = static_cast<int32_t>(rcx229 + rcx229);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax230) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_231) = static_cast<int32_t>(rcx229 * 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_231) + 4) = 0;
    rdi232 = reinterpret_cast<struct s15*>(rax230 * 8 + 0x4420e8);
    rdx233 = r9_231;
    rax17 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi232) + 16);
    r8_234 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax17) + 16);
    if (rdi232 != r8_234) {
        (r8_234 + 2)->f0 = rdi232;
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi232) + 16) = r8_234;
    } else {
        __asm__("btr esi, ecx");
        g4420a0 = esi18;
    }
    *reinterpret_cast<uint32_t*>(&rbx235) = *reinterpret_cast<uint32_t*>(&rdx233) | 3;
    *reinterpret_cast<int32_t*>(&rbx235 + 1) = 0;
    rax17->f8 = rbx235;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r9_231) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax17) + reinterpret_cast<uint64_t>(r9_231) + 8) | 1;
    goto addr_403ad3_38;
}

struct s15* fun_4050b2(struct s15* rdi) {
    uint64_t rcx2;
    uint64_t rdx3;
    uint64_t rdx4;

    __asm__("movd xmm3, esi");
    *reinterpret_cast<int32_t*>(&rcx2) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    if (rdx3 < 32) {
        rcx2 = rdx4;
    }
    goto *reinterpret_cast<int64_t*>(0x440550 + rcx2 * 8);
}

uint32_t g4406f8 = 0;

struct s15* fun_4018e7(struct s15* rdi, struct s15* rsi, struct s15* rdx) {
    uint32_t eax4;

    eax4 = g4406f8;
    g443c70 = eax4;
    return 0xff;
}

struct s15* g4420d0 = reinterpret_cast<struct s15*>(0);

struct s15* fun_403ae8(struct s15* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx) {
    struct s15* rax5;
    struct s15* rdi6;
    struct s15* v7;
    unsigned char rcx8;
    struct s15* rax9;
    struct s15* rsi10;
    struct s15* rbx11;
    uint32_t eax12;
    int1_t zf13;
    struct s15* rcx14;
    int64_t rcx15;
    struct s15* rdx16;
    struct s15* rdx17;
    struct s15* r8_18;
    struct s15* r8_19;
    struct s15* rcx20;
    struct s15* r9_21;
    struct s15* rcx22;
    struct s15* r8_23;
    int1_t zf24;
    struct s15* r10_25;
    struct s15* tmp64_26;
    void* r8_27;
    struct s15* rdx28;
    struct s15* tmp64_29;
    int1_t below_or_equal30;
    struct s15* rcx31;
    struct s15* rax32;
    struct s15* rdx33;
    struct s15* rsi34;
    struct s15* r13_35;
    struct s15* rdi36;
    struct s15* rcx37;
    struct s15* r10_38;
    uint64_t rcx39;
    uint32_t edx40;
    int64_t rax41;
    uint32_t esi42;
    struct s15* rax43;
    struct s15* rdx44;
    uint64_t rsi45;
    struct s15* edx46;
    uint32_t esi47;
    uint32_t ecx48;
    int64_t rdx49;
    uint64_t rcx50;
    int64_t rcx51;
    uint32_t esi52;
    struct s15* ecx53;
    uint32_t r8d54;
    int64_t r8_55;
    uint32_t ecx56;
    struct s15* rsi57;
    uint64_t rcx58;
    uint64_t rdx59;
    uint64_t rdx60;
    struct s15* rax61;
    int1_t zf62;
    struct s15* r14_63;
    struct s15* rax64;
    struct s15* r13d65;
    uint32_t r13d66;
    struct s15* rdi67;
    struct s15* rdx68;
    void* rdx69;
    int64_t rbx70;
    void* rbx71;
    struct s15* rbx72;
    struct s15* rdx73;
    int64_t rdx74;
    void* r15_75;
    struct s15* rdx76;
    int1_t zf77;
    struct s15* r8_78;
    struct s15* rax79;
    struct s15* rsi80;
    struct s15* rcx81;
    uint32_t eax82;
    uint64_t rdx83;
    struct s15* eax84;
    uint32_t edx85;
    uint32_t ecx86;
    int64_t rax87;
    uint64_t rcx88;
    int64_t rcx89;
    uint32_t edx90;
    struct s15* ecx91;
    uint32_t esi92;
    int64_t rsi93;
    int64_t rdx94;
    struct s15* rdx95;
    struct s15* r9_96;
    struct s15* rdx97;
    uint32_t ecx98;
    uint64_t rcx99;
    uint64_t rax100;
    uint64_t rax101;
    struct s15* rax102;
    struct s15* r8_103;
    struct s15* rcx104;
    struct s15* r9_105;
    struct s15* rcx106;
    int64_t r9_107;
    struct s15* rcx108;
    struct s15* r11_109;
    struct s15* rcx110;
    struct s15* rsi111;
    struct s15* eax112;
    void* r10_113;
    uint64_t rax114;
    struct s15* rbx115;
    struct s15* r14_116;
    struct s15* rax117;
    struct s15* rdi118;
    uint32_t eax119;
    struct s15* rdx120;
    struct s15* rax121;
    void* rbx122;
    struct s15* rax123;
    int1_t below_or_equal124;
    struct s15* rax125;
    struct s15* rcx126;

    if (!rdi) {
        return rax5;
    }
    rdi6 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0);
    v7 = rsi;
    rcx8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff8);
    rax9 = reinterpret_cast<struct s15*>(rcx8 & 0xfffffffffffffff8);
    rsi10 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rax9));
    if (rcx8 & 1) 
        goto addr_403c97_4;
    rdi6 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) - reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)));
    if (!(rcx8 & 3)) {
        rbx11 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)) + 32);
        eax12 = fun_40452c(rdi6, rbx11, rdi);
        if (!eax12) {
            g4423f8 = g4423f8 - reinterpret_cast<uint32_t>(rbx11);
            goto addr_403fe8_8;
        }
    }
    rax9 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)));
    zf13 = g4420c0 == rdi6;
    if (!zf13) 
        goto addr_403b53_10;
    rcx14 = rsi10->f8;
    *reinterpret_cast<uint32_t*>(&rcx15) = *reinterpret_cast<uint32_t*>(&rcx14) & 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
    if (rcx15 == 3) {
        rdx16 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi10->f8) & 0xfffffffffffffffe);
        g4420a8 = rax9;
        rsi10->f8 = rdx16;
        rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) | 1);
        *reinterpret_cast<struct s15**>(&rsi10->f0) = rax9;
        goto addr_403fe8_8;
    }
    addr_403b53_10:
    rdx17 = (rdi6 + 2)->f0;
    if (reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0)) <= 0xff) {
        r8_18 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16);
        if (r8_18 != rdx17) {
            (r8_18 + 2)->f0 = rdx17;
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx17) + 16) = r8_18;
            goto addr_403c97_4;
        } else {
            __asm__("rol edx, cl");
            g4420a0 = g4420a0 & 0xfffffffe;
            goto addr_403c97_4;
        }
    }
    r8_19 = (rdi6 + 4)->f0;
    if (rdi6 != rdx17) {
        rcx20 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16);
        (rcx20 + 2)->f0 = rdx17;
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx17) + 16) = rcx20;
        goto addr_403bea_18;
    }
    rdx17 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    r9_21 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rdx17) {
        addr_403bc0_20:
        rcx22 = rdx17;
    } else {
        rdx17 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 32);
        if (!rdx17) {
            addr_403bea_18:
            if (!r8_19) {
                addr_403c97_4:
                r8_23 = rsi10->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_23) & 2) {
                    rsi10->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r8_23) & 0xfffffffffffffffe);
                    rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) | 1);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rax9)) = rax9;
                    goto addr_403e84_23;
                } else {
                    zf24 = g4420c8 == rsi10;
                    r10_25 = g4420c0;
                    if (!zf24) {
                        if (rsi10 == r10_25) {
                            tmp64_26 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint32_t>(g4420a8));
                            g4420c0 = rdi6;
                            g4420a8 = tmp64_26;
                            rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(tmp64_26) | 1);
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(tmp64_26)) = tmp64_26;
                            goto addr_403fe8_8;
                        }
                        r8_27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_23) & 0xfffffffffffffff8);
                        rdx28 = (rsi10 + 2)->f0;
                        rax9 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint64_t>(r8_27));
                        if (reinterpret_cast<uint64_t>(r8_27) > 0xf8) 
                            goto addr_403d7d_28; else 
                            goto addr_403d55_29;
                    } else {
                        tmp64_29 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint32_t>(g4420b0));
                        g4420c8 = rdi6;
                        g4420b0 = tmp64_29;
                        rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(tmp64_29) | 1);
                        if (rdi6 == r10_25) {
                            g4420c0 = reinterpret_cast<struct s15*>(0);
                            g4420a8 = reinterpret_cast<struct s15*>(0);
                        }
                        below_or_equal30 = reinterpret_cast<uint32_t>(tmp64_29) <= reinterpret_cast<uint32_t>(g4420d0);
                        if (below_or_equal30) 
                            goto addr_403fe8_8;
                        rcx31 = v7;
                        if (!1) 
                            goto addr_4025c0_35;
                        rax32 = g4420c8;
                        if (!rax32) 
                            goto addr_4025c0_35;
                        rdx33 = g4420b0;
                        rsi34 = reinterpret_cast<struct s15*>(80);
                        if (reinterpret_cast<uint32_t>(rdx33) <= reinterpret_cast<uint32_t>(80)) 
                            goto addr_4025e0_38;
                        rcx31 = reinterpret_cast<struct s15*>(0x442418);
                        r13_35 = reinterpret_cast<struct s15*>(0x442418);
                        do {
                            rdi36 = *reinterpret_cast<struct s15**>(&r13_35->f0);
                            if (reinterpret_cast<uint32_t>(rax32) < reinterpret_cast<uint32_t>(rdi36)) 
                                continue;
                            r9_21 = r13_35->f8;
                            r8_23 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi36) + reinterpret_cast<uint32_t>(r9_21));
                            if (reinterpret_cast<uint32_t>(rax32) < reinterpret_cast<uint32_t>(r8_23)) 
                                goto addr_402619_42;
                            r13_35 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r13_35) + 16);
                        } while (r13_35);
                        goto addr_402610_44;
                    }
                }
            } else {
                r9_21 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 56);
                *reinterpret_cast<int32_t*>(&r9_21 + 1) = 0;
                if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_21) * 8 + 0x4422f8) != rdi6) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_19) + 32) != rdi6) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_19) + 40) = rdx17;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_19) + 32) = rdx17;
                    }
                    if (rdx17) 
                        goto addr_403c15_50;
                    goto addr_403c97_4;
                } else {
                    *reinterpret_cast<struct s15**>((reinterpret_cast<uint32_t>(r9_21) + 74) * 8 + 0x4420a8) = rdx17;
                    if (!rdx17) {
                        __asm__("rol edx, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_403c97_4;
                    } else {
                        addr_403c15_50:
                        rcx37 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 32);
                        (rdx17 + 4)->f0 = r8_19;
                        if (rcx37) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx17) + 32) = rcx37;
                            (rcx37 + 4)->f0 = rdx17;
                            goto addr_403c52_55;
                        }
                    }
                }
            }
        } else {
            r9_21 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) + 32);
            goto addr_403bc0_20;
        }
    }
    addr_403bc3_57:
    r10_38 = r9_21;
    rdx17 = rcx22;
    r9_21 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx22) + 40);
    rcx22 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx22) + 40);
    if (rcx22) 
        goto addr_403bc3_57;
    rcx22 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx17) + 32);
    r9_21 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx17) + 32);
    if (rcx22) 
        goto addr_403bc3_57;
    *reinterpret_cast<struct s15**>(&r10_38->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_403bea_18;
    addr_403e84_23:
    rcx39 = reinterpret_cast<uint32_t>(rax9) >> 3;
    if (reinterpret_cast<uint32_t>(rax9) <= reinterpret_cast<uint32_t>(0xff)) {
        edx40 = g4420a0;
        *reinterpret_cast<int32_t*>(&rax41) = static_cast<int32_t>(rcx39 + rcx39);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
        esi42 = 1 << *reinterpret_cast<unsigned char*>(&rcx39);
        rax43 = reinterpret_cast<struct s15*>(rax41 * 8 + 0x4420e8);
        if (edx40 & esi42) {
            rdx44 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax43) + 16);
        } else {
            g4420a0 = edx40 | esi42;
            rdx44 = rax43;
        }
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax43) + 16) = rdi6;
        (rdx44 + 2)->f0 = rdi6;
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16) = rdx44;
        (rdi6 + 2)->f0 = rax43;
        goto addr_403fe8_8;
    }
    rsi45 = reinterpret_cast<uint32_t>(rax9) >> 8;
    edx46 = *reinterpret_cast<struct s15**>(&rsi45);
    if (*reinterpret_cast<struct s15**>(&rsi45) && (edx46 = reinterpret_cast<struct s15*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rsi45)) <= 0xffff)) {
        __asm__("bsr esi, esi");
        esi47 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rsi45)) ^ 31;
        ecx48 = 38 - esi47;
        *reinterpret_cast<void**>(&rdx49) = reinterpret_cast<void*>(31 - esi47);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = 0;
        rcx50 = reinterpret_cast<uint32_t>(rax9) >> *reinterpret_cast<signed char*>(&ecx48);
        *reinterpret_cast<uint32_t*>(&rcx51) = *reinterpret_cast<uint32_t*>(&rcx50) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = 0;
        edx46 = reinterpret_cast<struct s15*>(static_cast<uint32_t>(rcx51 + rdx49 * 2));
    }
    esi52 = g4420a4;
    ecx53 = edx46;
    r8d54 = 1 << *reinterpret_cast<unsigned char*>(&ecx53);
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 56) = edx46;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 40) = reinterpret_cast<struct s15*>(0);
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 32) = reinterpret_cast<struct s15*>(0);
    *reinterpret_cast<struct s15**>(&r8_55) = edx46;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = 0;
    if (!(esi52 & r8d54)) 
        goto addr_403f3c_67;
    ecx56 = 0;
    rsi57 = *reinterpret_cast<struct s15**>(r8_55 * 8 + 0x4422f8);
    if (edx46 != 31) {
        ecx56 = 57 - (reinterpret_cast<uint32_t>(edx46) >> 1);
    }
    rcx58 = reinterpret_cast<uint32_t>(rax9) << *reinterpret_cast<unsigned char*>(&ecx56);
    while ((reinterpret_cast<uint32_t>(rsi57->f8) & 0xfffffffffffffff8) != rax9) {
        rdx59 = rcx58;
        rcx58 = rcx58 + rcx58;
        rdx60 = (rdx59 >> 63) + 4;
        if (!*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi57) + rdx60 * 8)) 
            goto addr_403fa4_73;
        rsi57 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi57) + rdx60 * 8);
    }
    rax61 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi57) + 16);
    (rax61 + 2)->f0 = rdi6;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi57) + 16) = rdi6;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16) = rax61;
    (rdi6 + 2)->f0 = rsi57;
    (rdi6 + 4)->f0 = reinterpret_cast<struct s15*>(0);
    addr_403fd2_76:
    --g4420d8;
    zf62 = g4420d8 == 0;
    if (!zf62) {
        addr_403fe8_8:
        return v7;
    } else {
        *reinterpret_cast<int32_t*>(&r14_63) = 0;
        *reinterpret_cast<int32_t*>(&r14_63 + 1) = 0;
        rax64 = g442428;
        if (!rax64) 
            goto addr_402591_79;
        r13d65 = (rax64 + 2)->f0;
        if (!(*reinterpret_cast<unsigned char*>(&r13d65) & 1)) 
            goto addr_402591_79;
        r13d66 = reinterpret_cast<uint32_t>(r13d65) & 8;
        if (r13d66) 
            goto addr_402591_79;
        rdi67 = *reinterpret_cast<struct s15**>(&rax64->f0);
        rdx68 = rdi67;
        *reinterpret_cast<uint32_t*>(&rdx69) = *reinterpret_cast<uint32_t*>(&rdx68) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx69)) {
            rbx70 = reinterpret_cast<int64_t>(-reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rdi67) + 16));
            *reinterpret_cast<uint32_t*>(&rbx71) = *reinterpret_cast<uint32_t*>(&rbx70) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx71) + 4) = 0;
            rdx69 = rbx71;
        }
        rbx72 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi67) + reinterpret_cast<uint64_t>(rdx69));
        *reinterpret_cast<int32_t*>(&r14_63) = 0;
        *reinterpret_cast<int32_t*>(&r14_63 + 1) = 0;
        rdx73 = rbx72->f8;
        *reinterpret_cast<uint32_t*>(&rdx74) = *reinterpret_cast<uint32_t*>(&rdx73) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx74) + 4) = 0;
        if (rdx74 - 1) {
            addr_402591_79:
            g4420d8 = 0x80;
            return r14_63;
        } else {
            r14_63 = rax64->f8;
            r15_75 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx72->f8) & 0xfffffffffffffff8);
            rdx76 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi67) + reinterpret_cast<uint32_t>(r14_63) + 0xffffffffffffffb0);
            if (reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(rbx72) + reinterpret_cast<uint64_t>(r15_75)) < reinterpret_cast<uint32_t>(rdx76)) {
                addr_40258e_86:
                *reinterpret_cast<int32_t*>(&r14_63) = 0;
                *reinterpret_cast<int32_t*>(&r14_63 + 1) = 0;
                goto addr_402591_79;
            } else {
                zf77 = g4420c0 == rbx72;
                r8_78 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax64) + 16);
                if (zf77) {
                    g4420c0 = reinterpret_cast<struct s15*>(0);
                    g4420a8 = reinterpret_cast<struct s15*>(0);
                    goto addr_40246c_89;
                }
                rax79 = (rbx72 + 2)->f0;
                rsi80 = (rbx72 + 4)->f0;
                if (rax79 != rbx72) 
                    goto addr_4023a9_91;
            }
        }
    }
    rax79 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax79) + 40);
    rcx81 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rax79) {
        addr_4023d1_93:
        rdx76 = rax79;
    } else {
        rax79 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 32);
        if (!rax79) {
            addr_4023fb_95:
            if (!rsi80) {
                addr_40246c_89:
                eax82 = fun_40452c(rdi67, r14_63, rdx76, rdi67, r14_63, rdx76);
                if (eax82) {
                    rdx83 = reinterpret_cast<uint64_t>(r15_75) >> 8;
                    eax84 = *reinterpret_cast<struct s15**>(&rdx83);
                    if (*reinterpret_cast<struct s15**>(&rdx83) && (eax84 = reinterpret_cast<struct s15*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdx83)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx85 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdx83)) ^ 31;
                        ecx86 = 38 - edx85;
                        *reinterpret_cast<void**>(&rax87) = reinterpret_cast<void*>(31 - edx85);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
                        rcx88 = reinterpret_cast<uint64_t>(r15_75) >> *reinterpret_cast<signed char*>(&ecx86);
                        *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rcx88) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
                        eax84 = reinterpret_cast<struct s15*>(static_cast<uint32_t>(rcx89 + rax87 * 2));
                    }
                    edx90 = g4420a4;
                    ecx91 = eax84;
                    esi92 = 1 << *reinterpret_cast<unsigned char*>(&ecx91);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 56) = eax84;
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 40) = reinterpret_cast<struct s15*>(0);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 32) = reinterpret_cast<struct s15*>(0);
                    *reinterpret_cast<struct s15**>(&rsi93) = eax84;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi93) + 4) = 0;
                    if (edx90 & esi92) 
                        goto addr_402513_99; else 
                        goto addr_4024f6_100;
                } else {
                    g4423f8 = g4423f8 - reinterpret_cast<uint32_t>(r14_63);
                    g442428 = r8_78;
                    goto addr_402591_79;
                }
            } else {
                *reinterpret_cast<struct s15**>(&rdx94) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx94) + 4) = 0;
                rdx76 = reinterpret_cast<struct s15*>(0x4420a0 + rdx94 * 8);
                if ((rdx76 + 50)->f0 != rbx72) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi80) + 32) != rbx72) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi80) + 40) = rax79;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi80) + 32) = rax79;
                    }
                    if (rax79) 
                        goto addr_40241f_107;
                    goto addr_40246c_89;
                } else {
                    (rdx76 + 50)->f0 = rax79;
                    if (!rax79) {
                        __asm__("rol eax, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_40246c_89;
                    } else {
                        addr_40241f_107:
                        rdx95 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 32);
                        (rax79 + 4)->f0 = rsi80;
                        if (rdx95) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax79) + 32) = rdx95;
                            (rdx95 + 4)->f0 = rax79;
                            goto addr_40245b_112;
                        }
                    }
                }
            }
        } else {
            rcx81 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx72) + 32);
            goto addr_4023d1_93;
        }
    }
    addr_4023d4_114:
    r9_96 = rcx81;
    rax79 = rdx76;
    rcx81 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx76) + 40);
    rdx76 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx76) + 40);
    if (rdx76) 
        goto addr_4023d4_114;
    rdx76 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax79) + 32);
    rcx81 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax79) + 32);
    if (rdx76) 
        goto addr_4023d4_114;
    *reinterpret_cast<struct s15**>(&r9_96->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_4023fb_95;
    addr_402513_99:
    rdx97 = *reinterpret_cast<struct s15**>(0x4420a0 + rsi93 * 8 + 0x258);
    if (eax84 != 31) {
        r13d66 = 57 - (reinterpret_cast<uint32_t>(eax84) >> 1);
    }
    ecx98 = r13d66;
    rcx99 = reinterpret_cast<uint64_t>(r15_75) << *reinterpret_cast<unsigned char*>(&ecx98);
    while ((reinterpret_cast<uint32_t>(rdx97->f8) & 0xfffffffffffffff8) != r15_75) {
        rax100 = rcx99;
        rcx99 = rcx99 + rcx99;
        rax101 = (rax100 >> 63) + 4;
        if (!*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8)) 
            goto addr_402560_121;
        rdx97 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8);
    }
    rax102 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx97) + 16);
    (rax102 + 2)->f0 = rbx72;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx97) + 16) = rbx72;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 16) = rax102;
    (rbx72 + 2)->f0 = rdx97;
    (rbx72 + 4)->f0 = reinterpret_cast<struct s15*>(0);
    goto addr_40258e_86;
    addr_402560_121:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8) = rbx72;
    (rbx72 + 4)->f0 = rdx97;
    addr_402568_124:
    (rbx72 + 2)->f0 = rbx72;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 16) = rbx72;
    goto addr_40258e_86;
    addr_4024f6_100:
    g4420a4 = edx90 | esi92;
    *reinterpret_cast<struct s15**>(0x4420a0 + rsi93 * 8 + 0x258) = rbx72;
    (rbx72 + 4)->f0 = reinterpret_cast<struct s15*>(0x4420a0 + rsi93 * 8 + 0x258);
    goto addr_402568_124;
    addr_40245b_112:
    rdx76 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rdx76) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax79) + 40) = rdx76;
        (rdx76 + 4)->f0 = rax79;
        goto addr_40246c_89;
    }
    addr_4023a9_91:
    rdx76 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx72) + 16);
    (rdx76 + 2)->f0 = rax79;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax79) + 16) = rdx76;
    goto addr_4023fb_95;
    addr_403fa4_73:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi57) + rdx60 * 8) = rdi6;
    (rdi6 + 4)->f0 = rsi57;
    addr_403fac_126:
    (rdi6 + 2)->f0 = rdi6;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16) = rdi6;
    goto addr_403fd2_76;
    addr_403f3c_67:
    *reinterpret_cast<struct s15**>(r8_55 * 8 + 0x4422f8) = rdi6;
    g4420a4 = esi52 | r8d54;
    (rdi6 + 4)->f0 = reinterpret_cast<struct s15*>(r8_55 * 8 + 0x4422f8);
    goto addr_403fac_126;
    addr_403d7d_28:
    r8_103 = (rsi10 + 4)->f0;
    if (rsi10 != rdx28) {
        rcx104 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 16);
        (rcx104 + 2)->f0 = rdx28;
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx28) + 16) = rcx104;
        goto addr_403dd8_128;
    }
    rdx28 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 40);
    r9_105 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi10) + 40);
    if (rdx28) {
        addr_403dae_130:
        rcx106 = rdx28;
    } else {
        rdx28 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 32);
        if (!rdx28) {
            addr_403dd8_128:
            if (!r8_103) {
                addr_403e4d_132:
                rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax9) | 1);
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rax9)) = rax9;
                if (rdi6 == r10_25) {
                    g4420a8 = rax9;
                    goto addr_403fe8_8;
                }
            } else {
                *reinterpret_cast<struct s15**>(&r9_107) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_107) + 4) = 0;
                if (*reinterpret_cast<struct s15**>(r9_107 * 8 + 0x4422f8) != rsi10) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_103) + 32) != rsi10) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_103) + 40) = rdx28;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_103) + 32) = rdx28;
                    }
                    if (rdx28) 
                        goto addr_403dff_139;
                    goto addr_403e4d_132;
                } else {
                    *reinterpret_cast<struct s15**>((r9_107 + 74) * 8 + 0x4420a8) = rdx28;
                    if (!rdx28) {
                        __asm__("rol edx, cl");
                        g4420a4 = g4420a4 & 0xfffffffe;
                        goto addr_403e4d_132;
                    } else {
                        addr_403dff_139:
                        rcx108 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 32);
                        (rdx28 + 4)->f0 = r8_103;
                        if (rcx108) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx28) + 32) = rcx108;
                            (rcx108 + 4)->f0 = rdx28;
                            goto addr_403e3c_144;
                        }
                    }
                }
            }
        } else {
            r9_105 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi10) + 32);
            goto addr_403dae_130;
        }
    }
    addr_403db1_146:
    r11_109 = r9_105;
    rdx28 = rcx106;
    r9_105 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx106) + 40);
    rcx106 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx106) + 40);
    if (rcx106) 
        goto addr_403db1_146;
    rcx106 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx28) + 32);
    r9_105 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx28) + 32);
    if (rcx106) 
        goto addr_403db1_146;
    *reinterpret_cast<struct s15**>(&r11_109->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_403dd8_128;
    addr_403e3c_144:
    rcx110 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 40);
    if (rcx110) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx28) + 40) = rcx110;
        (rcx110 + 4)->f0 = rdx28;
        goto addr_403e4d_132;
    }
    addr_403d55_29:
    rsi111 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi10) + 16);
    if (rsi111 != rdx28) {
        (rsi111 + 2)->f0 = rdx28;
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx28) + 16) = rsi111;
        goto addr_403e4d_132;
    } else {
        __asm__("rol edx, cl");
        g4420a0 = g4420a0 & 0xfffffffe;
        goto addr_403e4d_132;
    }
    addr_402619_42:
    eax112 = (r13_35 + 2)->f0;
    if (*reinterpret_cast<unsigned char*>(&eax112) & 8) 
        goto addr_4025e0_38;
    if (!(*reinterpret_cast<unsigned char*>(&eax112) & 1)) 
        goto addr_4025e0_38;
    r10_113 = g442470;
    rax114 = reinterpret_cast<uint32_t>(rdx33) + reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff - reinterpret_cast<uint32_t>(80);
    rdx33 = reinterpret_cast<struct s15*>(rax114 % reinterpret_cast<uint64_t>(r10_113));
    rbx115 = reinterpret_cast<struct s15*>((rax114 / reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff) * reinterpret_cast<uint64_t>(r10_113));
    if (reinterpret_cast<uint32_t>(rbx115) > reinterpret_cast<uint32_t>(r9_21)) 
        goto addr_4025e0_38;
    do {
        if (reinterpret_cast<uint32_t>(rdi36) > reinterpret_cast<uint32_t>(rcx31)) 
            continue;
        if (reinterpret_cast<uint32_t>(r8_23) > reinterpret_cast<uint32_t>(rcx31)) 
            goto addr_4025e0_38;
        rcx31 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx31) + 16);
    } while (rcx31);
    *reinterpret_cast<int32_t*>(&rcx31) = 0;
    *reinterpret_cast<int32_t*>(&rcx31 + 1) = 0;
    r14_116 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r9_21) - reinterpret_cast<uint32_t>(rbx115));
    rsi34 = r9_21;
    rdx33 = r14_116;
    rax117 = fun_404abb();
    if (reinterpret_cast<uint32_t>(rax117) + 1 || (rsi34 = rbx115, rdi118 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&r13_35->f0)) + reinterpret_cast<uint32_t>(r14_116)), eax119 = fun_40452c(rdi118, rsi34, rdx33), !eax119)) {
        if (rbx115) {
            r13_35->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r13_35->f8) - reinterpret_cast<uint32_t>(rbx115));
            rdx120 = g4420b0;
            g4423f8 = g4423f8 - reinterpret_cast<uint32_t>(rbx115);
            rsi34 = g4420c8;
            rdx33 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx120) - reinterpret_cast<uint32_t>(rbx115));
            fun_4022a8(0x4420a0, rsi34, rdx33);
        }
    } else {
        addr_4025e0_38:
        *reinterpret_cast<int32_t*>(&rbx115) = 0;
        *reinterpret_cast<int32_t*>(&rbx115 + 1) = 0;
    }
    rax121 = fun_4022ef(0x4420a0, rsi34, rdx33, rcx31);
    rbx122 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx115) + reinterpret_cast<uint32_t>(rax121));
    if (!rbx122) {
        rax123 = g4420d0;
        below_or_equal124 = reinterpret_cast<uint32_t>(g4420b0) <= reinterpret_cast<uint32_t>(rax123);
        if (below_or_equal124) {
            addr_4025c0_35:
            *reinterpret_cast<int32_t*>(&rbx122) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx122) + 4) = 0;
        } else {
            g4420d0 = reinterpret_cast<struct s15*>(0xffffffffffffffff);
        }
    }
    *reinterpret_cast<int32_t*>(&rax125) = 0;
    *reinterpret_cast<int32_t*>(&rax125 + 1) = 0;
    *reinterpret_cast<unsigned char*>(&rax125) = reinterpret_cast<uint1_t>(!!rbx122);
    return rax125;
    addr_402610_44:
    __asm__("ud2 ");
    goto addr_402619_42;
    addr_403c52_55:
    rcx126 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rcx126) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx17) + 40) = rcx126;
        (rcx126 + 4)->f0 = rdx17;
        goto addr_403c97_4;
    }
}

struct s32 {
    uint32_t f0;
    uint32_t f4;
    struct s15* f8;
    signed char[4] pad16;
    void* f10;
    struct s15* f18;
    signed char[4] pad32;
    struct s15* f20;
    signed char[4] pad40;
    struct s15* f28;
    signed char[812] pad856;
    uint64_t f358;
    uint64_t f360;
};

struct s33 {
    struct s15* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s34 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s35 {
    uint32_t f0;
    signed char[596] pad600;
    struct s15* f258;
};

void fun_4026e8(struct s32* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx);

struct s16* fun_404049(struct s32* rdi, struct s16* rsi, void* rdx, struct s15* rcx, int64_t r8) {
    struct s16* r13_6;
    struct s32* r12_7;
    void* rdi8;
    void* rsi9;
    void* rdx10;
    void* rax11;
    void* r14_12;
    void* rbx13;
    struct s15* rax14;
    void* rdx15;
    int1_t cf16;
    uint64_t rbx17;
    int1_t below_or_equal18;
    struct s15* r9_19;
    struct s15* r10_20;
    void* r10_21;
    void* r8_22;
    struct s15* rax23;
    struct s15* r11_24;
    struct s15* rdx25;
    struct s15* r10_26;
    void* rcx27;
    uint64_t rsi28;
    struct s33* rax29;
    struct s15* r8_30;
    struct s15* rcx31;
    void* rdx32;
    uint64_t rsi33;
    void* r9_34;
    struct s15* rax35;
    struct s15* rdx36;
    uint64_t rsi37;
    struct s15* r8_38;
    struct s15* rsi39;
    struct s15* rdx40;
    uint64_t rsi41;
    struct s34* rax42;
    struct s15* rdx43;
    struct s35* rdx44;
    struct s15* rdx45;
    struct s15* rbx46;
    struct s15* rdx47;
    struct s15* rdx48;

    r13_6 = rsi;
    r12_7 = rdi;
    rdi8 = rdx;
    rsi9 = rsi->f8;
    rdx10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi9) & 0xfffffffffffffff8);
    if (!(*reinterpret_cast<unsigned char*>(&rsi9) & 3)) {
        if (reinterpret_cast<uint64_t>(rdi8) <= 0xff) 
            goto addr_40407f_3;
        rax11 = g442470;
        if (reinterpret_cast<uint64_t>(rdx10) < reinterpret_cast<uint64_t>(rdi8) + 8) 
            goto addr_4040aa_5;
        if (reinterpret_cast<uint64_t>(rdx10) - reinterpret_cast<uint64_t>(rdi8) <= reinterpret_cast<uint64_t>(rax11) + reinterpret_cast<uint64_t>(rax11)) 
            goto addr_4043c9_7;
        addr_4040aa_5:
        r14_12 = r13_6->f0;
        rbx13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax11) + reinterpret_cast<uint64_t>(rdi8) + 62 & -reinterpret_cast<uint64_t>(rax11));
        rax14 = fun_404abb();
        if (rax14 == 0xffffffffffffffff) 
            goto addr_40407f_3;
        r13_6 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(rax14) + reinterpret_cast<uint64_t>(r14_12));
        rdx15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx13) - reinterpret_cast<uint64_t>(r14_12));
        cf16 = reinterpret_cast<uint32_t>(rax14) < reinterpret_cast<uint32_t>(r12_7->f18);
        r13_6->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx15) - 32);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdx15) - 24) = 11;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdx15) - 16) = 0;
        if (cf16) {
            r12_7->f18 = rax14;
        }
        rbx17 = reinterpret_cast<uint64_t>(rbx13) + r12_7->f358 - (reinterpret_cast<uint64_t>(rdx10) + reinterpret_cast<uint64_t>(r14_12) + 32);
        below_or_equal18 = rbx17 <= r12_7->f360;
        r12_7->f358 = rbx17;
        if (!below_or_equal18) {
            r12_7->f360 = rbx17;
            goto addr_4043c9_7;
        }
    }
    r9_19 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdx10));
    if (reinterpret_cast<uint64_t>(rdx10) < reinterpret_cast<uint64_t>(rdi8)) {
        if (r12_7->f28 != r9_19) {
            if (r12_7->f20 != r9_19) {
                r10_20 = r9_19->f8;
                if (*reinterpret_cast<unsigned char*>(&r10_20) & 2 || (r10_21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r10_20) & 0xfffffffffffffff8), r8_22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx10) + reinterpret_cast<uint64_t>(r10_21)), reinterpret_cast<uint64_t>(r8_22) < reinterpret_cast<uint64_t>(rdi8))) {
                    addr_40407f_3:
                    *reinterpret_cast<int32_t*>(&r13_6) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = 0;
                    goto addr_4043c9_7;
                } else {
                    rax23 = (r9_19 + 2)->f0;
                    r11_24 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r8_22) - reinterpret_cast<uint64_t>(rdi8));
                    rcx = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r10_21) >> 3);
                    if (reinterpret_cast<uint64_t>(r10_21) <= 0xf8) {
                        rdx25 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 16);
                        if (rdx25 != rax23) {
                            (rdx25 + 2)->f0 = rax23;
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax23) + 16) = rdx25;
                            goto addr_40437b_19;
                        } else {
                            __asm__("rol eax, cl");
                            r12_7->f0 = r12_7->f0 & 0xfffffffe;
                            goto addr_40437b_19;
                        }
                    }
                    r10_26 = (r9_19 + 4)->f0;
                    if (r9_19 != rax23) 
                        goto addr_4042b7_22;
                }
            } else {
                rcx27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12_7->f8) + reinterpret_cast<uint64_t>(rdx10));
                if (reinterpret_cast<uint64_t>(rcx27) < reinterpret_cast<uint64_t>(rdi8)) 
                    goto addr_40407f_3;
                *reinterpret_cast<uint32_t*>(&rsi28) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = 0;
                rax29 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rcx27));
                r8_30 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rcx27) - reinterpret_cast<uint64_t>(rdi8));
                if (reinterpret_cast<uint32_t>(r8_30) <= reinterpret_cast<uint32_t>(31)) {
                    r13_6->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx27) | rsi28 | 2);
                    rax29->f8 = rax29->f8 | 1;
                    r12_7->f8 = reinterpret_cast<struct s15*>(0);
                    r12_7->f20 = reinterpret_cast<struct s15*>(0);
                    goto addr_4043c9_7;
                } else {
                    rcx31 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
                    r13_6->f8 = reinterpret_cast<void*>(rsi28 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    rcx31->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r8_30) | 1);
                    rax29->f0 = r8_30;
                    rax29->f8 = rax29->f8 & 0xfffffffffffffffe;
                    r12_7->f8 = r8_30;
                    r12_7->f20 = rcx31;
                    goto addr_4043c9_7;
                }
            }
        } else {
            rdx32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx10) + reinterpret_cast<uint64_t>(r12_7->f10));
            if (reinterpret_cast<uint64_t>(rdx32) <= reinterpret_cast<uint64_t>(rdi8)) 
                goto addr_40407f_3;
            *reinterpret_cast<uint32_t*>(&rsi33) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
            r9_34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx32) - reinterpret_cast<uint64_t>(rdi8));
            rax35 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
            r13_6->f8 = reinterpret_cast<void*>(rsi33 | reinterpret_cast<uint64_t>(rdi8) | 2);
            rax35->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r9_34) | 1);
            r12_7->f28 = rax35;
            r12_7->f10 = r9_34;
            goto addr_4043c9_7;
        }
    } else {
        rdx36 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdx10) - reinterpret_cast<uint64_t>(rdi8));
        if (reinterpret_cast<uint32_t>(rdx36) <= reinterpret_cast<uint32_t>(31)) {
            addr_4043c9_7:
            return r13_6;
        } else {
            *reinterpret_cast<uint32_t*>(&rsi37) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = 0;
            r8_38 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
            rsi39 = r8_38;
            r13_6->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi8) | rsi37 | 2);
            r8_38->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx36) | 3);
            r9_19->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r9_19->f8) | 1);
            goto addr_4043c1_31;
        }
    }
    rax23 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 40);
    rcx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r9_19) + 40);
    if (rax23) {
        addr_4042df_33:
        rdx40 = rax23;
    } else {
        rax23 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 32);
        if (!rax23) {
            addr_404309_35:
            if (!r10_26) {
                addr_40437b_19:
                *reinterpret_cast<uint32_t*>(&rsi41) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = 0;
                rax42 = reinterpret_cast<struct s34*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(r8_22));
                if (reinterpret_cast<uint32_t>(r11_24) > reinterpret_cast<uint32_t>(31)) {
                    rsi39 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r13_6) + reinterpret_cast<uint64_t>(rdi8));
                    r13_6->f8 = reinterpret_cast<void*>(rsi41 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    rsi39->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r11_24) | 3);
                    rax42->f8 = rax42->f8 | 1;
                    rdx36 = r11_24;
                    goto addr_4043c1_31;
                } else {
                    r13_6->f8 = reinterpret_cast<void*>(rsi41 | reinterpret_cast<uint64_t>(r8_22) | 2);
                    rax42->f8 = rax42->f8 | 1;
                    goto addr_4043c9_7;
                }
            } else {
                rdx43 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 56);
                *reinterpret_cast<int32_t*>(&rdx43 + 1) = 0;
                rcx = rdx43;
                rdx44 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(r12_7) + reinterpret_cast<uint32_t>(rdx43) * 8);
                if (rdx44->f258 != r9_19) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_26) + 32) != r9_19) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_26) + 40) = rax23;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r10_26) + 32) = rax23;
                    }
                    if (rax23) 
                        goto addr_40432e_43;
                    goto addr_40437b_19;
                } else {
                    rdx44->f258 = rax23;
                    if (!rax23) {
                        __asm__("rol eax, cl");
                        r12_7->f4 = r12_7->f4 & 0xfffffffe;
                        goto addr_40437b_19;
                    } else {
                        addr_40432e_43:
                        rdx45 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 32);
                        (rax23 + 4)->f0 = r10_26;
                        if (rdx45) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax23) + 32) = rdx45;
                            (rdx45 + 4)->f0 = rax23;
                            goto addr_40436a_48;
                        }
                    }
                }
            }
        } else {
            rcx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r9_19) + 32);
            goto addr_4042df_33;
        }
    }
    addr_4042e2_50:
    rbx46 = rcx;
    rax23 = rdx40;
    rcx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx40) + 40);
    rdx40 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdx40) + 40);
    if (rdx40) 
        goto addr_4042e2_50;
    rdx40 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax23) + 32);
    rcx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax23) + 32);
    if (rdx40) 
        goto addr_4042e2_50;
    *reinterpret_cast<struct s15**>(&rbx46->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_404309_35;
    addr_4043c1_31:
    fun_4026e8(r12_7, rsi39, rdx36, rcx);
    goto addr_4043c9_7;
    addr_40436a_48:
    rdx47 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 40);
    if (rdx47) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax23) + 40) = rdx47;
        (rdx47 + 4)->f0 = rax23;
        goto addr_40437b_19;
    }
    addr_4042b7_22:
    rdx48 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r9_19) + 16);
    (rdx48 + 2)->f0 = rax23;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax23) + 16) = rdx48;
    goto addr_404309_35;
}

struct s15* fun_404f70(struct s15* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx) {
    struct s15* rcx5;

    *reinterpret_cast<int32_t*>(&rcx5) = 32;
    *reinterpret_cast<int32_t*>(&rcx5 + 1) = 0;
    if (reinterpret_cast<uint32_t>(rdx) < reinterpret_cast<uint32_t>(32)) {
        rcx5 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rcx5) * 8 + 0x440448);
}

int64_t g440680 = 0;

void fun_40229c() {
    goto g440680;
}

struct s15* fun_404c04(int32_t edi, int32_t* rsi, struct s15* rdx, void** rcx, ...) {
    uint64_t rax5;
    int64_t rcx6;

    *reinterpret_cast<int32_t*>(&rax5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx) > *reinterpret_cast<int32_t*>(&rax5)) {
        *reinterpret_cast<int32_t*>(&rcx6) = static_cast<int32_t>(reinterpret_cast<uint32_t>(rdx) + rax5) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        if (rsi[*reinterpret_cast<int32_t*>(&rcx6) * 2] > edi) {
            *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rcx6);
            *reinterpret_cast<int32_t*>(&rdx + 1) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax5) = static_cast<int32_t>(rcx6 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        }
    }
    return static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax5));
}

struct s15* fun_404dc0();

struct s15* fun_404c24(struct s15* rdi, struct s15* rsi, int64_t rdx, void** rcx, int64_t r8, int64_t r9) {
    struct s15* rax7;

    rax7 = fun_404dc0();
    return rax7;
}

struct s36 {
    int32_t f0;
    signed char[12] pad16;
    struct s15* f10;
};

int64_t g406020 = 0x56ae;

struct s15* fun_401e9a(void** rdi, struct s36* rsi, int64_t rdx, void** rcx, int64_t r8, struct s15* r9, struct s15* a7, struct s15* a8) {
    int64_t rax9;
    struct s15* rax10;

    rax9 = g406020;
    rax10 = reinterpret_cast<struct s15*>(rax9());
    return rax10;
}

void** fun_404c31(int64_t rdi, uint32_t esi, int64_t rdx, void** rcx, struct s15* r8) {
    void** rax6;

    *reinterpret_cast<uint32_t*>(&rax6) = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi) >> 1) & 1 | *reinterpret_cast<uint32_t*>(&rdi) & 2 | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi) >> 2) & 0x20000000 | esi << 5 & 0x80000000 | static_cast<uint32_t>(rdi * 4) & 4 | *reinterpret_cast<uint32_t*>(&rdi) << 3 & 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

int64_t g406090 = 0x57cc;

struct s15* fun_401edf(struct s15* rdi, struct s36* rsi, int64_t rdx, int64_t rcx, struct s15* r8, struct s15* r9, int64_t a7, void** a8) {
    int64_t rax9;
    struct s15* rax10;

    rax9 = g406090;
    rax10 = reinterpret_cast<struct s15*>(rax9());
    return rax10;
}

int64_t g406018 = 0x56a0;

int32_t fun_401e81(struct s15* rdi, ...) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(g406018());
    return eax2;
}

struct s37 {
    signed char[4466616] pad4466616;
    signed char f4427b8;
    signed char[7] pad4466624;
    signed char f4427c0;
    signed char[2391] pad4469016;
    signed char f443118;
    signed char[7] pad4469024;
    signed char f443120;
};

struct s15* fun_405092(signed char* rdi, signed char* rsi, void* rdx, struct s37* rcx) {
    uint1_t df5;
    void* rcx6;
    void* tmp64_7;
    struct s15* rax8;

    df5 = 0;
    rcx6 = rdx;
    if (reinterpret_cast<uint64_t>(rdi) >= reinterpret_cast<uint64_t>(rsi)) {
        rdi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<uint64_t>(rcx6) - 1);
        rsi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint64_t>(rcx6) - 1);
        df5 = 1;
    }
    tmp64_7 = reinterpret_cast<void*>(1 - 2 * static_cast<uint64_t>(df5));
    while (*reinterpret_cast<int32_t*>(&rcx6)) {
        *reinterpret_cast<int32_t*>(&rcx6) = *reinterpret_cast<int32_t*>(&rcx6) - 1;
        *rdi = *rsi;
        rdi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<uint64_t>(tmp64_7));
        rsi = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint64_t>(tmp64_7));
    }
    return rax8;
}

int64_t g440670 = 0;

uint32_t fun_404dd0() {
    goto g440670;
}

uint32_t g4406c0 = 0;

int32_t fun_4018d7() {
    uint32_t eax1;

    eax1 = g4406c0;
    g443c70 = eax1;
    return 0xff;
}

struct s15* fun_404de0(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto g440670;
}

struct s38 {
    void** f0;
    signed char[8] pad16;
    int32_t f10;
};

unsigned char fun_404c6c(int32_t edi, int32_t esi) {
    int32_t eax3;
    struct s38* tmp64_4;

    eax3 = 0;
    if (edi) {
        tmp64_4 = reinterpret_cast<struct s38*>(g443ab0 + edi * 3);
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(tmp64_4->f10 == esi);
    }
    return *reinterpret_cast<unsigned char*>(&eax3);
}

struct s36* fun_401e5c(struct s15* rdi, struct s36* rsi);

int64_t g4060a8 = 0x5810;

struct s15* fun_4052d6(struct s15* rdi, struct s36* rsi, int64_t rdx, void** rcx, struct s15* r8, struct s15* r9);

int64_t g406040 = 0x56f6;

struct s15* fun_401dba(void*** rdi, struct s24* rsi, int64_t rdx, struct s15* rcx) {
    void* rbp5;
    void*** r13_6;
    struct s15* rdi7;
    struct s24* r12_8;
    int64_t rbx9;
    struct s36* rsi10;
    struct s15* r8_11;
    int64_t rdx12;
    struct s15* r9_13;
    void** rcx14;
    int32_t eax15;
    struct s15* rax16;
    int32_t v17;
    int64_t rax18;
    void** rcx19;
    int32_t v20;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r13_6 = rdi;
    rdi7 = rcx;
    r12_8 = rsi;
    rbx9 = rdx;
    while (rbx9 && !r12_8->f8) {
        r12_8 = reinterpret_cast<struct s24*>(reinterpret_cast<int64_t>(r12_8) + 16);
        --rbx9;
    }
    rsi10 = reinterpret_cast<struct s36*>(reinterpret_cast<int64_t>(rbp5) - 64);
    fun_401e5c(rdi7, rsi10);
    if (!rbx9) {
        *reinterpret_cast<int32_t*>(&r8_11) = 0;
        *reinterpret_cast<int32_t*>(&r8_11 + 1) = 0;
        *reinterpret_cast<int32_t*>(&rdx12) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&r8_11) = r12_8->f8;
        *reinterpret_cast<int32_t*>(&r8_11 + 1) = 0;
        rdx12 = r12_8->f0;
    }
    r9_13 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffbc);
    rcx14 = *r13_6;
    eax15 = reinterpret_cast<int32_t>(g4060a8(rdi7, rsi10, rdx12, rcx14, r8_11, r9_13));
    if (!eax15) {
        rax16 = fun_4052d6(rdi7, rsi10, rdx12, rcx14, r8_11, r9_13);
    } else {
        if (!v17) {
            *reinterpret_cast<int32_t*>(&rax18) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            while (rbx9 != rax18) {
                ++rax18;
            }
        }
        rcx19 = *r13_6;
        g406040(rdi7, rsi10, rdx12, rcx19, r8_11, r9_13);
        *reinterpret_cast<int32_t*>(&rax16) = v20;
        *reinterpret_cast<int32_t*>(&rax16 + 1) = 0;
    }
    return rax16;
}

uint32_t fun_404e8f(struct s23* rdi, uint32_t* rsi, struct s23* rdx, signed char* rcx) {
    int64_t rax5;
    int64_t rdx6;
    int64_t rbx7;
    uint32_t edx8;
    uint32_t ecx9;
    uint16_t cx10;
    int64_t rax11;
    uint32_t ecx12;
    int64_t rdx13;

    *reinterpret_cast<uint32_t*>(&rax5) = 0;
    do {
        *reinterpret_cast<uint32_t*>(&rdx6) = *reinterpret_cast<uint32_t*>(&rax5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rbx7) = *reinterpret_cast<uint32_t*>(&rax5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax5) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        edx8 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s23**>(reinterpret_cast<uint16_t>(rdi) + rdx6 * 2));
        ecx9 = edx8;
        cx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx9) & 0xfc00);
    } while (cx10 == 0xdc00);
    if (cx10 == 0xd800) {
        *reinterpret_cast<uint32_t*>(&rax11) = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s23**>(reinterpret_cast<uint16_t>(rdi) + rax5 * 2));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
        ecx12 = *reinterpret_cast<uint32_t*>(&rax11);
        if ((*reinterpret_cast<uint16_t*>(&ecx12) & 0xfc00) == 0xdc00) {
            *reinterpret_cast<uint32_t*>(&rdx13) = edx8 << 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            *rsi = static_cast<uint32_t>(rdx13 + rax11 - 0x35fdc00);
            *reinterpret_cast<uint32_t*>(&rax5) = static_cast<uint32_t>(rbx7 + 2);
        } else {
            *rsi = 0xfffd;
            *reinterpret_cast<uint32_t*>(&rax5) = 0xffffffff;
        }
    } else {
        *rsi = edx8;
    }
    return *reinterpret_cast<uint32_t*>(&rax5);
}

int64_t g406078 = 0x579c;

int64_t fun_401ec9() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(g406078());
    return rax1;
}

signed char* fun_4058c3() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t rcx7;
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    signed char* rax11;
    signed char* rax12;
    signed char al13;
    signed char* rax14;
    signed char* rax15;
    signed char al16;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    if (!(rcx7 - 1)) {
        *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
        *rax11 = reinterpret_cast<signed char>(*rax12 + al13);
        *rax14 = reinterpret_cast<signed char>(*rax15 + al16);
    }
}

int64_t g406038 = 0x56e8;

void fun_405211(signed char dil) {
    int1_t zf2;

    g443c74 = g443c74 | 4;
    zf2 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (zf2) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x405242]");
        __asm__("hlt ");
    } else {
        while (1) {
            g406038();
        }
    }
}

uint64_t* fun_401158(uint64_t rdi, int64_t rsi, uint64_t* rdx, uint64_t* rcx) {
    uint64_t* r8_5;
    int32_t ecx6;
    uint64_t rax7;
    int64_t rax8;
    uint64_t* rdx9;
    uint64_t rax10;

    r8_5 = rcx;
    ecx6 = 39;
    while (*reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(&rsi) - 1, rax7 = rdi >> *reinterpret_cast<signed char*>(&ecx6), *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<uint32_t*>(&rax7) & 0x1ff, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0, *reinterpret_cast<int32_t*>(&rsi) != -1) {
        rdx9 = rdx + rax8;
        if (!*rdx9) {
            rax10 = *r8_5 - 0x1000;
            *r8_5 = rax10;
            *rdx9 = rax10 | 3;
        }
        ecx6 = ecx6 - 9;
        rdx = reinterpret_cast<uint64_t*>(*rdx9 & 0x3fffffffff000);
    }
    return rdx + rax8;
}

uint32_t g443c68 = 0;

int64_t g442468 = 0;

int32_t g442488 = 0;

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
        g442478 = reinterpret_cast<struct s15*>(0x40000);
        g442480 = reinterpret_cast<struct s15*>(0xa00000);
        g442488 = 5;
        g442410 = 5;
        g442460 = rax5 & 0xfffffffffffffff8 | 8;
    }
    return;
}

uint32_t fun_401fe7(signed char* rdi, struct s14* rsi);

uint32_t fun_401f82(int32_t edi, struct s14* rsi);

int64_t fun_401f47(signed char* rdi) {
    struct s14* r12_2;
    uint32_t eax3;
    int64_t rbx4;
    uint32_t eax5;
    int64_t rax6;

    r12_2 = g442038;
    eax3 = fun_401fe7(rdi, r12_2);
    if (eax3 == 0xffffffff || (*reinterpret_cast<uint32_t*>(&rbx4) = eax3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0, eax5 = fun_401f82(10, r12_2), eax5 + 1 == 0)) {
        *reinterpret_cast<uint32_t*>(&rax6) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax6) = static_cast<uint32_t>(rbx4 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    }
    return rax6;
}

signed char fun_4047b0(struct s15* rdi);

struct s15* fun_4022a2(struct s15* rdi);

int64_t fun_401907();

signed char fun_40466a(struct s15** rdi, struct s15** rsi, struct s15* rdx, void* rcx) {
    struct s15* r15_5;
    struct s15* rbx6;
    struct s15* rdi7;
    struct s15* rdi8;
    signed char al9;
    struct s15* rdi10;
    struct s15* rsi11;
    struct s15* rax12;
    struct s15* r8_13;
    struct s15* rcx14;
    uint64_t r14_15;
    struct s15* rax16;
    struct s15* rsi17;
    struct s15* rax18;
    int32_t eax19;

    *reinterpret_cast<int32_t*>(&r15_5) = 0;
    *reinterpret_cast<int32_t*>(&r15_5 + 1) = 0;
    rbx6 = rdx;
    rdi7 = *rdi;
    fun_4047b0(rdi7);
    rdi8 = *rdi;
    al9 = fun_4047b0(rdi8);
    if (al9) {
        r15_5 = *rdi;
    }
    rdi10 = *rsi;
    if (!*rdi) {
        *reinterpret_cast<int32_t*>(&rsi11) = 4;
        *reinterpret_cast<int32_t*>(&rsi11 + 1) = 0;
        rdx = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(31) % reinterpret_cast<uint32_t>(rbx6));
        rax12 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(31) / reinterpret_cast<uint32_t>(rbx6));
        if (reinterpret_cast<uint32_t>(rax12) >= reinterpret_cast<uint32_t>(4)) {
            rsi11 = rax12;
        }
    } else {
        rsi11 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdi10) >> 1) + reinterpret_cast<uint32_t>(rdi10));
    }
    if (!rdi10) {
        *reinterpret_cast<int32_t*>(&r8_13) = 0;
        *reinterpret_cast<int32_t*>(&r8_13 + 1) = 0;
    } else {
        r8_13 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx6) * reinterpret_cast<uint32_t>(rdi10));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rbx6) | reinterpret_cast<uint32_t>(rdi10)) & 0xffffffffffff0000) {
            rdx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r8_13) % reinterpret_cast<uint32_t>(rdi10));
            if (!reinterpret_cast<int1_t>(rbx6 == reinterpret_cast<uint32_t>(r8_13) / reinterpret_cast<uint32_t>(rdi10))) 
                goto addr_40479a_11;
        }
    }
    rcx14 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi11) + reinterpret_cast<uint64_t>(rcx) + 1);
    if (!rcx14) {
        *reinterpret_cast<int32_t*>(&r14_15) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = 0;
        goto addr_404731_15;
    }
    r14_15 = reinterpret_cast<uint32_t>(rbx6) * reinterpret_cast<uint32_t>(rcx14);
    if (!(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rbx6) | reinterpret_cast<uint32_t>(rcx14)) & 0xffffffffffff0000)) {
        addr_404731_15:
        if (rdi10 = r15_5, rsi11 = reinterpret_cast<struct s15*>(r14_15 + 31 & 0xffffffffffffffe0), rax16 = fun_4022a2(rdi10), rax16 == 0) {
            fun_4018e7(rdi10, rsi11, rdx);
        } else {
            if (!r15_5 && (rsi17 = *rdi, !!rsi17)) {
                rax16 = fun_404f70(rax16, rsi17, r8_13, rcx14);
            }
            rax18 = fun_4050b2(reinterpret_cast<uint32_t>(rax16) + reinterpret_cast<uint32_t>(r8_13));
            *rsi = rcx14;
            *rdi = rax18;
            *reinterpret_cast<signed char*>(&eax19) = 1;
            goto addr_4047a1_21;
        }
    } else {
        rdx = reinterpret_cast<struct s15*>(r14_15 % reinterpret_cast<uint32_t>(rcx14));
        if (!reinterpret_cast<int1_t>(rbx6 == r14_15 / reinterpret_cast<uint32_t>(rcx14))) {
            addr_40479a_11:
            fun_401907();
        } else {
            goto addr_404731_15;
        }
    }
    eax19 = 0;
    addr_4047a1_21:
    return *reinterpret_cast<signed char*>(&eax19);
}

int64_t fun_4045d5(int64_t rdi);

uint32_t g4406a8 = 0;

void fun_4018ae(int32_t edi, void* rsi, int64_t* rdx) {
    int32_t edi4;
    uint32_t eax5;
    int64_t rax6;

    fun_4045d5(0);
    edi4 = edi;
    fun_405211(*reinterpret_cast<signed char*>(&edi4));
    eax5 = g4406a8;
    g443c70 = eax5;
    goto rax6;
}

int32_t fun_404db0() {
    goto g440670;
}

uint32_t fun_404e4d(struct s23* rdi, uint32_t* rsi, struct s23* rdx, signed char* rcx, uint64_t r8, ...) {
    uint32_t eax6;

    eax6 = fun_404e8f(rdi, rsi, rdx, rcx);
    return eax6;
}

struct s36* fun_401e5c(struct s15* rdi, struct s36* rsi) {
    struct s15* rdx3;
    struct s36* r8_4;
    int32_t ecx5;
    struct s36* rdi6;

    rdx3 = rdi;
    r8_4 = rsi;
    if (rdi == 0xffffffffffffffff) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    } else {
        ecx5 = 8;
        rdi6 = rsi;
        while (ecx5) {
            --ecx5;
            rdi6->f0 = 0;
            rdi6 = reinterpret_cast<struct s36*>(&rdi6->pad16);
            rsi = reinterpret_cast<struct s36*>(&rsi->pad16);
        }
        rsi->f10 = rdx3;
    }
    return r8_4;
}

uint32_t fun_401f82(int32_t edi, struct s14* rsi) {
    struct s14* r8_3;
    uint32_t eax4;
    int64_t rax5;
    uint32_t eax6;
    uint32_t edx7;

    r8_3 = rsi;
    if (edi == -1) {
        addr_401fdd_2:
        eax4 = fun_4020ab(r8_3, *reinterpret_cast<uint32_t*>(&rsi));
    } else {
        *reinterpret_cast<uint32_t*>(&rax5) = rsi->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        *reinterpret_cast<unsigned char*>(rsi->f18 + rax5) = *reinterpret_cast<unsigned char*>(&edi);
        *reinterpret_cast<uint32_t*>(&rsi) = rsi->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
        eax6 = rsi->f14 + 1 & static_cast<uint32_t>(reinterpret_cast<int64_t>(rsi) - 1);
        edx7 = r8_3->f10;
        r8_3->f14 = eax6;
        if (eax6 == edx7 || (r8_3->f0 == 2 || !(r8_3->f0 - 1) && *reinterpret_cast<unsigned char*>(&edi) == 10)) {
            if (r8_3->f30) {
                goto r8_3->f30;
            }
            if (eax6 == edx7) 
                goto addr_401fdd_2; else 
                goto addr_401fd7_7;
        } else {
            addr_401fd7_7:
            eax4 = *reinterpret_cast<unsigned char*>(&edi);
        }
    }
    return eax4;
}

int64_t g4406b8 = 0;

int64_t g440710 = 0;

uint32_t fun_401fe7(signed char* rdi, struct s14* rsi) {
    int64_t r14_3;
    signed char* r13_4;
    struct s14* rbx5;
    signed char dl6;
    int64_t rax7;
    int64_t rsi8;
    uint32_t eax9;
    uint32_t ecx10;
    int64_t rdx11;
    uint32_t eax12;
    uint32_t r12d13;
    uint32_t eax14;
    int1_t zf15;
    int32_t eax16;
    int64_t rax17;

    *reinterpret_cast<int32_t*>(&r14_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    r13_4 = rdi;
    rbx5 = rsi;
    while (dl6 = *r13_4, !!dl6) {
        *reinterpret_cast<uint32_t*>(&rax7) = rbx5->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        ++r13_4;
        *reinterpret_cast<signed char*>(rbx5->f18 + rax7) = dl6;
        *reinterpret_cast<uint32_t*>(&rsi8) = rbx5->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
        eax9 = rbx5->f14 + 1 & static_cast<uint32_t>(rsi8 - 1);
        ecx10 = rbx5->f10;
        rbx5->f14 = eax9;
        if (eax9 == ecx10) 
            goto addr_40203e_4;
        *reinterpret_cast<signed char*>(&rsi8) = rbx5->f0;
        if (*reinterpret_cast<signed char*>(&rsi8) == 2) 
            goto addr_40203e_4;
        *reinterpret_cast<signed char*>(&rsi8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi8) - 1);
        if (*reinterpret_cast<signed char*>(&rsi8)) 
            goto addr_402093_7;
        if (dl6 != 10) 
            goto addr_402093_7;
        addr_40203e_4:
        rdx11 = rbx5->f30;
        if (!rdx11) {
            if (eax9 != ecx10) {
                addr_402093_7:
                *reinterpret_cast<int32_t*>(&r14_3) = *reinterpret_cast<int32_t*>(&r14_3) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
                continue;
            } else {
                eax12 = fun_4020ab(rbx5, *reinterpret_cast<uint32_t*>(&rsi8));
            }
        } else {
            eax12 = reinterpret_cast<uint32_t>(rdx11(rbx5));
        }
        r12d13 = eax12;
        if (eax12 == 0xffffffff) {
            eax14 = fun_4020de(rbx5);
            zf15 = static_cast<int64_t>(reinterpret_cast<int32_t>(eax14)) == g4406b8;
            if (!zf15) 
                goto addr_402075_14;
        }
    }
    r12d13 = static_cast<uint32_t>(r14_3 + 1);
    addr_40209f_16:
    return r12d13;
    addr_402075_14:
    eax16 = fun_4020d4(rbx5);
    if (eax16) {
        rax17 = g440710;
        rbx5->f8 = *reinterpret_cast<uint32_t*>(&rax17);
        g443c70 = *reinterpret_cast<uint32_t*>(&rax17);
        goto addr_40209f_16;
    }
}

struct s39 {
    uint32_t f0;
    signed char[596] pad600;
    struct s15* f258;
};

struct s40 {
    uint32_t f0;
    signed char[596] pad600;
    struct s15* f258;
};

void fun_4026e8(struct s32* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx) {
    struct s32* rbx5;
    struct s15* rdi6;
    struct s15* rax7;
    struct s15* rsi8;
    struct s15* rcx9;
    int64_t rcx10;
    struct s15* r8_11;
    struct s15* rax12;
    struct s15* rax13;
    struct s15* r8_14;
    struct s15* r8_15;
    struct s15* r12_16;
    uint32_t eax17;
    struct s15* r10_18;
    void* r8_19;
    struct s15* rax20;
    struct s15* rsi21;
    struct s15* r8_22;
    struct s15* rdx23;
    void* rdx24;
    struct s15* r9_25;
    struct s15* rcx26;
    uint64_t rcx27;
    uint64_t rsi28;
    struct s15* eax29;
    uint32_t esi30;
    uint32_t ecx31;
    int64_t rax32;
    uint64_t rcx33;
    int64_t rcx34;
    uint32_t esi35;
    struct s15* ecx36;
    uint32_t r8d37;
    int64_t r8_38;
    int64_t rax39;
    uint32_t esi40;
    struct s15* rax41;
    struct s15* rdx42;
    int64_t r9_43;
    struct s39* r9_44;
    struct s15* rcx45;
    struct s15* r11_46;
    uint32_t ecx47;
    struct s15* rsi48;
    uint64_t rcx49;
    uint64_t rax50;
    uint64_t rax51;
    struct s15* rax52;
    struct s15* rcx53;
    struct s15* rcx54;
    struct s15* r9_55;
    struct s15* rcx56;
    struct s15* r10_57;
    int64_t r9_58;
    struct s40* r9_59;
    struct s15* rcx60;
    struct s15* rcx61;
    struct s15* rcx62;

    rbx5 = rdi;
    rdi6 = rsi;
    rax7 = rdi6->f8;
    rsi8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi) + reinterpret_cast<uint32_t>(rdx));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 1) 
        goto addr_402874_2;
    rdi6 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) - reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdi6->f0)));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 3) {
        rdx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdi6->f0)));
        if (rbx5->f20 == rdi6) {
            rcx9 = rsi8->f8;
            *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx9) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
            if (rcx10 != 3) {
                addr_402874_2:
                r8_11 = rsi8->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_11) & 2) {
                    rsi8->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(r8_11) & 0xfffffffffffffffe);
                    rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) | 1);
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                    goto addr_402a21_7;
                }
            } else {
                rax12 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi8->f8) & 0xfffffffffffffffe);
                rbx5->f8 = rdx;
                rsi8->f8 = rax12;
                rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s15**>(&rsi8->f0) = rdx;
                goto addr_402b5f_9;
            }
        } else {
            rax13 = (rdi6 + 2)->f0;
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdi6->f0)) <= reinterpret_cast<uint32_t>(0xff)) {
                r8_14 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16);
                if (r8_14 != rax13) {
                    (r8_14 + 2)->f0 = rax13;
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax13) + 16) = r8_14;
                    goto addr_402874_2;
                } else {
                    __asm__("rol eax, cl");
                    rbx5->f0 = rbx5->f0 & 0xfffffffe;
                    goto addr_402874_2;
                }
            }
            r8_15 = (rdi6 + 4)->f0;
            if (rdi6 == rax13) 
                goto addr_40278b_15; else 
                goto addr_40277d_16;
        }
    } else {
        r12_16 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rdi6->f0)) + reinterpret_cast<uint32_t>(rdx) + 32);
        eax17 = fun_40452c(rdi6, r12_16, rdx);
        if (!eax17) {
            rbx5->f358 = rbx5->f358 - reinterpret_cast<uint32_t>(r12_16);
            goto addr_402b5f_9;
        }
    }
    r10_18 = rbx5->f20;
    if (rbx5->f28 != rsi8) {
        if (rsi8 != r10_18) {
            r8_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_11) & 0xfffffffffffffff8);
            rax20 = (rsi8 + 2)->f0;
            rdx = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(r8_19));
            if (reinterpret_cast<uint64_t>(r8_19) <= 0xf8) {
                rsi21 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 16);
                if (rsi21 != rax20) {
                    (rsi21 + 2)->f0 = rax20;
                    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 16) = rsi21;
                    goto addr_4029ed_24;
                } else {
                    __asm__("rol eax, cl");
                    rbx5->f0 = rbx5->f0 & 0xfffffffe;
                    goto addr_4029ed_24;
                }
            }
            r8_22 = (rsi8 + 4)->f0;
            if (rsi8 != rax20) 
                goto addr_40292b_27;
        } else {
            rdx23 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(rbx5->f8));
            rbx5->f20 = rdi6;
            rbx5->f8 = rdx23;
            rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx23) | 1);
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rdx23)) = rdx23;
            goto addr_402b5f_9;
        }
    } else {
        rdx24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(rbx5->f10));
        rbx5->f28 = rdi6;
        rbx5->f10 = rdx24;
        rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdx24) | 1);
        if (rdi6 == r10_18) {
            rbx5->f20 = reinterpret_cast<struct s15*>(0);
            rbx5->f8 = reinterpret_cast<struct s15*>(0);
            goto addr_402b5f_9;
        }
    }
    rax20 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    r9_25 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rax20) {
        addr_402953_32:
        rcx26 = rax20;
    } else {
        rax20 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 32);
        if (!rax20) {
            addr_40297d_34:
            if (!r8_22) {
                addr_4029ed_24:
                rdi6->f8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                if (rdi6 != r10_18) {
                    addr_402a21_7:
                    rcx27 = reinterpret_cast<uint32_t>(rdx) >> 3;
                    if (reinterpret_cast<uint32_t>(rdx) > reinterpret_cast<uint32_t>(0xff)) {
                        rsi28 = reinterpret_cast<uint32_t>(rdx) >> 8;
                        eax29 = *reinterpret_cast<struct s15**>(&rsi28);
                        if (*reinterpret_cast<struct s15**>(&rsi28) && (eax29 = reinterpret_cast<struct s15*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rsi28)) <= 0xffff)) {
                            __asm__("bsr esi, esi");
                            esi30 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s15**>(&rsi28)) ^ 31;
                            ecx31 = 38 - esi30;
                            *reinterpret_cast<void**>(&rax32) = reinterpret_cast<void*>(31 - esi30);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = 0;
                            rcx33 = reinterpret_cast<uint32_t>(rdx) >> *reinterpret_cast<signed char*>(&ecx31);
                            *reinterpret_cast<uint32_t*>(&rcx34) = *reinterpret_cast<uint32_t*>(&rcx33) & 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                            eax29 = reinterpret_cast<struct s15*>(static_cast<uint32_t>(rcx34 + rax32 * 2));
                        }
                        esi35 = rbx5->f4;
                        ecx36 = eax29;
                        r8d37 = 1 << *reinterpret_cast<unsigned char*>(&ecx36);
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 56) = eax29;
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 40) = reinterpret_cast<struct s15*>(0);
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 32) = reinterpret_cast<struct s15*>(0);
                        *reinterpret_cast<struct s15**>(&r8_38) = eax29;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = 0;
                        if (esi35 & r8d37) 
                            goto addr_402ae7_38; else 
                            goto addr_402acc_39;
                    } else {
                        *reinterpret_cast<int32_t*>(&rax39) = static_cast<int32_t>(rcx27 + rcx27);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
                        esi40 = 1 << *reinterpret_cast<unsigned char*>(&rcx27);
                        rax41 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbx5) + rax39 * 8 + 72);
                        if (rbx5->f0 & esi40) {
                            rdx42 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax41) + 16);
                        } else {
                            rbx5->f0 = rbx5->f0 | esi40;
                            rdx42 = rax41;
                        }
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax41) + 16) = rdi6;
                        (rdx42 + 2)->f0 = rdi6;
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16) = rdx42;
                        (rdi6 + 2)->f0 = rax41;
                        goto addr_402b5f_9;
                    }
                } else {
                    rbx5->f8 = rdx;
                    goto addr_402b5f_9;
                }
            } else {
                *reinterpret_cast<struct s15**>(&r9_43) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_43) + 4) = 0;
                r9_44 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(rbx5) + r9_43 * 8);
                if (r9_44->f258 != rsi8) {
                    if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_22) + 32) != rsi8) {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_22) + 40) = rax20;
                    } else {
                        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_22) + 32) = rax20;
                    }
                    if (rax20) 
                        goto addr_4029a2_50;
                    goto addr_4029ed_24;
                } else {
                    r9_44->f258 = rax20;
                    if (!rax20) {
                        __asm__("rol eax, cl");
                        rbx5->f4 = rbx5->f4 & 0xfffffffe;
                        goto addr_4029ed_24;
                    } else {
                        addr_4029a2_50:
                        rcx45 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 32);
                        (rax20 + 4)->f0 = r8_22;
                        if (rcx45) {
                            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 32) = rcx45;
                            (rcx45 + 4)->f0 = rax20;
                            goto addr_4029dc_55;
                        }
                    }
                }
            }
        } else {
            r9_25 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rsi8) + 32);
            goto addr_402953_32;
        }
    }
    addr_402956_57:
    r11_46 = r9_25;
    rax20 = rcx26;
    r9_25 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx26) + 40);
    rcx26 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx26) + 40);
    if (rcx26) 
        goto addr_402956_57;
    rcx26 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 32);
    r9_25 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax20) + 32);
    if (rcx26) 
        goto addr_402956_57;
    *reinterpret_cast<struct s15**>(&r11_46->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_40297d_34;
    addr_402ae7_38:
    ecx47 = 0;
    rsi48 = *reinterpret_cast<struct s15**>(reinterpret_cast<int64_t>(rbx5) + r8_38 * 8 + 0x258);
    if (eax29 != 31) {
        ecx47 = 57 - (reinterpret_cast<uint32_t>(eax29) >> 1);
    }
    rcx49 = reinterpret_cast<uint32_t>(rdx) << *reinterpret_cast<unsigned char*>(&ecx47);
    while ((reinterpret_cast<uint32_t>(rsi48->f8) & 0xfffffffffffffff8) != rdx) {
        rax50 = rcx49;
        rcx49 = rcx49 + rcx49;
        rax51 = (rax50 >> 63) + 4;
        if (!*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi48) + rax51 * 8)) 
            goto addr_402b31_64;
        rsi48 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi48) + rax51 * 8);
    }
    rax52 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi48) + 16);
    (rax52 + 2)->f0 = rdi6;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi48) + 16) = rdi6;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16) = rax52;
    (rdi6 + 2)->f0 = rsi48;
    (rdi6 + 4)->f0 = reinterpret_cast<struct s15*>(0);
    addr_402b5f_9:
    return;
    addr_402b31_64:
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi48) + rax51 * 8) = rdi6;
    (rdi6 + 4)->f0 = rsi48;
    addr_402b39_67:
    (rdi6 + 2)->f0 = rdi6;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16) = rdi6;
    goto addr_402b5f_9;
    addr_402acc_39:
    rbx5->f4 = esi35 | r8d37;
    *reinterpret_cast<struct s15**>(reinterpret_cast<int64_t>(rbx5) + r8_38 * 8 + 0x258) = rdi6;
    (rdi6 + 4)->f0 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbx5) + r8_38 * 8 + 0x258);
    goto addr_402b39_67;
    addr_4029dc_55:
    rcx53 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rcx53) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 40) = rcx53;
        (rcx53 + 4)->f0 = rax20;
        goto addr_4029ed_24;
    }
    addr_40292b_27:
    rcx54 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rsi8) + 16);
    (rcx54 + 2)->f0 = rax20;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax20) + 16) = rcx54;
    goto addr_40297d_34;
    addr_40278b_15:
    rax13 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    r9_55 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rax13) {
        addr_4027a5_69:
        rcx56 = rax13;
    } else {
        rax13 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 32);
        if (!rax13) {
            addr_4027cf_71:
            if (!r8_15) 
                goto addr_402874_2; else 
                goto addr_4027d8_72;
        } else {
            r9_55 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi6) + 32);
            goto addr_4027a5_69;
        }
    }
    addr_4027a8_74:
    r10_57 = r9_55;
    rax13 = rcx56;
    r9_55 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rcx56) + 40);
    rcx56 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rcx56) + 40);
    if (rcx56) 
        goto addr_4027a8_74;
    rcx56 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax13) + 32);
    r9_55 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax13) + 32);
    if (rcx56) 
        goto addr_4027a8_74;
    *reinterpret_cast<struct s15**>(&r10_57->f0) = reinterpret_cast<struct s15*>(0);
    goto addr_4027cf_71;
    addr_4027d8_72:
    *reinterpret_cast<struct s15**>(&r9_58) = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_58) + 4) = 0;
    r9_59 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(rbx5) + r9_58 * 8);
    if (r9_59->f258 != rdi6) {
        if (*reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_15) + 32) != rdi6) {
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_15) + 40) = rax13;
        } else {
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(r8_15) + 32) = rax13;
        }
        if (!rax13) 
            goto addr_402830_81;
    } else {
        r9_59->f258 = rax13;
        if (!rax13) {
            __asm__("rol eax, cl");
            rbx5->f4 = rbx5->f4 & 0xfffffffe;
            goto addr_402874_2;
        }
    }
    rcx60 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 32);
    (rax13 + 4)->f0 = r8_15;
    if (rcx60) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax13) + 32) = rcx60;
        (rcx60 + 4)->f0 = rax13;
    }
    rcx61 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 40);
    if (rcx61) {
        *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax13) + 40) = rcx61;
        (rcx61 + 4)->f0 = rax13;
        goto addr_402874_2;
    }
    addr_402830_81:
    goto addr_402874_2;
    addr_40277d_16:
    rcx62 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rdi6) + 16);
    (rcx62 + 2)->f0 = rax13;
    *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax13) + 16) = rcx62;
    goto addr_4027cf_71;
}

uint32_t g440700 = 0;

struct s15* fun_4018f7() {
    uint32_t eax1;

    eax1 = g440700;
    g443c70 = eax1;
    return 0xff;
}

struct s15* g4427c0 = reinterpret_cast<struct s15*>(0);

int32_t fun_401ef5(int64_t rdi);

struct s41 {
    signed char[4466624] pad4466624;
    signed char f4427c0;
    signed char[2399] pad4469024;
    signed char f443120;
};

uint32_t fun_404ac1(struct s15* rdi, struct s15* rsi) {
    uint32_t r13d3;
    int64_t rdi4;
    struct s15* rdx5;
    int32_t r12d6;
    void** rcx7;
    struct s15* rax8;
    struct s15* r14_9;
    struct s15* rbx10;
    int64_t rdi11;
    int1_t zf12;
    int32_t eax13;
    struct s15* rdi14;
    int32_t eax15;
    uint32_t eax16;
    struct s15* rdx17;
    struct s37* rcx18;
    struct s41* r8_19;
    struct s15* rdx20;
    void* tmp64_21;

    if (reinterpret_cast<uint32_t>(rdi) + 0xffffffffffffffff > 0xfffffffffffffffd || !rsi) {
        r13d3 = 0;
    } else {
        rdi4 = reinterpret_cast<int32_t>(rdi) >> 16;
        rdx5 = g4427c0;
        r12d6 = *reinterpret_cast<int32_t*>(&rdi4);
        r13d3 = 0;
        rax8 = fun_404c04(static_cast<int32_t>(rdi4 + (reinterpret_cast<uint32_t>(rsi) + 0xffff >> 16) - 1), 0x4427c8, rdx5, rcx7);
        r14_9 = rax8;
        while (rax8 && (rbx10 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax8) + 0xffffffffffffffff), r12d6 <= *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rbx10) * 8 + 0x4427cc))) {
            rdi11 = static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rbx10) * 8 + 0x4427c8)) << 16;
            zf12 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
            if (!zf12) {
                eax13 = fun_401ef5(rdi11);
                rdi14 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rbx10) * 8 + 0x443128);
                if (!eax13) {
                    r13d3 = 0xffffffff;
                }
                eax15 = fun_401e81(rdi14);
                if (!eax15) {
                    r13d3 = 0xffffffff;
                }
            } else {
                eax16 = fun_404dd0();
                r13d3 = r13d3 | eax16;
            }
            rax8 = rbx10;
        }
        if (reinterpret_cast<uint32_t>(rax8) < reinterpret_cast<uint32_t>(r14_9)) 
            goto addr_404b80_13;
    }
    addr_404bf5_14:
    return r13d3;
    addr_404b80_13:
    rdx17 = g4427c0;
    if (reinterpret_cast<uint32_t>(rdx17) > reinterpret_cast<uint32_t>(r14_9)) {
        rcx18 = reinterpret_cast<struct s37*>((reinterpret_cast<uint32_t>(rax8) + 1) * 8);
        r8_19 = reinterpret_cast<struct s41*>((reinterpret_cast<uint32_t>(r14_9) + 1) * 8);
        fun_405092(&rcx18->f4427c0, &r8_19->f4427c0, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx17) - reinterpret_cast<uint32_t>(r14_9)) << 3, rcx18);
        rdx20 = g4427c0;
        rax8 = fun_405092(&rcx18->f443120, &r8_19->f443120, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx20) - reinterpret_cast<uint32_t>(r14_9)) << 3, rcx18);
    }
    tmp64_21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rax8) + reinterpret_cast<uint32_t>(g4427c0));
    g4427c0 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(tmp64_21) - reinterpret_cast<uint32_t>(r14_9));
    goto addr_404bf5_14;
}

uint64_t g440728 = 0;

uint32_t g440730 = 0;

uint32_t fun_40524a(uint32_t edi, uint32_t esi);

struct s15* fun_40481d(struct s15* rdi) {
    uint64_t rcx2;
    uint32_t ecx3;
    struct s15* rsi4;
    struct s15* rdi5;
    struct s15* r15_6;
    uint32_t r13d7;
    struct s15* rbx8;
    uint32_t r14d9;
    struct s15* r14_10;
    struct s15* rdx11;
    uint32_t ecx12;
    void** rcx13;
    uint32_t r13d14;
    struct s15* rax15;
    struct s15* r12_16;
    struct s15* rax17;
    int32_t r10d18;
    void* r8_19;
    struct s15* rsi20;
    uint64_t r14_21;
    uint32_t eax22;
    void** rdi23;
    int64_t r8_24;
    int64_t rdx25;
    void*** tmp64_26;
    struct s15* r9_27;
    void** rcx28;
    struct s36* rsi29;
    struct s15* rax30;
    struct s15* rdi31;
    struct s15* r8_32;
    struct s15* rax33;
    void** rax34;
    struct s15* rax35;
    struct s15* rdx36;
    uint64_t r13_37;
    struct s15* rax38;
    struct s15* rdx39;
    struct s37* rcx40;
    struct s15* rax41;
    struct s15* rdx42;

    rcx2 = g440728;
    ecx3 = *reinterpret_cast<uint32_t*>(&rcx2) | g440730;
    rsi4 = rdi;
    *reinterpret_cast<int32_t*>(&rdi5) = 0;
    *reinterpret_cast<int32_t*>(&rdi5 + 1) = 0;
    r15_6 = reinterpret_cast<struct s15*>(0);
    r13d7 = ecx3 | 2;
    rbx8 = rsi4;
    r14d9 = g440668;
    *reinterpret_cast<uint32_t*>(&r14_10) = r14d9 & 4;
    if (!*reinterpret_cast<uint32_t*>(&r14_10) || !0) {
        rbx8 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rbx8) + 0xffff);
        *reinterpret_cast<int16_t*>(&rbx8) = 0;
    }
    rdx11 = g4427c0;
    ecx12 = r13d7 & 16;
    if (ecx12) {
        addr_4048fd_5:
        if (!reinterpret_cast<int1_t>(rdx11 == 0x12c)) {
            if (!ecx12) {
                rcx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r15_6) >> 16);
                fun_404c04(static_cast<int32_t>((reinterpret_cast<uint32_t>(rbx8) + 0xffff >> 16) + reinterpret_cast<uint64_t>(rcx13) - 1), 0x4427c8, rdx11, rcx13);
            } else {
                fun_40452c(r15_6, rbx8, rdx11);
            }
            r13d14 = r13d7 | 16;
            if (!*reinterpret_cast<uint32_t*>(&r14_10)) 
                goto addr_40494d_10;
        } else {
            rax15 = fun_4018e7(rdi5, rsi4, rdx11);
            r12_16 = rax15;
            goto addr_404aa9_12;
        }
    } else {
        if (rax17 = rdx11, r15_6 = reinterpret_cast<struct s15*>(0x200000000000), rdx11 == 0) {
            addr_4048f9_14:
            *reinterpret_cast<int16_t*>(&r15_6) = 0;
            goto addr_4048fd_5;
        } else {
            r10d18 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rdx11) * 8 + 0x4427c4);
            r8_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx8) >> 16);
            do {
                rax17 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rax17) - 1);
                *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax17) * 8 + 0x4427cc);
                *reinterpret_cast<int32_t*>(&rsi4 + 1) = 0;
                rdi5 = reinterpret_cast<struct s15*>(static_cast<int64_t>(static_cast<int32_t>(reinterpret_cast<uint32_t>(rsi4) + 1)));
                if (reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint64_t>(r8_19) > 0x30000000) 
                    continue;
                if (*reinterpret_cast<int32_t*>(&rsi4) > 0x1ffffffe) 
                    goto addr_4048de_18;
            } while (rax17);
            goto addr_4048ec_20;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsi20) = r13d14;
    *reinterpret_cast<int32_t*>(&rsi20 + 1) = 0;
    r14_21 = reinterpret_cast<uint32_t>(rbx8) >> 32;
    eax22 = fun_40524a(3, *reinterpret_cast<uint32_t*>(&rsi20));
    rdi23 = reinterpret_cast<void**>(0xffffffffffffffff);
    *reinterpret_cast<int32_t*>(&r8_24) = *reinterpret_cast<int32_t*>(&rbx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx25) = eax22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
    if (!1) {
        tmp64_26 = g443ab0 - 3;
        rdi23 = *tmp64_26;
    }
    *reinterpret_cast<int32_t*>(&r9_27) = 0;
    *reinterpret_cast<int32_t*>(&r9_27 + 1) = 0;
    *reinterpret_cast<uint32_t*>(&rcx28) = *reinterpret_cast<uint32_t*>(&r14_21);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi29) = 0x405320;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
    rax30 = fun_401e9a(rdi23, 0x405320, rdx25, rcx28, r8_24, 0, 0xff, rsi20);
    rdi31 = reinterpret_cast<struct s15*>(0xff);
    r14_10 = rax30;
    r8_32 = rsi20;
    if (rax30) 
        goto addr_4049bc_24;
    addr_4049f7_25:
    rax33 = fun_4052d6(rdi31, rsi29, rdx25, rcx28, r8_32, r9_27);
    addr_4049fc_26:
    r12_16 = rax33;
    r14_10 = reinterpret_cast<struct s15*>(0xffffffffffffffff);
    goto addr_404a03_27;
    addr_4049bc_24:
    rax34 = fun_404c31(3, r13d14, rdx25, rcx28, r8_32);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(&rax34);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
    r9_27 = r15_6;
    r8_32 = rbx8;
    rax35 = fun_401edf(r14_10, rsi29, 0, 0, r8_32, r9_27, 0xff, rax34);
    rdx25 = 0xff;
    r12_16 = rax35;
    rcx28 = rax34;
    if (rax35) {
        addr_404a03_27:
        if (r12_16 != 0xffffffffffffffff) {
            rdx36 = g4427c0;
            r13_37 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(r12_16) >> 16);
            rax38 = fun_404c04(*reinterpret_cast<int32_t*>(&r13_37), 0x4427c8, rdx36, rcx28, *reinterpret_cast<int32_t*>(&r13_37), 0x4427c8, rdx36, rcx28);
            rdx39 = g4427c0;
            if (reinterpret_cast<uint32_t>(rdx39) > reinterpret_cast<uint32_t>(rax38)) {
                rcx40 = reinterpret_cast<struct s37*>((reinterpret_cast<uint32_t>(rax38) + 2) * 8);
                rax41 = fun_405092(&rcx40->f4427c0, &rcx40->f4427b8, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx39) - reinterpret_cast<uint32_t>(rax38)) << 3, rcx40);
                rdx42 = g4427c0;
                rax38 = fun_405092(&rcx40->f443120, &rcx40->f443118, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx42) - reinterpret_cast<uint32_t>(rax41)) << 3, rcx40);
            }
            g4427c0 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(g4427c0) + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax38) * 8 + 0x4427c8) = *reinterpret_cast<int32_t*>(&r13_37);
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(rax38) * 8 + 0x443128) = r14_10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax38) * 8 + 0x4427cc) = static_cast<int32_t>((reinterpret_cast<uint32_t>(rbx8) + 0xffff >> 16) + r13_37 - 1);
        }
    } else {
        rdi31 = r14_10;
        fun_401e81(rdi31, rdi31);
        goto addr_4049f7_25;
    }
    addr_404aa9_12:
    return r12_16;
    addr_40494d_10:
    *reinterpret_cast<uint32_t*>(&rcx28) = r13d14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    rax33 = fun_404c24(r15_6, rbx8, 3, rcx28, -1, 0);
    goto addr_4049fc_26;
    addr_4048de_18:
    rdi5 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(rdi5) << 16);
    r15_6 = rdi5;
    goto addr_4048f9_14;
    addr_4048ec_20:
    r15_6 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(r10d18 + 1)) << 16);
    goto addr_4048f9_14;
}

struct s42 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
};

int64_t fun_4045d5(int64_t rdi) {
    int64_t r12_2;
    int64_t v3;
    int64_t rdx4;
    struct s20* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s42* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s20* r13_11;
    int64_t rdi12;

    r12_2 = rdi;
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
            } while (r12_2 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_2 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_2) 
                goto addr_40463b_7;
            if (!r13_11) 
                goto addr_404662_9;
            rdi5 = r13_11;
        }
        rdi12 = rcx8->f18;
        rdx10(rdi12);
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

uint32_t g440708 = 0;

int64_t fun_401907() {
    uint32_t eax1;

    eax1 = g440708;
    g443c70 = eax1;
    return 0xff;
}

signed char fun_4047b0(struct s15* rdi) {
    int64_t rbx2;
    struct s15* rdx3;
    void** rcx4;
    struct s15* rax5;
    uint32_t eax6;
    uint32_t eax7;

    if (reinterpret_cast<uint64_t>(rdi - 0x80000000000) <= 0xfffffffffff) {
        return 0;
    } else {
        rbx2 = reinterpret_cast<int32_t>(rdi) >> 16;
        rdx3 = g4427c0;
        rax5 = fun_404c04(*reinterpret_cast<int32_t*>(&rbx2), 0x4427c8, rdx3, rcx4);
        eax6 = 0;
        if (rax5) {
            eax7 = 1;
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax5) * 8 + 0x4427c0) != *reinterpret_cast<int32_t*>(&rbx2)) {
                eax7 = 0;
                *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(rax5) + 0xffffffffffffffff) * 8 + 0x4427cc) == *reinterpret_cast<int32_t*>(&rbx2));
            }
            eax6 = eax7 & 1;
        }
        return *reinterpret_cast<signed char*>(&eax6);
    }
}

struct s15* fun_404dc0() {
    goto g440670;
}

uint32_t fun_40524a(uint32_t edi, uint32_t esi) {
    uint32_t eax3;
    uint32_t edx4;
    uint64_t rcx5;
    int64_t rdx6;
    uint64_t rsi7;

    eax3 = esi;
    if ((edi & 7) != 7) {
        if ((edi & 3) != 3) {
            edx4 = 32;
            if ((edi & 5) != 5 && (edx4 = 16, !(*reinterpret_cast<unsigned char*>(&edi) & 4))) {
                edx4 = (edi & 1) + 1;
            }
        } else {
            edx4 = 4;
            if (!(*reinterpret_cast<unsigned char*>(&eax3) & 1)) {
                rcx5 = g440728;
                *reinterpret_cast<uint32_t*>(&rdx6) = reinterpret_cast<uint1_t>(rcx5 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi))) & rcx5));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
                edx4 = static_cast<uint32_t>(rdx6 * 4 + 4);
            }
        }
    } else {
        edx4 = 64;
        if (!(*reinterpret_cast<unsigned char*>(&eax3) & 1)) {
            rsi7 = g440728;
            if (rsi7 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax3))) & rsi7)) {
                edx4 = 0x80;
            }
        }
    }
    return (eax3 | edi) & 0xdd000000 | edx4;
}

struct s15* fun_4052d6(struct s15* rdi, struct s36* rsi, int64_t rdx, void** rcx, struct s15* r8, struct s15* r9) {
    int1_t zf7;
    struct s15* rax8;
    int64_t rax9;

    zf7 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (zf7) {
        rax8 = fun_4018f7();
        return rax8;
    } else {
        rax9 = fun_401ec9();
        g443c70 = *reinterpret_cast<uint32_t*>(&rax9);
        return 0xffffffffffffffff;
    }
}

int64_t g4060a0 = 0x57fe;

int32_t fun_401ef5(int64_t rdi) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(g4060a0());
    return eax2;
}

struct s15* fun_4018c7(int64_t rdi, int64_t rsi) {
    uint32_t eax3;

    eax3 = g4406a8;
    g443c70 = eax3;
    return 0xff;
}

void fun_404f9e() {
    __asm__("outsd ");
}

void fun_404fa1(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int64_t rbx4;
    int64_t v5;

    __asm__("rol ch, 0xfe");
    if (!less_or_equal2) {
        *reinterpret_cast<int64_t*>(rdi + rdx3 - 8) = rbx4;
        goto v5;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xeb77");
    }
}

void fun_404faf() {
    __asm__("outsd ");
}

void fun_404fb2() {
    int64_t rcx1;
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x404f79;
}

void fun_404fb5(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int32_t ebx4;

    if (!less_or_equal2) {
        *reinterpret_cast<int32_t*>(rdi + rdx3 - 4) = ebx4;
        goto 0x405007;
    }
}

void fun_404fb8(signed char* rdi, signed char* rsi, uint64_t rdx, int64_t rcx) {
    int1_t zf5;
    uint64_t rcx6;
    uint64_t rdx7;
    uint64_t rcx8;
    uint64_t rcx9;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf5)) {
        if (rdx < 0x400) 
            goto addr_404f91_4;
    } else {
        __asm__("in eax, 0xef");
        __asm__("fucomi st0, st3");
        if (rdx < 0x400) {
            rcx6 = 16;
            do {
                rcx6 = rcx6 + 16;
                __asm__("movdqu xmm3, [rsi+rcx-0x20]");
                __asm__("movdqu [rdi+rcx-0x20], xmm3");
            } while (rdx > rcx6);
            __asm__("movdqu xmm3, [rsi+rdx-0x10]");
            __asm__("movdqu [rdi+rdx-0x10], xmm3");
            __asm__("pxor xmm3, xmm3");
            goto 0x405008;
        }
    }
    if (rdx > 0x400000) {
        __asm__("movdqu xmm3, [rsi]");
        __asm__("movdqu [rdi], xmm3");
        rdx7 = rdx - ((reinterpret_cast<uint64_t>(rdi + 16) & 0xfffffffffffffff0) - reinterpret_cast<int64_t>(rdi));
        rcx8 = 16;
        do {
            rcx8 = rcx8 + 16;
            __asm__("movdqu xmm3, [rsi+rcx-0x20]");
            __asm__("movntdq [rdi+rcx-0x20], xmm3");
        } while (rdx7 > rcx8);
        __asm__("sfence ");
        __asm__("movdqu xmm3, [rsi+rdx-0x10]");
        __asm__("movdqu [rdi+rdx-0x10], xmm3");
        __asm__("pxor xmm3, xmm3");
        goto 0x405008;
    } else {
        rcx9 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx9)) {
            *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
            *rdi = *rsi;
            ++rdi;
            ++rsi;
        }
        goto 0x405008;
    }
    addr_404f91_4:
}

void fun_4050da(int32_t* rdi) {
    int64_t rcx2;
    int64_t rcx3;
    int32_t ebx4;
    int32_t ebx5;
    void* rdx6;
    int64_t v7;
    int1_t sf8;

    rcx2 = rcx3 - 1;
    if (rcx2) {
        ebx4 = ebx5 * *reinterpret_cast<int32_t*>(&rcx2);
        *rdi = ebx4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx6) - 4) = ebx4;
        goto v7;
    } else {
        if (sf8) 
            goto " ";
    }
}

void fun_4050e9(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int64_t rbx4;

    if (!less_or_equal2) {
        *reinterpret_cast<int64_t*>(rdi + rdx3 - 8) = rbx4;
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

struct s43 {
    signed char[106] pad106;
    signed char f6a;
};

struct s44 {
    signed char[106] pad106;
    signed char f6a;
};

void fun_4050f7() {
    int64_t rcx1;
    int1_t zf2;
    int64_t rax3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    signed char al7;
    struct s43* rbx8;
    struct s44* rbx9;
    signed char dh10;
    uint64_t rcx11;
    uint64_t rdx12;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x4050be;
    __asm__("in al, 0x57");
    __asm__("fucomi st0, st3");
    __asm__("cli ");
    *reinterpret_cast<signed char*>(rax3 + rax4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax5 + rax6) + al7);
    rbx8->f6a = reinterpret_cast<signed char>(rbx9->f6a + dh10);
    __asm__("punpcklbw xmm3, xmm3");
    __asm__("punpcklwd xmm3, xmm3");
    __asm__("pshufd xmm3, xmm3, 0x0");
    *reinterpret_cast<int32_t*>(&rcx11) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    do {
        rcx11 = rcx11 + 16;
        __asm__("movdqu [rdi+rcx-0x20], xmm3");
    } while (rdx12 > rcx11);
    __asm__("movdqu [rdi+rdx-0x10], xmm3");
    __asm__("xorps xmm3, xmm3");
}

struct s45 {
    struct s45* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[40] pad73;
    unsigned char f49;
    signed char[4] pad78;
    unsigned char f4e;
    unsigned char f4f;
    signed char[3] pad83;
    unsigned char f53;
    int32_t f54;
    unsigned char f55;
    signed char[8] pad97;
    unsigned char f61;
    signed char[2] pad100;
    int32_t f64;
    void* f65;
    unsigned char f66;
    int32_t f67;
    int32_t f68;
    unsigned char f69;
    unsigned char f6c;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    uint32_t f70;
    void* f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
    int32_t f77;
    signed char[959524783] pad959524914;
    uint32_t f39313032;
};

struct s46 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s47 {
    signed char[32] pad32;
    int32_t f20;
};

struct s48 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s49 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s50 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s51 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s52 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s53 {
    signed char[111] pad111;
    signed char f6f;
};

struct s54 {
    signed char[101] pad101;
    signed char f65;
};

struct s45* g4f;

void* ge00000000000056;

void fun_405340(struct s45* rdi, int32_t esi, int16_t dx, struct s45* rcx, unsigned char* r8) {
    struct s45* rdx3;
    void* rsp6;
    int1_t cf7;
    void* al8;
    void* eax9;
    void* eax10;
    void* eax11;
    void* eax12;
    struct s45* rax13;
    struct s46* rbx14;
    struct s45* rsi15;
    int1_t zf16;
    struct s45* rbp17;
    void* rsp18;
    struct s47* rbx19;
    int64_t* rsp20;
    void** rsp21;
    int64_t* rsp22;
    int64_t r11_23;
    int64_t* rsp24;
    int64_t rbx25;
    struct s45** rsp26;
    struct s45** rsp27;
    int64_t* rsp28;
    int64_t r10_29;
    void** rsp30;
    int64_t* rsp31;
    int64_t r13_32;
    int64_t* rsp33;
    int64_t r10_34;
    struct s45** rsp35;
    struct s45** rsp36;
    int64_t* rsp37;
    int64_t r11_38;
    struct s48* rbx39;
    struct s49* rbx40;
    struct s45* rsp41;
    struct s45* r12_42;
    struct s51* rbx43;
    struct s52* rbx44;
    uint1_t zf45;
    struct s53* rbx46;
    unsigned char* r10_47;
    signed char* r10_48;
    struct s45* tmp32_49;
    int1_t cf50;
    uint1_t zf51;
    int1_t sf52;
    struct s45* tmp32_53;
    void* tmp32_54;
    uint1_t cf55;
    struct s54* r15_56;
    void* rsp57;
    uint1_t cf58;
    uint1_t below_or_equal59;
    void* bl60;
    struct s45* rsp61;
    struct s45* rsp62;
    struct s45* rsp63;
    struct s45* rsp64;
    void* bl65;
    void* bl66;
    void* rsp67;
    uint1_t cf68;
    uint1_t below_or_equal69;
    struct s45* rsp70;
    struct s45* rsp71;
    struct s45* r12_72;
    struct s45* rsp73;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    rsp6 = __zero_stack_offset();
    if (cf7) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s45**>(rcx) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rcx)) + reinterpret_cast<unsigned char>(al8));
        __asm__("rol byte [rcx], 0xc0");
        eax9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<int32_t>(eax11));
        eax12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax9) + reinterpret_cast<int32_t>(eax9));
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12));
        *reinterpret_cast<signed char*>(&eax12) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax12) - 8) - 8) - 8) - 8) - 8);
        rax13 = reinterpret_cast<struct s45*>(reinterpret_cast<int32_t>(eax12) + 0x5fc05fc + 0x5fc05fc);
        *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
        *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) | rbx14->f6f);
        if (1) 
            goto addr_4053ed_5; else 
            goto addr_405380_6;
    }
    addr_4053a9_7:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
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
        *reinterpret_cast<uint32_t*>(&rsi15) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) * 0x706f430a;
        *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
        zf16 = __undefined();
        if (!__undefined()) {
            if (!zf16) 
                goto addr_405472_12;
            if (!__intrinsic()) 
                goto addr_405408_14;
        } else {
            *reinterpret_cast<int32_t*>(&rsp6) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi) + 0x68) * 0x30322074;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp6) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rdx3 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x75) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
            if (1) {
                addr_405410_16:
                if (1) {
                    goto addr_405433_18;
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rbp17) = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi15) + 0x65)) * 0x656c4120;
                *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                zf16 = __undefined();
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
    *reinterpret_cast<uint32_t*>(&rsp18) = reinterpret_cast<uint32_t>(rbx19->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_405498_24:
        *reinterpret_cast<uint32_t*>(&rbp17) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 32) * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        rsp20 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp18) - 8);
        *rsp20 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_405433_18:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) = 0;
    }
    addr_40550f_26:
    rsp21 = reinterpret_cast<void**>(rsp20 - 1);
    *reinterpret_cast<void***>(rsp21) = rsp21;
    rsp22 = reinterpret_cast<int64_t*>(rsp21 - 1);
    *rsp22 = r11_23;
    rsp24 = rsp22 - 1;
    *rsp24 = rbx25;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 79) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp26 = reinterpret_cast<struct s45**>(rsp24 - 1);
    *rsp26 = rdx3;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp27 = rsp26 - 8;
    *rsp27 = rax13;
    rsp28 = reinterpret_cast<int64_t*>(rsp27 - 8);
    *rsp28 = r10_29;
    rsp30 = reinterpret_cast<void**>(rsp28 - 1);
    *reinterpret_cast<void***>(rsp30) = rsp30;
    rsp31 = reinterpret_cast<int64_t*>(rsp30 - 1);
    *rsp31 = r13_32;
    rsp33 = rsp31 - 1;
    *rsp33 = r10_34;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 85) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    rsp35 = reinterpret_cast<struct s45**>(rsp33 - 1);
    *rsp35 = rdx3;
    rsp36 = rsp35 - 8;
    *rsp36 = rax13;
    rsp37 = reinterpret_cast<int64_t*>(rsp36 - 8);
    *rsp37 = r11_38;
    rbx39->f65 = reinterpret_cast<unsigned char>(rbx40->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp41 = reinterpret_cast<struct s45*>(rsp37 - 1);
    *reinterpret_cast<struct s45**>(rsp41) = rbp17;
    *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)));
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    }
    __asm__("outsb ");
    if (1) {
        if (!*reinterpret_cast<void**>(&rax13)) {
            __asm__("a32 outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 97) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
            __asm__("outsb ");
            __asm__("outsb ");
            __asm__("outsd ");
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 97)) 
                goto addr_405684_34;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 0x6c) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp41) - 8);
                *reinterpret_cast<struct s45**>(rsp41) = r12_42;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 99) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
                __asm__("outsb ");
                if (1) 
                    goto addr_4056b3_38; else 
                    goto addr_40564e_39;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                if (1) {
                    __asm__("insb ");
                }
            }
        }
    } else {
        addr_4055a8_42:
        *reinterpret_cast<void**>(&rax13 + 1) = reinterpret_cast<void*>(0xff);
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s50**>(&rdi))->f69) = 0;
        if (!*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s50**>(&rdi))->f69)) {
            goto addr_40561c_44;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x69) = 0;
            if (1) {
                addr_4055d9_46:
                rbx43->f6f = reinterpret_cast<unsigned char>(rbx44->f6f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
                zf45 = reinterpret_cast<uint1_t>(rbx46->f6f == 0);
                goto addr_4055db_47;
            } else {
                if (0) {
                    addr_40562d_49:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 83) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
                    *r10_47 = reinterpret_cast<unsigned char>(*r10_48 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
                    goto addr_405636_50;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_405620_52:
                        *reinterpret_cast<unsigned char*>(&rsi15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi15) | *r8);
                        *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) ^ *reinterpret_cast<uint32_t*>(&rsi15));
                        goto addr_40562d_49;
                    } else {
                        __asm__("insd ");
                        goto addr_4055c1_54;
                    }
                }
            }
        }
    }
    tmp32_49 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rax13) + 0x74697845);
    cf50 = reinterpret_cast<unsigned char>(tmp32_49) < reinterpret_cast<unsigned char>(rax13);
    rax13 = tmp32_49;
    *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
    zf51 = reinterpret_cast<uint1_t>(rax13 == 0);
    *reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rsp41) - 8) = rax13;
    if (cf50) {
        if (zf51) {
            addr_4057cb_57:
            goto addr_4057cd_58;
        } else {
            __asm__("outsd ");
            __asm__("outsb ");
            if (reinterpret_cast<signed char>(rax13) < reinterpret_cast<signed char>(0)) {
            }
        }
    } else {
        *reinterpret_cast<unsigned char*>(&rsp41) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x73);
        *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
        if (!cf50) 
            goto addr_4056f6_62; else 
            goto addr_4056f6_62;
    }
    addr_4057af_63:
    goto addr_4057b0_64;
    addr_4056f6_62:
    zf51 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rcx)) & reinterpret_cast<unsigned char>(rax13)) == 0);
    sf52 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rcx)) & reinterpret_cast<unsigned char>(rax13)) < reinterpret_cast<int32_t>(0);
    __asm__("insb ");
    if (!zf51) 
        goto addr_40576f_66;
    rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp41) - 8);
    *reinterpret_cast<struct s45**>(rsp41) = reinterpret_cast<struct s45*>(0x656c6946);
    if (!zf51) {
        *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    } else {
        if (0) {
            addr_40577b_70:
            __asm__("insd ");
            goto addr_40577d_71;
        } else {
            *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            tmp32_53 = rcx;
            rcx = rax13;
            rax13 = tmp32_53;
            *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
            tmp32_54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi15) + 0x72)) + reinterpret_cast<unsigned char>(rax13));
            cf55 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_54) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi15) + 0x72)));
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi15) + 0x72) = tmp32_54;
            zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi15) + 0x72) == 0);
            sf52 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi15) + 0x72)) < reinterpret_cast<signed char>(0);
            __asm__("outsb ");
            if (cf55 | zf51) 
                goto addr_40577d_71; else 
                goto addr_405714_74;
        }
    }
    *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) & 2);
    zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rax13) == 0);
    sf52 = __intrinsic();
    goto addr_40576f_66;
    addr_40577d_71:
    addr_405714_74:
    if (cf55) 
        goto addr_405785_76;
    __asm__("outsb ");
    __asm__("insd ");
    __asm__("outsb ");
    if (zf51) {
        addr_40576f_66:
        if (zf51) {
            goto addr_4057bb_79;
        } else {
            goto addr_40577b_70;
        }
    } else {
        if (zf51) {
            if (zf51) {
                addr_4057da_83:
                if (sf52) {
                    addr_40582c_84:
                } else {
                    if (zf51) {
                    }
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rbp17) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp17) + 84) * 0x657079);
                *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                goto addr_40579a_88;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rbp17) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rsi15) + 0x67) * 0xbd005773);
            *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) + reinterpret_cast<unsigned char>(rax13));
            if (*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) {
                __asm__("outsd ");
                __asm__("insd ");
                __asm__("insd ");
            }
        }
    }
    addr_40584d_91:
    *reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rsp41) - 8) = rsi15;
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    __asm__("enter 0x56, 0x0");
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    addr_40579a_88:
    if (!(*reinterpret_cast<signed char*>(&r8) + r15_56->f65)) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<uint32_t*>(&rsp57) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x73) * 0x69f0000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp57) + 4) = 0;
        *reinterpret_cast<struct s45**>(reinterpret_cast<int64_t>(rsp57) - 8) = rbp17;
        __asm__("outsb ");
        __asm__("insd ");
    }
    addr_405684_34:
    if (!0) {
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) == 0);
        sf52 = __intrinsic();
        if (!0) {
        }
    }
    addr_4056b3_38:
    addr_40564e_39:
    cf58 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rdx3)) < reinterpret_cast<unsigned char>(rcx));
    below_or_equal59 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rdx3)) <= reinterpret_cast<unsigned char>(rcx));
    *reinterpret_cast<struct s45**>(rdx3) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rdx3)) - reinterpret_cast<unsigned char>(rcx));
    zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s45**>(rdx3) == 0);
    sf52 = reinterpret_cast<signed char>(*reinterpret_cast<struct s45**>(rdx3)) < reinterpret_cast<signed char>(0);
    __asm__("outsd ");
    if (__intrinsic()) 
        goto addr_4056cd_101;
    if (cf58) {
        __asm__("outsb ");
        if (!zf51) {
            goto addr_405732_105;
        }
    } else {
        rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp41) - 8);
        *reinterpret_cast<struct s45**>(rsp41) = reinterpret_cast<struct s45*>(0x30322074);
    }
    addr_405657_108:
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp17) + 0x39313032) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp17) + 0x39313032) ^ *reinterpret_cast<uint32_t*>(&rsi15);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 97) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
    cf58 = 0;
    zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 97) == 0);
    sf52 = __intrinsic();
    below_or_equal59 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf51));
    if (!0) {
        __asm__("outsd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 97) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
        __asm__("insb ");
    }
    if (0) {
        addr_405732_105:
    } else {
        addr_4056cd_101:
    }
    if (zf51) {
        __asm__("outsb ");
        if (!sf52) {
            addr_4057cd_58:
            if (__intrinsic()) {
                addr_405828_114:
                goto addr_40582b_115;
            } else {
                *reinterpret_cast<unsigned char*>(&rsp41) = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp17) + 0x77) * 0x6946664f);
                *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
                sf52 = __undefined();
                zf51 = __undefined();
                __asm__("insb ");
                goto addr_4057da_83;
            }
        } else {
            addr_405785_76:
        }
    } else {
        __asm__("outsb ");
        if (below_or_equal59) {
            __asm__("outsd ");
        } else {
            if (cf58) {
                addr_4057b0_64:
                if (zf51) {
                    __asm__("insb ");
                    *reinterpret_cast<struct s45**>(rdi) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rdi)) + reinterpret_cast<unsigned char>(bl60));
                } else {
                    if (!zf51) {
                    }
                }
            } else {
                __asm__("outsb ");
                __asm__("insd ");
                __asm__("outsb ");
                if (zf51) 
                    goto addr_40579a_88; else 
                    goto addr_405747_126;
            }
        }
    }
    *reinterpret_cast<void**>(&rax13 + 1) = reinterpret_cast<void*>(0xff + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)));
    zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rax13) == 0);
    goto addr_4057af_63;
    addr_405818_128:
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    goto addr_405828_114;
    addr_405747_126:
    if (zf51) {
        addr_4057bb_79:
        __asm__("in eax, 0x2");
        if (zf51) {
            if (zf51) {
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(rdx3) * 2) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(rdx3) * 2)) + 0xff);
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rsp61 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp41) - 8);
                *reinterpret_cast<struct s45**>(rsp61) = rdi;
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rsp62 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp61) - 8);
                *reinterpret_cast<struct s45**>(rsp62) = rax13;
                rsp63 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp62) - 8);
                *reinterpret_cast<struct s45**>(rsp63) = rdi;
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                __asm__("outsb ");
                rsp64 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp63) - 8);
                *reinterpret_cast<struct s45**>(rsp64) = rdi;
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(rdx3) * 2) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(rdx3) * 2)) + reinterpret_cast<unsigned char>(bl65));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                __asm__("lodsb ");
                *reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rsp64) - 8) = rdi;
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<void**>(&rax13 + 1) = reinterpret_cast<void*>(0xff + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
                g4f = rdi;
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            } else {
                goto addr_405818_128;
            }
        } else {
            if (!sf52) {
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                *reinterpret_cast<void**>(&rax13) = ge00000000000056;
                goto addr_40584d_91;
            } else {
                if (zf51) {
                    addr_40582b_115:
                    *reinterpret_cast<struct s45**>(rax13) = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rax13)) + reinterpret_cast<unsigned char>(bl66));
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
        *reinterpret_cast<uint32_t*>(&rbp17) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rsi15) + 0x67) * 0x5773);
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        if (reinterpret_cast<unsigned char>(rax13) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rdx3))) {
            __asm__("insd ");
        }
    }
    addr_40561c_44:
    __asm__("outsd ");
    __asm__("outsb ");
    *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) - 32);
    goto addr_405620_52;
    addr_4055db_47:
    if (!zf45) {
    }
    addr_405636_50:
    __asm__("insb ");
    addr_4055c1_54:
    *reinterpret_cast<uint32_t*>(&rsp67) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 32) * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp67) + 4) = 0;
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x72) = reinterpret_cast<void*>(0);
    *reinterpret_cast<uint32_t*>(&rsi15) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 32) * 0x74206f74;
    *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
    rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(rsp67) - 8);
    *reinterpret_cast<struct s45**>(rsp41) = reinterpret_cast<struct s45*>(0x72462065);
    goto addr_4055d9_46;
    addr_405408_14:
    if (zf16) {
        addr_405472_12:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 99) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf68 = 0;
            goto addr_4054e9_146;
        } else {
            *reinterpret_cast<void**>(&rcx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s45**>(rdx3)));
            cf68 = 0;
            zf45 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rcx) == 0);
            below_or_equal69 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf45));
            rsp70 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(rsp6) - 8);
            *reinterpret_cast<struct s45**>(rsp70) = rsp70;
            rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp70) - 8);
            *reinterpret_cast<struct s45**>(rsp41) = reinterpret_cast<struct s45*>(0x70207369);
            if (0) {
                goto addr_4054f5_149;
            }
        }
    } else {
        addr_40540a_22:
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp17) + 0x72) = reinterpret_cast<void*>(0);
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
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x73)) {
            addr_405504_153:
            rsp71 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s45**>(rsp71) = r12_72;
            rcx = *reinterpret_cast<struct s45**>(rsp71);
            rsp20 = reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rsp71) + 8);
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x72)) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 73) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            goto addr_40550f_26;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp18) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x75) * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
            goto addr_405498_24;
        }
    }
    *reinterpret_cast<unsigned char*>(&rsp41) = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp17) + 100) * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
    cf68 = __intrinsic();
    zf45 = __undefined();
    below_or_equal69 = reinterpret_cast<uint1_t>(cf68 | zf45);
    if (cf68) {
        if (cf68) {
            addr_405578_157:
            *reinterpret_cast<unsigned char*>(&rsp41) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x69);
            *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
            if (below_or_equal69) {
                *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi15) + 0x6f));
                if (*reinterpret_cast<void**>(&rax13)) 
                    goto addr_405657_108;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = 0;
                *reinterpret_cast<uint32_t*>(&rbp17) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rdi) + 0x70);
                *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_4055a8_42;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                    *reinterpret_cast<struct s45**>(reinterpret_cast<unsigned char>(rsp41) - 8) = rbp17;
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
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
            if (!cf68) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x74) = 0;
            }
        }
    } else {
        addr_4054f5_149:
        __asm__("outsb ");
        if (zf45) {
            if (!below_or_equal69) {
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx3) + 0x65) = reinterpret_cast<void*>(0);
                below_or_equal69 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx3) + 0x65) == 0)));
                goto addr_405578_157;
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x66) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp73 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s45**>(rsp73) = rdx3;
            rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(rsp73) - 8);
            *reinterpret_cast<struct s45**>(rsp41) = rsp41;
            goto addr_405504_153;
        }
    }
    addr_4055f9_164:
    addr_405598_165:
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rbp17) * 2 + 0x65) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp41 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(rsp6) - 8);
    *reinterpret_cast<struct s45**>(rsp41) = rbp17;
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    cf68 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_405423_173;
    goto addr_405485_150;
    addr_405423_173:
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax13) + 0x75) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3)));
}

struct s55 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s56 {
    signed char[111] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
};

struct s57 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s58 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s59 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s60 {
    signed char[111] pad111;
    signed char f6f;
};

struct s61 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s62 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_4053ad(struct s55* rdi, struct s56* rsi, int16_t dx, struct s58* rcx) {
    struct s57* rdx3;
    int1_t cf5;
    int1_t cf6;
    int1_t zf7;
    int1_t sf8;
    unsigned char ah9;
    struct s59* rbx10;
    int1_t zf11;
    struct s60* rbx12;
    void* rsp13;
    int1_t zf14;
    void** rax15;
    void** rax16;
    unsigned char ah17;
    struct s61* rbp18;
    struct s62* rbp19;
    unsigned char ah20;
    void* rax21;
    int64_t rbp22;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    if (cf5) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf6) {
        goto addr_4053d4_4;
    }
    if (!zf7) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf8) 
        goto addr_4053b9_7;
    addr_4053c5_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi->f72 = reinterpret_cast<unsigned char>(rsi->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_405452_12;
    } else {
        addr_4053d4_4:
    }
    rdi->f41 = reinterpret_cast<unsigned char>(rdi->f41 & *reinterpret_cast<unsigned char*>(&rdx3));
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf14 = *reinterpret_cast<void**>(&rsp13) == *rax15;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp13)) <= reinterpret_cast<uint32_t>(*rax16)) 
        goto addr_4054d9_15;
    addr_4054d9_15:
    if (zf14) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf14) 
        goto addr_4054de_18;
    rsi->f6f = reinterpret_cast<unsigned char>(rsi->f6f & ah17);
    addr_4054de_18:
    rbp18->f76 = reinterpret_cast<unsigned char>(rbp19->f76 & ah20);
    addr_405452_12:
    addr_4053b9_7:
    *reinterpret_cast<unsigned char*>(&rdx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax21) + rbp22 * 2 + 0x69));
    if (1) {
        rdx3->f65 = 0;
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

struct s63 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s64 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s65 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s66 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_4053d5() {
    void* rsp1;
    int1_t cf2;
    int1_t sf3;
    int1_t zf4;
    void** rax5;
    void** rax6;
    struct s63* rsi7;
    struct s64* rsi8;
    unsigned char al9;
    struct s65* rbx10;
    struct s66* rbx11;
    unsigned char dl12;

    rsp1 = __zero_stack_offset();
    if (cf2) {
        if (!sf3) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf4) 
            goto addr_405446_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp1)) < reinterpret_cast<int32_t>(*rax5)) {
            if (*reinterpret_cast<void**>(&rsp1) != *rax6) {
            }
        }
    }
    addr_405446_4:
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & al9);
    rbx10->f6f = reinterpret_cast<unsigned char>(rbx11->f6f & dl12);
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

struct s67 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s68 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s69 {
    signed char[111] pad111;
    signed char f6f;
};

struct s70 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s71 {
    signed char[78] pad78;
    unsigned char f4e;
};

void fun_405453() {
    int1_t cf1;
    struct s67* rsi2;
    struct s68* rsi3;
    unsigned char al4;
    struct s69* rsi5;
    struct s70* rcx6;
    struct s71* rcx7;
    unsigned char al8;

    if (!cf1) {
        rsi2->f6f = reinterpret_cast<unsigned char>(rsi3->f6f & al4);
        if (rsi5->f6f) {
            rcx6->f4e = reinterpret_cast<unsigned char>(rcx7->f4e & al8);
        }
    }
}

struct s72 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_40545c(struct s72* rdi) {
    void* rsp2;
    int1_t zf3;
    void** rax4;
    void** rax5;
    int64_t rbp6;
    void* rax7;
    void* rax8;
    unsigned char dh9;

    rsp2 = __zero_stack_offset();
    if (!zf3) {
        __asm__("outsd ");
        __asm__("outsb ");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp2)) <= reinterpret_cast<uint32_t>(*rax4)) 
            goto "ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp2)) < reinterpret_cast<uint32_t>(*rax5)) 
            goto "thout even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        *reinterpret_cast<int32_t*>(&rbp6) = rdi->f6e * 0x6f203220;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) + rbp6 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax8) + rbp6 * 2 + 0x65) & dh9);
    }
}

void fun_4054a8() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s73 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s74 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s75 {
    signed char[115] pad115;
    signed char f73;
};

void fun_4054b3() {
    struct s73* rbp1;
    struct s74* rbp2;
    unsigned char dh3;
    struct s75* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_4054be(int64_t rdi) {
    int1_t zf2;

    if (!zf2) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_405548() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s76 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s77 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_405561() {
    struct s76* rax1;
    struct s77* rax2;
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

struct s78 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s79 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_4055fd() {
    struct s78* rsi1;
    struct s79* rsi2;
    unsigned char al3;

    __asm__("outsb ");
    if (__undefined()) 
        goto "sign Hannover, Germany\ninfo@paland.com";
    if (__undefined()) 
        goto "land Printf (MIT License)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    rsi1->f69 = reinterpret_cast<unsigned char>(rsi2->f69 & al3);
}

struct s80 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s81 {
    signed char[114] pad114;
    unsigned char f72;
};

void fun_405638() {
    struct s80* rax1;
    struct s81* rax2;
    unsigned char dl3;

    __asm__("outsb ");
    rax1->f72 = reinterpret_cast<unsigned char>(rax2->f72 & dl3);
}

struct s82 {
    signed char[65] pad65;
    unsigned char f41;
};

void fun_40566e(signed char* rdi) {
    unsigned char dl2;
    struct s82* rax3;
    signed char bh4;

    __asm__("outsb ");
    if (!1) 
        goto "???";
    if (!(dl2 | rax3->f41)) 
        goto "leInformationByHandle";
    __asm__("outsd ");
    __asm__("insb ");
    *rdi = reinterpret_cast<signed char>(*rdi + bh4);
}

void fun_40568c(int64_t rdi, int64_t rsi) {
    int1_t sf3;
    unsigned char tmp8_4;
    signed char* rax5;
    signed char al6;
    int1_t cf7;
    unsigned char* rax8;
    unsigned char* rax9;
    signed char* rax10;
    signed char al11;

    __asm__("outsb ");
    if (!sf3) {
        tmp8_4 = reinterpret_cast<unsigned char>(*rax5 + al6);
        cf7 = tmp8_4 < *rax8;
        *rax9 = tmp8_4;
        *rax10 = al11;
        __asm__("insb ");
        __asm__("outsd ");
        if (!cf7) 
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

void fun_4056c5(int64_t rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
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

void fun_405786(int64_t rdi) {
    int1_t sf2;
    signed char* rbx3;
    signed char* rbx4;
    signed char ch5;

    __asm__("outsb ");
    __asm__("insb ");
    *rbx3 = reinterpret_cast<signed char>(*rbx4 + ch5);
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

void fun_405812(int64_t rdi) {
    int1_t cf2;

    if (cf2) 
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

void fun_405861(int64_t rdi, int64_t rsi, int16_t dx) {
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;

    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    rax13 = fun_4058c3();
    *rax13 = reinterpret_cast<signed char>(*rax13 + *reinterpret_cast<signed char*>(&rax13));
    *rax13 = reinterpret_cast<signed char>(*rax13 + *reinterpret_cast<signed char*>(&rax13));
    *rax13 = reinterpret_cast<signed char>(*rax13 + *reinterpret_cast<signed char*>(&rax13));
    *rax13 = reinterpret_cast<signed char>(*rax13 + *reinterpret_cast<signed char*>(&rax13));
    *rax13 = reinterpret_cast<signed char>(*rax13 + *reinterpret_cast<signed char*>(&rax13));
}

void fun_4058d1(int64_t rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    unsigned char tmp8_8;
    signed char* rax9;
    signed char al10;
    uint1_t cf11;
    unsigned char* rax12;
    unsigned char* rax13;
    unsigned char* rax14;
    signed char* rax15;
    signed char bl16;
    signed char* rax17;
    signed char* rax18;
    signed char al19;
    signed char* rax20;
    signed char* rax21;
    signed char al22;
    signed char* rax23;
    signed char* rax24;
    signed char al25;
    signed char* rax26;
    signed char* rax27;
    signed char al28;
    signed char* rax29;
    signed char* rax30;
    signed char al31;
    signed char* rax32;
    signed char* rax33;
    signed char al34;
    int64_t rax35;
    int64_t rax36;
    signed char dl37;
    signed char* rax38;
    signed char* rax39;
    signed char al40;
    signed char* rcx41;
    signed char* rcx42;
    signed char al43;
    signed char* rcx44;
    signed char* rcx45;
    signed char al46;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    tmp8_8 = reinterpret_cast<unsigned char>(*rax9 + al10);
    cf11 = reinterpret_cast<uint1_t>(tmp8_8 < *rax12);
    *rax13 = tmp8_8;
    *rax14 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rax15 + bl16) + cf11);
    *rax17 = reinterpret_cast<signed char>(*rax18 + al19);
    *rax20 = reinterpret_cast<signed char>(*rax21 + al22);
    *rax23 = reinterpret_cast<signed char>(*rax24 + al25);
    *rax26 = reinterpret_cast<signed char>(*rax27 + al28);
    *rax29 = reinterpret_cast<signed char>(*rax30 + al31);
    *rax32 = reinterpret_cast<signed char>(*rax33 + al34);
    *reinterpret_cast<signed char*>(rax35 + 0x801f0f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax36 + 0x801f0f) + dl37);
    *rax38 = reinterpret_cast<signed char>(*rax39 + al40);
    *rcx41 = reinterpret_cast<signed char>(*rcx42 + al43);
    *rcx44 = reinterpret_cast<signed char>(*rcx45 + al46);
}

int32_t g21417d0f;

void fun_4058f6(int32_t* rdi) {
    int32_t* rcx2;
    int32_t* rcx3;
    int32_t ecx4;
    int32_t ecx5;
    int32_t* rdx6;
    int32_t* rdx7;
    int32_t edx8;
    int32_t tmp32_9;
    int32_t edx10;

    *rcx2 = *rcx3 + ecx4;
    *rdi = *rdi + ecx5;
    *rdx6 = *rdx7 + edx8;
    tmp32_9 = g21417d0f + edx10;
    g21417d0f = tmp32_9;
}

void fun_405903() {
    int32_t* rbx1;
    int32_t* rbx2;
    int32_t ebx3;

    *rbx1 = *rbx2 + ebx3;
}

void fun_40590b() {
}

void fun_405912() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t eax12;
    int64_t rcx13;
    int64_t rcx14;
    int32_t eax15;
    int64_t rcx16;
    int64_t rcx17;
    int32_t edx18;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = *rax11 | eax12;
    *reinterpret_cast<int32_t*>(rcx13 + 0x120104) = *reinterpret_cast<int32_t*>(rcx14 + 0x120104) + eax15;
    *reinterpret_cast<int32_t*>(rcx16 + 0x1c0a100f) = *reinterpret_cast<int32_t*>(rcx17 + 0x1c0a100f) + edx18;
}

void fun_405927() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
}

struct s83 {
    signed char f0;
    signed char[31917183] pad31917184;
    unsigned char f1e70480;
};

void fun_40592d() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;
    uint32_t* rax5;
    signed char al6;
    uint32_t tmp32_7;
    int1_t cf8;
    int32_t eax9;
    int32_t ebp10;
    signed char tmp8_11;
    int64_t rsi12;
    int64_t rsi13;
    struct s83* rax14;
    unsigned char* rsi15;
    unsigned char* rsi16;
    unsigned char cl17;
    unsigned char* rdx18;
    signed char* rdx19;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
    *reinterpret_cast<signed char*>(&rax5) = reinterpret_cast<signed char>(al6 + 16);
    tmp32_7 = *rax5 - 0x5e7c0000;
    cf8 = tmp32_7 < *rax5;
    *rax5 = tmp32_7;
    __asm__("wait ");
    eax9 = ebp10;
    tmp8_11 = *reinterpret_cast<signed char*>(rsi12 + 0x72728686);
    *reinterpret_cast<signed char*>(rsi13 + 0x72728686) = *reinterpret_cast<signed char*>(&eax9);
    if (!cf8) {
        if (!cf8) {
            if (cf8) {
                *reinterpret_cast<signed char*>(&eax9) = reinterpret_cast<signed char>(tmp8_11 + 22);
                *reinterpret_cast<int32_t*>(&rax14) = eax9 + 0x2241815;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
                *rsi15 = reinterpret_cast<unsigned char>(*rsi16 | cl17);
                __asm__("retf ");
                rax14->f0 = reinterpret_cast<signed char>(rax14->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax14) + 1));
                *rdx18 = reinterpret_cast<unsigned char>(*rdx19 + *reinterpret_cast<unsigned char*>(&rax14));
                rax14->f1e70480 = reinterpret_cast<unsigned char>(rax14->f1e70480 & *reinterpret_cast<unsigned char*>(&rax14));
            }
        }
    }
}

struct s84 {
    unsigned char f0;
    signed char[2140930311] pad2140930312;
    signed char f7f9c0108;
};

int32_t gffffffff800302d4;

void fun_405950(int32_t edi, unsigned char* rsi, signed char* rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rbp6;
    signed char ah7;
    int64_t rax8;
    int16_t ax9;
    struct s84* rax10;
    uint32_t* rbx11;
    int32_t* rbx12;
    int32_t tmp32_13;

    *reinterpret_cast<signed char*>(rbp5 - 96) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp6 - 96) + ah7);
    *reinterpret_cast<uint32_t*>(&rax8) = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax9));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    *reinterpret_cast<signed char*>(rax8 + 0x7e77f9c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax8 + 0x7e77f9c) + *reinterpret_cast<signed char*>(&rdx));
    *rsi = reinterpret_cast<unsigned char>(*rsi | *reinterpret_cast<uint32_t*>(&rcx));
    *reinterpret_cast<signed char*>(&rax8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax8) + 22);
    *reinterpret_cast<uint32_t*>(&rax10) = *reinterpret_cast<uint32_t*>(&rax8) + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    rsi[rcx * 8] = reinterpret_cast<unsigned char>(rsi[rcx * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1) + *reinterpret_cast<signed char*>(&rdx));
    *reinterpret_cast<unsigned char*>(rax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax10) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1));
    *rbx11 = *rbx12 + *reinterpret_cast<uint32_t*>(&rax10);
    *reinterpret_cast<unsigned char*>(rax10) = 0;
    tmp32_13 = gffffffff800302d4 + *reinterpret_cast<int32_t*>(&rdx);
    gffffffff800302d4 = tmp32_13;
    *reinterpret_cast<signed char*>(&rax10) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax10)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10) * 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<int64_t>(rax10) * 4) + 16);
    *rdx = reinterpret_cast<signed char>(*rdx + *reinterpret_cast<signed char*>(&rax10));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + 0x7f9c0108) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax10) + 0x7f9c0108) + *reinterpret_cast<signed char*>(&rax10));
}

void fun_4059b9() {
    uint32_t* rsi1;
    uint32_t* rsi2;
    uint32_t ecx3;

    *rsi1 = *rsi2 | ecx3;
}

void fun_4059d3() {
    signed char* rax1;
    int32_t eax2;
    int64_t rax3;
    signed char* rcx4;
    signed char* rcx5;
    int64_t rcx6;
    int64_t rcx7;
    int64_t rcx8;
    int64_t rcx9;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + *reinterpret_cast<int32_t*>(rax3 + 0xc02080);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *rcx4 = reinterpret_cast<signed char>(static_cast<int32_t>(*rcx5));
    *reinterpret_cast<signed char*>(&rax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax1) + *rax1);
    *reinterpret_cast<signed char*>(rcx6 + reinterpret_cast<int64_t>(rax1)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx7 + reinterpret_cast<int64_t>(rax1)) - 100);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(rcx8 + reinterpret_cast<int64_t>(rax1)) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(rcx9 + reinterpret_cast<int64_t>(rax1)) == 0))) 
        goto 0x4059cb;
}

struct s85 {
    unsigned char f0;
    signed char[75498623] pad75498624;
    int32_t f4800480;
};

void fun_4059e5(int64_t rdi, unsigned char* rsi, int32_t* rdx, int64_t rcx) {
    int32_t eax5;
    signed char al6;
    struct s85* rax7;
    uint32_t* rbx8;
    signed char bh9;
    uint32_t tmp32_10;
    uint1_t cf11;
    uint1_t less_or_equal12;

    *rsi = reinterpret_cast<unsigned char>(*rsi | *reinterpret_cast<uint32_t*>(&rcx));
    *reinterpret_cast<signed char*>(&eax5) = reinterpret_cast<signed char>(al6 + 22);
    *reinterpret_cast<uint32_t*>(&rax7) = reinterpret_cast<uint32_t>(eax5 + 0x23f1815);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rsi[rcx * 8] = reinterpret_cast<unsigned char>(rsi[rcx * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx8) + 1) = reinterpret_cast<signed char>(bh9 + *reinterpret_cast<signed char*>(&rdx));
    rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax7) + 1));
    *rbx8 = *rbx8 + *reinterpret_cast<uint32_t*>(&rax7);
    do {
        rax7->f0 = 0;
        rdx[rdi * 2] = rdx[rdi * 2] + *reinterpret_cast<int32_t*>(&rdx);
        rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1));
        tmp32_10 = *reinterpret_cast<uint32_t*>(&rax7) + rax7->f4800480;
        cf11 = reinterpret_cast<uint1_t>(tmp32_10 < *reinterpret_cast<uint32_t*>(&rax7));
        *reinterpret_cast<uint32_t*>(&rax7) = tmp32_10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        rax7->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(rax7->f0)) + cf11);
        *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax7) + rax7->f0);
        rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 | 1);
        less_or_equal12 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(rax7->f0 == 0));
    } while (!less_or_equal12);
}

void fun_405a12() {
    __asm__("out 0x3, eax");
}

void fun_405a16() {
    int64_t rbx1;
    signed char bh2;
    signed char dl3;
    unsigned char cl4;

    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx1) + 1) = reinterpret_cast<signed char>(bh2 + dl3);
    *reinterpret_cast<unsigned char*>(rbx1 - 0x30fd2ffe) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rbx1 - 0x30fd2ffe) | cl4);
}

struct s86 {
    signed char[127] pad127;
    signed char f7f;
};

void fun_405a21(struct s86* rdi) {
    signed char* rdx2;
    signed char* rdx3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    signed char* rax8;
    signed char* rax9;
    signed char ah10;
    signed char bh11;
    int64_t rax12;
    int64_t rax13;
    int64_t rax14;
    int64_t rax15;
    signed char al16;
    unsigned char* rax17;
    unsigned char* rax18;
    int64_t rax19;
    int64_t rax20;
    signed char* rax21;
    int64_t rax22;
    signed char* rax23;
    int64_t rax24;
    int64_t rax25;
    int64_t rax26;

    *rdx2 = reinterpret_cast<signed char>(*rdx3 + al4);
    __asm__("rol dword [rcx], 0xe");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) - 19) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) - 19) + *reinterpret_cast<int32_t*>(&rdi);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    *rax8 = reinterpret_cast<signed char>(*rax9 + ah10);
    rdi->f7f = reinterpret_cast<signed char>(rdi->f7f + bh11);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rdi->f7f < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rdi->f7f == 0))) {
        *reinterpret_cast<signed char*>(rax12 - 0x7ff37f80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax13 - 0x7ff37f80) - 0x80);
        *reinterpret_cast<signed char*>(rax14 - 0x7f7f7fff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax15 - 0x7f7f7fff) + al16);
        *rax17 = reinterpret_cast<unsigned char>(*rax18 | 0x80);
        *reinterpret_cast<signed char*>(rax19 - 0x7f7ff380) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax20 - 0x7f7ff380) + 16);
        rax21[rax22 * 4] = reinterpret_cast<signed char>(rax23[rax24 * 4] - 0x80);
        *reinterpret_cast<signed char*>(rax25 + 0x7e77e04) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax26 + 0x7e77e04) + 9);
    }
}

struct s87 {
    unsigned char f0;
    signed char[1081347] pad1081348;
    unsigned char f108004;
};

void fun_405a57() {
    int32_t eax1;
    signed char al2;
    struct s87* rax3;
    unsigned char* rsi4;
    int64_t rcx5;
    unsigned char* rsi6;
    int64_t rcx7;
    unsigned char cl8;
    signed char dl9;
    int32_t* rbx10;
    int32_t* rbx11;
    uint32_t tmp32_12;
    uint1_t cf13;

    *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(al2 + 22);
    *reinterpret_cast<int32_t*>(&rax3) = eax1 + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    rsi4[rcx5 * 8] = reinterpret_cast<unsigned char>(rsi6[rcx7 * 8] | cl8);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1) + dl9);
    rax3->f0 = reinterpret_cast<unsigned char>(rax3->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax3) + 1));
    *rbx10 = *rbx11 + *reinterpret_cast<int32_t*>(&rax3);
    rax3->f0 = 0;
    tmp32_12 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) - 0x7f6bef80) - 0x7f5aef80;
    cf13 = reinterpret_cast<uint1_t>(tmp32_12 < *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) - 0x7f6bef80));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) - 0x7f6bef80) = tmp32_12;
    rax3->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax3->f0 - 80) + cf13);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) - 0x7f7ffcf0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) - 0x7f7ffcf0) - 0x80);
    rax3->f108004 = reinterpret_cast<unsigned char>(rax3->f108004 | *reinterpret_cast<unsigned char*>(&rax3));
    *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax3) + rax3->f0);
    rax3->f0 = reinterpret_cast<unsigned char>(rax3->f0 | 1);
}

void fun_4011ac(uint64_t rdi) {
    uint64_t* rax2;

    rax2 = fun_401158(rdi, 3, 0x6f000, 0x3220);
    *rax2 = *rax2 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_40126d() {
    return 0;
}

void fun_401299() {
    return;
}

int64_t fun_404e35() {
    int64_t rax1;
    uint32_t eax2;
    uint32_t eax3;
    int1_t cf4;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 >> 16 & 0xfff | eax3 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    cf4 = *reinterpret_cast<uint16_t*>(&rax1) < 0xfff;
    if (!cf4) {
        *reinterpret_cast<uint32_t*>(&rax1) = g440700;
    } else {
        __asm__("syscall ");
        if (!cf4) {
            return rax1;
        }
    }
    g443c70 = *reinterpret_cast<uint32_t*>(&rax1);
    return 0xff;
}

void fun_404f07() {
    return;
}

void fun_404ff6(int64_t* rdi, int64_t* rsi, int64_t rdx) {
    *rdi = *rsi;
}

void fun_40508f(int64_t rdi) {
}

void fun_4050af(int64_t rdi) {
}

void fun_4050cc(signed char* rdi, int32_t esi, uint64_t rdx) {
    int64_t rsi2;
    int32_t eax4;
    uint64_t rcx5;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    if (rdx >= 0x400) {
        eax4 = *reinterpret_cast<int32_t*>(&rsi2);
        rcx5 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx5)) {
            *reinterpret_cast<int32_t*>(&rcx5) = *reinterpret_cast<int32_t*>(&rcx5) - 1;
            *rdi = *reinterpret_cast<signed char*>(&eax4);
            ++rdi;
        }
        goto 0x405131;
    }
}

void fun_405134(uint64_t* rdi, unsigned char sil) {
    *rdi = static_cast<uint64_t>(sil) * 0x101010101010101;
}

int64_t fun_40517e(int64_t rdi, int64_t rsi, uint64_t rdx) {
    int64_t rax4;
    uint64_t r8_5;
    uint64_t rcx6;
    int64_t rax7;

    if (rdi == rsi || !rdx) {
        addr_4051dd_2:
        *reinterpret_cast<uint32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        r8_5 = (rdx >> 4) + 1;
        rcx6 = 0xfffffffffffffff0;
        do {
            rcx6 = rcx6 + 16;
            --r8_5;
            if (!r8_5) 
                goto addr_4051c3_5;
            __asm__("movdqu xmm0, [rdi+rcx]");
            __asm__("movdqu xmm1, [rsi+rcx]");
            __asm__("pcmpeqb xmm0, xmm1");
            __asm__("pmovmskb eax, xmm0");
            *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rax7) - 0xffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        } while (!*reinterpret_cast<int32_t*>(&rax7));
        goto addr_4051bd_7;
    }
    addr_4051df_8:
    return rax4;
    do {
        addr_4051c3_5:
        if (rdx == rcx6) 
            goto addr_4051dd_2;
        ++rcx6;
        *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(rdi + rcx6 - 1) - *reinterpret_cast<unsigned char*>(rsi + rcx6 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } while (!*reinterpret_cast<uint32_t*>(&rax4));
    goto addr_4051df_8;
    addr_4051bd_7:
    __asm__("bsf eax, eax");
    rcx6 = rcx6 + rax7;
    goto addr_4051c3_5;
}

struct s88 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s89 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s90 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_4011d4(struct s88* rdi) {
    struct s88* r9_2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s89* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s89* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s89* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s90* rax18;

    r9_2 = rdi;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_2) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s89*>(&r9_2->f18);
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
                    rdi15 = reinterpret_cast<struct s89*>(&rdi15->pad8);
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
            rax18 = reinterpret_cast<struct s90*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_2));
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
    int64_t r12_2;
    void* r13_3;
    int64_t* r14_4;
    int64_t* rdi5;
    int64_t rcx6;
    int64_t rcx7;
    int64_t* rdi8;
    int64_t* rax9;
    int32_t eax10;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<unsigned char*>(&g440668) = 8;
    r12_2 = *reinterpret_cast<int32_t*>(&v1);
    r13_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    r14_4 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r12_2 * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi5) = 0x406018;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx6) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    while (rcx6) {
        --rcx6;
        *rdi5 = reinterpret_cast<int64_t>(fun_40126d);
        ++rdi5;
    }
    *reinterpret_cast<uint32_t*>(&rcx7) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    rdi8 = r14_4;
    do {
        if (!rcx7) 
            break;
        --rcx7;
        ++rdi8;
    } while (*rdi8);
    fun_4012f0();
    g443c74 = g443c74 | 1;
    *reinterpret_cast<int32_t*>(&rax9) = 0x406008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (0x406010 != rax9) {
        *rax9();
        ++rax9;
    }
    eax10 = fun_4014ce(r12_2, r13_3, r14_4);
    fun_4018ae(eax10, r13_3, r14_4);
}

uint64_t g442048 = 0;

int64_t fun_4014e0() {
    struct s14* r12_1;
    int1_t zf2;
    int32_t edi3;
    uint32_t eax4;
    int1_t zf5;
    struct s14* r13_6;
    uint64_t r12_7;
    struct s14** rax8;
    uint64_t rbx9;
    struct s14** rdx10;
    uint64_t r14_11;
    int1_t cf12;
    signed char al13;
    struct s14** rax14;
    int64_t rax15;

    r12_1 = g442038;
    zf2 = (*reinterpret_cast<unsigned char*>(&g440668) & 4) == 0;
    if (!zf2 || (edi3 = r12_1->fc, eax4 = fun_401674(edi3), !!eax4)) {
        r12_1->f0 = 1;
    }
    zf5 = g442050 == 0;
    r13_6 = r12_1;
    if (zf5) {
        g442050 = reinterpret_cast<struct s14**>(0x442058);
        g442048 = 8;
        fun_404540(fun_4020ec, 0, 0);
    }
    r12_7 = g442040;
    rax8 = g442050;
    rbx9 = r12_7 - 1;
    do {
        if (rbx9 == 0xffffffffffffffff) 
            break;
        rdx10 = rax8 + rbx9;
        --rbx9;
    } while (*reinterpret_cast<int64_t*>(rax8 + rbx9 + 1));
    goto addr_401577_9;
    r14_11 = r12_7 + 1;
    cf12 = r14_11 < g442048;
    if (cf12 || (al13 = fun_40466a(0x442050, 0x442048, 8, 1), !!al13)) {
        rax14 = g442050;
        rbx9 = r12_7;
        rax14[r12_7] = r13_6;
        g442040 = r14_11;
    }
    *reinterpret_cast<int32_t*>(&rax15) = *reinterpret_cast<int32_t*>(&rbx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    addr_4015c2_13:
    return rax15;
    addr_401577_9:
    *rdx10 = r13_6;
    *reinterpret_cast<int32_t*>(&rax15) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    goto addr_4015c2_13;
}

void fun_402197(struct s14* rdi) {
    uint64_t rax2;
    uint64_t rax3;
    struct s14** rcx4;
    struct s14** rcx5;

    rax2 = g442040;
    rax3 = rax2 - 1;
    do {
        if (rax3 == 0xffffffffffffffff) 
            break;
        rcx4 = g442050;
        rcx5 = rcx4 + rax3;
        --rax3;
    } while (*rcx5 != rdi);
    goto addr_4021b8_4;
    return;
    addr_4021b8_4:
    *rcx5 = reinterpret_cast<struct s14*>(0);
    return;
}

int64_t g440678 = 0;

struct s20* fun_402296(struct s15* rdi, struct s15* rsi) {
    goto g440678;
}

struct s91 {
    signed char[16] pad16;
    uint32_t f10;
    uint32_t f14;
    int64_t f18;
    int32_t f20;
};

int64_t fun_402213(struct s91* rdi) {
    int32_t r8d2;
    int64_t rcx3;
    uint32_t eax4;
    int64_t rsi5;
    int64_t rax6;

    r8d2 = 0;
    while (*reinterpret_cast<uint32_t*>(&rcx3) = rdi->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0, *reinterpret_cast<uint32_t*>(&rcx3) != rdi->f10) {
        __asm__("in al, dx");
        if (*reinterpret_cast<unsigned char*>(&eax4) & 1) {
            __asm__("in al, dx");
            ++r8d2;
            *reinterpret_cast<unsigned char*>(rdi->f18 + rcx3) = *reinterpret_cast<unsigned char*>(&eax4);
            *reinterpret_cast<int32_t*>(&rsi5) = rdi->f20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
            eax4 = rdi->f14 + 1 & static_cast<uint32_t>(rsi5 - 1);
            rdi->f14 = eax4;
        } else {
            __asm__("pause ");
        }
    }
    *reinterpret_cast<int32_t*>(&rax6) = r8d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

struct s15* fun_4043d8(struct s15* rdi, struct s15* rsi, struct s15* rdx, struct s15* rcx, int64_t r8) {
    void* rdx6;
    struct s16* rsi7;
    struct s16* rax8;
    struct s15* rax9;
    unsigned char rdx10;
    struct s15* rdx11;

    if (!rdi) {
        goto fun_402b64;
    }
    if (reinterpret_cast<uint32_t>(rsi) <= reinterpret_cast<uint32_t>(0xffffffffffffff7f)) {
        if (rsi) {
            *reinterpret_cast<int32_t*>(&rdx6) = 32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            if (reinterpret_cast<uint32_t>(rsi) > reinterpret_cast<uint32_t>(14)) {
                rdx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rsi) + 31 & 0xfffffffffffffff0);
            }
            rsi7 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff0);
            rax8 = fun_404049(0x4420a0, rsi7, rdx6, 1, r8);
            if (!rax8) {
                rax9 = fun_402b64(rsi, rsi7, rdx6, 1);
                if (rax9) {
                    rdx10 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(rdi) + 0xfffffffffffffff8);
                    rdx11 = reinterpret_cast<struct s15*>((rdx10 & 0xfffffffffffffff8) - 16);
                    if (reinterpret_cast<uint32_t>(rdx11) > reinterpret_cast<uint32_t>(rsi)) {
                        rdx11 = rsi;
                    }
                    fun_404f70(rax9, rdi, rdx11, 1);
                    fun_403ae8(rdi, rdi, rdx11, 1);
                    rax9 = rax9;
                }
            } else {
                rax9 = reinterpret_cast<struct s15*>(&rax8->f10);
            }
        } else {
            fun_403ae8(rdi, rsi, rdx, rcx);
            goto addr_404419_14;
        }
    } else {
        fun_4018e7(rdi, rsi, rdx);
        goto addr_404419_14;
    }
    addr_404489_16:
    return rax9;
    addr_404419_14:
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(&rax9 + 1) = 0;
    goto addr_404489_16;
}

int64_t g440688 = 0;

struct s15* fun_4022a2(struct s15* rdi) {
    goto g440688;
}

void fun_404df0() {
    uint64_t rax1;
    int16_t ax2;

    *reinterpret_cast<int32_t*>(&rax1) = ax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax1) < 0) 
        goto 0x404e12;
    __asm__("syscall ");
    if (rax1 < 0xfffffffffffff001) {
        return;
    }
}

int64_t fun_404ef0(int64_t rdi) {
    int32_t ecx2;
    int64_t rax3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rcx6;

    ecx2 = static_cast<int32_t>(rdi - 7);
    if (*reinterpret_cast<unsigned char*>(&ecx2) > 85) {
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(&rdi);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0x7f || !(*reinterpret_cast<unsigned char*>(0x440330 + rax3) & 16)) {
            *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<uint32_t*>(&rax3) & 0xffffffc0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdi5) = (*reinterpret_cast<uint32_t*>(&rdi) & 7) << 24 | (*reinterpret_cast<uint32_t*>(&rdi) & 56) << 13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax3) = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdi5 + rax4 * 4) + 0x3030305c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
        return rax3;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<unsigned char*>(&ecx2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        goto *reinterpret_cast<int64_t*>(rcx6 * 8 + 0x440078);
    }
}

void fun_404f0a() {
    return;
}

void fun_404f60(int64_t rdi) {
}

struct s92 {
    signed char f0;
    signed char f1;
    signed char f2;
};

struct s93 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_405019(struct s92* rdi, struct s93* rsi) {
    rdi->f2 = rsi->f2;
    rdi->f1 = rsi->f1;
    rdi->f0 = rsi->f0;
    goto 0x405008;
}

void fun_40500a(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    *rdi = *rsi;
}

struct s94 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_405164(struct s94* rdi, signed char sil) {
    rdi->f2 = sil;
    rdi->f1 = sil;
    rdi->f0 = sil;
    goto 0x405131;
}

void fun_405150() {
}

int64_t fun_4051e0(int64_t rdi, int64_t rsi, uint32_t edx, int64_t rcx) {
    int64_t rax5;
    uint32_t ebx6;
    int64_t rcx7;

    *reinterpret_cast<uint32_t*>(&rax5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    ebx6 = 0;
    *reinterpret_cast<uint32_t*>(&rcx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    if (edx && rsi != rdi) {
        while (*reinterpret_cast<uint32_t*>(&rcx7) < edx && ((*reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<unsigned char*>(rdi + rcx7), ebx6 = *reinterpret_cast<unsigned char*>(rsi + rcx7), !!*reinterpret_cast<signed char*>(&rax5)) && *reinterpret_cast<signed char*>(&rax5) == *reinterpret_cast<signed char*>(&ebx6))) {
            *reinterpret_cast<uint32_t*>(&rcx7) = *reinterpret_cast<uint32_t*>(&rcx7) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        }
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax5) - ebx6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    return rax5;
}

void fun_405240() {
    goto 0x40523f;
}

void fun_405301(struct s18* rdi, struct s19* rsi) {
    unsigned char dh3;
    signed char ch4;
    unsigned char* rax5;
    unsigned char al6;
    unsigned char* rax7;
    unsigned char tmp8_8;
    int1_t cf9;

    rdi->f6f = reinterpret_cast<unsigned char>(rdi->f6f & dh3);
    if (0) 
        goto 0x405377;
    rsi->f6f = reinterpret_cast<signed char>(rsi->f6f + ch4);
    __asm__("insb ");
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(&rax5) = reinterpret_cast<unsigned char>(al6 | *rax7);
    *rax5 = reinterpret_cast<unsigned char>(*rax5 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax5) + reinterpret_cast<uint1_t>(*rax5 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax5))))));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<int32_t*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    *rax5 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    tmp8_8 = reinterpret_cast<unsigned char>(*rax5 + *reinterpret_cast<unsigned char*>(&rax5));
    cf9 = tmp8_8 < *rax5;
    *rax5 = tmp8_8;
    if (cf9) 
        goto "Roberts Tunney\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insb ");
}

void fun_40127c() {
    goto 0x40127b;
}

void fun_4012a7(int64_t rdi) {
    int1_t zf2;

    zf2 = rdi == 0;
    if (!zf2) {
    }
    if (zf2) 
        goto 0x4012b7;
    *reinterpret_cast<unsigned char*>(&g440668) = 32;
}

int64_t fun_402250(struct s13* rdi) {
    int32_t r8d2;
    uint32_t eax3;
    int64_t rax4;

    r8d2 = 0;
    while (rdi->f14 != rdi->f10) {
        __asm__("in al, dx");
        if (*reinterpret_cast<unsigned char*>(&eax3) & 32) {
            __asm__("out dx, al");
            ++r8d2;
            eax3 = reinterpret_cast<uint32_t>(rdi->f20 - 1);
            rdi->f10 = rdi->f10 + 1 & eax3;
        } else {
            __asm__("pause ");
        }
    }
    *reinterpret_cast<int32_t*>(&rax4) = r8d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

struct s15* fun_403fed(uint64_t rdi, struct s16* rsi) {
    struct s15* rbx3;
    void* rdx4;
    struct s15* rcx5;
    struct s15* rax6;

    *reinterpret_cast<int32_t*>(&rbx3) = 0;
    *reinterpret_cast<int32_t*>(&rbx3 + 1) = 0;
    if (rdi && ((rbx3 = reinterpret_cast<struct s15*>(rdi * reinterpret_cast<uint64_t>(rsi)), !!((rdi | reinterpret_cast<uint64_t>(rsi)) & 0xffffffffffff0000)) && (rdx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx3) % rdi), !reinterpret_cast<int1_t>(rsi == reinterpret_cast<uint32_t>(rbx3) / rdi)))) {
        rbx3 = reinterpret_cast<struct s15*>(0xffffffffffffffff);
    }
    rax6 = fun_402b64(rbx3, rsi, rdx4, rcx5);
    if (rax6 && *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(rax6) + 0xfffffffffffffff8) & 3) {
        rax6 = fun_4050b2(rax6);
    }
    return rax6;
}

int64_t g406098 = 0x57e2;

int64_t g406050 = 0x5724;

int64_t g406058 = 0x5736;

int64_t g406048 = 0x570a;

void fun_401918() {
    void* rbp1;
    int32_t eax2;
    void* r9_3;
    struct s23* rax4;
    struct s23* rax5;
    struct s23* rdi6;
    struct s23* rdx7;
    struct s23* r13_8;
    void* rax9;
    signed char* rcx10;
    void* v11;
    uint32_t eax12;
    uint32_t* rsi13;
    uint32_t eax14;
    uint32_t v15;
    void* rax16;
    signed char* rcx17;
    signed char* r10_18;
    uint32_t* rsi19;
    uint64_t r8_20;
    struct s23* rdx21;
    signed char* r11_22;
    signed char* rax23;
    uint32_t r9d24;
    uint64_t rax25;
    uint32_t eax26;
    uint32_t eax27;
    void* rax28;
    void* rax29;
    void* rcx30;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax2 = reinterpret_cast<int32_t>(g406098());
    if (!eax2) {
        g406080();
        r9_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) - 0x8030);
        g4060a8();
        g406038();
    }
    g440668 = 4;
    rax4 = reinterpret_cast<struct s23*>(g406050());
    rax5 = reinterpret_cast<struct s23*>(g406058());
    rdi6 = rax4;
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(&rdx7 + 2) = 0;
    r13_8 = rax5;
    fun_401bad(rdi6, reinterpret_cast<int64_t>(rbp1) - 0xc02f, 0x3fff, reinterpret_cast<int64_t>(rbp1) - 0xd030, 0x200, r9_3);
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (rcx10 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(v11) + reinterpret_cast<int64_t>(rax9)), *reinterpret_cast<signed char*>(&rdx7) = *rcx10, !!*reinterpret_cast<signed char*>(&rdx7)) {
        if (*reinterpret_cast<signed char*>(&rdx7) == 92) {
            *rcx10 = 47;
        }
        rax9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax9) + 1);
    }
    eax12 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s23**>(&r13_8->f0));
    if (*reinterpret_cast<uint16_t*>(&eax12) > 0xd7ff) {
        rsi13 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) - 0xe044);
        rdi6 = r13_8;
        eax14 = fun_404e4d(rdi6, rsi13, rdx7, rcx10, 0x200, rdi6, rsi13, rdx7, rcx10, 0x200);
    } else {
        v15 = eax12;
        eax14 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax16) = eax14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    rcx17 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) - 0x8030);
    r10_18 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) - 50);
    rsi19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) - 0xe044);
    *reinterpret_cast<int32_t*>(&r8_20) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = 0;
    rdx21 = reinterpret_cast<struct s23*>(reinterpret_cast<uint16_t>(r13_8) + (reinterpret_cast<int64_t>(rax16) + reinterpret_cast<int64_t>(rax16)));
    r11_22 = rcx17;
    while (v15) {
        ++r8_20;
        if (r8_20 <= 0x1ff) {
            rax23 = reinterpret_cast<signed char*>(0);
            if (reinterpret_cast<uint64_t>(rcx17) < reinterpret_cast<uint64_t>(r10_18)) {
                rax23 = rcx17;
            }
            *reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rbp1) + r8_20 * 8 - 0xe038) = rax23;
        }
        do {
            r9d24 = v15;
            rax25 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r9d24)));
            if (r9d24 > 0x7f) {
                *reinterpret_cast<uint32_t*>(&rdi6) = r9d24;
                *reinterpret_cast<int32_t*>(&rdi6 + 2) = 0;
                rax25 = fun_404e5c(*reinterpret_cast<uint32_t*>(&rdi6), rsi19, rdx21, rcx17);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx17) >= reinterpret_cast<uint64_t>(r10_18)) 
                    break;
                ++rcx17;
                rax25 = rax25 >> 8;
            } while (rax25);
            eax26 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s23**>(&rdx21->f0));
            if (*reinterpret_cast<uint16_t*>(&eax26) > 0xd7ff) {
                rdi6 = rdx21;
                eax27 = fun_404e4d(rdi6, rsi19, rdx21, rcx17, r8_20);
            } else {
                v15 = eax26;
                eax27 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax28) = eax27;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
            rdx21 = reinterpret_cast<struct s23*>(reinterpret_cast<uint16_t>(rdx21) + (reinterpret_cast<int64_t>(rax28) + reinterpret_cast<int64_t>(rax28)));
        } while (r9d24);
        rax29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx17) - reinterpret_cast<uint64_t>(r11_22));
        if (reinterpret_cast<uint64_t>(rax29) > 0x7ffd) {
            rax29 = reinterpret_cast<void*>(0x7ffd);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + reinterpret_cast<uint64_t>(rax29) - 0x8030) = 0;
    }
    if (reinterpret_cast<uint64_t>(rcx17) < reinterpret_cast<uint64_t>(r10_18)) {
        ++rcx17;
    }
    rcx30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx17) - reinterpret_cast<uint64_t>(r11_22));
    if (reinterpret_cast<uint64_t>(rcx30) > 0x7ffe) {
        rcx30 = reinterpret_cast<void*>(0x7ffe);
    }
    if (r8_20 > 0x1ff) {
        r8_20 = 0x1ff;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + reinterpret_cast<uint64_t>(rcx30) - 0x8030) = 0;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp1) + r8_20 * 8 - 0xe030) = 0;
    g406048(rdi6, rsi19);
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
