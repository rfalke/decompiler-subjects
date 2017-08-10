
void fun_4018c0(int32_t* a1, int32_t* a2, int32_t* a3);

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

void fun_4015c7(int32_t ecx);

void fun_401905(int32_t ecx, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5);

void fun_40157c(int32_t* a1, int32_t a2, int32_t a3, int32_t a4) {
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
    fun_4018c0(0x405188, 12, v5);
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
    fun_4015c7(ecx18);
    fun_401905(ecx18, 0x405188, 12, v5, a1);
    goto 0x405188;
}

/*
 * ??3@YAXPAX@Z
 * void __cdecl operator delete(void *)
 */
int32_t 3_YAXPAX_Z = 0x72be;

void fun_401506() {
    goto 3_YAXPAX_Z;
}

int32_t _amsg_exit = 0x72ce;

void fun_401630() {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x732c;

int32_t fun_4018b2() {
    goto _initterm_e;
}

int32_t _initterm = 0x7320;

void fun_4018ac(int32_t ecx) {
    goto _initterm;
}

void* g0;

struct s11 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

int32_t fun_401760(struct s11* a1);

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

struct s12* fun_4017a0(struct s13* a1, uint32_t a2);

uint32_t fun_4017f0(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6, int32_t* a7, int32_t* a8) {
    void* eax9;
    int32_t eax10;
    struct s12* eax11;
    uint32_t eax12;

    eax9 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax10 = fun_401760(0x400000);
    if (!eax10 || (eax11 = fun_4017a0(0x400000, a2 - 0x400000), eax11 == 0)) {
        g0 = eax9;
        return 0;
    } else {
        eax12 = ~(eax11->f36 >> 31) & 1;
        g0 = eax9;
        return eax12;
    }
}

int32_t _XcptFilter = 0x72fe;

void fun_40174c() {
    goto _XcptFilter;
}

int32_t fun_401a6c(int32_t a1, int32_t a2, int32_t a3);

void fun_401a66(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_401965(int32_t ecx) {
    int32_t eax2;

    eax2 = fun_401a6c(0, 0x10000, 0x30000);
    if (eax2) {
        fun_401a66(0, 0, 0, 0, 0);
    }
    return;
}

int32_t _crt_debugger_hook = 0x738c;

void fun_401a3c(uint32_t ecx) {
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

void fun_40151e(int32_t* a1, int32_t a2, int32_t a3, int32_t a4) {
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
    fun_4018c0(0x405168, 20, v5);
    *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
    while (ebp7->f16 = ebp8->f16 - 1, ebp9->f16 >= 0) {
        ecx10 = ebp11->f8 - ebp12->f12;
        ebp13->f8 = ecx10;
        ebp14->f20();
    }
    *reinterpret_cast<int32_t*>(ebp15 - 4) = -2;
    fun_401905(ecx10, 0x405168, 20, v5, a1);
    goto 0x405168;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x73a2;

void fun_401a42() {
    goto terminate_YAXXZ;
}

struct s21 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s12* fun_4017a0(struct s13* a1, uint32_t a2) {
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
        addr_4017dd_2:
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
        goto addr_4017dd_2;
    }
    return eax7;
}

int32_t _invoke_watson = 0x7430;

void fun_401a66(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

int32_t _CxxThrowException = 0x729a;

void fun_4010b8() {
    goto _CxxThrowException;
}

uint32_t g406020 = 0xbb40e64e;

void fun_4018c0(int32_t* a1, int32_t* a2, int32_t* a3) {
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

void fun_401905(int32_t ecx, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5) {
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

int32_t fun_401760(struct s11* a1) {
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

int32_t fun_401005(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t* a7, int32_t* a8, int32_t* a9) {
    void* ebp10;

    ebp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp10) - 12);
    fun_4010b8();
    goto reinterpret_cast<int32_t>(ebp10) - 24;
}

void fun_4016f4() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x404c70);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x404d70);
    }
    return;
}

int32_t fun_401997() {
    return 0;
}

int32_t _controlfp_s = 0x7442;

int32_t fun_401a6c(int32_t a1, int32_t a2, int32_t a3) {
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

void fun_4015c7(int32_t ecx) {
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
        fun_40151e(v9, v7, v5, v3);
    }
    return;
}

/*
 * ?_type_info_dtor_internal_method@type_info@@QAEXXZ
 * public: void __thiscall type_info::_type_info_dtor_internal_method(void)
 */
int32_t _type_info_dtor_internal_method_type_info_QAEXXZ = 0x73b6;

void fun_401a48() {
    goto _type_info_dtor_internal_method_type_info_QAEXXZ;
}

void fun_401a4e();

void fun_4016d4(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t* a5, int32_t* a6) {
    fun_401a4e();
    return;
}

int32_t _lock = 0x7404;

void fun_401a5a() {
    goto _lock;
}

int32_t __dllonexit = 0x73f6;

int32_t fun_401a54(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6, int32_t* a7) {
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

int32_t fun_40163c() {
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

    fun_4018c0(0x4051a8, 20, __return_address());
    v1 = g4064e0;
    esi2 = DecodePointer;
    eax3 = reinterpret_cast<int32_t>(esi2());
    *reinterpret_cast<int32_t*>(ebp4 - 28) = eax3;
    if (eax3 != -1) {
        fun_401a5a();
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
        eax21 = fun_401a54(8, eax20, v17, v15, v13, v10, v7);
        *reinterpret_cast<int32_t*>(ebp22 - 36) = eax21;
        v23 = *reinterpret_cast<int32_t*>(ebp24 - 28);
        eax25 = reinterpret_cast<int32_t*>(esi19(8, v23, v13, v10, v7));
        g4064e0 = eax25;
        v26 = *reinterpret_cast<int32_t*>(ebp27 - 32);
        eax28 = reinterpret_cast<int32_t*>(esi19(8, v26, v23, v13, v10, v7));
        g4064d0 = eax28;
        *reinterpret_cast<int32_t*>(ebp29 - 4) = -2;
        fun_4016d4(8, v26, v23, v13, v10, v7);
    } else {
        v30 = ebp31->f8;
        _onexit();
        ecx5 = v30;
    }
    fun_401905(ecx5, v1, 0x4051a8, 20, __return_address());
    goto v1;
}

int32_t GetSystemTimeAsFileTime = 0x7590;

int32_t GetCurrentProcessId = 0x757a;

int32_t GetCurrentThreadId = 0x7564;

int32_t GetTickCount = 0x7554;

int32_t QueryPerformanceCounter = 0x753a;

int32_t g406024 = 0x44bf19b1;

void fun_4019a0(int32_t* a1) {
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

void fun_401a4e() {
    goto _unlock;
}

int32_t fun_4016dd(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_40163c();
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _except_handler4_common = 0x7416;

void fun_401a60(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
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

void fun_4010a8(uint32_t ecx, int32_t a2) {
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
    fun_401a3c(ecx);
    SetUnhandledExceptionFilter(1, 0, eax20, eax21);
    UnhandledExceptionFilter(1, 0x40474c, 0, eax20, eax21);
    zf23 = g4061d8 == 0;
    if (zf23) 
        goto addr_4014ea_5;
    addr_4014f2_6:
    eax24 = reinterpret_cast<int32_t>(GetCurrentProcess(1, 0xc0000409, 0x40474c, 0, eax20, eax21));
    TerminateProcess(1, eax24, 0xc0000409, 0x40474c, 0, eax20, eax21);
    return;
    addr_4014ea_5:
    fun_401a3c(1);
    goto addr_4014f2_6;
}

int32_t fun_401115(int32_t ecx) {
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

void fun_4012b9(int32_t ecx) {
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
        esp8->f0 = 0x4012d5;
        _exit();
        esp2 = &esp8->f4;
    }
    zf9 = g406184 == 0;
    if (zf9) {
        esp10 = reinterpret_cast<struct s29*>(esp2 - 1);
        esp10->f0 = 0x4012e3;
        _cexit();
        esp2 = &esp10->f4;
    }
    *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
    esp12 = reinterpret_cast<struct s29*>(esp2 - 1);
    esp12->f0 = 0x4012f4;
    fun_401905(ecx, esp12->f4, esp12->f8, esp12->f12, esp12->f16);
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

int32_t fun_401994();

int32_t g406050 = -2;

int32_t _configthreadlocale = 0x733a;

void fun_40133c() {
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
    fun_4016f4();
    fun_401997();
    zf10 = g406054 == 0;
    if (zf10) {
        __setusermatherr();
        ecx9 = reinterpret_cast<int32_t>(fun_401994);
    }
    fun_401965(ecx9);
    zf11 = g406050 == -1;
    if (zf11) {
        _configthreadlocale(ecx9);
    }
    goto 0xff;
}

int32_t fun_401541() {
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
        fun_401a42();
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

int32_t fun_4015df(struct s31** a1) {
    if ((*a1)->f0 == 0xe06d7363 && ((*a1)->f16 == 3 && ((*a1)->f20 == 0x19930520 || ((*a1)->f20 == 0x19930521 || ((*a1)->f20 == 0x19930522 || (*a1)->f20 == 0x1994000))))) {
        fun_401a42();
    }
    return 0;
}

void fun_40171a() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x404e78);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x404f78);
    }
    return;
}

void fun_401740() {
    goto _cexit;
}

int32_t fun_40187b() {
    int32_t edx1;
    int32_t ebp2;

    edx1 = 0;
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return edx1;
}

void fun_40198e() {
    goto __setusermatherr;
}

struct s32 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_40106f(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebp4;
    struct s32* ebp5;

    g0 = *reinterpret_cast<void**>(ebp4 - 12);
    goto ebp5->f4;
}

int32_t fun_40150c() {
    int32_t** eax1;

    if (**eax1 == 0xe06d7363) {
        goto fun_401a42;
    } else {
        return 0;
    }
}

struct s33 {
    signed char[4] pad4;
    int32_t f4;
};

struct s33* g18;

struct s33* fun_40111a() {
    struct s33* eax1;

    eax1 = g18;
    return eax1;
}

int32_t __getmainargs = 0x72dc;

void fun_401636() {
    goto __getmainargs;
}

int32_t fun_4012f5() {
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

void fun_401752() {
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

void fun_4013f6() {
    int32_t* v1;
    int1_t zf2;
    int32_t ebp3;
    struct s33* eax4;
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
    fun_4019a0(v1);
    fun_4018c0(0x405148, 16, v1);
    zf2 = g4064e4 == 0;
    if (zf2) {
        HeapSetInformation(0, 1, 0, 0, 0x405148, 16, v1);
    }
    *reinterpret_cast<int32_t*>(ebp3 - 4) = 0;
    eax4 = g18;
    esi5 = eax4->f4;
    *reinterpret_cast<int32_t*>(ebp6 - 28) = 0;
    while (eax7 = reinterpret_cast<int32_t>(InterlockedCompareExchange(0x4064cc, esi5, 0, 0x405148, 16, v1)), !!eax7) {
        if (eax7 == esi5) 
            goto addr_4011b2_7;
        Sleep(0x3e8, 0x4064cc, esi5, 0, 0x405148, 16, v1);
    }
    addr_4011ca_10:
    eax8 = g4064bc;
    if (eax8 != 1) {
        eax9 = g4064bc;
        if (eax9) {
            g406184 = 1;
        } else {
            g4064bc = 1;
            eax10 = fun_4018b2();
            ecx11 = 0x404618;
            if (eax10) {
                *reinterpret_cast<int32_t*>(ebp12 - 4) = -2;
                goto 0x4012ef;
            }
        }
    } else {
        fun_401630();
        ecx11 = 31;
    }
    eax13 = g4064bc;
    if (eax13 == 1) {
        fun_4018ac(ecx11);
        ecx11 = 0x404208;
        g4064bc = 2;
    }
    if (!*reinterpret_cast<int32_t*>(ebp14 - 28)) {
        InterlockedExchange(ecx11, 0x4064cc, 0, 0x4064cc, esi5, 0, 0x405148, 16, v1);
    }
    zf15 = g4064e8 == 0;
    if (!zf15 && (eax16 = fun_4017f0(ecx11, 0x4064e8, 0x4064cc, esi5, 0, 0x405148, 16, v1), !!eax16)) {
        g4064e8(0x4064e8, 0, 2, 0, 0x4064cc, esi5, 0, 0x405148, 16, v1);
    }
    eax17 = g40616c;
    ecx18 = __initenv;
    *ecx18 = eax17;
    v19 = g40616c;
    v20 = g406170;
    v21 = g406168;
    eax22 = fun_401005(v21, v20, v19, 0x4064cc, esi5, 0, 0x405148, 16, v1);
    g406180 = eax22;
    zf23 = g406174 == 0;
    if (!zf23) 
        goto 0x4012d5;
    exit();
    *reinterpret_cast<int32_t*>(ebp24 - 32) = ***reinterpret_cast<int32_t***>(ebp25 - 20);
    fun_40174c();
    goto eax22;
    addr_4011b2_7:
    *reinterpret_cast<int32_t*>(ebp26 - 28) = 1;
    goto addr_4011ca_10;
}

void fun_401621() {
    SetUnhandledExceptionFilter();
    goto fun_4015df;
}

void fun_401746() {
    goto _exit;
}

void fun_40188e() {
}

int32_t fun_401994() {
    return 0;
}

void fun_4010be(int32_t* ecx) {
    *ecx = 0x404748;
    return;
}

int32_t __CxxFrameHandler3 = 0x7284;

void fun_401084() {
    goto __CxxFrameHandler3;
}

int32_t g4064b0;

int32_t g4064ac;

int32_t g40617c = 0;

int32_t g406178 = 0;

void fun_401121() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    fun_4016dd(fun_40171a);
    eax1 = g4064b0;
    v2 = g4064ac;
    g40617c = eax1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x406168, 0x406170, 0x40616c, v2, 0x40617c));
    g406178 = eax3;
    if (eax3 < 0) {
        fun_401630();
    }
    return;
}

void fun_401919(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_401a60(0x406020, fun_4010a8, a1, a2, a3, a4);
    return;
}

void fun_40199a() {
    goto __set_app_type;
}

void fun_401a72() {
    goto InterlockedExchange;
}

int32_t* fun_4010c9(int32_t* ecx, unsigned char a2) {
    int32_t* eax3;
    int32_t* esi4;
    int32_t v5;

    if (!(a2 & 2)) {
        fun_401a48();
        if (a2 & 1) {
            fun_401506();
        }
        eax3 = ecx;
    } else {
        esi4 = ecx - 1;
        v5 = *esi4;
        fun_40157c(ecx, 12, v5, fun_401a48);
        if (a2 & 1) {
            fun_401506();
        }
        eax3 = esi4;
    }
    return eax3;
}

void fun_40193e() {
    goto _configthreadlocale;
}

void fun_401a78() {
    goto Sleep;
}

void fun_401944(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    if (a1) {
        fun_401a66(a2, a3, a4, a5, a6);
    }
    return;
}

void fun_401a7e() {
    goto InterlockedCompareExchange;
}

void fun_401a84() {
    goto HeapSetInformation;
}

void fun_401a8a() {
    goto EncodePointer;
}

void fun_401a90() {
    goto TerminateProcess;
}

void fun_401a96() {
    goto GetCurrentProcess;
}

void fun_401a9c() {
    goto UnhandledExceptionFilter;
}

void fun_401aa2() {
    goto SetUnhandledExceptionFilter;
}

void fun_401aa8() {
    goto IsDebuggerPresent;
}

void fun_401aae() {
    goto DecodePointer;
}

void fun_401ab4() {
    goto QueryPerformanceCounter;
}

void fun_401aba() {
    goto GetTickCount;
}

void fun_401ac0() {
    goto GetCurrentThreadId;
}

void fun_401ac6() {
    goto GetCurrentProcessId;
}

void fun_401acc() {
    goto GetSystemTimeAsFileTime;
}

void fun_402d60() {
    uint32_t ecx1;
    int32_t v2;

    ecx1 = *reinterpret_cast<uint32_t*>(v2 - 32) ^ reinterpret_cast<uint32_t>(v2 + 12);
    fun_4010a8(ecx1, __return_address());
    goto 0x4010a2;
}

void fun_403d81() {
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
}
