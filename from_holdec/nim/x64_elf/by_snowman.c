
int64_t __gmon_start__ = 0;

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x60d0b8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

void** rawNewObj_BpNS5yt3b9cMOponsUKh8aw(void** rdi, void** rsi, void** rdx, void** rcx, void** r8);

void fun_400a30(void** rdi, void** rsi, void** rdx, ...);

void** copyString(void** rdi) {
    void** rbx2;
    void** r12_3;
    void** rcx4;
    void** r8_5;
    void** rax6;
    void** rdx7;

    if (!rdi) {
        *reinterpret_cast<int32_t*>(&rbx2) = 0;
        *reinterpret_cast<int32_t*>(&rbx2 + 4) = 0;
    } else {
        rbx2 = rdi;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi + 8)) >= reinterpret_cast<signed char>(0)) {
            *reinterpret_cast<int32_t*>(&r12_3) = 7;
            *reinterpret_cast<int32_t*>(&r12_3 + 4) = 0;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi)) >= reinterpret_cast<signed char>(7)) {
                r12_3 = *reinterpret_cast<void***>(rdi);
            }
            rax6 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, r12_3 + 17, 0x60f000, rcx4, r8_5);
            *reinterpret_cast<void***>(rax6) = reinterpret_cast<void**>(0);
            rbx2 = rax6;
            *reinterpret_cast<void***>(rax6 + 8) = r12_3;
            rdx7 = *reinterpret_cast<void***>(rdi);
            *reinterpret_cast<void***>(rax6) = rdx7;
            fun_400a30(rax6 + 16, rdi + 16, rdx7 + 1);
        }
    }
    return rbx2;
}

int64_t stdout = 0;

void fun_4009d0(int64_t rdi);

void fun_400a80(int64_t rdi, ...);

void fun_400a40(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t funlockfile = 0x400976;

void echoBinSafe(int64_t** rdi, int64_t rsi) {
    int64_t** rbx3;
    int64_t rdi4;
    int64_t** rbp5;
    int64_t rdi6;
    int64_t rcx7;
    int64_t rdi8;

    rbx3 = rdi;
    rdi4 = stdout;
    rbp5 = rbx3 + rsi;
    fun_4009d0(rdi4);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rsi < 0) | reinterpret_cast<uint1_t>(rsi == 0))) {
        do {
            if (*rbx3) {
                *reinterpret_cast<int32_t*>(&rdi6) = 0x40a16d;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
                if (**rbx3) {
                    rdi6 = reinterpret_cast<int64_t>(*rbx3 + 2);
                }
            } else {
                *reinterpret_cast<int32_t*>(&rdi6) = 0x40a16d;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
            }
            ++rbx3;
            fun_400a80(rdi6);
        } while (rbp5 != rbx3);
    }
    rcx7 = stdout;
    fun_400a80("\n", "\n");
    rdi8 = stdout;
    fun_400a40(rdi8, 1, 1, rcx7);
    goto funlockfile;
}

int64_t fwrite = 0x400a86;

void fun_400a80(int64_t rdi, ...) {
    goto fwrite;
}

int64_t fflush = 0x400a46;

void fun_400a40(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto fflush;
}

/* echoBinSafe.constprop.24 */
void echoBinSafe_constprop_24(int64_t** rdi) {
    int64_t rdi2;
    int64_t rdi3;
    int64_t rcx4;
    int64_t rdi5;

    rdi2 = stdout;
    fun_4009d0(rdi2);
    if (!*rdi) {
        *reinterpret_cast<int32_t*>(&rdi3) = 0x40a16d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    } else {
        rdi3 = reinterpret_cast<int64_t>(*rdi + 2);
        if (!**rdi) {
            rdi3 = 0x40a16d;
        }
    }
    fun_400a80(rdi3);
    rcx4 = stdout;
    fun_400a80("\n", "\n");
    rdi5 = stdout;
    fun_400a40(rdi5, 1, 1, rcx4);
    goto funlockfile;
}

int64_t exit = 0x400a76;

void fun_400a70(void** rdi) {
    goto exit;
}

int64_t memset = 0x4009c6;

void** fun_4009c0(void** rdi, ...) {
    goto memset;
}

void** fun_4009a0();

void raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();

struct s0 {
    int64_t f0;
    signed char[480] pad488;
    struct s0* f488;
};

void** g32e8;

struct s1 {
    int64_t f0;
    int64_t f8;
    void** f16;
};

void** llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(void** rdi, void** rsi, void** rdx, ...) {
    int64_t v4;
    int64_t rbx5;
    void** rbx6;
    void** rax7;
    void** rax8;
    void** rdx9;
    struct s0* rax10;
    void** rcx11;
    void** rax12;
    void** rax13;
    void** rdx14;
    int64_t rcx15;
    struct s1* rdi16;

    v4 = rbx5;
    rbx6 = *reinterpret_cast<void***>(rdi + 0x2878);
    if (!rbx6 || (rax7 = *reinterpret_cast<void***>(rbx6), reinterpret_cast<signed char>(rax7) < reinterpret_cast<signed char>(rsi))) {
        rax8 = fun_4009a0();
        rdx9 = rax8 + 0xffffffffffffffff;
        if (reinterpret_cast<unsigned char>(rdx9) > reinterpret_cast<unsigned char>(0xfffffffffffffffd)) {
            raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
            rax10 = reinterpret_cast<struct s0*>(0x3100);
            while (rax10) {
                if (rax10->f0 <= 29) 
                    goto addr_401218_6;
                rax10 = rax10->f488;
            }
        } else {
            *reinterpret_cast<void***>(rdi + 0x2878) = rax8;
            *reinterpret_cast<uint64_t*>(rdi + 0x2880) = *reinterpret_cast<uint64_t*>(rdi + 0x2880) + 0x1000;
            *reinterpret_cast<void***>(rax8) = reinterpret_cast<void**>(0xfe8);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x2878) + 8) = reinterpret_cast<void**>(24);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x2878) + 16) = rbx6;
            rbx6 = *reinterpret_cast<void***>(rdi + 0x2878);
            rax7 = *reinterpret_cast<void***>(rbx6);
            goto addr_40110e_9;
        }
    } else {
        addr_40110e_9:
        rcx11 = *reinterpret_cast<void***>(rbx6 + 8);
        *reinterpret_cast<void***>(rbx6) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax7) - reinterpret_cast<unsigned char>(rsi));
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x2878) + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x2878) + 8)) + reinterpret_cast<unsigned char>(rsi));
        rax12 = fun_4009c0(reinterpret_cast<unsigned char>(rcx11) + reinterpret_cast<unsigned char>(rbx6));
        return rax12;
    }
    rax13 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(0, 0x1f0, rdx9, 0, 0x1f0, rdx9);
    rdx14 = g32e8;
    *reinterpret_cast<void***>(rax13 + 0x1e8) = rdx14;
    g32e8 = rax13;
    *reinterpret_cast<void***>(rax13 + 8) = reinterpret_cast<void**>(0x1000);
    *reinterpret_cast<void***>(rax13 + 16) = rdx9;
    *reinterpret_cast<void***>(rax13) = reinterpret_cast<void**>(1);
    goto v4;
    addr_401218_6:
    rcx15 = rax10->f0 + 1;
    rdi16 = reinterpret_cast<struct s1*>((rax10->f0 << 4) + reinterpret_cast<uint64_t>(rax10));
    rdi16->f8 = 0x1000;
    rdi16->f16 = rdx9;
    rax10->f0 = rcx15;
    goto v4;
}

int64_t mmap = 0x4009a6;

void** fun_4009a0() {
    goto mmap;
}

int64_t outOfMemHook_kZNaA7u1MfSW5ZeoGvw8xg = 0;

void** g2879;

int64_t g2881;

struct s2 {
    int64_t f0;
    int64_t f8;
    void** f16;
};

void raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g() {
    int64_t rax1;
    int64_t v2;
    int64_t rbx3;
    void** rbx4;
    void** rax5;
    void** rsi6;
    void** rax7;
    void** rdx8;
    struct s0* rax9;
    int64_t tmp64_10;
    void** rax11;
    void** rax12;
    void** rcx13;
    void* rsi14;
    void** rax15;
    int64_t v16;
    void** rax17;
    void** rdx18;
    int64_t rcx19;
    struct s2* rdi20;

    rax1 = outOfMemHook_kZNaA7u1MfSW5ZeoGvw8xg;
    if (rax1) {
        rax1();
    }
    echoBinSafe_constprop_24(0x40a9a0);
    fun_400a70(1);
    v2 = rbx3;
    rbx4 = g2879;
    if (!rbx4 || (rax5 = *reinterpret_cast<void***>(rbx4), reinterpret_cast<signed char>(rax5) < reinterpret_cast<signed char>(rsi6))) {
        rax7 = fun_4009a0();
        rdx8 = rax7 + 0xffffffffffffffff;
        if (reinterpret_cast<unsigned char>(rdx8) > reinterpret_cast<unsigned char>(0xfffffffffffffffd)) {
            raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
            rax9 = reinterpret_cast<struct s0*>(0x3100);
            while (rax9) {
                if (rax9->f0 <= 29) 
                    goto addr_401218_9;
                rax9 = rax9->f488;
            }
        } else {
            g2879 = rax7;
            tmp64_10 = g2881 + 0x1000;
            g2881 = tmp64_10;
            *reinterpret_cast<void***>(rax7) = reinterpret_cast<void**>(0xfe8);
            rax11 = g2879;
            *reinterpret_cast<void***>(rax11 + 8) = reinterpret_cast<void**>(24);
            rax12 = g2879;
            *reinterpret_cast<void***>(rax12 + 16) = rbx4;
            rbx4 = g2879;
            rax5 = *reinterpret_cast<void***>(rbx4);
            goto addr_40110e_12;
        }
    } else {
        addr_40110e_12:
        rcx13 = *reinterpret_cast<void***>(rbx4 + 8);
        *reinterpret_cast<void***>(rbx4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax5) - reinterpret_cast<uint64_t>(rsi14));
        rax15 = g2879;
        *reinterpret_cast<void***>(rax15 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax15 + 8)) + reinterpret_cast<uint64_t>(rsi14));
        fun_4009c0(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<unsigned char>(rbx4));
        goto v16;
    }
    rax17 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(0, 0x1f0, rdx8, 0, 0x1f0, rdx8);
    rdx18 = g32e8;
    *reinterpret_cast<void***>(rax17 + 0x1e8) = rdx18;
    g32e8 = rax17;
    *reinterpret_cast<void***>(rax17 + 8) = reinterpret_cast<void**>(0x1000);
    *reinterpret_cast<void***>(rax17 + 16) = rdx8;
    *reinterpret_cast<void***>(rax17) = reinterpret_cast<void**>(1);
    goto v2;
    addr_401218_9:
    rcx19 = rax9->f0 + 1;
    rdi20 = reinterpret_cast<struct s2*>((rax9->f0 << 4) + reinterpret_cast<uint64_t>(rax9));
    rdi20->f8 = 0x1000;
    rdi20->f16 = rdx8;
    rax9->f0 = rcx19;
    goto v2;
}

struct s3 {
    int64_t f0;
    void** f8;
    signed char[7] pad16;
    void** f16;
};

struct s4 {
    struct s4* f0;
    uint64_t f8;
};

struct s5 {
    signed char[8] pad8;
    void** f8;
};

struct s6 {
    struct s6* f0;
    uint64_t f8;
};

void** requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(void** rdi, void** rsi) {
    void** r12_3;
    void** rbx4;
    void** rsi5;
    void** rax6;
    void** rax7;
    void** rbp8;
    void** rax9;
    void** rax10;
    struct s0* rax11;
    int64_t rdx12;
    struct s3* rcx13;
    uint64_t* rsi14;
    uint64_t rdx15;
    int64_t rax16;
    struct s4* rax17;
    uint64_t rcx18;
    uint64_t rcx19;
    uint64_t rax20;
    uint64_t rax21;
    void** rdi22;
    void** rax23;
    void** rsi24;
    struct s5* r8_25;
    void** rsi26;
    uint64_t rdx27;
    int64_t rax28;
    struct s6* rax29;
    uint64_t rcx30;
    uint64_t rcx31;
    void** rax32;

    r12_3 = rsi;
    rbx4 = rdi;
    if (!*reinterpret_cast<signed char*>(rdi + 0x30c9)) {
        if (reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rdi + 0x2898)) > reinterpret_cast<int64_t>(0xffff)) {
            rsi5 = reinterpret_cast<void**>((reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(rdi + 0x2898)) >> 2) + 0xfff & 0xfffffffffffff000);
            rax6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x30d0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x30d0)));
            if (reinterpret_cast<signed char>(rax6) > reinterpret_cast<signed char>(0x3f000000)) {
                rax6 = reinterpret_cast<void**>(0x3f000000);
            }
            if (reinterpret_cast<signed char>(rsi5) > reinterpret_cast<signed char>(rax6)) {
                rsi5 = rax6;
            }
            *reinterpret_cast<void***>(rdi + 0x30d0) = rsi5;
            goto addr_40130a_8;
        } else {
            *reinterpret_cast<void***>(rdi + 0x30d0) = reinterpret_cast<void**>(0x4000);
            *reinterpret_cast<int32_t*>(&rsi5) = 0x4000;
            *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
            goto addr_40130a_8;
        }
    }
    while (1) {
        rsi5 = *reinterpret_cast<void***>(rdi + 0x30d0);
        addr_40130a_8:
        if (reinterpret_cast<signed char>(r12_3) > reinterpret_cast<signed char>(rsi5)) {
            *reinterpret_cast<int32_t*>(&rdi) = 0;
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            rax7 = fun_4009a0();
            rbp8 = rax7;
            if (reinterpret_cast<unsigned char>(rax7 + 0xffffffffffffffff) <= reinterpret_cast<unsigned char>(0xfffffffffffffffd)) 
                break;
        } else {
            rax9 = fun_4009a0();
            rbp8 = rax9;
            if (reinterpret_cast<unsigned char>(rax9 + 0xffffffffffffffff) <= reinterpret_cast<unsigned char>(0xfffffffffffffffd)) 
                goto addr_40133e_13;
            *reinterpret_cast<int32_t*>(&rdi) = 0;
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            rax10 = fun_4009a0();
            rbp8 = rax10;
            if (reinterpret_cast<unsigned char>(rax10 + 0xffffffffffffffff) <= reinterpret_cast<unsigned char>(0xfffffffffffffffd)) 
                goto addr_40156a_15;
        }
        raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
    }
    addr_401345_17:
    *reinterpret_cast<uint64_t*>(rbx4 + 0x2880) = *reinterpret_cast<uint64_t*>(rbx4 + 0x2880) + reinterpret_cast<unsigned char>(r12_3);
    rax11 = reinterpret_cast<struct s0*>(rbx4 + 0x3100);
    *reinterpret_cast<uint64_t*>(rbx4 + 0x2890) = *reinterpret_cast<uint64_t*>(rbx4 + 0x2890) + reinterpret_cast<unsigned char>(r12_3);
    do {
        if (rax11->f0 <= 29) 
            break;
        rax11 = rax11->f488;
    } while (rax11);
    goto addr_401376_20;
    rdx12 = rax11->f0 + 1;
    rcx13 = reinterpret_cast<struct s3*>((rax11->f0 << 4) + reinterpret_cast<uint64_t>(rax11));
    rcx13->f8 = rbp8;
    rcx13->f16 = r12_3;
    rax11->f0 = rdx12;
    addr_40140c_22:
    rsi14 = reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rbp8) + reinterpret_cast<unsigned char>(r12_3));
    __asm__("pxor xmm0, xmm0");
    *reinterpret_cast<void***>(rbp8 + 8) = r12_3;
    __asm__("movups [rbp+0x10], xmm0");
    rdx15 = reinterpret_cast<uint64_t>(rsi14) >> 21;
    *reinterpret_cast<uint32_t*>(&rax16) = *reinterpret_cast<unsigned char*>(&rdx15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    rax17 = *reinterpret_cast<struct s4**>(reinterpret_cast<unsigned char>(rbx4) + reinterpret_cast<uint64_t>(rax16 * 8) + 0x28a8);
    if (rax17) {
        do {
            if (rdx15 == rax17->f8) 
                break;
            rax17 = rax17->f0;
        } while (rax17);
        goto addr_40147d_25;
    } else {
        goto addr_40147d_25;
    }
    rcx18 = reinterpret_cast<uint64_t>(rsi14) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx19) = *reinterpret_cast<uint32_t*>(&rcx18) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
    if (*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax17) + (rcx19 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx19)) {
        rax20 = *rsi14;
        *reinterpret_cast<uint32_t*>(&rax21) = *reinterpret_cast<uint32_t*>(&rax20) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = 0;
        *rsi14 = rax21 | reinterpret_cast<unsigned char>(r12_3);
    }
    addr_40147d_25:
    rdi22 = *reinterpret_cast<void***>(rbx4 + 0x28a0);
    rax23 = rdi22;
    if (!rdi22) {
        *reinterpret_cast<int32_t*>(&rax23) = 0x1000;
        *reinterpret_cast<int32_t*>(&rax23 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi22) = 0x1000;
        *reinterpret_cast<int32_t*>(&rdi22 + 4) = 0;
    }
    rsi24 = *reinterpret_cast<void***>(rbp8);
    r8_25 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(rbp8) - reinterpret_cast<unsigned char>(rax23));
    *reinterpret_cast<uint32_t*>(&rsi26) = *reinterpret_cast<uint32_t*>(&rsi24) & 1;
    *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
    rdx27 = reinterpret_cast<uint64_t>(r8_25) >> 21;
    *reinterpret_cast<uint32_t*>(&rax28) = *reinterpret_cast<unsigned char*>(&rdx27);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
    rax29 = *reinterpret_cast<struct s6**>(reinterpret_cast<unsigned char>(rbx4) + reinterpret_cast<uint64_t>(rax28 * 8) + 0x28a8);
    if (rax29) {
        do {
            if (rdx27 == rax29->f8) 
                break;
            rax29 = rax29->f0;
        } while (rax29);
        goto addr_4014fa_33;
    } else {
        goto addr_4014fa_33;
    }
    rcx30 = reinterpret_cast<uint64_t>(r8_25) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx31) = *reinterpret_cast<uint32_t*>(&rcx30) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
    if (*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax29) + (rcx31 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx31) && r8_25->f8 == rdi22) {
        rsi26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi26) | reinterpret_cast<unsigned char>(rdi22));
    }
    addr_4014fa_33:
    *reinterpret_cast<void***>(rbp8) = rsi26;
    *reinterpret_cast<void***>(rbx4 + 0x28a0) = r12_3;
    return rbp8;
    addr_401376_20:
    rax32 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rbx4, 0x1f0, 3, rbx4, 0x1f0, 3);
    *reinterpret_cast<void***>(rax32 + 0x1e8) = *reinterpret_cast<void***>(rbx4 + 0x32e8);
    *reinterpret_cast<void***>(rbx4 + 0x32e8) = rax32;
    *reinterpret_cast<void***>(rax32 + 8) = rbp8;
    *reinterpret_cast<void***>(rax32 + 16) = r12_3;
    *reinterpret_cast<void***>(rax32) = reinterpret_cast<void**>(1);
    goto addr_40140c_22;
    addr_40133e_13:
    r12_3 = *reinterpret_cast<void***>(rbx4 + 0x30d0);
    goto addr_401345_17;
    addr_40156a_15:
    *reinterpret_cast<signed char*>(rbx4 + 0x30c9) = 1;
    goto addr_401345_17;
}

struct s7 {
    struct s7* f0;
    uint64_t f8;
};

struct s8 {
    void** f0;
    signed char[10407] pad10408;
    void** f10408;
};

void** splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(void** rdi, void** rsi, void** rdx) {
    void** rbx4;
    void** r8_5;
    void** r8_6;
    uint64_t* r9_7;
    uint64_t rcx8;
    int64_t rax9;
    struct s7* rax10;
    uint64_t rcx11;
    uint64_t rcx12;
    uint64_t rax13;
    uint64_t rax14;
    void** r12_15;
    uint64_t rbp16;
    int64_t rax17;
    struct s8* r13_18;
    void** rax19;
    uint64_t rcx20;
    uint64_t rcx21;
    uint64_t rsi22;

    __asm__("pxor xmm0, xmm0");
    rbx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rsi));
    r8_5 = *reinterpret_cast<void***>(rsi + 8);
    __asm__("movups [rbx+0x10], xmm0");
    *reinterpret_cast<void***>(rbx4) = rdx;
    r8_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_5) - reinterpret_cast<unsigned char>(rdx));
    *reinterpret_cast<void***>(rbx4 + 8) = r8_6;
    r9_7 = reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi + 8)) + reinterpret_cast<unsigned char>(rsi));
    rcx8 = reinterpret_cast<uint64_t>(r9_7) >> 21;
    *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<unsigned char*>(&rcx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    rax10 = *reinterpret_cast<struct s7**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(rax9 * 8) + 0x28a8);
    if (rax10) {
        do {
            if (rcx8 == rax10->f8) 
                break;
            rax10 = rax10->f0;
        } while (rax10);
        goto addr_4016e6_4;
    } else {
        goto addr_4016e6_4;
    }
    rcx11 = reinterpret_cast<uint64_t>(r9_7) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint32_t*>(&rcx11) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    if (*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax10) + (rcx12 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx12)) {
        rax13 = *r9_7;
        *reinterpret_cast<uint32_t*>(&rax14) = *reinterpret_cast<uint32_t*>(&rax13) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
        *r9_7 = reinterpret_cast<unsigned char>(r8_6) | rax14;
    }
    addr_4016e6_4:
    *reinterpret_cast<void***>(rsi + 8) = rdx;
    r12_15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx4) >> 21);
    rbp16 = reinterpret_cast<unsigned char>(rbx4) >> 12;
    *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<unsigned char*>(&r12_15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    r13_18 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(rax17 * 8));
    rax19 = r13_18->f10408;
    if (rax19) {
        do {
            if (r12_15 == *reinterpret_cast<void***>(rax19 + 8)) 
                break;
            rax19 = *reinterpret_cast<void***>(rax19);
        } while (rax19);
        goto addr_401750_10;
    } else {
        goto addr_401750_10;
    }
    addr_40171e_12:
    rcx20 = rbp16;
    *reinterpret_cast<uint32_t*>(&rcx21) = *reinterpret_cast<uint32_t*>(&rcx20) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
    rsi22 = rcx21 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax19 + rsi22 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax19 + rsi22 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx21);
    return rbx4;
    addr_401750_10:
    rax19 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rdi, 80, rdx);
    *reinterpret_cast<void***>(rax19) = r13_18->f10408;
    r13_18->f10408 = rax19;
    *reinterpret_cast<void***>(rax19 + 8) = r12_15;
    goto addr_40171e_12;
}

struct s9 {
    void** f0;
    signed char[4215] pad4216;
    void** f4216;
};

struct s10 {
    void** f0;
    signed char[10407] pad10408;
    void** f10408;
};

struct s11 {
    void** f0;
    signed char[4115] pad4116;
    uint32_t f4116;
};

void** getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(void** rdi, void** rsi) {
    int64_t rax3;
    void** rbx4;
    int64_t rdx5;
    void** rbp6;
    int32_t ecx7;
    void* rax8;
    void** rax9;
    int64_t rdx10;
    void* rcx11;
    void* rsi12;
    int32_t ecx13;
    void** rdx14;
    uint64_t rcx15;
    int64_t rcx16;
    uint32_t ecx17;
    int64_t rcx18;
    int64_t rsi19;
    int64_t rcx20;
    void** r12_21;
    int32_t ecx22;
    int64_t rdi23;
    uint32_t edi24;
    int64_t rdi25;
    void* rcx26;
    void** rax27;
    void** rax28;
    void** rax29;
    void** rdx30;
    int64_t rcx31;
    void* rsi32;
    void* rcx33;
    void* rsi34;
    int32_t ecx35;
    uint64_t rcx36;
    struct s9* r8_37;
    void** rdi38;
    uint32_t ecx39;
    int64_t rdi40;
    uint32_t ecx41;
    int64_t rax42;
    void** r14_43;
    uint64_t r13_44;
    int64_t rax45;
    struct s10* r15_46;
    void** rax47;
    uint64_t rcx48;
    uint64_t rcx49;
    uint64_t rsi50;
    void** rax51;
    uint32_t ecx52;
    struct s11* rdi53;
    int64_t rax54;
    uint32_t ecx55;
    int64_t rsi56;
    int64_t rsi57;
    int64_t rdi58;

    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rsi);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    rbx4 = rdi;
    if (*reinterpret_cast<uint32_t*>(&rsi) <= 0xffff) {
        *reinterpret_cast<int32_t*>(&rdx5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rsi) > 0xff) {
            *reinterpret_cast<int32_t*>(&rdx5) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rsi) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rsi) <= 0xffffff) {
            *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax3) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx5) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rdx5) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rsi) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
    }
    *reinterpret_cast<uint32_t*>(&rbp6) = 0x3f000000;
    *reinterpret_cast<int32_t*>(&rbp6 + 4) = 0;
    ecx7 = static_cast<int32_t>(*reinterpret_cast<signed char*>(rax3 + 0x40a9e0) + rdx5 - 5);
    rax8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>((1 << *reinterpret_cast<unsigned char*>(&ecx7)) + 0xfff) & 0xfffffffffffff000);
    rax9 = reinterpret_cast<void**>(-reinterpret_cast<uint64_t>(rax8) & reinterpret_cast<uint64_t>(rax8) + reinterpret_cast<unsigned char>(rsi) + 0xffffffffffffffff);
    if (reinterpret_cast<signed char>(rax9) <= reinterpret_cast<signed char>(0x3f000000)) {
        rbp6 = rax9;
    }
    *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rbp6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rbp6) <= 0xffff) {
        *reinterpret_cast<int32_t*>(&rcx11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rbp6) > 0xff) {
            *reinterpret_cast<int32_t*>(&rcx11) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rbp6) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rbp6) <= 0xffffff) {
            *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rdx10) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rcx11) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rcx11) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rbp6) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
        }
    }
    rsi12 = reinterpret_cast<void*>(*reinterpret_cast<signed char*>(rdx10 + 0x40a9e0) + reinterpret_cast<int64_t>(rcx11));
    ecx13 = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi12) - 5);
    rdx14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsi12) + 0xfffffffffffffffa);
    rcx15 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp6) >> *reinterpret_cast<signed char*>(&ecx13)) - 32;
    rcx16 = 0xffffffff << *reinterpret_cast<unsigned char*>(&rcx15);
    ecx17 = *reinterpret_cast<uint32_t*>(&rcx16) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx4 + reinterpret_cast<int64_t>(rsi12) * 4) + 0xffc);
    if (ecx17) {
        *reinterpret_cast<uint32_t*>(&rcx18) = ecx17 & -ecx17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rcx18) <= 0xffff) {
            *reinterpret_cast<int32_t*>(&rsi19) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rcx18) > 0xff) {
                *reinterpret_cast<uint32_t*>(&rcx18) = *reinterpret_cast<uint32_t*>(&rcx18) >> 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi19) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rcx18) <= 0xffffff) {
                *reinterpret_cast<uint32_t*>(&rcx18) = *reinterpret_cast<uint32_t*>(&rcx18) >> 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi19) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
            } else {
                *reinterpret_cast<uint32_t*>(&rcx18) = *reinterpret_cast<uint32_t*>(&rcx18) >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi19) = 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
            }
        }
        rcx20 = *reinterpret_cast<signed char*>(rcx18 + 0x40a9e0) + rsi19;
        r12_21 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx4 + (rcx20 + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx14) << 5) + 0x20e) * 8) + 8);
        if (r12_21) 
            goto addr_401d2e_23;
    } else {
        ecx22 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx14 + 1));
        rdi23 = 0xffffffff << *reinterpret_cast<unsigned char*>(&ecx22);
        edi24 = *reinterpret_cast<uint32_t*>(&rdi23) & *reinterpret_cast<uint32_t*>(rbx4 + 0x1010);
        *reinterpret_cast<uint32_t*>(&rdi25) = edi24 & -edi24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdi25) <= 0xffff) {
            *reinterpret_cast<int32_t*>(&rcx26) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rdi25) > 0xff) {
                *reinterpret_cast<uint32_t*>(&rdi25) = *reinterpret_cast<uint32_t*>(&rdi25) >> 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx26) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rdi25) <= 0xffffff) {
                *reinterpret_cast<uint32_t*>(&rdi25) = *reinterpret_cast<uint32_t*>(&rdi25) >> 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx26) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
            } else {
                *reinterpret_cast<uint32_t*>(&rdi25) = *reinterpret_cast<uint32_t*>(&rdi25) >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx26) = 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = 0;
            }
        }
        rdx14 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(rdi25 + 0x40a9e0) + reinterpret_cast<uint64_t>(rcx26));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx14) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx14 == 0))) 
            goto addr_401b9f_31;
    }
    addr_401bf4_32:
    if (reinterpret_cast<signed char>(rax9) <= reinterpret_cast<signed char>(0x7ffff)) {
        rax27 = requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(rbx4, 0x80000);
        r12_21 = rax27;
        goto addr_401d74_34;
    }
    rax28 = requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(rbx4, rbp6);
    r12_21 = rax28;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax28 + 8)) > reinterpret_cast<signed char>(rbp6)) {
        addr_401d74_34:
        rax29 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(rbx4, r12_21, rbp6);
        rdx30 = *reinterpret_cast<void***>(rax29 + 8);
        *reinterpret_cast<uint32_t*>(&rcx31) = *reinterpret_cast<uint32_t*>(&rdx30);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx30) <= 0xffff) {
            *reinterpret_cast<int32_t*>(&rsi32) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rdx30) > 0xff) {
                *reinterpret_cast<int32_t*>(&rsi32) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rcx31) = *reinterpret_cast<uint32_t*>(&rdx30) >> 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rdx30) <= 0xffffff) {
                *reinterpret_cast<uint32_t*>(&rcx31) = *reinterpret_cast<uint32_t*>(&rcx31) >> 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi32) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = 0;
            } else {
                *reinterpret_cast<int32_t*>(&rsi32) = 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rcx31) = *reinterpret_cast<uint32_t*>(&rdx30) >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
            }
        }
    } else {
        goto addr_401c20_42;
    }
    rcx33 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<signed char*>(rcx31 + 0x40a9e0)));
    *reinterpret_cast<void***>(rax29 + 24) = reinterpret_cast<void**>(0);
    rsi34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi32) + reinterpret_cast<int64_t>(rcx33));
    ecx35 = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi34) - 5);
    rcx36 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx30) >> *reinterpret_cast<signed char*>(&ecx35)) - 32;
    rdx14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsi34) + 0xfffffffffffffffa);
    r8_37 = reinterpret_cast<struct s9*>(rbx4 + ((reinterpret_cast<unsigned char>(rdx14) << 5) + rcx36) * 8);
    rdi38 = r8_37->f4216;
    *reinterpret_cast<void***>(rax29 + 16) = rdi38;
    if (rdi38) {
        *reinterpret_cast<void***>(rdi38 + 24) = rax29;
    }
    r8_37->f4216 = rax29;
    ecx39 = *reinterpret_cast<uint32_t*>(&rcx36) & 31;
    rdi40 = 1 << *reinterpret_cast<unsigned char*>(&ecx39);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx4 + reinterpret_cast<int64_t>(rsi34) * 4) + 0xffc) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx4 + reinterpret_cast<int64_t>(rsi34) * 4) + 0xffc) | *reinterpret_cast<uint32_t*>(&rdi40);
    ecx41 = *reinterpret_cast<uint32_t*>(&rdx14) & 31;
    rax42 = 1 << *reinterpret_cast<unsigned char*>(&ecx41);
    *reinterpret_cast<uint32_t*>(rbx4 + 0x1010) = *reinterpret_cast<uint32_t*>(rbx4 + 0x1010) | *reinterpret_cast<uint32_t*>(&rax42);
    addr_401c20_42:
    *reinterpret_cast<void***>(r12_21) = reinterpret_cast<void**>(1);
    r14_43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_21) >> 21);
    r13_44 = reinterpret_cast<unsigned char>(r12_21) >> 12;
    *reinterpret_cast<uint32_t*>(&rax45) = *reinterpret_cast<unsigned char*>(&r14_43);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
    r15_46 = reinterpret_cast<struct s10*>(reinterpret_cast<unsigned char>(rbx4) + reinterpret_cast<uint64_t>(rax45 * 8));
    rax47 = r15_46->f10408;
    if (rax47) {
        do {
            if (r14_43 == *reinterpret_cast<void***>(rax47 + 8)) 
                break;
            rax47 = *reinterpret_cast<void***>(rax47);
        } while (rax47);
        goto addr_401e80_48;
    } else {
        goto addr_401e80_48;
    }
    addr_401c62_50:
    rcx48 = r13_44;
    *reinterpret_cast<uint32_t*>(&rcx49) = *reinterpret_cast<uint32_t*>(&rcx48) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
    rsi50 = rcx49 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax47 + rsi50 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax47 + rsi50 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx49);
    *reinterpret_cast<uint64_t*>(rbx4 + 0x2890) = *reinterpret_cast<uint64_t*>(rbx4 + 0x2890) - reinterpret_cast<unsigned char>(rbp6);
    return r12_21;
    addr_401e80_48:
    rax47 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rbx4, 80, rdx14);
    *reinterpret_cast<void***>(rax47) = r15_46->f10408;
    r15_46->f10408 = rax47;
    *reinterpret_cast<void***>(rax47 + 8) = r14_43;
    goto addr_401c62_50;
    addr_401d2e_23:
    rax51 = *reinterpret_cast<void***>(r12_21 + 16);
    *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx4 + (rcx20 + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx14) << 5) + 0x20e) * 8) + 8) = rax51;
    if (!rax51) {
        ecx52 = *reinterpret_cast<uint32_t*>(&rcx20) & 31;
        rdi53 = reinterpret_cast<struct s11*>(rbx4 + reinterpret_cast<unsigned char>(rdx14) * 4);
        rax54 = 1 << *reinterpret_cast<unsigned char*>(&ecx52);
        rdi53->f4116 = rdi53->f4116 & reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rax54));
        if (!rdi53->f4116) {
            ecx55 = *reinterpret_cast<uint32_t*>(&rdx14) & 31;
            rsi56 = 1 << *reinterpret_cast<unsigned char*>(&ecx55);
            *reinterpret_cast<uint32_t*>(rbx4 + 0x1010) = *reinterpret_cast<uint32_t*>(rbx4 + 0x1010) & reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rsi56));
        }
    } else {
        *reinterpret_cast<void***>(rax51 + 24) = reinterpret_cast<void**>(0);
    }
    __asm__("pxor xmm0, xmm0");
    __asm__("movups [r12+0x10], xmm0");
    if (reinterpret_cast<signed char>(rbp6 + 0xfff) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_21 + 8))) 
        goto addr_401c20_42; else 
        goto addr_401d74_34;
    addr_401b9f_31:
    *reinterpret_cast<uint32_t*>(&rsi57) = -*reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx4 + reinterpret_cast<unsigned char>(rdx14) * 4) + 0x1014) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx4 + reinterpret_cast<unsigned char>(rdx14) * 4) + 0x1014);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi57) <= 0xffff) {
        *reinterpret_cast<int32_t*>(&rdi58) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rsi57) > 0xff) {
            *reinterpret_cast<uint32_t*>(&rsi57) = *reinterpret_cast<uint32_t*>(&rsi57) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdi58) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rsi57) <= 0xffffff) {
            *reinterpret_cast<uint32_t*>(&rsi57) = *reinterpret_cast<uint32_t*>(&rsi57) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdi58) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rsi57) = *reinterpret_cast<uint32_t*>(&rsi57) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdi58) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = 0;
        }
    }
    rcx20 = *reinterpret_cast<signed char*>(rsi57 + 0x40a9e0) + rdi58;
    r12_21 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx4 + (rcx20 + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx14) << 5) + 0x20e) * 8) + 8);
    if (r12_21) 
        goto addr_401d2e_23; else 
        goto addr_401bf4_32;
}

void add_Xuf47u3imOz8BOk5HURLWQ(void** rdi, void** rsi, void** rdx, void* rcx, void** r8) {
    void** rsi6;
    void** rax7;
    void** rax8;
    void** rdx9;
    void** rax10;

    rsi6 = *reinterpret_cast<void***>(rsi);
    rax7 = *reinterpret_cast<void***>(rsi6);
    if (rsi6 == rax7) {
        rax8 = *reinterpret_cast<void***>(rdi + 0x30c0);
        if (!rax8) {
            rax8 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rdi, 40, rdx);
        } else {
            *reinterpret_cast<void***>(rdi + 0x30c0) = *reinterpret_cast<void***>(rax8);
        }
        __asm__("movq xmm0, [rsp]");
        __asm__("movhps xmm0, [rsp]");
        __asm__("movups [rax+0x10], xmm0");
        __asm__("movq xmm0, [rsp]");
        __asm__("punpcklqdq xmm0, xmm0");
        if (!*reinterpret_cast<void***>(rdi + 0x30d8)) {
            __asm__("movups [rbp+0x30d8], xmm0");
        }
        __asm__("movups [rax], xmm0");
        *reinterpret_cast<void***>(rax8 + 32) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(rsi) = rax8;
        return;
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 16)) > reinterpret_cast<unsigned char>(rdx)) {
        addr_402244_9:
        add_Xuf47u3imOz8BOk5HURLWQ(rdi, rsi6, rdx, rcx, r8);
        rsi6 = *reinterpret_cast<void***>(rsi);
        rax7 = *reinterpret_cast<void***>(rsi6);
        rdx9 = *reinterpret_cast<void***>(rsi6 + 32);
        if (*reinterpret_cast<void***>(rax7 + 32) != rdx9) {
            addr_4021d1_10:
            rax10 = *reinterpret_cast<void***>(rsi6 + 8);
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rax10 + 8) + 32) == rdx9) {
                addr_4021f0_11:
                *reinterpret_cast<void***>(rsi) = rax10;
                *reinterpret_cast<void***>(rsi6 + 8) = *reinterpret_cast<void***>(rax10);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi)) = rsi6;
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) + 1;
                return;
            } else {
                addr_4021df_12:
                return;
            }
        }
    } else {
        if (*reinterpret_cast<void***>(rsi6 + 16) != rdx) {
            rsi6 = rsi6 + 8;
            goto addr_402244_9;
        } else {
            rdx9 = *reinterpret_cast<void***>(rsi6 + 32);
            if (*reinterpret_cast<void***>(rax7 + 32) != rdx9) 
                goto addr_4021d1_10;
        }
    }
    *reinterpret_cast<void***>(rsi) = rax7;
    *reinterpret_cast<void***>(rsi6) = *reinterpret_cast<void***>(rax7 + 8);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8) = rsi6;
    rsi6 = *reinterpret_cast<void***>(rsi);
    rax10 = *reinterpret_cast<void***>(rsi6 + 8);
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rax10 + 8) + 32) != *reinterpret_cast<void***>(rsi6 + 32)) 
        goto addr_4021df_12;
    goto addr_4021f0_11;
}

struct s12 {
    void** f0;
    signed char[4215] pad4216;
    void** f4216;
};

struct s13 {
    void** f0;
    signed char[4091] pad4092;
    uint32_t f4092;
};

void removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(void** rdi, void** rsi) {
    void** rax3;
    int64_t rcx4;
    int64_t rdx5;
    int64_t rdx6;
    int32_t ecx7;
    int64_t r9_8;
    uint64_t rcx9;
    void** rax10;
    struct s12* rax11;
    void** r8_12;
    struct s13* r8_13;
    uint32_t ecx14;
    int64_t rax15;
    uint32_t ecx16;
    int64_t rdx17;

    rax3 = *reinterpret_cast<void***>(rsi + 8);
    *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rax3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3) <= 0xffff) {
        *reinterpret_cast<int32_t*>(&rdx5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0xff) {
            *reinterpret_cast<int32_t*>(&rdx5) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rax3) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0xffffff) {
            *reinterpret_cast<int32_t*>(&rdx5) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rax3) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rcx4) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx5) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        }
    }
    rdx6 = rdx5 + *reinterpret_cast<signed char*>(rcx4 + 0x40a9e0);
    ecx7 = static_cast<int32_t>(rdx6 - 5);
    r9_8 = rdx6 - 6;
    rcx9 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rax3) >> *reinterpret_cast<signed char*>(&ecx7)) - 32;
    rax10 = *reinterpret_cast<void***>(rsi + 24);
    if (*reinterpret_cast<void***>(rsi + 16)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi + 16) + 24) = rax10;
        rax10 = *reinterpret_cast<void***>(rsi + 24);
    }
    if (rax10) {
        *reinterpret_cast<void***>(rax10 + 16) = *reinterpret_cast<void***>(rsi + 16);
    }
    rax11 = reinterpret_cast<struct s12*>(rdi + ((r9_8 << 5) + rcx9) * 8);
    if (rax11->f4216 != rsi || ((r8_12 = *reinterpret_cast<void***>(rsi + 16), rax11->f4216 = r8_12, !!r8_12) || (r8_13 = reinterpret_cast<struct s13*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(rdx6 * 4)), ecx14 = *reinterpret_cast<uint32_t*>(&rcx9) & 31, rax15 = 1 << *reinterpret_cast<unsigned char*>(&ecx14), r8_13->f4092 = r8_13->f4092 & reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rax15)), !!r8_13->f4092))) {
        __asm__("pxor xmm0, xmm0");
        __asm__("movups [rsi+0x10], xmm0");
        return;
    } else {
        __asm__("pxor xmm0, xmm0");
        ecx16 = *reinterpret_cast<uint32_t*>(&r9_8) & 31;
        rdx17 = 1 << *reinterpret_cast<unsigned char*>(&ecx16);
        *reinterpret_cast<uint32_t*>(rdi + 0x1010) = *reinterpret_cast<uint32_t*>(rdi + 0x1010) & reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rdx17));
        __asm__("movups [rsi+0x10], xmm0");
        return;
    }
}

void del_C66us4UEWCXp84lHW4tDLA(void** rdi, void** rsi, void** rdx) {
    void** rax4;
    void** rsi5;
    void** rax6;
    void** rdx7;
    void** rax8;
    void** rdx9;
    void** rcx10;
    void** rdx11;
    void** rcx12;
    void** rcx13;
    void** r8_14;

    rax4 = *reinterpret_cast<void***>(rsi);
    if (rax4 == *reinterpret_cast<void***>(rax4)) {
        return;
    }
    *reinterpret_cast<void***>(rdi + 0x30b8) = rax4;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax4 + 16)) <= reinterpret_cast<unsigned char>(rdx)) {
        *reinterpret_cast<void***>(rdi + 0x30b0) = rax4;
        rsi5 = *reinterpret_cast<void***>(rsi) + 8;
        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi5, rdx);
    } else {
        del_C66us4UEWCXp84lHW4tDLA(rdi, rax4, rdx);
    }
    if (*reinterpret_cast<void***>(rsi) == *reinterpret_cast<void***>(rdi + 0x30b8) && (*reinterpret_cast<void***>(rdi + 0x30b0) != *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0)) && *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0) + 16) == rdx)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0) + 16) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 16);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0) + 24) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 24);
        if (!*reinterpret_cast<void***>(rdi + 0x30d8)) {
            __asm__("movq xmm0, [rsp-0x10]");
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rdi+0x30d8], xmm0");
        }
        *reinterpret_cast<void***>(rdi + 0x30b0) = rdi + 0x30d8;
        *reinterpret_cast<void***>(rsi) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8);
        rax6 = *reinterpret_cast<void***>(rdi + 0x30b8);
        *reinterpret_cast<void***>(rax6) = *reinterpret_cast<void***>(rdi + 0x30c0);
        *reinterpret_cast<void***>(rdi + 0x30c0) = rax6;
        return;
    }
    rdx7 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) + 0xffffffffffffffff;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi)) + 32)) < reinterpret_cast<signed char>(rdx7)) 
        goto addr_400df0_12;
    if (reinterpret_cast<signed char>(rdx7) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8) + 32))) 
        goto addr_400d5f_14;
    addr_400df0_12:
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) = rdx7;
    rax8 = *reinterpret_cast<void***>(rsi);
    rdx9 = *reinterpret_cast<void***>(rax8 + 32);
    if (reinterpret_cast<signed char>(rdx9) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rax8 + 8) + 32))) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax8 + 8) + 32) = rdx9;
        rax8 = *reinterpret_cast<void***>(rsi);
        rdx9 = *reinterpret_cast<void***>(rax8 + 32);
    }
    rcx10 = *reinterpret_cast<void***>(rax8);
    if (*reinterpret_cast<void***>(rcx10 + 32) == rdx9) {
        *reinterpret_cast<void***>(rsi) = rcx10;
        *reinterpret_cast<void***>(rax8) = *reinterpret_cast<void***>(rcx10 + 8);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8) = rax8;
        rax8 = *reinterpret_cast<void***>(rsi);
    }
    rdx11 = *reinterpret_cast<void***>(rax8 + 8);
    rcx12 = *reinterpret_cast<void***>(rdx11);
    if (*reinterpret_cast<void***>(rcx12 + 32) == *reinterpret_cast<void***>(rdx11 + 32)) {
        *reinterpret_cast<void***>(rax8 + 8) = rcx12;
        *reinterpret_cast<void***>(rdx11) = *reinterpret_cast<void***>(rcx12 + 8);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax8 + 8) + 8) = rdx11;
        rax8 = *reinterpret_cast<void***>(rsi);
        rdx11 = *reinterpret_cast<void***>(rax8 + 8);
    }
    rcx13 = *reinterpret_cast<void***>(rdx11 + 8);
    r8_14 = *reinterpret_cast<void***>(rcx13);
    if (*reinterpret_cast<void***>(r8_14 + 32) != *reinterpret_cast<void***>(rcx13 + 32)) 
        goto addr_400e43_21;
    *reinterpret_cast<void***>(rdx11 + 8) = r8_14;
    *reinterpret_cast<void***>(rcx13) = *reinterpret_cast<void***>(r8_14 + 8);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx11 + 8) + 8) = rcx13;
    rax8 = *reinterpret_cast<void***>(rsi);
    rdx11 = *reinterpret_cast<void***>(rax8 + 8);
    rcx13 = *reinterpret_cast<void***>(rdx11 + 8);
    if (*reinterpret_cast<void***>(rax8 + 32) != *reinterpret_cast<void***>(rcx13 + 32)) {
        addr_400e49_23:
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx13 + 8) + 32) != *reinterpret_cast<void***>(rdx11 + 32)) {
            addr_400d5f_14:
            return;
        } else {
            addr_400e5b_24:
            *reinterpret_cast<void***>(rax8 + 8) = rcx13;
            *reinterpret_cast<void***>(rdx11 + 8) = *reinterpret_cast<void***>(rcx13);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax8 + 8)) = rdx11;
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax8 + 8) + 32) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax8 + 8) + 32) + 1;
            return;
        }
    }
    addr_400e80_26:
    *reinterpret_cast<void***>(rsi) = rdx11;
    *reinterpret_cast<void***>(rax8 + 8) = *reinterpret_cast<void***>(rdx11);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi)) = rax8;
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) + 1;
    rax8 = *reinterpret_cast<void***>(rsi);
    rdx11 = *reinterpret_cast<void***>(rax8 + 8);
    rcx13 = *reinterpret_cast<void***>(rdx11 + 8);
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx13 + 8) + 32) != *reinterpret_cast<void***>(rdx11 + 32)) 
        goto addr_400d5f_14;
    goto addr_400e5b_24;
    addr_400e43_21:
    if (*reinterpret_cast<void***>(rax8 + 32) == *reinterpret_cast<void***>(rcx13 + 32)) 
        goto addr_400e80_26; else 
        goto addr_400e49_23;
}

/* del_C66us4UEWCXp84lHW4tDLA.part.8 */
void del_C66us4UEWCXp84lHW4tDLA_part_8(void** rdi, void** rsi, void** rdx) {
    void** rax4;
    void** rdx5;
    void** rax6;
    void** rdx7;
    void** rcx8;
    void** rdx9;
    void** rcx10;
    void** rcx11;
    void** r8_12;

    if (*reinterpret_cast<void***>(rsi) == *reinterpret_cast<void***>(rdi + 0x30b8) && (*reinterpret_cast<void***>(rdi + 0x30b0) != *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0)) && *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0) + 16) == rdx)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0) + 16) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 16);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x30b0) + 24) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 24);
        if (!*reinterpret_cast<void***>(rdi + 0x30d8)) {
            __asm__("movq xmm0, [rsp-0x10]");
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rdi+0x30d8], xmm0");
        }
        *reinterpret_cast<void***>(rdi + 0x30b0) = rdi + 0x30d8;
        *reinterpret_cast<void***>(rsi) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8);
        rax4 = *reinterpret_cast<void***>(rdi + 0x30b8);
        *reinterpret_cast<void***>(rax4) = *reinterpret_cast<void***>(rdi + 0x30c0);
        *reinterpret_cast<void***>(rdi + 0x30c0) = rax4;
        return;
    }
    rdx5 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) + 0xffffffffffffffff;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi)) + 32)) < reinterpret_cast<signed char>(rdx5)) 
        goto addr_400df0_6;
    if (reinterpret_cast<signed char>(rdx5) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8) + 32))) 
        goto addr_400d5f_8;
    addr_400df0_6:
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) = rdx5;
    rax6 = *reinterpret_cast<void***>(rsi);
    rdx7 = *reinterpret_cast<void***>(rax6 + 32);
    if (reinterpret_cast<signed char>(rdx7) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rax6 + 8) + 32))) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax6 + 8) + 32) = rdx7;
        rax6 = *reinterpret_cast<void***>(rsi);
        rdx7 = *reinterpret_cast<void***>(rax6 + 32);
    }
    rcx8 = *reinterpret_cast<void***>(rax6);
    if (*reinterpret_cast<void***>(rcx8 + 32) == rdx7) {
        *reinterpret_cast<void***>(rsi) = rcx8;
        *reinterpret_cast<void***>(rax6) = *reinterpret_cast<void***>(rcx8 + 8);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8) = rax6;
        rax6 = *reinterpret_cast<void***>(rsi);
    }
    rdx9 = *reinterpret_cast<void***>(rax6 + 8);
    rcx10 = *reinterpret_cast<void***>(rdx9);
    if (*reinterpret_cast<void***>(rcx10 + 32) == *reinterpret_cast<void***>(rdx9 + 32)) {
        *reinterpret_cast<void***>(rax6 + 8) = rcx10;
        *reinterpret_cast<void***>(rdx9) = *reinterpret_cast<void***>(rcx10 + 8);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax6 + 8) + 8) = rdx9;
        rax6 = *reinterpret_cast<void***>(rsi);
        rdx9 = *reinterpret_cast<void***>(rax6 + 8);
    }
    rcx11 = *reinterpret_cast<void***>(rdx9 + 8);
    r8_12 = *reinterpret_cast<void***>(rcx11);
    if (*reinterpret_cast<void***>(r8_12 + 32) != *reinterpret_cast<void***>(rcx11 + 32)) 
        goto addr_400e43_15;
    *reinterpret_cast<void***>(rdx9 + 8) = r8_12;
    *reinterpret_cast<void***>(rcx11) = *reinterpret_cast<void***>(r8_12 + 8);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx9 + 8) + 8) = rcx11;
    rax6 = *reinterpret_cast<void***>(rsi);
    rdx9 = *reinterpret_cast<void***>(rax6 + 8);
    rcx11 = *reinterpret_cast<void***>(rdx9 + 8);
    if (*reinterpret_cast<void***>(rax6 + 32) != *reinterpret_cast<void***>(rcx11 + 32)) {
        addr_400e49_17:
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx11 + 8) + 32) != *reinterpret_cast<void***>(rdx9 + 32)) {
            addr_400d5f_8:
            return;
        } else {
            addr_400e5b_18:
            *reinterpret_cast<void***>(rax6 + 8) = rcx11;
            *reinterpret_cast<void***>(rdx9 + 8) = *reinterpret_cast<void***>(rcx11);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax6 + 8)) = rdx9;
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax6 + 8) + 32) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax6 + 8) + 32) + 1;
            return;
        }
    }
    addr_400e80_20:
    *reinterpret_cast<void***>(rsi) = rdx9;
    *reinterpret_cast<void***>(rax6 + 8) = *reinterpret_cast<void***>(rdx9);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi)) = rax6;
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) + 1;
    rax6 = *reinterpret_cast<void***>(rsi);
    rdx9 = *reinterpret_cast<void***>(rax6 + 8);
    rcx11 = *reinterpret_cast<void***>(rdx9 + 8);
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx11 + 8) + 32) != *reinterpret_cast<void***>(rdx9 + 32)) 
        goto addr_400d5f_8;
    goto addr_400e5b_18;
    addr_400e43_15:
    if (*reinterpret_cast<void***>(rax6 + 32) == *reinterpret_cast<void***>(rcx11 + 32)) 
        goto addr_400e80_20; else 
        goto addr_400e49_17;
}

struct s14 {
    void*** f0;
    void*** f8;
    void** f16;
};

void** rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(void** rdi, void** rsi, void** rdx, void** rcx, void** r8);

void rawDealloc_DA62HrGC5sdfCED505KyyQ(void** rdi, void** rsi, void** rdx);

void addZCT_fCDI7oO1NNVXXURtxSzsRw(struct s14* rdi, void** rsi) {
    void** rax3;
    void** rdx4;
    void*** rax5;
    void** rcx6;
    void** r8_7;
    void** rax8;
    void** rbp9;
    void** rsi10;
    void** rdx11;
    void** rsi12;
    void*** rax13;

    rax3 = *reinterpret_cast<void***>(rsi);
    if (!(*reinterpret_cast<unsigned char*>(&rax3) & 4)) {
        *reinterpret_cast<void***>(rsi) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax3) | 4);
        if (reinterpret_cast<int64_t>(rdi->f8) <= reinterpret_cast<int64_t>(rdi->f0)) {
            rdx4 = reinterpret_cast<void**>(rdi->f8 + reinterpret_cast<int64_t>(rdi->f8) * 2);
            rax5 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx4) >> 63) + reinterpret_cast<unsigned char>(rdx4)) >> 1);
            rdi->f8 = rax5;
            rax8 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax5) * 8 + 16, rdx4, rcx6, r8_7);
            rbp9 = rax8 + 16;
            *reinterpret_cast<void***>(rax8 + 8) = reinterpret_cast<void**>(1);
            rsi10 = rdi->f16;
            rdx11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f0) * 8);
            fun_400a30(rbp9, rsi10, rdx11);
            rsi12 = rdi->f16 + 0xfffffffffffffff0;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi12, rdx11);
            rax13 = rdi->f0;
            rdi->f16 = rbp9;
            *reinterpret_cast<void***>(rbp9 + reinterpret_cast<int64_t>(rax13) * 8) = rsi;
            rdi->f0 = rdi->f0 + 1;
            return;
        } else {
            *reinterpret_cast<void***>(rdi->f16 + reinterpret_cast<int64_t>(rdi->f0) * 8) = rsi;
            rdi->f0 = rdi->f0 + 1;
            return;
        }
    } else {
        return;
    }
}

void genericResetAux_ruA1rosalqf8AhzZPPTBQg(void*** rdi, void** rsi, void** rdx);

unsigned char isOnStack_dJJW59cIgsBmT59aZrOM71Mg(void*** rdi, void** rsi, void** rdx);

void genericReset(void*** rdi, void** rsi, void** rdx) {
    uint32_t eax4;
    int64_t rax5;
    void** r13_6;
    void*** rbp7;
    void** rsi8;
    void*** r12_9;
    void** rbx10;
    uint32_t eax11;
    void** rsi12;
    uint64_t rbx13;
    void** rdi14;
    void** rdx15;
    uint64_t rax16;
    uint64_t r12_17;
    void* rdi18;
    void** rsi19;
    unsigned char al20;
    void** rsi21;
    void** rdx22;
    void** r13_23;
    void** rbp24;
    void** rsi25;
    void** rdx26;
    void** rax27;
    void** rsi28;

    while (eax4 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(rsi + 8) - 4), *reinterpret_cast<unsigned char*>(&eax4) <= 41) {
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<unsigned char*>(&eax4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        r13_6 = rsi;
        rbp7 = rdi;
        switch (rax5) {
        case 14:
            rsi8 = *reinterpret_cast<void***>(rsi + 24);
            r12_9 = rdi;
            rbx10 = rsi8;
            eax11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8));
            if (*reinterpret_cast<signed char*>(&eax11) == 2) 
                goto addr_4043e0_5;
            if (*reinterpret_cast<signed char*>(&eax11) == 3) 
                goto addr_404430_7;
            if (*reinterpret_cast<signed char*>(&eax11) != 1) 
                goto addr_4043cf_9;
        case 18:
        case 20:
        case 24:
        case 41:
            goto 0x4042d0;
        case 13:
            goto 0x404328;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 15:
        case 16:
        case 17:
        case 19:
        case 21:
        case 22:
        case 23:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
            goto 0x404380;
        case 0:
        case 12:
            goto 0x404348;
        }
    }
    addr_4009c0_12:
    goto memset;
    rsi12 = *reinterpret_cast<void***>(rsi + 16);
    *reinterpret_cast<int32_t*>(&rbx13) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = 0;
    rdi14 = *reinterpret_cast<void***>(rsi12);
    rdx15 = reinterpret_cast<void**>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_6)) % reinterpret_cast<signed char>(rdi14));
    rax16 = reinterpret_cast<uint64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_6)) / reinterpret_cast<signed char>(rdi14));
    r12_17 = rax16;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax16) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax16 == 0))) {
        while (rdi18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) * rbx13), ++rbx13, genericReset(reinterpret_cast<uint64_t>(rdi18) + reinterpret_cast<uint64_t>(rbp7), rsi12, rdx15), r12_17 != rbx13) {
            rsi12 = *reinterpret_cast<void***>(r13_6 + 16);
            rdi14 = *reinterpret_cast<void***>(rsi12);
        }
    }
    addr_404339_16:
    return;
    goto addr_4009c0_12;
    rsi19 = *reinterpret_cast<void***>(rsi + 24);
    genericResetAux_ruA1rosalqf8AhzZPPTBQg(rdi, rsi19, rdx);
    addr_404331_19:
    *rbp7 = reinterpret_cast<void**>(0);
    goto addr_404339_16;
    al20 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(rdi, rsi, rdx);
    if (!al20 && (reinterpret_cast<unsigned char>(*rdi) > reinterpret_cast<unsigned char>(0xfff) && (rsi21 = *rdi + 0xfffffffffffffff0, rdx22 = *reinterpret_cast<void***>(*rdi + 0xfffffffffffffff0) + 0xfffffffffffffff8, *reinterpret_cast<void***>(*rdi + 0xfffffffffffffff0) = rdx22, reinterpret_cast<unsigned char>(rdx22) <= reinterpret_cast<unsigned char>(7)))) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi21);
        goto addr_404331_19;
    }
    addr_4043e0_5:
    r13_23 = *reinterpret_cast<void***>(rsi8 + 32);
    *reinterpret_cast<int32_t*>(&rbp24) = 0;
    *reinterpret_cast<int32_t*>(&rbp24 + 4) = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r13_23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r13_23 == 0))) {
        do {
            rsi25 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx10 + 40) + reinterpret_cast<unsigned char>(rbp24) * 8);
            ++rbp24;
            genericResetAux_ruA1rosalqf8AhzZPPTBQg(r12_9, rsi25, rdx);
        } while (r13_23 != rbp24);
    }
    addr_4043cf_9:
    return;
    addr_404430_7:
    rdx26 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi8 + 16));
    if (rdx26 == 2) {
        *reinterpret_cast<uint32_t*>(&rax27) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8 + 8)) + reinterpret_cast<uint64_t>(rdi));
        *reinterpret_cast<int32_t*>(&rax27 + 4) = 0;
    } else {
        if (rdx26 == 4) {
            rax27 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8 + 8)))));
        } else {
            *reinterpret_cast<uint32_t*>(&rax27) = 0;
            *reinterpret_cast<int32_t*>(&rax27 + 4) = 0;
            if (rdx26 == 1) {
                *reinterpret_cast<uint32_t*>(&rax27) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8 + 8)) + reinterpret_cast<uint64_t>(rdi));
                *reinterpret_cast<int32_t*>(&rax27 + 4) = 0;
            }
        }
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10 + 32)) > reinterpret_cast<unsigned char>(rax27)) {
        rsi28 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx10 + 40) + reinterpret_cast<unsigned char>(rax27) * 8);
        if (rsi28) 
            goto addr_404465_31;
    }
    rsi28 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx10 + 40) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10 + 32)) * 8);
    if (!rsi28) {
        addr_404474_34:
        goto addr_4009c0_12;
    } else {
        addr_404465_31:
        genericResetAux_ruA1rosalqf8AhzZPPTBQg(r12_9, rsi28, rdx26);
        goto addr_404474_34;
    }
}

void genericResetAux_ruA1rosalqf8AhzZPPTBQg(void*** rdi, void** rsi, void** rdx) {
    void*** r12_4;
    void** rbx5;
    uint32_t eax6;
    void** rsi7;
    void*** rdi8;
    uint32_t eax9;
    int64_t rax10;
    void** r13_11;
    void*** rbp12;
    void** r13_13;
    void** rbp14;
    void** rsi15;
    void** rdx16;
    void** rax17;
    void** rsi18;
    void** rsi19;
    uint64_t rbx20;
    void** rdi21;
    void** rdx22;
    uint64_t rax23;
    uint64_t r12_24;
    void* rdi25;
    void** rsi26;
    unsigned char al27;
    void** rsi28;
    void** rdx29;

    while (r12_4 = rdi, rbx5 = rsi, eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi)), *reinterpret_cast<signed char*>(&eax6) != 2) {
        if (*reinterpret_cast<signed char*>(&eax6) == 3) 
            goto addr_404430_3;
        if (*reinterpret_cast<signed char*>(&eax6) != 1) 
            goto addr_4043cf_5;
        rsi7 = *reinterpret_cast<void***>(rsi + 16);
        rdi8 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 8)) + reinterpret_cast<uint64_t>(r12_4));
        eax9 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(rsi7 + 8) - 4);
        if (*reinterpret_cast<unsigned char*>(&eax9) > 41) 
            goto addr_404398_8;
        *reinterpret_cast<uint32_t*>(&rax10) = *reinterpret_cast<unsigned char*>(&eax9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        r13_11 = rsi7;
        rbp12 = rdi8;
        switch (rax10) {
        case 14:
        case 18:
        case 20:
        case 24:
        case 41:
            goto 0x4042d0;
        case 13:
            goto 0x404328;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 15:
        case 16:
        case 17:
        case 19:
        case 21:
        case 22:
        case 23:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
            goto 0x404380;
        case 0:
        case 12:
            goto 0x404348;
        }
    }
    r13_13 = *reinterpret_cast<void***>(rsi + 32);
    *reinterpret_cast<int32_t*>(&rbp14) = 0;
    *reinterpret_cast<int32_t*>(&rbp14 + 4) = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r13_13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r13_13 == 0))) {
        do {
            rsi15 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx5 + 40) + reinterpret_cast<unsigned char>(rbp14) * 8);
            ++rbp14;
            genericResetAux_ruA1rosalqf8AhzZPPTBQg(r12_4, rsi15, rdx);
        } while (r13_13 != rbp14);
    }
    addr_4043cf_5:
    return;
    addr_404430_3:
    rdx16 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi + 16));
    if (rdx16 == 2) {
        *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi + 8)) + reinterpret_cast<uint64_t>(rdi));
        *reinterpret_cast<int32_t*>(&rax17 + 4) = 0;
    } else {
        if (rdx16 == 4) {
            rax17 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi + 8)))));
        } else {
            *reinterpret_cast<uint32_t*>(&rax17) = 0;
            *reinterpret_cast<int32_t*>(&rax17 + 4) = 0;
            if (rdx16 == 1) {
                *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi + 8)) + reinterpret_cast<uint64_t>(rdi));
                *reinterpret_cast<int32_t*>(&rax17 + 4) = 0;
            }
        }
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 32)) > reinterpret_cast<unsigned char>(rax17)) {
        rsi18 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx5 + 40) + reinterpret_cast<unsigned char>(rax17) * 8);
        if (rsi18) 
            goto addr_404465_21;
    }
    rsi18 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx5 + 40) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 32)) * 8);
    if (!rsi18) {
        addr_404474_24:
    } else {
        addr_404465_21:
        genericResetAux_ruA1rosalqf8AhzZPPTBQg(r12_4, rsi18, rdx16);
        goto addr_404474_24;
    }
    addr_4009c0_25:
    goto memset;
    addr_404398_8:
    goto addr_4009c0_25;
    rsi19 = *reinterpret_cast<void***>(rsi7 + 16);
    *reinterpret_cast<int32_t*>(&rbx20) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx20) + 4) = 0;
    rdi21 = *reinterpret_cast<void***>(rsi19);
    rdx22 = reinterpret_cast<void**>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_11)) % reinterpret_cast<signed char>(rdi21));
    rax23 = reinterpret_cast<uint64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_11)) / reinterpret_cast<signed char>(rdi21));
    r12_24 = rax23;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax23) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax23 == 0))) {
        while (rdi25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi21) * rbx20), ++rbx20, genericReset(reinterpret_cast<uint64_t>(rdi25) + reinterpret_cast<uint64_t>(rbp12), rsi19, rdx22), r12_24 != rbx20) {
            rsi19 = *reinterpret_cast<void***>(r13_11 + 16);
            rdi21 = *reinterpret_cast<void***>(rsi19);
        }
    }
    addr_404339_29:
    return;
    goto addr_4009c0_25;
    rsi26 = *reinterpret_cast<void***>(rsi7 + 24);
    genericResetAux_ruA1rosalqf8AhzZPPTBQg(rdi8, rsi26, rdx);
    addr_404331_32:
    *rbp12 = reinterpret_cast<void**>(0);
    goto addr_404339_29;
    al27 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(rdi8, rsi7, rdx);
    if (!al27 && (reinterpret_cast<unsigned char>(*rdi8) > reinterpret_cast<unsigned char>(0xfff) && (rsi28 = *rdi8 + 0xfffffffffffffff0, rdx29 = *reinterpret_cast<void***>(*rdi8 + 0xfffffffffffffff0) + 0xfffffffffffffff8, *reinterpret_cast<void***>(*rdi8 + 0xfffffffffffffff0) = rdx29, reinterpret_cast<unsigned char>(rdx29) <= reinterpret_cast<unsigned char>(7)))) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi28);
        goto addr_404331_32;
    }
}

struct s15 {
    signed char[16] pad16;
    void** f16;
};

struct s16 {
    signed char[16] pad16;
    void** f16;
};

struct s17 {
    struct s17* f0;
    uint64_t f8;
};

struct s18 {
    struct s18* f0;
    uint64_t f8;
};

struct s20 {
    struct s20* f0;
    uint64_t f8;
};

struct s19 {
    void** f0;
    signed char[10407] pad10408;
    struct s20* f10408;
};

struct s21 {
    void** f0;
    signed char[4215] pad4216;
    void** f4216;
};

struct s22 {
    void** f0;
    signed char[4215] pad4216;
    void** f4216;
};

struct s23 {
    void** f0;
    signed char[4215] pad4216;
    void** f4216;
};

struct s24 {
    struct s24* f0;
    uint64_t f8;
};

int64_t munmap = 0x400a56;

void rawDealloc_DA62HrGC5sdfCED505KyyQ(void** rdi, void** rsi, void** rdx) {
    void** r10_4;
    void** rax5;
    void* rdx6;
    void** rdx7;
    void** r9_8;
    struct s15* rdi9;
    void** rdx10;
    void** rdx11;
    void** rdx12;
    struct s16* rax13;
    void** rsi14;
    int1_t zf15;
    void** r11_16;
    void** r9_17;
    void** rbx18;
    void** rbp19;
    void** r12_20;
    void** r13_21;
    void** r14_22;
    void** rsi23;
    void** rsi24;
    void** r14_25;
    void** rsi26;
    void** rsi27;
    void** r14_28;
    void** r13_29;
    void** rsi30;
    void** rsi31;
    void** r13_32;
    void** rsi33;
    void** rsi34;
    void** r13_35;
    void** r12_36;
    void** r14_37;
    void** rsi38;
    void** rsi39;
    void** r14_40;
    void** rsi41;
    void** rsi42;
    void** r14_43;
    void** r12_44;
    void** rsi45;
    void** rsi46;
    void** r12_47;
    void** rsi48;
    void** rsi49;
    void** r12_50;
    void** rbp51;
    void** r13_52;
    void** r14_53;
    void** rsi54;
    void** rsi55;
    void** r14_56;
    void** rsi57;
    void** rsi58;
    void** r14_59;
    void** r13_60;
    void** rsi61;
    void** rsi62;
    void** r13_63;
    void** rsi64;
    void** rsi65;
    void** r13_66;
    void** rbp67;
    void** r14_68;
    void** rsi69;
    void** rsi70;
    void** r14_71;
    void** rsi72;
    void** rsi73;
    void** r14_74;
    void** rbp75;
    void** rsi76;
    void** rsi77;
    void** rbp78;
    void** rsi79;
    void** rsi80;
    void** rbp81;
    void** r12_82;
    void** r13_83;
    void** r14_84;
    void** rsi85;
    void** rsi86;
    void** r14_87;
    void** rsi88;
    void** rsi89;
    void** r14_90;
    void** r13_91;
    void** rsi92;
    void** rsi93;
    void** r13_94;
    void** rsi95;
    void** rsi96;
    void** r13_97;
    void** r12_98;
    void** r14_99;
    void** rsi100;
    void** rsi101;
    void** r14_102;
    void** rsi103;
    void** rsi104;
    void** r14_105;
    void** r12_106;
    void** rsi107;
    void** rsi108;
    void** r12_109;
    void** rsi110;
    void** rsi111;
    void** r12_112;
    void** rbp113;
    void** r13_114;
    void** r14_115;
    void** rsi116;
    void** rsi117;
    void** r14_118;
    void** rsi119;
    void** rsi120;
    void** r14_121;
    void** r13_122;
    void** rsi123;
    void** rsi124;
    void** r13_125;
    void** rsi126;
    void** rsi127;
    void** r13_128;
    void** rbp129;
    void** r14_130;
    void** rsi131;
    void** rsi132;
    void** r14_133;
    void** rsi134;
    void** rsi135;
    void** r14_136;
    void** rbp137;
    void** rsi138;
    void** rsi139;
    void** rbp140;
    void** rsi141;
    void** rsi142;
    void** rsi143;
    void** r10_144;
    void** rbp145;
    void** rbx146;
    void** rax147;
    void** r12_148;
    uint64_t rdx149;
    int64_t rax150;
    struct s17* rax151;
    uint64_t rcx152;
    uint64_t rcx153;
    void** rax154;
    uint64_t rbx155;
    int64_t rdx156;
    uint64_t rcx157;
    struct s18* rdx158;
    void** r10_159;
    uint64_t r11_160;
    int64_t rdx161;
    struct s19* r14_162;
    struct s20* rdx163;
    uint64_t rcx164;
    uint64_t rcx165;
    uint64_t r12_166;
    uint64_t r13_167;
    struct s20* rdx168;
    int64_t rcx169;
    int64_t rdx170;
    int64_t rcx171;
    int64_t rdx172;
    int32_t ecx173;
    int64_t rsi174;
    uint64_t rcx175;
    struct s21* rdi176;
    void** rax177;
    uint32_t ecx178;
    int64_t rdi179;
    uint32_t ecx180;
    int64_t rax181;
    void** rax182;
    void** rdx183;
    int64_t rcx184;
    int64_t rsi185;
    int64_t rcx186;
    int64_t rsi187;
    int32_t ecx188;
    uint64_t rcx189;
    int64_t rdx190;
    struct s22* r8_191;
    void** rdi192;
    uint32_t ecx193;
    int64_t rdi194;
    uint32_t ecx195;
    int64_t rax196;
    uint64_t rcx197;
    uint64_t rsi198;
    void** rax199;
    void** rax200;
    int64_t rcx201;
    int64_t rdx202;
    int64_t rcx203;
    int64_t rdx204;
    int32_t ecx205;
    int64_t rsi206;
    uint64_t rcx207;
    struct s23* rdi208;
    void** rax209;
    uint32_t ecx210;
    int64_t rdi211;
    uint32_t ecx212;
    int64_t rax213;
    uint64_t rdx214;
    uint64_t rcx215;
    int64_t rax216;
    struct s24* rax217;
    uint64_t rcx218;
    uint64_t rdi219;
    uint64_t rdx220;

    r10_4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) & 0xfffffffffffff000);
    rax5 = *reinterpret_cast<void***>(r10_4 + 8);
    rdx6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(rdi + 0x2898)) - reinterpret_cast<unsigned char>(rax5));
    if (reinterpret_cast<signed char>(rax5) <= reinterpret_cast<signed char>(0xfc8)) {
        *reinterpret_cast<void**>(rdi + 0x2898) = rdx6;
        *reinterpret_cast<void***>(rsi + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rsi) = *reinterpret_cast<void***>(r10_4 + 32);
        rdx7 = *reinterpret_cast<void***>(r10_4 + 40);
        *reinterpret_cast<void***>(r10_4 + 32) = rsi;
        if (reinterpret_cast<signed char>(rdx7) < reinterpret_cast<signed char>(rax5)) {
            r9_8 = rax5 + 7;
            if (reinterpret_cast<signed char>(rax5) >= reinterpret_cast<signed char>(0)) {
                r9_8 = rax5;
            }
            rdi9 = reinterpret_cast<struct s15*>(reinterpret_cast<unsigned char>(rdi) + (reinterpret_cast<unsigned char>(r9_8) & 0xfffffffffffffff8));
            rdx10 = rdi9->f16;
            *reinterpret_cast<void***>(r10_4 + 16) = rdx10;
            if (rdx10) {
                *reinterpret_cast<void***>(rdx10 + 24) = r10_4;
            }
            rdi9->f16 = r10_4;
            *reinterpret_cast<void***>(r10_4 + 40) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_4 + 40)) + reinterpret_cast<unsigned char>(rax5));
            return;
        } else {
            rdx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx7) + reinterpret_cast<unsigned char>(rax5));
            *reinterpret_cast<void***>(r10_4 + 40) = rdx11;
            if (!reinterpret_cast<int1_t>(rdx11 == 0xfc8)) {
                return;
            } else {
                if (reinterpret_cast<signed char>(rax5) < reinterpret_cast<signed char>(0)) {
                    rax5 = rax5 + 7;
                }
                rdx12 = *reinterpret_cast<void***>(r10_4 + 16);
                rax13 = reinterpret_cast<struct s16*>((reinterpret_cast<unsigned char>(rax5) & 0xfffffffffffffff8) + reinterpret_cast<unsigned char>(rdi));
                if (r10_4 == rax13->f16) {
                    rax13->f16 = rdx12;
                    if (rdx12) {
                        *reinterpret_cast<void***>(rdx12 + 24) = reinterpret_cast<void**>(0);
                    }
                } else {
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(r10_4 + 24) + 16) = rdx12;
                    if (*reinterpret_cast<void***>(r10_4 + 16)) {
                        *reinterpret_cast<void***>(*reinterpret_cast<void***>(r10_4 + 16) + 24) = *reinterpret_cast<void***>(r10_4 + 24);
                    }
                }
                *reinterpret_cast<void***>(r10_4 + 8) = reinterpret_cast<void**>(0x1000);
                __asm__("pxor xmm0, xmm0");
                rsi14 = r10_4;
                __asm__("movaps [r10+0x10], xmm0");
            }
        }
    } else {
        zf15 = *reinterpret_cast<void***>(rdi + 0x30d8) == 0;
        *reinterpret_cast<void**>(rdi + 0x2898) = rdx6;
        if (zf15) {
            __asm__("movq xmm0, [rsp+0x8]");
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rdi+0x30d8], xmm0");
        }
        r11_16 = *reinterpret_cast<void***>(rdi + 0x30a8);
        r9_17 = rdi;
        *reinterpret_cast<void***>(rdi + 0x30b0) = rdi + 0x30d8;
        if (r11_16 != *reinterpret_cast<void***>(r11_16)) {
            rbx18 = r10_4 + 32;
            *reinterpret_cast<void***>(rdi + 0x30b8) = r11_16;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r11_16 + 16)) > reinterpret_cast<unsigned char>(rbx18)) {
                rbp19 = *reinterpret_cast<void***>(r11_16);
                if (rbp19 != *reinterpret_cast<void***>(rbp19)) {
                    *reinterpret_cast<void***>(rdi + 0x30b8) = rbp19;
                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp19 + 16))) {
                        r12_20 = *reinterpret_cast<void***>(rbp19);
                        if (r12_20 != *reinterpret_cast<void***>(r12_20)) {
                            *reinterpret_cast<void***>(rdi + 0x30b8) = r12_20;
                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_20 + 16))) {
                                r13_21 = *reinterpret_cast<void***>(r12_20);
                                if (r13_21 != *reinterpret_cast<void***>(r13_21)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = r13_21;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_21 + 16))) {
                                        r14_22 = *reinterpret_cast<void***>(r13_21);
                                        if (r14_22 != *reinterpret_cast<void***>(r14_22)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_22;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_22 + 16))) {
                                                rsi23 = *reinterpret_cast<void***>(r14_22);
                                                if (rsi23 != *reinterpret_cast<void***>(rsi23)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi23;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi23 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi23, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi23;
                                                        rsi24 = *reinterpret_cast<void***>(r14_22) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi24, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_22, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_22;
                                                r14_25 = *reinterpret_cast<void***>(r13_21);
                                                rsi26 = *reinterpret_cast<void***>(r14_25 + 8);
                                                if (rsi26 != *reinterpret_cast<void***>(rsi26)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi26;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi26 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi26, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi26;
                                                        rsi27 = *reinterpret_cast<void***>(r14_25 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi27, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_25 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_21, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = r13_21;
                                        r14_28 = *reinterpret_cast<void***>(r12_20);
                                        r13_29 = *reinterpret_cast<void***>(r14_28 + 8);
                                        if (r13_29 != *reinterpret_cast<void***>(r13_29)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r13_29;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_29 + 16))) {
                                                rsi30 = *reinterpret_cast<void***>(r13_29);
                                                if (rsi30 != *reinterpret_cast<void***>(rsi30)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi30;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi30 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi30, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi30;
                                                        rsi31 = *reinterpret_cast<void***>(r13_29) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi31, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_29, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r13_29;
                                                r13_32 = *reinterpret_cast<void***>(r14_28 + 8);
                                                rsi33 = *reinterpret_cast<void***>(r13_32 + 8);
                                                if (rsi33 != *reinterpret_cast<void***>(rsi33)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi33;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi33 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi33, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi33;
                                                        rsi34 = *reinterpret_cast<void***>(r13_32 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi34, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_32 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_28 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_20, rbx18);
                                }
                            } else {
                                *reinterpret_cast<void***>(rdi + 0x30b0) = r12_20;
                                r13_35 = *reinterpret_cast<void***>(rbp19);
                                r12_36 = *reinterpret_cast<void***>(r13_35 + 8);
                                if (r12_36 != *reinterpret_cast<void***>(r12_36)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = r12_36;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_36 + 16))) {
                                        r14_37 = *reinterpret_cast<void***>(r12_36);
                                        if (r14_37 != *reinterpret_cast<void***>(r14_37)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_37;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_37 + 16))) {
                                                rsi38 = *reinterpret_cast<void***>(r14_37);
                                                if (rsi38 != *reinterpret_cast<void***>(rsi38)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi38;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi38 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi38, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi38;
                                                        rsi39 = *reinterpret_cast<void***>(r14_37) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi39, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_37, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_37;
                                                r14_40 = *reinterpret_cast<void***>(r12_36);
                                                rsi41 = *reinterpret_cast<void***>(r14_40 + 8);
                                                if (rsi41 != *reinterpret_cast<void***>(rsi41)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi41;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi41 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi41, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi41;
                                                        rsi42 = *reinterpret_cast<void***>(r14_40 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi42, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_40 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_36, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = r12_36;
                                        r14_43 = *reinterpret_cast<void***>(r13_35 + 8);
                                        r12_44 = *reinterpret_cast<void***>(r14_43 + 8);
                                        if (r12_44 != *reinterpret_cast<void***>(r12_44)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r12_44;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_44 + 16))) {
                                                rsi45 = *reinterpret_cast<void***>(r12_44);
                                                if (rsi45 != *reinterpret_cast<void***>(rsi45)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi45;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi45 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi45, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi45;
                                                        rsi46 = *reinterpret_cast<void***>(r12_44) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi46, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_44, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r12_44;
                                                r12_47 = *reinterpret_cast<void***>(r14_43 + 8);
                                                rsi48 = *reinterpret_cast<void***>(r12_47 + 8);
                                                if (rsi48 != *reinterpret_cast<void***>(rsi48)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi48;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi48 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi48, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi48;
                                                        rsi49 = *reinterpret_cast<void***>(r12_47 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi49, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_47 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_43 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_35 + 8, rbx18);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp19, rbx18);
                        }
                    } else {
                        *reinterpret_cast<void***>(rdi + 0x30b0) = rbp19;
                        r12_50 = *reinterpret_cast<void***>(r11_16);
                        rbp51 = *reinterpret_cast<void***>(r12_50 + 8);
                        if (rbp51 != *reinterpret_cast<void***>(rbp51)) {
                            *reinterpret_cast<void***>(rdi + 0x30b8) = rbp51;
                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp51 + 16))) {
                                r13_52 = *reinterpret_cast<void***>(rbp51);
                                if (r13_52 != *reinterpret_cast<void***>(r13_52)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = r13_52;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_52 + 16))) {
                                        r14_53 = *reinterpret_cast<void***>(r13_52);
                                        if (r14_53 != *reinterpret_cast<void***>(r14_53)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_53;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_53 + 16))) {
                                                rsi54 = *reinterpret_cast<void***>(r14_53);
                                                if (rsi54 != *reinterpret_cast<void***>(rsi54)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi54;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi54 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi54, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi54;
                                                        rsi55 = *reinterpret_cast<void***>(r14_53) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi55, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_53, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_53;
                                                r14_56 = *reinterpret_cast<void***>(r13_52);
                                                rsi57 = *reinterpret_cast<void***>(r14_56 + 8);
                                                if (rsi57 != *reinterpret_cast<void***>(rsi57)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi57;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi57 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi57, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi57;
                                                        rsi58 = *reinterpret_cast<void***>(r14_56 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi58, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_56 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_52, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = r13_52;
                                        r14_59 = *reinterpret_cast<void***>(rbp51);
                                        r13_60 = *reinterpret_cast<void***>(r14_59 + 8);
                                        if (r13_60 != *reinterpret_cast<void***>(r13_60)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r13_60;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_60 + 16))) {
                                                rsi61 = *reinterpret_cast<void***>(r13_60);
                                                if (rsi61 != *reinterpret_cast<void***>(rsi61)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi61;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi61 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi61, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi61;
                                                        rsi62 = *reinterpret_cast<void***>(r13_60) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi62, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_60, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r13_60;
                                                r13_63 = *reinterpret_cast<void***>(r14_59 + 8);
                                                rsi64 = *reinterpret_cast<void***>(r13_63 + 8);
                                                if (rsi64 != *reinterpret_cast<void***>(rsi64)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi64;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi64 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi64, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi64;
                                                        rsi65 = *reinterpret_cast<void***>(r13_63 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi65, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_63 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_59 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp51, rbx18);
                                }
                            } else {
                                *reinterpret_cast<void***>(rdi + 0x30b0) = rbp51;
                                r13_66 = *reinterpret_cast<void***>(r12_50 + 8);
                                rbp67 = *reinterpret_cast<void***>(r13_66 + 8);
                                if (rbp67 != *reinterpret_cast<void***>(rbp67)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rbp67;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp67 + 16))) {
                                        r14_68 = *reinterpret_cast<void***>(rbp67);
                                        if (r14_68 != *reinterpret_cast<void***>(r14_68)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_68;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_68 + 16))) {
                                                rsi69 = *reinterpret_cast<void***>(r14_68);
                                                if (rsi69 != *reinterpret_cast<void***>(rsi69)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi69;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi69 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi69, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi69;
                                                        rsi70 = *reinterpret_cast<void***>(r14_68) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi70, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_68, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_68;
                                                r14_71 = *reinterpret_cast<void***>(rbp67);
                                                rsi72 = *reinterpret_cast<void***>(r14_71 + 8);
                                                if (rsi72 != *reinterpret_cast<void***>(rsi72)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi72;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi72 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi72, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi72;
                                                        rsi73 = *reinterpret_cast<void***>(r14_71 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi73, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_71 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp67, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rbp67;
                                        r14_74 = *reinterpret_cast<void***>(r13_66 + 8);
                                        rbp75 = *reinterpret_cast<void***>(r14_74 + 8);
                                        if (rbp75 != *reinterpret_cast<void***>(rbp75)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = rbp75;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp75 + 16))) {
                                                rsi76 = *reinterpret_cast<void***>(rbp75);
                                                if (rsi76 != *reinterpret_cast<void***>(rsi76)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi76;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi76 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi76, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi76;
                                                        rsi77 = *reinterpret_cast<void***>(rbp75) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi77, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp75, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = rbp75;
                                                rbp78 = *reinterpret_cast<void***>(r14_74 + 8);
                                                rsi79 = *reinterpret_cast<void***>(rbp78 + 8);
                                                if (rsi79 != *reinterpret_cast<void***>(rsi79)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi79;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi79 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi79, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi79;
                                                        rsi80 = *reinterpret_cast<void***>(rbp78 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi80, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp78 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_74 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_66 + 8, rbx18);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_50 + 8, rbx18);
                        }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r11_16, rbx18);
                }
            } else {
                *reinterpret_cast<void***>(rdi + 0x30b0) = r11_16;
                rbp81 = *reinterpret_cast<void***>(r11_16 + 8);
                if (rbp81 != *reinterpret_cast<void***>(rbp81)) {
                    *reinterpret_cast<void***>(rdi + 0x30b8) = rbp81;
                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp81 + 16))) {
                        r12_82 = *reinterpret_cast<void***>(rbp81);
                        if (r12_82 != *reinterpret_cast<void***>(r12_82)) {
                            *reinterpret_cast<void***>(rdi + 0x30b8) = r12_82;
                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_82 + 16))) {
                                r13_83 = *reinterpret_cast<void***>(r12_82);
                                if (r13_83 != *reinterpret_cast<void***>(r13_83)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = r13_83;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_83 + 16))) {
                                        r14_84 = *reinterpret_cast<void***>(r13_83);
                                        if (r14_84 != *reinterpret_cast<void***>(r14_84)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_84;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_84 + 16))) {
                                                rsi85 = *reinterpret_cast<void***>(r14_84);
                                                if (rsi85 != *reinterpret_cast<void***>(rsi85)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi85;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi85 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi85, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi85;
                                                        rsi86 = *reinterpret_cast<void***>(r14_84) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi86, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_84, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_84;
                                                r14_87 = *reinterpret_cast<void***>(r13_83);
                                                rsi88 = *reinterpret_cast<void***>(r14_87 + 8);
                                                if (rsi88 != *reinterpret_cast<void***>(rsi88)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi88;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi88 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi88, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi88;
                                                        rsi89 = *reinterpret_cast<void***>(r14_87 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi89, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_87 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_83, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = r13_83;
                                        r14_90 = *reinterpret_cast<void***>(r12_82);
                                        r13_91 = *reinterpret_cast<void***>(r14_90 + 8);
                                        if (r13_91 != *reinterpret_cast<void***>(r13_91)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r13_91;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_91 + 16))) {
                                                rsi92 = *reinterpret_cast<void***>(r13_91);
                                                if (rsi92 != *reinterpret_cast<void***>(rsi92)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi92;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi92 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi92, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi92;
                                                        rsi93 = *reinterpret_cast<void***>(r13_91) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi93, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_91, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r13_91;
                                                r13_94 = *reinterpret_cast<void***>(r14_90 + 8);
                                                rsi95 = *reinterpret_cast<void***>(r13_94 + 8);
                                                if (rsi95 != *reinterpret_cast<void***>(rsi95)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi95;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi95 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi95, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi95;
                                                        rsi96 = *reinterpret_cast<void***>(r13_94 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi96, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_94 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_90 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_82, rbx18);
                                }
                            } else {
                                *reinterpret_cast<void***>(rdi + 0x30b0) = r12_82;
                                r13_97 = *reinterpret_cast<void***>(rbp81);
                                r12_98 = *reinterpret_cast<void***>(r13_97 + 8);
                                if (r12_98 != *reinterpret_cast<void***>(r12_98)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = r12_98;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_98 + 16))) {
                                        r14_99 = *reinterpret_cast<void***>(r12_98);
                                        if (r14_99 != *reinterpret_cast<void***>(r14_99)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_99;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_99 + 16))) {
                                                rsi100 = *reinterpret_cast<void***>(r14_99);
                                                if (rsi100 != *reinterpret_cast<void***>(rsi100)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi100;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi100 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi100, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi100;
                                                        rsi101 = *reinterpret_cast<void***>(r14_99) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi101, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_99, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_99;
                                                r14_102 = *reinterpret_cast<void***>(r12_98);
                                                rsi103 = *reinterpret_cast<void***>(r14_102 + 8);
                                                if (rsi103 != *reinterpret_cast<void***>(rsi103)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi103;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi103 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi103, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi103;
                                                        rsi104 = *reinterpret_cast<void***>(r14_102 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi104, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_102 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_98, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = r12_98;
                                        r14_105 = *reinterpret_cast<void***>(r13_97 + 8);
                                        r12_106 = *reinterpret_cast<void***>(r14_105 + 8);
                                        if (r12_106 != *reinterpret_cast<void***>(r12_106)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r12_106;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_106 + 16))) {
                                                rsi107 = *reinterpret_cast<void***>(r12_106);
                                                if (rsi107 != *reinterpret_cast<void***>(rsi107)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi107;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi107 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi107, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi107;
                                                        rsi108 = *reinterpret_cast<void***>(r12_106) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi108, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_106, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r12_106;
                                                r12_109 = *reinterpret_cast<void***>(r14_105 + 8);
                                                rsi110 = *reinterpret_cast<void***>(r12_109 + 8);
                                                if (rsi110 != *reinterpret_cast<void***>(rsi110)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi110;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi110 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi110, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi110;
                                                        rsi111 = *reinterpret_cast<void***>(r12_109 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi111, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_109 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_105 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_97 + 8, rbx18);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp81, rbx18);
                        }
                    } else {
                        *reinterpret_cast<void***>(rdi + 0x30b0) = rbp81;
                        r12_112 = *reinterpret_cast<void***>(r11_16 + 8);
                        rbp113 = *reinterpret_cast<void***>(r12_112 + 8);
                        if (rbp113 != *reinterpret_cast<void***>(rbp113)) {
                            *reinterpret_cast<void***>(rdi + 0x30b8) = rbp113;
                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp113 + 16))) {
                                r13_114 = *reinterpret_cast<void***>(rbp113);
                                if (r13_114 != *reinterpret_cast<void***>(r13_114)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = r13_114;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_114 + 16))) {
                                        r14_115 = *reinterpret_cast<void***>(r13_114);
                                        if (r14_115 != *reinterpret_cast<void***>(r14_115)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_115;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_115 + 16))) {
                                                rsi116 = *reinterpret_cast<void***>(r14_115);
                                                if (rsi116 != *reinterpret_cast<void***>(rsi116)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi116;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi116 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi116, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi116;
                                                        rsi117 = *reinterpret_cast<void***>(r14_115) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi117, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_115, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_115;
                                                r14_118 = *reinterpret_cast<void***>(r13_114);
                                                rsi119 = *reinterpret_cast<void***>(r14_118 + 8);
                                                if (rsi119 != *reinterpret_cast<void***>(rsi119)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi119;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi119 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi119, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi119;
                                                        rsi120 = *reinterpret_cast<void***>(r14_118 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi120, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_118 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_114, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = r13_114;
                                        r14_121 = *reinterpret_cast<void***>(rbp113);
                                        r13_122 = *reinterpret_cast<void***>(r14_121 + 8);
                                        if (r13_122 != *reinterpret_cast<void***>(r13_122)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r13_122;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_122 + 16))) {
                                                rsi123 = *reinterpret_cast<void***>(r13_122);
                                                if (rsi123 != *reinterpret_cast<void***>(rsi123)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi123;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi123 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi123, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi123;
                                                        rsi124 = *reinterpret_cast<void***>(r13_122) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi124, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_122, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r13_122;
                                                r13_125 = *reinterpret_cast<void***>(r14_121 + 8);
                                                rsi126 = *reinterpret_cast<void***>(r13_125 + 8);
                                                if (rsi126 != *reinterpret_cast<void***>(rsi126)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi126;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi126 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi126, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi126;
                                                        rsi127 = *reinterpret_cast<void***>(r13_125 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi127, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_125 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_121 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp113, rbx18);
                                }
                            } else {
                                *reinterpret_cast<void***>(rdi + 0x30b0) = rbp113;
                                r13_128 = *reinterpret_cast<void***>(r12_112 + 8);
                                rbp129 = *reinterpret_cast<void***>(r13_128 + 8);
                                if (rbp129 != *reinterpret_cast<void***>(rbp129)) {
                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rbp129;
                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp129 + 16))) {
                                        r14_130 = *reinterpret_cast<void***>(rbp129);
                                        if (r14_130 != *reinterpret_cast<void***>(r14_130)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = r14_130;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_130 + 16))) {
                                                rsi131 = *reinterpret_cast<void***>(r14_130);
                                                if (rsi131 != *reinterpret_cast<void***>(rsi131)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi131;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi131 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi131, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi131;
                                                        rsi132 = *reinterpret_cast<void***>(r14_130) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi132, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_130, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = r14_130;
                                                r14_133 = *reinterpret_cast<void***>(rbp129);
                                                rsi134 = *reinterpret_cast<void***>(r14_133 + 8);
                                                if (rsi134 != *reinterpret_cast<void***>(rsi134)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi134;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi134 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi134, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi134;
                                                        rsi135 = *reinterpret_cast<void***>(r14_133 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi135, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_133 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp129, rbx18);
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rbp129;
                                        r14_136 = *reinterpret_cast<void***>(r13_128 + 8);
                                        rbp137 = *reinterpret_cast<void***>(r14_136 + 8);
                                        if (rbp137 != *reinterpret_cast<void***>(rbp137)) {
                                            *reinterpret_cast<void***>(rdi + 0x30b8) = rbp137;
                                            if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp137 + 16))) {
                                                rsi138 = *reinterpret_cast<void***>(rbp137);
                                                if (rsi138 != *reinterpret_cast<void***>(rsi138)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi138;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi138 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi138, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi138;
                                                        rsi139 = *reinterpret_cast<void***>(rbp137) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi139, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp137, rbx18);
                                                }
                                            } else {
                                                *reinterpret_cast<void***>(rdi + 0x30b0) = rbp137;
                                                rbp140 = *reinterpret_cast<void***>(r14_136 + 8);
                                                rsi141 = *reinterpret_cast<void***>(rbp140 + 8);
                                                if (rsi141 != *reinterpret_cast<void***>(rsi141)) {
                                                    *reinterpret_cast<void***>(rdi + 0x30b8) = rsi141;
                                                    if (reinterpret_cast<unsigned char>(rbx18) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi141 + 16))) {
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi141, rbx18);
                                                    } else {
                                                        *reinterpret_cast<void***>(rdi + 0x30b0) = rsi141;
                                                        rsi142 = *reinterpret_cast<void***>(rbp140 + 8) + 8;
                                                        del_C66us4UEWCXp84lHW4tDLA(rdi, rsi142, rbx18);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, rbp140 + 8, rbx18);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r14_136 + 8, rbx18);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r13_128 + 8, rbx18);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r12_112 + 8, rbx18);
                        }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r11_16 + 8, rbx18);
                }
            }
            del_C66us4UEWCXp84lHW4tDLA_part_8(r9_17, r9_17 + 0x30a8, rbx18);
        }
        rsi143 = *reinterpret_cast<void***>(r10_4 + 8);
        if (reinterpret_cast<signed char>(rsi143) > reinterpret_cast<signed char>(0x3f000000)) 
            goto addr_403110_274; else 
            goto addr_4030c1_275;
    }
    addr_402770_276:
    r10_144 = rsi14;
    rbp145 = rdi;
    rbx146 = rsi14;
    *reinterpret_cast<uint64_t*>(rdi + 0x2890) = *reinterpret_cast<uint64_t*>(rdi + 0x2890) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi14 + 8));
    rax147 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi14)) & 0xfffffffffffffffe);
    *reinterpret_cast<void***>(rsi14) = rax147;
    if (!rax147) 
        goto addr_40279c_277;
    r12_148 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi14) - reinterpret_cast<unsigned char>(rax147));
    rdx149 = reinterpret_cast<unsigned char>(r12_148) >> 21;
    *reinterpret_cast<uint32_t*>(&rax150) = *reinterpret_cast<unsigned char*>(&rdx149);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax150) + 4) = 0;
    rax151 = *reinterpret_cast<struct s17**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(rax150 * 8) + 0x28a8);
    if (!rax151) {
        goto addr_40279c_277;
    }
    do {
        if (rdx149 == rax151->f8) 
            break;
        rax151 = rax151->f0;
    } while (rax151);
    goto addr_40279c_277;
    rcx152 = reinterpret_cast<unsigned char>(r12_148) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx153) = *reinterpret_cast<uint32_t*>(&rcx152) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx153) + 4) = 0;
    if (!(*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax151) + (rcx153 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx153)) || (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_148)) & 1 || (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_148 + 8)) <= reinterpret_cast<signed char>(0xfc8) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_148 + 8)) > reinterpret_cast<signed char>(0x3effffff)))) {
        addr_40279c_277:
        rax154 = *reinterpret_cast<void***>(rbx146 + 8);
    } else {
        removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(rbp145, r12_148);
        rbx155 = reinterpret_cast<unsigned char>(rbx146) >> 21;
        rax154 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx146 + 8)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_148 + 8)));
        *reinterpret_cast<uint32_t*>(&rdx156) = *reinterpret_cast<unsigned char*>(&rbx155);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx156) + 4) = 0;
        rcx157 = reinterpret_cast<unsigned char>(rbx146) >> 12;
        *reinterpret_cast<void***>(r12_148 + 8) = rax154;
        rdx158 = *reinterpret_cast<struct s18**>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rdx156 * 8) + 0x28a8);
        if (rdx158) {
            do {
                if (rbx155 == rdx158->f8) 
                    goto addr_402ace_285;
                rdx158 = rdx158->f0;
            } while (rdx158);
            goto addr_402af0_287;
        } else {
            goto addr_402af0_287;
        }
    }
    addr_4027a0_289:
    r10_159 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_144) + reinterpret_cast<unsigned char>(rax154));
    r11_160 = reinterpret_cast<unsigned char>(r10_159) >> 21;
    *reinterpret_cast<uint32_t*>(&rdx161) = *reinterpret_cast<unsigned char*>(&r11_160);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx161) + 4) = 0;
    r14_162 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rdx161 * 8));
    rdx163 = r14_162->f10408;
    if (!rdx163) 
        goto addr_4027e2_290;
    if (rdx163->f8 != r11_160) {
        do {
            rdx163 = rdx163->f0;
            if (!rdx163) 
                goto addr_4027e2_290;
        } while (r11_160 != rdx163->f8);
    }
    rcx164 = reinterpret_cast<unsigned char>(r10_159) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx165) = *reinterpret_cast<uint32_t*>(&rcx164) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx165) + 4) = 0;
    r12_166 = 1 << *reinterpret_cast<unsigned char*>(&rcx165);
    r13_167 = rcx165 >> 6;
    if (!(*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx163) + r13_167 * 8 + 16) & r12_166)) 
        goto addr_4027e2_290;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_159)) & 1) 
        goto addr_4027e2_290;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r10_159 + 8)) <= reinterpret_cast<signed char>(0xfc8)) 
        goto addr_4027e2_290;
    if (reinterpret_cast<signed char>(rax154) > reinterpret_cast<signed char>(0x3effffff)) 
        goto addr_4027e2_290;
    removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(rbp145, r10_159);
    rax154 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_159 + 8)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx146 + 8)));
    *reinterpret_cast<void***>(rbx146 + 8) = rax154;
    rdx168 = r14_162->f10408;
    if (!rdx168) {
        addr_402912_300:
        if (reinterpret_cast<signed char>(rax154) <= reinterpret_cast<signed char>(0x3f000000)) {
            addr_4027e2_290:
            *reinterpret_cast<uint32_t*>(&rcx169) = *reinterpret_cast<uint32_t*>(&rax154);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx169) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rax154) > 0xffff) {
                addr_4029e0_301:
                if (*reinterpret_cast<uint32_t*>(&rax154) > 0xffffff) {
                    *reinterpret_cast<uint32_t*>(&rcx169) = *reinterpret_cast<uint32_t*>(&rcx169) >> 24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx169) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx170) = 24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx170) + 4) = 0;
                } else {
                    *reinterpret_cast<uint32_t*>(&rcx169) = *reinterpret_cast<uint32_t*>(&rcx169) >> 16;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx169) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx170) = 16;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx170) + 4) = 0;
                }
            } else {
                addr_4027ef_304:
                *reinterpret_cast<int32_t*>(&rdx170) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx170) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rax154) > 0xff) {
                    *reinterpret_cast<uint32_t*>(&rcx169) = *reinterpret_cast<uint32_t*>(&rcx169) >> 8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx169) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx170) = 8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx170) + 4) = 0;
                }
            }
        } else {
            goto addr_402920_307;
        }
    } else {
        if (rdx168->f8 != r11_160) {
            do {
                rdx168 = rdx168->f0;
                if (!rdx168) 
                    goto addr_402912_300;
            } while (r11_160 != rdx168->f8);
            goto addr_402bb0_311;
        } else {
            goto addr_402bb0_311;
        }
    }
    rcx171 = *reinterpret_cast<signed char*>(rcx169 + 0x40a9e0);
    *reinterpret_cast<void***>(rbx146 + 24) = reinterpret_cast<void**>(0);
    rdx172 = rdx170 + rcx171;
    ecx173 = static_cast<int32_t>(rdx172 - 5);
    rsi174 = rdx172 - 6;
    rcx175 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rax154) >> *reinterpret_cast<signed char*>(&ecx173)) - 32;
    rdi176 = reinterpret_cast<struct s21*>(rbp145 + ((rsi174 << 5) + rcx175) * 8);
    rax177 = rdi176->f4216;
    *reinterpret_cast<void***>(rbx146 + 16) = rax177;
    if (rax177) {
        *reinterpret_cast<void***>(rax177 + 24) = rbx146;
    }
    rdi176->f4216 = rbx146;
    ecx178 = *reinterpret_cast<uint32_t*>(&rcx175) & 31;
    rdi179 = 1 << *reinterpret_cast<unsigned char*>(&ecx178);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rdx172 * 4) + 0xffc) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rdx172 * 4) + 0xffc) | *reinterpret_cast<uint32_t*>(&rdi179);
    ecx180 = *reinterpret_cast<uint32_t*>(&rsi174) & 31;
    rax181 = 1 << *reinterpret_cast<unsigned char*>(&ecx180);
    *reinterpret_cast<uint32_t*>(rbp145 + 0x1010) = *reinterpret_cast<uint32_t*>(rbp145 + 0x1010) | *reinterpret_cast<uint32_t*>(&rax181);
    return;
    addr_402920_307:
    rax182 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(rbp145, rbx146, 0x3f000000);
    rdx183 = *reinterpret_cast<void***>(rax182 + 8);
    *reinterpret_cast<uint32_t*>(&rcx184) = *reinterpret_cast<uint32_t*>(&rdx183);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx184) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx183) <= 0xffff) {
        *reinterpret_cast<int32_t*>(&rsi185) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi185) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx183) > 0xff) {
            *reinterpret_cast<int32_t*>(&rsi185) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi185) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx184) = *reinterpret_cast<uint32_t*>(&rdx183) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx184) + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rdx183) <= 0xffffff) {
            *reinterpret_cast<uint32_t*>(&rcx184) = *reinterpret_cast<uint32_t*>(&rcx184) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx184) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi185) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi185) + 4) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rsi185) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi185) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx184) = *reinterpret_cast<uint32_t*>(&rdx183) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx184) + 4) = 0;
        }
    }
    rcx186 = *reinterpret_cast<signed char*>(rcx184 + 0x40a9e0);
    *reinterpret_cast<void***>(rax182 + 24) = reinterpret_cast<void**>(0);
    rsi187 = rsi185 + rcx186;
    ecx188 = static_cast<int32_t>(rsi187 - 5);
    rcx189 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx183) >> *reinterpret_cast<signed char*>(&ecx188)) - 32;
    rdx190 = rsi187 - 6;
    r8_191 = reinterpret_cast<struct s22*>(rbp145 + ((rdx190 << 5) + rcx189) * 8);
    rdi192 = r8_191->f4216;
    *reinterpret_cast<void***>(rax182 + 16) = rdi192;
    if (rdi192) {
        *reinterpret_cast<void***>(rdi192 + 24) = rax182;
    }
    r8_191->f4216 = rax182;
    ecx193 = *reinterpret_cast<uint32_t*>(&rcx189) & 31;
    rdi194 = 1 << *reinterpret_cast<unsigned char*>(&ecx193);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rsi187 * 4) + 0xffc) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rsi187 * 4) + 0xffc) | *reinterpret_cast<uint32_t*>(&rdi194);
    ecx195 = *reinterpret_cast<uint32_t*>(&rdx190) & 31;
    rax196 = 1 << *reinterpret_cast<unsigned char*>(&ecx195);
    *reinterpret_cast<uint32_t*>(rbp145 + 0x1010) = *reinterpret_cast<uint32_t*>(rbp145 + 0x1010) | *reinterpret_cast<uint32_t*>(&rax196);
    rax154 = *reinterpret_cast<void***>(rbx146 + 8);
    *reinterpret_cast<uint32_t*>(&rcx169) = *reinterpret_cast<uint32_t*>(&rax154);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx169) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax154) <= 0xffff) 
        goto addr_4027ef_304;
    goto addr_4029e0_301;
    addr_402bb0_311:
    *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx168) + r13_167 * 8 + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx168) + r13_167 * 8 + 16) & ~r12_166;
    rax154 = *reinterpret_cast<void***>(rbx146 + 8);
    if (reinterpret_cast<signed char>(rax154) <= reinterpret_cast<signed char>(0x3f000000)) 
        goto addr_4027e2_290;
    goto addr_402920_307;
    addr_402ace_285:
    *reinterpret_cast<uint32_t*>(&rcx197) = *reinterpret_cast<uint32_t*>(&rcx157) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx197) + 4) = 0;
    rsi198 = rcx197 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx158) + rsi198 * 8 + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx158) + rsi198 * 8 + 16) & reinterpret_cast<uint64_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx197)));
    rax154 = *reinterpret_cast<void***>(r12_148 + 8);
    addr_402af0_287:
    if (reinterpret_cast<signed char>(rax154) <= reinterpret_cast<signed char>(0x3f000000)) {
        r10_144 = r12_148;
        rbx146 = r12_148;
        goto addr_4027a0_289;
    } else {
        rax199 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(rbp145, r12_148, 0x3f000000);
        rbx146 = rax199;
        rax200 = *reinterpret_cast<void***>(r12_148 + 8);
        *reinterpret_cast<uint32_t*>(&rcx201) = *reinterpret_cast<uint32_t*>(&rax200);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax200) > 0xffff) {
            if (*reinterpret_cast<uint32_t*>(&rax200) > 0xffffff) {
                *reinterpret_cast<int32_t*>(&rdx202) = 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx202) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rcx201) = *reinterpret_cast<uint32_t*>(&rax200) >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
            } else {
                *reinterpret_cast<uint32_t*>(&rcx201) = *reinterpret_cast<uint32_t*>(&rcx201) >> 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rdx202) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx202) + 4) = 0;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdx202) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx202) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rax200) > 0xff) {
                *reinterpret_cast<int32_t*>(&rdx202) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx202) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rcx201) = *reinterpret_cast<uint32_t*>(&rax200) >> 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
            }
        }
        rcx203 = *reinterpret_cast<signed char*>(rcx201 + 0x40a9e0);
        *reinterpret_cast<void***>(r12_148 + 24) = reinterpret_cast<void**>(0);
        rdx204 = rdx202 + rcx203;
        ecx205 = static_cast<int32_t>(rdx204 - 5);
        rsi206 = rdx204 - 6;
        rcx207 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rax200) >> *reinterpret_cast<signed char*>(&ecx205)) - 32;
        rdi208 = reinterpret_cast<struct s23*>(rbp145 + ((rsi206 << 5) + rcx207) * 8);
        rax209 = rdi208->f4216;
        *reinterpret_cast<void***>(r12_148 + 16) = rax209;
        if (rax209) {
            *reinterpret_cast<void***>(rax209 + 24) = r12_148;
        }
        rdi208->f4216 = r12_148;
        ecx210 = *reinterpret_cast<uint32_t*>(&rcx207) & 31;
        r10_144 = rbx146;
        rdi211 = 1 << *reinterpret_cast<unsigned char*>(&ecx210);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rdx204 * 4) + 0xffc) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp145) + reinterpret_cast<uint64_t>(rdx204 * 4) + 0xffc) | *reinterpret_cast<uint32_t*>(&rdi211);
        ecx212 = *reinterpret_cast<uint32_t*>(&rsi206) & 31;
        rax213 = 1 << *reinterpret_cast<unsigned char*>(&ecx212);
        *reinterpret_cast<uint32_t*>(rbp145 + 0x1010) = *reinterpret_cast<uint32_t*>(rbp145 + 0x1010) | *reinterpret_cast<uint32_t*>(&rax213);
        rax154 = *reinterpret_cast<void***>(rbx146 + 8);
        goto addr_4027a0_289;
    }
    addr_403110_274:
    rdx214 = reinterpret_cast<unsigned char>(r10_4) >> 21;
    rcx215 = reinterpret_cast<unsigned char>(r10_4) >> 12;
    *reinterpret_cast<uint32_t*>(&rax216) = *reinterpret_cast<unsigned char*>(&rdx214);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax216) + 4) = 0;
    rax217 = *reinterpret_cast<struct s24**>(reinterpret_cast<unsigned char>(r9_17) + reinterpret_cast<uint64_t>(rax216 * 8) + 0x28a8);
    if (rax217) {
        do {
            if (rdx214 == rax217->f8) 
                break;
            rax217 = rax217->f0;
        } while (rax217);
        goto addr_40315b_338;
    } else {
        goto addr_40315b_338;
    }
    *reinterpret_cast<uint32_t*>(&rcx218) = *reinterpret_cast<uint32_t*>(&rcx215) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx218) + 4) = 0;
    rdi219 = rcx218 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax217) + rdi219 * 8 + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax217) + rdi219 * 8 + 16) & reinterpret_cast<uint64_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx218)));
    addr_40315b_338:
    rdx220 = *reinterpret_cast<uint64_t*>(r9_17 + 0x2880);
    if (*reinterpret_cast<int64_t*>(r9_17 + 0x2888) >= *reinterpret_cast<int64_t*>(r9_17 + 0x2880)) {
        rdx220 = *reinterpret_cast<uint64_t*>(r9_17 + 0x2888);
    }
    *reinterpret_cast<uint64_t*>(r9_17 + 0x2880) = *reinterpret_cast<uint64_t*>(r9_17 + 0x2880) - reinterpret_cast<unsigned char>(rsi143);
    *reinterpret_cast<uint64_t*>(r9_17 + 0x2888) = rdx220;
    goto munmap;
    addr_4030c1_275:
    rsi14 = r10_4;
    rdi = r9_17;
    goto addr_402770_276;
}

struct s25 {
    signed char[16] pad16;
    void** f16;
};

struct s26 {
    void** f0;
    signed char[10407] pad10408;
    void** f10408;
};

void** rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void* rax6;
    void** r13_7;
    void** rbx8;
    struct s25* rbp9;
    void** rdx10;
    void** rax11;
    void** rax12;
    void** r12_13;
    void** rax14;
    void** r13_15;
    void** rax16;
    void** rbp17;
    void** rax18;
    void** rax19;
    int64_t v20;
    void** r12_21;
    uint64_t r14_22;
    int64_t rax23;
    struct s26* r15_24;
    void** rax25;
    void** rax26;
    uint64_t rcx27;
    uint64_t rcx28;
    uint64_t rsi29;
    void** rax30;

    rax6 = reinterpret_cast<void*>(rsi + 7);
    r13_7 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax6) & 0xfffffffffffffff8);
    rbx8 = rdi;
    if (reinterpret_cast<signed char>(r13_7) <= reinterpret_cast<signed char>(0xfc8)) {
        rbp9 = reinterpret_cast<struct s25*>(reinterpret_cast<unsigned char>(rdi) + (reinterpret_cast<uint64_t>(rax6) & 0xfffffffffffffff8));
        rdx10 = rbp9->f16;
        if (!rdx10) {
            rax11 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(rdi, 0x1000);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<void***>(rax11 + 32) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rax11 + 8) = r13_7;
            *reinterpret_cast<void***>(rax11 + 48) = r13_7;
            __asm__("movups [rdx+0x10], xmm0");
            *reinterpret_cast<void***>(rax11 + 40) = reinterpret_cast<void**>(0xfc8 - reinterpret_cast<unsigned char>(r13_7));
            rax12 = rbp9->f16;
            *reinterpret_cast<void***>(rax11 + 16) = rax12;
            if (rax12) {
                *reinterpret_cast<void***>(rax12 + 24) = rax11;
            }
            rbp9->f16 = rax11;
            r12_13 = rax11 + 56;
            if (reinterpret_cast<signed char>(r13_7) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax11 + 40))) 
                goto addr_40254c_6;
        } else {
            r12_13 = *reinterpret_cast<void***>(rdx10 + 32);
            if (!r12_13) {
                r12_13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx10) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx10 + 48)) + 56);
                *reinterpret_cast<void***>(rdx10 + 48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx10 + 48)) + reinterpret_cast<unsigned char>(r13_7));
            } else {
                *reinterpret_cast<void***>(rdx10 + 32) = *reinterpret_cast<void***>(r12_13);
            }
            rax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx10 + 40)) - reinterpret_cast<unsigned char>(r13_7));
            *reinterpret_cast<void***>(rdx10 + 40) = rax14;
            if (reinterpret_cast<signed char>(rax14) < reinterpret_cast<signed char>(r13_7)) 
                goto addr_4023ba_11;
        }
    } else {
        r13_15 = rsi + 32;
        if (reinterpret_cast<signed char>(r13_15) <= reinterpret_cast<signed char>(0x3f000000)) {
            rax16 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(rdi, r13_15);
            rbp17 = rax16;
            r12_13 = rbp17 + 32;
            if (!*reinterpret_cast<void***>(rbx8 + 0x30a8)) 
                goto addr_4024b1_14; else 
                goto addr_402343_15;
        }
        *reinterpret_cast<int32_t*>(&r8) = -1;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        rax18 = fun_4009a0();
        rbp17 = rax18;
        if (reinterpret_cast<unsigned char>(rax18 + 0xffffffffffffffff) > reinterpret_cast<unsigned char>(0xfffffffffffffffd)) {
            raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
            rax19 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0, r13_15 + 16, 3, 34, 0xffffffff);
            *reinterpret_cast<void***>(rax19 + 8) = reinterpret_cast<void**>(1);
            goto v20;
        }
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<uint64_t*>(rbx8 + 0x2880) = *reinterpret_cast<uint64_t*>(rbx8 + 0x2880) + reinterpret_cast<unsigned char>(r13_15);
        r12_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp17) >> 21);
        __asm__("movups [rbp+0x10], xmm0");
        r14_22 = reinterpret_cast<unsigned char>(rbp17) >> 12;
        *reinterpret_cast<uint32_t*>(&rax23) = *reinterpret_cast<unsigned char*>(&r12_21);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        *reinterpret_cast<void***>(rbp17 + 8) = r13_15;
        r15_24 = reinterpret_cast<struct s26*>(reinterpret_cast<unsigned char>(rbx8) + reinterpret_cast<uint64_t>(rax23 * 8));
        *reinterpret_cast<void***>(rbp17) = reinterpret_cast<void**>(1);
        rax25 = r15_24->f10408;
        if (rax25) 
            goto addr_40247c_19; else 
            goto addr_402463_20;
    }
    addr_4023e9_21:
    *reinterpret_cast<void**>(rbx8 + 0x2898) = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(rbx8 + 0x2898)) + reinterpret_cast<unsigned char>(r13_7));
    addr_402364_22:
    return r12_13;
    addr_40254c_6:
    rax26 = *reinterpret_cast<void***>(rax11 + 16);
    goto addr_402550_23;
    addr_4023ba_11:
    rax26 = *reinterpret_cast<void***>(rdx10 + 16);
    if (rdx10 == rbp9->f16) {
        addr_402550_23:
        rbp9->f16 = rax26;
        if (rax26) {
            *reinterpret_cast<void***>(rax26 + 24) = reinterpret_cast<void**>(0);
        }
    } else {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx10 + 24) + 16) = rax26;
        if (*reinterpret_cast<void***>(rdx10 + 16)) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx10 + 16) + 24) = *reinterpret_cast<void***>(rdx10 + 24);
        }
    }
    __asm__("pxor xmm0, xmm0");
    __asm__("movups [rdx+0x10], xmm0");
    goto addr_4023e9_21;
    do {
        addr_40247c_19:
        if (r12_21 == *reinterpret_cast<void***>(rax25 + 8)) 
            break;
        rax25 = *reinterpret_cast<void***>(rax25);
    } while (rax25);
    goto addr_402588_29;
    addr_402482_30:
    rcx27 = r14_22;
    r12_13 = rbp17 + 32;
    *reinterpret_cast<uint32_t*>(&rcx28) = *reinterpret_cast<uint32_t*>(&rcx27) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    rsi29 = rcx28 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax25 + rsi29 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax25 + rsi29 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx28);
    if (*reinterpret_cast<void***>(rbx8 + 0x30a8)) {
        addr_402343_15:
        add_Xuf47u3imOz8BOk5HURLWQ(rbx8, rbx8 + 0x30a8, r12_13, reinterpret_cast<unsigned char>(r12_13) + reinterpret_cast<unsigned char>(r13_15), r8);
        *reinterpret_cast<void**>(rbx8 + 0x2898) = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(rbx8 + 0x2898)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp17 + 8)));
        goto addr_402364_22;
    } else {
        addr_4024b1_14:
        rax30 = rbx8 + 0x30d8;
        if (!*reinterpret_cast<void***>(rbx8 + 0x30d8)) {
            __asm__("movq xmm0, [rsp+0x8]");
            *reinterpret_cast<void***>(rbx8 + 0x30a8) = rax30;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rbx+0x30d8], xmm0");
            goto addr_402343_15;
        } else {
            *reinterpret_cast<void***>(rbx8 + 0x30a8) = rax30;
            goto addr_402343_15;
        }
    }
    addr_402588_29:
    rax25 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rbx8, 80, 3, rbx8, 80, 3);
    *reinterpret_cast<void***>(rax25) = r15_24->f10408;
    r15_24->f10408 = rax25;
    *reinterpret_cast<void***>(rax25 + 8) = r12_21;
    goto addr_402482_30;
    addr_402463_20:
    goto addr_402588_29;
}

int64_t memcpy = 0x400a36;

void fun_400a30(void** rdi, void** rsi, void** rdx, ...) {
    goto memcpy;
}

void*** g60f048 = reinterpret_cast<void***>(0);

void*** g60f040 = reinterpret_cast<void***>(0);

void** g60f050 = reinterpret_cast<void**>(0);

struct s27 {
    uint64_t f0;
    uint64_t f8;
    void** f16;
    signed char[7] pad24;
    void** f24;
};

void incl_m4q9b16kJJcoKe9c4ERtlpCg(struct s27* rdi, void** rsi);

void forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(void** rdi, unsigned char sil);

uint64_t g612390 = 0;

void** g6123a0 = reinterpret_cast<void**>(0);

void** g60f018 = reinterpret_cast<void**>(0);

void** g60f010 = reinterpret_cast<void**>(0);

void** g60f020 = reinterpret_cast<void**>(0);

void doOperation_3F8QeaTyYrJJF2gjBr6b8A(void** rdi, signed char sil, ...);

void forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(void** rdi);

void forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(void** rdi, void** rsi, void** rdx) {
    uint32_t ecx4;
    uint64_t rax5;
    void** rsi6;
    uint32_t edx7;
    uint32_t eax8;
    void** rcx9;
    void** r8_10;
    void** rdi11;
    uint32_t esi12;
    void** rbx13;
    void*** rax14;
    int1_t less_or_equal15;
    void** rdx16;
    void*** rax17;
    void** rax18;
    void** rbp19;
    void*** rax20;
    void** rsi21;
    void** rdx22;
    void** rax23;
    void*** rdx24;
    void** rax25;
    void*** tmp64_26;
    void*** rsi27;
    void** r9_28;
    void*** rsi29;
    uint64_t r8_30;
    void** rdi31;
    void** r13_32;
    void** rcx33;
    uint64_t rax34;
    void** rdx35;
    uint64_t rcx36;
    uint64_t rcx37;
    uint64_t r11_38;
    uint64_t rax39;
    void*** rdx40;
    void*** rax41;
    void** rbp42;
    void** rdx43;
    void*** rax44;
    void** rax45;
    void*** rax46;
    void** rsi47;
    void** rdx48;
    void** rax49;
    void*** tmp64_50;
    void** rax51;
    void** rax52;
    void** rdx53;
    void** rax54;
    void** rdx55;
    void** rax56;
    void** rax57;
    void** rbp58;
    void** rax59;
    void** rsi60;
    void** rdx61;
    void** rax62;
    void** rax63;
    void** tmp64_64;
    void** rbp65;
    void** tmp64_66;
    uint32_t r12d67;
    void** r8_68;
    void** rcx69;
    uint64_t rax70;
    uint64_t r13_71;
    void** rbx72;
    void** rbp73;
    uint64_t r14_74;
    void* rcx75;
    void** rdx76;
    void** r13_77;
    void** r12_78;
    uint32_t ebp79;
    void** rbx80;
    void** r14_81;
    uint32_t ecx82;
    void** rdi83;
    uint64_t rdx84;
    void** rdi85;
    uint32_t esi86;
    void** rdx87;
    void** rsi88;

    while (rdi && (!(*reinterpret_cast<unsigned char*>(rsi + 9) & 1) && (ecx4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi + 8)), *reinterpret_cast<unsigned char*>(&ecx4) <= 45))) {
        rax5 = 1 << *reinterpret_cast<unsigned char*>(&ecx4);
        if (rax5 & reinterpret_cast<unsigned char>(0x200011400000)) 
            goto addr_405420_3;
        if (*reinterpret_cast<uint32_t*>(&rax5) & 0x8010010) 
            goto addr_405430_5;
        if (!(*reinterpret_cast<uint32_t*>(&rax5) & 0x60000)) 
            break;
        rsi6 = *reinterpret_cast<void***>(rsi + 24);
        edx7 = *reinterpret_cast<unsigned char*>(&rdx);
        while (eax8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6)), *reinterpret_cast<signed char*>(&eax8) != 2) {
            if (*reinterpret_cast<signed char*>(&eax8) != 3) 
                goto addr_4054bb_10;
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi6 + 16)) == 2) {
                *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 8)));
                *reinterpret_cast<int32_t*>(&rcx9 + 4) = 0;
            } else {
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi6 + 16)) == 4) {
                    rcx9 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 8)))));
                } else {
                    *reinterpret_cast<uint32_t*>(&rcx9) = 0;
                    *reinterpret_cast<int32_t*>(&rcx9 + 4) = 0;
                    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi6 + 16)) == 1) {
                        *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 8)));
                        *reinterpret_cast<int32_t*>(&rcx9 + 4) = 0;
                    }
                }
            }
            r8_10 = *reinterpret_cast<void***>(rsi6 + 40);
            if (reinterpret_cast<unsigned char>(rcx9) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 32))) {
                rsi6 = *reinterpret_cast<void***>(r8_10 + reinterpret_cast<unsigned char>(rcx9) * 8);
                if (rsi6) {
                    addr_405519_19:
                    edx7 = *reinterpret_cast<unsigned char*>(&edx7);
                    continue;
                }
            }
            rsi6 = *reinterpret_cast<void***>(r8_10 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 32)) * 8);
            if (!rsi6) 
                goto addr_4054bf_22; else 
                goto addr_405519_19;
        }
        goto addr_405520_23;
        addr_4054bb_10:
        if (*reinterpret_cast<signed char*>(&eax8) != 1) 
            goto addr_4054bf_22;
    }
    return;
    addr_405420_3:
    rdi11 = *reinterpret_cast<void***>(rdi);
    esi12 = *reinterpret_cast<unsigned char*>(&rdx);
    if (!rdi11) {
        return;
    }
    rbx13 = rdi11 + 0xfffffffffffffff0;
    if (*reinterpret_cast<signed char*>(&esi12) == 1) {
        rax14 = g60f048;
        less_or_equal15 = reinterpret_cast<int64_t>(rax14) <= reinterpret_cast<int64_t>(g60f040);
        if (less_or_equal15) {
            rdx16 = reinterpret_cast<void**>(rax14 + reinterpret_cast<int64_t>(rax14) * 2);
            rax17 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx16) >> 63) + reinterpret_cast<unsigned char>(rdx16)) >> 1);
            g60f048 = rax17;
            rax18 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax17) * 8 + 16, rdx16, 0x200011400000, r8_10);
            *reinterpret_cast<void***>(rax18 + 8) = reinterpret_cast<void**>(1);
            rbp19 = rax18 + 16;
            rax20 = g60f040;
            rsi21 = g60f050;
            rdx22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax20) * 8);
            fun_400a30(rbp19, rsi21, rdx22);
            rax23 = g60f050;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax23 + 0xfffffffffffffff0, rdx22);
            g60f050 = rbp19;
        }
        rdx24 = g60f040;
        rax25 = g60f050;
        *reinterpret_cast<void***>(rax25 + reinterpret_cast<int64_t>(rdx24) * 8) = rbx13;
        tmp64_26 = g60f040 + 1;
        g60f040 = tmp64_26;
        return;
    }
    if (*reinterpret_cast<signed char*>(&esi12)) 
        goto addr_405236_33;
    incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, rbx13);
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(rbx13, 1);
    rsi27 = g60f040;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi27) < 0) | reinterpret_cast<uint1_t>(rsi27 == 0))) 
        goto addr_4056ff_36;
    addr_4057a7_37:
    return;
    do {
        addr_4056ff_36:
        r9_28 = g60f050;
        rsi29 = rsi27 - 1;
        r8_30 = g612390;
        g60f040 = rsi29;
        rdi31 = g6123a0;
        r13_32 = *reinterpret_cast<void***>(r9_28 + reinterpret_cast<int64_t>(rsi29) * 8);
        rcx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_32) >> 12);
        rax34 = r8_30 & reinterpret_cast<unsigned char>(rcx33);
        rdx35 = *reinterpret_cast<void***>(rdi31 + rax34 * 8);
        if (rdx35) {
            while (1) {
                if (*reinterpret_cast<void***>(rdx35 + 8) != rcx33) {
                    rax34 = rax34 + rax34 * 4 + 1 & r8_30;
                    rdx35 = *reinterpret_cast<void***>(rdi31 + rax34 * 8);
                    if (!rdx35) 
                        break;
                } else {
                    rcx36 = reinterpret_cast<unsigned char>(r13_32) >> 3;
                    *reinterpret_cast<uint32_t*>(&rcx37) = *reinterpret_cast<uint32_t*>(&rcx36) & 0x1ff;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = 0;
                    r11_38 = 1 << *reinterpret_cast<unsigned char*>(&rcx37);
                    rax39 = (rcx37 >> 6) + 2;
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx35 + rax39 * 8)) & r11_38)) 
                        goto addr_405785_41;
                    if (!rsi29) 
                        goto addr_4057a7_37;
                    --rsi29;
                    g60f040 = rsi29;
                    r13_32 = *reinterpret_cast<void***>(r9_28 + reinterpret_cast<int64_t>(rsi29) * 8);
                    rcx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_32) >> 12);
                    rax34 = reinterpret_cast<unsigned char>(rcx33) & r8_30;
                    rdx35 = *reinterpret_cast<void***>(rdi31 + rax34 * 8);
                    if (!rdx35) 
                        goto addr_4057e4_44;
                }
            }
        }
        addr_4057e8_46:
        incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, r13_32);
        continue;
        addr_405785_41:
        *reinterpret_cast<void***>(rdx35 + rax39 * 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx35 + rax39 * 8)) | r11_38);
        continue;
        addr_4057e4_44:
        goto addr_4057e8_46;
        forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(r13_32, 1);
        rsi27 = g60f040;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi27) < 0) | reinterpret_cast<uint1_t>(rsi27 == 0)));
    goto addr_4057a7_37;
    addr_405236_33:
    if (*reinterpret_cast<signed char*>(&esi12) != 2) {
        if (*reinterpret_cast<signed char*>(&esi12) == 3) {
            rdx40 = g60f048;
            rax41 = g60f040;
            rbp42 = g60f050;
            if (reinterpret_cast<int64_t>(rdx40) <= reinterpret_cast<int64_t>(rax41)) {
                rdx43 = reinterpret_cast<void**>(rdx40 + reinterpret_cast<int64_t>(rdx40) * 2);
                rax44 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx43) >> 63) + reinterpret_cast<unsigned char>(rdx43)) >> 1);
                g60f048 = rax44;
                rax45 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax44) * 8 + 16, rdx43, 0x200011400000, r8_10);
                *reinterpret_cast<void***>(rax45 + 8) = reinterpret_cast<void**>(1);
                rbp42 = rax45 + 16;
                rax46 = g60f040;
                rsi47 = g60f050;
                rdx48 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax46) * 8);
                fun_400a30(rbp42, rsi47, rdx48);
                rax49 = g60f050;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax49 + 0xfffffffffffffff0, rdx48);
                g60f050 = rbp42;
                rax41 = g60f040;
            }
            *reinterpret_cast<void***>(rbp42 + reinterpret_cast<int64_t>(rax41) * 8) = rbx13;
            tmp64_50 = g60f040 + 1;
            g60f040 = tmp64_50;
            goto addr_4052e8_52;
        }
    }
    rax51 = *reinterpret_cast<void***>(rdi11 + 0xfffffffffffffff0) - 8;
    *reinterpret_cast<void***>(rdi11 + 0xfffffffffffffff0) = rax51;
    if (reinterpret_cast<unsigned char>(rax51) > reinterpret_cast<unsigned char>(7)) {
        addr_4052e8_52:
        return;
    } else {
        rax52 = *reinterpret_cast<void***>(rbx13);
        if (*reinterpret_cast<unsigned char*>(&rax52) & 4) 
            goto addr_4040b7_56;
    }
    *reinterpret_cast<void***>(rbx13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax52) | 4);
    rdx53 = g60f018;
    rax54 = g60f010;
    if (reinterpret_cast<signed char>(rdx53) <= reinterpret_cast<signed char>(rax54)) {
        rdx55 = rdx53 + reinterpret_cast<unsigned char>(rdx53) * 2;
        rax56 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx55) >> 63) + reinterpret_cast<unsigned char>(rdx55)) >> 1);
        g60f018 = rax56;
        rax57 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax56) * 8 + 16, rdx55, 0x200011400000, r8_10);
        rbp58 = rax57 + 16;
        *reinterpret_cast<void***>(rax57 + 8) = reinterpret_cast<void**>(1);
        rax59 = g60f010;
        rsi60 = g60f020;
        rdx61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax59) * 8);
        fun_400a30(rbp58, rsi60, rdx61);
        rax62 = g60f020;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax62 + 0xfffffffffffffff0, rdx61);
        rax63 = g60f010;
        g60f020 = rbp58;
        *reinterpret_cast<void***>(rbp58 + reinterpret_cast<unsigned char>(rax63) * 8) = rbx13;
        tmp64_64 = g60f010 + 1;
        g60f010 = tmp64_64;
        return;
    } else {
        rbp65 = g60f020;
        *reinterpret_cast<void***>(rbp65 + reinterpret_cast<unsigned char>(rax54) * 8) = rbx13;
        tmp64_66 = g60f010 + 1;
        g60f010 = tmp64_66;
        return;
    }
    addr_4040b7_56:
    return;
    addr_405430_5:
    r12d67 = *reinterpret_cast<unsigned char*>(&rdx);
    r8_68 = *reinterpret_cast<void***>(rsi + 16);
    rcx69 = *reinterpret_cast<void***>(r8_68);
    rax70 = reinterpret_cast<uint64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi)) / reinterpret_cast<signed char>(rcx69));
    r13_71 = rax70;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax70) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax70 == 0))) {
        rbx72 = rsi;
        rbp73 = rdi;
        *reinterpret_cast<int32_t*>(&r14_74) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_74) + 4) = 0;
        while (rcx75 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx69) * r14_74), *reinterpret_cast<uint32_t*>(&rdx76) = r12d67, *reinterpret_cast<int32_t*>(&rdx76 + 4) = 0, ++r14_74, forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(reinterpret_cast<unsigned char>(rbp73) + reinterpret_cast<uint64_t>(rcx75), r8_68, rdx76), r13_71 != r14_74) {
            r8_68 = *reinterpret_cast<void***>(rbx72 + 16);
            rcx69 = *reinterpret_cast<void***>(r8_68);
        }
    }
    return;
    addr_405520_23:
    r13_77 = rdi;
    *reinterpret_cast<int32_t*>(&r12_78) = 0;
    *reinterpret_cast<int32_t*>(&r12_78 + 4) = 0;
    ebp79 = *reinterpret_cast<unsigned char*>(&edx7);
    rbx80 = rsi6;
    r14_81 = *reinterpret_cast<void***>(rsi6 + 32);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14_81) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14_81 == 0))) {
        do {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx80 + 40) + reinterpret_cast<unsigned char>(r12_78) * 8)) == 1) {
                ecx82 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx80 + 40) + reinterpret_cast<unsigned char>(r12_78) * 8) + 16) + 8));
                rdi83 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx80 + 40) + reinterpret_cast<unsigned char>(r12_78) * 8) + 8)) + reinterpret_cast<unsigned char>(r13_77));
                rdx84 = 0x200011400000 >> *reinterpret_cast<signed char*>(&ecx82);
                if (*reinterpret_cast<uint32_t*>(&rdx84) & 1) {
                    rdi85 = *reinterpret_cast<void***>(rdi83);
                    esi86 = ebp79;
                    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi85, *reinterpret_cast<signed char*>(&esi86));
                } else {
                    *reinterpret_cast<uint32_t*>(&rdx87) = ebp79;
                    *reinterpret_cast<int32_t*>(&rdx87 + 4) = 0;
                    rsi88 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx80 + 40) + reinterpret_cast<unsigned char>(r12_78) * 8) + 16);
                    forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(rdi83, rsi88, rdx87);
                }
            } else {
                forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(r13_77);
            }
            ++r12_78;
        } while (r14_81 != r12_78);
    }
    return;
    addr_4054bf_22:
    return;
}

void forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(void** rdi) {
    uint32_t eax2;
    void** rsi3;
    void*** rdi4;
    uint32_t edx5;
    uint32_t edx6;
    void** rsi7;
    uint32_t ecx8;
    uint64_t rax9;
    void** rcx10;
    void** r8_11;
    void** r13_12;
    void** r12_13;
    uint32_t ebp14;
    void** rbx15;
    void** r14_16;
    uint32_t ecx17;
    void** rdi18;
    uint64_t rdx19;
    void** rdi20;
    uint32_t esi21;
    void** rdx22;
    void** rsi23;
    void** rdi24;
    uint32_t esi25;
    void** rbx26;
    void*** rax27;
    int1_t less_or_equal28;
    void** rdx29;
    void*** rax30;
    void** rax31;
    void** rbp32;
    void*** rax33;
    void** rsi34;
    void** rdx35;
    void** rax36;
    void*** rdx37;
    void** rax38;
    void*** tmp64_39;
    void*** rsi40;
    void** r9_41;
    void*** rsi42;
    uint64_t r8_43;
    void** rdi44;
    void** r13_45;
    void** rcx46;
    uint64_t rax47;
    void** rdx48;
    uint64_t rcx49;
    uint64_t rcx50;
    uint64_t r11_51;
    uint64_t rax52;
    void*** rdx53;
    void*** rax54;
    void** rbp55;
    void** rdx56;
    void*** rax57;
    void** rax58;
    void*** rax59;
    void** rsi60;
    void** rdx61;
    void** rax62;
    void*** tmp64_63;
    void** rax64;
    void** rax65;
    void** rdx66;
    void** rax67;
    void** rdx68;
    void** rax69;
    void** rax70;
    void** rbp71;
    void** rax72;
    void** rsi73;
    void** rdx74;
    void** rax75;
    void** rax76;
    void** tmp64_77;
    void** rbp78;
    void** tmp64_79;
    uint32_t r12d80;
    void** r8_81;
    void** rcx82;
    uint64_t rax83;
    uint64_t r13_84;
    void** rbx85;
    void*** rbp86;
    uint64_t r14_87;
    void* rcx88;
    void** rdx89;

    while (eax2 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3)), *reinterpret_cast<signed char*>(&eax2) != 2) {
        if (*reinterpret_cast<signed char*>(&eax2) != 3) {
            if (*reinterpret_cast<signed char*>(&eax2) != 1) 
                goto addr_4054bf_4;
            rdi4 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3 + 8)));
            edx5 = *reinterpret_cast<unsigned char*>(&edx6);
            rsi7 = *reinterpret_cast<void***>(rsi3 + 16);
            if (!rdi4) 
                goto addr_405419_7;
            if (*reinterpret_cast<unsigned char*>(rsi7 + 9) & 1) 
                goto addr_405419_7;
            ecx8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi7 + 8));
            if (*reinterpret_cast<unsigned char*>(&ecx8) > 45) 
                goto addr_405419_7;
            rax9 = 1 << *reinterpret_cast<unsigned char*>(&ecx8);
            if (rax9 & reinterpret_cast<unsigned char>(0x200011400000)) 
                goto addr_405420_11;
            if (*reinterpret_cast<uint32_t*>(&rax9) & 0x8010010) 
                goto addr_405430_13;
            if (!(*reinterpret_cast<uint32_t*>(&rax9) & 0x60000)) 
                goto addr_405419_7;
            rsi3 = *reinterpret_cast<void***>(rsi7 + 24);
            edx6 = *reinterpret_cast<unsigned char*>(&edx5);
            continue;
        }
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi3 + 16)) == 2) {
            *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3 + 8)));
            *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
        } else {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi3 + 16)) == 4) {
                rcx10 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3 + 8)))));
            } else {
                *reinterpret_cast<uint32_t*>(&rcx10) = 0;
                *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi3 + 16)) == 1) {
                    *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3 + 8)));
                    *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
                }
            }
        }
        r8_11 = *reinterpret_cast<void***>(rsi3 + 40);
        if (reinterpret_cast<unsigned char>(rcx10) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3 + 32))) 
            goto addr_405510_23;
        rsi3 = *reinterpret_cast<void***>(r8_11 + reinterpret_cast<unsigned char>(rcx10) * 8);
        if (rsi3) {
            addr_405519_25:
            edx6 = *reinterpret_cast<unsigned char*>(&edx6);
            continue;
        }
        addr_405510_23:
        rsi3 = *reinterpret_cast<void***>(r8_11 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi3 + 32)) * 8);
        if (!rsi3) 
            goto addr_4054bf_4; else 
            goto addr_405519_25;
    }
    r13_12 = rdi;
    *reinterpret_cast<int32_t*>(&r12_13) = 0;
    *reinterpret_cast<int32_t*>(&r12_13 + 4) = 0;
    ebp14 = *reinterpret_cast<unsigned char*>(&edx6);
    rbx15 = rsi3;
    r14_16 = *reinterpret_cast<void***>(rsi3 + 32);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14_16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14_16 == 0))) {
        do {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx15 + 40) + reinterpret_cast<unsigned char>(r12_13) * 8)) == 1) {
                ecx17 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx15 + 40) + reinterpret_cast<unsigned char>(r12_13) * 8) + 16) + 8));
                rdi18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx15 + 40) + reinterpret_cast<unsigned char>(r12_13) * 8) + 8)) + reinterpret_cast<unsigned char>(r13_12));
                rdx19 = 0x200011400000 >> *reinterpret_cast<signed char*>(&ecx17);
                if (*reinterpret_cast<uint32_t*>(&rdx19) & 1) {
                    rdi20 = *reinterpret_cast<void***>(rdi18);
                    esi21 = ebp14;
                    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi20, *reinterpret_cast<signed char*>(&esi21));
                } else {
                    *reinterpret_cast<uint32_t*>(&rdx22) = ebp14;
                    *reinterpret_cast<int32_t*>(&rdx22 + 4) = 0;
                    rsi23 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx15 + 40) + reinterpret_cast<unsigned char>(r12_13) * 8) + 16);
                    forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(rdi18, rsi23, rdx22);
                }
            } else {
                forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(r13_12);
            }
            ++r12_13;
        } while (r14_16 != r12_13);
    }
    return;
    addr_4054bf_4:
    return;
    addr_405419_7:
    return;
    addr_405420_11:
    rdi24 = *rdi4;
    esi25 = *reinterpret_cast<unsigned char*>(&edx5);
    if (!rdi24) {
        return;
    }
    rbx26 = rdi24 + 0xfffffffffffffff0;
    if (*reinterpret_cast<signed char*>(&esi25) == 1) {
        rax27 = g60f048;
        less_or_equal28 = reinterpret_cast<int64_t>(rax27) <= reinterpret_cast<int64_t>(g60f040);
        if (less_or_equal28) {
            rdx29 = reinterpret_cast<void**>(rax27 + reinterpret_cast<int64_t>(rax27) * 2);
            rax30 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx29) >> 63) + reinterpret_cast<unsigned char>(rdx29)) >> 1);
            g60f048 = rax30;
            rax31 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax30) * 8 + 16, rdx29, 0x200011400000, r8_11);
            *reinterpret_cast<void***>(rax31 + 8) = reinterpret_cast<void**>(1);
            rbp32 = rax31 + 16;
            rax33 = g60f040;
            rsi34 = g60f050;
            rdx35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax33) * 8);
            fun_400a30(rbp32, rsi34, rdx35);
            rax36 = g60f050;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax36 + 0xfffffffffffffff0, rdx35);
            g60f050 = rbp32;
        }
        rdx37 = g60f040;
        rax38 = g60f050;
        *reinterpret_cast<void***>(rax38 + reinterpret_cast<int64_t>(rdx37) * 8) = rbx26;
        tmp64_39 = g60f040 + 1;
        g60f040 = tmp64_39;
        return;
    }
    if (*reinterpret_cast<signed char*>(&esi25)) 
        goto addr_405236_42;
    incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, rbx26);
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(rbx26, 1);
    rsi40 = g60f040;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi40) < 0) | reinterpret_cast<uint1_t>(rsi40 == 0))) 
        goto addr_4056ff_45;
    addr_4057a7_46:
    return;
    do {
        addr_4056ff_45:
        r9_41 = g60f050;
        rsi42 = rsi40 - 1;
        r8_43 = g612390;
        g60f040 = rsi42;
        rdi44 = g6123a0;
        r13_45 = *reinterpret_cast<void***>(r9_41 + reinterpret_cast<int64_t>(rsi42) * 8);
        rcx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_45) >> 12);
        rax47 = r8_43 & reinterpret_cast<unsigned char>(rcx46);
        rdx48 = *reinterpret_cast<void***>(rdi44 + rax47 * 8);
        if (rdx48) {
            while (1) {
                if (*reinterpret_cast<void***>(rdx48 + 8) != rcx46) {
                    rax47 = rax47 + rax47 * 4 + 1 & r8_43;
                    rdx48 = *reinterpret_cast<void***>(rdi44 + rax47 * 8);
                    if (!rdx48) 
                        break;
                } else {
                    rcx49 = reinterpret_cast<unsigned char>(r13_45) >> 3;
                    *reinterpret_cast<uint32_t*>(&rcx50) = *reinterpret_cast<uint32_t*>(&rcx49) & 0x1ff;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = 0;
                    r11_51 = 1 << *reinterpret_cast<unsigned char*>(&rcx50);
                    rax52 = (rcx50 >> 6) + 2;
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx48 + rax52 * 8)) & r11_51)) 
                        goto addr_405785_50;
                    if (!rsi42) 
                        goto addr_4057a7_46;
                    --rsi42;
                    g60f040 = rsi42;
                    r13_45 = *reinterpret_cast<void***>(r9_41 + reinterpret_cast<int64_t>(rsi42) * 8);
                    rcx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_45) >> 12);
                    rax47 = reinterpret_cast<unsigned char>(rcx46) & r8_43;
                    rdx48 = *reinterpret_cast<void***>(rdi44 + rax47 * 8);
                    if (!rdx48) 
                        goto addr_4057e4_53;
                }
            }
        }
        addr_4057e8_55:
        incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, r13_45);
        continue;
        addr_405785_50:
        *reinterpret_cast<void***>(rdx48 + rax52 * 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx48 + rax52 * 8)) | r11_51);
        continue;
        addr_4057e4_53:
        goto addr_4057e8_55;
        forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(r13_45, 1);
        rsi40 = g60f040;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi40) < 0) | reinterpret_cast<uint1_t>(rsi40 == 0)));
    goto addr_4057a7_46;
    addr_405236_42:
    if (*reinterpret_cast<signed char*>(&esi25) != 2) {
        if (*reinterpret_cast<signed char*>(&esi25) == 3) {
            rdx53 = g60f048;
            rax54 = g60f040;
            rbp55 = g60f050;
            if (reinterpret_cast<int64_t>(rdx53) <= reinterpret_cast<int64_t>(rax54)) {
                rdx56 = reinterpret_cast<void**>(rdx53 + reinterpret_cast<int64_t>(rdx53) * 2);
                rax57 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx56) >> 63) + reinterpret_cast<unsigned char>(rdx56)) >> 1);
                g60f048 = rax57;
                rax58 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax57) * 8 + 16, rdx56, 0x200011400000, r8_11);
                *reinterpret_cast<void***>(rax58 + 8) = reinterpret_cast<void**>(1);
                rbp55 = rax58 + 16;
                rax59 = g60f040;
                rsi60 = g60f050;
                rdx61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax59) * 8);
                fun_400a30(rbp55, rsi60, rdx61);
                rax62 = g60f050;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax62 + 0xfffffffffffffff0, rdx61);
                g60f050 = rbp55;
                rax54 = g60f040;
            }
            *reinterpret_cast<void***>(rbp55 + reinterpret_cast<int64_t>(rax54) * 8) = rbx26;
            tmp64_63 = g60f040 + 1;
            g60f040 = tmp64_63;
            goto addr_4052e8_61;
        }
    }
    rax64 = *reinterpret_cast<void***>(rdi24 + 0xfffffffffffffff0) - 8;
    *reinterpret_cast<void***>(rdi24 + 0xfffffffffffffff0) = rax64;
    if (reinterpret_cast<unsigned char>(rax64) > reinterpret_cast<unsigned char>(7)) {
        addr_4052e8_61:
        return;
    } else {
        rax65 = *reinterpret_cast<void***>(rbx26);
        if (*reinterpret_cast<unsigned char*>(&rax65) & 4) 
            goto addr_4040b7_65;
    }
    *reinterpret_cast<void***>(rbx26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax65) | 4);
    rdx66 = g60f018;
    rax67 = g60f010;
    if (reinterpret_cast<signed char>(rdx66) <= reinterpret_cast<signed char>(rax67)) {
        rdx68 = rdx66 + reinterpret_cast<unsigned char>(rdx66) * 2;
        rax69 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx68) >> 63) + reinterpret_cast<unsigned char>(rdx68)) >> 1);
        g60f018 = rax69;
        rax70 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax69) * 8 + 16, rdx68, 0x200011400000, r8_11);
        rbp71 = rax70 + 16;
        *reinterpret_cast<void***>(rax70 + 8) = reinterpret_cast<void**>(1);
        rax72 = g60f010;
        rsi73 = g60f020;
        rdx74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax72) * 8);
        fun_400a30(rbp71, rsi73, rdx74);
        rax75 = g60f020;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax75 + 0xfffffffffffffff0, rdx74);
        rax76 = g60f010;
        g60f020 = rbp71;
        *reinterpret_cast<void***>(rbp71 + reinterpret_cast<unsigned char>(rax76) * 8) = rbx26;
        tmp64_77 = g60f010 + 1;
        g60f010 = tmp64_77;
        return;
    } else {
        rbp78 = g60f020;
        *reinterpret_cast<void***>(rbp78 + reinterpret_cast<unsigned char>(rax67) * 8) = rbx26;
        tmp64_79 = g60f010 + 1;
        g60f010 = tmp64_79;
        return;
    }
    addr_4040b7_65:
    return;
    addr_405430_13:
    r12d80 = *reinterpret_cast<unsigned char*>(&edx5);
    r8_81 = *reinterpret_cast<void***>(rsi7 + 16);
    rcx82 = *reinterpret_cast<void***>(r8_81);
    rax83 = reinterpret_cast<uint64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi7)) / reinterpret_cast<signed char>(rcx82));
    r13_84 = rax83;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax83) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax83 == 0))) {
        rbx85 = rsi7;
        rbp86 = rdi4;
        *reinterpret_cast<int32_t*>(&r14_87) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_87) + 4) = 0;
        while (rcx88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx82) * r14_87), *reinterpret_cast<uint32_t*>(&rdx89) = r12d80, *reinterpret_cast<int32_t*>(&rdx89 + 4) = 0, ++r14_87, forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(reinterpret_cast<uint64_t>(rbp86) + reinterpret_cast<uint64_t>(rcx88), r8_81, rdx89), r13_84 != r14_87) {
            r8_81 = *reinterpret_cast<void***>(rbx85 + 16);
            rcx82 = *reinterpret_cast<void***>(r8_81);
        }
    }
    return;
}

void forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(void** rdi, unsigned char sil) {
    void** rax3;
    void** r8_4;
    uint32_t edx5;
    void** r12_6;
    void** rbx7;
    void** r13_8;
    void** r14_9;
    uint32_t ebp10;
    void** rsi11;
    void** rdx12;
    void* rdi13;
    uint32_t edx14;
    void** rsi15;
    void** rdi16;
    uint32_t ecx17;
    uint64_t rax18;
    void** rsi19;
    uint32_t edx20;
    uint32_t eax21;
    void** rcx22;
    void** rdi23;
    uint32_t esi24;
    void** rbx25;
    void*** rax26;
    int1_t less_or_equal27;
    void** rdx28;
    void*** rax29;
    void** rax30;
    void** rbp31;
    void*** rax32;
    void** rsi33;
    void** rdx34;
    void** rax35;
    void*** rdx36;
    void** rax37;
    void*** tmp64_38;
    void*** rsi39;
    void** r9_40;
    void*** rsi41;
    uint64_t r8_42;
    void** rdi43;
    void** r13_44;
    void** rcx45;
    uint64_t rax46;
    void** rdx47;
    uint64_t rcx48;
    uint64_t rcx49;
    uint64_t r11_50;
    uint64_t rax51;
    void*** rdx52;
    void*** rax53;
    void** rbp54;
    void** rdx55;
    void*** rax56;
    void** rax57;
    void*** rax58;
    void** rsi59;
    void** rdx60;
    void** rax61;
    void*** tmp64_62;
    void** rax63;
    void** rax64;
    void** rdx65;
    void** rax66;
    void** rdx67;
    void** rax68;
    void** rax69;
    void** rbp70;
    void** rax71;
    void** rsi72;
    void** rdx73;
    void** rax74;
    void** rax75;
    void** tmp64_76;
    void** rbp77;
    void** tmp64_78;
    uint32_t r12d79;
    void** r8_80;
    void** rcx81;
    uint64_t rax82;
    uint64_t r13_83;
    void** rbx84;
    void** rbp85;
    uint64_t r14_86;
    void* rcx87;
    void** rdx88;
    void** r13_89;
    void** r12_90;
    uint32_t ebp91;
    void** rbx92;
    void** r14_93;
    uint32_t ecx94;
    void** rdi95;
    uint64_t rdx96;
    void** rdi97;
    uint32_t esi98;
    void** rdx99;
    void** rsi100;

    rax3 = *reinterpret_cast<void***>(rdi + 8);
    r8_4 = *reinterpret_cast<void***>(rax3 + 40);
    if (r8_4) {
        goto r8_4;
    }
    edx5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax3 + 8));
    if (*reinterpret_cast<signed char*>(&edx5) == 24) {
        if (rdi != 0xfffffffffffffff0) {
            r12_6 = *reinterpret_cast<void***>(rdi + 16);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12_6) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12_6 == 0))) {
                rbx7 = rdi;
                r13_8 = rdi + 32;
                *reinterpret_cast<int32_t*>(&r14_9) = 0;
                *reinterpret_cast<int32_t*>(&r14_9 + 4) = 0;
                ebp10 = sil;
                while (rsi11 = *reinterpret_cast<void***>(rax3 + 16), *reinterpret_cast<uint32_t*>(&rdx12) = ebp10, *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0, rdi13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi11)) * reinterpret_cast<unsigned char>(r14_9)), ++r14_9, forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(reinterpret_cast<uint64_t>(rdi13) + reinterpret_cast<unsigned char>(r13_8), rsi11, rdx12), r12_6 != r14_9) {
                    rax3 = *reinterpret_cast<void***>(rbx7 + 8);
                }
            }
            return;
        }
    }
    if (*reinterpret_cast<signed char*>(&edx5) == 45 || *reinterpret_cast<signed char*>(&edx5) == 22) {
        edx14 = sil;
        rsi15 = *reinterpret_cast<void***>(rax3 + 16);
        rdi16 = rdi + 16;
        while (rdi16 && (!(*reinterpret_cast<unsigned char*>(rsi15 + 9) & 1) && (ecx17 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi15 + 8)), *reinterpret_cast<unsigned char*>(&ecx17) <= 45))) {
            rax18 = 1 << *reinterpret_cast<unsigned char*>(&ecx17);
            if (rax18 & reinterpret_cast<unsigned char>(0x200011400000)) 
                goto addr_405420_14;
            if (*reinterpret_cast<uint32_t*>(&rax18) & 0x8010010) 
                goto addr_405430_16;
            if (!(*reinterpret_cast<uint32_t*>(&rax18) & 0x60000)) 
                break;
            rsi19 = *reinterpret_cast<void***>(rsi15 + 24);
            edx20 = *reinterpret_cast<unsigned char*>(&edx14);
            while (eax21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19)), *reinterpret_cast<signed char*>(&eax21) != 2) {
                if (*reinterpret_cast<signed char*>(&eax21) != 3) 
                    goto addr_4054bb_21;
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi19 + 16)) == 2) {
                    *reinterpret_cast<uint32_t*>(&rcx22) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rdi16) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 8)));
                    *reinterpret_cast<int32_t*>(&rcx22 + 4) = 0;
                } else {
                    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi19 + 16)) == 4) {
                        rcx22 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi16) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 8)))));
                    } else {
                        *reinterpret_cast<uint32_t*>(&rcx22) = 0;
                        *reinterpret_cast<int32_t*>(&rcx22 + 4) = 0;
                        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi19 + 16)) == 1) {
                            *reinterpret_cast<uint32_t*>(&rcx22) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi16) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 8)));
                            *reinterpret_cast<int32_t*>(&rcx22 + 4) = 0;
                        }
                    }
                }
                r8_4 = *reinterpret_cast<void***>(rsi19 + 40);
                if (reinterpret_cast<unsigned char>(rcx22) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 32))) {
                    rsi19 = *reinterpret_cast<void***>(r8_4 + reinterpret_cast<unsigned char>(rcx22) * 8);
                    if (rsi19) {
                        addr_405519_30:
                        edx20 = *reinterpret_cast<unsigned char*>(&edx20);
                        continue;
                    }
                }
                rsi19 = *reinterpret_cast<void***>(r8_4 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 32)) * 8);
                if (!rsi19) 
                    goto addr_4054bf_33; else 
                    goto addr_405519_30;
            }
            goto addr_405520_34;
            addr_4054bb_21:
            if (*reinterpret_cast<signed char*>(&eax21) != 1) 
                goto addr_4054bf_33;
            rdi16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi16) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 8)));
            edx14 = *reinterpret_cast<unsigned char*>(&edx20);
            rsi15 = *reinterpret_cast<void***>(rsi19 + 16);
        }
    } else {
        return;
    }
    return;
    addr_405420_14:
    rdi23 = *reinterpret_cast<void***>(rdi16);
    esi24 = *reinterpret_cast<unsigned char*>(&edx14);
    if (!rdi23) {
        return;
    }
    rbx25 = rdi23 + 0xfffffffffffffff0;
    if (*reinterpret_cast<signed char*>(&esi24) == 1) {
        rax26 = g60f048;
        less_or_equal27 = reinterpret_cast<int64_t>(rax26) <= reinterpret_cast<int64_t>(g60f040);
        if (less_or_equal27) {
            rdx28 = reinterpret_cast<void**>(rax26 + reinterpret_cast<int64_t>(rax26) * 2);
            rax29 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx28) >> 63) + reinterpret_cast<unsigned char>(rdx28)) >> 1);
            g60f048 = rax29;
            rax30 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax29) * 8 + 16, rdx28, 0x200011400000, r8_4);
            *reinterpret_cast<void***>(rax30 + 8) = reinterpret_cast<void**>(1);
            rbp31 = rax30 + 16;
            rax32 = g60f040;
            rsi33 = g60f050;
            rdx34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax32) * 8);
            fun_400a30(rbp31, rsi33, rdx34);
            rax35 = g60f050;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax35 + 0xfffffffffffffff0, rdx34);
            g60f050 = rbp31;
        }
        rdx36 = g60f040;
        rax37 = g60f050;
        *reinterpret_cast<void***>(rax37 + reinterpret_cast<int64_t>(rdx36) * 8) = rbx25;
        tmp64_38 = g60f040 + 1;
        g60f040 = tmp64_38;
        return;
    }
    if (*reinterpret_cast<signed char*>(&esi24)) 
        goto addr_405236_45;
    incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, rbx25);
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(rbx25, 1);
    rsi39 = g60f040;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi39) < 0) | reinterpret_cast<uint1_t>(rsi39 == 0))) 
        goto addr_4056ff_48;
    addr_4057a7_49:
    return;
    do {
        addr_4056ff_48:
        r9_40 = g60f050;
        rsi41 = rsi39 - 1;
        r8_42 = g612390;
        g60f040 = rsi41;
        rdi43 = g6123a0;
        r13_44 = *reinterpret_cast<void***>(r9_40 + reinterpret_cast<int64_t>(rsi41) * 8);
        rcx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_44) >> 12);
        rax46 = r8_42 & reinterpret_cast<unsigned char>(rcx45);
        rdx47 = *reinterpret_cast<void***>(rdi43 + rax46 * 8);
        if (rdx47) {
            while (1) {
                if (*reinterpret_cast<void***>(rdx47 + 8) != rcx45) {
                    rax46 = rax46 + rax46 * 4 + 1 & r8_42;
                    rdx47 = *reinterpret_cast<void***>(rdi43 + rax46 * 8);
                    if (!rdx47) 
                        break;
                } else {
                    rcx48 = reinterpret_cast<unsigned char>(r13_44) >> 3;
                    *reinterpret_cast<uint32_t*>(&rcx49) = *reinterpret_cast<uint32_t*>(&rcx48) & 0x1ff;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
                    r11_50 = 1 << *reinterpret_cast<unsigned char*>(&rcx49);
                    rax51 = (rcx49 >> 6) + 2;
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx47 + rax51 * 8)) & r11_50)) 
                        goto addr_405785_53;
                    if (!rsi41) 
                        goto addr_4057a7_49;
                    --rsi41;
                    g60f040 = rsi41;
                    r13_44 = *reinterpret_cast<void***>(r9_40 + reinterpret_cast<int64_t>(rsi41) * 8);
                    rcx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_44) >> 12);
                    rax46 = reinterpret_cast<unsigned char>(rcx45) & r8_42;
                    rdx47 = *reinterpret_cast<void***>(rdi43 + rax46 * 8);
                    if (!rdx47) 
                        goto addr_4057e4_56;
                }
            }
        }
        addr_4057e8_58:
        incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, r13_44);
        continue;
        addr_405785_53:
        *reinterpret_cast<void***>(rdx47 + rax51 * 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx47 + rax51 * 8)) | r11_50);
        continue;
        addr_4057e4_56:
        goto addr_4057e8_58;
        forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(r13_44, 1);
        rsi39 = g60f040;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi39) < 0) | reinterpret_cast<uint1_t>(rsi39 == 0)));
    goto addr_4057a7_49;
    addr_405236_45:
    if (*reinterpret_cast<signed char*>(&esi24) != 2) {
        if (*reinterpret_cast<signed char*>(&esi24) == 3) {
            rdx52 = g60f048;
            rax53 = g60f040;
            rbp54 = g60f050;
            if (reinterpret_cast<int64_t>(rdx52) <= reinterpret_cast<int64_t>(rax53)) {
                rdx55 = reinterpret_cast<void**>(rdx52 + reinterpret_cast<int64_t>(rdx52) * 2);
                rax56 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx55) >> 63) + reinterpret_cast<unsigned char>(rdx55)) >> 1);
                g60f048 = rax56;
                rax57 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax56) * 8 + 16, rdx55, 0x200011400000, r8_4);
                *reinterpret_cast<void***>(rax57 + 8) = reinterpret_cast<void**>(1);
                rbp54 = rax57 + 16;
                rax58 = g60f040;
                rsi59 = g60f050;
                rdx60 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax58) * 8);
                fun_400a30(rbp54, rsi59, rdx60);
                rax61 = g60f050;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax61 + 0xfffffffffffffff0, rdx60);
                g60f050 = rbp54;
                rax53 = g60f040;
            }
            *reinterpret_cast<void***>(rbp54 + reinterpret_cast<int64_t>(rax53) * 8) = rbx25;
            tmp64_62 = g60f040 + 1;
            g60f040 = tmp64_62;
            goto addr_4052e8_64;
        }
    }
    rax63 = *reinterpret_cast<void***>(rdi23 + 0xfffffffffffffff0) - 8;
    *reinterpret_cast<void***>(rdi23 + 0xfffffffffffffff0) = rax63;
    if (reinterpret_cast<unsigned char>(rax63) > reinterpret_cast<unsigned char>(7)) {
        addr_4052e8_64:
        return;
    } else {
        rax64 = *reinterpret_cast<void***>(rbx25);
        if (*reinterpret_cast<unsigned char*>(&rax64) & 4) 
            goto addr_4040b7_68;
    }
    *reinterpret_cast<void***>(rbx25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax64) | 4);
    rdx65 = g60f018;
    rax66 = g60f010;
    if (reinterpret_cast<signed char>(rdx65) <= reinterpret_cast<signed char>(rax66)) {
        rdx67 = rdx65 + reinterpret_cast<unsigned char>(rdx65) * 2;
        rax68 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx67) >> 63) + reinterpret_cast<unsigned char>(rdx67)) >> 1);
        g60f018 = rax68;
        rax69 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax68) * 8 + 16, rdx67, 0x200011400000, r8_4);
        rbp70 = rax69 + 16;
        *reinterpret_cast<void***>(rax69 + 8) = reinterpret_cast<void**>(1);
        rax71 = g60f010;
        rsi72 = g60f020;
        rdx73 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax71) * 8);
        fun_400a30(rbp70, rsi72, rdx73);
        rax74 = g60f020;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax74 + 0xfffffffffffffff0, rdx73);
        rax75 = g60f010;
        g60f020 = rbp70;
        *reinterpret_cast<void***>(rbp70 + reinterpret_cast<unsigned char>(rax75) * 8) = rbx25;
        tmp64_76 = g60f010 + 1;
        g60f010 = tmp64_76;
        return;
    } else {
        rbp77 = g60f020;
        *reinterpret_cast<void***>(rbp77 + reinterpret_cast<unsigned char>(rax66) * 8) = rbx25;
        tmp64_78 = g60f010 + 1;
        g60f010 = tmp64_78;
        return;
    }
    addr_4040b7_68:
    return;
    addr_405430_16:
    r12d79 = *reinterpret_cast<unsigned char*>(&edx14);
    r8_80 = *reinterpret_cast<void***>(rsi15 + 16);
    rcx81 = *reinterpret_cast<void***>(r8_80);
    rax82 = reinterpret_cast<uint64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi15)) / reinterpret_cast<signed char>(rcx81));
    r13_83 = rax82;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax82) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax82 == 0))) {
        rbx84 = rsi15;
        rbp85 = rdi16;
        *reinterpret_cast<int32_t*>(&r14_86) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_86) + 4) = 0;
        while (rcx87 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx81) * r14_86), *reinterpret_cast<uint32_t*>(&rdx88) = r12d79, *reinterpret_cast<int32_t*>(&rdx88 + 4) = 0, ++r14_86, forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(reinterpret_cast<unsigned char>(rbp85) + reinterpret_cast<uint64_t>(rcx87), r8_80, rdx88), r13_83 != r14_86) {
            r8_80 = *reinterpret_cast<void***>(rbx84 + 16);
            rcx81 = *reinterpret_cast<void***>(r8_80);
        }
    }
    return;
    addr_405520_34:
    r13_89 = rdi16;
    *reinterpret_cast<int32_t*>(&r12_90) = 0;
    *reinterpret_cast<int32_t*>(&r12_90 + 4) = 0;
    ebp91 = *reinterpret_cast<unsigned char*>(&edx20);
    rbx92 = rsi19;
    r14_93 = *reinterpret_cast<void***>(rsi19 + 32);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14_93) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14_93 == 0))) {
        do {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx92 + 40) + reinterpret_cast<unsigned char>(r12_90) * 8)) == 1) {
                ecx94 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx92 + 40) + reinterpret_cast<unsigned char>(r12_90) * 8) + 16) + 8));
                rdi95 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx92 + 40) + reinterpret_cast<unsigned char>(r12_90) * 8) + 8)) + reinterpret_cast<unsigned char>(r13_89));
                rdx96 = 0x200011400000 >> *reinterpret_cast<signed char*>(&ecx94);
                if (*reinterpret_cast<uint32_t*>(&rdx96) & 1) {
                    rdi97 = *reinterpret_cast<void***>(rdi95);
                    esi98 = ebp91;
                    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi97, *reinterpret_cast<signed char*>(&esi98));
                } else {
                    *reinterpret_cast<uint32_t*>(&rdx99) = ebp91;
                    *reinterpret_cast<int32_t*>(&rdx99 + 4) = 0;
                    rsi100 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx92 + 40) + reinterpret_cast<unsigned char>(r12_90) * 8) + 16);
                    forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(rdi95, rsi100, rdx99);
                }
            } else {
                forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(r13_89);
            }
            ++r12_90;
        } while (r14_93 != r12_90);
    }
    return;
    addr_4054bf_33:
    return;
}

void markS_NZr5o3Ubzrci4OmK29cHBJA(void** rdi, void** rsi) {
    void** r12_3;
    struct s27* rbp4;
    int64_t rsi5;
    void*** r9_6;
    int64_t rsi7;
    uint64_t r8_8;
    void** rdi9;
    void** r13_10;
    void** rcx11;
    uint64_t rax12;
    void** rdx13;
    uint64_t rcx14;
    uint64_t rcx15;
    uint64_t r11_16;
    uint64_t rax17;

    r12_3 = rdi;
    rbp4 = reinterpret_cast<struct s27*>(rdi + 0x3388);
    incl_m4q9b16kJJcoKe9c4ERtlpCg(rbp4, rsi);
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(rsi, 1);
    rsi5 = *reinterpret_cast<int64_t*>(r12_3 + 64);
    if (!(reinterpret_cast<uint1_t>(rsi5 < 0) | reinterpret_cast<uint1_t>(rsi5 == 0))) {
        do {
            r9_6 = *reinterpret_cast<void****>(r12_3 + 80);
            rsi7 = rsi5 - 1;
            r8_8 = *reinterpret_cast<uint64_t*>(r12_3 + 0x3390);
            *reinterpret_cast<int64_t*>(r12_3 + 64) = rsi7;
            rdi9 = *reinterpret_cast<void***>(r12_3 + 0x33a0);
            r13_10 = r9_6[rsi7 * 8];
            rcx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_10) >> 12);
            rax12 = r8_8 & reinterpret_cast<unsigned char>(rcx11);
            rdx13 = *reinterpret_cast<void***>(rdi9 + rax12 * 8);
            if (rdx13) {
                while (1) {
                    if (*reinterpret_cast<void***>(rdx13 + 8) != rcx11) {
                        rax12 = rax12 + rax12 * 4 + 1 & r8_8;
                        rdx13 = *reinterpret_cast<void***>(rdi9 + rax12 * 8);
                        if (!rdx13) 
                            break;
                    } else {
                        rcx14 = reinterpret_cast<unsigned char>(r13_10) >> 3;
                        *reinterpret_cast<uint32_t*>(&rcx15) = *reinterpret_cast<uint32_t*>(&rcx14) & 0x1ff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
                        r11_16 = 1 << *reinterpret_cast<unsigned char*>(&rcx15);
                        rax17 = (rcx15 >> 6) + 2;
                        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx13 + rax17 * 8)) & r11_16)) 
                            goto addr_405785_6;
                        if (!rsi7) 
                            goto addr_4057a7_8;
                        --rsi7;
                        *reinterpret_cast<int64_t*>(r12_3 + 64) = rsi7;
                        r13_10 = r9_6[rsi7 * 8];
                        rcx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_10) >> 12);
                        rax12 = reinterpret_cast<unsigned char>(rcx11) & r8_8;
                        rdx13 = *reinterpret_cast<void***>(rdi9 + rax12 * 8);
                        if (!rdx13) 
                            goto addr_4057e4_10;
                    }
                }
            }
            addr_4057e8_12:
            incl_m4q9b16kJJcoKe9c4ERtlpCg(rbp4, r13_10);
            continue;
            addr_405785_6:
            *reinterpret_cast<void***>(rdx13 + rax17 * 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx13 + rax17 * 8)) | r11_16);
            continue;
            addr_4057e4_10:
            goto addr_4057e8_12;
            forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(r13_10, 1);
            rsi5 = *reinterpret_cast<int64_t*>(r12_3 + 64);
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rsi5 < 0) | reinterpret_cast<uint1_t>(rsi5 == 0)));
    }
    addr_4057a7_8:
    return;
}

void doOperation_3F8QeaTyYrJJF2gjBr6b8A(void** rdi, signed char sil, ...) {
    void** rbx3;
    void*** rax4;
    int1_t less_or_equal5;
    void** rdx6;
    void*** rax7;
    void** rcx8;
    void** r8_9;
    void** rax10;
    void** rbp11;
    void*** rax12;
    void** rsi13;
    void** rdx14;
    void** rax15;
    void*** rdx16;
    void** rax17;
    void*** tmp64_18;
    void*** rsi19;
    void** r9_20;
    void*** rsi21;
    uint64_t r8_22;
    void** rdi23;
    void** r13_24;
    void** rcx25;
    uint64_t rax26;
    void** rdx27;
    uint64_t rcx28;
    uint64_t rcx29;
    uint64_t r11_30;
    uint64_t rax31;
    void*** rdx32;
    void*** rax33;
    void** rbp34;
    void** rdx35;
    void*** rax36;
    void** rcx37;
    void** r8_38;
    void** rax39;
    void*** rax40;
    void** rsi41;
    void** rdx42;
    void** rax43;
    void*** tmp64_44;
    void** rax45;
    void** rax46;
    void** rdx47;
    void** rax48;
    void** rdx49;
    void** rax50;
    void** rcx51;
    void** r8_52;
    void** rax53;
    void** rbp54;
    void** rax55;
    void** rsi56;
    void** rdx57;
    void** rax58;
    void** rax59;
    void** tmp64_60;
    void** rbp61;
    void** tmp64_62;

    if (!rdi) {
        return;
    }
    rbx3 = rdi + 0xfffffffffffffff0;
    if (sil == 1) {
        rax4 = g60f048;
        less_or_equal5 = reinterpret_cast<int64_t>(rax4) <= reinterpret_cast<int64_t>(g60f040);
        if (less_or_equal5) {
            rdx6 = reinterpret_cast<void**>(rax4 + reinterpret_cast<int64_t>(rax4) * 2);
            rax7 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx6) >> 63) + reinterpret_cast<unsigned char>(rdx6)) >> 1);
            g60f048 = rax7;
            rax10 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax7) * 8 + 16, rdx6, rcx8, r8_9);
            *reinterpret_cast<void***>(rax10 + 8) = reinterpret_cast<void**>(1);
            rbp11 = rax10 + 16;
            rax12 = g60f040;
            rsi13 = g60f050;
            rdx14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax12) * 8);
            fun_400a30(rbp11, rsi13, rdx14);
            rax15 = g60f050;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax15 + 0xfffffffffffffff0, rdx14);
            g60f050 = rbp11;
        }
        rdx16 = g60f040;
        rax17 = g60f050;
        *reinterpret_cast<void***>(rax17 + reinterpret_cast<int64_t>(rdx16) * 8) = rbx3;
        tmp64_18 = g60f040 + 1;
        g60f040 = tmp64_18;
        return;
    }
    if (sil) 
        goto addr_405236_8;
    incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, rbx3);
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(rbx3, 1);
    rsi19 = g60f040;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi19) < 0) | reinterpret_cast<uint1_t>(rsi19 == 0))) 
        goto addr_4056ff_11;
    addr_4057a7_12:
    return;
    do {
        addr_4056ff_11:
        r9_20 = g60f050;
        rsi21 = rsi19 - 1;
        r8_22 = g612390;
        g60f040 = rsi21;
        rdi23 = g6123a0;
        r13_24 = *reinterpret_cast<void***>(r9_20 + reinterpret_cast<int64_t>(rsi21) * 8);
        rcx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_24) >> 12);
        rax26 = r8_22 & reinterpret_cast<unsigned char>(rcx25);
        rdx27 = *reinterpret_cast<void***>(rdi23 + rax26 * 8);
        if (rdx27) {
            while (1) {
                if (*reinterpret_cast<void***>(rdx27 + 8) != rcx25) {
                    rax26 = rax26 + rax26 * 4 + 1 & r8_22;
                    rdx27 = *reinterpret_cast<void***>(rdi23 + rax26 * 8);
                    if (!rdx27) 
                        break;
                } else {
                    rcx28 = reinterpret_cast<unsigned char>(r13_24) >> 3;
                    *reinterpret_cast<uint32_t*>(&rcx29) = *reinterpret_cast<uint32_t*>(&rcx28) & 0x1ff;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
                    r11_30 = 1 << *reinterpret_cast<unsigned char*>(&rcx29);
                    rax31 = (rcx29 >> 6) + 2;
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx27 + rax31 * 8)) & r11_30)) 
                        goto addr_405785_16;
                    if (!rsi21) 
                        goto addr_4057a7_12;
                    --rsi21;
                    g60f040 = rsi21;
                    r13_24 = *reinterpret_cast<void***>(r9_20 + reinterpret_cast<int64_t>(rsi21) * 8);
                    rcx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_24) >> 12);
                    rax26 = reinterpret_cast<unsigned char>(rcx25) & r8_22;
                    rdx27 = *reinterpret_cast<void***>(rdi23 + rax26 * 8);
                    if (!rdx27) 
                        goto addr_4057e4_19;
                }
            }
        }
        addr_4057e8_21:
        incl_m4q9b16kJJcoKe9c4ERtlpCg(0x612388, r13_24);
        continue;
        addr_405785_16:
        *reinterpret_cast<void***>(rdx27 + rax31 * 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx27 + rax31 * 8)) | r11_30);
        continue;
        addr_4057e4_19:
        goto addr_4057e8_21;
        forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(r13_24, 1);
        rsi19 = g60f040;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi19) < 0) | reinterpret_cast<uint1_t>(rsi19 == 0)));
    goto addr_4057a7_12;
    addr_405236_8:
    if (sil != 2) {
        if (sil == 3) {
            rdx32 = g60f048;
            rax33 = g60f040;
            rbp34 = g60f050;
            if (reinterpret_cast<int64_t>(rdx32) <= reinterpret_cast<int64_t>(rax33)) {
                rdx35 = reinterpret_cast<void**>(rdx32 + reinterpret_cast<int64_t>(rdx32) * 2);
                rax36 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx35) >> 63) + reinterpret_cast<unsigned char>(rdx35)) >> 1);
                g60f048 = rax36;
                rax39 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax36) * 8 + 16, rdx35, rcx37, r8_38);
                *reinterpret_cast<void***>(rax39 + 8) = reinterpret_cast<void**>(1);
                rbp34 = rax39 + 16;
                rax40 = g60f040;
                rsi41 = g60f050;
                rdx42 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax40) * 8);
                fun_400a30(rbp34, rsi41, rdx42);
                rax43 = g60f050;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax43 + 0xfffffffffffffff0, rdx42);
                g60f050 = rbp34;
                rax33 = g60f040;
            }
            *reinterpret_cast<void***>(rbp34 + reinterpret_cast<int64_t>(rax33) * 8) = rbx3;
            tmp64_44 = g60f040 + 1;
            g60f040 = tmp64_44;
            goto addr_4052e8_27;
        }
    }
    rax45 = *reinterpret_cast<void***>(rdi + 0xfffffffffffffff0) - 8;
    *reinterpret_cast<void***>(rdi + 0xfffffffffffffff0) = rax45;
    if (reinterpret_cast<unsigned char>(rax45) > reinterpret_cast<unsigned char>(7)) {
        addr_4052e8_27:
        return;
    } else {
        rax46 = *reinterpret_cast<void***>(rbx3);
        if (*reinterpret_cast<unsigned char*>(&rax46) & 4) 
            goto addr_4040b7_31;
    }
    *reinterpret_cast<void***>(rbx3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax46) | 4);
    rdx47 = g60f018;
    rax48 = g60f010;
    if (reinterpret_cast<signed char>(rdx47) <= reinterpret_cast<signed char>(rax48)) {
        rdx49 = rdx47 + reinterpret_cast<unsigned char>(rdx47) * 2;
        rax50 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx49) >> 63) + reinterpret_cast<unsigned char>(rdx49)) >> 1);
        g60f018 = rax50;
        rax53 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax50) * 8 + 16, rdx49, rcx51, r8_52);
        rbp54 = rax53 + 16;
        *reinterpret_cast<void***>(rax53 + 8) = reinterpret_cast<void**>(1);
        rax55 = g60f010;
        rsi56 = g60f020;
        rdx57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax55) * 8);
        fun_400a30(rbp54, rsi56, rdx57);
        rax58 = g60f020;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax58 + 0xfffffffffffffff0, rdx57);
        rax59 = g60f010;
        g60f020 = rbp54;
        *reinterpret_cast<void***>(rbp54 + reinterpret_cast<unsigned char>(rax59) * 8) = rbx3;
        tmp64_60 = g60f010 + 1;
        g60f010 = tmp64_60;
        return;
    } else {
        rbp61 = g60f020;
        *reinterpret_cast<void***>(rbp61 + reinterpret_cast<unsigned char>(rax48) * 8) = rbx3;
        tmp64_62 = g60f010 + 1;
        g60f010 = tmp64_62;
        return;
    }
    addr_4040b7_31:
    return;
}

struct s28 {
    struct s28* f0;
    uint64_t f8;
};

struct s29 {
    unsigned char f0;
    signed char[7] pad8;
    uint64_t f8;
    signed char[16] pad32;
    void** f32;
    signed char[7] pad40;
    uint64_t f40;
    void* f48;
};

void** interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(void** rdi, void** rsi, void** rdx) {
    uint64_t rax4;
    int64_t rdx5;
    struct s28* rdx6;
    uint64_t rcx7;
    uint64_t rcx8;
    void** rdx9;
    void** rax10;
    int64_t rax11;
    struct s29* rcx12;
    void* rsi13;
    void* rsi14;
    void** rax15;
    void** rax16;

    rax4 = reinterpret_cast<unsigned char>(rsi) >> 21;
    *reinterpret_cast<uint32_t*>(&rdx5) = *reinterpret_cast<unsigned char*>(&rax4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    rdx6 = *reinterpret_cast<struct s28**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(rdx5 * 8) + 0x28a8);
    if (!rdx6) {
        goto addr_406620_3;
    }
    do {
        if (rax4 == rdx6->f8) 
            break;
        rdx6 = rdx6->f0;
    } while (rdx6);
    goto addr_406620_3;
    rcx7 = reinterpret_cast<unsigned char>(rsi) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx8) = *reinterpret_cast<uint32_t*>(&rcx7) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    if (!(*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx6) + (rcx8 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx8))) {
        addr_406620_3:
        if (reinterpret_cast<unsigned char>(rsi) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) || reinterpret_cast<unsigned char>(rsi) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 8))) {
            addr_406627_7:
            return 0;
        } else {
            rdx9 = *reinterpret_cast<void***>(rdi + 0x30a8);
            if (*reinterpret_cast<void***>(rdx9) != rdx9) {
                do {
                    rax10 = *reinterpret_cast<void***>(rdx9 + 16);
                    if (reinterpret_cast<unsigned char>(rsi) < reinterpret_cast<unsigned char>(rax10)) 
                        continue;
                    if (reinterpret_cast<unsigned char>(rsi) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx9 + 24))) 
                        break;
                    *reinterpret_cast<uint32_t*>(&rax11) = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rsi) > reinterpret_cast<unsigned char>(rax10));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                    rdx9 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx9) + reinterpret_cast<uint64_t>(rax11 * 8));
                } while (*reinterpret_cast<void***>(rdx9) != rdx9);
                goto addr_406680_12;
            } else {
                goto addr_406627_7;
            }
        }
    } else {
        rcx12 = reinterpret_cast<struct s29*>(reinterpret_cast<unsigned char>(rsi) & 0xfffffffffffff000);
        if (!(rcx12->f0 & 1)) 
            goto addr_406627_7;
        if (reinterpret_cast<int64_t>(rcx12->f8) <= reinterpret_cast<int64_t>(0xfc8)) 
            goto addr_406688_16; else 
            goto addr_406603_17;
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax10 + 8)) <= reinterpret_cast<unsigned char>(1)) {
        rax10 = reinterpret_cast<void**>(0);
    }
    return rax10;
    addr_406680_12:
    return 0;
    addr_406688_16:
    *reinterpret_cast<uint32_t*>(&rsi13) = *reinterpret_cast<uint32_t*>(&rsi) & 0xfff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
    rsi14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi13) - 56);
    if (reinterpret_cast<uint64_t>(rsi14) < reinterpret_cast<uint64_t>(rcx12->f48)) {
        rax15 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx12) + reinterpret_cast<uint64_t>(rsi14) + 56 - reinterpret_cast<uint64_t>(rsi14) % rcx12->f8);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax15 + 8)) <= reinterpret_cast<unsigned char>(1)) {
            rax15 = reinterpret_cast<void**>(0);
        }
        return rax15;
    }
    addr_406603_17:
    rax16 = reinterpret_cast<void**>(&rcx12->f32);
    if (reinterpret_cast<unsigned char>(rsi) >= reinterpret_cast<unsigned char>(rax16)) {
        if (rcx12->f40 <= 1) {
            rax16 = reinterpret_cast<void**>(0);
        }
        return rax16;
    }
}

int64_t g60f058 = 0;

signed char collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(void** rdi) {
    void** r12_2;
    void** rbp3;
    void** rbx4;
    void** rax5;
    void** rax6;
    int64_t tmp64_7;
    void** rsi8;
    void** rdx9;
    void** r13_10;
    void** r14_11;
    void** r15_12;
    void** rsi13;
    void* rdi14;
    void** rsi15;

    r12_2 = rdi + 96;
    rbp3 = rdi;
    while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp3 + 16)) > reinterpret_cast<signed char>(0)) {
        do {
            rbx4 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp3 + 32));
            *reinterpret_cast<void***>(rbx4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx4)) & 0xfffffffffffffffb);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp3 + 32)) = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(*reinterpret_cast<void***>(rbp3 + 32) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp3 + 16)) * 8) - 8);
            rax5 = *reinterpret_cast<void***>(rbp3 + 16) - 1;
            *reinterpret_cast<void***>(rbp3 + 16) = rax5;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx4)) <= reinterpret_cast<unsigned char>(7)) 
                break;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax5 == 0)));
        break;
        rax6 = *reinterpret_cast<void***>(rbx4 + 8);
        if (*reinterpret_cast<void***>(rax6 + 32)) {
            tmp64_7 = g60f058 + 1;
            g60f058 = tmp64_7;
            *reinterpret_cast<void***>(rax6 + 32)(rbx4 + 16, rsi8);
            --g60f058;
            rax6 = *reinterpret_cast<void***>(rbx4 + 8);
        }
        rdx9 = *reinterpret_cast<void***>(rax6 + 40);
        if (!rdx9) {
            *reinterpret_cast<uint32_t*>(&rdx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax6 + 8));
            *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
            if (*reinterpret_cast<signed char*>(&rdx9) == 24) {
                if (rbx4 != 0xfffffffffffffff0 && (r13_10 = *reinterpret_cast<void***>(rbx4 + 16), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r13_10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r13_10 == 0)))) {
                    r14_11 = rbx4 + 32;
                    *reinterpret_cast<int32_t*>(&r15_12) = 0;
                    *reinterpret_cast<int32_t*>(&r15_12 + 4) = 0;
                    while (rsi13 = *reinterpret_cast<void***>(rax6 + 16), *reinterpret_cast<uint32_t*>(&rdx9) = 2, *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, rdi14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi13)) * reinterpret_cast<unsigned char>(r15_12)), ++r15_12, forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(reinterpret_cast<uint64_t>(rdi14) + reinterpret_cast<unsigned char>(r14_11), rsi13, 2), r13_10 != r15_12) {
                        rax6 = *reinterpret_cast<void***>(rbx4 + 8);
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(&rdx9) == 45 || *reinterpret_cast<signed char*>(&rdx9) == 22) {
                    rsi15 = *reinterpret_cast<void***>(rax6 + 16);
                    *reinterpret_cast<uint32_t*>(&rdx9) = 2;
                    *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
                    forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(rbx4 + 16, rsi15, 2);
                }
            }
        } else {
            rdx9(rbx4 + 16, 2);
        }
        rsi8 = rbx4;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(r12_2, rsi8, rdx9);
    }
    return 1;
}

int64_t globalMarkersLen_hgEFy3UCOBoalBh29asu5MA = 0;

int64_t threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = 0;

void markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(void** rdi, void** rsi) {
    void** rbp3;
    int64_t r12_4;
    int64_t rbx5;
    int64_t r12_6;
    int64_t rbx7;
    void*** rbx8;
    void*** r12_9;
    void** rsi10;

    rbp3 = rdi;
    if (!*reinterpret_cast<int64_t*>(rdi + 0x33c0) && (r12_4 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA, !(reinterpret_cast<uint1_t>(r12_4 < 0) | reinterpret_cast<uint1_t>(r12_4 == 0)))) {
        *reinterpret_cast<int32_t*>(&rbx5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
        do {
            *reinterpret_cast<int64_t*>(rbx5 * 8 + 0x6195e0)();
            ++rbx5;
        } while (r12_4 != rbx5);
    }
    r12_6 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    *reinterpret_cast<int32_t*>(&rbx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    if (!(reinterpret_cast<uint1_t>(r12_6 < 0) | reinterpret_cast<uint1_t>(r12_6 == 0))) {
        do {
            *reinterpret_cast<int64_t*>(rbx7 * 8 + 0x612840)();
            ++rbx7;
        } while (r12_6 != rbx7);
    }
    rbx8 = *reinterpret_cast<void****>(rbp3 + 0x33b8);
    r12_9 = rbx8 + *reinterpret_cast<int64_t*>(rbp3 + 0x33a8) * 8;
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp3 + 0x33a8) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp3 + 0x33a8) == 0))) {
        do {
            rsi10 = *rbx8;
            rbx8 = rbx8 + 8;
            markS_NZr5o3Ubzrci4OmK29cHBJA(rbp3, rsi10);
        } while (r12_9 != rbx8);
    }
    return;
}

void** fun_400a00(void* rdi);

void** markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(void** rdi) {
    void* rsp2;
    void** v3;
    void** rax4;
    void** rcx5;
    void** rbp6;
    void** rbx7;
    void** r13_8;
    void** r12_9;
    void** rsi10;
    void** v11;
    void** rdx12;
    void** rax13;
    void** rax14;
    void** r15_15;
    void*** rdx16;
    void** rax17;
    void** r8_18;
    void** rax19;
    void** rdx20;
    void** rsi21;
    void** rsi22;
    void* v23;
    void** rax24;
    void** rax25;
    void*** rdx26;
    void** rax27;
    void** r8_28;
    void** rax29;
    void** r15_30;
    void** rsi31;
    void** rdx32;
    void** r12_33;
    void** rbp34;
    void** rsi35;
    void** v36;
    void** rax37;
    void** rax38;
    void** r15_39;
    void*** rdx40;
    void** rax41;
    void** r8_42;
    void** rax43;
    void** rdx44;
    void** rsi45;
    void** rdx46;
    void** rsi47;
    void* v48;
    void** rax49;
    void** rax50;
    void*** rdx51;
    void** rax52;
    void** r8_53;
    void** rax54;
    void** r15_55;
    void** rdx56;
    void** rsi57;
    void** rdx58;
    void** rsi59;
    void* v60;
    void** rax61;
    void** rax62;
    void*** rdx63;
    void** rax64;
    void** r8_65;
    void** rax66;
    void** r15_67;
    void** rdx68;
    void** rsi69;
    void** rsi70;
    void* v71;
    void** rax72;
    void** rax73;
    void** rdx74;
    void** rax75;
    void** r8_76;
    void** rax77;
    void** r15_78;
    void** rsi79;
    void** rdx80;
    void** rsi81;
    void* v82;
    void** rax83;
    void** rax84;
    void*** rdx85;
    void** rax86;
    void** r8_87;
    void** rax88;
    void** r15_89;
    void** rsi90;
    void** rdi91;
    void** rsi92;
    void* v93;
    void** rax94;
    void** rax95;
    void** rdx96;
    void** rax97;
    void** r8_98;
    void** rax99;
    void** r15_100;
    void** rdx101;
    void** rsi102;
    void** rsi103;
    void* v104;
    void** rax105;
    void** rax106;
    void*** rdx107;
    void** rax108;
    void** r8_109;
    void** rax110;
    void** r15_111;
    void** rsi112;
    void** rdx113;
    void** rsi114;
    void* v115;
    void** rax116;
    void** rax117;
    void** rdx118;
    void** rax119;
    void** r8_120;
    void** rax121;
    void** r15_122;
    void** rsi123;
    void** rdi124;
    void** rbp125;
    void** rsi126;
    void** v127;
    void** rax128;
    void** rax129;
    void** r14_130;
    void** rdx131;
    void** rax132;
    void** r8_133;
    void** rax134;
    void** rsi135;
    void** rsi136;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x198);
    v3 = rdi;
    rax4 = fun_400a00(reinterpret_cast<int64_t>(rsp2) + 0xc0);
    if (!*reinterpret_cast<int32_t*>(&rax4)) {
        rcx5 = v3;
        rax4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 + 0xc0);
        rbp6 = rax4 + 0xc8;
        rbx7 = rax4;
        r13_8 = *reinterpret_cast<void***>(rcx5);
        r12_9 = rcx5 + 96;
        if (reinterpret_cast<unsigned char>(rax4) < reinterpret_cast<unsigned char>(rbp6)) {
            do {
                rsi10 = v11 - 16;
                if (reinterpret_cast<unsigned char>(rsi10) > reinterpret_cast<unsigned char>(0x1000) && (rax13 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(r12_9, rsi10, rdx12), !!rax13)) {
                    rcx5 = v3;
                    *reinterpret_cast<void***>(rax13) = *reinterpret_cast<void***>(rax13) + 8;
                    rdx12 = *reinterpret_cast<void***>(rcx5 + 48);
                    rax14 = *reinterpret_cast<void***>(rcx5 + 40);
                    if (reinterpret_cast<signed char>(rdx12) > reinterpret_cast<signed char>(rax14)) {
                        r15_15 = *reinterpret_cast<void***>(rcx5 + 56);
                    } else {
                        rdx16 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx16) >> 63) + reinterpret_cast<uint64_t>(rdx16)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax17;
                        rax19 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax17) * 8 + 16, v3, rcx5, r8_18);
                        r15_15 = rax19 + 16;
                        *reinterpret_cast<void***>(rax19 + 8) = reinterpret_cast<void**>(1);
                        rdx20 = *reinterpret_cast<void***>(v3 + 40);
                        rsi21 = *reinterpret_cast<void***>(v3 + 56);
                        rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx20) * 8);
                        fun_400a30(r15_15, rsi21, rdx12);
                        rcx5 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rcx5 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_15;
                        rax14 = *reinterpret_cast<void***>(v3 + 40);
                    }
                    *reinterpret_cast<void***>(r15_15 + reinterpret_cast<unsigned char>(rax14) * 8) = rax13;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v23) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi22) > reinterpret_cast<unsigned char>(0x1000) && (rax24 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(r12_9, rsi22, rdx12), !!rax24)) {
                    *reinterpret_cast<void***>(rax24) = *reinterpret_cast<void***>(rax24) + 8;
                    rdx12 = *reinterpret_cast<void***>(v3 + 48);
                    rax25 = *reinterpret_cast<void***>(v3 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax25)) {
                        rdx26 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx26) >> 63) + reinterpret_cast<uint64_t>(rdx26)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax27;
                        rax29 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax27) * 8 + 16, v3, rcx5, r8_28);
                        r15_30 = rax29 + 16;
                        *reinterpret_cast<void***>(rax29 + 8) = reinterpret_cast<void**>(1);
                        rsi31 = *reinterpret_cast<void***>(v3 + 56);
                        rdx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3 + 40)) * 8);
                        fun_400a30(r15_30, rsi31, rdx32);
                        rdx12 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdx12 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_30;
                        rax25 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_30 = *reinterpret_cast<void***>(v3 + 56);
                    }
                    *reinterpret_cast<void***>(r15_30 + reinterpret_cast<unsigned char>(rax25) * 8) = rax24;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rbx7 = rbx7 + 8;
                rax4 = rbx7;
            } while (reinterpret_cast<unsigned char>(rbp6) > reinterpret_cast<unsigned char>(rbx7));
        }
        r12_33 = r13_8 + 0xffffffffffffffc0;
        if (reinterpret_cast<unsigned char>(r12_33) > reinterpret_cast<unsigned char>(rbx7)) {
            rdx12 = v3;
            rbp34 = rdx12 + 96;
            do {
                rsi35 = v36 - 16;
                if (reinterpret_cast<unsigned char>(rsi35) > reinterpret_cast<unsigned char>(0x1000) && (rax37 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi35, rdx12), !!rax37)) {
                    rcx5 = v3;
                    *reinterpret_cast<void***>(rax37) = *reinterpret_cast<void***>(rax37) + 8;
                    rdx12 = *reinterpret_cast<void***>(rcx5 + 48);
                    rax38 = *reinterpret_cast<void***>(rcx5 + 40);
                    if (reinterpret_cast<signed char>(rdx12) > reinterpret_cast<signed char>(rax38)) {
                        r15_39 = *reinterpret_cast<void***>(rcx5 + 56);
                    } else {
                        rdx40 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax41 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx40) >> 63) + reinterpret_cast<uint64_t>(rdx40)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax41;
                        rax43 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax41) * 8 + 16, v3, rcx5, r8_42);
                        r15_39 = rax43 + 16;
                        *reinterpret_cast<void***>(rax43 + 8) = reinterpret_cast<void**>(1);
                        rdx44 = *reinterpret_cast<void***>(v3 + 40);
                        rsi45 = *reinterpret_cast<void***>(v3 + 56);
                        rdx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx44) << 3);
                        fun_400a30(r15_39, rsi45, rdx46, r15_39, rsi45, rdx46);
                        rdx12 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdx12 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_39;
                        rax38 = *reinterpret_cast<void***>(v3 + 40);
                    }
                    *reinterpret_cast<void***>(r15_39 + reinterpret_cast<unsigned char>(rax38) * 8) = rax37;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi47 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v48) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi47) > reinterpret_cast<unsigned char>(0x1000) && (rax49 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi47, rdx12), !!rax49)) {
                    rcx5 = v3;
                    *reinterpret_cast<void***>(rax49) = *reinterpret_cast<void***>(rax49) + 8;
                    rdx12 = *reinterpret_cast<void***>(rcx5 + 48);
                    rax50 = *reinterpret_cast<void***>(rcx5 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax50)) {
                        rdx51 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax52 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx51) >> 63) + reinterpret_cast<uint64_t>(rdx51)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax52;
                        rax54 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax52) * 8 + 16, v3, rcx5, r8_53);
                        r15_55 = rax54 + 16;
                        *reinterpret_cast<void***>(rax54 + 8) = reinterpret_cast<void**>(1);
                        rdx56 = *reinterpret_cast<void***>(v3 + 40);
                        rsi57 = *reinterpret_cast<void***>(v3 + 56);
                        rdx58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx56) << 3);
                        fun_400a30(r15_55, rsi57, rdx58, r15_55, rsi57, rdx58);
                        rdx12 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdx12 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_55;
                        rax50 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_55 = *reinterpret_cast<void***>(rcx5 + 56);
                    }
                    *reinterpret_cast<void***>(r15_55 + reinterpret_cast<unsigned char>(rax50) * 8) = rax49;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v60) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi59) > reinterpret_cast<unsigned char>(0x1000) && (rax61 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi59, rdx12), !!rax61)) {
                    rcx5 = v3;
                    *reinterpret_cast<void***>(rax61) = *reinterpret_cast<void***>(rax61) + 8;
                    rdx12 = *reinterpret_cast<void***>(rcx5 + 48);
                    rax62 = *reinterpret_cast<void***>(rcx5 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax62)) {
                        rdx63 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax64 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx63) >> 63) + reinterpret_cast<uint64_t>(rdx63)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax64;
                        rax66 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax64) * 8 + 16, v3, rcx5, r8_65);
                        r15_67 = rax66 + 16;
                        *reinterpret_cast<void***>(rax66 + 8) = reinterpret_cast<void**>(1);
                        rdx68 = *reinterpret_cast<void***>(v3 + 40);
                        rsi69 = *reinterpret_cast<void***>(v3 + 56);
                        rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx68) * 8);
                        fun_400a30(r15_67, rsi69, rdx12, r15_67, rsi69, rdx12);
                        rcx5 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rcx5 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_67;
                        rax62 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_67 = *reinterpret_cast<void***>(rcx5 + 56);
                    }
                    *reinterpret_cast<void***>(r15_67 + reinterpret_cast<unsigned char>(rax62) * 8) = rax61;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi70 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v71) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi70) > reinterpret_cast<unsigned char>(0x1000) && (rax72 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi70, rdx12), !!rax72)) {
                    *reinterpret_cast<void***>(rax72) = *reinterpret_cast<void***>(rax72) + 8;
                    rdx12 = *reinterpret_cast<void***>(v3 + 48);
                    rax73 = *reinterpret_cast<void***>(v3 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax73)) {
                        rdx74 = rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2;
                        rax75 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx74) >> 63) + reinterpret_cast<unsigned char>(rdx74)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax75;
                        rax77 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax75) * 8 + 16, rdx74, rcx5, r8_76);
                        r15_78 = rax77 + 16;
                        *reinterpret_cast<void***>(rax77 + 8) = reinterpret_cast<void**>(1);
                        rsi79 = *reinterpret_cast<void***>(v3 + 56);
                        rdx80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3 + 40)) * 8);
                        fun_400a30(r15_78, rsi79, rdx80, r15_78, rsi79, rdx80);
                        rdx12 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdx12 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_78;
                        rax73 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_78 = *reinterpret_cast<void***>(v3 + 56);
                    }
                    *reinterpret_cast<void***>(r15_78 + reinterpret_cast<unsigned char>(rax73) * 8) = rax72;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi81 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v82) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi81) > reinterpret_cast<unsigned char>(0x1000) && (rax83 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi81, rdx12), !!rax83)) {
                    rcx5 = v3;
                    *reinterpret_cast<void***>(rax83) = *reinterpret_cast<void***>(rax83) + 8;
                    rdx12 = *reinterpret_cast<void***>(rcx5 + 48);
                    rax84 = *reinterpret_cast<void***>(rcx5 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax84)) {
                        rdx85 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax86 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx85) >> 63) + reinterpret_cast<uint64_t>(rdx85)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax86;
                        rax88 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax86) * 8 + 16, v3, rcx5, r8_87);
                        r15_89 = rax88 + 16;
                        *reinterpret_cast<void***>(rax88 + 8) = reinterpret_cast<void**>(1);
                        rcx5 = *reinterpret_cast<void***>(v3 + 40);
                        rsi90 = *reinterpret_cast<void***>(v3 + 56);
                        rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx5) << 3);
                        fun_400a30(r15_89, rsi90, rdx12, r15_89, rsi90, rdx12);
                        rdi91 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdi91 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_89;
                        rax84 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_89 = *reinterpret_cast<void***>(rcx5 + 56);
                    }
                    *reinterpret_cast<void***>(r15_89 + reinterpret_cast<unsigned char>(rax84) * 8) = rax83;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi92 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v93) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi92) > reinterpret_cast<unsigned char>(0x1000) && (rax94 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi92, rdx12), !!rax94)) {
                    *reinterpret_cast<void***>(rax94) = *reinterpret_cast<void***>(rax94) + 8;
                    rdx12 = *reinterpret_cast<void***>(v3 + 48);
                    rax95 = *reinterpret_cast<void***>(v3 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax95)) {
                        rdx96 = rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2;
                        rax97 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx96) >> 63) + reinterpret_cast<unsigned char>(rdx96)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax97;
                        rax99 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax97) * 8 + 16, rdx96, rcx5, r8_98);
                        r15_100 = rax99 + 16;
                        *reinterpret_cast<void***>(rax99 + 8) = reinterpret_cast<void**>(1);
                        rdx101 = *reinterpret_cast<void***>(v3 + 40);
                        rsi102 = *reinterpret_cast<void***>(v3 + 56);
                        rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx101) * 8);
                        fun_400a30(r15_100, rsi102, rdx12, r15_100, rsi102, rdx12);
                        rcx5 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rcx5 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_100;
                        rax95 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_100 = *reinterpret_cast<void***>(v3 + 56);
                    }
                    *reinterpret_cast<void***>(r15_100 + reinterpret_cast<unsigned char>(rax95) * 8) = rax94;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi103 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v104) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi103) > reinterpret_cast<unsigned char>(0x1000) && (rax105 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi103, rdx12), !!rax105)) {
                    rcx5 = v3;
                    *reinterpret_cast<void***>(rax105) = *reinterpret_cast<void***>(rax105) + 8;
                    rdx12 = *reinterpret_cast<void***>(rcx5 + 48);
                    rax106 = *reinterpret_cast<void***>(rcx5 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax106)) {
                        rdx107 = reinterpret_cast<void***>(rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2);
                        rax108 = reinterpret_cast<void**>(reinterpret_cast<int64_t>((reinterpret_cast<uint64_t>(rdx107) >> 63) + reinterpret_cast<uint64_t>(rdx107)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax108;
                        rax110 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax108) * 8 + 16, v3, rcx5, r8_109);
                        r15_111 = rax110 + 16;
                        *reinterpret_cast<void***>(rax110 + 8) = reinterpret_cast<void**>(1);
                        rsi112 = *reinterpret_cast<void***>(v3 + 56);
                        rdx113 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3 + 40)) * 8);
                        fun_400a30(r15_111, rsi112, rdx113, r15_111, rsi112, rdx113);
                        rdx12 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdx12 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_111;
                        rax106 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_111 = *reinterpret_cast<void***>(rcx5 + 56);
                    }
                    *reinterpret_cast<void***>(r15_111 + reinterpret_cast<unsigned char>(rax106) * 8) = rax105;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rsi114 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v115) + 0xfffffffffffffff0);
                if (reinterpret_cast<unsigned char>(rsi114) > reinterpret_cast<unsigned char>(0x1000) && (rax116 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp34, rsi114, rdx12), !!rax116)) {
                    *reinterpret_cast<void***>(rax116) = *reinterpret_cast<void***>(rax116) + 8;
                    rdx12 = *reinterpret_cast<void***>(v3 + 48);
                    rax117 = *reinterpret_cast<void***>(v3 + 40);
                    if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(rax117)) {
                        rdx118 = rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2;
                        rax119 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx118) >> 63) + reinterpret_cast<unsigned char>(rdx118)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax119;
                        rax121 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax119) * 8 + 16, rdx118, rcx5, r8_120);
                        r15_122 = rax121 + 16;
                        *reinterpret_cast<void***>(rax121 + 8) = reinterpret_cast<void**>(1);
                        rcx5 = *reinterpret_cast<void***>(v3 + 40);
                        rsi123 = *reinterpret_cast<void***>(v3 + 56);
                        rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx5) << 3);
                        fun_400a30(r15_122, rsi123, rdx12, r15_122, rsi123, rdx12);
                        rdi124 = *reinterpret_cast<void***>(v3 + 56);
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rdi124 + 0xfffffffffffffff0, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r15_122;
                        rax117 = *reinterpret_cast<void***>(v3 + 40);
                    } else {
                        r15_122 = *reinterpret_cast<void***>(v3 + 56);
                    }
                    *reinterpret_cast<void***>(r15_122 + reinterpret_cast<unsigned char>(rax117) * 8) = rax116;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rbx7 = rbx7 + 64;
                rax4 = rbx7;
            } while (reinterpret_cast<unsigned char>(rbx7) < reinterpret_cast<unsigned char>(r12_33));
        }
        if (reinterpret_cast<unsigned char>(r13_8) >= reinterpret_cast<unsigned char>(rbx7)) {
            rbp125 = v3 + 96;
            do {
                rsi126 = v127 - 16;
                if (reinterpret_cast<unsigned char>(rsi126) > reinterpret_cast<unsigned char>(0x1000) && (rax128 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(rbp125, rsi126, rdx12), !!rax128)) {
                    *reinterpret_cast<void***>(rax128) = *reinterpret_cast<void***>(rax128) + 8;
                    rdx12 = *reinterpret_cast<void***>(v3 + 48);
                    rax129 = *reinterpret_cast<void***>(v3 + 40);
                    if (reinterpret_cast<signed char>(rdx12) > reinterpret_cast<signed char>(rax129)) {
                        r14_130 = *reinterpret_cast<void***>(v3 + 56);
                    } else {
                        rdx131 = rdx12 + reinterpret_cast<unsigned char>(rdx12) * 2;
                        rax132 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx131) >> 63) + reinterpret_cast<unsigned char>(rdx131)) >> 1);
                        *reinterpret_cast<void***>(v3 + 48) = rax132;
                        rax134 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax132) * 8 + 16, rdx131, v3, r8_133);
                        *reinterpret_cast<void***>(rax134 + 8) = reinterpret_cast<void**>(1);
                        r14_130 = rax134 + 16;
                        rsi135 = *reinterpret_cast<void***>(v3 + 56);
                        rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3 + 40)) * 8);
                        fun_400a30(r14_130, rsi135, rdx12, r14_130, rsi135, rdx12);
                        rsi136 = *reinterpret_cast<void***>(v3 + 56) + 0xfffffffffffffff0;
                        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi136, rdx12);
                        *reinterpret_cast<void***>(v3 + 56) = r14_130;
                        rax129 = *reinterpret_cast<void***>(v3 + 40);
                    }
                    *reinterpret_cast<void***>(r14_130 + reinterpret_cast<unsigned char>(rax129) * 8) = rax128;
                    *reinterpret_cast<void***>(v3 + 40) = *reinterpret_cast<void***>(v3 + 40) + 1;
                }
                rbx7 = rbx7 + 8;
                rax4 = rbx7;
            } while (reinterpret_cast<unsigned char>(rbx7) <= reinterpret_cast<unsigned char>(r13_8));
        }
    }
    return rax4;
}

uint64_t stackSize_IV9bgfYkinlae0WZ2NZi5JA();

struct s30 {
    struct s30* f0;
    struct s30* f8;
    void** f16;
    signed char[7] pad24;
    int64_t f24;
};

void collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(void** rdi);

void* g6118f8 = reinterpret_cast<void*>(0);

void collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(void** rdi) {
    void** rbp2;
    uint64_t rax3;
    struct s30* rax4;
    struct s30* rdx5;
    struct s30* rcx6;
    void** rdi7;
    int64_t rdx8;
    void** rax9;
    signed char al10;
    void* rax11;
    void** rax12;
    int1_t less13;
    void** rbx14;
    void** r12_15;
    void** rsi16;
    void** rax17;

    rbp2 = rdi;
    rax3 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    if (*reinterpret_cast<int64_t*>(rbp2 + 0x3368) >= reinterpret_cast<int64_t>(rax3)) {
        rax3 = *reinterpret_cast<uint64_t*>(rbp2 + 0x3368);
    }
    *reinterpret_cast<uint64_t*>(rbp2 + 0x3368) = rax3;
    rax4 = *reinterpret_cast<struct s30**>(rbp2 + 0x3108);
    rdx5 = rax4->f0;
    rcx6 = rax4;
    if (rax4 != rdx5) {
        while (rdi7 = rcx6->f16, rcx6 = rdx5, rdx5->f0 != rdx5) {
            rdx5 = rdx5->f0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdi7) = 0;
        *reinterpret_cast<int32_t*>(&rdi7 + 4) = 0;
    }
    *reinterpret_cast<void***>(rbp2 + 96) = rdi7;
    rdx8 = -1;
    if (rax4 != rax4->f0) {
        do {
            rdx8 = rax4->f24;
            rax4 = rax4->f8;
        } while (rax4->f0 != rax4);
    }
    *reinterpret_cast<int64_t*>(rbp2 + 0x68) = rdx8;
    markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(rbp2);
    rax9 = *reinterpret_cast<void***>(rbp2 + 40);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp2 + 0x3370)) >= reinterpret_cast<signed char>(rax9)) {
        rax9 = *reinterpret_cast<void***>(rbp2 + 0x3370);
    }
    *reinterpret_cast<int64_t*>(rbp2 + 0x3350) = *reinterpret_cast<int64_t*>(rbp2 + 0x3350) + 1;
    *reinterpret_cast<void***>(rbp2 + 0x3370) = rax9;
    al10 = collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(rbp2);
    if (al10 && reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp2 + 8)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp2 + 0x28f8))) {
        collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(rbp2);
        rax11 = g6118f8;
        *reinterpret_cast<int64_t*>(rbp2 + 0x3358) = *reinterpret_cast<int64_t*>(rbp2 + 0x3358) + 1;
        rax12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax11) + reinterpret_cast<uint64_t>(rax11));
        if (reinterpret_cast<signed char>(rax12) < reinterpret_cast<signed char>(0x400000)) {
            rax12 = reinterpret_cast<void**>(0x400000);
        }
        less13 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp2 + 0x3360)) < reinterpret_cast<signed char>(rax12);
        *reinterpret_cast<void***>(rbp2 + 8) = rax12;
        if (!less13) {
            rax12 = *reinterpret_cast<void***>(rbp2 + 0x3360);
        }
        *reinterpret_cast<void***>(rbp2 + 0x3360) = rax12;
    }
    rbx14 = *reinterpret_cast<void***>(rbp2 + 56);
    r12_15 = rbx14 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp2 + 40)) * 8;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp2 + 40)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbp2 + 40) == 0))) {
        do {
            rsi16 = *reinterpret_cast<void***>(rbx14);
            rax17 = *reinterpret_cast<void***>(rsi16) - 8;
            *reinterpret_cast<void***>(rsi16) = rax17;
            if (reinterpret_cast<unsigned char>(rax17) <= reinterpret_cast<unsigned char>(7)) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi16);
            }
            rbx14 = rbx14 + 8;
        } while (r12_15 != rbx14);
    }
    *reinterpret_cast<void***>(rbp2 + 40) = reinterpret_cast<void**>(0);
    return;
}

void** rawNewObj_BpNS5yt3b9cMOponsUKh8aw(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    uint64_t rax6;
    void** rdx7;
    void** rax8;
    void* rsi9;
    void*** rdi10;
    void** r8_11;
    void** rcx12;
    void*** rcx13;
    void*** rax14;
    void** rax15;
    void** rax16;
    void** r12_17;
    void** rsi18;
    void** rdx19;
    void** rsi20;

    rax6 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    rdx7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax6) >> 7);
    if (reinterpret_cast<int64_t>(rax6) <= reinterpret_cast<int64_t>(0xf9ff)) {
        rdx7 = reinterpret_cast<void**>(0x1f4);
    }
    if ((reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16)) >= reinterpret_cast<signed char>(rdx7) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 0x28f8)) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 8))) && !*reinterpret_cast<int64_t*>(rdx + 88)) {
        collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(rdx);
    }
    rax8 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(rdx + 96, rsi + 16, rdx7, rcx, r8);
    *reinterpret_cast<void***>(rax8 + 8) = rdi;
    *reinterpret_cast<void***>(rax8) = reinterpret_cast<void**>(4);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16)) <= reinterpret_cast<signed char>(8)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 32) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 16)) * 8) = rax8;
        *reinterpret_cast<void***>(rdx + 16) = *reinterpret_cast<void***>(rdx + 16) + 1;
        return rax8 + 16;
    } else {
        rsi9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 16)) * 8 - 8);
        rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9));
        r8_11 = *rdi10;
        rcx12 = *reinterpret_cast<void***>(r8_11);
        if (reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7) || ((rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 8), r8_11 = *rdi10, rcx12 = *reinterpret_cast<void***>(r8_11), reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7)) || ((rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 16), r8_11 = *rdi10, rcx12 = *reinterpret_cast<void***>(r8_11), reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7)) || ((rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 24), r8_11 = *rdi10, rcx12 = *reinterpret_cast<void***>(r8_11), reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7)) || ((rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 32), r8_11 = *rdi10, rcx12 = *reinterpret_cast<void***>(r8_11), reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7)) || ((rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 40), r8_11 = *rdi10, rcx12 = *reinterpret_cast<void***>(r8_11), reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7)) || (rdi10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 48), r8_11 = *rdi10, rcx12 = *reinterpret_cast<void***>(r8_11), reinterpret_cast<unsigned char>(rcx12) > reinterpret_cast<unsigned char>(7)))))))) {
            *reinterpret_cast<void***>(r8_11) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx12) & 0xfffffffffffffffb);
            *rdi10 = rax8;
        } else {
            rcx13 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 32)) + reinterpret_cast<uint64_t>(rsi9) - 56);
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*rcx13)) <= reinterpret_cast<unsigned char>(7)) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16)) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 24))) {
                    rax14 = reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 24)) * 2);
                    rax15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax14) / reinterpret_cast<signed char>(2));
                    *reinterpret_cast<void***>(rdx + 24) = rax15;
                    rax16 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<unsigned char>(rax15) * 8 + 16, reinterpret_cast<int64_t>(rax14) % reinterpret_cast<signed char>(2), 2, r8_11);
                    *reinterpret_cast<void***>(rax16 + 8) = reinterpret_cast<void**>(1);
                    r12_17 = rax16 + 16;
                    rsi18 = *reinterpret_cast<void***>(rdx + 32);
                    rdx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 16)) * 8);
                    fun_400a30(r12_17, rsi18, rdx19);
                    rsi20 = *reinterpret_cast<void***>(rdx + 32) + 0xfffffffffffffff0;
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi20, rdx19);
                    *reinterpret_cast<void***>(rdx + 32) = r12_17;
                }
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 32) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 16)) * 8) = rax8;
                *reinterpret_cast<void***>(rdx + 16) = *reinterpret_cast<void***>(rdx + 16) + 1;
            } else {
                *reinterpret_cast<void***>(*rcx13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*rcx13)) & 0xfffffffffffffffb);
                *rcx13 = rax8;
            }
        }
        return rax8 + 16;
    }
}

int64_t strlen = 0x400996;

void** fun_400990(void** rdi) {
    goto strlen;
}

void*** gch_IcYaEuuWivYAS86vFMTS3Q = reinterpret_cast<void***>(0);

uint64_t stackSize_IV9bgfYkinlae0WZ2NZi5JA() {
    void* v1;
    uint64_t rax2;
    void*** rax3;

    v1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 0xfffffffffffffff8);
    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (v1) {
        rax3 = gch_IcYaEuuWivYAS86vFMTS3Q;
        rax2 = reinterpret_cast<uint64_t>(rax3) - reinterpret_cast<uint64_t>(v1);
    }
    return rax2;
}

struct s31 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

signed char isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(void** rdi, void** rsi, struct s31* rdx) {
    void** rax4;

    rax4 = *reinterpret_cast<void***>(rdi + 16);
    if (rax4 != rsi) {
        do {
            if (!rax4) 
                break;
            rax4 = *reinterpret_cast<void***>(rax4 + 16);
        } while (rsi != rax4);
        goto addr_408118_4;
    } else {
        goto addr_408118_4;
    }
    rdx->f0 = rdi;
    return 0;
    addr_408118_4:
    rdx->f8 = rdi;
    return 1;
}

int64_t errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A = 0;

void** stderr = reinterpret_cast<void**>(0);

void fun_4009b0(void** rdi, void** rsi);

int32_t fun_400980(void** rdi, void** rsi, void** rdx);

void fun_400a20(void** rdi, void** rsi, void** rdx);

void* raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(void** rdi, void** rsi, void** rdx);

struct s32 {
    signed char[16] pad16;
    void** f16;
    signed char[199] pad216;
    signed char f216;
    signed char[7] pad224;
    int64_t f224;
    int64_t f232;
};

struct s32* excHandler_rqLlY5bs9atDw2OXYqJEn5g = reinterpret_cast<struct s32*>(0);

void** Nim_OfCheck_CACHE22 = reinterpret_cast<void**>(0);

void** g60e868 = reinterpret_cast<void**>(0);

int64_t onUnhandledException_bFrawQlTKZhLweDD36j9b8g = 0;

int64_t localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg = 0;

int64_t globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA = 0;

void** currException_9bVPeDJlYTi9bQApZpfH8wjg = reinterpret_cast<void**>(0);

int64_t fun_400a60(void** rdi, int64_t rsi);

struct s33 {
    signed char[17] pad17;
    void** f17;
};

void showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(void** rdi) {
    void** rbp2;
    int64_t rax3;
    void** rax4;
    void** rsi5;
    void** rcx6;
    void** r8_7;
    void** rax8;
    void** rbx9;
    void** rdx10;
    int32_t eax11;
    void** rdx12;
    void** rdi13;
    void** rdx14;
    void* rsp15;
    void** rbx16;
    void* rsp17;
    struct s32* rax18;
    void** rdi19;
    int1_t zf20;
    int1_t zf21;
    signed char al22;
    void** rdi23;
    int64_t rcx24;
    void** rdx25;
    void** r13_26;
    void** rax27;
    void** r12_28;
    void** rdx29;
    void** rax30;
    void** rdi31;
    void** rax32;
    int1_t zf33;
    int64_t rax34;
    void* rsp35;
    signed char al36;
    int64_t rax37;
    signed char al38;
    void** rax39;
    void* rcx40;
    void** rsi41;
    uint64_t rcx42;
    void** rbp43;
    void** rax44;
    void** rax45;
    struct s32* rax46;
    int64_t rsi47;
    int64_t rax48;
    signed char al49;
    int64_t v50;
    void** rbx51;
    int64_t rdx52;
    uint32_t eax53;
    void** rsi54;
    int1_t zf55;
    void** rcx56;
    unsigned char tmp8_57;
    uint1_t cf58;
    struct s33* rbx59;
    void** rdx60;
    void** r8_61;
    void** rax62;
    uint64_t rbx63;
    void** rcx64;
    void*** rdi65;
    void** v66;
    void* rcx67;
    int64_t rcx68;
    int64_t v69;

    rbp2 = rdi;
    rax3 = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
    if (rax3) {
        if (rdi) {
            rax4 = fun_400990(rdi);
            *reinterpret_cast<int32_t*>(&rsi5) = 24;
            *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
            if (reinterpret_cast<unsigned char>(rax4) > reinterpret_cast<unsigned char>(6)) {
                rsi5 = rax4 + 17;
            }
            rax8 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, rsi5, 0x60f000, rcx6, r8_7);
            __asm__("movq xmm0, [rsp+0x8]");
            __asm__("movhps xmm0, [rsp]");
            __asm__("movups [rax], xmm0");
            fun_400a30(rax8 + 16, rbp2, rax4 + 1);
            rax3 = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
        }
        goto rax3;
    }
    rbx9 = stderr;
    fun_4009b0(rdi, rbx9);
    eax11 = fun_400980(rbx9, rbx9, rdx10);
    if (!eax11) {
        return;
    }
    fun_400a20(rbx9, rbx9, rdx12);
    *reinterpret_cast<int32_t*>(&rdi13) = 0x40a900;
    *reinterpret_cast<int32_t*>(&rdi13 + 4) = 0;
    raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(0x40a900, rbx9, rdx14);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 16 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    while (rbx16 = rdi13, rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 - 8 - 8 - 8 - 0x7f8), rax18 = excHandler_rqLlY5bs9atDw2OXYqJEn5g, rax18 == 0) {
        rdi19 = *reinterpret_cast<void***>(rdi13);
        if (rdi19 == 0x60ef00 || (*reinterpret_cast<void***>(rdi19 + 16) == 0x60ef00 || (zf20 = rdi19 == Nim_OfCheck_CACHE22, !zf20) && ((zf21 = rdi19 == g60e868, zf21) || (al22 = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(rdi19, 0x60ef00, 0x60e860), rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8), !!al22)))) {
            rdi23 = *reinterpret_cast<void***>(rbx16 + 16);
            showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(rdi23);
            fun_400a70(1);
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8);
        } else {
            rbp2 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp17) + 16);
            *reinterpret_cast<int32_t*>(&rcx24) = 0xfa;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
            rdx25 = *reinterpret_cast<void***>(rbx16 + 24);
            __asm__("movdqa xmm0, [rip+0x284a]");
            r13_26 = *reinterpret_cast<void***>(rbx16 + 16);
            while (rcx24) {
                --rcx24;
            }
            __asm__("movaps [rsp+0x10], xmm0");
            if (!rdx25) 
                goto addr_408508_17;
            rax27 = *reinterpret_cast<void***>(rdx25);
            if (reinterpret_cast<signed char>(rax27) <= reinterpret_cast<signed char>(0x7b3)) 
                goto addr_408394_19;
        }
        addr_408508_17:
        *reinterpret_cast<int32_t*>(&r12_28) = 30;
        *reinterpret_cast<int32_t*>(&r12_28 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx29) = 28;
        *reinterpret_cast<int32_t*>(&rdx29 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbx16) = 30;
        *reinterpret_cast<int32_t*>(&rbx16 + 4) = 0;
        addr_408518_20:
        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbp2) + reinterpret_cast<unsigned char>(rdx29)) = 0x5b20;
        if (!r13_26) {
            addr_4085c0_21:
            *reinterpret_cast<int32_t*>(&rax30) = 0;
            *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
            goto addr_408400_22;
        } else {
            rax30 = fun_400990(r13_26);
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
            rdx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax30) + reinterpret_cast<unsigned char>(r12_28));
            if (reinterpret_cast<signed char>(rdx25) <= reinterpret_cast<signed char>(0x7cf)) {
                addr_408400_22:
                rdi31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp2) + reinterpret_cast<unsigned char>(r12_28));
                rdx25 = rax30;
                fun_400a30(rdi31, r13_26, rdx25, rdi31, r13_26, rdx25);
                rax32 = fun_400990(r13_26);
                rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8);
                r12_28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_28) + reinterpret_cast<unsigned char>(rax32));
                rbx16 = r12_28;
            }
            if (reinterpret_cast<signed char>(rbx16) <= reinterpret_cast<signed char>(0x7cd)) {
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbp2) + reinterpret_cast<unsigned char>(r12_28)) = 0xa5d;
            }
        }
        addr_408432_27:
        zf33 = onUnhandledException_bFrawQlTKZhLweDD36j9b8g == 0;
        if (!zf33) 
            goto addr_408440_28;
        showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(rbp2);
        fun_400a70(1);
        rax34 = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
        rsp35 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8 - 8);
        if (!rax34) 
            goto addr_408676_31;
        al36 = reinterpret_cast<signed char>(rax34());
        rsp35 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp35) - 8 + 8);
        if (!al36) 
            goto addr_408698_33;
        addr_408676_31:
        rax37 = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA;
        if (!rax37) 
            goto addr_40868b_34;
        al38 = reinterpret_cast<signed char>(rax37(1));
        rsp35 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp35) - 8 + 8);
        if (!al38) 
            goto addr_408698_33;
        addr_40868b_34:
        rdi13 = reinterpret_cast<void**>(1);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp35) + 8);
        continue;
        addr_408394_19:
        if (!rax27) {
            *reinterpret_cast<int32_t*>(&rax39) = 28;
            *reinterpret_cast<int32_t*>(&rax39 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx29) = 28;
            *reinterpret_cast<int32_t*>(&rdx29 + 4) = 0;
        } else {
            rcx40 = reinterpret_cast<void*>(rbp2 + 28);
            rsi41 = rdx25 + 16;
            if (reinterpret_cast<unsigned char>(rax27) >= reinterpret_cast<unsigned char>(8)) {
                *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rcx40) + reinterpret_cast<unsigned char>(rax27) - 8) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rsi41) + reinterpret_cast<unsigned char>(rax27) + 0xfffffffffffffff8);
                rcx42 = reinterpret_cast<uint64_t>(rcx40) - reinterpret_cast<uint64_t>(rbp2 + 32) + reinterpret_cast<unsigned char>(rax27) >> 3;
                while (rcx42) {
                    --rcx42;
                }
                goto addr_4083cc_42;
            }
            if (*reinterpret_cast<unsigned char*>(&rax27) & 4) {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rcx40) + reinterpret_cast<unsigned char>(rax27) - 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rsi41) + reinterpret_cast<unsigned char>(rax27) + 0xfffffffffffffffc);
                rax27 = *reinterpret_cast<void***>(rdx25);
            } else {
                if (rax27) {
                    if (*reinterpret_cast<unsigned char*>(&rax27) & 2) {
                        *reinterpret_cast<uint32_t*>(&rsi41) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rsi41) + reinterpret_cast<unsigned char>(rax27) + 0xfffffffffffffffe);
                        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rcx40) + reinterpret_cast<unsigned char>(rax27) - 2) = *reinterpret_cast<int16_t*>(&rsi41);
                        rax27 = *reinterpret_cast<void***>(rdx25);
                    } else {
                        addr_4083cc_42:
                        rax27 = *reinterpret_cast<void***>(rdx25);
                    }
                }
            }
            rax39 = rax27 + 28;
            r12_28 = rax39;
            if (reinterpret_cast<signed char>(rax39) <= reinterpret_cast<signed char>(0x7cd)) {
                rdx29 = rax39;
            } else {
                if (!r13_26) {
                    if (reinterpret_cast<signed char>(rax39) <= reinterpret_cast<signed char>(0x7cf)) {
                        goto addr_4085c0_21;
                    }
                } else {
                    rax30 = fun_400990(r13_26);
                    rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
                    rdx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax30) + reinterpret_cast<unsigned char>(r12_28));
                    if (reinterpret_cast<signed char>(rdx25) > reinterpret_cast<signed char>(0x7cf)) 
                        goto addr_408432_27; else 
                        goto addr_408400_22;
                }
            }
        }
        rbx16 = rax39 + 2;
        r12_28 = rbx16;
        goto addr_408518_20;
    }
    if (!rax18->f216) {
        do {
            rbp43 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
            if (rbp43) {
                *reinterpret_cast<void***>(rbp43 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rbp43 + 0xfffffffffffffff0) + 8;
            }
            rdx25 = *reinterpret_cast<void***>(rbx16 + 48);
            if (rdx25 && (rax44 = *reinterpret_cast<void***>(rdx25 + 0xfffffffffffffff0) - 8, *reinterpret_cast<void***>(rdx25 + 0xfffffffffffffff0) = rax44, reinterpret_cast<unsigned char>(rax44) <= reinterpret_cast<unsigned char>(7))) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rdx25 + 0xfffffffffffffff0);
            }
            *reinterpret_cast<void***>(rbx16 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rbx16 + 0xfffffffffffffff0) + 8;
            rax45 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
            *reinterpret_cast<void***>(rbx16 + 48) = rbp43;
            if (rax45 && (rdx25 = *reinterpret_cast<void***>(rax45 + 0xfffffffffffffff0) + 0xfffffffffffffff8, *reinterpret_cast<void***>(rax45 + 0xfffffffffffffff0) = rdx25, reinterpret_cast<unsigned char>(rdx25) <= reinterpret_cast<unsigned char>(7))) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rax45 + 0xfffffffffffffff0);
            }
            rax46 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
            *reinterpret_cast<int32_t*>(&rsi47) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = 0;
            currException_9bVPeDJlYTi9bQApZpfH8wjg = rbx16;
            rdi13 = reinterpret_cast<void**>(&rax46->f16);
            rax48 = fun_400a60(rdi13, 1);
            addr_4082e8_63:
            al49 = reinterpret_cast<signed char>(rax48(rdi13, rsi47, rdx25));
            addr_408242_64:
        } while (al49);
    } else {
        rsi47 = rax18->f232;
        rax48 = rax18->f224;
        if (!rsi47) 
            goto addr_4082e8_63;
        al49 = reinterpret_cast<signed char>(rax48());
        goto addr_408242_64;
    }
    addr_408246_67:
    goto v50;
    addr_408440_28:
    rbx51 = rbp2;
    do {
        *reinterpret_cast<void***>(&rdx52) = *reinterpret_cast<void***>(rbx51);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx52) + 4) = 0;
        rbx51 = rbx51 + 4;
        eax53 = static_cast<uint32_t>(rdx52 - 0x1010101) & ~reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx52)) & 0x80808080;
    } while (!eax53);
    *reinterpret_cast<uint32_t*>(&rsi54) = 24;
    *reinterpret_cast<int32_t*>(&rsi54 + 4) = 0;
    zf55 = (eax53 & 0x8080) == 0;
    if (zf55) {
        eax53 = eax53 >> 16;
    }
    if (zf55) {
        rbx51 = rbx51 + 2;
    }
    *reinterpret_cast<uint32_t*>(&rcx56) = eax53;
    *reinterpret_cast<int32_t*>(&rcx56 + 4) = 0;
    tmp8_57 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx56) + *reinterpret_cast<signed char*>(&eax53));
    cf58 = reinterpret_cast<uint1_t>(tmp8_57 < *reinterpret_cast<unsigned char*>(&rcx56));
    *reinterpret_cast<unsigned char*>(&rcx56) = tmp8_57;
    rbx59 = reinterpret_cast<struct s33*>(reinterpret_cast<unsigned char>(rbx51) - (3 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rbx51) < reinterpret_cast<unsigned char>(3 + static_cast<uint64_t>(cf58))))) - reinterpret_cast<unsigned char>(rbp2));
    if (reinterpret_cast<uint64_t>(rbx59) > 6) {
        rsi54 = reinterpret_cast<void**>(&rbx59->f17);
    }
    *reinterpret_cast<uint32_t*>(&rdx60) = 0x60f000;
    *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
    rax62 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, rsi54, 0x60f000, rcx56, r8_61);
    rbx63 = reinterpret_cast<uint64_t>(rbx59) + 1;
    __asm__("movq xmm0, [rsp+0x8]");
    rcx64 = rax62 + 16;
    __asm__("movhps xmm0, [rsp]");
    __asm__("movups [rax], xmm0");
    if (*reinterpret_cast<uint32_t*>(&rbx63) >= 8) {
        rdi65 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax62 + 24) & 0xfffffffffffffff8);
        *reinterpret_cast<void***>(rax62 + 16) = v66;
        *reinterpret_cast<uint32_t*>(&rdx60) = *reinterpret_cast<uint32_t*>(&rbx63);
        *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
        *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx64) + reinterpret_cast<unsigned char>(rdx60) + 0xfffffffffffffff8) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp2) + reinterpret_cast<unsigned char>(rdx60) + 0xfffffffffffffff8);
        rcx67 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx64) - reinterpret_cast<uint64_t>(rdi65));
        rsi54 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp2) - reinterpret_cast<uint64_t>(rcx67));
        *reinterpret_cast<uint32_t*>(&rcx68) = *reinterpret_cast<uint32_t*>(&rbx63) + *reinterpret_cast<int32_t*>(&rcx67) >> 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = 0;
        while (rcx68) {
            --rcx68;
            *rdi65 = *reinterpret_cast<void***>(rsi54);
            rdi65 = rdi65 + 8;
            rsi54 = rsi54 + 8;
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&rbx63) & 4) {
            *reinterpret_cast<void***>(rax62 + 16) = *reinterpret_cast<void***>(rbp2);
            *reinterpret_cast<uint32_t*>(&rdx60) = *reinterpret_cast<uint32_t*>(&rbx63);
            *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rsi54) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp2) + reinterpret_cast<unsigned char>(rdx60) + 0xfffffffffffffffc);
            *reinterpret_cast<int32_t*>(&rsi54 + 4) = 0;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rcx64) + reinterpret_cast<unsigned char>(rdx60) + 0xfffffffffffffffc) = *reinterpret_cast<uint32_t*>(&rsi54);
        } else {
            if (*reinterpret_cast<uint32_t*>(&rbx63) && (*reinterpret_cast<uint32_t*>(&rdx60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp2)), *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0, *reinterpret_cast<void***>(rax62 + 16) = rdx60, !!(*reinterpret_cast<unsigned char*>(&rbx63) & 2))) {
                *reinterpret_cast<uint32_t*>(&rdx60) = *reinterpret_cast<uint32_t*>(&rbx63);
                *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rsi54) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rbp2) + reinterpret_cast<unsigned char>(rdx60) + 0xfffffffffffffffe);
                *reinterpret_cast<int32_t*>(&rsi54 + 4) = 0;
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rcx64) + reinterpret_cast<unsigned char>(rdx60) + 0xfffffffffffffffe) = *reinterpret_cast<int16_t*>(&rsi54);
            }
        }
    }
    onUnhandledException_bFrawQlTKZhLweDD36j9b8g(rax62, rsi54, rdx60);
    goto addr_408246_67;
    addr_408698_33:
    goto v69;
}

void** setLengthStr(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** r12_6;
    void** r13_7;
    void** rax8;
    void** rbx9;
    void** rcx10;
    void** rax11;
    void** rdx12;
    void** r15_13;
    void** rax14;
    void** rdx15;
    void** rdi16;

    *reinterpret_cast<int32_t*>(&r12_6) = 0;
    *reinterpret_cast<int32_t*>(&r12_6 + 4) = 0;
    if (reinterpret_cast<signed char>(rsi) >= reinterpret_cast<signed char>(0)) {
        r12_6 = rsi;
    }
    if (!rdi) {
        *reinterpret_cast<int32_t*>(&r13_7) = 7;
        *reinterpret_cast<int32_t*>(&r13_7 + 4) = 0;
        if (reinterpret_cast<signed char>(rsi) >= reinterpret_cast<signed char>(7)) {
            r13_7 = rsi;
        }
        rax8 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, r13_7 + 17, 0x60f000, rcx, r8);
        rbx9 = rax8;
        fun_4009c0(rax8);
        __asm__("movq xmm0, [rsp+0x8]");
        __asm__("movhps xmm0, [rsp+0x8]");
        __asm__("movups [rbx], xmm0");
    } else {
        rcx10 = *reinterpret_cast<void***>(rdi + 8);
        rbx9 = rdi;
        rax11 = reinterpret_cast<void**>(0x3fffffffffffffff & reinterpret_cast<unsigned char>(rcx10));
        if (reinterpret_cast<signed char>(rax11) < reinterpret_cast<signed char>(r12_6)) {
            *reinterpret_cast<int32_t*>(&rdx12) = 4;
            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
            if (rax11 && (rdx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rax11)), !!(reinterpret_cast<unsigned char>(rcx10) & 0x3fffffffffff0000))) {
                rdx12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rdx12) + reinterpret_cast<unsigned char>(rax11)) >> 1);
            }
            *reinterpret_cast<int32_t*>(&r15_13) = 7;
            *reinterpret_cast<int32_t*>(&r15_13 + 4) = 0;
            if (reinterpret_cast<signed char>(rsi) >= reinterpret_cast<signed char>(rdx12)) {
                rdx12 = rsi;
            }
            if (reinterpret_cast<signed char>(rdx12) >= reinterpret_cast<signed char>(7)) {
                r15_13 = rdx12;
            }
            rax14 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, r15_13 + 17, 0x60f000, rcx10, r8);
            *reinterpret_cast<void***>(rax14) = reinterpret_cast<void**>(0);
            rbx9 = rax14;
            *reinterpret_cast<void***>(rax14 + 8) = r15_13;
            rdx15 = *reinterpret_cast<void***>(rdi);
            *reinterpret_cast<void***>(rax14) = rdx15;
            fun_400a30(rax14 + 16, rdi + 16, rdx15 + 1);
            rdi16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) + 16);
            fun_4009c0(rdi16);
            *reinterpret_cast<void***>(rbx9 + 8) = rdx12;
        }
    }
    *reinterpret_cast<void***>(rbx9) = r12_6;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx9) + reinterpret_cast<unsigned char>(r12_6) + 16) = 0;
    return rbx9;
}

unsigned char isOnStack_dJJW59cIgsBmT59aZrOM71Mg(void*** rdi, void** rsi, void** rdx) {
    void*** rcx4;
    int32_t eax5;

    rcx4 = gch_IcYaEuuWivYAS86vFMTS3Q;
    eax5 = 0;
    if (reinterpret_cast<int64_t>(__zero_stack_offset()) + 0xfffffffffffffff8 <= reinterpret_cast<uint64_t>(rdi)) {
        *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx4) >= reinterpret_cast<uint64_t>(rdi));
    }
    return *reinterpret_cast<unsigned char*>(&eax5);
}

int64_t ferror = 0x400986;

int32_t fun_400980(void** rdi, void** rsi, void** rdx) {
    goto ferror;
}

int64_t clearerr = 0x400a26;

void fun_400a20(void** rdi, void** rsi, void** rdx) {
    goto clearerr;
}

void** newObj(void** rdi, void** rsi);

void** copyStringRC1(void** rdi, void** rsi);

void raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(void** rdi, void** rsi);

void* raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(void** rdi, void** rsi, void** rdx) {
    void** rsi4;
    void** rax5;
    void** rbp6;
    void** rbx7;
    void** rax8;
    void** rax9;

    *reinterpret_cast<int32_t*>(&rsi4) = 56;
    *reinterpret_cast<int32_t*>(&rsi4 + 4) = 0;
    rax5 = newObj(0x60ed20, 56);
    *reinterpret_cast<void***>(rax5) = reinterpret_cast<void**>(0x612620);
    rbp6 = *reinterpret_cast<void***>(rax5 + 24);
    rbx7 = rax5;
    rax8 = copyStringRC1(rdi, 56);
    *reinterpret_cast<void***>(rbx7 + 24) = rax8;
    if (!rbp6) 
        goto addr_4086eb_2;
    rsi4 = rbp6 + 0xfffffffffffffff0;
    rax9 = *reinterpret_cast<void***>(rbp6 + 0xfffffffffffffff0) - 8;
    *reinterpret_cast<void***>(rbp6 + 0xfffffffffffffff0) = rax9;
    if (reinterpret_cast<unsigned char>(rax9) <= reinterpret_cast<unsigned char>(7)) 
        goto addr_408702_4;
    while (1) {
        addr_4086eb_2:
        if (!*reinterpret_cast<void***>(rbx7 + 16)) {
            *reinterpret_cast<void***>(rbx7 + 16) = reinterpret_cast<void**>("IOError");
        }
        raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(rbx7, rsi4);
        addr_408702_4:
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi4);
    }
}

struct s34 {
    signed char[128] pad128;
    void** f128;
};

int64_t fun_4009f0();

void* fun_4009e0(void* rdi, int64_t rsi, void** rdx);

signed char readLine_sO1bQXVRA6RP9cdYJXNKeSw(void** rdi, void*** rsi, void** rdx, void** rcx, void** r8) {
    void** r15_6;
    void*** r13_7;
    void** r12_8;
    void** rdi9;
    void** rax10;
    void** rbx11;
    unsigned char al12;
    void** rsi13;
    void** rdx14;
    struct s34* r14_15;
    void* rbp16;
    void** rdi17;
    void** rsi18;
    int64_t rax19;
    int1_t zf20;
    unsigned char v21;
    int32_t eax22;
    void* rax23;
    void** rsi24;
    void** rax25;
    unsigned char al26;
    void** rsi27;
    void** rdx28;
    void** rdx29;
    void** rax30;
    void** rbp31;
    void** rsi32;
    uint32_t eax33;
    void** rax34;
    unsigned char al35;
    void** rsi36;
    void** rdx37;
    void** rax38;
    unsigned char al39;
    uint32_t eax40;
    void** rsi41;
    void** rdx42;

    r15_6 = rdi;
    r13_7 = rsi;
    *reinterpret_cast<int32_t*>(&r12_8) = 80;
    *reinterpret_cast<int32_t*>(&r12_8 + 4) = 0;
    rdi9 = *rsi;
    if (rdi9 && reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi9)) >= reinterpret_cast<signed char>(80)) {
        r12_8 = *reinterpret_cast<void***>(rdi9);
    }
    rax10 = setLengthStr(rdi9, r12_8, rdx, rcx, r8);
    rbx11 = rax10;
    al12 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(r13_7, r12_8, rdx);
    if (!al12) {
        if (rbx11) {
            *reinterpret_cast<void***>(rbx11 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rbx11 + 0xfffffffffffffff0) + 8;
        }
        if (reinterpret_cast<unsigned char>(*r13_7) > reinterpret_cast<unsigned char>(0xfff)) {
            rcx = *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0);
            rsi13 = *r13_7 + 0xfffffffffffffff0;
            rdx14 = rcx + 0xfffffffffffffff8;
            *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0) = rdx14;
            if (reinterpret_cast<unsigned char>(rdx14) <= reinterpret_cast<unsigned char>(7)) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi13);
            }
        }
    }
    *r13_7 = rbx11;
    *reinterpret_cast<int32_t*>(&r14_15) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = 0;
    while ((rbp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r14_15) + 16), rdi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx11) + reinterpret_cast<uint64_t>(rbp16)), fun_4009c0(rdi17, rdi17), *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(&r12_8), *reinterpret_cast<int32_t*>(&rsi18 + 4) = 0, rax19 = fun_4009f0(), zf20 = rax19 == 0, v21 = reinterpret_cast<uint1_t>(!zf20), !zf20) || (eax22 = fun_400980(r15_6, rsi18, r15_6), eax22 == 0)) {
        rbx11 = *r13_7;
        rax23 = fun_4009e0(reinterpret_cast<unsigned char>(rbx11) + reinterpret_cast<uint64_t>(rbp16), 10, r12_8);
        if (rax23) 
            goto addr_408c88_13;
        r14_15 = reinterpret_cast<struct s34*>(reinterpret_cast<unsigned char>(r12_8) + reinterpret_cast<uint64_t>(r14_15) + 0xffffffffffffffff);
        rsi24 = reinterpret_cast<void**>(&r14_15->f128);
        rax25 = setLengthStr(rbx11, rsi24, r12_8, rcx, r8);
        rbx11 = rax25;
        al26 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(r13_7, rsi24, r12_8);
        if (!al26) {
            if (rbx11) {
                *reinterpret_cast<void***>(rbx11 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rbx11 + 0xfffffffffffffff0) + 8;
            }
            if (reinterpret_cast<unsigned char>(*r13_7) > reinterpret_cast<unsigned char>(0xfff) && (rcx = *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0), rsi27 = *r13_7 + 0xfffffffffffffff0, rdx28 = rcx + 0xfffffffffffffff8, *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0) = rdx28, reinterpret_cast<unsigned char>(rdx28) <= reinterpret_cast<unsigned char>(7))) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi27);
            }
        }
        *r13_7 = rbx11;
        *reinterpret_cast<int32_t*>(&r12_8) = 0x80;
        *reinterpret_cast<int32_t*>(&r12_8 + 4) = 0;
    }
    fun_400a20(r15_6, rsi18, r15_6);
    rax23 = raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(0x40a900, rsi18, r15_6);
    addr_408c88_13:
    rdx29 = rbx11 + 16;
    rax30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax23) - reinterpret_cast<unsigned char>(rdx29));
    rbp31 = rax30;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax30 == 0))) {
        rsi32 = rax30 + 0xffffffffffffffff;
        eax33 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbx11) + reinterpret_cast<unsigned char>(rsi32) + 16);
        if (*reinterpret_cast<signed char*>(&eax33) == 13) {
            rax34 = setLengthStr(rbx11, rsi32, rdx29, rcx, r8);
            al35 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(r13_7, rsi32, rdx29);
            if (!al35) {
                if (rax34) {
                    *reinterpret_cast<void***>(rax34 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rax34 + 0xfffffffffffffff0) + 8;
                }
                if (reinterpret_cast<unsigned char>(*r13_7) > reinterpret_cast<unsigned char>(0xfff) && (rsi36 = *r13_7 + 0xfffffffffffffff0, rdx37 = *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0) + 0xfffffffffffffff8, *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0) = rdx37, reinterpret_cast<unsigned char>(rdx37) <= reinterpret_cast<unsigned char>(7))) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi36);
                }
            }
            *r13_7 = rax34;
            if (rbp31 == 1) 
                goto addr_408d14_28; else 
                goto addr_408d8a_29;
        } else {
            if (!*reinterpret_cast<signed char*>(&eax33) && (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(r12_8) + reinterpret_cast<uint64_t>(r14_15) + 0xffffffffffffffff) > reinterpret_cast<signed char>(rbp31) && *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx11) + reinterpret_cast<unsigned char>(rbp31) + 17))) {
                rbp31 = rsi32;
            }
        }
    }
    rax38 = setLengthStr(rbx11, rbp31, rdx29, rcx, r8);
    al39 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(r13_7, rbp31, rdx29);
    if (al39) {
        addr_408d0b_33:
        *r13_7 = rax38;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rbp31) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rbp31 == 0))) {
            addr_408d8a_29:
            v21 = 1;
            goto addr_408d14_28;
        } else {
            addr_408d14_28:
            eax40 = v21;
            return *reinterpret_cast<signed char*>(&eax40);
        }
    } else {
        if (rax38) {
            *reinterpret_cast<void***>(rax38 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rax38 + 0xfffffffffffffff0) + 8;
        }
        if (reinterpret_cast<unsigned char>(*r13_7) <= reinterpret_cast<unsigned char>(0xfff)) 
            goto addr_408d0b_33;
        rsi41 = *r13_7 + 0xfffffffffffffff0;
        rdx42 = *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0) + 0xfffffffffffffff8;
        *reinterpret_cast<void***>(*r13_7 + 0xfffffffffffffff0) = rdx42;
        if (reinterpret_cast<unsigned char>(rdx42) > reinterpret_cast<unsigned char>(7)) 
            goto addr_408d0b_33;
    }
    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi41);
    *r13_7 = rax38;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rbp31) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rbp31 == 0)) 
        goto addr_408d14_28;
    goto addr_408d8a_29;
}

void nimGC_setStackBottom(void*** rdi, void** rsi) {
    void*** rax3;

    rax3 = gch_IcYaEuuWivYAS86vFMTS3Q;
    if (rax3) {
        if (rax3 == rdi) {
            return;
        } else {
            if (reinterpret_cast<int64_t>(rdi) < reinterpret_cast<int64_t>(rax3)) {
                rdi = rax3;
            }
        }
    }
    gch_IcYaEuuWivYAS86vFMTS3Q = rdi;
    return;
}

int64_t g612108 = 0;

int64_t g612138 = 0;

void** g60f038 = reinterpret_cast<void**>(0);

int64_t g612398 = 0;

void** g6123b8 = reinterpret_cast<void**>(0);

int64_t gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg = 0;

int64_t g6123c0 = 0;

void initGC_njssp69aa7hvxte9bJ8uuDcg(void*** rdi, void** rsi) {
    void** rax3;
    int1_t zf4;
    void** rbx5;
    int1_t zf6;
    void** r8_7;
    void** rdx8;
    int64_t* rdi9;
    void* tmp64_10;
    void* rcx11;
    void** rsi12;
    int64_t rcx13;
    void** rax14;
    int1_t zf15;
    void** rbx16;
    int1_t zf17;
    void** r8_18;
    void** rdx19;
    int64_t* rdi20;
    void* tmp64_21;
    void* rcx22;
    void** rsi23;
    int64_t rcx24;
    void** rax25;
    int1_t zf26;
    void** rbx27;
    int1_t zf28;
    void** r8_29;
    void** rdx30;
    int64_t* rdi31;
    void** rsi32;
    void* tmp64_33;
    void* rcx34;
    int64_t rcx35;
    void** rax36;
    int1_t zf37;
    void** rbx38;
    int1_t zf39;
    void** r8_40;
    void** rdx41;
    int64_t* rdi42;
    void* tmp64_43;
    void* rcx44;
    void** rsi45;
    int64_t rcx46;
    void** rax47;
    int1_t zf48;
    void** rbx49;
    int1_t zf50;
    void** r8_51;
    void** rdx52;
    int64_t* rdi53;
    void* tmp64_54;
    void* rcx55;
    int64_t rcx56;
    int64_t rax57;

    __asm__("pxor xmm0, xmm0");
    __asm__("movups [rip+0x20dc65], xmm0");
    __asm__("movups [rip+0x20dc6e], xmm0");
    __asm__("movups [rip+0x20dc77], xmm0");
    __asm__("movdqa xmm0, [rip+0x646f]");
    g60f018 = reinterpret_cast<void**>(0x400);
    __asm__("movups [rip+0x20a8f5], xmm0");
    rax3 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, 0x2030);
    zf4 = g612108 == 0;
    rbx5 = rax3 + 32;
    if (zf4) {
        zf6 = g612138 == 0;
        if (zf6) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20d5b3], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx5, rbx5 + 0x2030, r8_7);
    rdx8 = rbx5 + 16;
    rdi9 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx5 + 24) & 0xfffffffffffffff8);
    tmp64_10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax3 + 8)));
    g6118f8 = tmp64_10;
    rcx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx8) - reinterpret_cast<uint64_t>(rdi9));
    *reinterpret_cast<void***>(rax3 + 40) = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rsi12) = 0x2030;
    *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
    __asm__("movdqa xmm1, [rip+0x6406]");
    *reinterpret_cast<void***>(rbx5 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int64_t*>(rbx5 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx13) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx11) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    while (rcx13) {
        --rcx13;
        *rdi9 = 0;
        ++rdi9;
        rsi12 = rsi12 + 8;
    }
    g60f020 = rdx8;
    __asm__("movups [rip+0x20a894], xmm1");
    rax14 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, rsi12);
    zf15 = g612108 == 0;
    rbx16 = rax14 + 32;
    if (zf15) {
        zf17 = g612138 == 0;
        if (zf17) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20d613], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx16, rbx16 + 0x2030, r8_18);
    rdx19 = rbx16 + 16;
    rdi20 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx16 + 24) & 0xfffffffffffffff8);
    tmp64_21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax14 + 8)));
    g6118f8 = tmp64_21;
    rcx22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx19) - reinterpret_cast<uint64_t>(rdi20));
    *reinterpret_cast<void***>(rax14 + 40) = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rsi23) = 0x2030;
    *reinterpret_cast<int32_t*>(&rsi23 + 4) = 0;
    __asm__("movdqa xmm2, [rip+0x636d]");
    *reinterpret_cast<void***>(rbx16 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int64_t*>(rbx16 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx24) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx22) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    while (rcx24) {
        --rcx24;
        *rdi20 = 0;
        ++rdi20;
        rsi23 = rsi23 + 8;
    }
    g60f050 = rdx19;
    __asm__("movups [rip+0x20a7e3], xmm2");
    rax25 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, rsi23);
    zf26 = g612108 == 0;
    rbx27 = rax25 + 32;
    if (zf26) {
        zf28 = g612138 == 0;
        if (zf28) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20d5e3], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx27, rbx27 + 0x2030, r8_29);
    rdx30 = rbx27 + 16;
    rdi31 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx27 + 24) & 0xfffffffffffffff8);
    *reinterpret_cast<int32_t*>(&rsi32) = 0x2030;
    *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
    tmp64_33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax25 + 8)));
    g6118f8 = tmp64_33;
    rcx34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx30) - reinterpret_cast<uint64_t>(rdi31));
    *reinterpret_cast<void***>(rax25 + 40) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(rbx27 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int64_t*>(rbx27 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx35) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx34) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = 0;
    while (rcx35) {
        --rcx35;
        *rdi31 = 0;
        ++rdi31;
        rsi32 = rsi32 + 8;
    }
    g60f038 = rdx30;
    rax36 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, rsi32);
    zf37 = g612108 == 0;
    rbx38 = rax36 + 32;
    if (zf37) {
        zf39 = g612138 == 0;
        if (zf39) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20d643], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx38, rbx38 + 0x2030, r8_40);
    rdx41 = rbx38 + 16;
    rdi42 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx38 + 24) & 0xfffffffffffffff8);
    tmp64_43 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax36 + 8)));
    g6118f8 = tmp64_43;
    rcx44 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx41) - reinterpret_cast<uint64_t>(rdi42));
    *reinterpret_cast<void***>(rax36 + 40) = reinterpret_cast<void**>(1);
    __asm__("movdqa xmm0, [rip+0x622f]");
    *reinterpret_cast<int32_t*>(&rsi45) = 0x2030;
    *reinterpret_cast<int32_t*>(&rsi45 + 4) = 0;
    *reinterpret_cast<void***>(rbx38 + 16) = reinterpret_cast<void**>(0);
    __asm__("movdqa xmm3, [rip+0x6234]");
    *reinterpret_cast<int64_t*>(rbx38 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx46) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx44) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = 0;
    while (rcx46) {
        --rcx46;
        *rdi42 = 0;
        ++rdi42;
        rsi45 = rsi45 + 8;
    }
    g6123a0 = rdx41;
    __asm__("movups [rip+0x20da18], xmm0");
    g612398 = 0;
    __asm__("movups [rip+0x20da26], xmm3");
    rax47 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, rsi45);
    zf48 = g612108 == 0;
    rbx49 = rax47 + 32;
    if (zf48) {
        zf50 = g612138 == 0;
        if (zf50) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20d583], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx49, rbx49 + 0x2030, r8_51);
    rdx52 = rbx49 + 16;
    rdi53 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx49 + 24) & 0xfffffffffffffff8);
    tmp64_54 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax47 + 8)));
    g6118f8 = tmp64_54;
    rcx55 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx52) - reinterpret_cast<uint64_t>(rdi53));
    *reinterpret_cast<void***>(rax47 + 40) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(rbx49 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int64_t*>(rbx49 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx56) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx55) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = 0;
    while (rcx56) {
        --rcx56;
        *rdi53 = 0;
        ++rdi53;
    }
    g6123b8 = rdx52;
    rax57 = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
    g6123c0 = rax57;
    gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg = rax57 + 1;
    return;
}

int64_t signal = 0x400a16;

void fun_400a10(int64_t rdi, int64_t rsi) {
    goto signal;
}

int64_t flockfile = 0x4009d6;

void fun_4009d0(int64_t rdi) {
    goto flockfile;
}

void cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(struct s27* rdi) {
    struct s27* rbp2;
    uint64_t r13_3;
    uint64_t r12_4;
    void** r14_5;
    void** rdx6;
    void** rcx7;
    void** r8_8;
    void** rax9;
    void** rdx10;
    void** rbx11;
    void** rsi12;
    uint64_t rdi13;
    void** r8_14;
    uint64_t rcx15;
    uint64_t rax16;

    rbp2 = rdi;
    r13_3 = rdi->f8;
    r12_4 = r13_3 + 1;
    rdi->f8 = r12_4 + r12_4 + 0xffffffffffffffff;
    r14_5 = reinterpret_cast<void**>(r12_4 << 4);
    rax9 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, r14_5 + 16, rdx6, rcx7, r8_8);
    rdx10 = r14_5;
    *reinterpret_cast<void***>(rax9 + 8) = reinterpret_cast<void**>(1);
    rbx11 = rax9 + 16;
    fun_4009c0(rbx11);
    rsi12 = rbp2->f24;
    *reinterpret_cast<int32_t*>(&rdi13) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = 0;
    if (reinterpret_cast<int64_t>(r13_3) >= reinterpret_cast<int64_t>(0)) {
        do {
            r8_14 = *reinterpret_cast<void***>(rsi12 + rdi13 * 8);
            if (r8_14) {
                rcx15 = rbp2->f8;
                rax16 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r8_14 + 8)) & rcx15;
                rdx10 = rbx11 + rax16 * 8;
                if (*reinterpret_cast<void***>(rdx10)) {
                    do {
                        rax16 = rax16 + rax16 * 4 + 1 & rcx15;
                        rdx10 = rbx11 + rax16 * 8;
                    } while (*reinterpret_cast<void***>(rdx10));
                }
                *reinterpret_cast<void***>(rdx10) = r8_14;
                rsi12 = rbp2->f24;
            }
            ++rdi13;
        } while (rdi13 != r12_4);
    }
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi12 - 16, rdx10);
    rbp2->f24 = rbx11;
    return;
}

void** g60f0d0 = reinterpret_cast<void**>(0);

void incl_m4q9b16kJJcoKe9c4ERtlpCg(struct s27* rdi, void** rsi) {
    void** r12_3;
    struct s27* rbp4;
    void** rbx5;
    uint64_t rsi6;
    void** rdi7;
    uint64_t rdx8;
    void* r13_9;
    void*** r8_10;
    void** rax11;
    uint64_t rax12;
    uint64_t rcx13;
    uint64_t rcx14;
    void** rax15;
    void** rdx16;
    void** rcx17;
    void** rsi18;
    void** rdx19;
    int1_t zf20;
    void** rsi21;
    void* tmp64_22;
    void** rdx23;
    uint64_t rcx24;
    uint64_t rcx25;
    uint64_t rsi26;

    r12_3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) >> 12);
    rbp4 = rdi;
    rbx5 = rsi;
    rsi6 = rdi->f8;
    rdi7 = rdi->f24;
    rdx8 = reinterpret_cast<unsigned char>(r12_3) & rsi6;
    r13_9 = reinterpret_cast<void*>(rdx8 * 8);
    r8_10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi7) + reinterpret_cast<uint64_t>(r13_9));
    rax11 = *r8_10;
    if (!rax11) {
        addr_404f3b_2:
        rax12 = rbp4->f0;
        rcx13 = rsi6 + 1;
        if (reinterpret_cast<int64_t>(rcx13 + rcx13) < reinterpret_cast<int64_t>(rax12 + rax12 * 2) || reinterpret_cast<int64_t>(rcx13 - rax12) <= reinterpret_cast<int64_t>(3)) {
            cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(rbp4);
            rsi6 = rbp4->f8;
            rdi7 = rbp4->f24;
            rax12 = rbp4->f0;
            rdx8 = reinterpret_cast<unsigned char>(r12_3) & rsi6;
            r13_9 = reinterpret_cast<void*>(rdx8 * 8);
            r8_10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi7) + reinterpret_cast<uint64_t>(r13_9));
        }
    } else {
        rcx14 = rdx8;
        if (r12_3 != *reinterpret_cast<void***>(rax11 + 8)) {
            do {
                rcx14 = rcx14 + rcx14 * 4 + 1 & rsi6;
                rax11 = *reinterpret_cast<void***>(rdi7 + rcx14 * 8);
                if (!rax11) 
                    goto addr_404f3b_2;
            } while (r12_3 != *reinterpret_cast<void***>(rax11 + 8));
            goto addr_405036_7;
        } else {
            goto addr_405036_7;
        }
    }
    rbp4->f0 = rax12 + 1;
    if (*r8_10) {
        do {
            rdx8 = rdx8 + rdx8 * 4 + 1 & rsi6;
            r13_9 = reinterpret_cast<void*>(rdx8 * 8);
        } while (*reinterpret_cast<void***>(rdi7 + rdx8 * 8));
    }
    rax15 = g60f0d0;
    if (!rax15) {
        rax15 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, 0x1000);
        __asm__("movdqa xmm0, [rip+0x5aa1]");
        *reinterpret_cast<void***>(rax15 + 32) = reinterpret_cast<void**>(0);
        __asm__("movups [rax+0x28], xmm0");
        __asm__("pxor xmm0, xmm0");
        __asm__("movups [rax+0x10], xmm0");
        *reinterpret_cast<void***>(rax15 + 8) = reinterpret_cast<void**>(96);
        rdx16 = g60f0d0;
        *reinterpret_cast<void***>(rax15 + 16) = rdx16;
        if (rdx16) {
            *reinterpret_cast<void***>(rdx16 + 24) = rax15;
        }
        rcx17 = rax15 + 56;
        g60f0d0 = rax15;
        rsi18 = *reinterpret_cast<void***>(rax15 + 40);
        rdx19 = rcx17;
    } else {
        rcx17 = *reinterpret_cast<void***>(rax15 + 32);
        if (!rcx17) {
            rdx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax15 + 48)) + 56);
            rcx17 = rdx19;
            *reinterpret_cast<void***>(rax15 + 48) = *reinterpret_cast<void***>(rax15 + 48) + 96;
        } else {
            *reinterpret_cast<void***>(rax15 + 32) = *reinterpret_cast<void***>(rcx17);
            rdx19 = rcx17;
        }
        rsi18 = *reinterpret_cast<void***>(rax15 + 40) + 0xffffffffffffffa0;
        *reinterpret_cast<void***>(rax15 + 40) = rsi18;
    }
    if (reinterpret_cast<signed char>(rsi18) <= reinterpret_cast<signed char>(95)) {
        zf20 = rax15 == g60f0d0;
        rsi21 = *reinterpret_cast<void***>(rax15 + 16);
        if (zf20) {
            g60f0d0 = rsi21;
            if (rsi21) {
                *reinterpret_cast<void***>(rsi21 + 24) = reinterpret_cast<void**>(0);
            }
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax15 + 24) + 16) = rsi21;
            if (*reinterpret_cast<void***>(rax15 + 16)) {
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax15 + 16) + 24) = *reinterpret_cast<void***>(rax15 + 24);
            }
        }
        __asm__("pxor xmm0, xmm0");
        __asm__("movups [rax+0x10], xmm0");
    }
    rax11 = rdx19 + 16;
    __asm__("pxor xmm0, xmm0");
    tmp64_22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + 96);
    g6118f8 = tmp64_22;
    *reinterpret_cast<void***>(rcx17 + 8) = reinterpret_cast<void**>(1);
    __asm__("movups [rdx+0x10], xmm0");
    __asm__("movups [rax+0x10], xmm0");
    __asm__("movups [rax+0x20], xmm0");
    __asm__("movups [rax+0x30], xmm0");
    __asm__("movups [rax+0x40], xmm0");
    *reinterpret_cast<void***>(rdx19 + 16) = rbp4->f16;
    *reinterpret_cast<void***>(rax11 + 8) = r12_3;
    rdx23 = rbp4->f24;
    rbp4->f16 = rax11;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx23) + reinterpret_cast<uint64_t>(r13_9)) = rax11;
    addr_405036_7:
    rcx24 = reinterpret_cast<unsigned char>(rbx5) >> 3;
    *reinterpret_cast<uint32_t*>(&rcx25) = *reinterpret_cast<uint32_t*>(&rcx24) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0;
    rsi26 = rcx25 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax11 + rsi26 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax11 + rsi26 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx25);
    return;
}

/* nimRegisterThreadLocalMarker.part.14 */
void nimRegisterThreadLocalMarker_part_14() {
    int64_t v1;

    echoBinSafe_constprop_24(0x40a928);
    fun_400a70(1);
    goto v1;
}

int64_t _setjmp = 0x400a06;

void** fun_400a00(void* rdi) {
    goto _setjmp;
}

struct s35 {
    struct s35* f0;
    uint64_t f8;
};

struct s36 {
    struct s36* f0;
    uint64_t f8;
};

struct s38 {
    signed char[32] pad32;
    int64_t f32;
};

struct s37 {
    unsigned char f0;
    signed char[7] pad8;
    void* f8;
    signed char[16] pad32;
    void** f32;
    signed char[7] pad40;
    struct s38* f40;
    void* f48;
    void** f56;
};

void collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(void** rdi) {
    void** rbx2;
    void* rsp3;
    void** rsi4;
    void** rbp5;
    void** rdx6;
    void** rax7;
    void** rdx8;
    void** rax9;
    int1_t zf10;
    void** rbp11;
    int1_t zf12;
    void** rsi13;
    void** r8_14;
    void* rsp15;
    void** rdx16;
    int64_t* rdi17;
    void* tmp64_18;
    void* rcx19;
    int64_t rcx20;
    void** rbp21;
    void** rax22;
    void** r12_23;
    int64_t rcx24;
    void** r14_25;
    void* rsp26;
    void* rax27;
    void* v28;
    void** v29;
    struct s35* r13_30;
    struct s35* v31;
    struct s35* r15_32;
    uint64_t r13_33;
    uint64_t rbx34;
    uint64_t rbp35;
    uint64_t v36;
    uint64_t rsi37;
    uint64_t rdx38;
    int64_t rax39;
    struct s36* rax40;
    uint64_t rcx41;
    uint64_t rcx42;
    struct s37* rax43;
    void* r8_44;
    void** rsi45;
    void** r13_46;
    uint64_t v47;
    void* r12_48;
    void** rbx49;
    uint64_t v50;
    void** rbp51;
    void** r14_52;
    uint64_t r9_53;
    void** rdi54;
    void** rcx55;
    uint64_t rax56;
    void** rdx57;
    uint64_t rcx58;
    uint64_t rcx59;
    void** rax60;
    int64_t tmp64_61;
    void** r12_62;
    uint64_t r8_63;
    void** r9_64;
    void** rdi65;
    void** rdx66;
    void** rcx67;
    struct s38* rax68;
    int64_t tmp64_69;

    rbx2 = rdi;
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 16);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi + 16)) > reinterpret_cast<signed char>(0)) {
        do {
            collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(rbx2);
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        } while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx2 + 16)) > reinterpret_cast<signed char>(0));
    }
    rsi4 = *reinterpret_cast<void***>(rbx2 + 0x3398);
    if (rsi4) {
        do {
            rbp5 = *reinterpret_cast<void***>(rsi4);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi4 - 2, rdx6);
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            rsi4 = rbp5;
        } while (rbp5);
    }
    rax7 = *reinterpret_cast<void***>(rbx2 + 0x33a0);
    *reinterpret_cast<void***>(rbx2 + 0x3398) = reinterpret_cast<void**>(0);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax7 + 0xfffffffffffffff0, rdx8);
    *reinterpret_cast<void***>(rbx2 + 0x33a0) = reinterpret_cast<void**>(0);
    *reinterpret_cast<uint64_t*>(rbx2 + 0x3388) = 0;
    rax9 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, 0x2030);
    zf10 = g612108 == 0;
    rbp11 = rax9 + 32;
    if (zf10) {
        zf12 = g612138 == 0;
        if (zf12) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20a733], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    *reinterpret_cast<int32_t*>(&rsi13) = 0x612108;
    *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbp11, rbp11 + 0x2030, r8_14);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8 - 8 + 8 - 8 + 8);
    rdx16 = rbp11 + 16;
    rdi17 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbp11 + 24) & 0xfffffffffffffff8);
    tmp64_18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax9 + 8)));
    g6118f8 = tmp64_18;
    rcx19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx16) - reinterpret_cast<uint64_t>(rdi17));
    __asm__("movdqa xmm0, [rip+0x3224]");
    *reinterpret_cast<void***>(rax9 + 40) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(rbp11 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int64_t*>(rbp11 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx20) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx19) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
    while (rcx20) {
        --rcx20;
        *rdi17 = 0;
        ++rdi17;
        rsi13 = rsi13 + 8;
    }
    *reinterpret_cast<void***>(rbx2 + 0x33a0) = rdx16;
    __asm__("movups [rbx+0x3388], xmm0");
    rbp21 = *reinterpret_cast<void***>(rbx2 + 56);
    rax22 = *reinterpret_cast<void***>(rbx2 + 40);
    *reinterpret_cast<void***>(rbx2 + 0x3398) = reinterpret_cast<void**>(0);
    r12_23 = rbp21 + reinterpret_cast<unsigned char>(rax22) * 8;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax22 == 0))) {
        do {
            rsi13 = *reinterpret_cast<void***>(rbp21);
            rbp21 = rbp21 + 8;
            markS_NZr5o3Ubzrci4OmK29cHBJA(rbx2, rsi13);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
        } while (r12_23 != rbp21);
    }
    markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(rbx2, rsi13);
    *reinterpret_cast<int32_t*>(&rcx24) = 0x100;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    r14_25 = rbx2;
    rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8 + 16 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x838);
    *reinterpret_cast<signed char*>(rbx2 + 0x3128) = 1;
    rax27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) + 48);
    while (rcx24) {
        --rcx24;
    }
    v28 = rax27;
    v29 = r14_25 + 96;
    do {
        r13_30 = v31;
        if (v31) {
            do {
                r15_32 = r13_30;
                r13_33 = 0;
                while (1) {
                    rbx34 = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(r15_32) + r13_33 * 8 + 16);
                    rbp35 = r13_33 << 6;
                    if (!rbx34) {
                        addr_407705_25:
                        ++r13_33;
                        if (r13_33 != 8) 
                            continue; else 
                            break;
                    } else {
                        v36 = r13_33;
                        while (1) {
                            if (!(*reinterpret_cast<unsigned char*>(&rbx34) & 1)) 
                                goto addr_4075e0_28;
                            rsi37 = r15_32->f8 << 9 | rbp35;
                            rdx38 = rsi37 >> 9;
                            *reinterpret_cast<uint32_t*>(&rax39) = *reinterpret_cast<unsigned char*>(&rdx38);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
                            rax40 = *reinterpret_cast<struct s36**>(reinterpret_cast<unsigned char>(r14_25) + reinterpret_cast<uint64_t>(rax39 * 8) + 0x2908);
                            if (!rax40) {
                                goto addr_4075e0_28;
                            }
                            do {
                                if (rdx38 == rax40->f8) 
                                    break;
                                rax40 = rax40->f0;
                            } while (rax40);
                            goto addr_4075e0_28;
                            rcx41 = rsi37;
                            *reinterpret_cast<uint32_t*>(&rcx42) = *reinterpret_cast<uint32_t*>(&rcx41) & 0x1ff;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx42) + 4) = 0;
                            if (!(*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax40) + (rcx42 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx42))) 
                                goto addr_4075e0_28;
                            rax43 = reinterpret_cast<struct s37*>(rsi37 << 12);
                            if (!(rax43->f0 & 1)) 
                                goto addr_4075e0_28;
                            r8_44 = rax43->f8;
                            if (reinterpret_cast<int64_t>(r8_44) > reinterpret_cast<int64_t>(0xfc8)) 
                                goto addr_40766a_36;
                            rsi45 = reinterpret_cast<void**>(&rax43->f56);
                            r13_46 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax43->f48) + reinterpret_cast<unsigned char>(rsi45));
                            if (reinterpret_cast<unsigned char>(rsi45) < reinterpret_cast<unsigned char>(r13_46)) {
                                v47 = rbx34;
                                r12_48 = r8_44;
                                rbx49 = rsi45;
                                v50 = rbp35;
                                rbp51 = r14_25;
                                r14_52 = rsi45;
                                while (1) {
                                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx49 + 8)) <= reinterpret_cast<unsigned char>(1)) 
                                        goto addr_4077ea_40;
                                    r9_53 = *reinterpret_cast<uint64_t*>(rbp51 + 0x3390);
                                    rdi54 = *reinterpret_cast<void***>(rbp51 + 0x33a0);
                                    rcx55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_52) >> 12);
                                    rax56 = reinterpret_cast<unsigned char>(rcx55) & r9_53;
                                    rdx57 = *reinterpret_cast<void***>(rdi54 + rax56 * 8);
                                    if (rdx57) {
                                        do {
                                            if (rcx55 == *reinterpret_cast<void***>(rdx57 + 8)) 
                                                break;
                                            rax56 = rax56 + rax56 * 4 + 1 & r9_53;
                                            rdx57 = *reinterpret_cast<void***>(rdi54 + rax56 * 8);
                                        } while (rdx57);
                                        goto addr_407810_44;
                                        rcx58 = reinterpret_cast<unsigned char>(r14_52) >> 3;
                                        *reinterpret_cast<uint32_t*>(&rcx59) = *reinterpret_cast<uint32_t*>(&rcx58) & 0x1ff;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = 0;
                                        if (!(*reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rdx57 + (rcx59 >> 6) * 8) + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx59))) {
                                            addr_407810_44:
                                            rax60 = *reinterpret_cast<void***>(rbx49 + 8);
                                            if (*reinterpret_cast<void***>(rax60 + 32)) {
                                                tmp64_61 = g60f058 + 1;
                                                g60f058 = tmp64_61;
                                                *reinterpret_cast<void***>(rax60 + 32)(r14_52 + 16, rsi45);
                                                rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
                                                --g60f058;
                                            }
                                        } else {
                                            addr_4077ea_40:
                                            r14_52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_52) + reinterpret_cast<uint64_t>(r12_48));
                                            rbx49 = r14_52;
                                            if (reinterpret_cast<unsigned char>(r14_52) < reinterpret_cast<unsigned char>(r13_46)) 
                                                continue; else 
                                                break;
                                        }
                                        rsi45 = rbx49;
                                        rawDealloc_DA62HrGC5sdfCED505KyyQ(v29, rsi45, rdx57);
                                        rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
                                        goto addr_4077ea_40;
                                    } else {
                                        goto addr_407810_44;
                                    }
                                }
                                r14_25 = rbp51;
                                rbx34 = v47;
                                rbp35 = v50;
                                goto addr_4075e0_28;
                            }
                            addr_40766a_36:
                            if (reinterpret_cast<uint64_t>(rax43->f40) <= 1) 
                                goto addr_4075e0_28;
                            r12_62 = reinterpret_cast<void**>(&rax43->f32);
                            r8_63 = *reinterpret_cast<uint64_t*>(r14_25 + 0x3390);
                            r9_64 = *reinterpret_cast<void***>(r14_25 + 0x33a0);
                            rdi65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_62) >> 12);
                            rdx66 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi65) & r8_63);
                            rcx67 = *reinterpret_cast<void***>(r9_64 + reinterpret_cast<unsigned char>(rdx66) * 8);
                            if (!rcx67) 
                                goto addr_40769d_51;
                            do {
                                if (rdi65 == *reinterpret_cast<void***>(rcx67 + 8)) 
                                    break;
                                rdx66 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdx66 + reinterpret_cast<unsigned char>(rdx66) * 4) + 1 & r8_63);
                                rcx67 = *reinterpret_cast<void***>(r9_64 + reinterpret_cast<unsigned char>(rdx66) * 8);
                            } while (rcx67);
                            goto addr_4076c1_54;
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx67 + 16)) & 16) {
                                addr_4075e0_28:
                                ++rbp35;
                                rbx34 = rbx34 >> 1;
                                if (!rbx34) 
                                    break; else 
                                    continue;
                            } else {
                                addr_4076c1_54:
                                rax68 = rax43->f40;
                                if (rax68->f32) {
                                    tmp64_69 = g60f058 + 1;
                                    g60f058 = tmp64_69;
                                    rax68->f32(r12_62 + 16);
                                    rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
                                    --g60f058;
                                }
                            }
                            ++rbp35;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(v29, r12_62, rdx66);
                            rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
                            rbx34 = rbx34 >> 1;
                            if (rbx34) 
                                continue; else 
                                goto addr_4076fe_58;
                            addr_40769d_51:
                            goto addr_4076c1_54;
                        }
                    }
                    addr_407700_59:
                    r13_33 = v36;
                    goto addr_407705_25;
                    addr_4076fe_58:
                    goto addr_407700_59;
                }
                r13_30 = r15_32->f0;
            } while (r13_30);
        }
        v28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(v28) + 8);
    } while (!reinterpret_cast<int1_t>(reinterpret_cast<int64_t>(rsp26) + 0x830 == v28));
    *reinterpret_cast<signed char*>(r14_25 + 0x3128) = 0;
    return;
}

int64_t longjmp = 0x400a66;

int64_t fun_400a60(void** rdi, int64_t rsi) {
    goto longjmp;
}

struct s39 {
    signed char[17] pad17;
    void** f17;
};

void raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(void** rdi, void** rsi) {
    int64_t rax3;
    void* rsp4;
    signed char al5;
    int64_t rax6;
    signed char al7;
    void** rdi8;
    void** rbx9;
    void* rsp10;
    struct s32* rax11;
    void** rdi12;
    int1_t zf13;
    int1_t zf14;
    signed char al15;
    void** rdi16;
    void** rbp17;
    int64_t rcx18;
    void** rdx19;
    void** r13_20;
    void** rax21;
    void** r12_22;
    void** rdx23;
    void** rax24;
    void** rdi25;
    void** rax26;
    int1_t zf27;
    void** rax28;
    void* rcx29;
    void** rsi30;
    uint64_t rcx31;
    uint32_t esi32;
    void** rbp33;
    void** rax34;
    void** rax35;
    struct s32* rax36;
    int64_t rsi37;
    int64_t rax38;
    signed char al39;
    void** rbx40;
    int64_t rdx41;
    void** v42;
    uint32_t eax43;
    void** rsi44;
    int1_t zf45;
    void** rcx46;
    unsigned char tmp8_47;
    uint1_t cf48;
    struct s39* rbx49;
    void** rdx50;
    void** r8_51;
    void** rax52;
    uint64_t rbx53;
    void** rcx54;
    void*** rdi55;
    void** v56;
    void* rcx57;
    int64_t rcx58;
    void** v59;

    while (((rax3 = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg, rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8), rax3 == 0) || (al5 = reinterpret_cast<signed char>(rax3()), rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8), !!al5)) && ((rax6 = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA, rax6 == 0) || (al7 = reinterpret_cast<signed char>(rax6(rdi)), rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8), !!al7))) {
        rdi8 = rdi;
        rbx9 = rdi8;
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 8 - 8 - 8 - 8 - 8 - 0x7f8);
        rax11 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
        if (rax11) 
            goto addr_408220_4;
        rdi12 = *reinterpret_cast<void***>(rdi8);
        if (rdi12 == 0x60ef00 || (*reinterpret_cast<void***>(rdi12 + 16) == 0x60ef00 || (zf13 = rdi12 == Nim_OfCheck_CACHE22, !zf13) && ((zf14 = rdi12 == g60e868, zf14) || (al15 = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(rdi12, 0x60ef00, 0x60e860), rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8), !!al15)))) {
            rdi16 = *reinterpret_cast<void***>(rbx9 + 16);
            showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(rdi16);
            fun_400a70(1);
        } else {
            rbp17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp10) + 16);
            *reinterpret_cast<int32_t*>(&rcx18) = 0xfa;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
            rdx19 = *reinterpret_cast<void***>(rbx9 + 24);
            __asm__("movdqa xmm0, [rip+0x284a]");
            r13_20 = *reinterpret_cast<void***>(rbx9 + 16);
            while (rcx18) {
                --rcx18;
            }
            __asm__("movaps [rsp+0x10], xmm0");
            if (!rdx19) 
                goto addr_408508_11;
            rax21 = *reinterpret_cast<void***>(rdx19);
            if (reinterpret_cast<signed char>(rax21) <= reinterpret_cast<signed char>(0x7b3)) 
                goto addr_408394_13;
        }
        addr_408508_11:
        *reinterpret_cast<int32_t*>(&r12_22) = 30;
        *reinterpret_cast<int32_t*>(&r12_22 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx23) = 28;
        *reinterpret_cast<int32_t*>(&rdx23 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbx9) = 30;
        *reinterpret_cast<int32_t*>(&rbx9 + 4) = 0;
        addr_408518_14:
        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(rdx23)) = 0x5b20;
        if (!r13_20) {
            addr_4085c0_15:
            *reinterpret_cast<int32_t*>(&rax24) = 0;
            *reinterpret_cast<int32_t*>(&rax24 + 4) = 0;
            goto addr_408400_16;
        } else {
            rax24 = fun_400990(r13_20);
            rdx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax24) + reinterpret_cast<unsigned char>(r12_22));
            if (reinterpret_cast<signed char>(rdx19) <= reinterpret_cast<signed char>(0x7cf)) {
                addr_408400_16:
                rdi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(r12_22));
                rdx19 = rax24;
                fun_400a30(rdi25, r13_20, rdx19, rdi25, r13_20, rdx19);
                rax26 = fun_400990(r13_20);
                r12_22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_22) + reinterpret_cast<unsigned char>(rax26));
                rbx9 = r12_22;
            }
            if (reinterpret_cast<signed char>(rbx9) <= reinterpret_cast<signed char>(0x7cd)) {
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(r12_22)) = 0xa5d;
            }
        }
        addr_408432_21:
        zf27 = onUnhandledException_bFrawQlTKZhLweDD36j9b8g == 0;
        if (!zf27) 
            goto addr_408440_22;
        showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(rbp17);
        fun_400a70(1);
        continue;
        addr_408394_13:
        if (!rax21) {
            *reinterpret_cast<int32_t*>(&rax28) = 28;
            *reinterpret_cast<int32_t*>(&rax28 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx23) = 28;
            *reinterpret_cast<int32_t*>(&rdx23 + 4) = 0;
        } else {
            rcx29 = reinterpret_cast<void*>(rbp17 + 28);
            rsi30 = rdx19 + 16;
            if (reinterpret_cast<unsigned char>(rax21) >= reinterpret_cast<unsigned char>(8)) {
                *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rcx29) + reinterpret_cast<unsigned char>(rax21) - 8) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rsi30) + reinterpret_cast<unsigned char>(rax21) + 0xfffffffffffffff8);
                rcx31 = reinterpret_cast<uint64_t>(rcx29) - reinterpret_cast<uint64_t>(rbp17 + 32) + reinterpret_cast<unsigned char>(rax21) >> 3;
                while (rcx31) {
                    --rcx31;
                }
                goto addr_4083cc_30;
            }
            if (*reinterpret_cast<unsigned char*>(&rax21) & 4) {
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx29) + reinterpret_cast<unsigned char>(rax21) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rsi30) + reinterpret_cast<unsigned char>(rax21) + 0xfffffffffffffffc);
                rax21 = *reinterpret_cast<void***>(rdx19);
            } else {
                if (rax21) {
                    if (*reinterpret_cast<unsigned char*>(&rax21) & 2) {
                        esi32 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rsi30) + reinterpret_cast<unsigned char>(rax21) + 0xfffffffffffffffe);
                        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rcx29) + reinterpret_cast<unsigned char>(rax21) - 2) = *reinterpret_cast<int16_t*>(&esi32);
                        rax21 = *reinterpret_cast<void***>(rdx19);
                    } else {
                        addr_4083cc_30:
                        rax21 = *reinterpret_cast<void***>(rdx19);
                    }
                }
            }
            rax28 = rax21 + 28;
            r12_22 = rax28;
            if (reinterpret_cast<signed char>(rax28) <= reinterpret_cast<signed char>(0x7cd)) {
                rdx23 = rax28;
            } else {
                if (!r13_20) {
                    if (reinterpret_cast<signed char>(rax28) <= reinterpret_cast<signed char>(0x7cf)) {
                        goto addr_4085c0_15;
                    }
                } else {
                    rax24 = fun_400990(r13_20);
                    rdx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax24) + reinterpret_cast<unsigned char>(r12_22));
                    if (reinterpret_cast<signed char>(rdx19) > reinterpret_cast<signed char>(0x7cf)) 
                        goto addr_408432_21; else 
                        goto addr_408400_16;
                }
            }
        }
        rbx9 = rax28 + 2;
        r12_22 = rbx9;
        goto addr_408518_14;
    }
    return;
    addr_408220_4:
    if (!rax11->f216) {
        do {
            rbp33 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
            if (rbp33) {
                *reinterpret_cast<void***>(rbp33 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rbp33 + 0xfffffffffffffff0) + 8;
            }
            rdx19 = *reinterpret_cast<void***>(rbx9 + 48);
            if (rdx19 && (rax34 = *reinterpret_cast<void***>(rdx19 + 0xfffffffffffffff0) - 8, *reinterpret_cast<void***>(rdx19 + 0xfffffffffffffff0) = rax34, reinterpret_cast<unsigned char>(rax34) <= reinterpret_cast<unsigned char>(7))) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rdx19 + 0xfffffffffffffff0);
            }
            *reinterpret_cast<void***>(rbx9 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rbx9 + 0xfffffffffffffff0) + 8;
            rax35 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
            *reinterpret_cast<void***>(rbx9 + 48) = rbp33;
            if (rax35 && (rdx19 = *reinterpret_cast<void***>(rax35 + 0xfffffffffffffff0) + 0xfffffffffffffff8, *reinterpret_cast<void***>(rax35 + 0xfffffffffffffff0) = rdx19, reinterpret_cast<unsigned char>(rdx19) <= reinterpret_cast<unsigned char>(7))) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rax35 + 0xfffffffffffffff0);
            }
            rax36 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
            *reinterpret_cast<int32_t*>(&rsi37) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = 0;
            currException_9bVPeDJlYTi9bQApZpfH8wjg = rbx9;
            rdi8 = reinterpret_cast<void**>(&rax36->f16);
            rax38 = fun_400a60(rdi8, 1);
            addr_4082e8_51:
            al39 = reinterpret_cast<signed char>(rax38(rdi8, rsi37, rdx19));
            addr_408242_52:
        } while (al39);
    } else {
        rsi37 = rax11->f232;
        rax38 = rax11->f224;
        if (!rsi37) 
            goto addr_4082e8_51;
        al39 = reinterpret_cast<signed char>(rax38());
        goto addr_408242_52;
    }
    addr_408246_55:
    return;
    addr_408440_22:
    rbx40 = rbp17;
    do {
        *reinterpret_cast<void***>(&rdx41) = v42;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = 0;
        rbx40 = rbx40 + 4;
        eax43 = static_cast<uint32_t>(rdx41 - 0x1010101) & ~reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx41)) & 0x80808080;
    } while (!eax43);
    *reinterpret_cast<uint32_t*>(&rsi44) = 24;
    *reinterpret_cast<int32_t*>(&rsi44 + 4) = 0;
    zf45 = (eax43 & 0x8080) == 0;
    if (zf45) {
        eax43 = eax43 >> 16;
    }
    if (zf45) {
        rbx40 = rbx40 + 2;
    }
    *reinterpret_cast<uint32_t*>(&rcx46) = eax43;
    *reinterpret_cast<int32_t*>(&rcx46 + 4) = 0;
    tmp8_47 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx46) + *reinterpret_cast<signed char*>(&eax43));
    cf48 = reinterpret_cast<uint1_t>(tmp8_47 < *reinterpret_cast<unsigned char*>(&rcx46));
    *reinterpret_cast<unsigned char*>(&rcx46) = tmp8_47;
    rbx49 = reinterpret_cast<struct s39*>(reinterpret_cast<unsigned char>(rbx40) - (3 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rbx40) < reinterpret_cast<unsigned char>(3 + static_cast<uint64_t>(cf48))))) - reinterpret_cast<unsigned char>(rbp17));
    if (reinterpret_cast<uint64_t>(rbx49) > 6) {
        rsi44 = reinterpret_cast<void**>(&rbx49->f17);
    }
    *reinterpret_cast<uint32_t*>(&rdx50) = 0x60f000;
    *reinterpret_cast<int32_t*>(&rdx50 + 4) = 0;
    rax52 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, rsi44, 0x60f000, rcx46, r8_51);
    rbx53 = reinterpret_cast<uint64_t>(rbx49) + 1;
    __asm__("movq xmm0, [rsp+0x8]");
    rcx54 = rax52 + 16;
    __asm__("movhps xmm0, [rsp]");
    __asm__("movups [rax], xmm0");
    if (*reinterpret_cast<uint32_t*>(&rbx53) >= 8) {
        rdi55 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax52 + 24) & 0xfffffffffffffff8);
        *reinterpret_cast<void***>(rax52 + 16) = v56;
        *reinterpret_cast<uint32_t*>(&rdx50) = *reinterpret_cast<uint32_t*>(&rbx53);
        *reinterpret_cast<int32_t*>(&rdx50 + 4) = 0;
        *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx54) + reinterpret_cast<unsigned char>(rdx50) + 0xfffffffffffffff8) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(rdx50) + 0xfffffffffffffff8);
        rcx57 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx54) - reinterpret_cast<uint64_t>(rdi55));
        rsi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp17) - reinterpret_cast<uint64_t>(rcx57));
        *reinterpret_cast<uint32_t*>(&rcx58) = *reinterpret_cast<uint32_t*>(&rbx53) + *reinterpret_cast<int32_t*>(&rcx57) >> 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx58) + 4) = 0;
        while (rcx58) {
            --rcx58;
            *rdi55 = *reinterpret_cast<void***>(rsi44);
            rdi55 = rdi55 + 8;
            rsi44 = rsi44 + 8;
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&rbx53) & 4) {
            *reinterpret_cast<void***>(rax52 + 16) = v59;
            *reinterpret_cast<uint32_t*>(&rdx50) = *reinterpret_cast<uint32_t*>(&rbx53);
            *reinterpret_cast<int32_t*>(&rdx50 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rsi44) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(rdx50) + 0xfffffffffffffffc);
            *reinterpret_cast<int32_t*>(&rsi44 + 4) = 0;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rcx54) + reinterpret_cast<unsigned char>(rdx50) + 0xfffffffffffffffc) = *reinterpret_cast<uint32_t*>(&rsi44);
        } else {
            if (*reinterpret_cast<uint32_t*>(&rbx53) && (*reinterpret_cast<uint32_t*>(&rdx50) = 0, *reinterpret_cast<int32_t*>(&rdx50 + 4) = 0, *reinterpret_cast<void***>(rax52 + 16) = reinterpret_cast<void**>(0), !!(*reinterpret_cast<unsigned char*>(&rbx53) & 2))) {
                *reinterpret_cast<uint32_t*>(&rdx50) = *reinterpret_cast<uint32_t*>(&rbx53);
                *reinterpret_cast<int32_t*>(&rdx50 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rsi44) = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(rdx50) + 0xfffffffffffffffe);
                *reinterpret_cast<int32_t*>(&rsi44 + 4) = 0;
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rcx54) + reinterpret_cast<unsigned char>(rdx50) + 0xfffffffffffffffe) = *reinterpret_cast<int16_t*>(&rsi44);
            }
        }
    }
    onUnhandledException_bFrawQlTKZhLweDD36j9b8g(rax52, rsi44, rdx50);
    goto addr_408246_55;
}

int64_t fputs = 0x4009b6;

void fun_4009b0(void** rdi, void** rsi) {
    goto fputs;
}

int64_t memchr = 0x4009e6;

void* fun_4009e0(void* rdi, int64_t rsi, void** rdx) {
    goto memchr;
}

void** newObj(void** rdi, void** rsi) {
    void** rcx3;
    void** r8_4;
    void** rax5;
    void** rax6;

    rax5 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(rdi, rsi, 0x60f000, rcx3, r8_4);
    rax6 = fun_4009c0(rax5);
    return rax6;
}

void* g60f008 = reinterpret_cast<void*>(0);

void** copyStringRC1(void** rdi, void** rsi) {
    void** r13_3;
    void** r12_4;
    uint64_t rax5;
    void** rdx6;
    int1_t less7;
    void* rax8;
    int1_t less9;
    int1_t zf10;
    void** rcx11;
    void** r8_12;
    void** rax13;
    void** rdx14;

    if (!rdi) {
        *reinterpret_cast<int32_t*>(&r13_3) = 0;
        *reinterpret_cast<int32_t*>(&r13_3 + 4) = 0;
    } else {
        r12_4 = *reinterpret_cast<void***>(rdi);
        if (reinterpret_cast<signed char>(r12_4) < reinterpret_cast<signed char>(7)) {
            r12_4 = reinterpret_cast<void**>(7);
        }
        rax5 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
        rdx6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax5) >> 7);
        if (reinterpret_cast<int64_t>(rax5) <= reinterpret_cast<int64_t>(0xf9ff)) {
            rdx6 = reinterpret_cast<void**>(0x1f4);
        }
        less7 = reinterpret_cast<signed char>(g60f010) < reinterpret_cast<signed char>(rdx6);
        if ((!less7 || (rax8 = g60f008, less9 = reinterpret_cast<int64_t>(g6118f8) < reinterpret_cast<int64_t>(rax8), !less9)) && (zf10 = g60f058 == 0, zf10)) {
            collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(0x60f000);
        }
        rax13 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, r12_4 + 33, rdx6, rcx11, r8_12);
        *reinterpret_cast<void***>(rax13 + 8) = reinterpret_cast<void**>(0x6126a0);
        r13_3 = rax13 + 16;
        *reinterpret_cast<void***>(rax13) = reinterpret_cast<void**>(8);
        fun_4009c0(r13_3);
        *reinterpret_cast<void***>(r13_3 + 8) = r12_4;
        rdx14 = *reinterpret_cast<void***>(rdi);
        *reinterpret_cast<void***>(rax13 + 16) = rdx14;
        fun_400a30(rax13 + 32, rdi + 16, rdx14 + 1);
    }
    return r13_3;
}

void raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ() {
    void** rsi1;
    void** rax2;
    void** rbp3;
    void** rbx4;
    void** rax5;
    void** rax6;

    *reinterpret_cast<int32_t*>(&rsi1) = 56;
    *reinterpret_cast<int32_t*>(&rsi1 + 4) = 0;
    rax2 = newObj(0x612520, 56);
    *reinterpret_cast<void***>(rax2) = reinterpret_cast<void**>(0x612800);
    rbp3 = *reinterpret_cast<void***>(rax2 + 24);
    rbx4 = rax2;
    rax5 = copyStringRC1(0x40a860, 56);
    *reinterpret_cast<void***>(rbx4 + 24) = rax5;
    if (!rbp3) 
        goto addr_408e1c_2;
    rsi1 = rbp3 + 0xfffffffffffffff0;
    rax6 = *reinterpret_cast<void***>(rbp3 + 0xfffffffffffffff0) - 8;
    *reinterpret_cast<void***>(rbp3 + 0xfffffffffffffff0) = rax6;
    if (reinterpret_cast<unsigned char>(rax6) <= reinterpret_cast<unsigned char>(7)) 
        goto addr_408e33_4;
    while (1) {
        addr_408e1c_2:
        if (!*reinterpret_cast<void***>(rbx4 + 16)) {
            *reinterpret_cast<void***>(rbx4 + 16) = reinterpret_cast<void**>("EOFError");
        }
        raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(rbx4, rsi1);
        addr_408e33_4:
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi1);
    }
}

int64_t fgets = 0x4009f6;

int64_t fun_4009f0() {
    goto fgets;
}

void nimRegisterGlobalMarker(int64_t rdi) {
    int64_t rax2;
    void** rbx3;
    void** rcx4;
    void** r8_5;
    void** rax6;
    void** rax7;

    rax2 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
    if (rax2 > 0xdab) {
        echoBinSafe_constprop_24(0x40a880);
        fun_400a70(1);
        *reinterpret_cast<int32_t*>(&rbx3) = 7;
        *reinterpret_cast<int32_t*>(&rbx3 + 4) = 0;
        if (0) {
            rbx3 = reinterpret_cast<void**>(1);
        }
        rax6 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, rbx3 + 17, 0x60f000, rcx4, r8_5);
        rax7 = fun_4009c0(rax6);
        *reinterpret_cast<void***>(rax7 + 8) = rbx3;
        *reinterpret_cast<void***>(rax7) = reinterpret_cast<void**>(0);
        goto rax2;
    } else {
        *reinterpret_cast<int64_t*>(rax2 * 8 + 0x6195e0) = rdi;
        globalMarkersLen_hgEFy3UCOBoalBh29asu5MA = rax2 + 1;
        return;
    }
}

void** readLine_fPRnXwDTqtynUYGl4OixAg(void** rdi, int64_t rsi) {
    void** rbx3;
    void** rcx4;
    void** r8_5;
    void** rax6;
    void*** rsi7;
    void** rdx8;
    int64_t* rdi9;
    int64_t rax10;
    void** rcx11;
    void** r8_12;
    signed char al13;
    int64_t v14;
    void** r12_15;
    void** r8_16;
    void** rax17;
    void** rdx18;

    rbx3 = rdi;
    rax6 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, 97, 0x60f000, rcx4, r8_5);
    __asm__("movdqa xmm0, [rip+0x1d43]");
    rsi7 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16 - 8 + 8 + 8);
    *reinterpret_cast<void***>(rax6 + 16) = reinterpret_cast<void**>(0);
    rdx8 = rax6;
    rdi9 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rax6 + 24) & 0xfffffffffffffff8);
    *reinterpret_cast<int64_t*>(rax6 + 89) = 0;
    *reinterpret_cast<int32_t*>(&rax10) = *reinterpret_cast<int32_t*>(&rax6) - *reinterpret_cast<int32_t*>(&rdi9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx11) = static_cast<uint32_t>(rax10 + 97) >> 3;
    *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
    while (rcx11) {
        --rcx11;
        *rdi9 = 0;
        ++rdi9;
        rsi7 = rsi7 + 8;
    }
    __asm__("movups [rdx], xmm0");
    al13 = readLine_sO1bQXVRA6RP9cdYJXNKeSw(rbx3, rsi7, rdx8, rcx11, r8_12);
    if (al13) {
        return rdx8;
    }
    raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ();
    if (rbx3) 
        goto addr_408ec9_8;
    addr_408f1e_10:
    goto v14;
    addr_408ec9_8:
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx3 + 8)) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<int32_t*>(&r12_15) = 7;
        *reinterpret_cast<int32_t*>(&r12_15 + 4) = 0;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx3)) >= reinterpret_cast<signed char>(7)) {
            r12_15 = *reinterpret_cast<void***>(rbx3);
        }
        rax17 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, r12_15 + 17, 0x60f000, rcx11, r8_16);
        *reinterpret_cast<void***>(rax17) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rax17 + 8) = r12_15;
        rdx18 = *reinterpret_cast<void***>(rbx3);
        *reinterpret_cast<void***>(rax17) = rdx18;
        fun_400a30(rax17 + 16, rbx3 + 16, rdx18 + 1);
        goto addr_408f1e_10;
    }
}

void systemDatInit000();

void PreMainInner(void*** rdi);

void NimMainInner(void*** rdi);

void NimMain() {
    void* rsp1;
    void*** rdi2;
    void** rsi3;
    void*** rdi4;
    void** rsi5;

    systemDatInit000();
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 24 - 8 + 8);
    rdi2 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp1) + 8);
    nimGC_setStackBottom(rdi2, rsi3);
    PreMainInner(rdi2);
    rdi4 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp1) - 8 + 8 - 8 + 8);
    nimGC_setStackBottom(rdi4, rsi5);
    NimMainInner(rdi4);
    return;
}

struct s40 {
    signed char f0;
    signed char[47] pad48;
    signed char f48;
    signed char[23] pad72;
    int64_t f72;
    signed char[16] pad96;
    signed char f96;
};

int16_t g60ee88 = 0;

int64_t g60ee90 = 0;

int64_t NTI_TuG1vdYwChKtx4TOkRnAjw_ = 0;

int64_t g60eed0 = 0;

int64_t NTI_rR5Bzr1D5krxoo1NcNyeMA_ = 0;

int16_t g60eec8 = 0;

signed char g60d410 = 0;

int64_t g60d418 = 0;

int64_t g612570 = 0;

int64_t NTI_jIBKr1ejBgsfM33Kxw4j7A_ = 0;

int16_t g612568 = 0;

int16_t g60eca8 = 0;

int64_t g60e090 = 0;

signed char g60e070 = 0;

int64_t g60e098 = 0;

int64_t g612578 = 0;

signed char g60d440 = 0;

int64_t g60d448 = 0;

int64_t g60ecb0 = 0;

int64_t NTI_v8QUszD1sWlSIWZz7mC4bQ_ = 0;

signed char g60e0d0 = 0;

int64_t g60e0d8 = 0;

int64_t g60e0e8 = 0;

signed char g60e100 = 0;

int64_t g60e108 = 0;

int64_t g60e118 = 0;

signed char g60e130 = 0;

int16_t g60efc8 = 0;

int16_t g612768 = 0;

int64_t g60e138 = 0;

int64_t g60e148 = 0;

int64_t g60d1c0 = 0;

int64_t g60e180 = 0;

signed char g60e160 = 0;

int64_t g60e188 = 0;

int64_t g60ecb8 = 0;

int64_t NTI_MbMVByo9a9ck632Se8onTXew_ = 0;

int64_t g60e1b0 = 0;

signed char g60e190 = 0;

signed char g60e0a0 = 0;

int64_t g60e0a8 = 0;

int64_t g612770 = 0;

int64_t NTI_7JWFFgr9aqaR3U4iXEpLCag_ = 0;

signed char g60e1c0 = 0;

int64_t g60e1c8 = 0;

int64_t g6124f0 = 0;

int64_t NTI_kT45dHShde6Al0PdS4U9aGA_ = 0;

int16_t g6124e8 = 0;

int64_t g6195b0 = 0;

int64_t NTI_unfNsxrcATrufDZmpBq4HQ_ = 0;

int16_t g6195a8 = 0;

signed char g60e280 = 0;

int64_t g60e288 = 0;

int64_t g60e298 = 0;

signed char g60e2b0 = 0;

int64_t g60e2b8 = 0;

int64_t g60e2c8 = 0;

signed char g60e2e0 = 0;

int64_t g60e2e8 = 0;

int64_t g60e2f8 = 0;

signed char g60e310 = 0;

int64_t g60e318 = 0;

int64_t g60e328 = 0;

int64_t g60e360 = 0;

signed char g60e340 = 0;

int64_t g60e368 = 0;

int64_t g6195b8 = 0;

signed char g60e250 = 0;

int64_t g60e258 = 0;

signed char g60e370 = 0;

int64_t g60e378 = 0;

signed char g60e3a0 = 0;

int64_t g60e3a8 = 0;

int64_t g60edf0 = 0;

int16_t g60ede8 = 0;

int64_t NTI_S9agCYBinaYZnGWcjTdxclg_ = 0;

signed char g60e3d0 = 0;

int64_t g60e3d8 = 0;

signed char g60e400 = 0;

int64_t g60e408 = 0;

int64_t g60ed70 = 0;

int64_t NTI_pPliadsJkoxIPLiuFLcL3g_ = 0;

int16_t g60ed68 = 0;

int16_t g6127c8 = 0;

int16_t g6126e8 = 0;

int64_t g6126f0 = 0;

int64_t NTI_uNps8ABY788DreuZn29bmIg_ = 0;

signed char g60e430 = 0;

int64_t g60e438 = 0;

int64_t g60e240 = 0;

signed char g60e220 = 0;

int64_t g60e248 = 0;

int64_t g6124f8 = 0;

int64_t g6125b0 = 0;

int64_t NTI_mCkh9bHWX9bgGIYpwKekBD2Q_ = 0;

int16_t g6125a8 = 0;

signed char g60e1f0 = 0;

int64_t g60e1f8 = 0;

int64_t g6127d0 = 0;

int64_t NTI_vr5DoT1jILTGdRlYv1OYpw_ = 0;

signed char g60e460 = 0;

int64_t g60e468 = 0;

int64_t g612670 = 0;

int64_t NTI_ojoeKfW4VYIm36I9cpDTQIg_ = 0;

int16_t g612668 = 0;

int16_t g612428 = 0;

signed char g60e490 = 0;

int64_t g60e498 = 0;

int64_t g612430 = 0;

int64_t NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_ = 0;

signed char g60e4c0 = 0;

int64_t g60e4c8 = 0;

int64_t g60d400 = 0;

/* TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141 */
signed char TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 = 0;

int64_t g60d408 = 0;

int64_t g60ee98 = 0;

int64_t g6124b0 = 0;

int16_t g6124a8 = 0;

int16_t g6125e8 = 0;

int64_t NTI_ytyiCJqK439aF9cIibuRVpAg_ = 0;

int64_t g60e510 = 0;

signed char g60e4f0 = 0;

int64_t g6124b8 = 0;

int64_t NTI_XEycrCsme5C8CVWAYEcdBQ_ = 0;

signed char g612728 = 0;

signed char g60e550 = 0;

int64_t g60e558 = 0;

signed char g60e580 = 0;

int64_t g60e588 = 0;

int64_t g6125f0 = 0;

int64_t NTI_77mFvmsOLKik79ci2hXkHEg_ = 0;

signed char g60e5b0 = 0;

int64_t g60e5b8 = 0;

int64_t g60ecf0 = 0;

int64_t NTI_oLyohQ7O2XOvGnflOss8EA_ = 0;

int16_t g60ece8 = 0;

signed char g60e640 = 0;

int64_t g60e648 = 0;

signed char g60e670 = 0;

int64_t g60e678 = 0;

int64_t g60d110 = 0;

signed char g60e6a0 = 0;

int64_t g60e6a8 = 0;

int64_t g60e630 = 0;

signed char g60e610 = 0;

int64_t g60e638 = 0;

int64_t g60ecf8 = 0;

int64_t g6123f0 = 0;

int64_t NTI_uB9b75OUPRENsBAu4AnoePA_ = 0;

int16_t g6123e8 = 0;

int64_t g612408 = 0;

void Marker_tySequence_uB9b75OUPRENsBAu4AnoePA();

signed char g60e5e0 = 0;

int64_t g60e5e8 = 0;

int64_t g612470 = 0;

int64_t NTI_hMQEc0FMry7Up7EoPki79aA_ = 0;

int16_t g612468 = 0;

signed char g60e6d0 = 0;

int64_t g60e6d8 = 0;

signed char g60e700 = 0;

int64_t g60e708 = 0;

int64_t g60e540 = 0;

signed char g60e520 = 0;

int64_t g60e548 = 0;

int64_t NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_ = 0;

signed char g60ee28 = 0;

int64_t g60ee48 = 0;

struct s41 {
    signed char[8] pad8;
    void* f8;
    signed char[8] pad24;
    void** f24;
    signed char[7] pad32;
    void** f32;
    signed char[15] pad48;
    int64_t f48;
};

void Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw(struct s41* rdi, int64_t rsi);

int64_t NTI_qrLSDoe2oBoAqNtJ9badtnA_ = 0;

signed char g60eda8 = 0;

int64_t g60e750 = 0;

signed char g60e730 = 0;

int64_t NTI_iLZrPn9anoh9ad1MmO0RczFw_ = 0;

signed char g612628 = 0;

int64_t g60e780 = 0;

signed char g60e760 = 0;

int64_t NTI_HMIVdYjdZYWskTmTQVo5BQ_ = 0;

signed char g60ed28 = 0;

int64_t g60ed30 = 0;

int64_t g60ed48 = 0;

struct s42 {
    signed char[8] pad8;
    void** f8;
    signed char[15] pad24;
    void* f24;
    void* f32;
};

void Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ(struct s42* rdi, int64_t rsi);

int64_t NTI_LbeSGvgPzGzXnW9caIkJqMA_ = 0;

signed char g60ef68 = 0;

int64_t g60e7b0 = 0;

signed char g60e790 = 0;

int64_t NTI_vyjC2ukVFYc78nQPrSCc9bA_ = 0;

signed char g60ef08 = 0;

int64_t g60e7e0 = 0;

signed char g60e7c0 = 0;

int64_t NTI_KGSY1JdrNB7Xi8KDhXFhSg_ = 0;

signed char g612808 = 0;

int64_t g60e810 = 0;

signed char g60e7f0 = 0;

int64_t NTI_LEclZrWX2FQAodlapxGITw_ = 0;

signed char g612528 = 0;

int64_t g612530 = 0;

int64_t g612548 = 0;

struct s43 {
    signed char[8] pad8;
    void* f8;
    signed char[8] pad24;
    void** f24;
    signed char[7] pad32;
    void* f32;
};

void Marker_tyRef_LEclZrWX2FQAodlapxGITw(struct s43* rdi, int64_t rsi);

void systemDatInit000() {
    int64_t rdx1;
    struct s40* rax2;

    __asm__("movq xmm0, [rip+0x1c98]");
    *reinterpret_cast<int32_t*>(&rdx1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax2) = 0x60d3e0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    __asm__("movdqa xmm15, [rip+0x1b6f]");
    __asm__("movhps xmm0, [rip+0x1c70]");
    g60ee88 = 0x312;
    __asm__("movdqa xmm14, [rip+0x1b68]");
    __asm__("movaps [rip+0x2043a1], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movdqa xmm13, [rip+0x1b62]");
    __asm__("movq xmm1, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x1c40]");
    g60ee90 = 0;
    __asm__("movdqa xmm12, [rip+0x1b4c]");
    NTI_TuG1vdYwChKtx4TOkRnAjw_ = 56;
    __asm__("punpcklqdq xmm1, xmm1");
    __asm__("movdqa xmm11, [rip+0x1b44]");
    g60eed0 = 0;
    __asm__("movdqa xmm10, [rip+0x1b40]");
    NTI_rR5Bzr1D5krxoo1NcNyeMA_ = 8;
    __asm__("movdqa xmm9, [rip+0x1b3c]");
    g60eec8 = 0x31f;
    g60d410 = 1;
    g60d418 = 0;
    g612570 = 0;
    NTI_jIBKr1ejBgsfM33Kxw4j7A_ = 1;
    g612568 = 0x30e;
    __asm__("movaps [rip+0x2056ee], xmm0");
    __asm__("movdqa xmm0, [rip+0x1a86]");
    do {
        __asm__("movdqa xmm7, xmm0");
        __asm__("movdqa xmm6, xmm0");
        __asm__("movdqa xmm5, xmm0");
        rdx1 = rdx1 + 0x80;
        __asm__("movdqa xmm2, [rip+0x1aee]");
        __asm__("movdqa xmm8, xmm0");
        __asm__("movdqa xmm4, xmm0");
        __asm__("movdqa xmm3, xmm0");
        __asm__("paddq xmm8, xmm14");
        __asm__("paddq xmm7, xmm13");
        rax2 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(rax2) + 0x300);
        __asm__("movq [rax-0x268], xmm0");
        __asm__("paddq xmm2, xmm0");
        __asm__("paddq xmm6, xmm12");
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 96) = 1;
        __asm__("paddq xmm5, xmm11");
        __asm__("paddq xmm4, xmm10");
        __asm__("movhps [rax-0x238], xmm0");
        __asm__("paddq xmm3, xmm9");
        __asm__("movhps [rax-0x178], xmm7");
        __asm__("movq [rax-0x208], xmm8");
        __asm__("movhps [rax-0x1d8], xmm8");
        __asm__("movq [rax-0x1a8], xmm7");
        __asm__("movq [rax-0x148], xmm6");
        __asm__("movhps [rax-0x118], xmm6");
        __asm__("movq [rax-0xe8], xmm5");
        __asm__("movhps [rax-0xb8], xmm5");
        __asm__("movq [rax-0x88], xmm4");
        __asm__("movhps [rax-0x58], xmm4");
        __asm__("movq [rax-0x28], xmm3");
        __asm__("movhps [rax+0x8], xmm3");
        __asm__("movq [rax+0x38], xmm2");
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x270) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x240) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x210) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x1e0) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x1b0) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x180) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x150) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x120) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0xf0) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0xc0) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 0x90) = 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax2) - 48) = 1;
        rax2->f0 = 1;
        rax2->f48 = 1;
        rax2->f96 = 1;
        __asm__("movhps [rax+0x68], xmm2");
        __asm__("movdqa xmm3, [rdx+0x40a630]");
        __asm__("movdqa xmm2, [rdx+0x40a640]");
        __asm__("movdqa xmm6, [rdx+0x40a600]");
        __asm__("movdqa xmm7, [rdx+0x40a5f0]");
        __asm__("movq [rax-0x78], xmm3");
        __asm__("movdqa xmm5, [rdx+0x40a610]");
        __asm__("movdqa xmm8, [rdx+0x40a5e0]");
        __asm__("movhps [rax-0x48], xmm3");
        __asm__("movdqa xmm3, [rip+0x19b5]");
        __asm__("movq [rax-0x18], xmm2");
        __asm__("movdqa xmm4, [rdx+0x40a620]");
        __asm__("paddq xmm3, xmm0");
        __asm__("movhps [rax+0x18], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("movhps [rax-0x168], xmm6");
        __asm__("psllq xmm2, 0x1");
        __asm__("movhps [rax-0x228], xmm8");
        __asm__("paddq xmm2, xmm3");
        __asm__("movhps [rax-0x1c8], xmm7");
        __asm__("movdqa xmm3, [rip+0x1985]");
        __asm__("movq [rax-0x198], xmm6");
        __asm__("psllq xmm2, 0x4");
        __asm__("movdqa xmm6, [rdx+0x40a650]");
        __asm__("paddq xmm3, xmm0");
        __asm__("paddq xmm2, xmm1");
        __asm__("movq [rax-0x258], xmm8");
        __asm__("movq [rax-0x1f8], xmm7");
        __asm__("movq [rax-0x138], xmm5");
        __asm__("movhps [rax-0x108], xmm5");
        __asm__("movq [rax-0xd8], xmm4");
        __asm__("movhps [rax-0xa8], xmm4");
        rax2->f72 = *reinterpret_cast<int64_t*>(rdx1 + 0x40a650);
        __asm__("movhps [rax+0x78], xmm6");
        __asm__("movaps [rdx+0x60d160], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("movdqa xmm3, [rip+0x1925]");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm3, xmm0");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d170], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("movdqa xmm3, [rip+0x190c]");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm3, xmm0");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d180], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d190], xmm2");
        __asm__("movdqa xmm3, [rip+0x18e3]");
        __asm__("paddq xmm3, xmm0");
        __asm__("movdqa xmm2, xmm3");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("movdqa xmm3, [rip+0x18da]");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm3, xmm0");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d1a0], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("movdqa xmm3, [rip+0x18c1]");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm3, xmm0");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d1b0], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("movdqa xmm3, [rip+0x18a8]");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm3, xmm0");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d1c0], xmm2");
        __asm__("movdqa xmm2, xmm3");
        __asm__("paddq xmm0, xmm15");
        __asm__("psllq xmm2, 0x1");
        __asm__("paddq xmm2, xmm3");
        __asm__("psllq xmm2, 0x4");
        __asm__("paddq xmm2, xmm1");
        __asm__("movaps [rdx+0x60d1d0], xmm2");
    } while (rdx1 != 0x200);
    __asm__("movq xmm3, [rsp-0x10]");
    __asm__("movq xmm1, [rsp-0x10]");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movdqa xmm4, xmm1");
    __asm__("movq xmm2, [rsp-0x10]");
    __asm__("movq xmm5, [rsp-0x10]");
    __asm__("movhps xmm4, [rip+0x1812]");
    __asm__("movhps xmm5, [rip+0x17fe]");
    g60eca8 = 0x30e;
    __asm__("movaps [rip+0x203f4b], xmm5");
    __asm__("movq xmm5, [rsp-0x10]");
    g60e090 = 64;
    __asm__("movhps xmm5, [rip+0x17db]");
    g60e070 = 2;
    __asm__("movaps [rip+0x203c85], xmm5");
    g60e098 = 0x60d1e0;
    g612578 = 0x60e070;
    g60d440 = 1;
    g60d448 = 8;
    g60ecb0 = 0;
    NTI_v8QUszD1sWlSIWZz7mC4bQ_ = 1;
    g60e0d0 = 1;
    g60e0d8 = 0;
    g60e0e8 = reinterpret_cast<int64_t>("ntfNoRefs");
    g60e100 = 1;
    g60e108 = 1;
    g60e118 = reinterpret_cast<int64_t>("ntfAcyclic");
    g60e130 = 1;
    __asm__("movq xmm5, [rsp-0x10]");
    __asm__("movhps xmm5, [rip+0x1737]");
    g60efc8 = 0x313;
    __asm__("movups [rip+0x2059f4], xmm5");
    __asm__("movq xmm5, [rsp-0x10]");
    g612768 = 0x315;
    __asm__("movhps xmm5, [rip+0x1713]");
    g60e138 = 2;
    __asm__("movaps [rip+0x204aa9], xmm5");
    __asm__("movdqa xmm5, xmm0");
    __asm__("movhps xmm5, [rip+0x16fe]");
    g60e148 = reinterpret_cast<int64_t>("ntfEnumHole");
    __asm__("movaps [rip+0x204bac], xmm5");
    g60d1c0 = 0x60e130;
    g60e180 = 3;
    g60e160 = 2;
    g60e188 = 0x60d1b0;
    g60ecb8 = 0x60e160;
    NTI_MbMVByo9a9ck632Se8onTXew_ = 1;
    g60e1b0 = 0;
    g60e190 = 0;
    g60e0a0 = 1;
    g60e0a8 = 9;
    g612770 = 0x60ee80;
    NTI_7JWFFgr9aqaR3U4iXEpLCag_ = 8;
    g60e1c0 = 1;
    g60e1c8 = 16;
    g6124f0 = 0;
    NTI_kT45dHShde6Al0PdS4U9aGA_ = 48;
    g6124e8 = 0x312;
    g6195b0 = 0;
    NTI_unfNsxrcATrufDZmpBq4HQ_ = 1;
    __asm__("movq xmm5, [rsp-0x10]");
    __asm__("movhps xmm5, [rip+0x1618]");
    g6195a8 = 0x30e;
    __asm__("movaps [rip+0x203a52], xmm5");
    __asm__("movq xmm5, [rsp-0x10]");
    __asm__("movhps xmm5, [rip+0x15fc]");
    g60e280 = 1;
    __asm__("movaps [rip+0x203a3e], xmm5");
    __asm__("movq xmm5, [rsp-0x10]");
    g60e288 = 0;
    __asm__("movhps xmm5, [rip+0x15a6]");
    g60e298 = reinterpret_cast<int64_t>("nkNone");
    __asm__("movaps [rip+0x204b04], xmm5");
    g60e2b0 = 1;
    g60e2b8 = 1;
    g60e2c8 = reinterpret_cast<int64_t>("nkSlot");
    g60e2e0 = 1;
    g60e2e8 = 2;
    g60e2f8 = reinterpret_cast<int64_t>("nkList");
    g60e310 = 1;
    g60e318 = 3;
    g60e328 = reinterpret_cast<int64_t>("nkCase");
    g60e360 = 4;
    g60e340 = 2;
    g60e368 = 0x60d160;
    g6195b8 = 0x60e340;
    g60e250 = 1;
    g60e258 = 0;
    g60e370 = 1;
    g60e378 = 8;
    __asm__("movhps xmm0, [rip+0x152a]");
    __asm__("movq xmm5, [rip+0x14c2]");
    __asm__("movaps [rip+0x204b9b], xmm0");
    __asm__("movq xmm0, [rip+0x14b3]");
    __asm__("movhps xmm5, [rip+0x14fb]");
    __asm__("movhps xmm0, [rip+0x1504]");
    __asm__("movaps [rip+0x204b45], xmm5");
    __asm__("movaps [rip+0x204bce], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x14e8]");
    g60e3a0 = 1;
    __asm__("movaps [rip+0x20391a], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x14cc]");
    g60e3a8 = 16;
    __asm__("movaps [rip+0x203902], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    g60edf0 = 0;
    __asm__("movhps xmm0, [rip+0x14aa]");
    g60ede8 = 0x31d;
    __asm__("movaps [rip+0x2038eb], xmm0");
    NTI_S9agCYBinaYZnGWcjTdxclg_ = 8;
    g60e3d0 = 1;
    g60e3d8 = 24;
    __asm__("movaps [rip+0x204b07], xmm4");
    g60e400 = 1;
    g60e408 = 32;
    g60ed70 = 0x6125a0;
    NTI_pPliadsJkoxIPLiuFLcL3g_ = 0x3fff8;
    g60ed68 = 0x310;
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x1430]");
    g6127c8 = 0x31a;
    __asm__("movaps [rip+0x204b05], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x140f]");
    g6126e8 = 0x315;
    __asm__("movaps [rip+0x2048a0], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    g6126f0 = 0x60ed60;
    __asm__("movhps xmm0, [rip+0x13f0]");
    NTI_uNps8ABY788DreuZn29bmIg_ = 8;
    __asm__("movaps [rip+0x204ae6], xmm0");
    g60e430 = 1;
    g60e438 = 40;
    g60e240 = 6;
    g60e220 = 2;
    g60e248 = 0x60d180;
    g6124f8 = 0x60e220;
    g6125b0 = 0x6124e0;
    NTI_mCkh9bHWX9bgGIYpwKekBD2Q_ = 8;
    g6125a8 = 0x315;
    g60e1f0 = 1;
    g60e1f8 = 24;
    g6127d0 = 0;
    NTI_vr5DoT1jILTGdRlYv1OYpw_ = 8;
    g60e460 = 1;
    g60e468 = 32;
    g612670 = 0;
    NTI_ojoeKfW4VYIm36I9cpDTQIg_ = 8;
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x131f]");
    g612668 = 0x319;
    __asm__("movaps [rip+0x204a3c], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x12fe]");
    g612428 = 0x319;
    __asm__("movaps [rip+0x204da3], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x12dd]");
    g60e490 = 1;
    __asm__("movaps [rip+0x204d8f], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x12c1]");
    g60e498 = 40;
    __asm__("movaps [rip+0x204d77], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    g612430 = 0;
    __asm__("movhps xmm0, [rip+0x129f]");
    NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_ = 8;
    __asm__("movaps [rip+0x2049cd], xmm0");
    __asm__("movdqa xmm0, xmm3");
    g60e4c0 = 1;
    g60e4c8 = 48;
    g60d400 = 8;
    TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 = 2;
    g60d408 = 0x60e820;
    g60ee98 = 0x60d3e0;
    g6124b0 = 0;
    __asm__("movhps xmm0, [rip+0x1245]");
    __asm__("movaps [rip+0x2049fd], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    g6124a8 = 0x111;
    __asm__("movhps xmm0, [rip+0x1224]");
    __asm__("movaps [rip+0x204a34], xmm0");
    __asm__("movdqa xmm0, xmm1");
    __asm__("movhps xmm0, [rip+0x1211]");
    g6125e8 = 0x21c;
    __asm__("movaps [rip+0x204aa6], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    NTI_ytyiCJqK439aF9cIibuRVpAg_ = 8;
    g60e510 = 0;
    g60e4f0 = 2;
    g6124b8 = 0x60e4f0;
    NTI_XEycrCsme5C8CVWAYEcdBQ_ = 56;
    g612728 = 17;
    g60e550 = 1;
    g60e558 = 8;
    g60e580 = 1;
    g60e588 = 16;
    __asm__("movaps [rip+0x20497b], xmm4");
    g6125f0 = 0;
    NTI_77mFvmsOLKik79ci2hXkHEg_ = 8;
    g60e5b0 = 1;
    g60e5b8 = 24;
    g60ecf0 = 0;
    NTI_oLyohQ7O2XOvGnflOss8EA_ = 24;
    g60ece8 = 0x312;
    g60e640 = 1;
    g60e648 = 0;
    __asm__("movhps xmm0, [rip+0x113d]");
    __asm__("movhps xmm1, [rip+0x1146]");
    __asm__("movaps [rip+0x20347f], xmm0");
    __asm__("movq xmm0, [rip+0x1047]");
    __asm__("movhps xmm0, [rip+0x111f]");
    g60e670 = 1;
    __asm__("movaps [rip+0x2049d9], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    g60e678 = 8;
    __asm__("movhps xmm0, [rip+0x1109]");
    g60d110 = 0x60e6a0;
    g60e6a0 = 1;
    g60e6a8 = 16;
    __asm__("movaps [rip+0x2049cd], xmm1");
    g60e630 = 3;
    g60e610 = 2;
    g60e638 = 0x60d100;
    g60ecf8 = 0x60e610;
    g6123f0 = 0x60ece0;
    NTI_uB9b75OUPRENsBAu4AnoePA_ = 8;
    g6123e8 = 0x218;
    g612408 = reinterpret_cast<int64_t>(Marker_tySequence_uB9b75OUPRENsBAu4AnoePA);
    g60e5e0 = 1;
    g60e5e8 = 32;
    __asm__("movaps [rip+0x2048a4], xmm0");
    g612470 = 0;
    NTI_hMQEc0FMry7Up7EoPki79aA_ = 8;
    g612468 = 0x328;
    g60e6d0 = 1;
    g60e6d8 = 40;
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm3, [rip+0x105f]");
    __asm__("movhps xmm0, [rip+0x102f]");
    __asm__("movq [rip+0x205087], xmm2");
    __asm__("movaps [rip+0x204930], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0x1012]");
    g60e700 = 1;
    __asm__("movaps [rip+0x20334c], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0xff6]");
    g60e708 = 48;
    __asm__("movaps [rip+0x203334], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0xfd6]");
    __asm__("movaps [rip+0x2048f7], xmm3");
    __asm__("movaps [rip+0x203320], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    g60e540 = 6;
    __asm__("movhps xmm0, [rip+0xfc0]");
    g60e520 = 2;
    __asm__("movups [rip+0x2088ea], xmm0");
    __asm__("movdqa xmm0, xmm2");
    g60e548 = 0x60d120;
    NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_ = 8;
    g60ee28 = 22;
    g60ee48 = reinterpret_cast<int64_t>(Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw);
    NTI_qrLSDoe2oBoAqNtJ9badtnA_ = 56;
    g60eda8 = 17;
    g60e750 = 0;
    __asm__("movhps xmm0, [rip+0xf6a]");
    __asm__("movhps xmm2, [rip+0xf73]");
    __asm__("movups [rip+0x204f03], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("movhps xmm0, [rip+0xf45]");
    g60e730 = 2;
    __asm__("movups [rip+0x20875f], xmm0");
    __asm__("movq xmm0, [rsp-0x10]");
    NTI_iLZrPn9anoh9ad1MmO0RczFw_ = 56;
    __asm__("movhps xmm0, [rip+0xf2f]");
    g612628 = 17;
    __asm__("movups [rip+0x205019], xmm0");
    g60e780 = 0;
    g60e760 = 2;
    NTI_HMIVdYjdZYWskTmTQVo5BQ_ = 8;
    g60ed28 = 22;
    g60ed30 = 0x612620;
    g60ed48 = reinterpret_cast<int64_t>(Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ);
    NTI_LbeSGvgPzGzXnW9caIkJqMA_ = 56;
    g60ef68 = 17;
    g60e7b0 = 0;
    g60e790 = 2;
    __asm__("movups [rip+0x205014], xmm2");
    NTI_vyjC2ukVFYc78nQPrSCc9bA_ = 56;
    g60ef08 = 17;
    g60e7e0 = 0;
    g60e7c0 = 2;
    NTI_KGSY1JdrNB7Xi8KDhXFhSg_ = 56;
    g612808 = 17;
    g60e810 = 0;
    g60e7f0 = 2;
    __asm__("movq xmm0, [rsp-0x10]");
    NTI_LEclZrWX2FQAodlapxGITw_ = 8;
    __asm__("movhps xmm0, [rip+0xe5b]");
    g612528 = 22;
    __asm__("movups [rip+0x20883d], xmm0");
    g612530 = 0x612800;
    g612548 = reinterpret_cast<int64_t>(Marker_tyRef_LEclZrWX2FQAodlapxGITw);
    return;
}

void _fini() {
    return;
}

void fun_400b7b() {
    return;
}

void** name_6AZmjR50AehluhCwumgXmw = reinterpret_cast<void**>(0);

void fun_400ce2() {
    void** rsi1;
    void** rbx2;
    void** rdi3;
    int64_t v4;

    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi1);
    __asm__("pxor xmm0, xmm0");
    name_6AZmjR50AehluhCwumgXmw = rbx2;
    __asm__("movaps [rsp], xmm0");
    copyString(0x40a0c0);
    rdi3 = name_6AZmjR50AehluhCwumgXmw;
    copyString(rdi3);
    copyString(0x40a0a0);
    echoBinSafe(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8, 3);
    goto v4;
}

struct s44 {
    struct s44* f0;
    int64_t f8;
};

void fun_401255() {
    struct s44* rax1;
    int64_t rsi2;

    do {
        if (rax1->f8 == rsi2) 
            break;
        rax1 = rax1->f0;
    } while (rax1);
    return;
}

struct s45 {
    struct s45* f0;
    int64_t f8;
};

unsigned char fun_401285() {
    struct s45* rax1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t rsi4;
    uint64_t rcx5;

    do {
        rax1 = rax1->f0;
        if (!rax1) 
            break;
    } while (rdx2 != rax1->f8);
    goto addr_401296_4;
    return *reinterpret_cast<unsigned char*>(&rax1);
    addr_401296_4:
    rcx3 = rsi4;
    *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<uint32_t*>(&rcx3) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!(*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax1) + (rcx5 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx5))));
}

void intSetPut_KWgRM9bUk6rwhAaHSiuK9aYA(void** rdi, void*** rsi, void** rdx) {
    int64_t rax4;
    void*** rbp5;
    void** rax6;
    void** rax7;

    *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(&rdx);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rbp5 = rsi + rax4 * 8;
    rax6 = *rbp5;
    if (rax6) {
        do {
            if (rdx == *reinterpret_cast<void***>(rax6 + 8)) 
                break;
            rax6 = *reinterpret_cast<void***>(rax6);
        } while (rax6);
        goto addr_4015b8_4;
    } else {
        goto addr_4015b8_4;
    }
    return;
    addr_4015b8_4:
    rax7 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rdi, 80, rdx);
    *reinterpret_cast<void***>(rax7) = *rbp5;
    *rbp5 = rax7;
    *reinterpret_cast<void***>(rax7 + 8) = rdx;
    return;
}

void fun_401601(void** rdi) {
    void** rax2;
    void** rbp3;
    void** rdx4;
    void*** r12_5;
    void*** r12_6;
    void** rbp7;
    int64_t rcx8;
    int64_t rbx9;
    uint64_t rcx10;
    uint64_t rsi11;
    int64_t v12;

    do {
        rax2 = *reinterpret_cast<void***>(rax2);
        if (!rax2) 
            break;
    } while (rbp3 != *reinterpret_cast<void***>(rax2 + 8));
    goto addr_401616_4;
    rax2 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rdi, 80, rdx4);
    *reinterpret_cast<void***>(rax2) = *r12_5;
    *r12_6 = rax2;
    *reinterpret_cast<void***>(rax2 + 8) = rbp7;
    addr_401616_4:
    rcx8 = rbx9;
    *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx8) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    rsi11 = rcx10 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax2 + rsi11 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax2 + rsi11 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx10);
    goto v12;
}

struct s46 {
    signed char[8] pad8;
    void** f8;
};

struct s47 {
    void** f0;
    signed char[7] pad8;
    void* f8;
    struct s47* f16;
    struct s47* f24;
};

struct s48 {
    struct s48* f0;
    uint64_t f8;
};

struct s49 {
    void** f0;
    signed char[10407] pad10408;
    void** f10408;
};

struct s50 {
    void** f0;
    signed char[4215] pad4216;
    struct s47* f4216;
};

void splitChunk_8QXhiy717OAl8WNA2X27EA(void** rdi, struct s46* rsi, void** rdx) {
    void** rbp4;
    struct s47* rbx5;
    void* rdi6;
    uint64_t* r8_7;
    uint64_t rcx8;
    int64_t rax9;
    struct s48* rax10;
    uint64_t rcx11;
    uint64_t rcx12;
    uint64_t rax13;
    uint64_t rax14;
    void** r13_15;
    uint64_t r12_16;
    int64_t rax17;
    struct s49* r14_18;
    void** rax19;
    uint64_t rcx20;
    uint64_t rcx21;
    uint64_t rsi22;
    void* rax23;
    int64_t rcx24;
    int64_t rdx25;
    int64_t rcx26;
    int64_t rdx27;
    int32_t ecx28;
    int64_t rsi29;
    uint64_t rcx30;
    struct s50* rdi31;
    struct s47* rax32;
    uint32_t ecx33;
    int64_t rbx34;
    uint32_t ecx35;
    int64_t rax36;

    __asm__("pxor xmm0, xmm0");
    rbp4 = rdi;
    rbx5 = reinterpret_cast<struct s47*>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rsi));
    __asm__("movups [rbx+0x10], xmm0");
    rdi6 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi->f8) - reinterpret_cast<unsigned char>(rdx));
    rbx5->f0 = rdx;
    rbx5->f8 = rdi6;
    r8_7 = reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rsi->f8) + reinterpret_cast<uint64_t>(rsi));
    rcx8 = reinterpret_cast<uint64_t>(r8_7) >> 21;
    *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<unsigned char*>(&rcx8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    rax10 = *reinterpret_cast<struct s48**>(reinterpret_cast<unsigned char>(rbp4) + reinterpret_cast<uint64_t>(rax9 * 8) + 0x28a8);
    if (rax10) {
        do {
            if (rcx8 == rax10->f8) 
                break;
            rax10 = rax10->f0;
        } while (rax10);
        goto addr_4018c6_4;
    } else {
        goto addr_4018c6_4;
    }
    rcx11 = reinterpret_cast<uint64_t>(r8_7) >> 12;
    *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint32_t*>(&rcx11) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    if (*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax10) + (rcx12 >> 6) * 8 + 16) & 1 << *reinterpret_cast<unsigned char*>(&rcx12)) {
        rax13 = *r8_7;
        *reinterpret_cast<uint32_t*>(&rax14) = *reinterpret_cast<uint32_t*>(&rax13) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
        *r8_7 = reinterpret_cast<uint64_t>(rdi6) | rax14;
    }
    addr_4018c6_4:
    rsi->f8 = rdx;
    r13_15 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx5) >> 21);
    r12_16 = reinterpret_cast<uint64_t>(rbx5) >> 12;
    *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<unsigned char*>(&r13_15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    r14_18 = reinterpret_cast<struct s49*>(reinterpret_cast<unsigned char>(rbp4) + reinterpret_cast<uint64_t>(rax17 * 8));
    rax19 = r14_18->f10408;
    if (rax19) {
        do {
            if (r13_15 == *reinterpret_cast<void***>(rax19 + 8)) 
                break;
            rax19 = *reinterpret_cast<void***>(rax19);
        } while (rax19);
        goto addr_4019e0_10;
    } else {
        goto addr_4019e0_10;
    }
    addr_40190a_12:
    rcx20 = r12_16;
    *reinterpret_cast<uint32_t*>(&rcx21) = *reinterpret_cast<uint32_t*>(&rcx20) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
    rsi22 = rcx21 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax19 + rsi22 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax19 + rsi22 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx21);
    rax23 = rbx5->f8;
    *reinterpret_cast<uint32_t*>(&rcx24) = *reinterpret_cast<uint32_t*>(&rax23);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax23) > 0xffff) {
        if (*reinterpret_cast<uint32_t*>(&rax23) > 0xffffff) {
            *reinterpret_cast<int32_t*>(&rdx25) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx24) = *reinterpret_cast<uint32_t*>(&rax23) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rcx24) = *reinterpret_cast<uint32_t*>(&rcx24) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx25) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx25) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax23) > 0xff) {
            *reinterpret_cast<int32_t*>(&rdx25) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx24) = *reinterpret_cast<uint32_t*>(&rax23) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
        }
    }
    rcx26 = *reinterpret_cast<signed char*>(rcx24 + 0x40a9e0);
    rbx5->f24 = reinterpret_cast<struct s47*>(0);
    rdx27 = rdx25 + rcx26;
    ecx28 = static_cast<int32_t>(rdx27 - 5);
    rsi29 = rdx27 - 6;
    rcx30 = (reinterpret_cast<uint64_t>(rax23) >> *reinterpret_cast<signed char*>(&ecx28)) - 32;
    rdi31 = reinterpret_cast<struct s50*>(rbp4 + ((rsi29 << 5) + rcx30) * 8);
    rax32 = rdi31->f4216;
    rbx5->f16 = rax32;
    if (rax32) {
        rax32->f24 = rbx5;
    }
    rdi31->f4216 = rbx5;
    ecx33 = *reinterpret_cast<uint32_t*>(&rcx30) & 31;
    rbx34 = 1 << *reinterpret_cast<unsigned char*>(&ecx33);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp4) + reinterpret_cast<uint64_t>(rdx27 * 4) + 0xffc) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp4) + reinterpret_cast<uint64_t>(rdx27 * 4) + 0xffc) | *reinterpret_cast<uint32_t*>(&rbx34);
    ecx35 = *reinterpret_cast<uint32_t*>(&rsi29) & 31;
    rax36 = 1 << *reinterpret_cast<unsigned char*>(&ecx35);
    *reinterpret_cast<uint32_t*>(rbp4 + 0x1010) = *reinterpret_cast<uint32_t*>(rbp4 + 0x1010) | *reinterpret_cast<uint32_t*>(&rax36);
    return;
    addr_4019e0_10:
    rax19 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rbp4, 80, rdx);
    *reinterpret_cast<void***>(rax19) = r14_18->f10408;
    r14_18->f10408 = rax19;
    *reinterpret_cast<void***>(rax19 + 8) = r13_15;
    goto addr_40190a_12;
}

void fun_401a4e(int64_t rdi) {
    uint32_t ecx2;
    uint32_t ecx3;
    int64_t r9_4;
    int64_t rdx5;
    int64_t rax6;
    uint32_t ecx7;
    uint32_t edx8;
    int64_t r8_9;

    ecx2 = ecx3 & 31;
    r9_4 = rdi + rdx5 * 4;
    rax6 = 1 << *reinterpret_cast<unsigned char*>(&ecx2);
    *reinterpret_cast<uint32_t*>(r9_4 + 0x1014) = *reinterpret_cast<uint32_t*>(r9_4 + 0x1014) & reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rax6));
    if (*reinterpret_cast<uint32_t*>(r9_4 + 0x1014)) {
        __asm__("pxor xmm0, xmm0");
        __asm__("movups [rsi+0x10], xmm0");
        return;
    } else {
        __asm__("pxor xmm0, xmm0");
        ecx7 = edx8 & 31;
        r8_9 = 1 << *reinterpret_cast<unsigned char*>(&ecx7);
        *reinterpret_cast<uint32_t*>(rdi + 0x1010) = *reinterpret_cast<uint32_t*>(rdi + 0x1010) & reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&r8_9));
        __asm__("movups [rsi+0x10], xmm0");
        return;
    }
}

void fun_402008() {
    void** rax1;
    void** r13_2;
    void** r12_3;
    void** rdx4;
    int64_t r14_5;
    int64_t r14_6;
    void** r13_7;
    int64_t rcx8;
    int64_t rbp9;
    uint64_t rcx10;
    uint64_t rsi11;
    int64_t v12;

    do {
        rax1 = *reinterpret_cast<void***>(rax1);
        if (!rax1) 
            break;
    } while (r13_2 != *reinterpret_cast<void***>(rax1 + 8));
    goto addr_40201e_4;
    rax1 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(r12_3, 80, rdx4);
    *reinterpret_cast<void***>(rax1) = *reinterpret_cast<void***>(r14_5 + 0x28a8);
    *reinterpret_cast<void***>(r14_6 + 0x28a8) = rax1;
    *reinterpret_cast<void***>(rax1 + 8) = r13_7;
    addr_40201e_4:
    rcx8 = rbp9;
    *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx8) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    rsi11 = rcx10 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax1 + rsi11 * 8) + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax1 + rsi11 * 8) + 16) | 1 << *reinterpret_cast<unsigned char*>(&rcx10);
    goto v12;
}

void fun_402092() {
    __asm__("movq xmm0, [rsp-0x10]");
    __asm__("punpcklqdq xmm0, xmm0");
    __asm__("movups [rdi+0x30d8], xmm0");
    return;
}

struct s51 {
    struct s51* f0;
    struct s51* f8;
    signed char[16] pad32;
    int64_t f32;
};

void split_Cfx7NvEVZIhBjBm7i89boSg_2(struct s51** rdi) {
    struct s51* rax2;
    struct s51* rdx3;

    rax2 = *rdi;
    rdx3 = rax2->f8;
    if (rdx3->f8->f32 == rax2->f32) {
        *rdi = rdx3;
        rax2->f8 = rdx3->f0;
        (*rdi)->f0 = rax2;
        (*rdi)->f32 = (*rdi)->f32 + 1;
    }
    return;
}

struct s52 {
    struct s52* f0;
    uint64_t f8;
};

void excl_Z9cZKmN1jjRFCzU0lgW9a1XA(struct s52** rdi, uint64_t rsi) {
    uint64_t rdx3;
    int64_t rax4;
    struct s52* rax5;
    uint64_t rcx6;
    uint64_t rcx7;
    uint64_t rsi8;

    rdx3 = rsi >> 9;
    *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(&rdx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rax5 = rdi[rax4];
    if (rax5) {
        do {
            if (rdx3 == rax5->f8) 
                break;
            rax5 = rax5->f0;
        } while (rax5);
        goto addr_402760_4;
    } else {
        goto addr_402756_6;
    }
    rcx6 = rsi;
    *reinterpret_cast<uint32_t*>(&rcx7) = *reinterpret_cast<uint32_t*>(&rcx6) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    rsi8 = rcx7 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax5) + rsi8 * 8 + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax5) + rsi8 * 8 + 16) & reinterpret_cast<uint64_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx7)));
    addr_402756_6:
    return;
    addr_402760_4:
    return;
}

struct s53 {
    struct s53* f0;
    int64_t f8;
};

void fun_402cd8(int64_t rdi, int64_t rsi, int64_t rdx, uint32_t ecx, int64_t r8) {
    struct s53* rax6;
    int64_t rcx7;
    uint64_t rcx8;
    uint64_t r9_9;

    do {
        rax6 = rax6->f0;
        if (!rax6) 
            break;
    } while (r8 != rax6->f8);
    goto addr_402cee_4;
    addr_402d0c_5:
    rcx7 = *reinterpret_cast<int64_t*>(rdi + 0x2880);
    if (*reinterpret_cast<int64_t*>(rdi + 0x2888) >= *reinterpret_cast<int64_t*>(rdi + 0x2880)) {
        rcx7 = *reinterpret_cast<int64_t*>(rdi + 0x2888);
    }
    *reinterpret_cast<int64_t*>(rdi + 0x2880) = *reinterpret_cast<int64_t*>(rdi + 0x2880) - rsi;
    *reinterpret_cast<int64_t*>(rdi + 0x2888) = rcx7;
    goto 0x400a50;
    addr_402cee_4:
    *reinterpret_cast<uint32_t*>(&rcx8) = ecx & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    r9_9 = rcx8 >> 6;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax6) + r9_9 * 8 + 16) = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax6) + r9_9 * 8 + 16) & reinterpret_cast<uint64_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx8)));
    goto addr_402d0c_5;
}

void fun_4041ba() {
    void** rsi1;
    int64_t* rbx2;
    int64_t rbp3;
    int64_t v4;

    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi1);
    *rbx2 = rbp3;
    goto v4;
}

struct s54 {
    signed char[8] pad8;
    int64_t f8;
};

int64_t fun_4041fc(int64_t rdi, struct s54* rsi) {
    int64_t rax3;

    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(rdi + rsi->f8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}

int64_t fun_404262() {
    int64_t* rsi1;
    int64_t rcx2;

    return rsi1[rcx2];
}

struct s55 {
    signed char[8] pad8;
    void* f8;
};

struct s56 {
    signed char[40] pad40;
    int64_t f40;
};

struct s57 {
    signed char[16] pad16;
    int64_t f16;
};

struct s58 {
    signed char[24] pad24;
    int64_t f24;
};

struct s59 {
    signed char[16] pad16;
    int64_t f16;
};

void fun_404671() {
    int1_t zf1;
    void** rbx2;
    void* rbx3;
    void** r8_4;
    int64_t rdx5;
    int64_t rbx6;
    int64_t* rdi7;
    int64_t rbx8;
    void* tmp64_9;
    struct s55* r12_10;
    struct s56* r12_11;
    uint64_t rcx12;
    struct s57* rbx13;
    int64_t rbx14;
    int64_t rcx15;
    struct s58* rbp16;
    struct s59* rbp17;
    int64_t v18;

    zf1 = g612138 == 0;
    if (zf1) {
        __asm__("movq xmm0, [rsp+0x8]");
        g612108 = 0x612138;
        __asm__("punpcklqdq xmm0, xmm0");
        __asm__("movups [rip+0x20da7b], xmm0");
    } else {
        g612108 = 0x612138;
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx2, reinterpret_cast<int64_t>(rbx3) + 0x2030, r8_4);
    rdx5 = rbx6 + 16;
    rdi7 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx8 + 24) & 0xfffffffffffffff8);
    tmp64_9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<uint64_t>(r12_10->f8));
    g6118f8 = tmp64_9;
    __asm__("movdqa xmm0, [rip+0x6535]");
    r12_11->f40 = 1;
    rcx12 = rdx5 - reinterpret_cast<uint64_t>(rdi7);
    rbx13->f16 = 0;
    *reinterpret_cast<int64_t*>(rbx14 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx15) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx12) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
    while (rcx15) {
        --rcx15;
        *rdi7 = 0;
        ++rdi7;
    }
    rbp16->f24 = rdx5;
    __asm__("movups [rbp+0x0], xmm0");
    rbp17->f16 = 0;
    goto v18;
}

void cellSetPut_mFUFZ7eVLRT9bMaHzrsxFrQ(struct s27* rdi, void** rsi) {
    uint64_t r8_3;
    void** r9_4;
    uint64_t rcx5;
    void* r12_6;
    void*** r10_7;
    uint64_t rax8;
    uint64_t rdx9;
    void** rbx10;
    struct s27* rbp11;
    uint64_t rdx12;
    void** rax13;
    void** rdx14;
    void** rcx15;
    void** rsi16;
    void** rdx17;
    int1_t zf18;
    void** rsi19;
    void** rax20;
    void* tmp64_21;
    void** rdx22;

    r8_3 = rdi->f8;
    r9_4 = rdi->f24;
    rcx5 = r8_3 & reinterpret_cast<unsigned char>(rsi);
    r12_6 = reinterpret_cast<void*>(rcx5 * 8);
    r10_7 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_4) + reinterpret_cast<uint64_t>(r12_6));
    if (!*r10_7) {
        addr_404d03_2:
        rax8 = rdi->f0;
        rdx9 = r8_3 + 1;
        rbx10 = rsi;
        rbp11 = rdi;
        if (reinterpret_cast<int64_t>(rdx9 + rdx9) < reinterpret_cast<int64_t>(rax8 + rax8 * 2) || reinterpret_cast<int64_t>(rdx9 - rax8) <= reinterpret_cast<int64_t>(3)) {
            cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(rbp11);
            r8_3 = rbp11->f8;
            r9_4 = rbp11->f24;
            rax8 = rbp11->f0;
            rcx5 = reinterpret_cast<unsigned char>(rbx10) & r8_3;
            r12_6 = reinterpret_cast<void*>(rcx5 * 8);
            r10_7 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_4) + reinterpret_cast<uint64_t>(r12_6));
        }
    } else {
        rdx12 = rcx5;
        if (rsi != *reinterpret_cast<void***>(*r10_7 + 8)) {
            do {
                rdx12 = rdx12 + rdx12 * 4 + 1 & r8_3;
                if (!*reinterpret_cast<void***>(r9_4 + rdx12 * 8)) 
                    goto addr_404d03_2;
            } while (*reinterpret_cast<void***>(*reinterpret_cast<void***>(r9_4 + rdx12 * 8) + 8) != rsi);
            goto addr_404e06_7;
        } else {
            goto addr_404e06_7;
        }
    }
    rbp11->f0 = rax8 + 1;
    if (*r10_7) {
        do {
            rcx5 = rcx5 + rcx5 * 4 + 1 & r8_3;
            r12_6 = reinterpret_cast<void*>(rcx5 * 8);
        } while (*reinterpret_cast<void***>(r9_4 + rcx5 * 8));
    }
    rax13 = g60f0d0;
    if (!rax13) {
        rax13 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, 0x1000);
        __asm__("movdqa xmm0, [rip+0x5d08]");
        *reinterpret_cast<void***>(rax13 + 32) = reinterpret_cast<void**>(0);
        __asm__("movups [rax+0x28], xmm0");
        __asm__("pxor xmm0, xmm0");
        __asm__("movups [rax+0x10], xmm0");
        *reinterpret_cast<void***>(rax13 + 8) = reinterpret_cast<void**>(96);
        rdx14 = g60f0d0;
        *reinterpret_cast<void***>(rax13 + 16) = rdx14;
        if (rdx14) {
            *reinterpret_cast<void***>(rdx14 + 24) = rax13;
        }
        rcx15 = rax13 + 56;
        g60f0d0 = rax13;
        rsi16 = *reinterpret_cast<void***>(rax13 + 40);
        rdx17 = rcx15;
    } else {
        rcx15 = *reinterpret_cast<void***>(rax13 + 32);
        if (!rcx15) {
            rdx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax13 + 48)) + 56);
            rcx15 = rdx17;
            *reinterpret_cast<void***>(rax13 + 48) = *reinterpret_cast<void***>(rax13 + 48) + 96;
        } else {
            *reinterpret_cast<void***>(rax13 + 32) = *reinterpret_cast<void***>(rcx15);
            rdx17 = rcx15;
        }
        rsi16 = *reinterpret_cast<void***>(rax13 + 40) + 0xffffffffffffffa0;
        *reinterpret_cast<void***>(rax13 + 40) = rsi16;
    }
    if (reinterpret_cast<signed char>(rsi16) <= reinterpret_cast<signed char>(95)) {
        zf18 = rax13 == g60f0d0;
        rsi19 = *reinterpret_cast<void***>(rax13 + 16);
        if (zf18) {
            g60f0d0 = rsi19;
            if (rsi19) {
                *reinterpret_cast<void***>(rsi19 + 24) = reinterpret_cast<void**>(0);
            }
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax13 + 24) + 16) = rsi19;
            if (*reinterpret_cast<void***>(rax13 + 16)) {
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(rax13 + 16) + 24) = *reinterpret_cast<void***>(rax13 + 24);
            }
        }
        __asm__("pxor xmm0, xmm0");
        __asm__("movups [rax+0x10], xmm0");
    }
    rax20 = rdx17 + 16;
    __asm__("pxor xmm0, xmm0");
    tmp64_21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + 96);
    g6118f8 = tmp64_21;
    *reinterpret_cast<void***>(rcx15 + 8) = reinterpret_cast<void**>(1);
    __asm__("movups [rdx+0x10], xmm0");
    __asm__("movups [rax+0x10], xmm0");
    __asm__("movups [rax+0x20], xmm0");
    __asm__("movups [rax+0x30], xmm0");
    __asm__("movups [rax+0x40], xmm0");
    *reinterpret_cast<void***>(rdx17 + 16) = rbp11->f16;
    *reinterpret_cast<void***>(rax20 + 8) = rbx10;
    rdx22 = rbp11->f24;
    rbp11->f16 = rax20;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx22) + reinterpret_cast<uint64_t>(r12_6)) = rax20;
    addr_404e06_7:
    return;
}

struct s61 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s60 {
    signed char[8] pad8;
    uint64_t f8;
    signed char[8] pad24;
    struct s61** f24;
};

void cellSetGet_X4WTfs0wkld8wp8XcE9b8BA(struct s60* rdi, uint64_t rsi) {
    uint64_t rcx3;
    struct s61** rdi4;
    uint64_t rdx5;

    rcx3 = rdi->f8;
    rdi4 = rdi->f24;
    rdx5 = rcx3 & rsi;
    if (rdi4[rdx5]) {
        if (rsi != (rdi4[rdx5])->f8) {
            do {
                rdx5 = rdx5 + rdx5 * 4 + 1 & rcx3;
                if (!rdi4[rdx5]) 
                    break;
            } while ((rdi4[rdx5])->f8 != rsi);
        } else {
            return;
        }
    }
    return;
}

void fun_4051ef() {
    return;
}

void fun_40581a() {
    return;
}

struct s62 {
    signed char[24] pad24;
    void** f24;
};

struct s63 {
    signed char[32] pad32;
    void* f32;
};

void fun_4058c6() {
    void*** rdx1;
    void*** rax2;
    void** rbx3;
    void** rdx4;
    void*** rax5;
    void** rcx6;
    void** r8_7;
    void** rax8;
    void*** rax9;
    void** rsi10;
    void** rdx11;
    void** rax12;
    void** r12_13;
    void*** tmp64_14;
    void** rdi15;
    struct s62* rbp16;
    void** r12_17;
    struct s63* rbp18;
    void*** rdx19;
    void*** rax20;
    void** rbx21;
    void** rdx22;
    void*** rax23;
    void** rcx24;
    void** r8_25;
    void** rax26;
    void** rbx27;
    void*** rax28;
    void** rsi29;
    void** rdx30;
    void** rax31;
    void*** rax32;
    void*** tmp64_33;
    void*** tmp64_34;

    rdx1 = g60f048;
    rax2 = g60f040;
    rbx3 = g60f050;
    if (reinterpret_cast<int64_t>(rdx1) <= reinterpret_cast<int64_t>(rax2)) {
        rdx4 = reinterpret_cast<void**>(rdx1 + reinterpret_cast<int64_t>(rdx1) * 2);
        rax5 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx4) >> 63) + reinterpret_cast<unsigned char>(rdx4)) >> 1);
        g60f048 = rax5;
        rax8 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax5) * 8 + 16, rdx4, rcx6, r8_7);
        *reinterpret_cast<void***>(rax8 + 8) = reinterpret_cast<void**>(1);
        rbx3 = rax8 + 16;
        rax9 = g60f040;
        rsi10 = g60f050;
        rdx11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax9) * 8);
        fun_400a30(rbx3, rsi10, rdx11);
        rax12 = g60f050;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax12 + 0xfffffffffffffff0, rdx11);
        g60f050 = rbx3;
        rax2 = g60f040;
    }
    *reinterpret_cast<void***>(rbx3 + reinterpret_cast<int64_t>(rax2) * 8) = r12_13;
    tmp64_14 = g60f040 + 1;
    g60f040 = tmp64_14;
    rdi15 = rbp16->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi15, 3, rdi15, 3);
    r12_17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp18->f32) + 0xfffffffffffffff0);
    if (rbp18->f32) {
        rdx19 = g60f048;
        rax20 = g60f040;
        rbx21 = g60f050;
        if (reinterpret_cast<int64_t>(rdx19) <= reinterpret_cast<int64_t>(rax20)) {
            rdx22 = reinterpret_cast<void**>(rdx19 + reinterpret_cast<int64_t>(rdx19) * 2);
            rax23 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx22) >> 63) + reinterpret_cast<unsigned char>(rdx22)) >> 1);
            g60f048 = rax23;
            rax26 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax23) * 8 + 16, rdx22, rcx24, r8_25);
            rbx27 = rax26 + 16;
            *reinterpret_cast<void***>(rax26 + 8) = reinterpret_cast<void**>(1);
            rax28 = g60f040;
            rsi29 = g60f050;
            rdx30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax28) * 8);
            fun_400a30(rbx27, rsi29, rdx30);
            rax31 = g60f050;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax31 + 0xfffffffffffffff0, rdx30);
            rax32 = g60f040;
            g60f050 = rbx27;
            *reinterpret_cast<void***>(rbx27 + reinterpret_cast<int64_t>(rax32) * 8) = r12_17;
            tmp64_33 = g60f040 + 1;
            g60f040 = tmp64_33;
        } else {
            *reinterpret_cast<void***>(rbx21 + reinterpret_cast<int64_t>(rax20) * 8) = r12_17;
            tmp64_34 = g60f040 + 1;
            g60f040 = tmp64_34;
        }
    }
    goto doOperation_3F8QeaTyYrJJF2gjBr6b8A;
}

struct s64 {
    signed char[24] pad24;
    void** f24;
};

struct s65 {
    signed char[32] pad32;
    void* f32;
};

void fun_4059bb() {
    uint64_t rdx1;
    int64_t rax2;
    int64_t rax3;
    void** r12_4;
    void** rdi5;
    struct s64* rbp6;
    void** r12_7;
    struct s65* rbp8;
    void** rax9;

    rdx1 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rax2 - 16) - 8);
    *reinterpret_cast<uint64_t*>(rax3 - 16) = rdx1;
    if (rdx1 <= 7) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, r12_4);
    }
    rdi5 = rbp6->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi5, 2);
    r12_7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp8->f32) + 0xfffffffffffffff0);
    if (!rbp8->f32) 
        goto 0x4058b0;
    rax9 = *reinterpret_cast<void***>(r12_7) - 8;
    *reinterpret_cast<void***>(r12_7) = rax9;
    if (reinterpret_cast<unsigned char>(rax9) > reinterpret_cast<unsigned char>(7)) 
        goto 0x4058b0;
    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, r12_7);
    goto 0x4058b0;
}

void fun_405afb() {
    void*** rax1;
    int1_t less_or_equal2;
    void** rdx3;
    void*** rax4;
    void** rcx5;
    void** r8_6;
    void** rax7;
    void** rbx8;
    void*** rax9;
    void** rsi10;
    void** rdx11;
    void** rax12;
    void*** rdx13;
    void** rax14;
    void** r12_15;
    void*** tmp64_16;

    rax1 = g60f048;
    less_or_equal2 = reinterpret_cast<int64_t>(rax1) <= reinterpret_cast<int64_t>(g60f040);
    if (less_or_equal2) {
        rdx3 = reinterpret_cast<void**>(rax1 + reinterpret_cast<int64_t>(rax1) * 2);
        rax4 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) >> 63) + reinterpret_cast<unsigned char>(rdx3)) >> 1);
        g60f048 = rax4;
        rax7 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax4) * 8 + 16, rdx3, rcx5, r8_6);
        *reinterpret_cast<void***>(rax7 + 8) = reinterpret_cast<void**>(1);
        rbx8 = rax7 + 16;
        rax9 = g60f040;
        rsi10 = g60f050;
        rdx11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax9) * 8);
        fun_400a30(rbx8, rsi10, rdx11);
        rax12 = g60f050;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax12 + 0xfffffffffffffff0, rdx11);
        g60f050 = rbx8;
    }
    rdx13 = g60f040;
    rax14 = g60f050;
    *reinterpret_cast<void***>(rax14 + reinterpret_cast<int64_t>(rdx13) * 8) = r12_15;
    tmp64_16 = g60f040 + 1;
    g60f040 = tmp64_16;
    goto 0x405976;
}

void Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ(struct s42* rdi, int64_t rsi) {
    int64_t rbx3;
    uint32_t esi4;
    void** rdi5;
    void** r13_6;
    void*** rax7;
    int1_t less_or_equal8;
    void** rdx9;
    void*** rax10;
    void** rcx11;
    void** r8_12;
    void** rax13;
    void** rbx14;
    void*** rax15;
    void** rsi16;
    void** rdx17;
    void** rax18;
    void*** rdx19;
    void** rax20;
    void** r13_21;
    void** rdx22;
    void** rax23;
    void*** rdx24;
    void*** rax25;
    void** rbx26;
    void** rdx27;
    void*** rax28;
    void** rcx29;
    void** r8_30;
    void** rax31;
    void*** rax32;
    void** rsi33;
    void** rdx34;
    void** rax35;
    void*** tmp64_36;
    void*** rax37;
    void*** rdx38;
    void*** rax39;
    void** rbx40;
    void** rdx41;
    void*** rax42;
    void** rcx43;
    void** r8_44;
    void** rax45;
    void*** rax46;
    void** rsi47;
    void** rdx48;
    void** rax49;

    rbx3 = rsi;
    esi4 = *reinterpret_cast<unsigned char*>(&rsi);
    rdi5 = rdi->f8;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi5, *reinterpret_cast<signed char*>(&esi4));
    if (!rdi->f24) {
        addr_405d58_2:
        if (!rdi->f32) 
            goto addr_405d84_3;
    } else {
        r13_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f24) + 0xfffffffffffffff0);
        if (*reinterpret_cast<signed char*>(&rbx3) == 1) {
            rax7 = g60f048;
            less_or_equal8 = reinterpret_cast<int64_t>(rax7) <= reinterpret_cast<int64_t>(g60f040);
            if (less_or_equal8) {
                rdx9 = reinterpret_cast<void**>(rax7 + reinterpret_cast<int64_t>(rax7) * 2);
                rax10 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx9) >> 63) + reinterpret_cast<unsigned char>(rdx9)) >> 1);
                g60f048 = rax10;
                rax13 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax10) * 8 + 16, rdx9, rcx11, r8_12);
                *reinterpret_cast<void***>(rax13 + 8) = reinterpret_cast<void**>(1);
                rbx14 = rax13 + 16;
                rax15 = g60f040;
                rsi16 = g60f050;
                rdx17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax15) * 8);
                fun_400a30(rbx14, rsi16, rdx17);
                rax18 = g60f050;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax18 + 0xfffffffffffffff0, rdx17);
                g60f050 = rbx14;
            }
            rdx19 = g60f040;
            rax20 = g60f050;
            *reinterpret_cast<void***>(rax20 + reinterpret_cast<int64_t>(rdx19) * 8) = r13_6;
            goto addr_405c99_8;
        } else {
            if (!*reinterpret_cast<signed char*>(&rbx3)) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(0x60f000, r13_6);
                r13_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f32) + 0xfffffffffffffff0);
                if (!rdi->f32) 
                    goto addr_405d84_3; else 
                    goto addr_405e0e_11;
            }
            if (*reinterpret_cast<signed char*>(&rbx3) == 2) {
                rdx22 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi->f24) + 0xfffffffffffffff0) + 0xfffffffffffffff8;
                *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi->f24) + 0xfffffffffffffff0) = rdx22;
                if (reinterpret_cast<unsigned char>(rdx22) <= reinterpret_cast<unsigned char>(7)) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, r13_6);
                }
                r13_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f32) + 0xfffffffffffffff0);
                if (!rdi->f32) 
                    goto addr_405d84_3; else 
                    goto addr_405dcc_16;
            }
            if (*reinterpret_cast<signed char*>(&rbx3) != 3) 
                goto addr_405d58_2; else 
                goto addr_405c04_18;
        }
    }
    r13_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f32) - 16);
    if (*reinterpret_cast<signed char*>(&rbx3) == 1) 
        goto addr_405ec0_20;
    if (!*reinterpret_cast<signed char*>(&rbx3)) {
        addr_405e0e_11:
        markS_NZr5o3Ubzrci4OmK29cHBJA(0x60f000, r13_21);
        goto addr_405d84_3;
    } else {
        if (*reinterpret_cast<signed char*>(&rbx3) == 2) {
            addr_405dcc_16:
            rax23 = *reinterpret_cast<void***>(r13_21) - 8;
            *reinterpret_cast<void***>(r13_21) = rax23;
            if (reinterpret_cast<unsigned char>(rax23) <= reinterpret_cast<unsigned char>(7)) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, r13_21);
                goto addr_405d84_3;
            }
        } else {
            if (*reinterpret_cast<signed char*>(&rbx3) == 3) {
                addr_405ec0_20:
                rdx24 = g60f040;
            } else {
                addr_405d84_3:
                goto doOperation_3F8QeaTyYrJJF2gjBr6b8A;
            }
        }
    }
    addr_405cbc_25:
    rax25 = g60f048;
    rbx26 = g60f050;
    if (reinterpret_cast<int64_t>(rax25) <= reinterpret_cast<int64_t>(rdx24)) {
        rdx27 = reinterpret_cast<void**>(rax25 + reinterpret_cast<int64_t>(rax25) * 2);
        rax28 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx27) >> 63) + reinterpret_cast<unsigned char>(rdx27)) >> 1);
        g60f048 = rax28;
        rax31 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax28) * 8 + 16, rdx27, rcx29, r8_30);
        *reinterpret_cast<void***>(rax31 + 8) = reinterpret_cast<void**>(1);
        rbx26 = rax31 + 16;
        rax32 = g60f040;
        rsi33 = g60f050;
        rdx34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax32) * 8);
        fun_400a30(rbx26, rsi33, rdx34);
        rax35 = g60f050;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax35 + 0xfffffffffffffff0, rdx34);
        g60f050 = rbx26;
        rdx24 = g60f040;
    }
    *reinterpret_cast<void***>(rbx26 + reinterpret_cast<int64_t>(rdx24) * 8) = r13_21;
    tmp64_36 = g60f040 + 1;
    g60f040 = tmp64_36;
    goto addr_405d84_3;
    addr_405c99_8:
    rax37 = g60f040;
    rdx24 = rax37 + 1;
    g60f040 = rdx24;
    r13_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f32) + 0xfffffffffffffff0);
    if (!rdi->f32) 
        goto addr_405d84_3; else 
        goto addr_405cbc_25;
    addr_405c04_18:
    rdx38 = g60f048;
    rax39 = g60f040;
    rbx40 = g60f050;
    if (reinterpret_cast<int64_t>(rdx38) <= reinterpret_cast<int64_t>(rax39)) {
        rdx41 = reinterpret_cast<void**>(rdx38 + reinterpret_cast<int64_t>(rdx38) * 2);
        rax42 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx41) >> 63) + reinterpret_cast<unsigned char>(rdx41)) >> 1);
        g60f048 = rax42;
        rax45 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax42) * 8 + 16, rdx41, rcx43, r8_44);
        *reinterpret_cast<void***>(rax45 + 8) = reinterpret_cast<void**>(1);
        rbx40 = rax45 + 16;
        rax46 = g60f040;
        rsi47 = g60f050;
        rdx48 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax46) * 8);
        fun_400a30(rbx40, rsi47, rdx48);
        rax49 = g60f050;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax49 + 0xfffffffffffffff0, rdx48);
        g60f050 = rbx40;
        rax39 = g60f040;
    }
    *reinterpret_cast<void***>(rbx40 + reinterpret_cast<int64_t>(rax39) * 8) = r13_6;
    goto addr_405c99_8;
}

struct s66 {
    signed char[24] pad24;
    void** f24;
};

struct s67 {
    signed char[32] pad32;
    void** f32;
};

struct s68 {
    signed char[48] pad48;
    void* f48;
};

void fun_405f67() {
    void*** rdx1;
    void*** rax2;
    void** rbx3;
    void** rdx4;
    void*** rax5;
    void** rcx6;
    void** r8_7;
    void** rax8;
    void*** rax9;
    void** rsi10;
    void** rdx11;
    void** rax12;
    void** r13_13;
    void*** tmp64_14;
    void** rdi15;
    struct s66* rbp16;
    void** rdi17;
    struct s67* rbp18;
    void** rbp19;
    struct s68* rbp20;
    int64_t v21;
    void*** rdx22;
    void*** rax23;
    void** rbx24;
    void** rdx25;
    void*** rax26;
    void** rcx27;
    void** r8_28;
    void** rax29;
    void** rbx30;
    void*** rax31;
    void** rsi32;
    void** rdx33;
    void** rax34;
    void*** rax35;
    void*** tmp64_36;
    void*** tmp64_37;
    int64_t v38;

    rdx1 = g60f048;
    rax2 = g60f040;
    rbx3 = g60f050;
    if (reinterpret_cast<int64_t>(rdx1) <= reinterpret_cast<int64_t>(rax2)) {
        rdx4 = reinterpret_cast<void**>(rdx1 + reinterpret_cast<int64_t>(rdx1) * 2);
        rax5 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx4) >> 63) + reinterpret_cast<unsigned char>(rdx4)) >> 1);
        g60f048 = rax5;
        rax8 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax5) * 8 + 16, rdx4, rcx6, r8_7);
        *reinterpret_cast<void***>(rax8 + 8) = reinterpret_cast<void**>(1);
        rbx3 = rax8 + 16;
        rax9 = g60f040;
        rsi10 = g60f050;
        rdx11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax9) * 8);
        fun_400a30(rbx3, rsi10, rdx11);
        rax12 = g60f050;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax12 + 0xfffffffffffffff0, rdx11);
        g60f050 = rbx3;
        rax2 = g60f040;
    }
    *reinterpret_cast<void***>(rbx3 + reinterpret_cast<int64_t>(rax2) * 8) = r13_13;
    tmp64_14 = g60f040 + 1;
    g60f040 = tmp64_14;
    rdi15 = rbp16->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi15, 3, rdi15, 3);
    rdi17 = rbp18->f32;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi17, 3, rdi17, 3);
    rbp19 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp20->f48) + 0xfffffffffffffff0);
    if (!rbp20->f48) {
        goto v21;
    } else {
        rdx22 = g60f048;
        rax23 = g60f040;
        rbx24 = g60f050;
        if (reinterpret_cast<int64_t>(rdx22) <= reinterpret_cast<int64_t>(rax23)) {
            rdx25 = reinterpret_cast<void**>(rdx22 + reinterpret_cast<int64_t>(rdx22) * 2);
            rax26 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx25) >> 63) + reinterpret_cast<unsigned char>(rdx25)) >> 1);
            g60f048 = rax26;
            rax29 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax26) * 8 + 16, rdx25, rcx27, r8_28);
            rbx30 = rax29 + 16;
            *reinterpret_cast<void***>(rax29 + 8) = reinterpret_cast<void**>(1);
            rax31 = g60f040;
            rsi32 = g60f050;
            rdx33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax31) * 8);
            fun_400a30(rbx30, rsi32, rdx33);
            rax34 = g60f050;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax34 + 0xfffffffffffffff0, rdx33);
            rax35 = g60f040;
            g60f050 = rbx30;
            *reinterpret_cast<void***>(rbx30 + reinterpret_cast<int64_t>(rax35) * 8) = rbp19;
            tmp64_36 = g60f040 + 1;
            g60f040 = tmp64_36;
        } else {
            *reinterpret_cast<void***>(rbx24 + reinterpret_cast<int64_t>(rax23) * 8) = rbp19;
            tmp64_37 = g60f040 + 1;
            g60f040 = tmp64_37;
        }
        goto v38;
    }
}

struct s69 {
    signed char[24] pad24;
    void** f24;
};

struct s70 {
    signed char[32] pad32;
    void** f32;
};

struct s71 {
    signed char[48] pad48;
    int64_t f48;
};

void fun_40606f() {
    uint64_t rdx1;
    int64_t rax2;
    int64_t rax3;
    void** r13_4;
    void** rdi5;
    struct s69* rbp6;
    void** rdi7;
    struct s70* rbp8;
    uint64_t* rbp9;
    struct s71* rbp10;
    uint64_t rax11;

    rdx1 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rax2 - 16) - 8);
    *reinterpret_cast<uint64_t*>(rax3 - 16) = rdx1;
    if (rdx1 <= 7) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, r13_4);
    }
    rdi5 = rbp6->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi5, 2);
    rdi7 = rbp8->f32;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi7, 2);
    rbp9 = reinterpret_cast<uint64_t*>(rbp10->f48 - 16);
    if (!rbp10->f48) 
        goto 0x405f5c;
    rax11 = *rbp9 - 8;
    *rbp9 = rax11;
    if (rax11 > 7) 
        goto 0x405f5c;
    goto addZCT_fCDI7oO1NNVXXURtxSzsRw;
}

struct s72 {
    signed char[24] pad24;
    void** f24;
};

void fun_4061cb() {
    void*** rax1;
    int1_t less_or_equal2;
    void** rdx3;
    void*** rax4;
    void** rcx5;
    void** r8_6;
    void** rax7;
    void** rbx8;
    void*** rax9;
    void** rsi10;
    void** rdx11;
    void** rax12;
    void*** rdx13;
    void** rax14;
    void** r13_15;
    void*** tmp64_16;
    void** rdi17;
    struct s72* rbp18;

    rax1 = g60f048;
    less_or_equal2 = reinterpret_cast<int64_t>(rax1) <= reinterpret_cast<int64_t>(g60f040);
    if (less_or_equal2) {
        rdx3 = reinterpret_cast<void**>(rax1 + reinterpret_cast<int64_t>(rax1) * 2);
        rax4 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) >> 63) + reinterpret_cast<unsigned char>(rdx3)) >> 1);
        g60f048 = rax4;
        rax7 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax4) * 8 + 16, rdx3, rcx5, r8_6);
        *reinterpret_cast<void***>(rax7 + 8) = reinterpret_cast<void**>(1);
        rbx8 = rax7 + 16;
        rax9 = g60f040;
        rsi10 = g60f050;
        rdx11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax9) * 8);
        fun_400a30(rbx8, rsi10, rdx11);
        rax12 = g60f050;
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax12 + 0xfffffffffffffff0, rdx11);
        g60f050 = rbx8;
    }
    rdx13 = g60f040;
    rax14 = g60f050;
    *reinterpret_cast<void***>(rax14 + reinterpret_cast<int64_t>(rdx13) * 8) = r13_15;
    tmp64_16 = g60f040 + 1;
    g60f040 = tmp64_16;
    rdi17 = rbp18->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi17, 1);
    goto 0x406024;
}

void fun_406286(void* rdi, signed char sil) {
    void** rbx3;
    void*** rax4;
    int1_t less_or_equal5;
    void** rdx6;
    void*** rax7;
    void** rcx8;
    void** r8_9;
    void** rax10;
    void** rbp11;
    void*** rax12;
    void** rsi13;
    void** rdx14;
    void** rax15;
    void*** rdx16;
    void** rax17;
    void*** tmp64_18;
    void** rax19;
    void*** rdx20;
    void*** rax21;
    void** rbp22;
    void** rdx23;
    void*** rax24;
    void** rcx25;
    void** r8_26;
    void** rax27;
    void*** rax28;
    void** rsi29;
    void** rdx30;
    void** rax31;
    void*** tmp64_32;

    if (!rdi) {
        return;
    } else {
        rbx3 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi) + 0xfffffffffffffff0);
        if (sil == 1) {
            rax4 = g60f048;
            less_or_equal5 = reinterpret_cast<int64_t>(rax4) <= reinterpret_cast<int64_t>(g60f040);
            if (less_or_equal5) {
                rdx6 = reinterpret_cast<void**>(rax4 + reinterpret_cast<int64_t>(rax4) * 2);
                rax7 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx6) >> 63) + reinterpret_cast<unsigned char>(rdx6)) >> 1);
                g60f048 = rax7;
                rax10 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax7) * 8 + 16, rdx6, rcx8, r8_9);
                *reinterpret_cast<void***>(rax10 + 8) = reinterpret_cast<void**>(1);
                rbp11 = rax10 + 16;
                rax12 = g60f040;
                rsi13 = g60f050;
                rdx14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax12) * 8);
                fun_400a30(rbp11, rsi13, rdx14);
                rax15 = g60f050;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax15 + 0xfffffffffffffff0, rdx14);
                g60f050 = rbp11;
            }
            rdx16 = g60f040;
            rax17 = g60f050;
            *reinterpret_cast<void***>(rax17 + reinterpret_cast<int64_t>(rdx16) * 8) = rbx3;
            tmp64_18 = g60f040 + 1;
            g60f040 = tmp64_18;
            return;
        } else {
            if (!sil) {
                goto markS_NZr5o3Ubzrci4OmK29cHBJA;
            } else {
                if (sil == 2) {
                    rax19 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi) + 0xfffffffffffffff0) - 8;
                    *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi) + 0xfffffffffffffff0) = rax19;
                    if (reinterpret_cast<unsigned char>(rax19) <= reinterpret_cast<unsigned char>(7)) {
                        goto addZCT_fCDI7oO1NNVXXURtxSzsRw;
                    }
                } else {
                    if (sil == 3) {
                        rdx20 = g60f048;
                        rax21 = g60f040;
                        rbp22 = g60f050;
                        if (reinterpret_cast<int64_t>(rdx20) <= reinterpret_cast<int64_t>(rax21)) {
                            rdx23 = reinterpret_cast<void**>(rdx20 + reinterpret_cast<int64_t>(rdx20) * 2);
                            rax24 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx23) >> 63) + reinterpret_cast<unsigned char>(rdx23)) >> 1);
                            g60f048 = rax24;
                            rax27 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, reinterpret_cast<int64_t>(rax24) * 8 + 16, rdx23, rcx25, r8_26);
                            *reinterpret_cast<void***>(rax27 + 8) = reinterpret_cast<void**>(1);
                            rbp22 = rax27 + 16;
                            rax28 = g60f040;
                            rsi29 = g60f050;
                            rdx30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax28) * 8);
                            fun_400a30(rbp22, rsi29, rdx30);
                            rax31 = g60f050;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax31 + 0xfffffffffffffff0, rdx30);
                            g60f050 = rbp22;
                            rax21 = g60f040;
                        }
                        *reinterpret_cast<void***>(rbp22 + reinterpret_cast<int64_t>(rax21) * 8) = rbx3;
                        tmp64_32 = g60f040 + 1;
                        g60f040 = tmp64_32;
                    }
                }
                return;
            }
        }
    }
}

struct s73 {
    struct s73* f0;
    signed char[8] pad16;
    int64_t f16;
};

int64_t fun_4064da() {
    struct s73* rdx1;
    struct s73* rcx2;
    struct s73* rdi3;

    do {
        rdx1 = rcx2;
        rcx2 = rdx1->f0;
        rdi3 = rdx1;
    } while (rcx2 != rdx1);
    return rdi3->f16;
}

int64_t fun_4064f3() {
    return 0;
}

int64_t fun_406516() {
    return -1;
}

struct s74 {
    struct s74* f0;
    signed char[8] pad16;
    uint64_t f16;
    uint64_t f24;
};

struct s74* fun_40655a() {
    int64_t rdx1;
    uint64_t rdx2;
    uint64_t rsi3;
    struct s74* rax4;
    uint64_t rsi5;
    uint64_t rsi6;

    do {
        *reinterpret_cast<uint32_t*>(&rdx1) = reinterpret_cast<uint1_t>(rdx2 < rsi3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = 0;
        rax4 = *reinterpret_cast<struct s74**>(reinterpret_cast<int64_t>(rax4) + rdx1 * 8);
        if (rax4->f0 == rax4) 
            break;
        rdx2 = rax4->f16;
    } while (rdx2 > rsi5 || rax4->f24 <= rsi6);
    goto addr_406581_4;
    return 0;
    addr_406581_4:
    return rax4;
}

struct s76 {
    signed char[32] pad32;
    int64_t f32;
};

struct s75 {
    signed char[8] pad8;
    struct s76* f8;
};

void prepareDealloc_0Ao1u9cpV0dTuUB5G9cEQ8eQ(struct s75* rdi) {
    struct s76* rax2;
    int64_t tmp64_3;

    rax2 = rdi->f8;
    if (!rax2->f32) {
        return;
    } else {
        tmp64_3 = g60f058 + 1;
        g60f058 = tmp64_3;
        rax2->f32();
        --g60f058;
        return;
    }
}

struct s77 {
    int64_t f0;
    signed char[8] pad16;
    void** f16;
    void* f24;
};

void deinit_WHgd5C59bkXWDz3vnAxfzXQ_3(struct s77* rdi) {
    struct s77* rbp2;
    void** rsi3;
    void** rbx4;
    void** rdx5;
    void* rax6;
    void** rdx7;

    rbp2 = rdi;
    rsi3 = rdi->f16;
    if (rsi3) {
        do {
            rbx4 = *reinterpret_cast<void***>(rsi3);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi3 - 2, rdx5);
            rsi3 = rbx4;
        } while (rbx4);
    }
    rax6 = rbp2->f24;
    rbp2->f16 = reinterpret_cast<void**>(0);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, reinterpret_cast<int64_t>(rax6) + 0xfffffffffffffff0, rdx7);
    rbp2->f24 = reinterpret_cast<void*>(0);
    rbp2->f0 = 0;
    return;
}

struct s78 {
    int64_t f0;
    signed char[8] pad16;
    void** f16;
    void** f24;
};

void cellsetReset_WHgd5C59bkXWDz3vnAxfzXQ_2(struct s78* rdi) {
    struct s78* rbp2;
    void** rsi3;
    void** rbx4;
    void** rdx5;
    void** rax6;
    void** rdx7;
    void** rax8;
    int1_t zf9;
    void** rbx10;
    int1_t zf11;
    void** r8_12;
    void** rdx13;
    int64_t* rdi14;
    void* tmp64_15;
    void* rcx16;
    int64_t rcx17;

    rbp2 = rdi;
    rsi3 = rdi->f16;
    if (rsi3) {
        do {
            rbx4 = *reinterpret_cast<void***>(rsi3);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rsi3 - 2, rdx5);
            rsi3 = rbx4;
        } while (rbx4);
    }
    rax6 = rbp2->f24;
    rbp2->f16 = reinterpret_cast<void**>(0);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060, rax6 + 0xfffffffffffffff0, rdx7);
    rbp2->f24 = reinterpret_cast<void**>(0);
    rbp2->f0 = 0;
    rax8 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, 0x2030);
    zf9 = g612108 == 0;
    rbx10 = rax8 + 32;
    if (zf9) {
        zf11 = g612138 == 0;
        if (zf11) {
            __asm__("movq xmm0, [rsp+0x8]");
            g612108 = 0x612138;
            __asm__("punpcklqdq xmm0, xmm0");
            __asm__("movups [rip+0x20ad2b], xmm0");
        } else {
            g612108 = 0x612138;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060, 0x612108, rbx10, rbx10 + 0x2030, r8_12);
    rdx13 = rbx10 + 16;
    rdi14 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx10 + 24) & 0xfffffffffffffff8);
    tmp64_15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(g6118f8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax8 + 8)));
    g6118f8 = tmp64_15;
    __asm__("movdqa xmm0, [rip+0x37e5]");
    *reinterpret_cast<void***>(rax8 + 40) = reinterpret_cast<void**>(1);
    rcx16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx13) - reinterpret_cast<uint64_t>(rdi14));
    *reinterpret_cast<void***>(rbx10 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int64_t*>(rbx10 + 0x2008) = 0;
    *reinterpret_cast<uint32_t*>(&rcx17) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx16) + 0x2000) >> 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = 0;
    while (rcx17) {
        --rcx17;
        *rdi14 = 0;
        ++rdi14;
    }
    rbp2->f24 = rdx13;
    __asm__("movups [rbp+0x0], xmm0");
    rbp2->f16 = reinterpret_cast<void**>(0);
    return;
}

struct s80 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s79 {
    signed char[8] pad8;
    uint64_t f8;
    signed char[8] pad24;
    struct s80** f24;
};

uint64_t contains_9c4TZ2Zl3sU4TUeK9bR8E9ciw(struct s79* rdi, uint64_t rsi) {
    uint64_t r9_3;
    struct s80** rdi4;
    uint64_t r8_5;
    uint64_t rax6;
    struct s80* rdx7;
    uint64_t rcx8;
    uint64_t rcx9;
    uint64_t rax10;

    r9_3 = rdi->f8;
    rdi4 = rdi->f24;
    r8_5 = rsi >> 12;
    rax6 = r8_5 & r9_3;
    rdx7 = rdi4[rax6];
    if (rdx7) {
        do {
            if (r8_5 == rdx7->f8) 
                break;
            rax6 = rax6 + rax6 * 4 + 1 & r9_3;
            rdx7 = rdi4[rax6];
        } while (rdx7);
        goto addr_407510_4;
    } else {
        goto addr_407510_4;
    }
    rcx8 = rsi >> 3;
    *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<uint32_t*>(&rcx8) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    rax10 = 1 << *reinterpret_cast<unsigned char*>(&rcx9);
    *reinterpret_cast<unsigned char*>(&rax10) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rdx7) + (rcx9 >> 6) * 8 + 16) & rax10));
    return rax10;
    addr_407510_4:
    return 0;
}

struct s81 {
    signed char[88] pad88;
    int64_t f88;
};

void fun_407c1a() {
    struct s81* rcx1;
    int64_t v2;

    if (rcx1->f88) {
        goto v2;
    } else {
        goto collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2;
    }
}

void newObjNoInit() {
    goto rawNewObj_BpNS5yt3b9cMOponsUKh8aw;
}

struct s82 {
    signed char[1] pad1;
    void** f1;
    signed char[15] pad17;
    void** f17;
};

void** toNimStr(void** rdi, struct s82* rsi) {
    struct s82* rbp3;
    void** rcx4;
    void** r8_5;
    void** rax6;

    *reinterpret_cast<int32_t*>(&rbp3) = 7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = 0;
    if (reinterpret_cast<int64_t>(rsi) >= 7) {
        rbp3 = rsi;
    }
    rax6 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, &rbp3->f17, 0x60f000, rcx4, r8_5);
    __asm__("movq xmm0, [rsp+0x8]");
    __asm__("movhps xmm0, [rsp+0x8]");
    __asm__("movups [rax], xmm0");
    fun_400a30(rax6 + 16, rdi, &rsi->f1);
    return rax6;
}

void** cstrToNimstr(void** rdi) {
    void** r12_2;
    void** rax3;
    void** rsi4;
    void** rcx5;
    void** r8_6;
    void** rax7;

    *reinterpret_cast<int32_t*>(&r12_2) = 0;
    *reinterpret_cast<int32_t*>(&r12_2 + 4) = 0;
    if (rdi) {
        rax3 = fun_400990(rdi);
        *reinterpret_cast<int32_t*>(&rsi4) = 24;
        *reinterpret_cast<int32_t*>(&rsi4 + 4) = 0;
        if (reinterpret_cast<unsigned char>(rax3) > reinterpret_cast<unsigned char>(6)) {
            rsi4 = rax3 + 17;
        }
        rax7 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, rsi4, 0x60f000, rcx5, r8_6);
        __asm__("movq xmm0, [rsp+0x8]");
        r12_2 = rax7;
        __asm__("movhps xmm0, [rsp]");
        __asm__("movups [rax], xmm0");
        fun_400a30(rax7 + 16, rdi, rax3 + 1);
    }
    return r12_2;
}

struct s83 {
    signed char[16] pad16;
    void** f16;
};

void fun_407fe1() {
    int1_t zf1;
    struct s83* rbx2;
    void** rdx3;
    void** rcx4;
    void** r8_5;
    void** rax6;
    void** rbp7;
    int64_t v8;

    zf1 = g60f058 == 0;
    if (zf1) {
        collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(0x60f000);
    }
    rax6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, &rbx2->f16, rdx3, rcx4, r8_5);
    *reinterpret_cast<void***>(rax6 + 8) = rbp7;
    *reinterpret_cast<void***>(rax6) = reinterpret_cast<void**>(8);
    fun_4009c0(rax6 + 16);
    goto v8;
}

void fun_4087e2() {
    int64_t v1;

    goto v1;
}

struct s84 {
    signed char[17] pad17;
    void** f17;
};

void** mnewString(struct s84* rdi) {
    struct s84* rbp2;
    void** rcx3;
    void** r8_4;
    void** rax5;
    void** rax6;

    *reinterpret_cast<int32_t*>(&rbp2) = 7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp2) + 4) = 0;
    if (reinterpret_cast<int64_t>(rdi) >= 7) {
        rbp2 = rdi;
    }
    rax5 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, &rbp2->f17, 0x60f000, rcx3, r8_4);
    rax6 = fun_4009c0(rax5);
    __asm__("movq xmm0, [rsp+0x8]");
    __asm__("movhps xmm0, [rsp+0x8]");
    __asm__("movups [rax], xmm0");
    return rax6;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x60ce00 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t fun_400b11() {
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

/* completed.7260 */
signed char completed_7260 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = completed_7260 == 0;
    if (!zf1) 
        goto 0x400b80;
    rax2 = deregister_tm_clones();
    completed_7260 = 1;
    return rax2;
}

void frame_dummy() {
    goto 0x400b20;
}

void TM_2lQWYPc4hWuvSK7bVeWxSA_4();

void** stdin = reinterpret_cast<void**>(0);

void NimMainInner(void*** rdi) {
    void** rdi2;
    void** rax3;
    void** rax4;
    void** rdx5;

    nimRegisterGlobalMarker(TM_2lQWYPc4hWuvSK7bVeWxSA_4);
    echoBinSafe(0x40a0d8, 1);
    rdi2 = stdin;
    rax3 = readLine_fPRnXwDTqtynUYGl4OixAg(rdi2, 1);
    if (rax3) {
        *reinterpret_cast<void***>(rax3 + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rax3 + 0xfffffffffffffff0) + 8;
    }
    rax4 = name_6AZmjR50AehluhCwumgXmw;
    if (!rax4) 
        goto 0x400c89;
    rdx5 = *reinterpret_cast<void***>(rax4 + 0xfffffffffffffff0) + 0xfffffffffffffff8;
    *reinterpret_cast<void***>(rax4 + 0xfffffffffffffff0) = rdx5;
    if (reinterpret_cast<unsigned char>(rdx5) <= reinterpret_cast<unsigned char>(7)) 
        goto 0x400ce8; else 
        goto "???";
}

int64_t g60d010 = 0;

void fun_400a86() {
    goto g60d010;
}

void fun_400a46() {
    goto 0x400960;
}

void fun_400976() {
    goto 0x400960;
}

void fun_400a76() {
    goto 0x400960;
}

void fun_4009c6() {
    goto 0x400960;
}

int64_t contains_tGsWrN4DY41H9btt3FhjrNA(int64_t* rdi, uint64_t rsi) {
    uint64_t rdx3;
    int64_t rax4;

    rdx3 = rsi >> 9;
    *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(&rdx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (rdi[rax4]) 
        goto 0x401290;
    return 0;
}

void fun_4009a6() {
    goto 0x400960;
}

void incl_Iz1GYiOVKwItgr5CdCm0dQ() {
    uint64_t rbp1;
    uint64_t rdx2;
    int64_t rax3;
    int64_t* rsi4;

    rbp1 = rdx2 >> 9;
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(&rbp1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (rsi4[rax3]) 
        goto 0x401610;
    goto 0x401640;
}

struct s85 {
    signed char[4112] pad4112;
    uint32_t f4112;
};

struct s86 {
    signed char[8] pad8;
    uint64_t f8;
    struct s86* f16;
    struct s86* f24;
};

struct s87 {
    signed char[4216] pad4216;
    struct s86* f4216;
};

void addChunkToMatrix_v9bekLOkesgfrZC4aumfLXw(struct s85* rdi, struct s86* rsi) {
    uint64_t rax3;
    int64_t rcx4;
    int64_t rdx5;
    int64_t rcx6;
    int64_t rdx7;
    int32_t ecx8;
    int64_t r8_9;
    uint64_t rcx10;
    struct s87* r9_11;
    struct s86* rax12;
    uint32_t ecx13;
    int64_t rsi14;
    uint32_t ecx15;
    int64_t rax16;

    rax3 = rsi->f8;
    *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rax3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3) <= 0xffff) {
        *reinterpret_cast<int32_t*>(&rdx5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0xff) {
            *reinterpret_cast<int32_t*>(&rdx5) = 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rax3) >> 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0xffffff) {
            *reinterpret_cast<int32_t*>(&rdx5) = 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rax3) >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rcx4) = *reinterpret_cast<uint32_t*>(&rcx4) >> 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx5) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        }
    }
    rcx6 = *reinterpret_cast<signed char*>(rcx4 + 0x40a9e0);
    rsi->f24 = reinterpret_cast<struct s86*>(0);
    rdx7 = rdx5 + rcx6;
    ecx8 = static_cast<int32_t>(rdx7 - 5);
    r8_9 = rdx7 - 6;
    rcx10 = (rax3 >> *reinterpret_cast<signed char*>(&ecx8)) - 32;
    r9_11 = reinterpret_cast<struct s87*>(reinterpret_cast<int64_t>(rdi) + ((r8_9 << 5) + rcx10) * 8);
    rax12 = r9_11->f4216;
    rsi->f16 = rax12;
    if (rax12) {
        rax12->f24 = rsi;
    }
    r9_11->f4216 = rsi;
    ecx13 = *reinterpret_cast<uint32_t*>(&rcx10) & 31;
    rsi14 = 1 << *reinterpret_cast<unsigned char*>(&ecx13);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rdx7 * 4 + 0xffc) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rdx7 * 4 + 0xffc) | *reinterpret_cast<uint32_t*>(&rsi14);
    ecx15 = *reinterpret_cast<uint32_t*>(&r8_9) & 31;
    rax16 = 1 << *reinterpret_cast<unsigned char*>(&ecx15);
    rdi->f4112 = rdi->f4112 | *reinterpret_cast<uint32_t*>(&rax16);
    return;
}

void getSmallChunk_h6cvXbfQjxIdThM5GthosA() {
    goto getBigChunk_z9bCNjXTYllZ3pI24nEsw2g;
}

void allocAvlNode_neSuioWH6NDTp8E9cNgBmjg(void** rdi, int64_t rsi, void** rdx) {
    void** rax4;

    rax4 = *reinterpret_cast<void***>(rdi + 0x30c0);
    if (!rax4) {
        rax4 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(rdi, 40, rdx);
    } else {
        *reinterpret_cast<void***>(rdi + 0x30c0) = *reinterpret_cast<void***>(rax4);
    }
    __asm__("movq xmm0, [rsp+0x8]");
    __asm__("movhps xmm0, [rsp]");
    __asm__("movups [rax+0x10], xmm0");
    __asm__("movq xmm0, [rsp]");
    __asm__("punpcklqdq xmm0, xmm0");
    if (!*reinterpret_cast<void***>(rdi + 0x30d8)) {
        __asm__("movups [rbx+0x30d8], xmm0");
    }
    __asm__("movups [rax], xmm0");
    *reinterpret_cast<void***>(rax4 + 32) = reinterpret_cast<void**>(1);
    return;
}

void fun_400a56() {
    goto 0x400960;
}

void dealloc_jqYVOi4APb9cRx3G9a57AkRw() {
    goto rawDealloc_DA62HrGC5sdfCED505KyyQ;
}

struct s88 {
    signed char[8] pad8;
    int64_t f8;
    int64_t* f16;
};

int64_t getDiscriminant_MBlSP9aCmxWSBuDOxawp8Sg(int64_t rdi, struct s88* rsi) {
    int64_t rax3;

    if (*rsi->f16 == 2) {
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint16_t*>(rdi + rsi->f8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        return rax3;
    } else {
        if (*rsi->f16 == 4) {
            return static_cast<int64_t>(*reinterpret_cast<int32_t*>(rdi + rsi->f8));
        } else {
            if (*rsi->f16 == 1) 
                goto 0x404200;
            return 0;
        }
    }
}

struct s89 {
    signed char[8] pad8;
    int64_t f8;
    signed char[16] pad32;
    uint64_t f32;
    int64_t* f40;
};

void fun_40428a(int64_t rdi, struct s89* rsi) {
    uint64_t rdx3;

    rdx3 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rdi + rsi->f8)));
    if (rsi->f32 <= rdx3) 
        goto 0x404268;
    if (!rsi->f40[rdx3]) 
        goto 0x404268;
    return;
}

void fun_40426d(int64_t rdi, int64_t rsi) {
    goto 0x40424b;
}

struct s90 {
    signed char[16] pad16;
    void** f16;
};

void** alloc0_1iQ1Xo9cXsxq509b5gmDHLoQ_2(void** rdi, struct s90* rsi, void** rdx, void** rcx, void** r8) {
    void** rax6;
    void** rax7;

    rax6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(rdi, &rsi->f16, rdx, rcx, r8);
    *reinterpret_cast<void***>(rax6 + 8) = reinterpret_cast<void**>(1);
    rax7 = fun_4009c0(rax6 + 16);
    return rax7;
}

struct s91 {
    void** f0;
    signed char[15] pad16;
    uint64_t f16;
};

int64_t containsOrIncl_CbGEjIBKJIi7knlaDzUluA(struct s27* rdi, void** rsi) {
    uint64_t r9_3;
    void** r10_4;
    void** r8_5;
    uint64_t rax6;
    void** rdx7;
    uint64_t rcx8;
    uint64_t rcx9;
    struct s91* rdi10;
    uint64_t rdx11;

    r9_3 = rdi->f8;
    r10_4 = rdi->f24;
    r8_5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) >> 12);
    rax6 = reinterpret_cast<unsigned char>(r8_5) & r9_3;
    rdx7 = *reinterpret_cast<void***>(r10_4 + rax6 * 8);
    if (rdx7) {
        do {
            if (r8_5 == *reinterpret_cast<void***>(rdx7 + 8)) 
                break;
            rax6 = rax6 + rax6 * 4 + 1 & r9_3;
            rdx7 = *reinterpret_cast<void***>(r10_4 + rax6 * 8);
        } while (rdx7);
        goto addr_4051f8_4;
    } else {
        goto addr_4051f8_4;
    }
    rcx8 = reinterpret_cast<unsigned char>(rsi) >> 3;
    *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<uint32_t*>(&rcx8) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    rdi10 = reinterpret_cast<struct s91*>(rdx7 + (rcx9 >> 6) * 8);
    rdx11 = 1 << *reinterpret_cast<unsigned char*>(&rcx9);
    if (rdi10->f16 & rdx11) 
        goto 0x4051f0;
    rdi10->f16 = rdx11 | rdi10->f16;
    return 0;
    addr_4051f8_4:
    incl_m4q9b16kJJcoKe9c4ERtlpCg(rdi, rsi);
    return 0;
}

void fun_400a36() {
    goto 0x400960;
}

void TM_Q5wkpxktOdTGvlSRo9bzt9aw_17() {
    void** rsi1;

    rsi1 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
    if (!rsi1) 
        goto 0x405820;
    goto markS_NZr5o3Ubzrci4OmK29cHBJA;
}

void Marker_tyRef_LEclZrWX2FQAodlapxGITw(struct s43* rdi, int64_t rsi) {
    int64_t rbx3;
    void** rdi4;
    uint32_t esi5;
    void** r12_6;
    void** rsi7;
    void** rdi8;

    rbx3 = rsi;
    if (!rdi->f8) {
        addr_405874_2:
        rdi4 = rdi->f24;
        esi5 = *reinterpret_cast<unsigned char*>(&rsi);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi4, *reinterpret_cast<signed char*>(&esi5));
        if (!rdi->f32) 
            goto 0x4058b0;
    } else {
        if (*reinterpret_cast<unsigned char*>(&rsi) == 1) 
            goto 0x405b00;
        if (!*reinterpret_cast<unsigned char*>(&rsi)) 
            goto addr_405ac0_5; else 
            goto addr_405864_6;
    }
    r12_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f32) - 16);
    if (*reinterpret_cast<signed char*>(&rbx3) == 1) 
        goto 0x40598c;
    if (*reinterpret_cast<signed char*>(&rbx3)) {
        if (*reinterpret_cast<signed char*>(&rbx3) == 2) 
            goto 0x4059fe;
        if (*reinterpret_cast<signed char*>(&rbx3) == 3) 
            goto 0x40598c; else 
            goto "???";
    }
    addr_405ae9_11:
    markS_NZr5o3Ubzrci4OmK29cHBJA(0x60f000, r12_6);
    goto 0x4058b0;
    addr_405ac0_5:
    rsi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f8) + 0xfffffffffffffff0);
    markS_NZr5o3Ubzrci4OmK29cHBJA(0x60f000, rsi7);
    rdi8 = rdi->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi8, 0);
    r12_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f32) + 0xfffffffffffffff0);
    if (!rdi->f32) 
        goto 0x4058b0; else 
        goto addr_405ae9_11;
    addr_405864_6:
    if (*reinterpret_cast<unsigned char*>(&rsi) == 2) 
        goto 0x4059c0;
    if (*reinterpret_cast<unsigned char*>(&rsi) == 3) 
        goto 0x4058d0; else 
        goto addr_405874_2;
}

void Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw(struct s41* rdi, int64_t rsi) {
    uint32_t r12d3;
    int64_t rbx4;
    void** rdi5;
    uint32_t esi6;
    void** rdi7;
    uint32_t esi8;
    void** rsi9;
    void** rdi10;
    void** rdi11;

    r12d3 = *reinterpret_cast<unsigned char*>(&rsi);
    rbx4 = rsi;
    if (!rdi->f8) {
        addr_405f14_2:
        rdi5 = rdi->f24;
        esi6 = r12d3;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi5, *reinterpret_cast<signed char*>(&esi6));
        rdi7 = rdi->f32;
        esi8 = r12d3;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi7, *reinterpret_cast<signed char*>(&esi8));
        if (!rdi->f48) 
            goto 0x405f5c;
    } else {
        if (*reinterpret_cast<unsigned char*>(&rsi) == 1) 
            goto 0x4061d0;
        if (!*reinterpret_cast<unsigned char*>(&rsi)) 
            goto addr_406180_5; else 
            goto addr_405f04_6;
    }
    if (*reinterpret_cast<signed char*>(&rbx4) == 1) 
        goto 0x40603a;
    if (*reinterpret_cast<signed char*>(&rbx4)) {
        if (*reinterpret_cast<signed char*>(&rbx4) == 2) 
            goto 0x4060bc;
        if (*reinterpret_cast<signed char*>(&rbx4) == 3) 
            goto 0x40603a; else 
            goto "???";
    }
    addr_4061b4_11:
    goto markS_NZr5o3Ubzrci4OmK29cHBJA;
    addr_406180_5:
    rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi->f8) + 0xfffffffffffffff0);
    markS_NZr5o3Ubzrci4OmK29cHBJA(0x60f000, rsi9);
    rdi10 = rdi->f24;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi10, 0);
    rdi11 = rdi->f32;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(rdi11, 0);
    if (!rdi->f48) 
        goto 0x405f5c; else 
        goto addr_4061b4_11;
    addr_405f04_6:
    if (*reinterpret_cast<unsigned char*>(&rsi) == 2) 
        goto 0x406070;
    if (*reinterpret_cast<unsigned char*>(&rsi) == 3) 
        goto 0x405f70; else 
        goto addr_405f14_2;
}

void nimRegisterThreadLocalMarker(int64_t rdi) {
    int64_t rax2;

    rax2 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    if (rax2 > 0xdab) {
        nimRegisterThreadLocalMarker_part_14();
    } else {
        *reinterpret_cast<int64_t*>(rax2 * 8 + 0x612840) = rdi;
        threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = rax2 + 1;
        return;
    }
}

struct s92 {
    struct s92* f0;
    struct s92* f8;
    signed char[8] pad24;
    int64_t f24;
};

int64_t highGauge_3mwQtFaBTgevFrybZdgUNw_2(struct s92* rdi) {
    if (rdi == rdi->f0) 
        goto 0x406520;
    do {
        rdi = rdi->f8;
    } while (rdi->f0 != rdi);
    return rdi->f24;
}

void setPosition_kuKlONPws1O0vpPB9adzcQw() {
    return;
}

struct s94 {
    signed char[32] pad32;
    int64_t f32;
};

struct s93 {
    signed char[8] pad8;
    struct s94* f8;
};

void freeCyclicCell_NZr5o3Ubzrci4OmK29cHBJA_2(int64_t rdi, struct s93* rsi) {
    struct s94* rax3;
    int64_t tmp64_4;

    rax3 = rsi->f8;
    if (rax3->f32) {
        tmp64_4 = g60f058 + 1;
        g60f058 = tmp64_4;
        rax3->f32(rsi + 1);
        --g60f058;
    }
    goto rawDealloc_DA62HrGC5sdfCED505KyyQ;
}

struct s95 {
    signed char[8] pad8;
    int64_t f8;
    int64_t f16;
    signed char[10464] pad10488;
    int64_t f10488;
};

void collectCT_zoTIuavlrCHyw3B8MBaLJA(struct s95* rdi) {
    uint64_t rax2;
    int64_t rdx3;

    rax2 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    rdx3 = reinterpret_cast<int64_t>(rax2) >> 7;
    if (reinterpret_cast<int64_t>(rax2) <= reinterpret_cast<int64_t>(0xf9ff)) {
        rdx3 = 0x1f4;
    }
    if (rdi->f16 >= rdx3) 
        goto 0x407c20;
    if (rdi->f8 <= rdi->f10488) 
        goto 0x407c20; else 
        goto "???";
}

void rawNewStringNoInit(void** rdi) {
    void** rbx2;
    void** rcx3;
    void** r8_4;
    void** rax5;

    *reinterpret_cast<int32_t*>(&rbx2) = 7;
    *reinterpret_cast<int32_t*>(&rbx2 + 4) = 0;
    if (reinterpret_cast<signed char>(rdi) >= reinterpret_cast<signed char>(7)) {
        rbx2 = rdi;
    }
    rax5 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(0x6126a0, rbx2 + 17, 0x60f000, rcx3, r8_4);
    *reinterpret_cast<void***>(rax5 + 8) = rbx2;
    *reinterpret_cast<void***>(rax5) = reinterpret_cast<void**>(0);
    return;
}

void fun_400996() {
    goto 0x400960;
}

void lowGauge_3mwQtFaBTgevFrybZdgUNw(void** rdi) {
    if (rdi != *reinterpret_cast<void***>(rdi)) 
        goto 0x4064e3;
    goto 0x4064f8;
}

void** g40a910 = reinterpret_cast<void**>(85);

void checkErr_BWnr8V7RERYno9bIdPmw8Hw(void** rdi, void** rsi, void** rdx) {
    int32_t eax4;
    int32_t eax5;
    void** rbx6;
    int32_t eax7;
    int1_t zf8;
    int64_t rax9;
    signed char al10;
    int64_t rax11;
    signed char al12;
    int64_t rbx13;

    eax4 = fun_400980(rdi, rsi, rdx);
    if (eax4) {
        fun_400a20(rdi, rsi, rdx);
        raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(0x40a900, rsi, rdx);
        fun_4009b0(rsi, 0x40a900);
        eax5 = fun_400980(0x40a900, 0x40a900, rdx);
        if (eax5) {
            fun_400a20(0x40a900, 0x40a900, rdx);
            raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(0x40a900, 0x40a900, rdx);
            rbx6 = stderr;
            fun_4009b0(0x40a900, rbx6);
            eax7 = fun_400980(rbx6, rbx6, rdx);
            if (eax7) {
                fun_400a20(rbx6, rbx6, rdx);
                raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(0x40a900, rbx6, rdx);
                zf8 = g40a910 == 0;
                if (zf8) {
                    g40a910 = rbx6;
                }
                rax9 = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
                if (rax9) {
                    al10 = reinterpret_cast<signed char>(rax9(0x40a900));
                    if (!al10) 
                        goto 0x4087e8;
                }
                rax11 = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA;
                if (rax11) {
                    al12 = reinterpret_cast<signed char>(rax11(0x40a900));
                    if (!al12) 
                        goto 0x4087e8;
                }
                goto 0x408200;
            } else {
                goto rdi;
            }
        } else {
            goto rbx13;
        }
    } else {
        return;
    }
}

void signalHandler(int32_t edi) {
    void** rdi2;

    *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>("SIGINT: Interrupted by Ctrl-C.\n");
    *reinterpret_cast<int32_t*>(&rdi2 + 4) = 0;
    if (edi == 2) {
        while (1) {
            addr_408828_2:
            showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(rdi2);
            fun_400a70(1);
            addr_408837_3:
            *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>("SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n");
            *reinterpret_cast<int32_t*>(&rdi2 + 4) = 0;
        }
    } else {
        if (edi == 11) 
            goto addr_408837_3;
        if (edi != 6) 
            goto addr_40880a_6;
    }
    *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>("SIGABRT: Abnormal termination.\n");
    *reinterpret_cast<int32_t*>(&rdi2 + 4) = 0;
    goto addr_408828_2;
    addr_40880a_6:
    if (edi == 8) {
        *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>("SIGFPE: Arithmetic error.\n");
        *reinterpret_cast<int32_t*>(&rdi2 + 4) = 0;
        goto addr_408828_2;
    } else {
        if (edi == 4) {
            *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>("SIGILL: Illegal operation.\n");
            *reinterpret_cast<int32_t*>(&rdi2 + 4) = 0;
            goto addr_408828_2;
        } else {
            *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>("unknown signal\n");
            *reinterpret_cast<int32_t*>(&rdi2 + 4) = 0;
            if (edi == 13) {
                rdi2 = reinterpret_cast<void**>("SIGPIPE: Pipe closed.\n");
            }
            goto addr_408828_2;
        }
    }
}

void registerSignalHandler_njssp69aa7hvxte9bJ8uuDcg_2() {
    fun_400a10(2, signalHandler);
    fun_400a10(11, signalHandler);
    fun_400a10(6, signalHandler);
    fun_400a10(8, signalHandler);
    fun_400a10(4, signalHandler);
    fun_400a10(11, signalHandler);
    goto fun_400a10;
}

void fun_400986() {
    goto 0x400960;
}

void fun_400a26() {
    goto 0x400960;
}

void fun_400a16() {
    goto 0x400960;
}

signed char nimvm_IAxmsqnME4Jmed24hOgrFQ = 0;

int16_t g6126a8 = 0;

int64_t strDesc_D0UzA4zsDu5tgpJQ9a9clXPg = 0;

void PreMainInner(void*** rdi) {
    int64_t rax2;
    void** rdx3;

    rax2 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    if (rax2 > 0xdab) {
        nimRegisterThreadLocalMarker_part_14();
    } else {
        *reinterpret_cast<int64_t*>(rax2 * 8 + 0x612840) = reinterpret_cast<int64_t>(TM_Q5wkpxktOdTGvlSRo9bzt9aw_17);
        threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = rax2 + 1;
        nimvm_IAxmsqnME4Jmed24hOgrFQ = 0;
        genericReset(0x6126a0, 0x60ee80, rdx3);
        g6126a8 = 0x21c;
        strDesc_D0UzA4zsDu5tgpJQ9a9clXPg = 8;
        nimGC_setStackBottom(reinterpret_cast<int64_t>(__zero_stack_offset()) - 24 - 8 + 8 + 8, 0x60ee80);
        initGC_njssp69aa7hvxte9bJ8uuDcg(reinterpret_cast<int64_t>(__zero_stack_offset()) - 24 - 8 + 8 + 8, 0x60ee80);
        fun_400a10(2, signalHandler);
        fun_400a10(11, signalHandler);
        fun_400a10(6, signalHandler);
        fun_400a10(8, signalHandler);
        fun_400a10(4, signalHandler);
        fun_400a10(11, signalHandler);
        fun_400a10(13, signalHandler);
        return;
    }
}

void sourceDatInit000() {
    return;
}

void fun_4009d6() {
    goto 0x400960;
}

int64_t cmdLine = 0;

int32_t cmdCount = 0;

int64_t gEnv = 0;

int32_t nim_program_result = 0;

int64_t main(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t rax4;

    cmdLine = rsi;
    cmdCount = edi;
    gEnv = rdx;
    NimMain();
    *reinterpret_cast<int32_t*>(&rax4) = nim_program_result;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

struct s96 {
    signed char[8] pad8;
    int64_t f8;
};

void intSetGet_FhOZKj4Gih3qQ5OimZYOrg(struct s96** rdi, int64_t rsi) {
    int64_t rax3;

    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(&rsi);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (!rdi[rax3]) 
        goto 0x401266;
    if (rsi != (rdi[rax3])->f8) 
        goto 0x40125e;
    return;
}

struct s98 {
    signed char[24] pad24;
    int64_t f24;
};

struct s97 {
    signed char[16] pad16;
    struct s98* f16;
};

void removeChunkFromMatrix2_NyesLqu7hqkgfLqcLrQpjw(void* rdi, struct s97* rsi, int64_t rdx, int64_t rcx) {
    struct s98* rax5;

    rax5 = rsi->f16;
    *reinterpret_cast<struct s98**>(reinterpret_cast<int64_t>(rdi) + (rcx + (rdx << 5) + 0x20e) * 8 + 8) = rax5;
    if (!rax5) 
        goto 0x401a50;
    rax5->f24 = 0;
}

int64_t g30d8;

void getHugeChunk_z9bCNjXTYllZ3pI24nEsw2g_3(int64_t rdi, void** rsi) {
    void** rax3;
    int1_t zf4;
    int64_t rbx5;
    uint64_t r13_6;
    int64_t rax7;

    rax3 = fun_4009a0();
    if (reinterpret_cast<unsigned char>(rax3 - 1) > reinterpret_cast<unsigned char>(0xfffffffffffffffd)) {
        raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
        zf4 = g30d8 == 0;
        if (zf4) 
            goto 0x402098;
        goto rbx5;
    } else {
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<uint64_t*>(rdi + 0x2880) = *reinterpret_cast<uint64_t*>(rdi + 0x2880) + reinterpret_cast<unsigned char>(rsi);
        r13_6 = reinterpret_cast<unsigned char>(rax3) >> 21;
        *reinterpret_cast<void***>(rax3 + 8) = rsi;
        *reinterpret_cast<uint32_t*>(&rax7) = *reinterpret_cast<unsigned char*>(&r13_6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        __asm__("movups [rbx+0x10], xmm0");
        *reinterpret_cast<void***>(rax3) = reinterpret_cast<void**>(1);
        if (*reinterpret_cast<int64_t*>(rdi + rax7 * 8 + 0x28a8)) 
            goto 0x402018;
        goto 0x402050;
    }
}

struct s99 {
    signed char[16] pad16;
    void** f16;
};

void** alloc_sVm4rDImKK2ZDdylByayiA(struct s99* rdi) {
    void** rdx2;
    void** rcx3;
    void** r8_4;
    void** rax5;

    rax5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, &rdi->f16, rdx2, rcx3, r8_4);
    *reinterpret_cast<void***>(rax5 + 8) = reinterpret_cast<void**>(1);
    return rax5 + 16;
}

void freeHugeChunk_jnrbguyViYONI3PJ1RZJjQ(int64_t rdi, uint64_t rsi) {
    uint64_t r8_3;
    int64_t rax4;

    r8_3 = rsi >> 21;
    *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(&r8_3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int64_t*>(rdi + rax4 * 8 + 0x28a8)) 
        goto 0x402ce8;
    goto 0x402d0c;
}

void dealloc_RCjNtRnHdRYntrcE7YtwWw(int64_t rdi) {
    goto rawDealloc_DA62HrGC5sdfCED505KyyQ;
}

void unsureAsgnRef(void*** rdi, void** rsi, void** rdx) {
    unsigned char al4;
    void** rdx5;

    al4 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(rdi, rsi, rdx);
    if (!al4) {
        if (rsi) {
            *reinterpret_cast<void***>(rsi + 0xfffffffffffffff0) = *reinterpret_cast<void***>(rsi + 0xfffffffffffffff0) + 8;
        }
        if (reinterpret_cast<unsigned char>(*rdi) > reinterpret_cast<unsigned char>(0xfff)) {
            rdx5 = *reinterpret_cast<void***>(*rdi + 0xfffffffffffffff0) + 0xfffffffffffffff8;
            *reinterpret_cast<void***>(*rdi + 0xfffffffffffffff0) = rdx5;
            if (reinterpret_cast<unsigned char>(rdx5) <= reinterpret_cast<unsigned char>(7)) 
                goto 0x4041c0;
        }
    }
    *rdi = rsi;
    return;
}

void fun_40427a(int64_t rdi, int64_t rsi) {
    goto 0x40424b;
}

void setPosition_plJQLEbXvFqZv6Phpo1t1w() {
    return;
}

struct s100 {
    signed char[16] pad16;
    void** f16;
};

void** alloc0_sVm4rDImKK2ZDdylByayiA_2(struct s100* rdi) {
    void** rdx2;
    void** rcx3;
    void** r8_4;
    void** rax5;
    void** rax6;

    rax5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, &rdi->f16, rdx2, rcx3, r8_4);
    *reinterpret_cast<void***>(rax5 + 8) = reinterpret_cast<void**>(1);
    rax6 = fun_4009c0(rax5 + 16);
    return rax6;
}

struct s101 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s102 {
    signed char[8] pad8;
    uint64_t f8;
};

void cellSetRawInsert_wqizyapnzNjHA3SIFqE8ow(struct s101* rdi, struct s102** rsi, struct s102* rdx) {
    uint64_t rdi4;
    uint64_t rax5;
    struct s102** rcx6;

    rdi4 = rdi->f8;
    rax5 = rdx->f8 & rdi4;
    rcx6 = rsi + rax5;
    if (*rcx6) {
        do {
            rax5 = rax5 + rax5 * 4 + 1 & rdi4;
            rcx6 = rsi + rax5;
        } while (*rcx6);
    }
    *rcx6 = rdx;
    return;
}

int64_t isActiveStack_deIRQymTVHcVwfHBKDbqEA() {
    return 1;
}

void* getOccupiedMem_9bFvoxSITMVCg7RY8KIar1Q() {
    void* rax1;

    rax1 = g6118f8;
    return rax1;
}

void fun_400a06() {
    goto 0x400960;
}

void fun_400a66() {
    goto 0x400960;
}

void fun_4009b6() {
    goto 0x400960;
}

uint64_t getRefcount(int64_t rdi) {
    return *reinterpret_cast<uint64_t*>(rdi - 16) >> 3;
}

void fun_4009e6() {
    goto 0x400960;
}

void newObjRC1(int64_t rdi, int64_t rsi) {
    uint64_t rax3;
    void** rdx4;
    int1_t less5;
    void* rax6;
    int1_t less7;

    rax3 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    rdx4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax3) >> 7);
    if (reinterpret_cast<int64_t>(rax3) <= reinterpret_cast<int64_t>(0xf9ff)) {
        rdx4 = reinterpret_cast<void**>(0x1f4);
    }
    less5 = reinterpret_cast<signed char>(g60f010) < reinterpret_cast<signed char>(rdx4);
    if (!less5) 
        goto 0x407fe8;
    rax6 = g60f008;
    less7 = reinterpret_cast<int64_t>(g6118f8) < reinterpret_cast<int64_t>(rax6);
    if (!less7) 
        goto 0x407fe8; else 
        goto "???";
}

void TM_2lQWYPc4hWuvSK7bVeWxSA_4() {
    goto 0x406290;
}

void Marker_tySequence_uB9b75OUPRENsBAu4AnoePA() {
    return;
}

int64_t __libc_start_main = 0;

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

struct s103 {
    struct s103* f0;
    struct s103* f8;
    signed char[16] pad32;
    int64_t f32;
};

void skew_Cfx7NvEVZIhBjBm7i89boSg(struct s103** rdi) {
    struct s103* rax2;
    struct s103* rdx3;

    rax2 = *rdi;
    rdx3 = rax2->f0;
    if (rdx3->f32 == rax2->f32) {
        *rdi = rdx3;
        rax2->f0 = rdx3->f8;
        (*rdi)->f8 = rax2;
    }
    return;
}

struct s104 {
    signed char[16] pad16;
    int64_t* f16;
};

void selectBranch_yDNUA0V9a9a9bVLtZ9bXPT0aEg() {
    struct s104* rsi1;

    if (*rsi1->f16 == 2) 
        goto 0x404270;
    if (*rsi1->f16 == 4) 
        goto 0x404290;
    if (*rsi1->f16 == 1) 
        goto 0x404280; else 
        goto "???";
}

struct s105 {
    int64_t f0;
    int64_t f8;
    void** f16;
};

void init_E1QNZGuo0DGFXyt4Y3MfqA(struct s105* rdi, int64_t rsi, void** rdx, void** rcx, void** r8) {
    void** rax6;
    void** rax7;

    rdi->f8 = rsi;
    rdi->f0 = 0;
    rax6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060, rsi * 8 + 16, rdx, rcx, r8);
    *reinterpret_cast<void***>(rax6 + 8) = reinterpret_cast<void**>(1);
    rax7 = fun_4009c0(rax6 + 16);
    rdi->f16 = rax7;
    return;
}

void inRange_Bc4Ua6HOMCIDGx9b15HSY4g(void** rdi) {
    if (rdi == *reinterpret_cast<void***>(rdi)) 
        goto 0x406588;
    goto 0x406572;
}

struct s106 {
    signed char[40] pad40;
    int64_t f40;
    signed char[8] pad56;
    void*** f56;
};

void unmarkStackAndRegisters_zoTIuavlrCHyw3B8MBaLJA_6(struct s106* rdi) {
    struct s106* r12_2;
    void*** rbx3;
    void*** rbp4;
    void** rsi5;
    void** rax6;

    r12_2 = rdi;
    rbx3 = rdi->f56;
    rbp4 = rbx3 + rdi->f40 * 8;
    if (!(reinterpret_cast<uint1_t>(rdi->f40 < 0) | reinterpret_cast<uint1_t>(rdi->f40 == 0))) {
        do {
            rsi5 = *rbx3;
            rax6 = *reinterpret_cast<void***>(rsi5) - 8;
            *reinterpret_cast<void***>(rsi5) = rax6;
            if (reinterpret_cast<unsigned char>(rax6) <= reinterpret_cast<unsigned char>(7)) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010, rsi5);
            }
            rbx3 = rbx3 + 8;
        } while (rbp4 != rbx3);
    }
    r12_2->f40 = 0;
    return;
}

void fun_4009f6() {
    goto 0x400960;
}

void PreMain() {
    void*** rdi1;
    void** rsi2;

    systemDatInit000();
    rdi1 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 24 - 8 + 8 + 8);
    nimGC_setStackBottom(rdi1, rsi2);
    PreMainInner(rdi1);
    return;
}

void init_WHgd5C59bkXWDz3vnAxfzXQ(int64_t rdi) {
    int1_t zf2;

    getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060, 0x2030);
    zf2 = g612108 == 0;
    if (zf2) 
        goto 0x404678; else 
        goto "???";
}
