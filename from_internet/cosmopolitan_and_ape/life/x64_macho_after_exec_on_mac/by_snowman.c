
unsigned char g403000 = 0;

void fun_40199d();

uint64_t g403008 = 0;

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
    struct s0* f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_401601(struct s0* rdi);

void fun_40162c(struct s0* rdi, uint32_t* rsi);

int32_t fun_40165c(struct s0* rdi, void* rsi, struct s0* rdx, int64_t* rcx, uint64_t r8, void* r9) {
    struct s0* r11_7;
    struct s0* r9_8;
    void* r13_9;
    uint64_t rbx10;
    int64_t* v11;
    uint64_t v12;
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
    uint64_t r10_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r10_28;
    uint64_t r12_29;
    void* r11_30;
    void* rax31;
    uint64_t r8_32;

    r11_7 = rdx;
    r9_8 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 80);
    r13_9 = rsi;
    *reinterpret_cast<int32_t*>(&rbx10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx10) + 4) = 0;
    v11 = rcx;
    v12 = r8;
    v13 = rsi;
    v14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint16_t>(rdx));
    fun_401601(r9_8);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_401715_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_401715_5;
            fun_401601(r9_8);
        }
        break;
        addr_401715_5:
        ++rbx10;
        if (rbx10 < v12) {
            rax18 = v13;
            if (reinterpret_cast<uint64_t>(rax18) >= reinterpret_cast<uint64_t>(v14)) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<void**>(v11 + rbx10 - 1) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> reinterpret_cast<uint64_t>(rsi20))) 
                    goto addr_401834_15; else 
                    goto addr_401755_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_401601(r9_8);
                }
                *reinterpret_cast<int32_t*>(&r10_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = 0;
                while (v25 == 34) {
                    fun_401601(r9_8);
                    ++r10_24;
                }
                rax26 = r12_22;
                if (!r10_24) 
                    goto addr_40179c_25;
            } else {
                addr_401834_15:
                fun_40162c(r9_8, rsi20);
                fun_401601(r9_8);
                continue;
            }
            while (rax26 > 1) {
                fun_40162c(r9_8, 92);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_4017f1_29;
            fun_40162c(r9_8, 34);
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
                fun_40162c(r9_8, 34);
            }
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r10_28 % 3 == 0);
            continue;
            addr_40179c_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_40162c(r9_8, 92);
            }
        }
        addr_401849_35:
        fun_40162c(r9_8, 0);
        continue;
        addr_401755_16:
        goto addr_401849_35;
    }
    fun_40162c(r9_8, 0);
    if (r11_7) {
        r11_30 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(r11_7) - 1);
        rax31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v13) - reinterpret_cast<uint64_t>(r13_9));
        if (reinterpret_cast<uint64_t>(rax31) > reinterpret_cast<uint64_t>(r11_30)) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r13_9) + reinterpret_cast<uint64_t>(rax31)) = 0;
    }
    if (v12) {
        r8_32 = v12 - 1;
        if (r8_32 > rbx10) {
            r8_32 = rbx10;
        }
        v11[r8_32] = 0;
    }
    return *reinterpret_cast<int32_t*>(&rbx10);
}

uint64_t fun_401a09(uint32_t edi, uint32_t* rsi, struct s0* rdx, signed char* rcx) {
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
        ecx7 = *reinterpret_cast<int32_t*>(0x401af7 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
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

uint32_t fun_4019fa(struct s0* rdi, uint32_t* rsi, struct s0* rdx, signed char* rcx, uint64_t r8, ...);

void fun_401601(struct s0* rdi) {
    struct s0* rdi2;
    uint32_t eax3;
    signed char* rcx4;
    uint64_t r8_5;
    uint32_t eax6;
    void* rax7;

    rdi2 = *reinterpret_cast<struct s0**>(&rdi->f0);
    eax3 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s0**>(&rdi2->f0));
    if (*reinterpret_cast<uint16_t*>(&eax3) > 0xd7ff) {
        eax6 = fun_4019fa(rdi2, &rdi->f18, rdi, rcx4, r8_5);
    } else {
        rdi->f18 = eax3;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<struct s0**>(&rdi->f0) = reinterpret_cast<struct s0*>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s0**>(&rdi->f0)) + (reinterpret_cast<int64_t>(rax7) + reinterpret_cast<int64_t>(rax7)));
    return;
}

void fun_40162c(struct s0* rdi, uint32_t* rsi) {
    struct s0* rdx3;
    signed char* r8_4;
    uint64_t rax5;
    signed char* rcx6;
    signed char* rcx7;

    rdx3 = rdi;
    r8_4 = rdx3->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi)));
    if (*reinterpret_cast<uint32_t*>(&rsi) > 0x7f) {
        rax5 = fun_401a09(*reinterpret_cast<uint32_t*>(&rsi), rsi, rdx3, rcx6);
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

uint32_t fun_401a3c(struct s0* rdi, uint32_t* rsi, struct s0* rdx, signed char* rcx) {
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
        edx8 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s0**>(reinterpret_cast<uint16_t>(rdi) + rdx6 * 2));
        ecx9 = edx8;
        cx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx9) & 0xfc00);
    } while (cx10 == 0xdc00);
    if (cx10 == 0xd800) {
        *reinterpret_cast<uint32_t*>(&rax11) = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s0**>(reinterpret_cast<uint16_t>(rdi) + rax5 * 2));
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

uint64_t* fun_4010fb(uint64_t rdi, int64_t rsi, uint64_t* rdx, uint64_t* rcx) {
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

int32_t fun_40134d(int64_t rdi, void* rsi, int64_t* rdx) {
    return 42;
}

int64_t fun_401907(int64_t rdi);

void fun_401aa1(signed char dil);

uint32_t g403018 = 0;

uint32_t g403358 = 0;

void fun_40139b(int32_t edi, void* rsi, int64_t* rdx) {
    int32_t edi4;
    uint32_t eax5;
    int64_t rax6;

    fun_401907(0);
    edi4 = edi;
    fun_401aa1(*reinterpret_cast<signed char*>(&edi4));
    eax5 = g403018;
    g403358 = eax5;
    goto rax6;
}

uint32_t fun_4019fa(struct s0* rdi, uint32_t* rsi, struct s0* rdx, signed char* rcx, uint64_t r8, ...) {
    uint32_t eax6;

    eax6 = fun_401a3c(rdi, rsi, rdx, rcx);
    return eax6;
}

struct s1 {
    uint32_t f0;
    signed char[4] pad8;
    struct s1* f8;
};

struct s1* g403040 = reinterpret_cast<struct s1*>(0);

struct s2 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
};

struct s1* fun_0(struct s1* rdi, ...);

int64_t fun_401907(int64_t rdi) {
    int64_t r12_2;
    int64_t v3;
    int64_t rdx4;
    struct s1* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s2* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s1* r13_11;
    int64_t rdi12;

    r12_2 = rdi;
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
            } while (r12_2 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_2 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_2) 
                goto addr_401970_8;
            if (!r13_11) 
                goto addr_401995_10;
            rdi5 = r13_11;
        }
        rdi12 = rcx8->f18;
        rdx10(rdi12);
        continue;
        addr_401970_8:
        if (r13_11 && !1) {
            fun_0(rdi5);
        }
        g403040 = r13_11;
    }
    addr_401995_10:
    return v3;
}

int64_t fun_4013b4(struct s1* rdi, int64_t rsi) {
    uint32_t eax3;

    eax3 = g403018;
    g403358 = eax3;
    return 0xff;
}

uint32_t g40335c = 0;

int64_t g402010 = 0x1de8;

void fun_401aa1(signed char dil) {
    int1_t zf2;

    g40335c = g40335c | 4;
    zf2 = (g403000 & 4) == 0;
    if (zf2) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x401ad2]");
        __asm__("hlt ");
    } else {
        while (1) {
            g402010();
        }
    }
}

struct s3 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

void fun_401000(struct s3* rdi, uint64_t* rsi, uint64_t* rdx) {
    uint64_t* rcx4;
    uint64_t* r15_5;
    uint64_t r14_6;
    struct s3* r13_7;
    uint64_t r12_8;
    struct s3* rbx9;
    struct s3* rax10;
    uint64_t r12_11;
    uint64_t rax12;
    uint64_t rdi13;
    uint64_t* rax14;
    uint64_t rdx15;

    rcx4 = rdx;
    r15_5 = rsi;
    *reinterpret_cast<int32_t*>(&r14_6) = 0x400000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_6) + 4) = 0;
    r13_7 = rdi;
    *reinterpret_cast<int32_t*>(&r12_8) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = 0;
    rbx9 = rdi;
    while (rbx9->f8) {
        do {
            rax10 = rbx9;
            rbx9 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rbx9) + 24);
            if (!(rbx9->f10 - 1)) 
                break;
        } while (rbx9->f8);
        goto addr_401049_5;
        rbx9 = rax10;
        addr_40104e_7:
        if (rbx9->f0 >= r12_8) {
            r12_8 = rbx9->f0;
        }
        r12_11 = r12_8 + 0xfff;
        while (1) {
            r12_8 = r12_11 & 0xfffffffffffff000;
            while (r12_8 < (rbx9->f8 + rbx9->f0 & 0xfffffffffffff000)) {
                while (r13_7->f8 && (r13_7->f10 == 1 || r13_7->f0 + r13_7->f8 < r12_8)) {
                    r13_7 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(r13_7) + 24);
                }
                if (r13_7->f0 > r12_8) 
                    goto addr_4010b1_15;
                rax12 = r13_7->f0 + r13_7->f8;
                if (rax12 > r12_8) 
                    goto addr_4010a8_17;
                addr_4010b1_15:
                rdi13 = r14_6;
                r14_6 = r14_6 + 0x1000;
                rax14 = fun_4010fb(rdi13, 3, r15_5, rcx4);
                rdx15 = r12_8;
                rcx4 = rcx4;
                r12_8 = r12_8 + 0x1000;
                *rax14 = rdx15 | 3;
            }
            break;
            addr_4010a8_17:
            r12_11 = rax12 + 0xfff;
        }
        rbx9 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rbx9) + 24);
        continue;
        addr_401049_5:
        goto addr_40104e_7;
    }
    return;
}

struct s4 {
    struct s4* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[45] pad78;
    unsigned char f4e;
    signed char[4] pad83;
    unsigned char f53;
    signed char[16] pad100;
    int32_t f64;
    unsigned char f65;
    unsigned char f66;
    int32_t f68;
    uint32_t f69;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    int32_t f70;
    unsigned char f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
};

struct s5 {
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

struct s6 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s7 {
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

struct s8 {
    signed char[32] pad32;
    int32_t f20;
};

struct s9 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s10 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s11 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s12 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s13 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s14 {
    signed char[111] pad111;
    signed char f6f;
};

signed char g401eae = 0;

struct s5* fun_10401e9f();

void fun_401af0(struct s4* rdi, int32_t esi, int16_t dx, struct s4* rcx, unsigned char* r8) {
    struct s4* rdx3;
    void* rsp6;
    int1_t cf7;
    void* al8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    struct s5* rax13;
    struct s6* rbx14;
    struct s7* rsi15;
    int1_t zf16;
    struct s4* rbp17;
    void* rsp18;
    struct s8* rbx19;
    int64_t* rsp20;
    void** rsp21;
    int64_t* rsp22;
    int64_t r11_23;
    int64_t* rsp24;
    int64_t rbx25;
    struct s4** rsp26;
    struct s5** rsp27;
    int64_t* rsp28;
    int64_t r10_29;
    void** rsp30;
    int64_t* rsp31;
    int64_t r13_32;
    int64_t* rsp33;
    int64_t r10_34;
    struct s4** rsp35;
    struct s5** rsp36;
    int64_t* rsp37;
    int64_t r11_38;
    struct s9* rbx39;
    struct s10* rbx40;
    struct s4* rsp41;
    uint1_t zf42;
    int1_t zf43;
    struct s12* rbx44;
    struct s13* rbx45;
    uint1_t zf46;
    struct s14* rbx47;
    unsigned char tmp8_48;
    uint1_t cf49;
    signed char bl50;
    int32_t tmp32_51;
    uint32_t tmp32_52;
    uint1_t cf53;
    void* rsp54;
    uint1_t cf55;
    uint1_t below_or_equal56;
    struct s4* rsp57;
    struct s4* rsp58;
    struct s4* r12_59;
    struct s4* rsp60;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    rsp6 = __zero_stack_offset();
    if (cf7) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s4**>(&rcx->f0) = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s4**>(&rcx->f0)) + reinterpret_cast<signed char>(al8));
        __asm__("rol byte [rcx], 0xc0");
        eax9 = eax10 + eax11;
        eax12 = eax9 + eax9;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12));
        *reinterpret_cast<signed char*>(&eax12) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax12) - 8) - 8) - 8) - 8) - 8);
        *reinterpret_cast<int32_t*>(&rax13) = eax12 + 0x5fc05fc + 0x5fc05fc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax13) | rbx14->f6f);
        if (1) {
            rcx->f6f = reinterpret_cast<unsigned char>(rcx->f6f & *reinterpret_cast<unsigned char*>(&rcx + 1));
            *reinterpret_cast<unsigned char*>(&rcx->f69) = 0;
            goto addr_401ba2_5;
        }
        __asm__("outsd ");
        if (0) {
            addr_401ba2_5:
        } else {
            __asm__("insb ");
            *reinterpret_cast<uint32_t*>(&rsi15) = *reinterpret_cast<unsigned char*>(&rcx->f69) * 0x706f430a;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
            zf16 = __undefined();
            if (!__undefined()) {
                if (!zf16) 
                    goto addr_401c22_9;
                if (__intrinsic()) 
                    goto addr_401bd8_11; else 
                    goto addr_401bb8_12;
            } else {
                *reinterpret_cast<int32_t*>(&rsp6) = *reinterpret_cast<int32_t*>(&rdi->f65) * 0x30322074;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp6) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx3 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3 + 1) ^ rax13->f0);
                *reinterpret_cast<unsigned char*>(&rdx3->f70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3->f70) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
                if (1) {
                    addr_401bc0_14:
                    if (1) {
                        goto addr_401be3_16;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbp17) = rsi15->f65 * 0x656c4120;
                    *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                    zf16 = __undefined();
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
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) & *reinterpret_cast<unsigned char*>(&rdx3));
    addr_401bd8_11:
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp18) = reinterpret_cast<uint32_t>(rbx19->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_401c48_23:
        *reinterpret_cast<int32_t*>(&rbp17) = rsi15->f20 * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        rsp20 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp18) - 8);
        *rsp20 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_401be3_16:
        rcx->f6e = 0;
        rax13->f75 = 0;
    }
    addr_401cbf_25:
    rsp21 = reinterpret_cast<void**>(rsp20 - 1);
    *reinterpret_cast<void***>(rsp21) = rsp21;
    rsp22 = reinterpret_cast<int64_t*>(rsp21 - 1);
    *rsp22 = r11_23;
    rsp24 = rsp22 - 1;
    *rsp24 = rbx25;
    rsi15->f4f = reinterpret_cast<unsigned char>(rsi15->f4f & *reinterpret_cast<unsigned char*>(&rax13));
    rsp26 = reinterpret_cast<struct s4**>(rsp24 - 1);
    *rsp26 = rdx3;
    rcx->f20 = reinterpret_cast<unsigned char>(rcx->f20 & *reinterpret_cast<unsigned char*>(&rax13));
    rsp27 = reinterpret_cast<struct s5**>(rsp26 - 8);
    *rsp27 = rax13;
    rsp28 = reinterpret_cast<int64_t*>(rsp27 - 1);
    *rsp28 = r10_29;
    rsp30 = reinterpret_cast<void**>(rsp28 - 1);
    *reinterpret_cast<void***>(rsp30) = rsp30;
    rsp31 = reinterpret_cast<int64_t*>(rsp30 - 1);
    *rsp31 = r13_32;
    rsp33 = rsp31 - 1;
    *rsp33 = r10_34;
    rax13->f55 = reinterpret_cast<unsigned char>(rax13->f55 & *reinterpret_cast<unsigned char*>(&rdx3));
    rsp35 = reinterpret_cast<struct s4**>(rsp33 - 1);
    *rsp35 = rdx3;
    rsp36 = reinterpret_cast<struct s5**>(rsp35 - 8);
    *rsp36 = rax13;
    rsp37 = reinterpret_cast<int64_t*>(rsp36 - 1);
    *rsp37 = r11_38;
    rbx39->f65 = reinterpret_cast<unsigned char>(rbx40->f65 & *reinterpret_cast<unsigned char*>(&rdx3));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
    rdi->f4e = reinterpret_cast<unsigned char>(rdi->f4e & *reinterpret_cast<unsigned char*>(&rax13));
    rsp41 = reinterpret_cast<struct s4*>(rsp37 - 1);
    *reinterpret_cast<struct s4**>(&rsp41->f0) = rbp17;
    *reinterpret_cast<unsigned char*>(&rax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax13) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65));
    zf42 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax13) == 0);
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & *reinterpret_cast<unsigned char*>(&rdx3));
    }
    __asm__("outsb ");
    if (1) {
        if (zf42) {
            __asm__("outsb ");
            if (zf42) {
                addr_401e94_32:
                goto addr_401e95_33;
            } else {
                if (0) {
                    addr_401e9c_35:
                } else {
                    __asm__("outsb ");
                    __asm__("insd ");
                    __asm__("outsb ");
                    if (zf42) {
                        addr_401e86_37:
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        goto addr_401e94_32;
                    } else {
                        if (zf42) {
                            goto addr_401ea8_40;
                        }
                    }
                }
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi15) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi15) + 0x6c) & *reinterpret_cast<unsigned char*>(&rax13));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                if (1) 
                    goto addr_401df6_44; else 
                    goto addr_401df6_44;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) & *reinterpret_cast<unsigned char*>(&rax13));
                zf43 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) == 0;
                if (1) {
                    if (zf43) {
                        addr_401e95_33:
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                        *reinterpret_cast<struct s4**>(&rdi->f0) = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s4**>(&rdi->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
                        goto addr_401e9c_35;
                    } else {
                        if (!zf43) {
                        }
                    }
                } else {
                    addr_401dcc_49:
                    __asm__("outsd ");
                    __asm__("outsb ");
                    *reinterpret_cast<unsigned char*>(&rax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax13) - 32);
                    goto addr_401dd0_50;
                }
            }
        }
    } else {
        addr_401d58_51:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax13) + 1) = 0xff;
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s11**>(&rdi))->f69) = 0;
        if (!*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s11**>(&rdi))->f69)) {
            goto addr_401dcc_49;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x69) = 0;
            if (1) {
                addr_401d89_54:
                rbx44->f6f = reinterpret_cast<unsigned char>(rbx45->f6f & *reinterpret_cast<unsigned char*>(&rdx3));
                zf46 = reinterpret_cast<uint1_t>(rbx47->f6f == 0);
                goto addr_401d8b_55;
            } else {
                if (0) {
                    addr_401ddd_57:
                    rbp17->f53 = reinterpret_cast<unsigned char>(rbp17->f53 & *reinterpret_cast<unsigned char*>(&rdx3));
                    *r8 = reinterpret_cast<unsigned char>(*r8 + *reinterpret_cast<unsigned char*>(&rax13));
                    goto addr_401de6_58;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_401dd0_50:
                        *reinterpret_cast<unsigned char*>(&rsi15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi15) | *r8);
                        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 ^ *reinterpret_cast<uint32_t*>(&rsi15));
                        *reinterpret_cast<int32_t*>(&rax13) = *reinterpret_cast<int32_t*>(&rax13) - 0x31303331;
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
    tmp8_48 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    cf49 = reinterpret_cast<uint1_t>(tmp8_48 < rax13->f0);
    rax13->f0 = tmp8_48;
    rsi15->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rsi15->f0 + bl50) + cf49);
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
    addr_401df6_44:
    tmp32_51 = *reinterpret_cast<int32_t*>(&rcx);
    *reinterpret_cast<int32_t*>(&rcx) = *reinterpret_cast<int32_t*>(&rax13);
    *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax13) = tmp32_51;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    tmp32_52 = rsi15->f72 + *reinterpret_cast<int32_t*>(&rax13);
    cf53 = reinterpret_cast<uint1_t>(tmp32_52 < rsi15->f72);
    rsi15->f72 = tmp32_52;
    zf46 = reinterpret_cast<uint1_t>(rsi15->f72 == 0);
    __asm__("outsb ");
    if (cf53 | zf46) {
        addr_401e69_65:
        rsp41 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(rsp41) - 8);
        *reinterpret_cast<struct s4**>(&rsp41->f0) = rdi;
        if (cf53) {
            addr_401ed6_66:
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            rax13->f801f0f = reinterpret_cast<unsigned char>(rax13->f801f0f + *reinterpret_cast<unsigned char*>(&rdx3));
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            rax13->f100ce0c = reinterpret_cast<unsigned char>(rax13->f100ce0c + *reinterpret_cast<unsigned char*>(&rdx3));
            __asm__("out 0x1, eax");
            *reinterpret_cast<struct s4**>(&rcx->f0) = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s4**>(&rcx->f0)) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax13) | 38) | 0xce));
        } else {
            if (zf46) {
                rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
                goto addr_401ed6_66;
            } else {
                goto addr_401e71_70;
            }
        }
    } else {
        if (cf53) {
            addr_401e71_70:
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
            goto addr_401e7c_72;
        } else {
            __asm__("outsb ");
            __asm__("insd ");
            __asm__("outsb ");
            if (!zf46) 
                goto addr_401e08_75;
        }
    }
    addr_401e5b_76:
    *reinterpret_cast<uint32_t*>(&rsp41) = rbp17->f6e * 0x71f0000;
    *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
    cf53 = __intrinsic();
    zf46 = __undefined();
    goto addr_401e69_65;
    addr_401e08_75:
    if (zf46) {
        addr_401e7c_72:
        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 + *reinterpret_cast<unsigned char*>(&rax13));
        *reinterpret_cast<struct s4**>(reinterpret_cast<unsigned char>(rsp41) - 8) = reinterpret_cast<struct s4*>(" ");
        rax13 = fun_10401e9f();
        rax13->f0 = reinterpret_cast<unsigned char>(rax13->f0 & *reinterpret_cast<unsigned char*>(&rax13));
        goto addr_401e86_37;
    } else {
        *reinterpret_cast<int32_t*>(&rbp17) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi15) + 0x67) * 0xbd005773;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65) + *reinterpret_cast<int32_t*>(&rax13));
        if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65)) {
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
    if (!zf46) {
    }
    addr_401de6_58:
    addr_401d71_61:
    *reinterpret_cast<int32_t*>(&rsp54) = rsi15->f20 * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp54) + 4) = 0;
    rdi->f6d = 0;
    *reinterpret_cast<uint32_t*>(&rsi15) = rbp17->f20 * 0x74206f74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
    rsp41 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsp54) - 8);
    *reinterpret_cast<struct s4**>(&rsp41->f0) = reinterpret_cast<struct s4*>(0x72462065);
    goto addr_401d89_54;
    addr_401bb8_12:
    if (zf16) {
        addr_401c22_9:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf55 = 0;
            goto addr_401c99_85;
        } else {
            *reinterpret_cast<void**>(&rcx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rcx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s4**>(&rdx3->f0)));
            cf55 = 0;
            zf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rcx) == 0);
            below_or_equal56 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf46));
            rsp57 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsp6) - 8);
            *reinterpret_cast<struct s4**>(&rsp57->f0) = rsp57;
            rsp41 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(rsp57) - 8);
            *reinterpret_cast<struct s4**>(&rsp41->f0) = reinterpret_cast<struct s4*>(0x70207369);
            if (0) {
                goto addr_401ca5_88;
            }
        }
    } else {
        addr_401bba_20:
        rbp17->f6d = 0;
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
        rcx->f6e = reinterpret_cast<unsigned char>(rcx->f6e & *reinterpret_cast<unsigned char*>(&rcx + 1));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x73)) {
            addr_401cb4_92:
            rsp58 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s4**>(&rsp58->f0) = r12_59;
            rcx = *reinterpret_cast<struct s4**>(&rsp58->f0);
            rsp20 = &rsp58->f8;
            rdi->f6d = reinterpret_cast<unsigned char>(rdi->f6d & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsi15->f49 = reinterpret_cast<unsigned char>(rsi15->f49 & *reinterpret_cast<unsigned char*>(&rax13));
            goto addr_401cbf_25;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp18) = *reinterpret_cast<unsigned char*>(&rdx3->f70) * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
            goto addr_401c48_23;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsp41) = reinterpret_cast<uint32_t>(rbp17->f64 * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
    cf55 = __intrinsic();
    zf46 = __undefined();
    below_or_equal56 = reinterpret_cast<uint1_t>(cf55 | zf46);
    if (cf55) {
        if (cf55) {
            addr_401d28_96:
            *reinterpret_cast<uint32_t*>(&rsp41) = *reinterpret_cast<uint32_t*>(&rbp17->f66);
            *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
            if (below_or_equal56) {
                *reinterpret_cast<unsigned char*>(&rax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax13) | rsi15->f6f);
                zf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax13) == 0);
                if (zf46) 
                    goto addr_401d99_99;
            } else {
                rcx->f20 = 0;
                *reinterpret_cast<int32_t*>(&rbp17) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi) + 0x70);
                *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_401d58_51;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
                    rdi->f4e = reinterpret_cast<unsigned char>(rdi->f4e & *reinterpret_cast<unsigned char*>(&rax13));
                    *reinterpret_cast<struct s4**>(reinterpret_cast<unsigned char>(rsp41) - 8) = rbp17;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65) & *reinterpret_cast<unsigned char*>(&rax13));
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
            if (!cf55) {
                rbp17->f6f = 0;
            }
        }
    } else {
        addr_401ca5_88:
        __asm__("outsb ");
        if (zf46) {
            if (!below_or_equal56) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x65) = 0;
                below_or_equal56 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x65) == 0)));
                goto addr_401d28_96;
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x66) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp60 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s4**>(&rsp60->f0) = rdx3;
            rsp41 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(rsp60) - 8);
            *reinterpret_cast<struct s4**>(&rsp41->f0) = rsp41;
            goto addr_401cb4_92;
        }
    }
    goto addr_401e08_75;
    addr_401d99_99:
    addr_401da9_104:
    addr_401d48_105:
    __asm__("insb ");
    rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & *reinterpret_cast<unsigned char*>(&rdx3));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
    rdi->f4e = reinterpret_cast<unsigned char>(rdi->f4e & *reinterpret_cast<unsigned char*>(&rax13));
    rsp41 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsp6) - 8);
    *reinterpret_cast<struct s4**>(&rsp41->f0) = rbp17;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x65) & *reinterpret_cast<unsigned char*>(&rax13));
    cf55 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_401bd3_113;
    goto addr_401c35_89;
    addr_401bd3_113:
    __asm__("insb ");
    rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & *reinterpret_cast<unsigned char*>(&rdx3));
}

struct s15 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s16 {
    signed char[111] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
};

struct s17 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s18 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s19 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s20 {
    signed char[111] pad111;
    signed char f6f;
};

struct s21 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s22 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_401b5d(struct s15* rdi, struct s16* rsi, int16_t dx, struct s18* rcx) {
    struct s17* rdx3;
    int1_t cf5;
    int1_t cf6;
    int1_t zf7;
    int1_t sf8;
    unsigned char ah9;
    struct s19* rbx10;
    int1_t zf11;
    struct s20* rbx12;
    void* rsp13;
    int1_t zf14;
    void** rax15;
    void** rax16;
    unsigned char ah17;
    struct s21* rbp18;
    struct s22* rbp19;
    unsigned char ah20;
    void* rax21;
    int64_t rbp22;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    if (cf5) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf6) {
        goto addr_401b84_4;
    }
    if (!zf7) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf8) 
        goto addr_401b69_7;
    addr_401b75_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi->f72 = reinterpret_cast<unsigned char>(rsi->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_401c02_12;
    } else {
        addr_401b84_4:
    }
    rdi->f41 = reinterpret_cast<unsigned char>(rdi->f41 & *reinterpret_cast<unsigned char*>(&rdx3));
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf14 = *reinterpret_cast<void**>(&rsp13) == *rax15;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp13)) <= reinterpret_cast<uint32_t>(*rax16)) 
        goto addr_401c89_15;
    addr_401c89_15:
    if (zf14) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf14) 
        goto addr_401c8e_18;
    rsi->f6f = reinterpret_cast<unsigned char>(rsi->f6f & ah17);
    addr_401c8e_18:
    rbp18->f76 = reinterpret_cast<unsigned char>(rbp19->f76 & ah20);
    addr_401c02_12:
    addr_401b69_7:
    *reinterpret_cast<unsigned char*>(&rdx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax21) + rbp22 * 2 + 0x69));
    if (1) {
        rdx3->f65 = 0;
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

struct s23 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s24 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s25 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s26 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_401b85() {
    void* rsp1;
    int1_t cf2;
    int1_t sf3;
    int1_t zf4;
    void** rax5;
    void** rax6;
    struct s23* rsi7;
    struct s24* rsi8;
    unsigned char al9;
    struct s25* rbx10;
    struct s26* rbx11;
    unsigned char dl12;

    rsp1 = __zero_stack_offset();
    if (cf2) {
        if (!sf3) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf4) 
            goto addr_401bf6_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp1)) < reinterpret_cast<int32_t>(*rax5)) {
            if (*reinterpret_cast<void**>(&rsp1) != *rax6) {
            }
        }
    }
    addr_401bf6_4:
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & al9);
    rbx10->f6f = reinterpret_cast<unsigned char>(rbx11->f6f & dl12);
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

struct s27 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s28 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s29 {
    signed char[111] pad111;
    signed char f6f;
};

struct s30 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s31 {
    signed char[78] pad78;
    unsigned char f4e;
};

void fun_401c03() {
    int1_t cf1;
    struct s27* rsi2;
    struct s28* rsi3;
    unsigned char al4;
    struct s29* rsi5;
    struct s30* rcx6;
    struct s31* rcx7;
    unsigned char al8;

    if (!cf1) {
        rsi2->f6f = reinterpret_cast<unsigned char>(rsi3->f6f & al4);
        if (rsi5->f6f) {
            rcx6->f4e = reinterpret_cast<unsigned char>(rcx7->f4e & al8);
        }
    }
}

struct s32 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_401c0c(struct s32* rdi) {
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

void fun_401c58() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s33 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s34 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s35 {
    signed char[115] pad115;
    signed char f73;
};

void fun_401c63() {
    struct s33* rbp1;
    struct s34* rbp2;
    unsigned char dh3;
    struct s35* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_401c6e(int64_t rdi) {
    int1_t zf2;

    if (!zf2) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_401cf8() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s36 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s37 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_401d11() {
    struct s36* rax1;
    struct s37* rax2;
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

struct s38 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s39 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_401dad() {
    struct s38* rsi1;
    struct s39* rsi2;
    unsigned char al3;

    __asm__("outsb ");
    if (__undefined()) 
        goto "nvironmentStringsW";
    if (__undefined()) 
        goto 0x401de6;
    rsi1->f69 = reinterpret_cast<unsigned char>(rsi2->f69 & al3);
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

void fun_401e3d(int64_t rdi) {
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

struct s40 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_401ef6(struct s40* rdi) {
    rdi->fc = rdi->fc + *reinterpret_cast<int32_t*>(&rdi);
}

void fun_401efa() {
    int64_t rcx1;
    int64_t rcx2;
    signed char al3;

    *reinterpret_cast<signed char*>(rcx1 + 0x66108080) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx2 + 0x66108080) + al3);
}

void fun_40114f(uint64_t rdi) {
    uint64_t* rax2;

    rax2 = fun_4010fb(rdi, 3, 0x6f000, 0x3220);
    *rax2 = *rax2 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_401214() {
    return 0;
}

void fun_401240() {
    return;
}

uint32_t g403020 = 0;

int64_t fun_4019e2() {
    int64_t rax1;
    uint32_t eax2;
    uint32_t eax3;
    int1_t cf4;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 >> 16 & 0xfff | eax3 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    cf4 = *reinterpret_cast<uint16_t*>(&rax1) < 0xfff;
    if (!cf4) {
        *reinterpret_cast<uint32_t*>(&rax1) = g403020;
    } else {
        __asm__("syscall ");
        if (!cf4) {
            return rax1;
        }
    }
    g403358 = *reinterpret_cast<uint32_t*>(&rax1);
    return 0xff;
}

struct s41 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s42 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s43 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_40117b(struct s41* rdi) {
    struct s41* r9_2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s42* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s42* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s42* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s43* rax18;

    r9_2 = rdi;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_2) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s42*>(&r9_2->f18);
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
                    rdi15 = reinterpret_cast<struct s42*>(&rdi15->pad8);
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
            rax18 = reinterpret_cast<struct s43*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_2));
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
    g403000 = 8;
    r12_2 = *reinterpret_cast<int32_t*>(&v1);
    r13_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    r14_4 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r12_2 * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi5) = 0x402010;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx6) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    while (rcx6) {
        --rcx6;
        *rdi5 = reinterpret_cast<int64_t>(fun_401214);
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
    fun_401297();
    g40335c = g40335c | 1;
    *reinterpret_cast<int32_t*>(&rax9) = 0x402008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (0x402008 != rax9) {
        *rax9();
        ++rax9;
    }
    eax10 = fun_40134d(r12_2, r13_3, r14_4);
    fun_40139b(eax10, r13_3, r14_4);
}

int64_t fun_40186a() {
    return 0x403358;
}

void fun_40199d() {
    uint64_t rax1;
    int16_t ax2;

    *reinterpret_cast<int32_t*>(&rax1) = ax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax1) < 0) 
        goto 0x4019bf;
    __asm__("syscall ");
    if (rax1 < 0xfffffffffffff001) {
        return;
    }
}

void fun_401ad0() {
    goto 0x401acf;
}

void fun_401223() {
    goto 0x401222;
}

void fun_40124e(int64_t rdi) {
    int1_t zf2;

    zf2 = rdi == 0;
    if (!zf2) {
    }
    if (zf2) 
        goto 0x40125e;
    g403000 = 32;
}

struct s44 {
    uint32_t f0;
    signed char[12] pad16;
    struct s1* f10;
    int64_t f18;
    int64_t f20;
};

int64_t fun_401872(struct s1* rdi, int64_t rsi, int64_t rdx) {
    struct s1* r13_4;
    int64_t r12_5;
    struct s1* rbx6;
    int64_t rax7;
    struct s44* rbx8;
    int64_t rax9;
    struct s1* rax10;

    r13_4 = rdi;
    r12_5 = rsi;
    rbx6 = g403040;
    if (!rbx6) {
        rbx6 = reinterpret_cast<struct s1*>(0x403048);
        g403040 = reinterpret_cast<struct s1*>(0x403048);
    }
    if (rbx6->f0 != 0xffffffff) {
        addr_4018d9_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(~rbx6->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        rbx6->f0 = rbx6->f0;
        rbx8 = reinterpret_cast<struct s44*>(reinterpret_cast<int64_t>(rbx6) + rax7 * 24);
        *reinterpret_cast<int32_t*>(&rax9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        rbx8->f10 = r13_4;
        rbx8->f18 = r12_5;
        rbx8->f20 = rdx;
    } else {
        if (1 || (*reinterpret_cast<int32_t*>(&rsi) = 0x310, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0, *reinterpret_cast<int32_t*>(&rdi) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = 0, rax10 = fun_0(1, 1), rax10 == 0)) {
            rax9 = fun_4013b4(rdi, rsi);
        } else {
            rax10->f8 = rbx6;
            g403040 = rax10;
            rbx6 = rax10;
            goto addr_4018d9_4;
        }
    }
    return rax9;
}

int64_t g402038 = 0x1e4c;

int64_t g402030 = 0x1e3c;

int64_t g402040 = 0x1e68;

int64_t g402020 = 0x1e10;

int64_t g402028 = 0x1e22;

int64_t g402018 = 0x1df6;

void fun_4013c5() {
    void* rbp1;
    int32_t eax2;
    void* r9_3;
    struct s0* rax4;
    struct s0* rax5;
    struct s0* rdi6;
    struct s0* rdx7;
    struct s0* r13_8;
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
    struct s0* rdx21;
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
    eax2 = reinterpret_cast<int32_t>(g402038());
    if (!eax2) {
        g402030();
        r9_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) - 0x8030);
        g402040();
        g402010();
    }
    *reinterpret_cast<int32_t*>(&g403000) = 4;
    rax4 = reinterpret_cast<struct s0*>(g402020());
    rax5 = reinterpret_cast<struct s0*>(g402028());
    rdi6 = rax4;
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(&rdx7 + 2) = 0;
    r13_8 = rax5;
    fun_40165c(rdi6, reinterpret_cast<int64_t>(rbp1) - 0xc02f, 0x3fff, reinterpret_cast<int64_t>(rbp1) - 0xd030, 0x200, r9_3);
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (rcx10 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(v11) + reinterpret_cast<int64_t>(rax9)), *reinterpret_cast<signed char*>(&rdx7) = *rcx10, !!*reinterpret_cast<signed char*>(&rdx7)) {
        if (*reinterpret_cast<signed char*>(&rdx7) == 92) {
            *rcx10 = 47;
        }
        rax9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax9) + 1);
    }
    eax12 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s0**>(&r13_8->f0));
    if (*reinterpret_cast<uint16_t*>(&eax12) > 0xd7ff) {
        rsi13 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) - 0xe044);
        rdi6 = r13_8;
        eax14 = fun_4019fa(rdi6, rsi13, rdx7, rcx10, 0x200, rdi6, rsi13, rdx7, rcx10, 0x200);
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
    rdx21 = reinterpret_cast<struct s0*>(reinterpret_cast<uint16_t>(r13_8) + (reinterpret_cast<int64_t>(rax16) + reinterpret_cast<int64_t>(rax16)));
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
                rax25 = fun_401a09(*reinterpret_cast<uint32_t*>(&rdi6), rsi19, rdx21, rcx17);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx17) >= reinterpret_cast<uint64_t>(r10_18)) 
                    break;
                ++rcx17;
                rax25 = rax25 >> 8;
            } while (rax25);
            eax26 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s0**>(&rdx21->f0));
            if (*reinterpret_cast<uint16_t*>(&eax26) > 0xd7ff) {
                rdi6 = rdx21;
                eax27 = fun_4019fa(rdi6, rsi19, rdx21, rcx17, r8_20);
            } else {
                v15 = eax26;
                eax27 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax28) = eax27;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
            rdx21 = reinterpret_cast<struct s0*>(reinterpret_cast<uint16_t>(rdx21) + (reinterpret_cast<int64_t>(rax28) + reinterpret_cast<int64_t>(rax28)));
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
    g402018(rdi6, rsi19);
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
