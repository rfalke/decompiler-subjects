
uint64_t g140003000 = 0x2b992ddfa232;

int64_t sprintf = 0x2540;

int32_t g1400021f0 = 0x202020;

void fun_140001b36(uint64_t rcx, signed char dl, int64_t r8);

int64_t printf = 0x2554;

int32_t fun_140001300(uint64_t rcx, void* rdx, int64_t r8, uint64_t r9);

int32_t fun_140001000(void* rcx, uint32_t edx, uint32_t r8d, uint64_t r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    uint32_t edi8;
    void* rbp9;
    void* rsp10;
    void* r12_11;
    uint32_t r13d12;
    void* rbx13;
    void* rsi14;
    int32_t edx15;
    int64_t r8_16;
    uint64_t rcx17;
    int32_t v18;
    uint64_t rcx19;
    int64_t rcx20;
    void* rax21;
    void* rbx22;
    void* rdi23;
    uint32_t ecx24;
    uint32_t edx25;
    int64_t rdx26;
    int64_t r14_27;
    void* rdx28;
    int32_t eax29;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x80);
    rax6 = g140003000;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    edi8 = r8d;
    rbp9 = rcx;
    sprintf();
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    if (reinterpret_cast<int32_t>(edi8) > reinterpret_cast<int32_t>(16)) {
        edi8 = 16;
    }
    *reinterpret_cast<uint32_t*>(&r12_11) = 0;
    r13d12 = 0;
    rbx13 = reinterpret_cast<void*>(0);
    rsi14 = reinterpret_cast<void*>(static_cast<int64_t>(reinterpret_cast<int32_t>(edi8)));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi8 == 0)) {
        addr_14000109a_4:
        edx15 = g1400021f0;
        *reinterpret_cast<uint32_t*>(&r8_16) = 16 - r13d12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
    } else {
        r13d12 = *reinterpret_cast<uint32_t*>(&rsi14);
        do {
            *reinterpret_cast<uint32_t*>(&r8_16) = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx13) + reinterpret_cast<uint64_t>(rbp9));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
            sprintf();
            rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
            rbx13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx13) + 1);
        } while (reinterpret_cast<int64_t>(rbx13) < reinterpret_cast<int64_t>(rsi14));
        if (*reinterpret_cast<int32_t*>(&rsi14) >= reinterpret_cast<int32_t>(16)) 
            goto addr_1400010c6_8; else 
            goto addr_14000109a_4;
    }
    do {
        rcx17 = 0xffffffffffffffff;
        do {
            if (!*reinterpret_cast<int32_t*>(&rcx17)) 
                break;
            *reinterpret_cast<int32_t*>(&rcx17) = *reinterpret_cast<int32_t*>(&rcx17) - 1;
            rsi14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi14) + 1);
        } while (*reinterpret_cast<signed char*>(&v18));
        --r8_16;
        v18 = edx15;
    } while (r8_16);
    addr_1400010c6_8:
    rcx19 = 0xffffffffffffffff;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx19)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(&rcx19) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
        rsi14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi14) + 1);
    } while (*reinterpret_cast<signed char*>(&v18));
    rcx20 = reinterpret_cast<int64_t>(~rcx19) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsp10) + static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rcx20)) + 32) = 0x7c2020;
    rax21 = reinterpret_cast<void*>(0);
    rbx22 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rcx20) + 3));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi14) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rsi14 == 0))) {
        rdi23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) + reinterpret_cast<uint64_t>(rbx22) + 32);
        *reinterpret_cast<uint32_t*>(&r12_11) = *reinterpret_cast<uint32_t*>(&rsi14);
        do {
            ecx24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax21) + reinterpret_cast<uint64_t>(rbp9));
            if (*reinterpret_cast<unsigned char*>(&ecx24) < 32 || (edx25 = *reinterpret_cast<unsigned char*>(&ecx24), *reinterpret_cast<unsigned char*>(&ecx24) > 0x7e)) {
                edx25 = 46;
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi23) + reinterpret_cast<uint64_t>(rax21)) = *reinterpret_cast<signed char*>(&edx25);
            rax21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax21) + 1);
        } while (reinterpret_cast<int64_t>(rax21) < reinterpret_cast<int64_t>(rsi14));
    }
    rdx26 = *reinterpret_cast<int32_t*>(&r12_11);
    if (rdx26 < 16) {
        r14_27 = 16 - rdx26;
        r8_16 = r14_27;
        fun_140001b36(reinterpret_cast<uint64_t>(rsp10) + (rdx26 + reinterpret_cast<uint64_t>(rbx22)) + 32, 32, r8_16);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
        *reinterpret_cast<uint32_t*>(&r12_11) = *reinterpret_cast<uint32_t*>(&r12_11) + *reinterpret_cast<uint32_t*>(&r14_27);
    }
    rdx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) + 32);
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp10) + (*reinterpret_cast<int32_t*>(&r12_11) + reinterpret_cast<uint64_t>(rbx22)) + 32) = 0x7c;
    printf("%s\n", rdx28, r8_16);
    eax29 = fun_140001300(v7 ^ reinterpret_cast<uint64_t>(rsp10) - 8 + 8, rdx28, r8_16, r9);
    return eax29;
}

int64_t memset = 0x281e;

void fun_140001b36(uint64_t rcx, signed char dl, int64_t r8) {
    goto memset;
}

int64_t RtlCaptureContext = 0x278c;

int64_t g1400031e8 = 0;

uint64_t fun_140001aac(int64_t rcx, void* rdx);

void* g140003188 = reinterpret_cast<void*>(0);

void fun_140001aa6();

int64_t g140003060 = 0;

uint64_t g140003170 = 0;

int32_t g140003050 = 0;

int32_t g140003054 = 0;

int64_t IsDebuggerPresent = 0x274a;

int32_t g1400030e8 = 0;

void fun_140001a88(int64_t rcx, void* rdx, int64_t r8, uint64_t r9);

int64_t SetUnhandledExceptionFilter = 0x272c;

int64_t UnhandledExceptionFilter = 0x2710;

int64_t GetCurrentProcess = 0x26fc;

int64_t TerminateProcess = 0x26e8;

int32_t fun_140001300(uint64_t rcx, void* rdx, int64_t r8, uint64_t r9) {
    int1_t zf5;
    int32_t eax6;
    void* rsp7;
    int64_t r11_8;
    int64_t r8_9;
    void* rdx10;
    int64_t rcx11;
    uint64_t rax12;
    void* v13;
    int64_t rax14;
    int32_t eax15;
    int64_t rcx16;
    int1_t zf17;
    int64_t rax18;
    int32_t eax19;

    zf5 = rcx == g140003000;
    if (zf5) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return eax6;
        }
    }
    RtlCaptureContext(0x1400030f0);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x88 - 8 + 8);
    r11_8 = g1400031e8;
    *reinterpret_cast<int32_t*>(&r8_9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
    rdx10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) + 96);
    rcx11 = r11_8;
    rax12 = fun_140001aac(rcx11, rdx10);
    if (!rax12) {
        g1400031e8 = reinterpret_cast<int64_t>(__return_address());
        g140003188 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 + 0x88 + 8);
    } else {
        r9 = rax12;
        r8_9 = r11_8;
        rdx10 = v13;
        *reinterpret_cast<int32_t*>(&rcx11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
        fun_140001aa6();
    }
    rax14 = g1400031e8;
    g140003060 = rax14;
    g140003170 = rcx;
    g140003050 = 0xc0000409;
    g140003054 = 1;
    eax15 = reinterpret_cast<int32_t>(IsDebuggerPresent(rcx11, rdx10, r8_9, r9));
    g1400030e8 = eax15;
    fun_140001a88(1, rdx10, r8_9, r9);
    SetUnhandledExceptionFilter();
    rcx16 = reinterpret_cast<int64_t>("P0");
    UnhandledExceptionFilter("P0", rdx10, r8_9, r9);
    zf17 = g1400030e8 == 0;
    if (zf17) {
        *reinterpret_cast<int32_t*>(&rcx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
        fun_140001a88(1, rdx10, r8_9, r9);
    }
    rax18 = reinterpret_cast<int64_t>(GetCurrentProcess(rcx16, rdx10, r8_9, r9));
    eax19 = reinterpret_cast<int32_t>(TerminateProcess(rax18, 0xc0000409, r8_9, r9));
    return eax19;
}

int64_t _stat64i32 = 0x2578;

int64_t fopen = 0x255e;

int64_t fread = 0x2566;

int64_t fclose = 0x256e;

int64_t perror = 0x254a;

int32_t fun_140001190(int64_t rcx) {
    void* rsp2;
    uint64_t rax3;
    uint64_t v4;
    void* rdx5;
    int32_t eax6;
    void* rsp7;
    void* rdx8;
    uint64_t rax9;
    void* rsp10;
    uint64_t rsi11;
    uint32_t ebx12;
    uint32_t v13;
    uint64_t r9_14;
    int64_t r8_15;
    int64_t rax16;
    int64_t rdi17;
    uint32_t v18;
    void* rsp19;
    int32_t eax20;
    int64_t r8_21;
    uint64_t r9_22;
    int32_t eax23;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x70);
    rax3 = g140003000;
    v4 = rax3 ^ reinterpret_cast<uint64_t>(rsp2);
    rdx5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp2) + 32);
    eax6 = reinterpret_cast<int32_t>(_stat64i32());
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp2) - 8 + 8);
    if (!eax6) {
        rdx8 = reinterpret_cast<void*>("rb");
        rax9 = reinterpret_cast<uint64_t>(fopen(rcx, "rb"));
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
        rsi11 = rax9;
        if (rax9) {
            ebx12 = 0;
            if (v13 > 0) {
                do {
                    *reinterpret_cast<uint32_t*>(&rdx8) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
                    r9_14 = rsi11;
                    *reinterpret_cast<uint32_t*>(&r8_15) = 16;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0;
                    rax16 = reinterpret_cast<int64_t>(fread(reinterpret_cast<uint64_t>(rsp10) + 80));
                    rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
                    rdi17 = rax16;
                    if (!*reinterpret_cast<uint32_t*>(&rax16)) 
                        break;
                    *reinterpret_cast<uint32_t*>(&r8_15) = *reinterpret_cast<uint32_t*>(&rax16);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0;
                    *reinterpret_cast<uint32_t*>(&rdx8) = ebx12;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
                    fun_140001000(reinterpret_cast<uint64_t>(rsp10) + 80, *reinterpret_cast<uint32_t*>(&rdx8), *reinterpret_cast<uint32_t*>(&r8_15), r9_14);
                    rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
                    ebx12 = ebx12 + *reinterpret_cast<int32_t*>(&rdi17);
                } while (ebx12 < v18);
            }
            fclose(rsi11, rdx8, r8_15, r9_14);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
        } else {
            perror(rcx, "rb");
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
        }
        eax20 = fun_140001300(v4 ^ reinterpret_cast<uint64_t>(rsp19), rdx8, r8_15, r9_14);
        return eax20;
    } else {
        perror(rcx, rdx5);
        eax23 = fun_140001300(v4 ^ reinterpret_cast<uint64_t>(rsp7) - 8 + 8, rdx5, r8_21, r9_22);
        return eax23;
    }
}

int64_t _amsg_exit = 0x2592;

void fun_1400017ac(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    goto _amsg_exit;
}

int64_t _initterm_e = 0x2608;

int32_t fun_1400019c8(int64_t rcx, int64_t rdx) {
    goto _initterm_e;
}

int64_t _initterm = 0x25fc;

void fun_1400019c2(int64_t rcx, int64_t rdx) {
    goto _initterm;
}

struct s0 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

uint32_t fun_140001900(struct s0* rcx);

struct s1 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[20] pad36;
    uint32_t f36;
};

struct s2 {
    signed char[60] pad60;
    int32_t f60;
};

struct s1* fun_140001930(struct s2* rcx, uint64_t rdx);

uint32_t fun_140001980(int64_t rcx, int64_t rdx) {
    struct s1* rax3;

    *reinterpret_cast<uint32_t*>(&rax3) = fun_140001900(0x140000000);
    if (*reinterpret_cast<uint32_t*>(&rax3) && (rax3 = fun_140001930(0x140000000, rcx - 0x140000000), !!rax3)) {
        *reinterpret_cast<uint32_t*>(&rax3) = ~(rax3->f36 >> 31) & 1;
    }
    return *reinterpret_cast<uint32_t*>(&rax3);
}

int64_t RtlVirtualUnwind = 0x275e;

void fun_140001aa6() {
    goto RtlVirtualUnwind;
}

int64_t __crt_debugger_hook = 0x267a;

void fun_140001a88(int64_t rcx, void* rdx, int64_t r8, uint64_t r9) {
    goto __crt_debugger_hook;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int64_t terminate_YAXXZ = 0x2690;

void fun_140001a8e() {
    goto terminate_YAXXZ;
}

struct s3 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s1* fun_140001930(struct s2* rcx, uint64_t rdx) {
    uint32_t r9d3;
    uint64_t r10_4;
    struct s3* r8_5;
    int64_t rax6;
    uint32_t r11d7;
    struct s1* rcx8;
    uint64_t rdx9;
    uint64_t rax10;

    r9d3 = 0;
    r10_4 = rdx;
    r8_5 = reinterpret_cast<struct s3*>(rcx->f60 + reinterpret_cast<int64_t>(rcx));
    *reinterpret_cast<uint32_t*>(&rax6) = r8_5->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    r11d7 = r8_5->f6;
    rcx8 = reinterpret_cast<struct s1*>(rax6 + reinterpret_cast<int64_t>(r8_5) + 24);
    if (!r11d7) {
        addr_14000196f_2:
        return 0;
    } else {
        do {
            *reinterpret_cast<int32_t*>(&rdx9) = rcx8->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
            if (r10_4 < rdx9) 
                continue;
            *reinterpret_cast<int32_t*>(&rax10) = rcx8->f8 + *reinterpret_cast<int32_t*>(&rdx9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
            if (r10_4 < rax10) 
                break;
            ++r9d3;
            ++rcx8;
        } while (r9d3 < r11d7);
        goto addr_14000196f_2;
    }
    return rcx8;
}

struct s4 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

uint32_t fun_140001900(struct s0* rcx) {
    struct s4* rcx2;
    uint32_t eax3;

    if (rcx->f0 == 0x5a4d) {
        rcx2 = reinterpret_cast<struct s4*>(rcx->f60 + reinterpret_cast<int64_t>(rcx));
        eax3 = 0;
        if (rcx2->f0 == 0x4550) {
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(rcx2->f24 == 0x20b);
        }
        return eax3;
    } else {
        return 0;
    }
}

int64_t fun_140001290(int32_t ecx, int64_t* rdx, int64_t r8) {
    int64_t rdi4;
    int64_t rsi5;
    int32_t ebx6;
    int64_t* rbp7;
    int64_t rcx8;
    int32_t eax9;
    int64_t rax10;

    *reinterpret_cast<int32_t*>(&rdi4) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    rsi5 = ecx;
    ebx6 = 0;
    rbp7 = rdx;
    if (1 < rsi5) {
        do {
            rcx8 = rbp7[rdi4];
            eax9 = fun_140001190(rcx8);
            ++rdi4;
            ebx6 = ebx6 + eax9;
        } while (rdi4 < rsi5);
    }
    *reinterpret_cast<int32_t*>(&rax10) = ebx6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    return rax10;
}

void fun_14000187c() {
    int64_t* rbx1;
    int64_t rax2;

    rbx1 = reinterpret_cast<int64_t*>(0x140002260);
    while (reinterpret_cast<uint64_t>(rbx1) < 0x140002260) {
        rax2 = *rbx1;
        if (rax2) {
            rax2();
        }
        ++rbx1;
    }
    return;
}

int64_t fun_1400019d0() {
    return 0;
}

int64_t RtlLookupFunctionEntry = 0x2772;

uint64_t fun_140001aac(int64_t rcx, void* rdx) {
    goto RtlLookupFunctionEntry;
}

int64_t _unlock = 0x26a4;

void fun_140001a94(int64_t rcx, void* rdx, void* r8) {
    goto _unlock;
}

int64_t fun_1400017b4(int64_t rcx);

int64_t fun_140001864(int64_t rcx) {
    int64_t rax2;
    int64_t rax3;
    int64_t rax4;

    rax2 = fun_1400017b4(rcx);
    rax3 = -rax2;
    *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(-(*reinterpret_cast<uint32_t*>(&rax3) - (*reinterpret_cast<uint32_t*>(&rax3) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) < *reinterpret_cast<uint32_t*>(&rax3) + reinterpret_cast<uint1_t>(!!rax2))))) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

int64_t _lock = 0x26bc;

void fun_140001aa0(int64_t rcx) {
    goto _lock;
}

int64_t __dllonexit = 0x26ae;

int64_t fun_140001a9a(int64_t rcx, void* rdx, void* r8) {
    goto __dllonexit;
}

int64_t _XcptFilter = 0x25c8;

void fun_1400018f2(int64_t rcx, int32_t** rdx) {
    goto _XcptFilter;
}

int64_t GetSystemTimeAsFileTime = 0x27f6;

int64_t GetCurrentProcessId = 0x27e0;

int64_t GetCurrentThreadId = 0x27ca;

int64_t GetTickCount = 0x27ba;

int64_t QueryPerformanceCounter = 0x27a0;

int64_t g140003008 = 0xffffd466d2205dcd;

void fun_1400019d4() {
    void* rsp1;
    uint64_t rax2;
    void* rcx3;
    int32_t eax4;
    uint64_t r11_5;
    int32_t eax6;
    uint64_t r11_7;
    int32_t eax8;
    uint64_t r11_9;
    uint64_t r11_10;
    uint64_t v11;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    rax2 = g140003000;
    if (rax2 == 0x2b992ddfa232) {
        rcx3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) + 48);
        GetSystemTimeAsFileTime(rcx3);
        eax4 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx3));
        *reinterpret_cast<int32_t*>(&r11_5) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_5) + 4) = 0;
        eax6 = reinterpret_cast<int32_t>(GetCurrentThreadId(rcx3));
        *reinterpret_cast<int32_t*>(&r11_7) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_7) + 4) = 0;
        eax8 = reinterpret_cast<int32_t>(GetTickCount(rcx3));
        *reinterpret_cast<int32_t*>(&r11_9) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_9) + 4) = 0;
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rsp1) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 56);
        r11_10 = (v11 ^ (r11_5 ^ r11_7 ^ r11_9)) & 0xffffffffffff;
        if (r11_10 == 0x2b992ddfa232) {
            r11_10 = 0x2b992ddfa233;
        }
        g140003000 = r11_10;
        g140003008 = reinterpret_cast<int64_t>(~r11_10);
    } else {
        g140003008 = reinterpret_cast<int64_t>(~rax2);
    }
    return;
}

int64_t g1400035e8;

int64_t _decode_pointer = 0x26ce;

int64_t g1400035e0;

int64_t _encode_pointer = 0x2656;

int64_t _onexit = 0x26c4;

int64_t fun_1400017b4(int64_t rcx) {
    int64_t rcx2;
    int64_t rax3;
    int64_t rcx4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rax7;
    int64_t rax8;
    void* rsp9;
    void* r8_10;
    void* rdx11;
    int64_t rax12;
    int64_t rax13;
    int64_t rax14;
    int64_t rax15;

    rcx2 = g1400035e8;
    rax3 = reinterpret_cast<int64_t>(_decode_pointer(rcx2));
    if (rax3 != -1) {
        fun_140001aa0(8);
        rcx4 = g1400035e8;
        rax5 = reinterpret_cast<int64_t>(_decode_pointer(rcx4));
        rcx6 = g1400035e0;
        rax7 = reinterpret_cast<int64_t>(_decode_pointer(rcx6));
        rax8 = reinterpret_cast<int64_t>(_encode_pointer(rcx));
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        r8_10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 64);
        rdx11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 56);
        rax12 = fun_140001a9a(rax8, rdx11, r8_10);
        rax13 = reinterpret_cast<int64_t>(_encode_pointer(rax5, rdx11, r8_10));
        g1400035e8 = rax13;
        rax14 = reinterpret_cast<int64_t>(_encode_pointer(rax7, rdx11, r8_10));
        g1400035e0 = rax14;
        fun_140001a94(8, rdx11, r8_10);
        rax15 = rax12;
    } else {
        rax15 = reinterpret_cast<int64_t>(_onexit(rcx));
    }
    return rax15;
}

struct s6 {
    signed char[8] pad8;
    int32_t f8;
};

struct s5 {
    signed char[8] pad8;
    int64_t f8;
    struct s6* f16;
};

struct s7 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
};

struct s8 {
    signed char[3] pad3;
    unsigned char f3;
};

int32_t fun_140001ab4(void* rcx, struct s5* rdx, struct s7* r8) {
    void* r9_4;
    void* r10_5;
    struct s6* rax6;
    int64_t rcx7;
    struct s8* rcx8;
    uint64_t r9_9;
    uint64_t rcx10;
    int1_t zf11;
    void* rsp12;
    int64_t r11_13;
    int64_t r8_14;
    void* rdx15;
    int64_t rcx16;
    uint64_t rax17;
    void* v18;
    int64_t rax19;
    int32_t eax20;
    int64_t rcx21;
    int1_t zf22;
    int64_t rax23;
    int32_t eax24;

    r9_4 = rcx;
    r10_5 = rcx;
    if (r8->f0 & 4) {
        r10_5 = reinterpret_cast<void*>(r8->f4 + reinterpret_cast<uint64_t>(rcx) & reinterpret_cast<uint64_t>(static_cast<int64_t>(-r8->f8)));
    }
    rax6 = rdx->f16;
    *reinterpret_cast<int32_t*>(&rcx7) = rax6->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    rcx8 = reinterpret_cast<struct s8*>(rcx7 + rdx->f8);
    if (rcx8->f3 & 15) {
        rax6 = reinterpret_cast<struct s6*>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(rcx8->f3) & 0xfffffff0)));
        r9_4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r9_4) + reinterpret_cast<uint64_t>(rax6));
    }
    r9_9 = reinterpret_cast<uint64_t>(r9_4) ^ *reinterpret_cast<uint64_t*>((r8->f0 & 0xfffffff8) + reinterpret_cast<uint64_t>(r10_5));
    rcx10 = r9_9;
    zf11 = rcx10 == g140003000;
    if (zf11) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx10) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return *reinterpret_cast<int32_t*>(&rax6);
        }
    }
    RtlCaptureContext(0x1400030f0);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 + 32 + 8 - 0x88 - 8 + 8);
    r11_13 = g1400031e8;
    *reinterpret_cast<int32_t*>(&r8_14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = 0;
    rdx15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) + 96);
    rcx16 = r11_13;
    rax17 = fun_140001aac(rcx16, rdx15);
    if (!rax17) {
        g1400031e8 = reinterpret_cast<int64_t>(__return_address());
        g140003188 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 + 0x88 + 8);
    } else {
        r9_9 = rax17;
        r8_14 = r11_13;
        rdx15 = v18;
        *reinterpret_cast<int32_t*>(&rcx16) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
        fun_140001aa6();
    }
    rax19 = g1400031e8;
    g140003060 = rax19;
    g140003170 = rcx10;
    g140003050 = 0xc0000409;
    g140003054 = 1;
    eax20 = reinterpret_cast<int32_t>(IsDebuggerPresent(rcx16, rdx15, r8_14, r9_9));
    g1400030e8 = eax20;
    fun_140001a88(1, rdx15, r8_14, r9_9);
    SetUnhandledExceptionFilter();
    rcx21 = reinterpret_cast<int64_t>("P0");
    UnhandledExceptionFilter("P0", rdx15, r8_14, r9_9);
    zf22 = g1400030e8 == 0;
    if (zf22) {
        *reinterpret_cast<int32_t*>(&rcx21) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
        fun_140001a88(1, rdx15, r8_14, r9_9);
    }
    rax23 = reinterpret_cast<int64_t>(GetCurrentProcess(rcx21, rdx15, r8_14, r9_9));
    eax24 = reinterpret_cast<int32_t>(TerminateProcess(rax23, 0xc0000409, r8_14, r9_9));
    return eax24;
}

struct s9 {
    signed char[8] pad8;
    int64_t f8;
};

struct s9* g30;

int64_t g1400035d8;

int64_t Sleep = 0x26e0;

int32_t g1400035d0;

int32_t g140003044 = 0;

int64_t g1400035f0;

int64_t* __initenv = reinterpret_cast<int64_t*>(0x25f0);

int64_t g140003028 = 0;

int64_t* g140003030 = reinterpret_cast<int64_t*>(0);

int32_t g140003020 = 0;

int32_t g140003040 = 0;

int32_t g140003024 = 0;

int64_t exit = 0x25e8;

int64_t _cexit = 0x25de;

int64_t fun_140001385() {
    struct s9* rax1;
    int64_t rdi2;
    int32_t esi3;
    int1_t zf4;
    int64_t tmp64_5;
    int32_t eax6;
    int64_t rdx7;
    int64_t r8_8;
    int64_t r9_9;
    int32_t eax10;
    int64_t rdx11;
    int32_t eax12;
    int32_t eax13;
    int64_t rax14;
    int1_t zf15;
    uint32_t eax16;
    int64_t* rcx17;
    int64_t rax18;
    int64_t r8_19;
    int64_t* rdx20;
    int64_t rcx21;
    int1_t zf22;
    int1_t zf23;

    rax1 = g30;
    rdi2 = rax1->f8;
    esi3 = 0;
    while (1) {
        zf4 = g1400035d8 == rdi2;
        if (zf4) {
            tmp64_5 = g1400035d8;
            g1400035d8 = rdi2;
            rdi2 = tmp64_5;
        }
        if (zf4) 
            break;
        if (!rdi2) 
            goto addr_1400013b3_7;
        Sleep(0x3e8);
    }
    addr_1400013ce_10:
    eax6 = g1400035d0;
    if (eax6 == 1) {
        fun_1400017ac(31, rdx7, r8_8, r9_9);
        goto addr_14000141b_12;
    }
    eax10 = g1400035d0;
    if (eax10) {
        g140003044 = 1;
        goto addr_14000141b_12;
    }
    g1400035d0 = 1;
    rdx11 = 0x1400021a8;
    eax12 = fun_1400019c8(0x140002190, 0x1400021a8);
    if (!eax12) {
        addr_14000141b_12:
        eax13 = g1400035d0;
        if (eax13 == 1) {
            rdx11 = 0x140002188;
            fun_1400019c2(0x140002178, 0x140002188);
            g1400035d0 = 2;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax14) = 0xff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
        goto addr_1400014fd_18;
    }
    if (!esi3) {
        g1400035d8 = 0;
    }
    zf15 = g1400035f0 == 0;
    if (!zf15 && (eax16 = fun_140001980(0x1400035f0, rdx11), !!eax16)) {
        g1400035f0();
    }
    rcx17 = __initenv;
    rax18 = g140003028;
    *rcx17 = rax18;
    r8_19 = g140003028;
    rdx20 = g140003030;
    *reinterpret_cast<int32_t*>(&rcx21) = g140003020;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
    rax14 = fun_140001290(*reinterpret_cast<int32_t*>(&rcx21), rdx20, r8_19);
    g140003040 = *reinterpret_cast<int32_t*>(&rax14);
    zf22 = g140003024 == 0;
    if (zf22) {
        *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(&rax14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
        rax14 = reinterpret_cast<int64_t>(exit(rcx21, rdx20, r8_19));
    }
    zf23 = g140003044 == 0;
    if (zf23) {
        _cexit(rcx21, rdx20, r8_19);
        *reinterpret_cast<int32_t*>(&rax14) = g140003040;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    }
    addr_1400014fd_18:
    return rax14;
    addr_1400013b3_7:
    esi3 = 1;
    goto addr_1400013ce_10;
}

struct s10 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f24;
    signed char[4] pad32;
    int32_t f32;
};

int64_t fun_140001750(struct s10** rcx) {
    if ((*rcx)->f0 == 0xe06d7363 && ((*rcx)->f24 == 4 && ((*rcx)->f32 == 0x19930520 || ((*rcx)->f32 == 0x19930521 || ((*rcx)->f32 == 0x19930522 || (*rcx)->f32 == 0x1994000))))) {
        fun_140001a8e();
    }
    return 0;
}

void fun_1400018b4() {
    int64_t* rbx1;
    int64_t rax2;

    rbx1 = reinterpret_cast<int64_t*>(0x140002270);
    while (reinterpret_cast<uint64_t>(rbx1) < 0x140002270) {
        rax2 = *rbx1;
        if (rax2) {
            rax2();
        }
        ++rbx1;
    }
    return;
}

int64_t __C_specific_handler = 0x25b0;

void fun_1400018ec() {
    goto __C_specific_handler;
}

void fun_1400019ba() {
}

void fun_140001b40(int32_t** rcx, int64_t rdx) {
    int64_t rcx3;

    *reinterpret_cast<int32_t*>(&rcx3) = **rcx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    fun_1400018f2(rcx3, rcx);
    return;
}

/* (image base) */
int16_t image_base_;

int32_t g14000003c;

struct s11 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
    signed char[90] pad116;
    uint32_t f116;
    signed char[12] pad132;
    uint32_t f132;
    signed char[96] pad232;
    int32_t f232;
    signed char[12] pad248;
    int32_t f248;
};

int64_t __set_app_type = 0x2668;

int32_t* _fmode = reinterpret_cast<int32_t*>(0x264c);

int32_t g1400035cc;

int32_t* _commode = reinterpret_cast<int32_t*>(0x2640);

int32_t g1400035c8;

int32_t g14000301c = 1;

int64_t __setusermatherr = 0x262c;

int32_t g140003018 = -2;

int64_t _configthreadlocale = 0x2616;

int64_t fun_140001508() {
    int1_t zf1;
    int64_t rcx2;
    struct s11* rcx3;
    uint32_t eax4;
    int32_t eax5;
    int64_t rax6;
    int32_t* rcx7;
    int32_t eax8;
    int32_t* rdx9;
    int32_t eax10;
    int1_t zf11;
    int1_t zf12;
    int1_t zf13;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1) 
        goto addr_14000151a_2;
    rcx2 = g14000003c;
    rcx3 = reinterpret_cast<struct s11*>(rcx2 + 0x140000000);
    if (rcx3->f0 != 0x4550) 
        goto addr_14000151a_2;
    eax4 = rcx3->f24;
    if (eax4 == 0x10b) {
        eax5 = 0;
        if (rcx3->f116 <= 14) {
            addr_14000156d_6:
            g140003024 = eax5;
            __set_app_type();
            rax6 = reinterpret_cast<int64_t>(_encode_pointer());
            rcx7 = _fmode;
            g1400035e0 = rax6;
            g1400035e8 = rax6;
            eax8 = g1400035cc;
            *rcx7 = eax8;
            rdx9 = _commode;
            eax10 = g1400035c8;
            *rdx9 = eax10;
            fun_14000187c();
            fun_1400019d0();
            zf11 = g14000301c == 0;
            if (zf11) {
                __setusermatherr();
            }
        } else {
            zf12 = rcx3->f232 == 0;
            goto addr_14000156a_9;
        }
    } else {
        if (eax4 != 0x20b) {
            addr_14000151a_2:
            eax5 = 0;
            goto addr_14000156d_6;
        } else {
            eax5 = 0;
            if (rcx3->f132 <= 14) 
                goto addr_14000156d_6;
            zf12 = rcx3->f248 == 0;
            goto addr_14000156a_9;
        }
    }
    zf13 = g140003018 == -1;
    if (zf13) {
        _configthreadlocale();
    }
    return 0;
    addr_14000156a_9:
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!zf12);
    goto addr_14000156d_6;
}

int64_t _exit = 0x25d6;

void fun_1400014d0() {
    int32_t eax1;
    int1_t zf2;
    int64_t rcx3;
    int32_t eax4;
    int1_t zf5;

    g140003040 = eax1;
    zf2 = g140003024 == 0;
    if (zf2) {
        *reinterpret_cast<int32_t*>(&rcx3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
        _exit(rcx3);
    }
    zf5 = g140003044 == 0;
    if (!zf5) 
        goto 0x1400014fd;
    _cexit(rcx3);
}

void fun_1400015f0() {
    fun_1400019d4();
    goto 0x140001388;
}

int64_t fun_140001794() {
    SetUnhandledExceptionFilter(fun_140001750);
    return 0;
}

struct s12 {
    signed char[56] pad56;
    struct s7* f56;
};

int64_t fun_140001b18() {
    struct s7* r8_1;
    struct s12* r9_2;
    void* rdx3;
    struct s5* r9_4;

    r8_1 = r9_2->f56;
    fun_140001ab4(rdx3, r9_4, r8_1);
    return 1;
}

void fun_140001b5c() {
    void* rdx1;
    void* r8_2;

    fun_140001a94(8, rdx1, r8_2);
    return;
}

int32_t g1400035c4;

int32_t g1400035c0;

int32_t g14000303c = 0;

int64_t __getmainargs = 0x25a0;

int32_t g140003038 = 0;

void fun_140001320() {
    int32_t r11d1;
    int64_t r9_2;
    int32_t eax3;

    fun_140001864(fun_1400018b4);
    r11d1 = g1400035c4;
    *reinterpret_cast<int32_t*>(&r9_2) = g1400035c0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_2) + 4) = 0;
    g14000303c = r11d1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x140003020, 0x140003030, 0x140003028, r9_2));
    g140003038 = eax3;
    if (eax3 < 0) {
        fun_1400017ac(8, 0x140003030, 0x140003028, r9_2);
    }
    return;
}

int64_t fun_140001b80(int32_t** rcx, int64_t rdx) {
    int32_t ecx3;
    int64_t rax4;

    ecx3 = 0;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(**rcx == 0xc0000005);
    *reinterpret_cast<int32_t*>(&rax4) = ecx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

void fun_140001ba1() {
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
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    signed char al18;
    signed char* rax19;
    signed char* rax20;
    signed char al21;
    signed char* rax22;
    signed char* rax23;
    signed char al24;
    signed char* rax25;
    signed char* rax26;
    signed char al27;
    signed char* rax28;
    signed char* rax29;
    signed char al30;
    signed char* rax31;
    signed char* rax32;
    signed char al33;
    signed char* rax34;
    signed char* rax35;
    signed char al36;
    signed char* rax37;
    signed char* rax38;
    signed char al39;
    signed char* rax40;
    signed char* rax41;
    signed char al42;
    signed char* rax43;
    signed char* rax44;
    signed char al45;
    signed char* rax46;
    signed char* rax47;
    signed char al48;
    signed char* rax49;
    signed char* rax50;
    signed char al51;
    signed char* rax52;
    signed char* rax53;
    signed char al54;
    signed char* rax55;
    signed char* rax56;
    signed char al57;
    signed char* rax58;
    signed char* rax59;
    signed char al60;
    signed char* rax61;
    signed char* rax62;
    signed char al63;
    signed char* rax64;
    signed char* rax65;
    signed char al66;
    signed char* rax67;
    signed char* rax68;
    signed char al69;
    signed char* rax70;
    signed char* rax71;
    signed char al72;
    signed char* rax73;
    signed char* rax74;
    signed char al75;
    signed char* rax76;
    signed char* rax77;
    signed char al78;
    signed char* rax79;
    signed char* rax80;
    signed char al81;
    signed char* rax82;
    signed char* rax83;
    signed char al84;
    signed char* rax85;
    signed char* rax86;
    signed char al87;
    signed char* rax88;
    signed char* rax89;
    signed char al90;
    signed char* rax91;
    signed char* rax92;
    signed char al93;
    signed char* rax94;
    signed char* rax95;
    signed char al96;
    signed char* rax97;
    signed char* rax98;
    signed char al99;
    signed char* rax100;
    signed char* rax101;
    signed char al102;
    signed char* rax103;
    signed char* rax104;
    signed char al105;
    signed char* rax106;
    signed char* rax107;
    signed char al108;
    signed char* rax109;
    signed char* rax110;
    signed char al111;
    signed char* rax112;
    signed char* rax113;
    signed char al114;
    signed char* rax115;
    signed char* rax116;
    signed char al117;
    signed char* rax118;
    signed char* rax119;
    signed char al120;
    signed char* rax121;
    signed char* rax122;
    signed char al123;
    signed char* rax124;
    signed char* rax125;
    signed char al126;
    signed char* rax127;
    signed char* rax128;
    signed char al129;
    signed char* rax130;
    signed char* rax131;
    signed char al132;
    signed char* rax133;
    signed char* rax134;
    signed char al135;
    signed char* rax136;
    signed char* rax137;
    signed char al138;
    signed char* rax139;
    signed char* rax140;
    signed char al141;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
    *rax19 = reinterpret_cast<signed char>(*rax20 + al21);
    *rax22 = reinterpret_cast<signed char>(*rax23 + al24);
    *rax25 = reinterpret_cast<signed char>(*rax26 + al27);
    *rax28 = reinterpret_cast<signed char>(*rax29 + al30);
    *rax31 = reinterpret_cast<signed char>(*rax32 + al33);
    *rax34 = reinterpret_cast<signed char>(*rax35 + al36);
    *rax37 = reinterpret_cast<signed char>(*rax38 + al39);
    *rax40 = reinterpret_cast<signed char>(*rax41 + al42);
    *rax43 = reinterpret_cast<signed char>(*rax44 + al45);
    *rax46 = reinterpret_cast<signed char>(*rax47 + al48);
    *rax49 = reinterpret_cast<signed char>(*rax50 + al51);
    *rax52 = reinterpret_cast<signed char>(*rax53 + al54);
    *rax55 = reinterpret_cast<signed char>(*rax56 + al57);
    *rax58 = reinterpret_cast<signed char>(*rax59 + al60);
    *rax61 = reinterpret_cast<signed char>(*rax62 + al63);
    *rax64 = reinterpret_cast<signed char>(*rax65 + al66);
    *rax67 = reinterpret_cast<signed char>(*rax68 + al69);
    *rax70 = reinterpret_cast<signed char>(*rax71 + al72);
    *rax73 = reinterpret_cast<signed char>(*rax74 + al75);
    *rax76 = reinterpret_cast<signed char>(*rax77 + al78);
    *rax79 = reinterpret_cast<signed char>(*rax80 + al81);
    *rax82 = reinterpret_cast<signed char>(*rax83 + al84);
    *rax85 = reinterpret_cast<signed char>(*rax86 + al87);
    *rax88 = reinterpret_cast<signed char>(*rax89 + al90);
    *rax91 = reinterpret_cast<signed char>(*rax92 + al93);
    *rax94 = reinterpret_cast<signed char>(*rax95 + al96);
    *rax97 = reinterpret_cast<signed char>(*rax98 + al99);
    *rax100 = reinterpret_cast<signed char>(*rax101 + al102);
    *rax103 = reinterpret_cast<signed char>(*rax104 + al105);
    *rax106 = reinterpret_cast<signed char>(*rax107 + al108);
    *rax109 = reinterpret_cast<signed char>(*rax110 + al111);
    *rax112 = reinterpret_cast<signed char>(*rax113 + al114);
    *rax115 = reinterpret_cast<signed char>(*rax116 + al117);
    *rax118 = reinterpret_cast<signed char>(*rax119 + al120);
    *rax121 = reinterpret_cast<signed char>(*rax122 + al123);
    *rax124 = reinterpret_cast<signed char>(*rax125 + al126);
    *rax127 = reinterpret_cast<signed char>(*rax128 + al129);
    *rax130 = reinterpret_cast<signed char>(*rax131 + al132);
    *rax133 = reinterpret_cast<signed char>(*rax134 + al135);
    *rax136 = reinterpret_cast<signed char>(*rax137 + al138);
    *rax139 = reinterpret_cast<signed char>(*rax140 + al141);
}
