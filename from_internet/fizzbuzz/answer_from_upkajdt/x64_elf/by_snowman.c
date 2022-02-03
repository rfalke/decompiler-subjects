
/* operator delete(void*, unsigned long) */
int64_t _ZdlPvm = 0x4010f6;

void** fun_4010f0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZdlPvm;
}

struct s0 {
    signed char[8] pad8;
    int64_t f8;
};

int64_t _Unwind_Resume = 0x401186;

void fun_401180(struct s0** rdi, void** rsi, void** rdx, void** rcx) {
    goto _Unwind_Resume;
}

struct s1 {
    void** f0;
    void* f8;
    void* f10;
};

void** fun_401080(int64_t rdi);

void** fun_4010e0(void** rdi, void** rsi, void** rdx, void** rcx);

void fun_401140();

void** fun_4010b0(void** rdi, void** rsi, void** rdx);

/* void std::vector<worker*, std::allocator<worker*> >::_M_realloc_insert<worker*>(__gnu_cxx::__normal_iterator<worker**, std::vector<worker*, std::allocator<worker*> > >, worker*&&) */
void** _ZNSt6vectorIP6workerSaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_(struct s1* rdi, void** rsi, void** rdx) {
    void* r12_4;
    void** r14_5;
    void** rax6;
    void** rdx7;
    void** rcx8;
    void** tmp64_9;
    void** rax10;
    void** rdx11;
    void** rbx12;
    void** rax13;
    void** rdi14;
    void* rbx15;
    void** r8_16;
    void** r12_17;
    void* r15_18;
    void** rax19;

    r12_4 = rdi->f8;
    r14_5 = rdi->f0;
    rax6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(r12_4) - reinterpret_cast<uint64_t>(r14_5)) >> 3);
    if (rax6 == 0xfffffffffffffff) {
        fun_401080("vector::_M_realloc_insert");
    }
    *reinterpret_cast<int32_t*>(&rdx7) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    if (rax6) {
        rdx7 = rax6;
    }
    *reinterpret_cast<int32_t*>(&rcx8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    tmp64_9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax6) + reinterpret_cast<uint64_t>(rdx7));
    rax10 = tmp64_9;
    *reinterpret_cast<unsigned char*>(&rcx8) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(tmp64_9) < reinterpret_cast<uint64_t>(rax6));
    rdx11 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsi) - reinterpret_cast<uint64_t>(r14_5));
    if (!rcx8) 
        goto addr_401eee_6;
    rbx12 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    addr_401fa2_8:
    rax13 = fun_4010e0(rbx12, rsi, rdx11, rcx8);
    rdx11 = rdx11;
    rdi14 = rax13;
    rbx15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx12) + reinterpret_cast<uint64_t>(rax13));
    addr_401efb_9:
    r8_16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi14) + reinterpret_cast<uint64_t>(rdx11) + 8);
    r12_17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_4) - reinterpret_cast<uint64_t>(rsi));
    __asm__("movd xmm0, rdi");
    r15_18 = rdi->f10;
    *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rdi14) + reinterpret_cast<uint64_t>(rdx11)) = *reinterpret_cast<void***>(rdx);
    rax19 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r8_16) + reinterpret_cast<uint64_t>(r12_17));
    __asm__("movd xmm1, rax");
    __asm__("punpcklqdq xmm0, xmm1");
    __asm__("movaps [rsp], xmm0");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rdx11) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rdx11 == 0))) {
        fun_401140();
        r8_16 = r8_16;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r12_17) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(r12_17 == 0))) {
            addr_401f80_11:
            rdx11 = r12_17;
            rax19 = fun_4010b0(r8_16, rsi, rdx11);
            if (!r14_5) {
                addr_401f33_12:
                __asm__("movdqa xmm2, [rsp]");
                rdi->f10 = rbx15;
                __asm__("movups [rbp+0x0], xmm2");
                return rax19;
            } else {
                goto addr_401f67_14;
            }
        } else {
            addr_401f67_14:
            rax19 = fun_4010f0(r14_5, reinterpret_cast<uint64_t>(r15_18) - reinterpret_cast<uint64_t>(r14_5), rdx11, rcx8);
            goto addr_401f33_12;
        }
    } else {
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r12_17) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(r12_17 == 0))) 
            goto addr_401f80_11;
        if (r14_5) 
            goto addr_401f67_14; else 
            goto addr_401f33_12;
    }
    addr_401eee_6:
    if (rax10) {
        rcx8 = reinterpret_cast<void**>(0xfffffffffffffff);
        if (reinterpret_cast<uint64_t>(rax10) > 0xfffffffffffffff) {
            rax10 = reinterpret_cast<void**>(0xfffffffffffffff);
        }
        rbx12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax10) * 8);
        goto addr_401fa2_8;
    } else {
        *reinterpret_cast<int32_t*>(&rbx15) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx15) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi14) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
        goto addr_401efb_9;
    }
}

struct s2 {
    void** f0;
    void** f8;
    void* f10;
};

void fun_4010d0(void** rdi, void** rsi, void** rdx, void** rcx);

void pthread_create();

struct s0** fun_401040(void** rdi, void** rsi, void** rdx, void** rcx);

void fun_401150(void** rdi, void** rsi);

void fun_401060(void** rdi, void** rsi);

void fun_401120(void** rdi, void** rsi);

/* void std::vector<std::thread, std::allocator<std::thread> >::_M_realloc_insert<void (&)(worker*), worker*&>(__gnu_cxx::__normal_iterator<std::thread*, std::vector<std::thread, std::allocator<std::thread> > >, void (&)(worker*), worker*&) */
void** _ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJRFvP6workerERS5_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_(struct s2* rdi, void** rsi, void** rdx, void** rcx) {
    void*** rsp5;
    void** rax6;
    void** r14_7;
    void** v8;
    void** r12_9;
    void** rax10;
    void** rdi11;
    void** rax12;
    struct s2* rbx13;
    void** rbp14;
    void** tmp64_15;
    void** r12_16;
    int64_t rax17;
    void** rax18;
    void** r13_19;
    void** r15_20;
    void** rax21;
    void** rdx22;
    void** rax23;
    void** rax24;
    void** rdx25;
    void** rcx26;
    void* rsi27;
    void** rax28;
    void** rcx29;
    void** r15_30;
    void** rsi31;
    void** rax32;
    int64_t* r15_33;
    struct s0** rax34;
    struct s0* rax35;
    void** rbx36;
    int64_t r13_37;
    void** r13_38;

    rsp5 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 56);
    rax6 = rdi->f8;
    r14_7 = rdi->f0;
    v8 = rax6;
    r12_9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(rax6) - reinterpret_cast<uint64_t>(r14_7)) >> 3);
    if (r12_9 == 0xfffffffffffffff) {
        rax10 = fun_401080("vector::_M_realloc_insert");
        rdi11 = rax10;
        goto addr_401e44_3;
    }
    *reinterpret_cast<int32_t*>(&rax12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    rbx13 = rdi;
    if (r12_9) {
        rax12 = r12_9;
    }
    rbp14 = rsi;
    tmp64_15 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r12_9) + reinterpret_cast<uint64_t>(rax12));
    r12_16 = tmp64_15;
    *reinterpret_cast<uint32_t*>(&rax17) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(tmp64_15) < reinterpret_cast<uint64_t>(r12_9));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    if (!rax17) 
        goto addr_401cea_7;
    r12_16 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    addr_401dfa_9:
    rax18 = fun_4010e0(r12_16, rsi, rdx, rcx);
    rsp5 = rsp5 - 1 + 1;
    r13_19 = rax18;
    addr_401cf6_10:
    r15_20 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsi) - reinterpret_cast<uint64_t>(r14_7) + reinterpret_cast<uint64_t>(r13_19));
    *reinterpret_cast<void***>(r15_20) = reinterpret_cast<void**>(0);
    rax21 = fun_4010e0(24, rsi, rdx, rcx);
    *reinterpret_cast<void***>(rax21) = reinterpret_cast<void**>(0x4030b0);
    rdx22 = *reinterpret_cast<void***>(rcx);
    *reinterpret_cast<void***>(rax21 + 2) = rdx;
    *reinterpret_cast<void***>(rax21 + 1) = rdx22;
    fun_4010d0(r15_20, rsp5 - 1 + 1 + 5, pthread_create, rcx);
    if (rax21) {
        rax23 = *reinterpret_cast<void***>(rax21);
        *reinterpret_cast<void***>(rax23 + 1)();
    }
    rax24 = r14_7;
    rdx25 = r13_19;
    rcx26 = r13_19;
    rsi27 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp14) - reinterpret_cast<uint64_t>(r14_7));
    if (rbp14 != r14_7) {
        do {
            ++rax24;
            ++rdx25;
            *reinterpret_cast<void***>(rdx25 + 0xffffffffffffffff) = *reinterpret_cast<void***>(rax24);
        } while (rax24 != rbp14);
        rcx26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r13_19) + reinterpret_cast<uint64_t>(rsi27));
    }
    rax28 = v8;
    rcx29 = rcx26 + 1;
    if (rbp14 != rax28) {
        r15_30 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax28) - reinterpret_cast<uint64_t>(rbp14));
        rdx25 = r15_30;
        rax28 = fun_4010b0(rcx29, rbp14, rdx25);
        rcx29 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax28) + reinterpret_cast<uint64_t>(r15_30));
    }
    __asm__("movd xmm0, r13");
    __asm__("movd xmm1, rcx");
    __asm__("punpcklqdq xmm0, xmm1");
    if (r14_7) {
        __asm__("movaps [rsp], xmm0");
        rsi31 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx13->f10) - reinterpret_cast<uint64_t>(r14_7));
        rax28 = fun_4010f0(r14_7, rsi31, rdx25, rcx29);
        __asm__("movdqa xmm0, [rsp]");
    }
    __asm__("movups [rbx], xmm0");
    rbx13->f10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r13_19) + reinterpret_cast<uint64_t>(r12_16));
    return rax28;
    addr_401cea_7:
    if (r12_16) {
        rax32 = reinterpret_cast<void**>(0xfffffffffffffff);
        if (reinterpret_cast<uint64_t>(r12_16) <= 0xfffffffffffffff) {
            rax32 = r12_16;
        }
        r12_16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax32) * 8);
        goto addr_401dfa_9;
    } else {
        *reinterpret_cast<int32_t*>(&r13_19) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_19) + 4) = 0;
        goto addr_401cf6_10;
    }
    while (1) {
        if (*r15_33) {
            rax34 = fun_401040(rdi11, rsi, rdx, rcx);
            fun_401150(rdi11, rsi);
            fun_401180(rax34, rsi, rdx, rcx);
            rax35 = *rax34;
            rax35->f8();
            rdi11 = rbx36;
            addr_401e44_3:
            fun_401060(rdi11, rsi);
            if (!r13_37) 
                continue;
            rsi = r12_9;
            rdi11 = r13_38;
            fun_4010f0(rdi11, rsi, rdx, rcx);
        }
        fun_401120(rdi11, rsi);
    }
}

/* std::thread::join() */
int64_t _ZNSt6thread4joinEv = 0x401176;

void fun_401170(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZNSt6thread4joinEv;
}

int64_t write = 0x401056;

void fun_401050(int64_t rdi, int64_t rsi, void** rdx, void** rcx) {
    goto write;
}

/* std::ostream& std::ostream::_M_insert<unsigned long>(unsigned long) */
int64_t _ZNSo9_M_insertImEERSoT_ = 0x4010a6;

void** fun_4010a0(int64_t rdi, uint64_t rsi, void** rdx, void** rcx) {
    goto _ZNSo9_M_insertImEERSoT_;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::__ostream_insert<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*, long) */
int64_t _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l = 0x401106;

void fun_401100(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x4050d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

/* operator new(unsigned long) */
int64_t _Znwm = 0x4010e6;

void** fun_4010e0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _Znwm;
}

/* std::thread::_M_start_thread(std::unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >, void (*)()) */
int64_t _ZNSt6thread15_M_start_threadESt10unique_ptrINS_6_StateESt14default_deleteIS1_EEPFvvE = 0x4010d6;

void fun_4010d0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZNSt6thread15_M_start_threadESt10unique_ptrINS_6_StateESt14default_deleteIS1_EEPFvvE;
}

int64_t memcpy = 0x4010b6;

void** fun_4010b0(void** rdi, void** rsi, void** rdx) {
    goto memcpy;
}

int64_t __cxa_begin_catch = 0x401066;

void fun_401060(void** rdi, void** rsi) {
    goto __cxa_begin_catch;
}

int64_t __cxa_rethrow = 0x401126;

void fun_401120(void** rdi, void** rsi) {
    goto __cxa_rethrow;
}

/* std::terminate() */
int64_t _ZSt9terminatev = 0x401046;

struct s0** fun_401040(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZSt9terminatev;
}

int64_t __cxa_end_catch = 0x401156;

void fun_401150(void** rdi, void** rsi) {
    goto __cxa_end_catch;
}

/* std::thread::hardware_concurrency() */
int64_t _ZNSt6thread20hardware_concurrencyEv = 0x401116;

int32_t fun_401110() {
    goto _ZNSt6thread20hardware_concurrencyEv;
}

/* operator new[](unsigned long) */
int64_t _Znam = 0x401036;

int64_t fun_401030(int64_t rdi, void** rsi, void** rdx) {
    goto _Znam;
}

/* std::__throw_length_error(char const*) */
int64_t _ZSt20__throw_length_errorPKc = 0x401086;

void** fun_401080(int64_t rdi) {
    goto _ZSt20__throw_length_errorPKc;
}

int64_t memmove = 0x401146;

void fun_401140() {
    goto memmove;
}

/* std::thread::_State::~_State() */
int64_t _ZNSt6thread6_StateD2Ev = 0x401076;

void fun_401070() {
    goto _ZNSt6thread6_StateD2Ev;
}

/* std::ios_base::Init::Init() */
int64_t _ZNSt8ios_base4InitC1Ev = 0x401136;

void fun_401130(int64_t rdi) {
    goto _ZNSt8ios_base4InitC1Ev;
}

int64_t __gmon_start__ = 0;

void fun_401003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

void main();

void fun_4014f3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x401ff0, 0x402060, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401523() {
    __asm__("cli ");
    return;
}

/* completed.0 */
signed char completed_0 = 0;

int64_t fun_4015a3() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = completed_0 == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        completed_0 = 1;
        return rax3;
    }
}

int64_t fun_4015d3() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_401ff3(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t r13_5;
    int32_t r12d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r14_4 = rdx;
    r13_5 = rsi;
    r12d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r12d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x404d48 + rbx7 * 8)(rdi8, r13_5, r14_4);
            ++rbx7;
        } while (2 != rbx7);
    }
    return;
}

void fun_402063() {
    __asm__("cli ");
    return;
}

void fun_40206b() {
    __asm__("cli ");
    return;
}

struct s4 {
    unsigned char f0;
    signed char f1;
    signed char[2] pad4;
    signed char f4;
    signed char[3] pad8;
    signed char f8;
};

struct s3 {
    uint64_t f0;
    uint64_t f8;
    signed char[8] pad24;
    struct s4* f18;
    void* f20;
};

/* task(worker*) */
void _Z4taskP6worker(struct s3* rdi);

void main() {
    int32_t eax1;
    void* rsp2;
    int64_t r13_3;
    int64_t rbx4;
    void** rdx5;
    void** rcx6;
    void** rax7;
    int64_t rax8;
    void** v9;
    void** v10;
    void** rsi11;
    void** r12_12;
    void** r13_13;
    void** v14;
    uint64_t r14_15;
    uint64_t v16;
    void** rdi17;
    void** rcx18;
    struct s0** rax19;
    struct s0** rbp20;
    void** v21;
    void** v22;
    void** rax23;
    void** v24;
    void** rax25;
    void** r15_26;
    void** rbp27;
    void** rax28;
    void** rax29;
    void** rdx30;
    void** rbx31;
    void** r15_32;
    void** rax33;
    void* rsp34;
    void** rax35;
    void** rbx36;
    void** rbx37;
    int64_t rsi38;

    eax1 = fun_401110();
    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x68 - 8 + 8);
    __asm__("pxor xmm0, xmm0");
    *reinterpret_cast<int32_t*>(&r13_3) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = 0;
    __asm__("movaps [rsp+0x20], xmm0");
    if (r13_3) {
        *reinterpret_cast<int32_t*>(&rbx4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0;
        while (1) {
            rax7 = fun_4010e0(40, 0, rdx5, rcx6);
            *reinterpret_cast<void***>(rax7 + 2) = reinterpret_cast<void**>(0x989680);
            rax8 = fun_401030(0x17d78400, 0, rdx5);
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
            *reinterpret_cast<int64_t*>(rax7 + 3) = rax8;
            v9 = rax7;
            if (v10) {
                *reinterpret_cast<void***>(v10) = rax7;
                ++rbx4;
                ++v10;
                if (r13_3 == rbx4) 
                    break;
            } else {
                rdx5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp2) + 64);
                rsi11 = reinterpret_cast<void**>(0);
                _ZNSt6vectorIP6workerSaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_(reinterpret_cast<int64_t>(rsp2) + 32, 0, rdx5);
                rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                ++rbx4;
                if (r13_3 == rbx4) 
                    break;
            }
        }
    }
    r12_12 = v10;
    r13_13 = v14;
    *reinterpret_cast<int32_t*>(&r14_15) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = 0;
    v16 = ((reinterpret_cast<uint64_t>(r12_12 + 0xffffffffffffffff) - reinterpret_cast<uint64_t>(r13_13) >> 3) + 1) * 0x989680;
    goto addr_4012e8_8;
    while (1) {
        addr_40149a_9:
        rax19 = fun_401040(rdi17, rsi11, rdx5, rcx18);
        rbp20 = rax19;
        while (1) {
            rsi11 = reinterpret_cast<void**>(-static_cast<uint64_t>(v21));
            if (v21) {
                fun_4010f0(v21, rsi11, rdx5, rcx18);
            }
            fun_401180(rbp20, rsi11, rdx5, rcx18);
            if (v22) {
                rax23 = *reinterpret_cast<void***>(v22);
                *reinterpret_cast<void***>(rax23 + 1)();
            }
            rdi17 = v9;
            rdx5 = v24;
            rax25 = rdi17;
            while (rdx5 != rax25) {
                if (*reinterpret_cast<void***>(rax25)) 
                    goto addr_40149a_9;
                ++rax25;
            }
            if (!rdi17) 
                continue;
            fun_4010f0(rdi17, -static_cast<uint64_t>(rdi17), rdx5, rcx18);
        }
    }
    while (1) {
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r15_26) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_26) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbp27) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp27) + 4) = 0;
        __asm__("movaps [rsp+0x40], xmm0");
        while (1) {
            rax28 = fun_4010a0(0x4050e0, r14_15, rdx5, rcx18);
            rdi17 = rax28;
            *reinterpret_cast<int32_t*>(&rdx5) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>("\n");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = 0;
            fun_401100(rdi17, "\n", 1, rcx18);
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
            rax29 = r15_26;
            if (rbp27 != r15_26) {
                do {
                    if (*reinterpret_cast<void***>(rax29)) 
                        goto addr_40149a_9;
                    ++rax29;
                } while (rax29 != rbp27);
            }
            if (!r15_26) {
                addr_4012e8_8:
                if (r12_12 == r13_13) 
                    break;
            } else {
                rsi11 = reinterpret_cast<void**>(-static_cast<uint64_t>(r15_26));
                fun_4010f0(r15_26, rsi11, 1, rcx18);
                rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                if (r12_12 == r13_13) 
                    break;
            }
            rdx30 = r13_13;
            do {
                __asm__("movd xmm0, rax");
                rcx18 = *reinterpret_cast<void***>(rdx30);
                ++rdx30;
                __asm__("movd xmm1, rax");
                __asm__("punpcklqdq xmm0, xmm1");
                __asm__("movups [rcx], xmm0");
            } while (rdx30 != r12_12);
            __asm__("pxor xmm0, xmm0");
            r14_15 = r14_15 + v16;
            rbx31 = r13_13;
            *reinterpret_cast<int32_t*>(&rbp27) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp27) + 4) = 0;
            __asm__("movaps [rsp+0x40], xmm0");
            while (1) {
                r15_32 = *reinterpret_cast<void***>(rbx31);
                if (rbp27) {
                    *reinterpret_cast<void***>(rbp27) = reinterpret_cast<void**>(0);
                    rax33 = fun_4010e0(24, rsi11, rdx30, rcx18);
                    rsp34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                    *reinterpret_cast<void***>(rax33) = reinterpret_cast<void**>(0x4030b0);
                    *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(pthread_create);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
                    rsi11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp34) + 24);
                    *reinterpret_cast<void***>(rax33 + 1) = r15_32;
                    *reinterpret_cast<void***>(rax33 + 2) = reinterpret_cast<void**>(_Z4taskP6worker);
                    v22 = rax33;
                    fun_4010d0(rbp27, rsi11, pthread_create, rcx18);
                    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp34) - 8 + 8);
                    if (v22) {
                        rax35 = *reinterpret_cast<void***>(v22);
                        *reinterpret_cast<void***>(rax35 + 1)();
                        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                    }
                    ++rbp27;
                    ++rbx31;
                    v24 = rbp27;
                    if (r12_12 == rbx31) 
                        break;
                } else {
                    rcx18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp2) + 16);
                    *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(_Z4taskP6worker);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
                    rsi11 = rbp27;
                    _ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJRFvP6workerERS5_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_(reinterpret_cast<int64_t>(rsp2) + 64, rsi11, _Z4taskP6worker, rcx18);
                    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                    ++rbx31;
                    rbp27 = v24;
                    if (r12_12 == rbx31) 
                        break;
                }
            }
            r15_26 = v9;
            rbx36 = r15_26;
            if (r15_26 != rbp27) {
                do {
                    fun_401170(rbx36, rsi11, rdx30, rcx18);
                    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                    ++rbx36;
                } while (rbp27 != rbx36);
            }
            rbx37 = r13_13;
            do {
                rdx5 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx37) + 4);
                rsi38 = *reinterpret_cast<int64_t*>(*reinterpret_cast<void***>(rbx37) + 3);
                fun_401050(1, rsi38, rdx5, rcx18);
                rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                ++rbx37;
            } while (r12_12 != rbx37);
        }
    }
}

struct s5 {
    signed char f0;
    unsigned char f1;
};

unsigned char g4030c8 = 70;

/* task(worker*) */
void _Z4taskP6worker(struct s3* rdi) {
    struct s4* rsi2;
    uint64_t rcx3;
    struct s3* r8_4;
    int32_t edi5;
    void* rsp6;
    uint64_t rbx7;
    uint64_t r12_8;
    uint64_t rax9;
    int32_t ebp10;
    uint64_t rbx11;
    uint64_t rdx12;
    uint64_t rax13;
    int32_t eax14;
    signed char v15;
    void* r11_16;
    void* rax17;
    unsigned char* r12_18;
    void* r14_19;
    void* rdx20;
    void* rdx21;
    void* r12_22;
    uint32_t edx23;
    uint32_t edx24;
    uint32_t ebx25;
    void* r13_26;
    void* rdx27;
    uint32_t edx28;
    void* rdx29;
    uint32_t ebx30;
    struct s5* rax31;
    void* r14_32;
    unsigned char* r12_33;
    void* rax34;
    void* rax35;
    void* rdx36;
    void* r15_37;
    void* rax38;
    void* r12_39;
    uint32_t eax40;
    uint64_t v41;
    uint32_t eax42;
    uint32_t edx43;
    struct s4* r13_44;
    void* rsi45;
    void* rax46;
    uint32_t eax47;
    void* rax48;
    uint32_t edx49;
    int32_t edx50;
    unsigned char rdx51;

    rsi2 = rdi->f18;
    rcx3 = rdi->f0;
    r8_4 = rdi;
    if (rcx3 >= rdi->f8) {
        rdi->f20 = reinterpret_cast<void*>(0);
        return;
    } else {
        edi5 = 0;
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8);
        rbx7 = 0xffffffffffffff9c;
        while (1) {
            r12_8 = rcx3 - ((__intrinsic() & 0xfffffffffffffffe) + (__intrinsic() >> 1));
            rax9 = rcx3 - ((__intrinsic() & 0xfffffffffffffffc) + (__intrinsic() >> 2));
            if (r12_8 | rax9) {
                if (r12_8) {
                    if (rax9) {
                        if (rcx3 - rbx7 > 9 || *reinterpret_cast<signed char*>(&ebp10) + *reinterpret_cast<signed char*>(&edi5) > 9) {
                            rbx11 = __intrinsic() >> 3;
                            rdx12 = rbx11 + rbx11 * 4;
                            rax13 = rcx3 - (rdx12 + rdx12);
                            ebp10 = *reinterpret_cast<int32_t*>(&rax13);
                            eax14 = *reinterpret_cast<int32_t*>(&rax13) + 48;
                            v15 = *reinterpret_cast<signed char*>(&eax14);
                            if (rcx3 <= 9) {
                                *reinterpret_cast<int32_t*>(&r11_16) = 15;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                            } else {
                                if (rcx3 <= 99) {
                                    *reinterpret_cast<int32_t*>(&r11_16) = 14;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                } else {
                                    if (rcx3 <= 0x3e7) {
                                        *reinterpret_cast<int32_t*>(&r11_16) = 13;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                    } else {
                                        if (rcx3 <= 0x270f) {
                                            *reinterpret_cast<int32_t*>(&r11_16) = 12;
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                        } else {
                                            if (rcx3 <= 0x1869f) {
                                                *reinterpret_cast<int32_t*>(&r11_16) = 11;
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                            } else {
                                                if (rcx3 <= 0xf423f) {
                                                    *reinterpret_cast<int32_t*>(&r11_16) = 10;
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                } else {
                                                    if (rcx3 <= 0x98967f) {
                                                        *reinterpret_cast<int32_t*>(&r11_16) = 9;
                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                    } else {
                                                        if (rcx3 <= 0x5f5e0ff) {
                                                            *reinterpret_cast<int32_t*>(&r11_16) = 8;
                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                        } else {
                                                            if (rcx3 <= 0x3b9ac9ff) {
                                                                *reinterpret_cast<int32_t*>(&r11_16) = 7;
                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                            } else {
                                                                if (rcx3 <= 0x2540be3ff) {
                                                                    *reinterpret_cast<int32_t*>(&r11_16) = 6;
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                } else {
                                                                    if (rcx3 <= 0x174876e7ff) {
                                                                        *reinterpret_cast<int32_t*>(&r11_16) = 5;
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                    } else {
                                                                        if (rcx3 <= 0xe8d4a50fff) {
                                                                            *reinterpret_cast<int32_t*>(&r11_16) = 4;
                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                        } else {
                                                                            if (rbx11 <= 0xe8d4a50fff) {
                                                                                *reinterpret_cast<int32_t*>(&r11_16) = 3;
                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                            } else {
                                                                                if (__intrinsic() >> 3 <= 0xe8d4a50fff) {
                                                                                    *reinterpret_cast<int32_t*>(&r11_16) = 2;
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                                } else {
                                                                                    if (__intrinsic() >> 3 <= 0xe8d4a50fff) {
                                                                                        *reinterpret_cast<int32_t*>(&r11_16) = 1;
                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                                    } else {
                                                                                        *reinterpret_cast<int32_t*>(&r11_16) = 0;
                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = 0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            rax17 = reinterpret_cast<void*>(16 - reinterpret_cast<int64_t>(r11_16));
                            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_16) + 1) > 16) {
                                rax17 = reinterpret_cast<void*>(1);
                            }
                            r12_18 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp6) - 40 + reinterpret_cast<int64_t>(r11_16));
                            if (*reinterpret_cast<uint32_t*>(&rax17) >= 8) {
                                r14_19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(&rsi2->f8) & 0xfffffffffffffff8);
                                rsi2->f0 = *r12_18;
                                *reinterpret_cast<uint32_t*>(&rdx20) = *reinterpret_cast<uint32_t*>(&rax17);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = 0;
                                *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(rdx20) - 8) = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r12_18) + reinterpret_cast<int64_t>(rdx20) - 8);
                                rdx21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi2) - reinterpret_cast<uint64_t>(r14_19));
                                r12_22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_18) - reinterpret_cast<uint64_t>(rdx21));
                                edx23 = *reinterpret_cast<int32_t*>(&rdx21) + *reinterpret_cast<uint32_t*>(&rax17) & 0xfffffff8;
                                if (edx23 >= 8) {
                                    edx24 = edx23 & 0xfffffff8;
                                    ebx25 = 0;
                                    do {
                                        *reinterpret_cast<uint32_t*>(&r13_26) = ebx25;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = 0;
                                        ebx25 = ebx25 + 8;
                                        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_19) + reinterpret_cast<int64_t>(r13_26)) = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r12_22) + reinterpret_cast<int64_t>(r13_26));
                                    } while (ebx25 < edx24);
                                }
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&rax17) & 4) {
                                    rsi2->f0 = *r12_18;
                                    *reinterpret_cast<uint32_t*>(&rdx27) = *reinterpret_cast<uint32_t*>(&rax17);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(rdx27) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r12_18) + reinterpret_cast<int64_t>(rdx27) - 4);
                                } else {
                                    if (*reinterpret_cast<uint32_t*>(&rax17) && (edx28 = *r12_18, rsi2->f0 = *reinterpret_cast<unsigned char*>(&edx28), !!(*reinterpret_cast<unsigned char*>(&rax17) & 2))) {
                                        *reinterpret_cast<uint32_t*>(&rdx29) = *reinterpret_cast<uint32_t*>(&rax17);
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = 0;
                                        ebx30 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(r12_18) + reinterpret_cast<int64_t>(rdx29) - 2);
                                        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(rdx29) - 2) = *reinterpret_cast<int16_t*>(&ebx30);
                                    }
                                }
                            }
                            rax31 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rax17) + reinterpret_cast<uint64_t>(rsi2));
                            rbx7 = rcx3;
                        } else {
                            if (r11_16 != 15) {
                                r14_32 = reinterpret_cast<void*>(15 - reinterpret_cast<int64_t>(r11_16));
                                r12_33 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp6) - 40 + reinterpret_cast<int64_t>(r11_16));
                                if (*reinterpret_cast<uint32_t*>(&r14_32) >= 8) {
                                    rsi2->f0 = *r12_33;
                                    *reinterpret_cast<uint32_t*>(&rax34) = *reinterpret_cast<uint32_t*>(&r14_32);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = 0;
                                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(rax34) - 8) = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r12_33) + reinterpret_cast<int64_t>(rax34) - 8);
                                    rax35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(&rsi2->f8) & 0xfffffffffffffff8);
                                    rdx36 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi2) - reinterpret_cast<uint64_t>(rax35));
                                    r15_37 = rax35;
                                    rax38 = rdx36;
                                    r12_39 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_33) - reinterpret_cast<uint64_t>(rdx36));
                                    eax40 = *reinterpret_cast<int32_t*>(&rax38) + *reinterpret_cast<uint32_t*>(&r14_32) & 0xfffffff8;
                                    if (eax40 >= 8) {
                                        v41 = rcx3;
                                        eax42 = eax40 & 0xfffffff8;
                                        edx43 = 0;
                                        r13_44 = rsi2;
                                        do {
                                            *reinterpret_cast<uint32_t*>(&rsi45) = edx43;
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = 0;
                                            edx43 = edx43 + 8;
                                            *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r15_37) + reinterpret_cast<int64_t>(rsi45)) = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r12_39) + reinterpret_cast<int64_t>(rsi45));
                                        } while (edx43 < eax42);
                                        rcx3 = v41;
                                        rsi2 = r13_44;
                                    }
                                } else {
                                    if (*reinterpret_cast<unsigned char*>(&r14_32) & 4) {
                                        rsi2->f0 = *r12_33;
                                        *reinterpret_cast<uint32_t*>(&rax46) = *reinterpret_cast<uint32_t*>(&r14_32);
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(rax46) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r12_33) + reinterpret_cast<int64_t>(rax46) - 4);
                                    } else {
                                        if (*reinterpret_cast<uint32_t*>(&r14_32) && (eax47 = *r12_33, rsi2->f0 = *reinterpret_cast<unsigned char*>(&eax47), !!(*reinterpret_cast<unsigned char*>(&r14_32) & 2))) {
                                            *reinterpret_cast<uint32_t*>(&rax48) = *reinterpret_cast<uint32_t*>(&r14_32);
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = 0;
                                            edx49 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(r12_33) + reinterpret_cast<int64_t>(rax48) - 2);
                                            *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(rax48) - 2) = *reinterpret_cast<int16_t*>(&edx49);
                                        }
                                    }
                                }
                                rsi2 = reinterpret_cast<struct s4*>(reinterpret_cast<uint64_t>(rsi2) + reinterpret_cast<int64_t>(r14_32));
                            }
                            rax31 = reinterpret_cast<struct s5*>(&rsi2->f1);
                            edx50 = edi5 - ebp10;
                            rsi2->f0 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx50) + v15);
                        }
                    } else {
                        rsi2->f0 = reinterpret_cast<unsigned char>(0x7a7a7542);
                        rax31 = reinterpret_cast<struct s5*>(&rsi2->f4);
                    }
                } else {
                    rsi2->f0 = reinterpret_cast<unsigned char>(0x7a7a6946);
                    rax31 = reinterpret_cast<struct s5*>(&rsi2->f4);
                }
            } else {
                rdx51 = g4030c8;
                rax31 = reinterpret_cast<struct s5*>(&rsi2->f8);
                rsi2->f0 = rdx51;
            }
            ++edi5;
            rax31->f0 = 10;
            rsi2 = reinterpret_cast<struct s4*>(&rax31->f1);
            ++rcx3;
            if (*reinterpret_cast<signed char*>(&edi5) == 10) {
                if (r8_4->f8 <= rcx3) 
                    break;
                edi5 = 0;
            } else {
                if (rcx3 >= r8_4->f8) 
                    break;
            }
        }
        r8_4->f20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi2) - reinterpret_cast<uint64_t>(r8_4->f18));
        return;
    }
}

int64_t g405010 = 0;

void fun_401036() {
    goto g405010;
}

void fun_4010f6() {
    goto 0x401020;
}

void fun_401186() {
    goto 0x401020;
}

void fun_4014a7() {
    goto 0x4011cf;
}

void fun_401176() {
    goto 0x401020;
}

void fun_401056() {
    goto 0x401020;
}

void fun_4010a6() {
    goto 0x401020;
}

void fun_401106() {
    goto 0x401020;
}

struct s6 {
    signed char[16] pad16;
    int64_t f10;
};

/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> > >::_M_run() */
void _ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFvP6workerES4_EEEEE6_M_runEv(struct s6* rdi) {
    goto rdi->f10;
}

void fun_4010e6() {
    goto 0x401020;
}

void fun_4010d6() {
    goto 0x401020;
}

void fun_4010b6() {
    goto 0x401020;
}

void fun_401e34() {
    int64_t v1;

    if (v1) 
        goto 0x401e79; else 
        goto "???";
}

void fun_401066() {
    goto 0x401020;
}

void fun_401126() {
    goto 0x401020;
}

void fun_401046() {
    goto 0x401020;
}

void fun_401156() {
    goto 0x401020;
}

/* std::ios_base::Init::~Init() */
int64_t _ZNSt8ios_base4InitD1Ev = 0x401196;

/* std::ios_base::Init::~Init() */
void _ZNSt8ios_base4InitD1Ev() {
    goto _ZNSt8ios_base4InitD1Ev;
}

void fun_4014af() {
    goto 0x4011df;
}

void fun_401116() {
    goto 0x401020;
}

/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> > >::~_State_impl() */
void _ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFvP6workerES4_EEEEED1Ev(int64_t* rdi) {
    *rdi = 0x4030b0;
    goto fun_401070;
}

void fun_401086() {
    goto 0x401020;
}

int64_t __gxx_personality_v0 = 0x401166;

void __gxx_personality_v0() {
    goto __gxx_personality_v0;
}

void fun_401146() {
    goto 0x401020;
}

void fun_401196() {
    goto 0x401020;
}

void fun_4014b7() {
    void** rbp1;
    void** rdx2;
    void** rcx3;

    fun_4010f0(rbp1, 40, rdx2, rcx3);
}

/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> > >::~_State_impl() */
void _ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFvP6workerES4_EEEEED0Ev(int64_t* rdi) {
    *rdi = 0x4030b0;
    fun_401070();
    goto fun_4010f0;
}

void fun_4010c6() {
    goto 0x401020;
}

int64_t pthread_create = 0x401096;

void pthread_create() {
    goto pthread_create;
}

void fun_401076() {
    goto 0x401020;
}

void fun_401136() {
    goto 0x401020;
}

void fun_401166() {
    goto 0x401020;
}

int64_t __cxa_atexit = 0x4010c6;

void _GLOBAL__sub_I__Z4taskP6worker() {
    fun_401130(0x4051f1);
    goto __cxa_atexit;
}

void fun_401096() {
    goto 0x401020;
}
