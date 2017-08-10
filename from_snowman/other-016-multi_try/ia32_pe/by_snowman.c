
int32_t _CxxThrowException = 0x729a;

void fun_40116a(void* a1, int32_t a2) {
    goto _CxxThrowException;
}

void fun_401970(int32_t* a1, int32_t* a2, int32_t* a3);

struct s0 {
    signed char[12] pad12;
    int32_t f12;
};

struct s1 {
    signed char[8] pad8;
    int32_t f8;
};

struct s2 {
    signed char[8] pad8;
    int32_t f8;
};

struct s3 {
    signed char[16] pad16;
    int32_t f16;
};

struct s4 {
    signed char[16] pad16;
    int32_t f16;
};

struct s5 {
    signed char[16] pad16;
    int32_t f16;
};

struct s6 {
    signed char[16] pad16;
    int32_t f16;
};

struct s7 {
    signed char[8] pad8;
    int32_t f8;
};

struct s8 {
    signed char[8] pad8;
    int32_t f8;
};

struct s9 {
    signed char[8] pad8;
    int32_t f8;
};

struct s10 {
    signed char[20] pad20;
    int32_t f20;
};

void fun_401679(int32_t ecx);

void fun_4019b5(int32_t ecx, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5);

void fun_40162e(int32_t* a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t* v5;
    int32_t ebp6;
    int32_t esi7;
    struct s0* ebp8;
    struct s1* ebp9;
    struct s2* ebp10;
    struct s3* ebp11;
    int32_t ebp12;
    struct s4* ebp13;
    struct s5* ebp14;
    struct s6* ebp15;
    struct s7* ebp16;
    struct s8* ebp17;
    int32_t ecx18;
    struct s9* ebp19;
    struct s10* ebp20;
    int32_t ebp21;
    int32_t ebp22;

    v5 = reinterpret_cast<int32_t*>(__return_address());
    fun_401970(0x4051d8, 12, v5);
    *reinterpret_cast<uint32_t*>(ebp6 - 28) = 0;
    esi7 = ebp8->f12;
    ebp9->f8 = ebp10->f8 + esi7 * ebp11->f16;
    *reinterpret_cast<uint32_t*>(ebp12 - 4) = 0;
    while (ebp13->f16 = ebp14->f16 - 1, ebp15->f16 >= 0) {
        ebp16->f8 = ebp17->f8 - esi7;
        ecx18 = ebp19->f8;
        ebp20->f20(ecx18);
    }
    *reinterpret_cast<int32_t*>(ebp21 - 28) = 1;
    *reinterpret_cast<int32_t*>(ebp22 - 4) = -2;
    fun_401679(ecx18);
    fun_4019b5(ecx18, 0x4051d8, 12, v5, a1);
    goto 0x4051d8;
}

/*
 * ??3@YAXPAX@Z
 * void __cdecl operator delete(void *)
 */
int32_t 3_YAXPAX_Z = 0x72be;

void fun_4015b8() {
    goto 3_YAXPAX_Z;
}

int32_t _amsg_exit = 0x72ce;

void fun_4016e2() {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x732c;

int32_t fun_401962() {
    goto _initterm_e;
}

int32_t _initterm = 0x7320;

void fun_40195c(int32_t ecx) {
    goto _initterm;
}

void* g0;

struct s11 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

int32_t fun_401810(struct s11* a1);

struct s12 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t f12;
    signed char[20] pad36;
    uint32_t f36;
};

struct s13 {
    signed char[60] pad60;
    int32_t f60;
};

struct s12* fun_401850(struct s13* a1, uint32_t a2);

uint32_t fun_4018a0(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6, int32_t* a7, int32_t* a8) {
    void* eax9;
    int32_t eax10;
    struct s12* eax11;
    uint32_t eax12;

    eax9 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax10 = fun_401810(0x400000);
    if (!eax10 || (eax11 = fun_401850(0x400000, a2 - 0x400000), eax11 == 0)) {
        g0 = eax9;
        return 0;
    } else {
        eax12 = ~(eax11->f36 >> 31) & 1;
        g0 = eax9;
        return eax12;
    }
}

int32_t _XcptFilter = 0x72fe;

void fun_4017fe() {
    goto _XcptFilter;
}

int32_t fun_401b1c(int32_t a1, int32_t a2, int32_t a3);

void fun_401b16(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_401a15(int32_t ecx) {
    int32_t eax2;

    eax2 = fun_401b1c(0, 0x10000, 0x30000);
    if (eax2) {
        fun_401b16(0, 0, 0, 0, 0);
    }
    return;
}

int32_t _crt_debugger_hook = 0x738c;

void fun_401aec(uint32_t ecx) {
    goto _crt_debugger_hook;
}

struct s14 {
    signed char[16] pad16;
    int32_t f16;
};

struct s15 {
    signed char[16] pad16;
    int32_t f16;
};

struct s16 {
    signed char[16] pad16;
    int32_t f16;
};

struct s17 {
    signed char[8] pad8;
    int32_t f8;
};

struct s18 {
    signed char[12] pad12;
    int32_t f12;
};

struct s19 {
    signed char[8] pad8;
    int32_t f8;
};

struct s20 {
    signed char[20] pad20;
    int32_t f20;
};

void fun_4015d0(int32_t* a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t* v5;
    int32_t ebp6;
    struct s14* ebp7;
    struct s15* ebp8;
    struct s16* ebp9;
    int32_t ecx10;
    struct s17* ebp11;
    struct s18* ebp12;
    struct s19* ebp13;
    struct s20* ebp14;
    int32_t ebp15;

    v5 = reinterpret_cast<int32_t*>(__return_address());
    fun_401970(0x4051b8, 20, v5);
    *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
    while (ebp7->f16 = ebp8->f16 - 1, ebp9->f16 >= 0) {
        ecx10 = ebp11->f8 - ebp12->f12;
        ebp13->f8 = ecx10;
        ebp14->f20();
    }
    *reinterpret_cast<int32_t*>(ebp15 - 4) = -2;
    fun_4019b5(ecx10, 0x4051b8, 20, v5, a1);
    goto 0x4051b8;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x73a2;

void fun_401af2() {
    goto terminate_YAXXZ;
}

struct s21 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s12* fun_401850(struct s13* a1, uint32_t a2) {
    struct s21* ecx3;
    uint32_t eax4;
    uint32_t esi5;
    uint32_t edx6;
    struct s12* eax7;
    uint32_t edi8;

    ecx3 = reinterpret_cast<struct s21*>(a1->f60 + reinterpret_cast<int32_t>(a1));
    eax4 = ecx3->f20;
    esi5 = ecx3->f6;
    edx6 = 0;
    eax7 = reinterpret_cast<struct s12*>(eax4 + reinterpret_cast<int32_t>(ecx3) + 24);
    if (!esi5) {
        addr_40188d_2:
        eax7 = reinterpret_cast<struct s12*>(0);
    } else {
        edi8 = a2;
        do {
            if (edi8 < eax7->f12) 
                continue;
            if (edi8 < eax7->f8 + eax7->f12) 
                break;
            ++edx6;
            ++eax7;
        } while (edx6 < esi5);
        goto addr_40188d_2;
    }
    return eax7;
}

int32_t _invoke_watson = 0x7430;

void fun_401b16(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

uint32_t g406020 = 0xbb40e64e;

void fun_401970(int32_t* a1, int32_t* a2, int32_t* a3) {
    void* esp4;
    void* ebp5;
    int32_t* esp6;
    int32_t ebx7;
    int32_t* esp8;
    int32_t esi9;
    int32_t* esp10;
    int32_t edi11;
    uint32_t eax12;
    uint32_t* esp13;
    int32_t* esp14;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 16);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp4) - reinterpret_cast<int32_t>(a2) - 4);
    *esp6 = ebx7;
    esp8 = esp6 - 1;
    *esp8 = esi9;
    esp10 = esp8 - 1;
    *esp10 = edi11;
    eax12 = g406020;
    esp13 = reinterpret_cast<uint32_t*>(esp10 - 1);
    *esp13 = eax12 ^ reinterpret_cast<uint32_t>(ebp5);
    esp14 = reinterpret_cast<int32_t*>(esp13 - 1);
    *esp14 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) - 16);
    goto *esp14;
}

void fun_4019b5(int32_t ecx, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5) {
    int32_t ebp6;
    int32_t* esp7;
    void* ebp8;

    g0 = *reinterpret_cast<void**>(ebp6 - 16);
    esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + 4 - 4);
    *esp7 = reinterpret_cast<int32_t>(__return_address());
    goto *esp7;
}

struct s22 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

int32_t fun_401810(struct s11* a1) {
    struct s22* eax2;
    int32_t edx3;

    if (a1->f0 != 0x5a4d || (eax2 = reinterpret_cast<struct s22*>(a1->f60 + reinterpret_cast<int32_t>(a1)), eax2->f0 != 0x4550)) {
        return 0;
    } else {
        edx3 = 0;
        *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<uint1_t>(eax2->f24 == 0x10b);
        return edx3;
    }
}

int32_t fun_401005(int32_t* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t* a8, int32_t* a9, int32_t* a10) {
    void* ebp11;
    void* eax12;

    ebp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax12 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp11) - 12);
    if (a2 + 1 == 10) {
        fun_40116a(reinterpret_cast<int32_t>(ebp11) - 20, 0x405084);
    }
    if (a2 + 1 + 1 + 5 == 7) {
        fun_40116a(reinterpret_cast<int32_t>(ebp11) - 24, 0x405070);
    }
    g0 = eax12;
    return a2 + 1 + 1 + 5 + 1 + 2;
}

void fun_4017a6() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x404c60);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x404d60);
    }
    return;
}

int32_t fun_401a47() {
    return 0;
}

int32_t _controlfp_s = 0x7442;

int32_t fun_401b1c(int32_t a1, int32_t a2, int32_t a3) {
    goto _controlfp_s;
}

struct s23 {
    signed char[20] pad20;
    int32_t f20;
};

struct s24 {
    signed char[16] pad16;
    int32_t f16;
};

struct s25 {
    signed char[12] pad12;
    int32_t f12;
};

struct s26 {
    signed char[8] pad8;
    int32_t* f8;
};

void fun_401679(int32_t ecx) {
    int32_t ebp2;
    int32_t v3;
    struct s23* ebp4;
    int32_t v5;
    struct s24* ebp6;
    int32_t v7;
    struct s25* ebp8;
    int32_t* v9;
    struct s26* ebp10;

    if (!*reinterpret_cast<int32_t*>(ebp2 - 28)) {
        v3 = ebp4->f20;
        v5 = ebp6->f16;
        v7 = ebp8->f12;
        v9 = ebp10->f8;
        fun_4015d0(v9, v7, v5, v3);
    }
    return;
}

/*
 * ?_type_info_dtor_internal_method@type_info@@QAEXXZ
 * public: void __thiscall type_info::_type_info_dtor_internal_method(void)
 */
int32_t _type_info_dtor_internal_method_type_info_QAEXXZ = 0x73b6;

void fun_401af8() {
    goto _type_info_dtor_internal_method_type_info_QAEXXZ;
}

void fun_401afe();

void fun_401786(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t* a5, int32_t* a6) {
    fun_401afe();
    return;
}

int32_t _lock = 0x7404;

void fun_401b0a() {
    goto _lock;
}

int32_t __dllonexit = 0x73f6;

int32_t fun_401b04(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6, int32_t* a7) {
    goto __dllonexit;
}

int32_t* g4064e0;

int32_t DecodePointer = 0x752a;

int32_t* g4064d0;

struct s27 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t EncodePointer = 0x74a4;

struct s28 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t _onexit = 0x740c;

int32_t fun_4016ee() {
    int32_t* v1;
    int32_t esi2;
    int32_t eax3;
    int32_t ebp4;
    int32_t ecx5;
    int32_t ebp6;
    int32_t* v7;
    int32_t eax8;
    int32_t ebp9;
    int32_t* v10;
    int32_t eax11;
    int32_t ebp12;
    int32_t v13;
    int32_t ebp14;
    int32_t v15;
    int32_t ebp16;
    int32_t v17;
    struct s27* ebp18;
    int32_t esi19;
    int32_t eax20;
    int32_t eax21;
    int32_t ebp22;
    int32_t v23;
    int32_t ebp24;
    int32_t* eax25;
    int32_t v26;
    int32_t ebp27;
    int32_t* eax28;
    int32_t ebp29;
    int32_t v30;
    struct s28* ebp31;

    fun_401970(0x4051f8, 20, __return_address());
    v1 = g4064e0;
    esi2 = DecodePointer;
    eax3 = reinterpret_cast<int32_t>(esi2());
    *reinterpret_cast<int32_t*>(ebp4 - 28) = eax3;
    if (eax3 != -1) {
        fun_401b0a();
        ecx5 = 8;
        *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
        v7 = g4064e0;
        eax8 = reinterpret_cast<int32_t>(esi2(8, v7));
        *reinterpret_cast<int32_t*>(ebp9 - 28) = eax8;
        v10 = g4064d0;
        eax11 = reinterpret_cast<int32_t>(esi2(8, v10, v7));
        *reinterpret_cast<int32_t*>(ebp12 - 32) = eax11;
        v13 = ebp14 - 32;
        v15 = ebp16 - 28;
        v17 = ebp18->f8;
        esi19 = EncodePointer;
        eax20 = reinterpret_cast<int32_t>(esi19(8, v17, v15, v13, v10, v7));
        eax21 = fun_401b04(8, eax20, v17, v15, v13, v10, v7);
        *reinterpret_cast<int32_t*>(ebp22 - 36) = eax21;
        v23 = *reinterpret_cast<int32_t*>(ebp24 - 28);
        eax25 = reinterpret_cast<int32_t*>(esi19(8, v23, v13, v10, v7));
        g4064e0 = eax25;
        v26 = *reinterpret_cast<int32_t*>(ebp27 - 32);
        eax28 = reinterpret_cast<int32_t*>(esi19(8, v26, v23, v13, v10, v7));
        g4064d0 = eax28;
        *reinterpret_cast<int32_t*>(ebp29 - 4) = -2;
        fun_401786(8, v26, v23, v13, v10, v7);
    } else {
        v30 = ebp31->f8;
        _onexit();
        ecx5 = v30;
    }
    fun_4019b5(ecx5, v1, 0x4051f8, 20, __return_address());
    goto v1;
}

int32_t GetSystemTimeAsFileTime = 0x7590;

int32_t GetCurrentProcessId = 0x757a;

int32_t GetCurrentThreadId = 0x7564;

int32_t GetTickCount = 0x7554;

int32_t QueryPerformanceCounter = 0x753a;

int32_t g406024 = 0x44bf19b1;

void fun_401a50(int32_t* a1) {
    uint32_t eax2;
    void* v3;
    int32_t esi4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t esi8;
    uint32_t v9;
    uint32_t v10;

    eax2 = g406020;
    if (eax2 == 0xbb40e64e || !(0xffff0000 & eax2)) {
        v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
        GetSystemTimeAsFileTime(v3, esi4);
        eax5 = reinterpret_cast<uint32_t>(GetCurrentProcessId(v3, esi4));
        eax6 = reinterpret_cast<uint32_t>(GetCurrentThreadId(v3, esi4));
        eax7 = reinterpret_cast<uint32_t>(GetTickCount(v3, esi4));
        QueryPerformanceCounter();
        esi8 = eax5 ^ eax6 ^ eax7 ^ (v9 ^ v10);
        if (esi8 != 0xbb40e64e) {
            if (!(0xffff0000 & esi8)) {
                esi8 = esi8 | (esi8 | 0x4711) << 16;
            }
        } else {
            esi8 = 0xbb40e64f;
        }
        g406020 = esi8;
        g406024 = reinterpret_cast<int32_t>(~esi8);
    } else {
        g406024 = reinterpret_cast<int32_t>(~eax2);
    }
    return;
}

int32_t _unlock = 0x73ec;

void fun_401afe() {
    goto _unlock;
}

int32_t fun_40178f(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_4016ee();
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _except_handler4_common = 0x7416;

void fun_401b10(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto _except_handler4_common;
}

int32_t g406290;

uint32_t g40628c;

int32_t g406288;

int32_t g406284;

int32_t g406280;

int32_t g40627c;

int16_t g4062a8;

int16_t g40629c;

int16_t g406278;

int16_t g406274;

int16_t g406270;

int16_t g40626c;

uint32_t g4062a0;

int32_t g406294;

int32_t g406298;

void* g4062a4;

int32_t g4061e0 = 0;

int32_t g406194 = 0;

int32_t g406188 = 0;

int32_t g40618c = 0;

int32_t IsDebuggerPresent = 0x7516;

int32_t g4061d8 = 0;

int32_t SetUnhandledExceptionFilter = 0x74f8;

int32_t UnhandledExceptionFilter = 0x74dc;

int32_t GetCurrentProcess = 0x74c8;

int32_t TerminateProcess = 0x74b4;

void fun_40115a(uint32_t ecx, int32_t a2) {
    uint32_t eflags3;
    int1_t zf4;
    int32_t* esp5;
    void* esp6;
    int32_t eax7;
    int32_t edx8;
    int32_t ebx9;
    int32_t esi10;
    int32_t edi11;
    int16_t ss12;
    int16_t cs13;
    int16_t ds14;
    int16_t es15;
    int16_t fs16;
    int16_t gs17;
    int32_t ebp18;
    int32_t eax19;
    uint32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int1_t zf23;
    int32_t eax24;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = 0;
    zf4 = ecx == g406020;
    if (zf4) {
        return;
    }
    esp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<uint32_t>(esp5) < 0x328;
    esp6 = reinterpret_cast<void*>(esp5 - 0xca);
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = esp6 == 0;
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<int32_t>(esp6) < reinterpret_cast<int32_t>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    g406290 = eax7;
    g40628c = ecx;
    g406288 = edx8;
    g406284 = ebx9;
    g406280 = esi10;
    g40627c = edi11;
    g4062a8 = ss12;
    g40629c = cs13;
    g406278 = ds14;
    g406274 = es15;
    g406270 = fs16;
    g40626c = gs17;
    g4062a0 = eflags3 & 0xfcffff;
    g406294 = ebp18;
    g406298 = reinterpret_cast<int32_t>(__return_address());
    g4062a4 = reinterpret_cast<void*>(esp5 + 2);
    g4061e0 = 0x10001;
    eax19 = g406298;
    g406194 = eax19;
    g406188 = 0xc0000409;
    g40618c = 1;
    eax20 = g406020;
    eax21 = g406024;
    eax22 = reinterpret_cast<int32_t>(IsDebuggerPresent(eax20, eax21));
    g4061d8 = eax22;
    fun_401aec(ecx);
    SetUnhandledExceptionFilter(1, 0, eax20, eax21);
    UnhandledExceptionFilter(1, 0x404744, 0, eax20, eax21);
    zf23 = g4061d8 == 0;
    if (zf23) 
        goto addr_40159c_5;
    addr_4015a4_6:
    eax24 = reinterpret_cast<int32_t>(GetCurrentProcess(1, 0xc0000409, 0x404744, 0, eax20, eax21));
    TerminateProcess(1, eax24, 0xc0000409, 0x404744, 0, eax20, eax21);
    return;
    addr_40159c_5:
    fun_401aec(1);
    goto addr_4015a4_6;
}

int32_t fun_4011c7(int32_t ecx) {
    return ecx;
}

int32_t g406180 = 0;

int32_t g406174 = 0;

struct s29 {
    int32_t f0;
    int32_t* f4;
    int32_t* f8;
    int32_t* f12;
    int32_t* f16;
};

struct s30 {
    int32_t f0;
    int32_t* f4;
};

int32_t _exit = 0x72f6;

int32_t g406184 = 0;

int32_t _cexit = 0x72ec;

void fun_40136b(int32_t ecx) {
    int32_t** esp2;
    int32_t ebp3;
    int32_t eax4;
    int32_t ebp5;
    int1_t zf6;
    struct s29* esp7;
    struct s30* esp8;
    int1_t zf9;
    struct s29* esp10;
    int32_t ebp11;
    struct s29* esp12;

    esp2 = *reinterpret_cast<int32_t***>(ebp3 - 24);
    eax4 = *reinterpret_cast<int32_t*>(ebp5 - 32);
    g406180 = eax4;
    zf6 = g406174 == 0;
    if (zf6) {
        esp7 = reinterpret_cast<struct s29*>(esp2 - 1);
        esp7->f0 = eax4;
        esp8 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp7) - 4);
        esp8->f0 = 0x401387;
        _exit();
        esp2 = &esp8->f4;
    }
    zf9 = g406184 == 0;
    if (zf9) {
        esp10 = reinterpret_cast<struct s29*>(esp2 - 1);
        esp10->f0 = 0x401395;
        _cexit();
        esp2 = &esp10->f4;
    }
    *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
    esp12 = reinterpret_cast<struct s29*>(esp2 - 1);
    esp12->f0 = 0x4013a6;
    fun_4019b5(ecx, esp12->f4, esp12->f8, esp12->f12, esp12->f16);
    goto esp12->f4;
}

/* (image base) */
int16_t image_base_;

int32_t g40003c;

int32_t __set_app_type = 0x737a;

int32_t g4064b8;

int32_t* _fmode = reinterpret_cast<int32_t*>(0x7370);

int32_t* _commode = reinterpret_cast<int32_t*>(0x7364);

int32_t g4064b4;

int32_t g406054 = 1;

int32_t __setusermatherr = 0x7350;

int32_t fun_401a44();

int32_t g406050 = -2;

int32_t _configthreadlocale = 0x733a;

void fun_4013ee() {
    int1_t zf1;
    int32_t eax2;
    int32_t eax3;
    int32_t ecx4;
    int32_t* eax5;
    int32_t ecx6;
    int32_t* eax7;
    int32_t* eax8;
    int32_t ecx9;
    int1_t zf10;
    int1_t zf11;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1 || ((eax2 = g40003c, *reinterpret_cast<int32_t*>(eax2 + 0x400000) != 0x4550) || (*reinterpret_cast<int16_t*>(eax2 + 0x400018) != 0x10b || *reinterpret_cast<uint32_t*>(eax2 + 0x400074) <= 14))) {
        eax3 = 0;
    } else {
        ecx4 = 0;
        *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(eax2 + 0x4000e8));
        eax3 = ecx4;
    }
    g406174 = eax3;
    __set_app_type();
    eax5 = reinterpret_cast<int32_t*>(EncodePointer(1));
    ecx6 = g4064b8;
    g4064d0 = eax5;
    g4064e0 = eax5;
    eax7 = _fmode;
    *eax7 = ecx6;
    eax8 = _commode;
    ecx9 = g4064b4;
    *eax8 = ecx9;
    fun_4017a6();
    fun_401a47();
    zf10 = g406054 == 0;
    if (zf10) {
        __setusermatherr();
        ecx9 = reinterpret_cast<int32_t>(fun_401a44);
    }
    fun_401a15(ecx9);
    zf11 = g406050 == -1;
    if (zf11) {
        _configthreadlocale(ecx9);
    }
    goto 0xff;
}

int32_t fun_4015f3() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;

    *reinterpret_cast<int32_t*>(ebp1 - 28) = *reinterpret_cast<int32_t*>(ebp2 - 20);
    *reinterpret_cast<int32_t*>(ebp3 - 32) = **reinterpret_cast<int32_t**>(ebp4 - 28);
    if (**reinterpret_cast<int32_t**>(ebp5 - 32) == 0xe06d7363) {
        fun_401af2();
    } else {
        *reinterpret_cast<int32_t*>(ebp6 - 36) = 0;
        return *reinterpret_cast<int32_t*>(ebp7 - 36);
    }
}

struct s31 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f16;
    int32_t f20;
};

int32_t fun_401691(struct s31** a1) {
    if ((*a1)->f0 == 0xe06d7363 && ((*a1)->f16 == 3 && ((*a1)->f20 == 0x19930520 || ((*a1)->f20 == 0x19930521 || ((*a1)->f20 == 0x19930522 || (*a1)->f20 == 0x1994000))))) {
        fun_401af2();
    }
    return 0;
}

void fun_4017cc() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x404e68);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x404f68);
    }
    return;
}

void fun_4017f2() {
    goto _cexit;
}

int32_t fun_40192b() {
    int32_t edx1;
    int32_t ebp2;

    edx1 = 0;
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return edx1;
}

void fun_401a3e() {
    goto __setusermatherr;
}

void fun_401170(int32_t* ecx) {
    *ecx = 0x404740;
    return;
}

struct s32 {
    signed char[8] pad8;
    int32_t f8;
};

struct s33 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_4010a3() {
    struct s32* ebp1;
    struct s33* ebp2;
    int32_t ebp3;

    ebp1->f8 = ebp2->f8 + 11;
    *reinterpret_cast<int32_t*>(ebp3 - 4) = 0;
    return 0x4010c0;
}

int32_t fun_4015be() {
    int32_t** eax1;

    if (**eax1 == 0xe06d7363) {
        goto fun_401af2;
    } else {
        return 0;
    }
}

struct s34 {
    signed char[4] pad4;
    int32_t f4;
};

struct s34* g18;

struct s34* fun_4011cc() {
    struct s34* eax1;

    eax1 = g18;
    return eax1;
}

int32_t __getmainargs = 0x72dc;

void fun_4016e8() {
    goto __getmainargs;
}

int32_t fun_4013a7() {
    int1_t zf1;
    int32_t eax2;
    int32_t ecx3;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1 || ((eax2 = g40003c, *reinterpret_cast<int32_t*>(eax2 + 0x400000) != 0x4550) || (*reinterpret_cast<int16_t*>(eax2 + 0x400018) != 0x10b || *reinterpret_cast<uint32_t*>(eax2 + 0x400074) <= 14))) {
        return 0;
    } else {
        ecx3 = 0;
        *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(eax2 + 0x4000e8));
        return ecx3;
    }
}

int32_t exit = 0x730c;

void fun_401804() {
    goto exit;
}

int32_t g4064e4;

int32_t HeapSetInformation = 0x748e;

int32_t InterlockedCompareExchange = 0x7470;

int32_t Sleep = 0x7468;

int32_t g4064bc;

int32_t InterlockedExchange = 0x7452;

int32_t g4064e8;

int32_t g40616c = 0;

int32_t* __initenv = reinterpret_cast<int32_t*>(0x7314);

int32_t g406170 = 0;

int32_t g406168 = 0;

void fun_4014a8() {
    int32_t* v1;
    int1_t zf2;
    int32_t ebp3;
    struct s34* eax4;
    int32_t esi5;
    int32_t ebp6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t ecx11;
    int32_t ebp12;
    int32_t eax13;
    int32_t ebp14;
    int1_t zf15;
    uint32_t eax16;
    int32_t eax17;
    int32_t* ecx18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t eax22;
    int1_t zf23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    fun_401a50(v1);
    fun_401970(0x405198, 16, v1);
    zf2 = g4064e4 == 0;
    if (zf2) {
        HeapSetInformation(0, 1, 0, 0, 0x405198, 16, v1);
    }
    *reinterpret_cast<int32_t*>(ebp3 - 4) = 0;
    eax4 = g18;
    esi5 = eax4->f4;
    *reinterpret_cast<int32_t*>(ebp6 - 28) = 0;
    while (eax7 = reinterpret_cast<int32_t>(InterlockedCompareExchange(0x4064cc, esi5, 0, 0x405198, 16, v1)), !!eax7) {
        if (eax7 == esi5) 
            goto addr_401264_7;
        Sleep(0x3e8, 0x4064cc, esi5, 0, 0x405198, 16, v1);
    }
    addr_40127c_10:
    eax8 = g4064bc;
    if (eax8 != 1) {
        eax9 = g4064bc;
        if (eax9) {
            g406184 = 1;
        } else {
            g4064bc = 1;
            eax10 = fun_401962();
            ecx11 = 0x404618;
            if (eax10) {
                *reinterpret_cast<int32_t*>(ebp12 - 4) = -2;
                goto 0x4013a1;
            }
        }
    } else {
        fun_4016e2();
        ecx11 = 31;
    }
    eax13 = g4064bc;
    if (eax13 == 1) {
        fun_40195c(ecx11);
        ecx11 = 0x404208;
        g4064bc = 2;
    }
    if (!*reinterpret_cast<int32_t*>(ebp14 - 28)) {
        InterlockedExchange(ecx11, 0x4064cc, 0, 0x4064cc, esi5, 0, 0x405198, 16, v1);
    }
    zf15 = g4064e8 == 0;
    if (!zf15 && (eax16 = fun_4018a0(ecx11, 0x4064e8, 0x4064cc, esi5, 0, 0x405198, 16, v1), !!eax16)) {
        g4064e8(0x4064e8, 0, 2, 0, 0x4064cc, esi5, 0, 0x405198, 16, v1);
    }
    eax17 = g40616c;
    ecx18 = __initenv;
    *ecx18 = eax17;
    v19 = g40616c;
    v20 = g406170;
    v21 = g406168;
    eax22 = fun_401005(ecx18, v21, v20, v19, 0x4064cc, esi5, 0, 0x405198, 16, v1);
    g406180 = eax22;
    zf23 = g406174 == 0;
    if (!zf23) 
        goto 0x401387;
    exit();
    *reinterpret_cast<int32_t*>(ebp24 - 32) = ***reinterpret_cast<int32_t***>(ebp25 - 20);
    fun_4017fe();
    goto eax22;
    addr_401264_7:
    *reinterpret_cast<int32_t*>(ebp26 - 28) = 1;
    goto addr_40127c_10;
}

void fun_4016d3() {
    SetUnhandledExceptionFilter();
    goto fun_401691;
}

void fun_4017f8() {
    goto _exit;
}

void fun_40193e() {
}

int32_t fun_401a44() {
    return 0;
}

int32_t* fun_40117b(int32_t* ecx, unsigned char a2) {
    int32_t* eax3;
    int32_t* esi4;
    int32_t v5;

    if (!(a2 & 2)) {
        fun_401af8();
        if (a2 & 1) {
            fun_4015b8();
        }
        eax3 = ecx;
    } else {
        esi4 = ecx - 1;
        v5 = *esi4;
        fun_40162e(ecx, 12, v5, fun_401af8);
        if (a2 & 1) {
            fun_4015b8();
        }
        eax3 = esi4;
    }
    return eax3;
}

struct s35 {
    signed char[8] pad8;
    int32_t f8;
};

struct s36 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_4010cb() {
    struct s35* ebp1;
    struct s36* ebp2;
    int32_t ebp3;

    ebp1->f8 = ebp2->f8 + 1;
    *reinterpret_cast<int32_t*>(ebp3 - 4) = -1;
    return 0x4010fe;
}

int32_t g4064b0;

int32_t g4064ac;

int32_t g40617c = 0;

int32_t g406178 = 0;

void fun_4011d3() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    fun_40178f(fun_4017cc);
    eax1 = g4064b0;
    v2 = g4064ac;
    g40617c = eax1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x406168, 0x406170, 0x40616c, v2, 0x40617c));
    g406178 = eax3;
    if (eax3 < 0) {
        fun_4016e2();
    }
    return;
}

void fun_4019c9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_401b10(0x406020, fun_40115a, a1, a2, a3, a4);
    return;
}

void fun_401a4a() {
    goto __set_app_type;
}

void fun_401b22() {
    goto InterlockedExchange;
}

int32_t __CxxFrameHandler3 = 0x7284;

void fun_401113() {
    goto __CxxFrameHandler3;
}

struct s37 {
    signed char[8] pad8;
    int32_t f8;
};

struct s38 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_4010e1() {
    struct s37* ebp1;
    struct s38* ebp2;
    int32_t ebp3;

    ebp1->f8 = ebp2->f8 + 10;
    *reinterpret_cast<int32_t*>(ebp3 - 4) = -1;
    return 0x4010fe;
}

void fun_4019ee() {
    goto _configthreadlocale;
}

void fun_401b28() {
    goto Sleep;
}

void fun_4019f4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    if (a1) {
        fun_401b16(a2, a3, a4, a5, a6);
    }
    return;
}

void fun_401b2e() {
    goto InterlockedCompareExchange;
}

void fun_401b34() {
    goto HeapSetInformation;
}

void fun_401b3a() {
    goto EncodePointer;
}

void fun_401b40() {
    goto TerminateProcess;
}

void fun_401b46() {
    goto GetCurrentProcess;
}

void fun_401b4c() {
    goto UnhandledExceptionFilter;
}

void fun_401b52() {
    goto SetUnhandledExceptionFilter;
}

void fun_401b58() {
    goto IsDebuggerPresent;
}

void fun_401b5e() {
    goto DecodePointer;
}

void fun_401b64() {
    goto QueryPerformanceCounter;
}

void fun_401b6a() {
    goto GetTickCount;
}

void fun_401b70() {
    goto GetCurrentThreadId;
}

void fun_401b76() {
    goto GetCurrentProcessId;
}

void fun_401b7c() {
    goto GetSystemTimeAsFileTime;
}

void fun_402e10() {
    uint32_t ecx1;
    int32_t v2;

    ecx1 = *reinterpret_cast<uint32_t*>(v2 - 28) ^ reinterpret_cast<uint32_t>(v2 + 12);
    fun_40115a(ecx1, __return_address());
    goto 0x401154;
}

void fun_403e31() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;
    signed char* eax214;
    signed char* eax215;
    signed char al216;
    signed char* eax217;
    signed char* eax218;
    signed char al219;
    signed char* eax220;
    signed char* eax221;
    signed char al222;
    signed char* eax223;
    signed char* eax224;
    signed char al225;
    signed char* eax226;
    signed char* eax227;
    signed char al228;
    signed char* eax229;
    signed char* eax230;
    signed char al231;
    signed char* eax232;
    signed char* eax233;
    signed char al234;
    signed char* eax235;
    signed char* eax236;
    signed char al237;
    signed char* eax238;
    signed char* eax239;
    signed char al240;
    signed char* eax241;
    signed char* eax242;
    signed char al243;
    signed char* eax244;
    signed char* eax245;
    signed char al246;
    signed char* eax247;
    signed char* eax248;
    signed char al249;
    signed char* eax250;
    signed char* eax251;
    signed char al252;
    signed char* eax253;
    signed char* eax254;
    signed char al255;
    signed char* eax256;
    signed char* eax257;
    signed char al258;
    signed char* eax259;
    signed char* eax260;
    signed char al261;
    signed char* eax262;
    signed char* eax263;
    signed char al264;
    signed char* eax265;
    signed char* eax266;
    signed char al267;
    signed char* eax268;
    signed char* eax269;
    signed char al270;
    signed char* eax271;
    signed char* eax272;
    signed char al273;
    signed char* eax274;
    signed char* eax275;
    signed char al276;
    signed char* eax277;
    signed char* eax278;
    signed char al279;
    signed char* eax280;
    signed char* eax281;
    signed char al282;
    signed char* eax283;
    signed char* eax284;
    signed char al285;
    signed char* eax286;
    signed char* eax287;
    signed char al288;
    signed char* eax289;
    signed char* eax290;
    signed char al291;
    signed char* eax292;
    signed char* eax293;
    signed char al294;
    signed char* eax295;
    signed char* eax296;
    signed char al297;
    signed char* eax298;
    signed char* eax299;
    signed char al300;
    signed char* eax301;
    signed char* eax302;
    signed char al303;
    signed char* eax304;
    signed char* eax305;
    signed char al306;
    signed char* eax307;
    signed char* eax308;
    signed char al309;
    signed char* eax310;
    signed char* eax311;
    signed char al312;
    signed char* eax313;
    signed char* eax314;
    signed char al315;
    signed char* eax316;
    signed char* eax317;
    signed char al318;
    signed char* eax319;
    signed char* eax320;
    signed char al321;
    signed char* eax322;
    signed char* eax323;
    signed char al324;
    signed char* eax325;
    signed char* eax326;
    signed char al327;
    signed char* eax328;
    signed char* eax329;
    signed char al330;
    signed char* eax331;
    signed char* eax332;
    signed char al333;
    signed char* eax334;
    signed char* eax335;
    signed char al336;
    signed char* eax337;
    signed char* eax338;
    signed char al339;
    signed char* eax340;
    signed char* eax341;
    signed char al342;
    signed char* eax343;
    signed char* eax344;
    signed char al345;
    signed char* eax346;
    signed char* eax347;
    signed char al348;
    signed char* eax349;
    signed char* eax350;
    signed char al351;
    signed char* eax352;
    signed char* eax353;
    signed char al354;
    signed char* eax355;
    signed char* eax356;
    signed char al357;
    signed char* eax358;
    signed char* eax359;
    signed char al360;
    signed char* eax361;
    signed char* eax362;
    signed char al363;
    signed char* eax364;
    signed char* eax365;
    signed char al366;
    signed char* eax367;
    signed char* eax368;
    signed char al369;
    signed char* eax370;
    signed char* eax371;
    signed char al372;
    signed char* eax373;
    signed char* eax374;
    signed char al375;
    signed char* eax376;
    signed char* eax377;
    signed char al378;
    signed char* eax379;
    signed char* eax380;
    signed char al381;
    signed char* eax382;
    signed char* eax383;
    signed char al384;
    signed char* eax385;
    signed char* eax386;
    signed char al387;
    signed char* eax388;
    signed char* eax389;
    signed char al390;
    signed char* eax391;
    signed char* eax392;
    signed char al393;
    signed char* eax394;
    signed char* eax395;
    signed char al396;
    signed char* eax397;
    signed char* eax398;
    signed char al399;
    signed char* eax400;
    signed char* eax401;
    signed char al402;
    signed char* eax403;
    signed char* eax404;
    signed char al405;
    signed char* eax406;
    signed char* eax407;
    signed char al408;
    signed char* eax409;
    signed char* eax410;
    signed char al411;
    signed char* eax412;
    signed char* eax413;
    signed char al414;
    signed char* eax415;
    signed char* eax416;
    signed char al417;
    signed char* eax418;
    signed char* eax419;
    signed char al420;
    signed char* eax421;
    signed char* eax422;
    signed char al423;
    signed char* eax424;
    signed char* eax425;
    signed char al426;
    signed char* eax427;
    signed char* eax428;
    signed char al429;
    signed char* eax430;
    signed char* eax431;
    signed char al432;
    signed char* eax433;
    signed char* eax434;
    signed char al435;
    signed char* eax436;
    signed char* eax437;
    signed char al438;
    signed char* eax439;
    signed char* eax440;
    signed char al441;
    signed char* eax442;
    signed char* eax443;
    signed char al444;
    signed char* eax445;
    signed char* eax446;
    signed char al447;
    signed char* eax448;
    signed char* eax449;
    signed char al450;
    signed char* eax451;
    signed char* eax452;
    signed char al453;
    signed char* eax454;
    signed char* eax455;
    signed char al456;
    signed char* eax457;
    signed char* eax458;
    signed char al459;
    signed char* eax460;
    signed char* eax461;
    signed char al462;
    signed char* eax463;
    signed char* eax464;
    signed char al465;
    signed char* eax466;
    signed char* eax467;
    signed char al468;
    signed char* eax469;
    signed char* eax470;
    signed char al471;
    signed char* eax472;
    signed char* eax473;
    signed char al474;
    signed char* eax475;
    signed char* eax476;
    signed char al477;
    signed char* eax478;
    signed char* eax479;
    signed char al480;
    signed char* eax481;
    signed char* eax482;
    signed char al483;
    signed char* eax484;
    signed char* eax485;
    signed char al486;
    signed char* eax487;
    signed char* eax488;
    signed char al489;
    signed char* eax490;
    signed char* eax491;
    signed char al492;
    signed char* eax493;
    signed char* eax494;
    signed char al495;
    signed char* eax496;
    signed char* eax497;
    signed char al498;
    signed char* eax499;
    signed char* eax500;
    signed char al501;
    signed char* eax502;
    signed char* eax503;
    signed char al504;
    signed char* eax505;
    signed char* eax506;
    signed char al507;
    signed char* eax508;
    signed char* eax509;
    signed char al510;
    signed char* eax511;
    signed char* eax512;
    signed char al513;
    signed char* eax514;
    signed char* eax515;
    signed char al516;
    signed char* eax517;
    signed char* eax518;
    signed char al519;
    signed char* eax520;
    signed char* eax521;
    signed char al522;
    signed char* eax523;
    signed char* eax524;
    signed char al525;
    signed char* eax526;
    signed char* eax527;
    signed char al528;
    signed char* eax529;
    signed char* eax530;
    signed char al531;
    signed char* eax532;
    signed char* eax533;
    signed char al534;
    signed char* eax535;
    signed char* eax536;
    signed char al537;
    signed char* eax538;
    signed char* eax539;
    signed char al540;
    signed char* eax541;
    signed char* eax542;
    signed char al543;
    signed char* eax544;
    signed char* eax545;
    signed char al546;
    signed char* eax547;
    signed char* eax548;
    signed char al549;
    signed char* eax550;
    signed char* eax551;
    signed char al552;
    signed char* eax553;
    signed char* eax554;
    signed char al555;
    signed char* eax556;
    signed char* eax557;
    signed char al558;
    signed char* eax559;
    signed char* eax560;
    signed char al561;
    signed char* eax562;
    signed char* eax563;
    signed char al564;
    signed char* eax565;
    signed char* eax566;
    signed char al567;
    signed char* eax568;
    signed char* eax569;
    signed char al570;
    signed char* eax571;
    signed char* eax572;
    signed char al573;
    signed char* eax574;
    signed char* eax575;
    signed char al576;
    signed char* eax577;
    signed char* eax578;
    signed char al579;
    signed char* eax580;
    signed char* eax581;
    signed char al582;
    signed char* eax583;
    signed char* eax584;
    signed char al585;
    signed char* eax586;
    signed char* eax587;
    signed char al588;
    signed char* eax589;
    signed char* eax590;
    signed char al591;
    signed char* eax592;
    signed char* eax593;
    signed char al594;
    signed char* eax595;
    signed char* eax596;
    signed char al597;
    signed char* eax598;
    signed char* eax599;
    signed char al600;
    signed char* eax601;
    signed char* eax602;
    signed char al603;
    signed char* eax604;
    signed char* eax605;
    signed char al606;
    signed char* eax607;
    signed char* eax608;
    signed char al609;
    signed char* eax610;
    signed char* eax611;
    signed char al612;
    signed char* eax613;
    signed char* eax614;
    signed char al615;
    signed char* eax616;
    signed char* eax617;
    signed char al618;
    signed char* eax619;
    signed char* eax620;
    signed char al621;
    signed char* eax622;
    signed char* eax623;
    signed char al624;
    signed char* eax625;
    signed char* eax626;
    signed char al627;
    signed char* eax628;
    signed char* eax629;
    signed char al630;
    signed char* eax631;
    signed char* eax632;
    signed char al633;
    signed char* eax634;
    signed char* eax635;
    signed char al636;
    signed char* eax637;
    signed char* eax638;
    signed char al639;
    signed char* eax640;
    signed char* eax641;
    signed char al642;
    signed char* eax643;
    signed char* eax644;
    signed char al645;
    signed char* eax646;
    signed char* eax647;
    signed char al648;
    signed char* eax649;
    signed char* eax650;
    signed char al651;
    signed char* eax652;
    signed char* eax653;
    signed char al654;
    signed char* eax655;
    signed char* eax656;
    signed char al657;
    signed char* eax658;
    signed char* eax659;
    signed char al660;
    signed char* eax661;
    signed char* eax662;
    signed char al663;
    signed char* eax664;
    signed char* eax665;
    signed char al666;
    signed char* eax667;
    signed char* eax668;
    signed char al669;
    signed char* eax670;
    signed char* eax671;
    signed char al672;
    signed char* eax673;
    signed char* eax674;
    signed char al675;
    signed char* eax676;
    signed char* eax677;
    signed char al678;
    signed char* eax679;
    signed char* eax680;
    signed char al681;
    signed char* eax682;
    signed char* eax683;
    signed char al684;
    signed char* eax685;
    signed char* eax686;
    signed char al687;
    signed char* eax688;
    signed char* eax689;
    signed char al690;
    signed char* eax691;
    signed char* eax692;
    signed char al693;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
    *eax217 = reinterpret_cast<signed char>(*eax218 + al219);
    *eax220 = reinterpret_cast<signed char>(*eax221 + al222);
    *eax223 = reinterpret_cast<signed char>(*eax224 + al225);
    *eax226 = reinterpret_cast<signed char>(*eax227 + al228);
    *eax229 = reinterpret_cast<signed char>(*eax230 + al231);
    *eax232 = reinterpret_cast<signed char>(*eax233 + al234);
    *eax235 = reinterpret_cast<signed char>(*eax236 + al237);
    *eax238 = reinterpret_cast<signed char>(*eax239 + al240);
    *eax241 = reinterpret_cast<signed char>(*eax242 + al243);
    *eax244 = reinterpret_cast<signed char>(*eax245 + al246);
    *eax247 = reinterpret_cast<signed char>(*eax248 + al249);
    *eax250 = reinterpret_cast<signed char>(*eax251 + al252);
    *eax253 = reinterpret_cast<signed char>(*eax254 + al255);
    *eax256 = reinterpret_cast<signed char>(*eax257 + al258);
    *eax259 = reinterpret_cast<signed char>(*eax260 + al261);
    *eax262 = reinterpret_cast<signed char>(*eax263 + al264);
    *eax265 = reinterpret_cast<signed char>(*eax266 + al267);
    *eax268 = reinterpret_cast<signed char>(*eax269 + al270);
    *eax271 = reinterpret_cast<signed char>(*eax272 + al273);
    *eax274 = reinterpret_cast<signed char>(*eax275 + al276);
    *eax277 = reinterpret_cast<signed char>(*eax278 + al279);
    *eax280 = reinterpret_cast<signed char>(*eax281 + al282);
    *eax283 = reinterpret_cast<signed char>(*eax284 + al285);
    *eax286 = reinterpret_cast<signed char>(*eax287 + al288);
    *eax289 = reinterpret_cast<signed char>(*eax290 + al291);
    *eax292 = reinterpret_cast<signed char>(*eax293 + al294);
    *eax295 = reinterpret_cast<signed char>(*eax296 + al297);
    *eax298 = reinterpret_cast<signed char>(*eax299 + al300);
    *eax301 = reinterpret_cast<signed char>(*eax302 + al303);
    *eax304 = reinterpret_cast<signed char>(*eax305 + al306);
    *eax307 = reinterpret_cast<signed char>(*eax308 + al309);
    *eax310 = reinterpret_cast<signed char>(*eax311 + al312);
    *eax313 = reinterpret_cast<signed char>(*eax314 + al315);
    *eax316 = reinterpret_cast<signed char>(*eax317 + al318);
    *eax319 = reinterpret_cast<signed char>(*eax320 + al321);
    *eax322 = reinterpret_cast<signed char>(*eax323 + al324);
    *eax325 = reinterpret_cast<signed char>(*eax326 + al327);
    *eax328 = reinterpret_cast<signed char>(*eax329 + al330);
    *eax331 = reinterpret_cast<signed char>(*eax332 + al333);
    *eax334 = reinterpret_cast<signed char>(*eax335 + al336);
    *eax337 = reinterpret_cast<signed char>(*eax338 + al339);
    *eax340 = reinterpret_cast<signed char>(*eax341 + al342);
    *eax343 = reinterpret_cast<signed char>(*eax344 + al345);
    *eax346 = reinterpret_cast<signed char>(*eax347 + al348);
    *eax349 = reinterpret_cast<signed char>(*eax350 + al351);
    *eax352 = reinterpret_cast<signed char>(*eax353 + al354);
    *eax355 = reinterpret_cast<signed char>(*eax356 + al357);
    *eax358 = reinterpret_cast<signed char>(*eax359 + al360);
    *eax361 = reinterpret_cast<signed char>(*eax362 + al363);
    *eax364 = reinterpret_cast<signed char>(*eax365 + al366);
    *eax367 = reinterpret_cast<signed char>(*eax368 + al369);
    *eax370 = reinterpret_cast<signed char>(*eax371 + al372);
    *eax373 = reinterpret_cast<signed char>(*eax374 + al375);
    *eax376 = reinterpret_cast<signed char>(*eax377 + al378);
    *eax379 = reinterpret_cast<signed char>(*eax380 + al381);
    *eax382 = reinterpret_cast<signed char>(*eax383 + al384);
    *eax385 = reinterpret_cast<signed char>(*eax386 + al387);
    *eax388 = reinterpret_cast<signed char>(*eax389 + al390);
    *eax391 = reinterpret_cast<signed char>(*eax392 + al393);
    *eax394 = reinterpret_cast<signed char>(*eax395 + al396);
    *eax397 = reinterpret_cast<signed char>(*eax398 + al399);
    *eax400 = reinterpret_cast<signed char>(*eax401 + al402);
    *eax403 = reinterpret_cast<signed char>(*eax404 + al405);
    *eax406 = reinterpret_cast<signed char>(*eax407 + al408);
    *eax409 = reinterpret_cast<signed char>(*eax410 + al411);
    *eax412 = reinterpret_cast<signed char>(*eax413 + al414);
    *eax415 = reinterpret_cast<signed char>(*eax416 + al417);
    *eax418 = reinterpret_cast<signed char>(*eax419 + al420);
    *eax421 = reinterpret_cast<signed char>(*eax422 + al423);
    *eax424 = reinterpret_cast<signed char>(*eax425 + al426);
    *eax427 = reinterpret_cast<signed char>(*eax428 + al429);
    *eax430 = reinterpret_cast<signed char>(*eax431 + al432);
    *eax433 = reinterpret_cast<signed char>(*eax434 + al435);
    *eax436 = reinterpret_cast<signed char>(*eax437 + al438);
    *eax439 = reinterpret_cast<signed char>(*eax440 + al441);
    *eax442 = reinterpret_cast<signed char>(*eax443 + al444);
    *eax445 = reinterpret_cast<signed char>(*eax446 + al447);
    *eax448 = reinterpret_cast<signed char>(*eax449 + al450);
    *eax451 = reinterpret_cast<signed char>(*eax452 + al453);
    *eax454 = reinterpret_cast<signed char>(*eax455 + al456);
    *eax457 = reinterpret_cast<signed char>(*eax458 + al459);
    *eax460 = reinterpret_cast<signed char>(*eax461 + al462);
    *eax463 = reinterpret_cast<signed char>(*eax464 + al465);
    *eax466 = reinterpret_cast<signed char>(*eax467 + al468);
    *eax469 = reinterpret_cast<signed char>(*eax470 + al471);
    *eax472 = reinterpret_cast<signed char>(*eax473 + al474);
    *eax475 = reinterpret_cast<signed char>(*eax476 + al477);
    *eax478 = reinterpret_cast<signed char>(*eax479 + al480);
    *eax481 = reinterpret_cast<signed char>(*eax482 + al483);
    *eax484 = reinterpret_cast<signed char>(*eax485 + al486);
    *eax487 = reinterpret_cast<signed char>(*eax488 + al489);
    *eax490 = reinterpret_cast<signed char>(*eax491 + al492);
    *eax493 = reinterpret_cast<signed char>(*eax494 + al495);
    *eax496 = reinterpret_cast<signed char>(*eax497 + al498);
    *eax499 = reinterpret_cast<signed char>(*eax500 + al501);
    *eax502 = reinterpret_cast<signed char>(*eax503 + al504);
    *eax505 = reinterpret_cast<signed char>(*eax506 + al507);
    *eax508 = reinterpret_cast<signed char>(*eax509 + al510);
    *eax511 = reinterpret_cast<signed char>(*eax512 + al513);
    *eax514 = reinterpret_cast<signed char>(*eax515 + al516);
    *eax517 = reinterpret_cast<signed char>(*eax518 + al519);
    *eax520 = reinterpret_cast<signed char>(*eax521 + al522);
    *eax523 = reinterpret_cast<signed char>(*eax524 + al525);
    *eax526 = reinterpret_cast<signed char>(*eax527 + al528);
    *eax529 = reinterpret_cast<signed char>(*eax530 + al531);
    *eax532 = reinterpret_cast<signed char>(*eax533 + al534);
    *eax535 = reinterpret_cast<signed char>(*eax536 + al537);
    *eax538 = reinterpret_cast<signed char>(*eax539 + al540);
    *eax541 = reinterpret_cast<signed char>(*eax542 + al543);
    *eax544 = reinterpret_cast<signed char>(*eax545 + al546);
    *eax547 = reinterpret_cast<signed char>(*eax548 + al549);
    *eax550 = reinterpret_cast<signed char>(*eax551 + al552);
    *eax553 = reinterpret_cast<signed char>(*eax554 + al555);
    *eax556 = reinterpret_cast<signed char>(*eax557 + al558);
    *eax559 = reinterpret_cast<signed char>(*eax560 + al561);
    *eax562 = reinterpret_cast<signed char>(*eax563 + al564);
    *eax565 = reinterpret_cast<signed char>(*eax566 + al567);
    *eax568 = reinterpret_cast<signed char>(*eax569 + al570);
    *eax571 = reinterpret_cast<signed char>(*eax572 + al573);
    *eax574 = reinterpret_cast<signed char>(*eax575 + al576);
    *eax577 = reinterpret_cast<signed char>(*eax578 + al579);
    *eax580 = reinterpret_cast<signed char>(*eax581 + al582);
    *eax583 = reinterpret_cast<signed char>(*eax584 + al585);
    *eax586 = reinterpret_cast<signed char>(*eax587 + al588);
    *eax589 = reinterpret_cast<signed char>(*eax590 + al591);
    *eax592 = reinterpret_cast<signed char>(*eax593 + al594);
    *eax595 = reinterpret_cast<signed char>(*eax596 + al597);
    *eax598 = reinterpret_cast<signed char>(*eax599 + al600);
    *eax601 = reinterpret_cast<signed char>(*eax602 + al603);
    *eax604 = reinterpret_cast<signed char>(*eax605 + al606);
    *eax607 = reinterpret_cast<signed char>(*eax608 + al609);
    *eax610 = reinterpret_cast<signed char>(*eax611 + al612);
    *eax613 = reinterpret_cast<signed char>(*eax614 + al615);
    *eax616 = reinterpret_cast<signed char>(*eax617 + al618);
    *eax619 = reinterpret_cast<signed char>(*eax620 + al621);
    *eax622 = reinterpret_cast<signed char>(*eax623 + al624);
    *eax625 = reinterpret_cast<signed char>(*eax626 + al627);
    *eax628 = reinterpret_cast<signed char>(*eax629 + al630);
    *eax631 = reinterpret_cast<signed char>(*eax632 + al633);
    *eax634 = reinterpret_cast<signed char>(*eax635 + al636);
    *eax637 = reinterpret_cast<signed char>(*eax638 + al639);
    *eax640 = reinterpret_cast<signed char>(*eax641 + al642);
    *eax643 = reinterpret_cast<signed char>(*eax644 + al645);
    *eax646 = reinterpret_cast<signed char>(*eax647 + al648);
    *eax649 = reinterpret_cast<signed char>(*eax650 + al651);
    *eax652 = reinterpret_cast<signed char>(*eax653 + al654);
    *eax655 = reinterpret_cast<signed char>(*eax656 + al657);
    *eax658 = reinterpret_cast<signed char>(*eax659 + al660);
    *eax661 = reinterpret_cast<signed char>(*eax662 + al663);
    *eax664 = reinterpret_cast<signed char>(*eax665 + al666);
    *eax667 = reinterpret_cast<signed char>(*eax668 + al669);
    *eax670 = reinterpret_cast<signed char>(*eax671 + al672);
    *eax673 = reinterpret_cast<signed char>(*eax674 + al675);
    *eax676 = reinterpret_cast<signed char>(*eax677 + al678);
    *eax679 = reinterpret_cast<signed char>(*eax680 + al681);
    *eax682 = reinterpret_cast<signed char>(*eax683 + al684);
    *eax685 = reinterpret_cast<signed char>(*eax686 + al687);
    *eax688 = reinterpret_cast<signed char>(*eax689 + al690);
    *eax691 = reinterpret_cast<signed char>(*eax692 + al693);
}
