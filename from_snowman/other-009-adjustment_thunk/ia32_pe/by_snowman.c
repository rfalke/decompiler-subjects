
struct s0 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f16;
};

/*
 * ??3@YAXPAX@Z
 * void __cdecl operator delete(void *)
 */
int32_t 3_YAXPAX_Z = 0x627c;

void fun_4013b2(struct s0* a1) {
    goto 3_YAXPAX_Z;
}

void fun_401a50(struct s0* a1, struct s0* a2, struct s0* a3);

struct s1 {
    signed char[12] pad12;
    int32_t f12;
};

struct s2 {
    signed char[8] pad8;
    int32_t f8;
};

struct s3 {
    signed char[8] pad8;
    int32_t f8;
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
    signed char[16] pad16;
    int32_t f16;
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
    signed char[8] pad8;
    int32_t f8;
};

struct s11 {
    signed char[20] pad20;
    int32_t f20;
};

void fun_40175f(int32_t ecx);

void fun_401a95(int32_t ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_401714(struct s0* a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s0* v5;
    int32_t ebp6;
    int32_t esi7;
    struct s1* ebp8;
    struct s2* ebp9;
    struct s3* ebp10;
    struct s4* ebp11;
    int32_t ebp12;
    struct s5* ebp13;
    struct s6* ebp14;
    struct s7* ebp15;
    struct s8* ebp16;
    struct s9* ebp17;
    int32_t ecx18;
    struct s10* ebp19;
    struct s11* ebp20;
    int32_t ebp21;
    int32_t ebp22;

    v5 = reinterpret_cast<struct s0*>(__return_address());
    fun_401a50(0x4042f8, 12, v5);
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
    fun_40175f(ecx18);
    fun_401a95(ecx18, 0x4042f8, 12, v5, a1);
    goto 0x4042f8;
}

int32_t _amsg_exit = 0x62aa;

void fun_4017c8() {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x6308;

int32_t fun_401a42() {
    goto _initterm_e;
}

int32_t _initterm = 0x62fc;

void fun_401a3c(int32_t ecx) {
    goto _initterm;
}

void* g0;

struct s12 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

int32_t fun_4018f0(struct s12* a1);

struct s13 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t f12;
    signed char[20] pad36;
    uint32_t f36;
};

struct s14 {
    signed char[60] pad60;
    int32_t f60;
};

struct s13* fun_401930(struct s14* a1, uint32_t a2);

uint32_t fun_401980(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    void* eax9;
    int32_t eax10;
    struct s13* eax11;
    uint32_t eax12;

    eax9 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax10 = fun_4018f0(0x400000);
    if (!eax10 || (eax11 = fun_401930(0x400000, a2 - 0x400000), eax11 == 0)) {
        g0 = eax9;
        return 0;
    } else {
        eax12 = ~(eax11->f36 >> 31) & 1;
        g0 = eax9;
        return eax12;
    }
}

int32_t _XcptFilter = 0x62da;

void fun_4018e4() {
    goto _XcptFilter;
}

int32_t fun_401c06(int32_t a1, int32_t a2, int32_t a3);

void fun_401c00(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_401af5(int32_t ecx) {
    int32_t eax2;

    eax2 = fun_401c06(0, 0x10000, 0x30000);
    if (eax2) {
        fun_401c00(0, 0, 0, 0, 0);
    }
    return;
}

struct s15 {
    signed char[16] pad16;
    int32_t f16;
};

struct s16 {
    signed char[16] pad16;
    int32_t f16;
};

struct s17 {
    signed char[16] pad16;
    int32_t f16;
};

struct s18 {
    signed char[8] pad8;
    int32_t f8;
};

struct s19 {
    signed char[12] pad12;
    int32_t f12;
};

struct s20 {
    signed char[8] pad8;
    int32_t f8;
};

struct s21 {
    signed char[20] pad20;
    int32_t f20;
};

void fun_4016b6(struct s0* a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s0* v5;
    int32_t ebp6;
    struct s15* ebp7;
    struct s16* ebp8;
    struct s17* ebp9;
    int32_t ecx10;
    struct s18* ebp11;
    struct s19* ebp12;
    struct s20* ebp13;
    struct s21* ebp14;
    int32_t ebp15;

    v5 = reinterpret_cast<struct s0*>(__return_address());
    fun_401a50(0x4042d8, 20, v5);
    *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
    while (ebp7->f16 = ebp8->f16 - 1, ebp9->f16 >= 0) {
        ecx10 = ebp11->f8 - ebp12->f12;
        ebp13->f8 = ecx10;
        ebp14->f20();
    }
    *reinterpret_cast<int32_t*>(ebp15 - 4) = -2;
    fun_401a95(ecx10, 0x4042d8, 20, v5, a1);
    goto 0x4042d8;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x6368;

void fun_401bcc() {
    goto terminate_YAXXZ;
}

struct s22 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s13* fun_401930(struct s14* a1, uint32_t a2) {
    struct s22* ecx3;
    uint32_t eax4;
    uint32_t esi5;
    uint32_t edx6;
    struct s13* eax7;
    uint32_t edi8;

    ecx3 = reinterpret_cast<struct s22*>(a1->f60 + reinterpret_cast<int32_t>(a1));
    eax4 = ecx3->f20;
    esi5 = ecx3->f6;
    edx6 = 0;
    eax7 = reinterpret_cast<struct s13*>(eax4 + reinterpret_cast<int32_t>(ecx3) + 24);
    if (!esi5) {
        addr_40196d_2:
        eax7 = reinterpret_cast<struct s13*>(0);
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
        goto addr_40196d_2;
    }
    return eax7;
}

int32_t _invoke_watson = 0x63f6;

void fun_401c00(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

int32_t _crt_debugger_hook = 0x6418;

void fun_401d12(uint32_t ecx) {
    goto _crt_debugger_hook;
}

struct s23 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    signed char[4] pad16;
    int32_t* f16;
};

/*
 * ??2@YAPAXI@Z
 * void * __cdecl operator new(unsigned int)
 */
int32_t 2_YAPAXI_Z = 0x628c;

struct s23* fun_4013b8(int32_t a1) {
    goto 2_YAPAXI_Z;
}

uint32_t g405078 = 0xbb40e64e;

void fun_401a50(struct s0* a1, struct s0* a2, struct s0* a3) {
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
    eax12 = g405078;
    esp13 = reinterpret_cast<uint32_t*>(esp10 - 1);
    *esp13 = eax12 ^ reinterpret_cast<uint32_t>(ebp5);
    esp14 = reinterpret_cast<int32_t*>(esp13 - 1);
    *esp14 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) - 16);
    goto *esp14;
}

void fun_401a95(int32_t ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    int32_t ebp6;
    int32_t* esp7;
    void* ebp8;

    g0 = *reinterpret_cast<void**>(ebp6 - 16);
    esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + 4 - 4);
    *esp7 = reinterpret_cast<int32_t>(__return_address());
    goto *esp7;
}

struct s24 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

int32_t fun_4018f0(struct s12* a1) {
    struct s24* eax2;
    int32_t edx3;

    if (a1->f0 != 0x5a4d || (eax2 = reinterpret_cast<struct s24*>(a1->f60 + reinterpret_cast<int32_t>(a1)), eax2->f0 != 0x4550)) {
        return 0;
    } else {
        edx3 = 0;
        *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<uint1_t>(eax2->f24 == 0x10b);
        return edx3;
    }
}

int32_t* g10;

int32_t fun_40106e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, struct s0* a7, struct s0* a8, struct s0* a9) {
    struct s23* eax10;
    int32_t* eax11;
    int32_t edx12;
    int32_t edx13;

    eax10 = fun_4013b8(24);
    if (!eax10) {
        eax11 = g10;
        edx12 = *eax11;
        edx12();
        return 0;
    } else {
        eax10->f4 = 10;
        eax10->f8 = 0x40374c;
        eax10->f16 = reinterpret_cast<int32_t*>(0x40375c);
        eax10->f0 = 0x40378c;
        eax10->f8 = 0x40377c;
        eax10->f16 = reinterpret_cast<int32_t*>(0x40376c);
        edx13 = *eax10->f16;
        edx13();
        return 0;
    }
}

void fun_40188c() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x403ea8);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x403fa8);
    }
    return;
}

int32_t fun_401b27() {
    return 0;
}

int32_t _controlfp_s = 0x6408;

int32_t fun_401c06(int32_t a1, int32_t a2, int32_t a3) {
    goto _controlfp_s;
}

struct s25 {
    signed char[20] pad20;
    int32_t f20;
};

struct s26 {
    signed char[16] pad16;
    int32_t f16;
};

struct s27 {
    signed char[12] pad12;
    int32_t f12;
};

struct s28 {
    signed char[8] pad8;
    struct s0* f8;
};

void fun_40175f(int32_t ecx) {
    int32_t ebp2;
    int32_t v3;
    struct s25* ebp4;
    int32_t v5;
    struct s26* ebp6;
    int32_t v7;
    struct s27* ebp8;
    struct s0* v9;
    struct s28* ebp10;

    if (!*reinterpret_cast<int32_t*>(ebp2 - 28)) {
        v3 = ebp4->f20;
        v5 = ebp6->f16;
        v7 = ebp8->f12;
        v9 = ebp10->f8;
        fun_4016b6(v9, v7, v5, v3);
    }
    return;
}

/*
 * ?_type_info_dtor_internal_method@type_info@@QAEXXZ
 * public: void __thiscall type_info::_type_info_dtor_internal_method(void)
 */
int32_t _type_info_dtor_internal_method_type_info_QAEXXZ = 0x637c;

void fun_401bd2() {
    goto _type_info_dtor_internal_method_type_info_QAEXXZ;
}

void fun_401bd8();

void fun_40186c(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, struct s0* a5, struct s0* a6) {
    fun_401bd8();
    return;
}

int32_t _lock = 0x63ca;

void fun_401be4() {
    goto _lock;
}

int32_t __dllonexit = 0x63bc;

int32_t fun_401bde(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, struct s0* a6, struct s0* a7) {
    goto __dllonexit;
}

struct s0* g405508;

int32_t DecodePointer = 0x64ae;

struct s0* g4054f8;

struct s29 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t EncodePointer = 0x6480;

struct s30 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t _onexit = 0x63d2;

int32_t fun_4017d4() {
    struct s0* v1;
    int32_t esi2;
    int32_t eax3;
    int32_t ebp4;
    int32_t ecx5;
    int32_t ebp6;
    struct s0* v7;
    int32_t eax8;
    int32_t ebp9;
    struct s0* v10;
    int32_t eax11;
    int32_t ebp12;
    int32_t v13;
    int32_t ebp14;
    int32_t v15;
    int32_t ebp16;
    int32_t v17;
    struct s29* ebp18;
    int32_t esi19;
    int32_t eax20;
    int32_t eax21;
    int32_t ebp22;
    int32_t v23;
    int32_t ebp24;
    struct s0* eax25;
    int32_t v26;
    int32_t ebp27;
    struct s0* eax28;
    int32_t ebp29;
    int32_t v30;
    struct s30* ebp31;

    fun_401a50(0x404318, 20, __return_address());
    v1 = g405508;
    esi2 = DecodePointer;
    eax3 = reinterpret_cast<int32_t>(esi2());
    *reinterpret_cast<int32_t*>(ebp4 - 28) = eax3;
    if (eax3 != -1) {
        fun_401be4();
        ecx5 = 8;
        *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
        v7 = g405508;
        eax8 = reinterpret_cast<int32_t>(esi2(8, v7));
        *reinterpret_cast<int32_t*>(ebp9 - 28) = eax8;
        v10 = g4054f8;
        eax11 = reinterpret_cast<int32_t>(esi2(8, v10, v7));
        *reinterpret_cast<int32_t*>(ebp12 - 32) = eax11;
        v13 = ebp14 - 32;
        v15 = ebp16 - 28;
        v17 = ebp18->f8;
        esi19 = EncodePointer;
        eax20 = reinterpret_cast<int32_t>(esi19(8, v17, v15, v13, v10, v7));
        eax21 = fun_401bde(8, eax20, v17, v15, v13, v10, v7);
        *reinterpret_cast<int32_t*>(ebp22 - 36) = eax21;
        v23 = *reinterpret_cast<int32_t*>(ebp24 - 28);
        eax25 = reinterpret_cast<struct s0*>(esi19(8, v23, v13, v10, v7));
        g405508 = eax25;
        v26 = *reinterpret_cast<int32_t*>(ebp27 - 32);
        eax28 = reinterpret_cast<struct s0*>(esi19(8, v26, v23, v13, v10, v7));
        g4054f8 = eax28;
        *reinterpret_cast<int32_t*>(ebp29 - 4) = -2;
        fun_40186c(8, v26, v23, v13, v10, v7);
    } else {
        v30 = ebp31->f8;
        _onexit();
        ecx5 = v30;
    }
    fun_401a95(ecx5, v1, 0x404318, 20, __return_address());
    goto v1;
}

int32_t GetSystemTimeAsFileTime = 0x6514;

int32_t GetCurrentProcessId = 0x64fe;

int32_t GetCurrentThreadId = 0x64e8;

int32_t GetTickCount = 0x64d8;

int32_t QueryPerformanceCounter = 0x64be;

int32_t g40507c = 0x44bf19b1;

void fun_401b30(struct s0* a1) {
    uint32_t eax2;
    void* v3;
    int32_t esi4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t esi8;
    uint32_t v9;
    uint32_t v10;

    eax2 = g405078;
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
        g405078 = esi8;
        g40507c = reinterpret_cast<int32_t>(~esi8);
    } else {
        g40507c = reinterpret_cast<int32_t>(~eax2);
    }
    return;
}

int32_t _unlock = 0x63b2;

void fun_401bd8() {
    goto _unlock;
}

int32_t fun_401875(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_4017d4();
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _except_handler4_common = 0x63dc;

void fun_401bfa(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto _except_handler4_common;
}

int32_t fun_401005(int32_t ecx) {
    return ecx - 12;
}

struct s0* fun_40100a(struct s0* ecx, unsigned char a2) {
    ecx->f0 = 0x40375c;
    if (a2 & 1) {
        fun_4013b2(ecx);
    }
    return ecx;
}

void fun_40113f(int32_t* ecx) {
    *ecx = 0x40374c;
    return;
}

void fun_40118f(int32_t* ecx) {
    *ecx = 0x40375c;
    return;
}

void fun_4011df(int32_t* ecx) {
    *ecx = 0x40374c;
    return;
}

int32_t fun_4013ac(int32_t ecx) {
    return ecx;
}

int32_t g4051a8 = 0;

int32_t g40519c = 0;

struct s31 {
    int32_t f0;
    struct s0* f4;
    struct s0* f8;
    struct s0* f12;
    struct s0* f16;
};

struct s32 {
    int32_t f0;
    struct s0* f4;
};

int32_t _exit = 0x62d2;

int32_t g4051ac = 0;

int32_t _cexit = 0x62c8;

void fun_40155d(int32_t ecx) {
    struct s0** esp2;
    int32_t ebp3;
    int32_t eax4;
    int32_t ebp5;
    int1_t zf6;
    struct s31* esp7;
    struct s32* esp8;
    int1_t zf9;
    struct s31* esp10;
    int32_t ebp11;
    struct s31* esp12;

    esp2 = *reinterpret_cast<struct s0***>(ebp3 - 24);
    eax4 = *reinterpret_cast<int32_t*>(ebp5 - 32);
    g4051a8 = eax4;
    zf6 = g40519c == 0;
    if (zf6) {
        esp7 = reinterpret_cast<struct s31*>(esp2 - 1);
        esp7->f0 = eax4;
        esp8 = reinterpret_cast<struct s32*>(reinterpret_cast<int32_t>(esp7) - 4);
        esp8->f0 = 0x401579;
        _exit();
        esp2 = &esp8->f4;
    }
    zf9 = g4051ac == 0;
    if (zf9) {
        esp10 = reinterpret_cast<struct s31*>(esp2 - 1);
        esp10->f0 = 0x401587;
        _cexit();
        esp2 = &esp10->f4;
    }
    *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
    esp12 = reinterpret_cast<struct s31*>(esp2 - 1);
    esp12->f0 = 0x401598;
    fun_401a95(ecx, esp12->f4, esp12->f8, esp12->f12, esp12->f16);
    goto esp12->f4;
}

/* (image base) */
int16_t image_base_;

int32_t g40003c;

int32_t __set_app_type = 0x6356;

int32_t g4051bc = 0;

int32_t* _fmode = reinterpret_cast<int32_t*>(0x634c);

int32_t* _commode = reinterpret_cast<int32_t*>(0x6340);

int32_t g4051b8 = 0;

int32_t g405074 = 1;

int32_t __setusermatherr = 0x632c;

int32_t fun_401b24();

int32_t g405070 = -2;

int32_t _configthreadlocale = 0x6316;

void fun_4015e0() {
    int1_t zf1;
    int32_t eax2;
    int32_t eax3;
    int32_t ecx4;
    struct s0* eax5;
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
    g40519c = eax3;
    __set_app_type();
    eax5 = reinterpret_cast<struct s0*>(EncodePointer(1));
    ecx6 = g4051bc;
    g4054f8 = eax5;
    g405508 = eax5;
    eax7 = _fmode;
    *eax7 = ecx6;
    eax8 = _commode;
    ecx9 = g4051b8;
    *eax8 = ecx9;
    fun_40188c();
    fun_401b27();
    zf10 = g405074 == 0;
    if (zf10) {
        __setusermatherr();
        ecx9 = reinterpret_cast<int32_t>(fun_401b24);
    }
    fun_401af5(ecx9);
    zf11 = g405070 == -1;
    if (zf11) {
        _configthreadlocale(ecx9);
    }
    goto 0xff;
}

int32_t fun_4016d9() {
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
        fun_401bcc();
    } else {
        *reinterpret_cast<int32_t*>(ebp6 - 36) = 0;
        return *reinterpret_cast<int32_t*>(ebp7 - 36);
    }
}

struct s33 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f16;
    int32_t f20;
};

int32_t fun_401777(struct s33** a1) {
    if ((*a1)->f0 == 0xe06d7363 && ((*a1)->f16 == 3 && ((*a1)->f20 == 0x19930520 || ((*a1)->f20 == 0x19930521 || ((*a1)->f20 == 0x19930522 || (*a1)->f20 == 0x1994000))))) {
        fun_401bcc();
    }
    return 0;
}

void fun_4018b2() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x4040b0);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x4041b0);
    }
    return;
}

void fun_4018d8() {
    goto _cexit;
}

int32_t fun_401a0b() {
    int32_t edx1;
    int32_t ebp2;

    edx1 = 0;
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return edx1;
}

void fun_401b1e() {
    goto __setusermatherr;
}

struct s34 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f16;
};

void fun_401264(struct s34* ecx) {
    ecx->f16 = 0x40375c;
    ecx->f8 = 0x40374c;
    ecx->f0 = 0x403740;
    return;
}

struct s0* fun_40100f(struct s0* ecx, unsigned char a2) {
    ecx->f16 = 0x40375c;
    ecx->f8 = 0x40374c;
    ecx->f0 = 0x403740;
    if (a2 & 1) {
        fun_4013b2(ecx);
    }
    return ecx;
}

struct s23* fun_401157() {
    struct s23* eax1;

    eax1 = fun_4013b8(40);
    return eax1;
}

struct s23* fun_4011a7() {
    struct s23* eax1;

    eax1 = fun_4013b8(80);
    return eax1;
}

void fun_4011f9(int32_t* ecx) {
    *ecx = 0x40375c;
    return;
}

void fun_401355(int32_t* ecx) {
    *ecx = 0x403798;
    return;
}

int32_t __getmainargs = 0x62b8;

void fun_4017ce() {
    goto __getmainargs;
}

int32_t fun_401599() {
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

int32_t exit = 0x62e8;

void fun_4018ea() {
    goto exit;
}

int32_t g40550c;

int32_t HeapSetInformation = 0x646a;

struct s35 {
    signed char[4] pad4;
    int32_t f4;
};

struct s35* g18;

int32_t InterlockedCompareExchange = 0x644c;

int32_t Sleep = 0x6444;

int32_t g4054e4;

int32_t InterlockedExchange = 0x642e;

int32_t g405510;

int32_t g405194 = 0;

int32_t* __initenv = reinterpret_cast<int32_t*>(0x62f0);

int32_t g405198 = 0;

int32_t g405190 = 0;

void fun_40169a() {
    struct s0* v1;
    int1_t zf2;
    int32_t ebp3;
    struct s35* eax4;
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

    v1 = reinterpret_cast<struct s0*>(__return_address());
    fun_401b30(v1);
    fun_401a50(0x4042b8, 16, v1);
    zf2 = g40550c == 0;
    if (zf2) {
        HeapSetInformation(0, 1, 0, 0, 0x4042b8, 16, v1);
    }
    *reinterpret_cast<int32_t*>(ebp3 - 4) = 0;
    eax4 = g18;
    esi5 = eax4->f4;
    *reinterpret_cast<int32_t*>(ebp6 - 28) = 0;
    while (eax7 = reinterpret_cast<int32_t>(InterlockedCompareExchange(0x4054f4, esi5, 0, 0x4042b8, 16, v1)), !!eax7) {
        if (eax7 == esi5) 
            goto addr_401456_7;
        Sleep(0x3e8, 0x4054f4, esi5, 0, 0x4042b8, 16, v1);
    }
    addr_40146e_10:
    eax8 = g4054e4;
    if (eax8 != 1) {
        eax9 = g4054e4;
        if (eax9) {
            g4051ac = 1;
        } else {
            g4054e4 = 1;
            eax10 = fun_401a42();
            ecx11 = 0x403618;
            if (eax10) {
                *reinterpret_cast<int32_t*>(ebp12 - 4) = -2;
                goto 0x401593;
            }
        }
    } else {
        fun_4017c8();
        ecx11 = 31;
    }
    eax13 = g4054e4;
    if (eax13 == 1) {
        fun_401a3c(ecx11);
        ecx11 = 0x403208;
        g4054e4 = 2;
    }
    if (!*reinterpret_cast<int32_t*>(ebp14 - 28)) {
        InterlockedExchange(ecx11, 0x4054f4, 0, 0x4054f4, esi5, 0, 0x4042b8, 16, v1);
    }
    zf15 = g405510 == 0;
    if (!zf15 && (eax16 = fun_401980(ecx11, 0x405510, 0x4054f4, esi5, 0, 0x4042b8, 16, v1), !!eax16)) {
        g405510(0x405510, 0, 2, 0, 0x4054f4, esi5, 0, 0x4042b8, 16, v1);
    }
    eax17 = g405194;
    ecx18 = __initenv;
    *ecx18 = eax17;
    v19 = g405194;
    v20 = g405198;
    v21 = g405190;
    eax22 = fun_40106e(v21, v20, v19, 0x4054f4, esi5, 0, 0x4042b8, 16, v1);
    g4051a8 = eax22;
    zf23 = g40519c == 0;
    if (!zf23) 
        goto 0x401579;
    exit();
    *reinterpret_cast<int32_t*>(ebp24 - 32) = ***reinterpret_cast<int32_t***>(ebp25 - 20);
    fun_4018e4();
    goto eax22;
    addr_401456_7:
    *reinterpret_cast<int32_t*>(ebp26 - 28) = 1;
    goto addr_40146e_10;
}

int32_t SetUnhandledExceptionFilter = 0x6490;

void fun_4017b9() {
    SetUnhandledExceptionFilter();
    goto fun_401777;
}

void fun_4018de() {
    goto _exit;
}

void fun_401a1e() {
}

int32_t fun_401b24() {
    return 0;
}

void fun_401d18() {
    goto InterlockedExchange;
}

void fun_401285(int32_t ecx) {
    goto 0x4012b0;
}

void fun_401014() {
    goto 0x401290;
}

struct s35* fun_4013be() {
    struct s35* eax1;

    eax1 = g18;
    return eax1;
}

struct s0* fun_40116b(struct s0* ecx, unsigned char a2) {
    ecx->f0 = 0x40374c;
    if (a2 & 1) {
        fun_4013b2(ecx);
    }
    return ecx;
}

struct s36 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    signed char[4] pad16;
    int32_t f16;
};

void fun_401209(struct s36* ecx) {
    ecx->f4 = 10;
    ecx->f8 = 0x40374c;
    ecx->f16 = 0x40375c;
    ecx->f0 = 0x40378c;
    ecx->f8 = 0x40377c;
    ecx->f16 = 0x40376c;
    return;
}

struct s0* fun_401360(struct s0* ecx, unsigned char a2) {
    struct s0* eax3;
    struct s0* esi4;
    int32_t v5;

    if (!(a2 & 2)) {
        fun_401bd2();
        if (a2 & 1) {
            fun_4013b2(ecx);
        }
        eax3 = ecx;
    } else {
        esi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ecx) - 4);
        v5 = esi4->f0;
        fun_401714(ecx, 12, v5, fun_401bd2);
        if (a2 & 1) {
            fun_4013b2(esi4);
        }
        eax3 = esi4;
    }
    return eax3;
}

void fun_401bea(uint32_t ecx);

void fun_401aa9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_401bfa(0x405078, fun_401bea, a1, a2, a3, a4);
    return;
}

void fun_401073() {
    goto 0x401170;
}

void fun_401b2a() {
    goto __set_app_type;
}

int32_t fun_4016a4() {
    int32_t** eax1;

    if (**eax1 == 0xe06d7363) {
        goto fun_401bcc;
    } else {
        return 0;
    }
}

int32_t g4052c8;

uint32_t g4052c4;

int32_t g4052c0;

int32_t g4052bc;

int32_t g4052b8;

int32_t g4052b4;

int16_t g4052e0;

int16_t g4052d4;

int16_t g4052b0;

int16_t g4052ac;

int16_t g4052a8;

int16_t g4052a4;

uint32_t g4052d8;

int32_t g4052cc;

int32_t g4052d0;

void* g4052dc;

int32_t g405218;

int32_t g4051cc = 0;

int32_t g4051c0 = 0;

int32_t g4051c4 = 0;

int32_t IsDebuggerPresent = 0x6572;

int32_t g405210;

int32_t UnhandledExceptionFilter = 0x6556;

int32_t GetCurrentProcess = 0x6542;

int32_t TerminateProcess = 0x652e;

void fun_401bea(uint32_t ecx) {
    uint32_t eflags2;
    int1_t zf3;
    int32_t* esp4;
    void* esp5;
    int32_t eax6;
    int32_t edx7;
    int32_t ebx8;
    int32_t esi9;
    int32_t edi10;
    int16_t ss11;
    int16_t cs12;
    int16_t ds13;
    int16_t es14;
    int16_t fs15;
    int16_t gs16;
    int32_t ebp17;
    int32_t eax18;
    uint32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int1_t zf22;
    int32_t eax23;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = 0;
    zf3 = ecx == g405078;
    if (zf3) {
        return;
    }
    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    *reinterpret_cast<int1_t*>(&eflags2) = reinterpret_cast<uint32_t>(esp4) < 0x328;
    esp5 = reinterpret_cast<void*>(esp4 - 0xca);
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = esp5 == 0;
    *reinterpret_cast<int1_t*>(&eflags2) = reinterpret_cast<int32_t>(esp5) < reinterpret_cast<int32_t>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    g4052c8 = eax6;
    g4052c4 = ecx;
    g4052c0 = edx7;
    g4052bc = ebx8;
    g4052b8 = esi9;
    g4052b4 = edi10;
    g4052e0 = ss11;
    g4052d4 = cs12;
    g4052b0 = ds13;
    g4052ac = es14;
    g4052a8 = fs15;
    g4052a4 = gs16;
    g4052d8 = eflags2 & 0xfcffff;
    g4052cc = ebp17;
    g4052d0 = reinterpret_cast<int32_t>(__return_address());
    g4052dc = reinterpret_cast<void*>(esp4 + 2);
    g405218 = 0x10001;
    eax18 = g4052d0;
    g4051cc = eax18;
    g4051c0 = 0xc0000409;
    g4051c4 = 1;
    eax19 = g405078;
    eax20 = g40507c;
    eax21 = reinterpret_cast<int32_t>(IsDebuggerPresent(eax19, eax20));
    g405210 = eax21;
    fun_401d12(ecx);
    SetUnhandledExceptionFilter(1, 0, eax19, eax20);
    UnhandledExceptionFilter(1, 0x4037b0, 0, eax19, eax20);
    zf22 = g405210 == 0;
    if (zf22) 
        goto addr_401cf6_5;
    addr_401cfe_6:
    eax23 = reinterpret_cast<int32_t>(GetCurrentProcess(1, 0xc0000409, 0x4037b0, 0, eax19, eax20));
    TerminateProcess(1, eax23, 0xc0000409, 0x4037b0, 0, eax19, eax20);
    return;
    addr_401cf6_5:
    fun_401d12(1);
    goto addr_401cfe_6;
}

void fun_401d1e() {
    goto Sleep;
}

void fun_401298(int32_t ecx) {
    goto 0x401023;
}

int32_t fun_401019(int32_t ecx) {
    return ecx - 4;
}

int32_t g4051b4 = 0;

int32_t g4051b0 = 0;

int32_t g4051a4 = 0;

int32_t g4051a0 = 0;

void fun_4013c5() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    fun_401875(fun_4018b2);
    eax1 = g4051b4;
    v2 = g4051b0;
    g4051a4 = eax1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x405190, 0x405198, 0x405194, v2, 0x4051a4));
    g4051a0 = eax3;
    if (eax3 < 0) {
        fun_4017c8();
    }
    return;
}

void fun_401ace() {
    goto _configthreadlocale;
}

struct s37 {
    int32_t f0;
    int32_t f4;
};

void fun_401078(struct s37* ecx) {
    ecx->f0 = 0x403740;
    ecx->f4 = 10;
    return;
}

void fun_401d24() {
    goto InterlockedCompareExchange;
}

void fun_401028() {
    goto 0x4012a0;
}

void fun_40101e() {
    goto 0x401170;
}

void fun_401ad4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    if (a1) {
        fun_401c00(a2, a3, a4, a5, a6);
    }
    return;
}

void fun_401100(int32_t* ecx) {
    *ecx = 0x403740;
    return;
}

void fun_401d2a() {
    goto HeapSetInformation;
}

void fun_40102d() {
    goto 0x401200;
}

struct s0* fun_401117(struct s0* ecx, unsigned char a2) {
    ecx->f0 = 0x403740;
    if (a2 & 1) {
        fun_4013b2(ecx);
    }
    return ecx;
}

void fun_401d30() {
    goto EncodePointer;
}

void fun_401032() {
    goto 0x401210;
}

void fun_401d36() {
    goto SetUnhandledExceptionFilter;
}

void fun_401037() {
    goto 0x4011f0;
}

void fun_401d3c() {
    goto DecodePointer;
}

void fun_40103c() {
    goto 0x4011c0;
}

void fun_401d42() {
    goto QueryPerformanceCounter;
}

void fun_401041() {
    goto 0x401120;
}

void fun_401d48() {
    goto GetTickCount;
}

void fun_401046() {
    goto 0x4010f0;
}

void fun_401d4e() {
    goto GetCurrentThreadId;
}

void fun_40104b() {
    goto 0x401150;
}

void fun_401d54() {
    goto GetCurrentProcessId;
}

void fun_401050() {
    goto 0x401270;
}

void fun_401d5a() {
    goto GetSystemTimeAsFileTime;
}

void fun_401055() {
    goto 0x4011a0;
}

void fun_401d60() {
    goto TerminateProcess;
}

void fun_40105a() {
    goto 0x401110;
}

void fun_401d66() {
    goto GetCurrentProcess;
}

void fun_40105f() {
    goto 0x401120;
}

void fun_401d6c() {
    goto UnhandledExceptionFilter;
}

void fun_401064() {
    goto 0x401160;
}

void fun_401d72() {
    goto IsDebuggerPresent;
}

void fun_401069() {
    goto 0x4011b0;
}

void fun_402fdd() {
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
}
