
unsigned char g403000;

void fun_40199d(int64_t rcx);

uint64_t g403008;

void fun_401297() {
    int1_t zf1;
    int64_t v2;
    unsigned char v3;
    int1_t zf4;
    int1_t zf5;
    int64_t* r15_6;
    uint64_t rax7;
    uint64_t* rdi8;
    int32_t ecx9;
    uint64_t rdx10;
    uint64_t r8_11;
    uint64_t r8_12;
    uint64_t r8_13;

    zf1 = (g403000 & 8) == 0;
    if (!zf1) {
        v2 = 69;
        v3 = reinterpret_cast<unsigned char>(8);
    } else {
        zf4 = (g403000 & 32) == 0;
        if (!zf4) {
            v2 = 48;
            v3 = reinterpret_cast<unsigned char>(32);
        } else {
            zf5 = (g403000 & 4) == 0;
            if (!zf5) {
                v2 = 34;
                v3 = reinterpret_cast<unsigned char>(4);
            } else {
                if (!*r15_6) {
                    v2 = 42;
                    v3 = reinterpret_cast<unsigned char>(16);
                } else {
                    v2 = 0;
                    v3 = reinterpret_cast<unsigned char>(1);
                }
            }
        }
    }
    g403000 = v3;
    rax7 = reinterpret_cast<uint64_t>(v2 + reinterpret_cast<int64_t>(fun_40199d));
    g403008 = rax7;
    *reinterpret_cast<int32_t*>(&rdi8) = 0x403018;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi8) < 0x403030) {
        ecx9 = 0;
        *reinterpret_cast<int32_t*>(&rdx10) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_11 = rax7;
            *reinterpret_cast<uint32_t*>(&r8_12) = *reinterpret_cast<uint32_t*>(&r8_11) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = 0;
            r8_13 = r8_12 << *reinterpret_cast<unsigned char*>(&ecx9);
            ecx9 = ecx9 + 7;
            rdx10 = rdx10 | r8_13;
        } while (*reinterpret_cast<signed char*>(&rax7) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax7) & 64) {
            rdx10 = rdx10 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx9);
        }
        rax7 = rdx10;
        if (*rdi8) {
            rax7 = *rdi8;
        }
        *rdi8 = rax7;
        ++rdi8;
    }
    return;
}

struct s0 {
    uint16_t f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_401601(signed char* rcx);

void fun_40162c(signed char* rcx);

int32_t fun_40165c(signed char* rcx, struct s0* rdx, uint64_t r8, void* r9) {
    struct s0* r11_5;
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
    fun_401601(rcx);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_401715_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_401715_5;
            fun_401601(rcx);
        }
        break;
        addr_401715_5:
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
                    goto addr_401834_15; else 
                    goto addr_401755_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_401601(rcx);
                }
                *reinterpret_cast<int32_t*>(&r10_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = 0;
                while (v25 == 34) {
                    fun_401601(rcx);
                    ++r10_24;
                }
                rax26 = r12_22;
                if (!r10_24) 
                    goto addr_40179c_25;
            } else {
                addr_401834_15:
                fun_40162c(rcx);
                fun_401601(rcx);
                continue;
            }
            while (rax26 > 1) {
                fun_40162c(rcx);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_4017f1_29;
            fun_40162c(rcx);
            --r10_24;
            if (!r10_24) 
                continue;
            addr_4017f1_29:
            *reinterpret_cast<int32_t*>(&r14_27) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
            r10_28 = r10_24 - reinterpret_cast<uint1_t>(r10_24 < static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d19) < 1)));
            r12_29 = r10_28 + 1;
            while (r12_29 >= r14_27) {
                r14_27 = r14_27 + 3;
                fun_40162c(rcx);
            }
            *reinterpret_cast<int32_t*>(&rcx) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r10_28 % 3 == 0);
            continue;
            addr_40179c_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_40162c(rcx);
            }
        }
        addr_401849_35:
        fun_40162c(rcx);
        continue;
        addr_401755_16:
        goto addr_401849_35;
    }
    fun_40162c(rcx);
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

uint64_t fun_401a09(signed char* rcx, struct s0* rdx) {
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
        ecx6 = *reinterpret_cast<int32_t*>(0x401af7 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
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

uint32_t fun_4019fa(signed char* rcx, struct s0* rdx, uint64_t r8, ...);

void fun_401601(signed char* rcx) {
    uint32_t eax2;
    uint16_t** rdi3;
    struct s0* rdi4;
    uint64_t r8_5;
    uint32_t eax6;
    int64_t rax7;

    eax2 = **rdi3;
    if (*reinterpret_cast<uint16_t*>(&eax2) > 0xd7ff) {
        eax6 = fun_4019fa(rcx, rdi4, r8_5);
    } else {
        rdi4->f18 = eax2;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rdi4->f0 = reinterpret_cast<uint16_t>(rdi4->f0 + (rax7 + rax7));
    return;
}

void fun_40162c(signed char* rcx) {
    struct s0* rdx2;
    struct s0* rdi3;
    signed char* r8_4;
    uint64_t rax5;
    int32_t esi6;
    uint32_t esi7;
    signed char* rcx8;

    rdx2 = rdi3;
    r8_4 = rdx2->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi6));
    if (esi7 > 0x7f) {
        rax5 = fun_401a09(rcx, rdx2);
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

uint32_t fun_401a3c(signed char* rcx, struct s0* rdx) {
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

int32_t fun_40134d() {
    return 42;
}

int64_t fun_401907();

void fun_401aa1();

uint32_t g403018;

uint32_t g403358;

void fun_40139b() {
    uint32_t eax1;
    int64_t rax2;

    fun_401907();
    fun_401aa1();
    eax1 = g403018;
    g403358 = eax1;
    goto rax2;
}

uint32_t fun_4019fa(signed char* rcx, struct s0* rdx, uint64_t r8, ...) {
    uint32_t eax4;

    eax4 = fun_401a3c(rcx, rdx);
    return eax4;
}

struct s1 {
    uint32_t f0;
    signed char[4] pad8;
    struct s1* f8;
};

struct s1* g403040;

struct s2 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
};

struct s1* fun_0();

int64_t fun_401907() {
    int64_t r12_1;
    int64_t rdi2;
    int64_t v3;
    int64_t rdx4;
    struct s1* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s2* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s1* r13_11;

    r12_1 = rdi2;
    v3 = rdx4;
    while (rdi5 = g403040, !!rdi5) {
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
            } while (r12_1 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_1 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_1) 
                goto addr_401970_8;
            if (!r13_11) 
                goto addr_401995_10;
            rdi5 = r13_11;
        }
        rdx10();
        continue;
        addr_401970_8:
        if (r13_11 && !1) {
            fun_0();
        }
        g403040 = r13_11;
    }
    addr_401995_10:
    return v3;
}

int64_t fun_4013b4() {
    uint32_t eax1;

    eax1 = g403018;
    g403358 = eax1;
    return 0xff;
}

uint32_t g40335c;

int64_t ExitProcess = 0x1de8;

void fun_401aa1() {
    int1_t zf1;
    int64_t rcx2;
    unsigned char dil3;

    g40335c = g40335c | 4;
    zf1 = (g403000 & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x401ad2]");
        __asm__("hlt ");
    } else {
        *reinterpret_cast<uint32_t*>(&rcx2) = dil3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
        while (1) {
            ExitProcess(rcx2);
        }
    }
}

struct s3 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

struct s4 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

void fun_401000() {
    uint64_t* rcx1;
    uint64_t* rdx2;
    uint64_t* r15_3;
    uint64_t* rsi4;
    struct s3* r13_5;
    struct s3* rdi6;
    uint64_t r12_7;
    struct s4* rbx8;
    struct s4* rdi9;
    struct s4* rax10;
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
            rbx8 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rbx8) + 24);
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
                    r13_5 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(r13_5) + 24);
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
        rbx8 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rbx8) + 24);
        continue;
        addr_401049_5:
        goto addr_40104e_7;
    }
    return;
}

struct s5 {
    struct s5* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[50] pad83;
    unsigned char f53;
    signed char[16] pad100;
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
};

struct s6 {
    unsigned char f0;
    signed char[84] pad85;
    unsigned char f55;
    signed char[31] pad117;
    unsigned char f75;
    signed char[8396441] pad8396559;
    unsigned char f801f0f;
    signed char[8433404] pad16829964;
    unsigned char f100ce0c;
};

struct s7 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s8 {
    unsigned char f0;
    signed char[31] pad32;
    int32_t f20;
    signed char[37] pad73;
    unsigned char f49;
    signed char[5] pad79;
    unsigned char f4f;
    signed char[21] pad101;
    int32_t f65;
    int32_t f67;
    unsigned char f6c;
    signed char[1] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    uint32_t f72;
};

struct s9 {
    signed char[104] pad104;
    int32_t f68;
};

struct s10 {
    signed char[32] pad32;
    int32_t f20;
};

struct s11 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s12 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s13 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s14 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s15 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s16 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s17 {
    signed char[105] pad105;
    signed char f69;
};

struct s18 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s19 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s20 {
    signed char[111] pad111;
    signed char f6f;
};

signed char g401eae = 0;

struct s6* fun_10401e9f();

struct s21 {
    signed char[101] pad101;
    int32_t f65;
};

struct s22 {
    signed char[101] pad101;
    int32_t f65;
};

struct s23 {
    signed char[101] pad101;
    int32_t f65;
};

struct s24 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s25 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s26 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s27 {
    signed char[112] pad112;
    int32_t f70;
};

struct s28 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s29 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s30 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s31 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s32 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s33 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s34 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s35 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s36 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s37 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_401af0(struct s5* rcx, int16_t dx, unsigned char* r8) {
    struct s5* rdx2;
    void* rsp4;
    int1_t cf5;
    void* al6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    struct s6* rax11;
    struct s7* rbx12;
    struct s8* rsi13;
    int1_t zf14;
    struct s9* rdi15;
    struct s5* rbp16;
    void* rsp17;
    struct s10* rbx18;
    int64_t* rsp19;
    void** rsp20;
    int64_t* rsp21;
    int64_t r11_22;
    int64_t* rsp23;
    int64_t rbx24;
    struct s5** rsp25;
    struct s6** rsp26;
    int64_t* rsp27;
    int64_t r10_28;
    void** rsp29;
    int64_t* rsp30;
    int64_t r13_31;
    int64_t* rsp32;
    int64_t r10_33;
    struct s5** rsp34;
    struct s6** rsp35;
    int64_t* rsp36;
    int64_t r11_37;
    struct s11* rbx38;
    struct s12* rbx39;
    struct s13* rdi40;
    struct s14* rdi41;
    struct s5* rsp42;
    struct s15* rdi43;
    uint1_t zf44;
    int1_t zf45;
    unsigned char* rdi46;
    signed char* rdi47;
    struct s16* edi48;
    struct s17* edi49;
    struct s18* rbx50;
    struct s19* rbx51;
    uint1_t zf52;
    struct s20* rbx53;
    unsigned char tmp8_54;
    uint1_t cf55;
    signed char bl56;
    int32_t tmp32_57;
    uint32_t tmp32_58;
    uint1_t cf59;
    struct s5* rdi60;
    struct s21* rdi61;
    struct s22* rdi62;
    struct s23* rdi63;
    void* rsp64;
    struct s24* rdi65;
    uint1_t cf66;
    uint1_t below_or_equal67;
    struct s5* rsp68;
    struct s5* rsp69;
    struct s5* r12_70;
    struct s25* rdi71;
    struct s26* rdi72;
    struct s27* rdi73;
    struct s28* rdi74;
    struct s29* rdi75;
    struct s30* rdi76;
    struct s31* rdi77;
    struct s32* rdi78;
    struct s33* rdi79;
    struct s5* rsp80;
    struct s34* rdi81;
    struct s35* rdi82;
    struct s36* rdi83;
    struct s37* rdi84;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    rsp4 = __zero_stack_offset();
    if (cf5) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s5**>(&rcx->f0) = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s5**>(&rcx->f0)) + reinterpret_cast<signed char>(al6));
        __asm__("rol byte [rcx], 0xc0");
        eax7 = eax8 + eax9;
        eax10 = eax7 + eax7;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10));
        *reinterpret_cast<signed char*>(&eax10) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) - 8) - 8) - 8) - 8) - 8);
        *reinterpret_cast<int32_t*>(&rax11) = eax10 + 0x5fc05fc + 0x5fc05fc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | rbx12->f6f);
        if (1) {
            rcx->f74 = reinterpret_cast<unsigned char>(rcx->f74 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rcx->f6e = 0;
            goto addr_401ba2_5;
        }
        __asm__("outsd ");
        if (0) {
            addr_401ba2_5:
        } else {
            __asm__("insb ");
            *reinterpret_cast<uint32_t*>(&rsi13) = rcx->f6e * 0x706f430a;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
            zf14 = __undefined();
            if (!__undefined()) {
                if (!zf14) 
                    goto addr_401c22_9;
                if (__intrinsic()) 
                    goto addr_401bd8_11; else 
                    goto addr_401bb8_12;
            } else {
                *reinterpret_cast<int32_t*>(&rsp4) = rdi15->f68 * 0x30322074;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp4) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx2 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2 + 1) ^ rax11->f0);
                rdx2->f75 = reinterpret_cast<unsigned char>(rdx2->f75 & *reinterpret_cast<unsigned char*>(&rcx));
                if (1) {
                    addr_401bc0_14:
                    if (1) {
                        goto addr_401be3_16;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbp16) = rsi13->f65 * 0x656c4120;
                    *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                    zf14 = __undefined();
                    if (__undefined()) {
                        goto addr_401bb8_12;
                    } else {
                        __asm__("outsb ");
                        if (__intrinsic()) 
                            goto addr_401bba_20;
                    }
                }
            }
        }
    }
    rdx2->f6f = reinterpret_cast<unsigned char>(rdx2->f6f & *reinterpret_cast<unsigned char*>(&rdx2));
    addr_401bd8_11:
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp17) = reinterpret_cast<uint32_t>(rbx18->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_401c48_23:
        *reinterpret_cast<int32_t*>(&rbp16) = rsi13->f20 * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
        *rsp19 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_401be3_16:
        rcx->f73 = 0;
        rax11->f75 = 0;
    }
    addr_401cbf_25:
    rsp20 = reinterpret_cast<void**>(rsp19 - 1);
    *reinterpret_cast<void***>(rsp20) = rsp20;
    rsp21 = reinterpret_cast<int64_t*>(rsp20 - 1);
    *rsp21 = r11_22;
    rsp23 = rsp21 - 1;
    *rsp23 = rbx24;
    rsi13->f4f = reinterpret_cast<unsigned char>(rsi13->f4f & *reinterpret_cast<unsigned char*>(&rax11));
    rsp25 = reinterpret_cast<struct s5**>(rsp23 - 1);
    *rsp25 = rdx2;
    rcx->f20 = reinterpret_cast<unsigned char>(rcx->f20 & *reinterpret_cast<unsigned char*>(&rax11));
    rsp26 = reinterpret_cast<struct s6**>(rsp25 - 8);
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
    rsp34 = reinterpret_cast<struct s5**>(rsp32 - 1);
    *rsp34 = rdx2;
    rsp35 = reinterpret_cast<struct s6**>(rsp34 - 8);
    *rsp35 = rax11;
    rsp36 = reinterpret_cast<int64_t*>(rsp35 - 1);
    *rsp36 = r11_37;
    rbx38->f65 = reinterpret_cast<unsigned char>(rbx39->f65 & *reinterpret_cast<unsigned char*>(&rdx2));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
    rdi40->f4e = reinterpret_cast<unsigned char>(rdi41->f4e & *reinterpret_cast<unsigned char*>(&rax11));
    rsp42 = reinterpret_cast<struct s5*>(rsp36 - 1);
    *reinterpret_cast<struct s5**>(&rsp42->f0) = rbp16;
    *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | rdi43->f65);
    zf44 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax11) == 0);
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & *reinterpret_cast<unsigned char*>(&rdx2));
    }
    __asm__("outsb ");
    if (1) {
        if (zf44) {
            __asm__("outsb ");
            if (zf44) {
                addr_401e94_32:
                goto addr_401e95_33;
            } else {
                if (0) {
                    addr_401e9c_35:
                } else {
                    __asm__("outsb ");
                    __asm__("insd ");
                    __asm__("outsb ");
                    if (zf44) {
                        addr_401e86_37:
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        goto addr_401e94_32;
                    } else {
                        if (zf44) {
                            goto addr_401ea8_40;
                        }
                    }
                }
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi13) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi13) + 0x6c) & *reinterpret_cast<unsigned char*>(&rax11));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                if (1) 
                    goto addr_401df6_44; else 
                    goto addr_401df6_44;
            } else {
                rdx2->f6f = reinterpret_cast<unsigned char>(rdx2->f6f & *reinterpret_cast<unsigned char*>(&rax11));
                zf45 = rdx2->f6f == 0;
                if (1) {
                    if (zf45) {
                        addr_401e95_33:
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                        *rdi46 = reinterpret_cast<unsigned char>(*rdi47 + *reinterpret_cast<unsigned char*>(&rcx));
                        goto addr_401e9c_35;
                    } else {
                        if (!zf45) {
                        }
                    }
                } else {
                    addr_401dcc_49:
                    __asm__("outsd ");
                    __asm__("outsb ");
                    *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) - 32);
                    goto addr_401dd0_50;
                }
            }
        }
    } else {
        addr_401d58_51:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax11) + 1) = 0xff;
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&edi48->f69) = 0;
        if (!*reinterpret_cast<signed char*>(&edi49->f69)) {
            goto addr_401dcc_49;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x69) = 0;
            if (1) {
                addr_401d89_54:
                rbx50->f6f = reinterpret_cast<unsigned char>(rbx51->f6f & *reinterpret_cast<unsigned char*>(&rdx2));
                zf52 = reinterpret_cast<uint1_t>(rbx53->f6f == 0);
                goto addr_401d8b_55;
            } else {
                if (0) {
                    addr_401ddd_57:
                    rbp16->f53 = reinterpret_cast<unsigned char>(rbp16->f53 & *reinterpret_cast<unsigned char*>(&rdx2));
                    *r8 = reinterpret_cast<unsigned char>(*r8 + *reinterpret_cast<unsigned char*>(&rax11));
                    goto addr_401de6_58;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_401dd0_50:
                        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi13) | *r8);
                        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 ^ *reinterpret_cast<uint32_t*>(&rsi13));
                        *reinterpret_cast<int32_t*>(&rax11) = *reinterpret_cast<int32_t*>(&rax11) - 0x31303331;
                        goto addr_401ddd_57;
                    } else {
                        __asm__("insd ");
                        goto addr_401d71_61;
                    }
                }
            }
        }
    }
    addr_401ea8_40:
    g401eae = -g401eae;
    tmp8_54 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    cf55 = reinterpret_cast<uint1_t>(tmp8_54 < rax11->f0);
    rax11->f0 = tmp8_54;
    rsi13->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rsi13->f0 + bl56) + cf55);
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
    addr_401df6_44:
    tmp32_57 = *reinterpret_cast<int32_t*>(&rcx);
    *reinterpret_cast<int32_t*>(&rcx) = *reinterpret_cast<int32_t*>(&rax11);
    *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax11) = tmp32_57;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    tmp32_58 = rsi13->f72 + *reinterpret_cast<int32_t*>(&rax11);
    cf59 = reinterpret_cast<uint1_t>(tmp32_58 < rsi13->f72);
    rsi13->f72 = tmp32_58;
    zf52 = reinterpret_cast<uint1_t>(rsi13->f72 == 0);
    __asm__("outsb ");
    if (cf59 | zf52) {
        addr_401e69_65:
        rsp42 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(rsp42) - 8);
        *reinterpret_cast<struct s5**>(&rsp42->f0) = rdi60;
        if (cf59) {
            addr_401ed6_66:
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f801f0f = reinterpret_cast<unsigned char>(rax11->f801f0f + *reinterpret_cast<unsigned char*>(&rdx2));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f100ce0c = reinterpret_cast<unsigned char>(rax11->f100ce0c + *reinterpret_cast<unsigned char*>(&rdx2));
            __asm__("out 0x1, eax");
            *reinterpret_cast<struct s5**>(&rcx->f0) = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s5**>(&rcx->f0)) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | 38) | 0xce));
        } else {
            if (zf52) {
                rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
                goto addr_401ed6_66;
            } else {
                goto addr_401e71_70;
            }
        }
    } else {
        if (cf59) {
            addr_401e71_70:
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
            goto addr_401e7c_72;
        } else {
            __asm__("outsb ");
            __asm__("insd ");
            __asm__("outsb ");
            if (!zf52) 
                goto addr_401e08_75;
        }
    }
    addr_401e5b_76:
    *reinterpret_cast<uint32_t*>(&rsp42) = rbp16->f73 * 0x71f0000;
    *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
    cf59 = __intrinsic();
    zf52 = __undefined();
    goto addr_401e69_65;
    addr_401e08_75:
    if (zf52) {
        addr_401e7c_72:
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 + *reinterpret_cast<unsigned char*>(&rax11));
        *reinterpret_cast<struct s5**>(reinterpret_cast<unsigned char>(rsp42) - 8) = reinterpret_cast<struct s5*>(" ");
        rax11 = fun_10401e9f();
        rax11->f0 = reinterpret_cast<unsigned char>(rax11->f0 & *reinterpret_cast<unsigned char*>(&rax11));
        goto addr_401e86_37;
    } else {
        *reinterpret_cast<int32_t*>(&rbp16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi13) + 0x67) * 0xbd005773;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        rdi61->f65 = rdi62->f65 + *reinterpret_cast<int32_t*>(&rax11);
        if (!rdi63->f65) {
            __asm__("insb ");
            __asm__("insb ");
            goto addr_401e5b_76;
        } else {
            __asm__("outsd ");
            __asm__("insd ");
            __asm__("insd ");
        }
    }
    addr_401d8b_55:
    if (!zf52) {
    }
    addr_401de6_58:
    addr_401d71_61:
    *reinterpret_cast<int32_t*>(&rsp64) = rsi13->f20 * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp64) + 4) = 0;
    rdi65->f72 = 0;
    *reinterpret_cast<uint32_t*>(&rsi13) = rbp16->f20 * 0x74206f74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
    rsp42 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rsp64) - 8);
    *reinterpret_cast<struct s5**>(&rsp42->f0) = reinterpret_cast<struct s5*>(0x72462065);
    goto addr_401d89_54;
    addr_401bb8_12:
    if (zf14) {
        addr_401c22_9:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 99) & *reinterpret_cast<unsigned char*>(&rcx));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
            rcx->f6d = reinterpret_cast<unsigned char>(rcx->f6d & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf66 = 0;
            goto addr_401c99_85;
        } else {
            *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s5**>(&rdx2->f0)));
            cf66 = 0;
            zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
            below_or_equal67 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf52));
            rsp68 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rsp4) - 8);
            *reinterpret_cast<struct s5**>(&rsp68->f0) = rsp68;
            rsp42 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(rsp68) - 8);
            *reinterpret_cast<struct s5**>(&rsp42->f0) = reinterpret_cast<struct s5*>(0x70207369);
            if (0) {
                goto addr_401ca5_88;
            }
        }
    } else {
        addr_401bba_20:
        rbp16->f72 = 0;
        __asm__("insd ");
        goto addr_401bc0_14;
    }
    addr_401c35_89:
    if (0) {
        addr_401c99_85:
        if (0) 
            goto addr_401d08_90;
    } else {
        __asm__("insd ");
        rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(&rcx + 1));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x73)) {
            addr_401cb4_92:
            rsp69 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s5**>(&rsp69->f0) = r12_70;
            rcx = *reinterpret_cast<struct s5**>(&rsp69->f0);
            rsp19 = &rsp69->f8;
            rdi71->f72 = reinterpret_cast<unsigned char>(rdi72->f72 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsi13->f49 = reinterpret_cast<unsigned char>(rsi13->f49 & *reinterpret_cast<unsigned char*>(&rax11));
            goto addr_401cbf_25;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp17) = rdx2->f75 * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
            goto addr_401c48_23;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsp42) = reinterpret_cast<uint32_t>(rbp16->f64 * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
    cf66 = __intrinsic();
    zf52 = __undefined();
    below_or_equal67 = reinterpret_cast<uint1_t>(cf66 | zf52);
    if (cf66) {
        if (cf66) {
            addr_401d28_96:
            *reinterpret_cast<uint32_t*>(&rsp42) = rbp16->f69;
            *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
            if (below_or_equal67) {
                *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax11) | rsi13->f6f);
                zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax11) == 0);
                if (zf52) 
                    goto addr_401d99_99;
            } else {
                rcx->f20 = 0;
                *reinterpret_cast<int32_t*>(&rbp16) = rdi73->f70;
                *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_401d58_51;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
                    rdi74->f4e = reinterpret_cast<unsigned char>(rdi75->f4e & *reinterpret_cast<unsigned char*>(&rax11));
                    *reinterpret_cast<struct s5**>(reinterpret_cast<unsigned char>(rsp42) - 8) = rbp16;
                    rdi76->f65 = reinterpret_cast<unsigned char>(rdi77->f65 & *reinterpret_cast<unsigned char*>(&rax11));
                    __asm__("outsb ");
                    if (0) 
                        goto addr_401da9_104; else 
                        goto addr_401d48_105;
                }
            }
        } else {
            addr_401d08_90:
            __asm__("insd ");
            __asm__("outsd ");
            if (!cf66) {
                rbp16->f74 = 0;
            }
        }
    } else {
        addr_401ca5_88:
        __asm__("outsb ");
        if (zf52) {
            if (!below_or_equal67) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x65) = 0;
                below_or_equal67 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx2) + 0x65) == 0)));
                goto addr_401d28_96;
            }
        } else {
            rdi78->f66 = reinterpret_cast<unsigned char>(rdi79->f66 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp80 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s5**>(&rsp80->f0) = rdx2;
            rsp42 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(rsp80) - 8);
            *reinterpret_cast<struct s5**>(&rsp42->f0) = rsp42;
            goto addr_401cb4_92;
        }
    }
    goto addr_401e08_75;
    addr_401d99_99:
    addr_401da9_104:
    addr_401d48_105:
    __asm__("insb ");
    rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & *reinterpret_cast<unsigned char*>(&rdx2));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp16) * 2) + 0x65) = 0;
    rdi81->f4e = reinterpret_cast<unsigned char>(rdi82->f4e & *reinterpret_cast<unsigned char*>(&rax11));
    rsp42 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rsp4) - 8);
    *reinterpret_cast<struct s5**>(&rsp42->f0) = rbp16;
    rdi83->f65 = reinterpret_cast<unsigned char>(rdi84->f65 & *reinterpret_cast<unsigned char*>(&rax11));
    cf66 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_401bd3_113;
    goto addr_401c35_89;
    addr_401bd3_113:
    __asm__("insb ");
    rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & *reinterpret_cast<unsigned char*>(&rdx2));
}

struct s38 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s39 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s40 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s41 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s42 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s43 {
    signed char[111] pad111;
    signed char f6f;
};

struct s44 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s45 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s46 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s47 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s48 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s49 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_401b5d(struct s38* rcx, int16_t dx) {
    struct s39* rdx2;
    int1_t cf3;
    int1_t cf4;
    int1_t zf5;
    int1_t sf6;
    struct s40* rsi7;
    struct s41* rsi8;
    unsigned char ah9;
    struct s42* rbx10;
    int1_t zf11;
    struct s43* rbx12;
    struct s44* rdi13;
    struct s45* rdi14;
    void* rsp15;
    int1_t zf16;
    void** rax17;
    void** rax18;
    struct s46* rsi19;
    struct s47* rsi20;
    unsigned char ah21;
    struct s48* rbp22;
    struct s49* rbp23;
    unsigned char ah24;
    void* rax25;
    int64_t rbp26;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    if (cf3) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf4) {
        goto addr_401b84_4;
    }
    if (!zf5) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf6) 
        goto addr_401b69_7;
    addr_401b75_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_401c02_12;
    } else {
        addr_401b84_4:
    }
    rdi13->f41 = reinterpret_cast<unsigned char>(rdi14->f41 & *reinterpret_cast<unsigned char*>(&rdx2));
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf16 = *reinterpret_cast<void**>(&rsp15) == *rax17;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp15)) <= reinterpret_cast<uint32_t>(*rax18)) 
        goto addr_401c89_15;
    addr_401c89_15:
    if (zf16) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf16) 
        goto addr_401c8e_18;
    rsi19->f6f = reinterpret_cast<unsigned char>(rsi20->f6f & ah21);
    addr_401c8e_18:
    rbp22->f76 = reinterpret_cast<unsigned char>(rbp23->f76 & ah24);
    addr_401c02_12:
    addr_401b69_7:
    *reinterpret_cast<unsigned char*>(&rdx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax25) + rbp26 * 2 + 0x69));
    if (1) {
        rdx2->f65 = 0;
        if (__undefined()) 
            goto addr_401c02_12; else 
            goto "???";
    } else {
        if (0) 
            goto " as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("outsd ");
        if (0) 
            goto "ublic License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
            goto addr_401b75_9;
    }
}

struct s50 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s51 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s52 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s53 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_401b85(int64_t rcx, unsigned char dl) {
    void* rsp3;
    int1_t cf4;
    int1_t sf5;
    int1_t zf6;
    void** rax7;
    void** rax8;
    struct s50* rsi9;
    struct s51* rsi10;
    unsigned char al11;
    struct s52* rbx12;
    struct s53* rbx13;

    rsp3 = __zero_stack_offset();
    if (cf4) {
        if (!sf5) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf6) 
            goto addr_401bf6_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp3)) < reinterpret_cast<int32_t>(*rax7)) {
            if (*reinterpret_cast<void**>(&rsp3) != *rax8) {
            }
        }
    }
    addr_401bf6_4:
    rsi9->f72 = reinterpret_cast<unsigned char>(rsi10->f72 & al11);
    rbx12->f6f = reinterpret_cast<unsigned char>(rbx13->f6f & dl);
}

void fun_401ba5() {
    int1_t cf1;

    __asm__("outsd ");
    if (cf1) 
        goto " GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insd ");
    __asm__("outsd ");
}

void fun_401bea() {
    __asm__("insb ");
}

struct s54 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s55 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s56 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s57 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_401c03(struct s54* rcx) {
    int1_t cf2;
    struct s55* rsi3;
    struct s56* rsi4;
    unsigned char al5;
    struct s57* rsi6;
    unsigned char al7;

    if (!cf2) {
        rsi3->f6f = reinterpret_cast<unsigned char>(rsi4->f6f & al5);
        if (rsi6->f6f) {
            rcx->f4e = reinterpret_cast<unsigned char>(rcx->f4e & al7);
        }
    }
}

struct s58 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_401c0c() {
    void* rsp1;
    int1_t zf2;
    void** rax3;
    void** rax4;
    int64_t rbp5;
    struct s58* rdi6;
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

void fun_401c58() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s59 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s60 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s61 {
    signed char[115] pad115;
    signed char f73;
};

void fun_401c63() {
    struct s59* rbp1;
    struct s60* rbp2;
    unsigned char dh3;
    struct s61* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_401c6e() {
    int1_t zf1;

    if (!zf1) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_401cf8() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s62 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s63 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_401d11() {
    struct s62* rax1;
    struct s63* rax2;
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

void fun_401d4d() {
    __asm__("insb ");
}

void fun_401d92() {
    int1_t cf1;

    if (cf1) 
        goto "reeEnvironmentStringsW"; else 
        goto "???";
}

void fun_401d9b() {
    int1_t zf1;

    if (zf1) 
        goto "tStringsW";
    __asm__("outsd ");
    __asm__("outsb ");
    __asm__("outsb ");
}

struct s64 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s65 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_401dad(int64_t rcx) {
    struct s64* rsi2;
    struct s65* rsi3;
    unsigned char al4;

    __asm__("outsb ");
    if (__undefined()) 
        goto "nvironmentStringsW";
    if (__undefined()) 
        goto 0x401de6;
    rsi2->f69 = reinterpret_cast<unsigned char>(rsi3->f69 & al4);
}

void fun_401de9() {
    int32_t eax1;
    uint32_t eax2;

    if (reinterpret_cast<uint32_t>(eax1 + 0x74697845) < eax2) 
        goto "tories";
}

void fun_401e1a() {
    __asm__("outsb ");
    if (__undefined()) 
        goto "teFile"; else 
        goto "???";
}

void fun_401e3d() {
}

void fun_401e46() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    __asm__("outsb ");
    __asm__("insb ");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    __asm__("xlatb ");
}

void fun_401e55() {
    int1_t zf1;
    int1_t zf2;

    if (!zf1) 
        goto 0x401ec3;
    if (zf2) 
        goto 0x401e9d; else 
        goto "???";
}

void fun_401e9e() {
    unsigned char tmp8_1;
    signed char al2;
    signed char bpl3;
    uint32_t eax4;
    signed char* rax5;
    unsigned char al6;

    tmp8_1 = reinterpret_cast<unsigned char>(al2 + bpl3);
    *reinterpret_cast<unsigned char*>(&eax4) = tmp8_1;
    *reinterpret_cast<uint32_t*>(&rax5) = eax4 - reinterpret_cast<uint1_t>(eax4 < static_cast<uint32_t>(reinterpret_cast<uint1_t>(tmp8_1 < al6)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    *rax5 = reinterpret_cast<signed char>(*rax5 + *reinterpret_cast<signed char*>(&rax5));
}

void fun_401eca() {
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

struct s66 {
    signed char[12] pad12;
    int32_t fc;
};

struct s67 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_401ef6() {
    struct s66* rdi1;
    struct s67* rdi2;
    int32_t edi3;

    rdi1->fc = rdi2->fc + edi3;
}

void fun_401efa(int64_t rcx) {
    signed char al2;

    *reinterpret_cast<signed char*>(rcx + 0x66108080) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx + 0x66108080) + al2);
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

uint32_t g403020;

int64_t fun_4019e2(int64_t rcx) {
    int64_t rax2;
    uint32_t eax3;
    uint32_t eax4;
    int1_t cf5;

    *reinterpret_cast<uint32_t*>(&rax2) = eax3 >> 16 & 0xfff | eax4 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    cf5 = *reinterpret_cast<uint16_t*>(&rax2) < 0xfff;
    if (!cf5) {
        *reinterpret_cast<uint32_t*>(&rax2) = g403020;
    } else {
        __asm__("syscall ");
        if (!cf5) {
            return rax2;
        }
    }
    g403358 = *reinterpret_cast<uint32_t*>(&rax2);
    return 0xff;
}

struct s68 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s69 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s70 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_40117b() {
    struct s68* r9_1;
    struct s68* rdi2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s69* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s69* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s69* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s70* rax18;

    r9_1 = rdi2;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_1) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s69*>(&r9_1->f18);
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
                    rdi15 = reinterpret_cast<struct s69*>(&rdi15->pad8);
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
            rax18 = reinterpret_cast<struct s70*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_1));
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
    g403000 = 8;
    r14_2 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + *reinterpret_cast<int32_t*>(&v1) * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi3) = 0x402010;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx4) = 8;
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
    g40335c = g40335c | 1;
    *reinterpret_cast<int32_t*>(&rax7) = 0x402008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    while (0x402008 != rax7) {
        *rax7();
        ++rax7;
    }
    fun_40134d();
    fun_40139b();
}

int64_t fun_40186a() {
    return 0x403358;
}

void fun_40199d(int64_t rcx) {
    uint64_t rax2;
    int16_t ax3;

    *reinterpret_cast<int32_t*>(&rax2) = ax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax2) < 0) 
        goto 0x4019bf;
    __asm__("syscall ");
    if (rax2 < 0xfffffffffffff001) {
        return;
    }
}

void fun_401ad0() {
    goto 0x401acf;
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
    g403000 = 32;
}

struct s71 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
    int64_t f20;
};

int64_t fun_401872() {
    struct s1* rbx1;
    int64_t rax2;
    struct s71* rbx3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rsi6;
    int64_t rdx7;
    struct s1* rax8;

    rbx1 = g403040;
    if (!rbx1) {
        rbx1 = reinterpret_cast<struct s1*>(0x403048);
        g403040 = reinterpret_cast<struct s1*>(0x403048);
    }
    if (rbx1->f0 != 0xffffffff) {
        addr_4018d9_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(~rbx1->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        rbx1->f0 = rbx1->f0;
        rbx3 = reinterpret_cast<struct s71*>(reinterpret_cast<int64_t>(rbx1) + rax2 * 24);
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        rbx3->f10 = rdi5;
        rbx3->f18 = rsi6;
        rbx3->f20 = rdx7;
    } else {
        if (1 || (rax8 = fun_0(), rax8 == 0)) {
            rax4 = fun_4013b4();
        } else {
            rax8->f8 = rbx1;
            g403040 = rax8;
            rbx1 = rax8;
            goto addr_4018d9_4;
        }
    }
    return rax4;
}

int64_t SetDefaultDllDirectories = 0x1e4c;

int64_t GetStdHandle = 0x1e3c;

int64_t WriteFile = 0x1e68;

int64_t GetCommandLineW = 0x1e10;

int64_t GetEnvironmentStringsW = 0x1e22;

int64_t FreeEnvironmentStringsW = 0x1df6;

void fun_4013c5() {
    int64_t rcx1;
    void* rbp2;
    int32_t eax3;
    int64_t rax4;
    void* r9_5;
    uint16_t* rax6;
    struct s0* rdx7;
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
    struct s0* rdx19;
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
        ExitProcess(1, 0x40140d, 6, r9_5);
    }
    *reinterpret_cast<int32_t*>(&g403000) = 4;
    GetCommandLineW(rcx1, 0x40140d, 6, r9_5);
    rax6 = reinterpret_cast<uint16_t*>(GetEnvironmentStringsW(rcx1, 0x40140d, 6, r9_5));
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    r13_8 = rax6;
    fun_40165c(reinterpret_cast<int64_t>(rbp2) - 0xd030, 0x3fff, 0x200, r9_5);
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
        eax13 = fun_4019fa(rcx10, rdx7, 0x200, rcx10, rdx7, 0x200);
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
    rdx19 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r13_8) + (rax15 + rax15));
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
                rax23 = fun_401a09(rcx16, rdx19);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx16) >= reinterpret_cast<uint64_t>(r10_17)) 
                    break;
                ++rcx16;
                rax23 = rax23 >> 8;
            } while (rax23);
            eax24 = rdx19->f0;
            if (*reinterpret_cast<uint16_t*>(&eax24) > 0xd7ff) {
                eax25 = fun_4019fa(rcx16, rdx19, r8_18);
            } else {
                v14 = eax24;
                eax25 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax26) = eax25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            rdx19 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdx19) + (rax26 + rax26));
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
    goto 0x401353;
}

void fun_4019c7() {
    goto 0x4019d4;
}

void fun_401ad2() {
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
    __asm__("outsb ");
    __asm__("outsd ");
    __asm__("insb ");
    __asm__("insb ");
    if (0) 
        goto "Roberts Tunney\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insb ");
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

void fun_4019cd() {
}
