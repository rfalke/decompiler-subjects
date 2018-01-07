
int32_t** fun_4010ea(int32_t a1, int32_t a2);

int32_t fun_40100a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t* a7, int32_t* a8, int32_t* a9) {
    int32_t** eax10;

    eax10 = fun_4010ea(4, __return_address());
    if (!eax10) {
        eax10 = reinterpret_cast<int32_t**>(0);
    } else {
        *eax10 = reinterpret_cast<int32_t*>(0x40374c);
    }
    goto **eax10;
}

void fun_401790(int32_t* a1, int32_t* a2, int32_t* a3);

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

void fun_401497(int32_t ecx);

void fun_4017d5(int32_t ecx, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5);

void fun_40144c(int32_t* a1, int32_t a2, int32_t a3, int32_t a4) {
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
    fun_401790(0x404188, 12, v5);
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
    fun_401497(ecx18);
    fun_4017d5(ecx18, 0x404188, 12, v5, a1);
    goto 0x404188;
}

/*
 * ??3@YAXPAX@Z
 * void __cdecl operator delete(void *)
 */
int32_t _3_YAXPAX_Z = 0x62a0;

void fun_4013d6() {
    goto _3_YAXPAX_Z;
}

int32_t _amsg_exit = 0x62be;

void fun_401500() {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x631c;

int32_t fun_401782() {
    goto _initterm_e;
}

int32_t _initterm = 0x6310;

void fun_40177c(int32_t ecx) {
    goto _initterm;
}

void* g0;

struct s11 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

int32_t fun_401630(struct s11* a1);

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

struct s12* fun_401670(struct s13* a1, uint32_t a2);

uint32_t fun_4016c0(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6, int32_t* a7, int32_t* a8) {
    void* eax9;
    int32_t eax10;
    struct s12* eax11;
    uint32_t eax12;

    eax9 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax10 = fun_401630(0x400000);
    if (!eax10 || (eax11 = fun_401670(0x400000, a2 - 0x400000), eax11 == 0)) {
        g0 = eax9;
        return 0;
    } else {
        eax12 = ~(eax11->f36 >> 31) & 1;
        g0 = eax9;
        return eax12;
    }
}

int32_t _XcptFilter = 0x62ee;

void fun_40161c() {
    goto _XcptFilter;
}

int32_t fun_401946(int32_t a1, int32_t a2, int32_t a3);

void fun_401940(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_401835(int32_t ecx) {
    int32_t eax2;

    eax2 = fun_401946(0, 0x10000, 0x30000);
    if (eax2) {
        fun_401940(0, 0, 0, 0, 0);
    }
    return;
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

void fun_4013ee(int32_t* a1, int32_t a2, int32_t a3, int32_t a4) {
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
    fun_401790(0x404168, 20, v5);
    *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
    while (ebp7->f16 = ebp8->f16 - 1, ebp9->f16 >= 0) {
        ecx10 = ebp11->f8 - ebp12->f12;
        ebp13->f8 = ecx10;
        ebp14->f20();
    }
    *reinterpret_cast<int32_t*>(ebp15 - 4) = -2;
    fun_4017d5(ecx10, 0x404168, 20, v5, a1);
    goto 0x404168;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x637c;

void fun_40190c() {
    goto terminate_YAXXZ;
}

struct s21 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s12* fun_401670(struct s13* a1, uint32_t a2) {
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
        addr_4016ad_2:
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
        goto addr_4016ad_2;
    }
    return eax7;
}

int32_t _invoke_watson = 0x640a;

void fun_401940(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

int32_t _crt_debugger_hook = 0x642c;

void fun_401a52(uint32_t ecx) {
    goto _crt_debugger_hook;
}

uint32_t g405058 = 0xbb40e64e;

void fun_401790(int32_t* a1, int32_t* a2, int32_t* a3) {
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
    eax12 = g405058;
    esp13 = reinterpret_cast<uint32_t*>(esp10 - 1);
    *esp13 = eax12 ^ reinterpret_cast<uint32_t>(ebp5);
    esp14 = reinterpret_cast<int32_t*>(esp13 - 1);
    *esp14 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) - 16);
    goto *esp14;
}

void fun_4017d5(int32_t ecx, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5) {
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

int32_t fun_401630(struct s11* a1) {
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

void fun_4015c4() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x403d38);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x403e38);
    }
    return;
}

int32_t fun_401867() {
    return 0;
}

int32_t _controlfp_s = 0x641c;

int32_t fun_401946(int32_t a1, int32_t a2, int32_t a3) {
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

void fun_401497(int32_t ecx) {
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
        fun_4013ee(v9, v7, v5, v3);
    }
    return;
}

/*
 * ?_type_info_dtor_internal_method@type_info@@QAEXXZ
 * public: void __thiscall type_info::_type_info_dtor_internal_method(void)
 */
int32_t _type_info_dtor_internal_method_type_info_QAEXXZ = 0x6390;

void fun_401912() {
    goto _type_info_dtor_internal_method_type_info_QAEXXZ;
}

void fun_401918();

void fun_4015a4(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t* a5, int32_t* a6) {
    fun_401918();
    return;
}

int32_t _lock = 0x63de;

void fun_401924() {
    goto _lock;
}

int32_t __dllonexit = 0x63d0;

int32_t fun_40191e(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6, int32_t* a7) {
    goto __dllonexit;
}

/*
 * ??2@YAPAXI@Z
 * void * __cdecl operator new(unsigned int)
 */
int32_t _2_YAPAXI_Z = 0x6290;

int32_t** fun_4010ea(int32_t a1, int32_t a2) {
    goto _2_YAPAXI_Z;
}

int32_t* g4054e8;

int32_t DecodePointer = 0x64c2;

int32_t* g4054d8;

struct s27 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t EncodePointer = 0x6494;

struct s28 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t _onexit = 0x63e6;

int32_t fun_40150c() {
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

    fun_401790(0x4041a8, 20, __return_address());
    v1 = g4054e8;
    esi2 = DecodePointer;
    eax3 = reinterpret_cast<int32_t>(esi2());
    *reinterpret_cast<int32_t*>(ebp4 - 28) = eax3;
    if (eax3 != -1) {
        fun_401924();
        ecx5 = 8;
        *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
        v7 = g4054e8;
        eax8 = reinterpret_cast<int32_t>(esi2(8, v7));
        *reinterpret_cast<int32_t*>(ebp9 - 28) = eax8;
        v10 = g4054d8;
        eax11 = reinterpret_cast<int32_t>(esi2(8, v10, v7));
        *reinterpret_cast<int32_t*>(ebp12 - 32) = eax11;
        v13 = ebp14 - 32;
        v15 = ebp16 - 28;
        v17 = ebp18->f8;
        esi19 = EncodePointer;
        eax20 = reinterpret_cast<int32_t>(esi19(8, v17, v15, v13, v10, v7));
        eax21 = fun_40191e(8, eax20, v17, v15, v13, v10, v7);
        *reinterpret_cast<int32_t*>(ebp22 - 36) = eax21;
        v23 = *reinterpret_cast<int32_t*>(ebp24 - 28);
        eax25 = reinterpret_cast<int32_t*>(esi19(8, v23, v13, v10, v7));
        g4054e8 = eax25;
        v26 = *reinterpret_cast<int32_t*>(ebp27 - 32);
        eax28 = reinterpret_cast<int32_t*>(esi19(8, v26, v23, v13, v10, v7));
        g4054d8 = eax28;
        *reinterpret_cast<int32_t*>(ebp29 - 4) = -2;
        fun_4015a4(8, v26, v23, v13, v10, v7);
    } else {
        v30 = ebp31->f8;
        _onexit();
        ecx5 = v30;
    }
    fun_4017d5(ecx5, v1, 0x4041a8, 20, __return_address());
    goto v1;
}

int32_t GetSystemTimeAsFileTime = 0x6528;

int32_t GetCurrentProcessId = 0x6512;

int32_t GetCurrentThreadId = 0x64fc;

int32_t GetTickCount = 0x64ec;

int32_t QueryPerformanceCounter = 0x64d2;

int32_t g40505c = 0x44bf19b1;

void fun_401870(int32_t* a1) {
    uint32_t eax2;
    void* v3;
    int32_t esi4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t esi8;
    uint32_t v9;
    uint32_t v10;

    eax2 = g405058;
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
        g405058 = esi8;
        g40505c = reinterpret_cast<int32_t>(~esi8);
    } else {
        g40505c = reinterpret_cast<int32_t>(~eax2);
    }
    return;
}

int32_t _unlock = 0x63c6;

void fun_401918() {
    goto _unlock;
}

int32_t fun_4015ad(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_40150c();
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _except_handler4_common = 0x63f0;

void fun_40193a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto _except_handler4_common;
}

int32_t fun_401005() {
    return 0;
}

int32_t fun_4010df(int32_t ecx) {
    return ecx;
}

int32_t g405188 = 0;

int32_t g40517c = 0;

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

int32_t _exit = 0x62e6;

int32_t g40518c = 0;

int32_t _cexit = 0x62dc;

void fun_40128f(int32_t ecx) {
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
    g405188 = eax4;
    zf6 = g40517c == 0;
    if (zf6) {
        esp7 = reinterpret_cast<struct s29*>(esp2 - 1);
        esp7->f0 = eax4;
        esp8 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp7) - 4);
        esp8->f0 = 0x4012ab;
        _exit();
        esp2 = &esp8->f4;
    }
    zf9 = g40518c == 0;
    if (zf9) {
        esp10 = reinterpret_cast<struct s29*>(esp2 - 1);
        esp10->f0 = 0x4012b9;
        _cexit();
        esp2 = &esp10->f4;
    }
    *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
    esp12 = reinterpret_cast<struct s29*>(esp2 - 1);
    esp12->f0 = 0x4012ca;
    fun_4017d5(ecx, esp12->f4, esp12->f8, esp12->f12, esp12->f16);
    goto esp12->f4;
}

/* (image base) */
int16_t image_base_;

int32_t g40003c;

int32_t __set_app_type = 0x636a;

int32_t g40519c = 0;

int32_t* _fmode = reinterpret_cast<int32_t*>(0x6360);

int32_t* _commode = reinterpret_cast<int32_t*>(0x6354);

int32_t g405198 = 0;

int32_t g405054 = 1;

int32_t __setusermatherr = 0x6340;

int32_t fun_401864();

int32_t g405050 = -2;

int32_t _configthreadlocale = 0x632a;

void fun_401312() {
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
    g40517c = eax3;
    __set_app_type();
    eax5 = reinterpret_cast<int32_t*>(EncodePointer(1));
    ecx6 = g40519c;
    g4054d8 = eax5;
    g4054e8 = eax5;
    eax7 = _fmode;
    *eax7 = ecx6;
    eax8 = _commode;
    ecx9 = g405198;
    *eax8 = ecx9;
    fun_4015c4();
    fun_401867();
    zf10 = g405054 == 0;
    if (zf10) {
        __setusermatherr();
        ecx9 = reinterpret_cast<int32_t>(fun_401864);
    }
    fun_401835(ecx9);
    zf11 = g405050 == -1;
    if (zf11) {
        _configthreadlocale(ecx9);
    }
    goto 0xff;
}

int32_t fun_401411() {
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
        fun_40190c();
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

int32_t fun_4014af(struct s31** a1) {
    if ((*a1)->f0 == 0xe06d7363 && ((*a1)->f16 == 3 && ((*a1)->f20 == 0x19930520 || ((*a1)->f20 == 0x19930521 || ((*a1)->f20 == 0x19930522 || (*a1)->f20 == 0x1994000))))) {
        fun_40190c();
    }
    return 0;
}

void fun_4015ea() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x403f40);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x404040);
    }
    return;
}

void fun_401610() {
    goto _cexit;
}

int32_t fun_40174b() {
    int32_t edx1;
    int32_t ebp2;

    edx1 = 0;
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return edx1;
}

void fun_40185e() {
    goto __setusermatherr;
}

void fun_40100f(int32_t* ecx) {
    *ecx = 0x403740;
    return;
}

void fun_401088(int32_t* ecx) {
    *ecx = 0x403758;
    return;
}

int32_t fun_4013dc() {
    int32_t** eax1;

    if (**eax1 == 0xe06d7363) {
        goto fun_40190c;
    } else {
        return 0;
    }
}

int32_t _purecall = 0x6284;

void fun_4010e4() {
    goto _purecall;
}

int32_t __getmainargs = 0x62cc;

void fun_401506() {
    goto __getmainargs;
}

int32_t fun_4012cb() {
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

int32_t exit = 0x62fc;

void fun_401622() {
    goto exit;
}

int32_t g4054ec;

int32_t HeapSetInformation = 0x647e;

struct s32 {
    signed char[4] pad4;
    int32_t f4;
};

struct s32* g18;

int32_t InterlockedCompareExchange = 0x6460;

int32_t Sleep = 0x6458;

int32_t g4054c4;

int32_t InterlockedExchange = 0x6442;

int32_t g4054f0;

int32_t g405174 = 0;

int32_t* __initenv = reinterpret_cast<int32_t*>(0x6304);

int32_t g405178 = 0;

int32_t g405170 = 0;

void fun_4013cc() {
    int32_t* v1;
    int1_t zf2;
    int32_t ebp3;
    struct s32* eax4;
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
    fun_401870(v1);
    fun_401790(0x404148, 16, v1);
    zf2 = g4054ec == 0;
    if (zf2) {
        HeapSetInformation(0, 1, 0, 0, 0x404148, 16, v1);
    }
    *reinterpret_cast<int32_t*>(ebp3 - 4) = 0;
    eax4 = g18;
    esi5 = eax4->f4;
    *reinterpret_cast<int32_t*>(ebp6 - 28) = 0;
    while (eax7 = reinterpret_cast<int32_t>(InterlockedCompareExchange(0x4054d4, esi5, 0, 0x404148, 16, v1)), !!eax7) {
        if (eax7 == esi5) 
            goto addr_401188_7;
        Sleep(0x3e8, 0x4054d4, esi5, 0, 0x404148, 16, v1);
    }
    addr_4011a0_10:
    eax8 = g4054c4;
    if (eax8 != 1) {
        eax9 = g4054c4;
        if (eax9) {
            g40518c = 1;
        } else {
            g4054c4 = 1;
            eax10 = fun_401782();
            ecx11 = 0x403618;
            if (eax10) {
                *reinterpret_cast<int32_t*>(ebp12 - 4) = -2;
                goto 0x4012c5;
            }
        }
    } else {
        fun_401500();
        ecx11 = 31;
    }
    eax13 = g4054c4;
    if (eax13 == 1) {
        fun_40177c(ecx11);
        ecx11 = 0x403208;
        g4054c4 = 2;
    }
    if (!*reinterpret_cast<int32_t*>(ebp14 - 28)) {
        InterlockedExchange(ecx11, 0x4054d4, 0, 0x4054d4, esi5, 0, 0x404148, 16, v1);
    }
    zf15 = g4054f0 == 0;
    if (!zf15 && (eax16 = fun_4016c0(ecx11, 0x4054f0, 0x4054d4, esi5, 0, 0x404148, 16, v1), !!eax16)) {
        g4054f0(0x4054f0, 0, 2, 0, 0x4054d4, esi5, 0, 0x404148, 16, v1);
    }
    eax17 = g405174;
    ecx18 = __initenv;
    *ecx18 = eax17;
    v19 = g405174;
    v20 = g405178;
    v21 = g405170;
    eax22 = fun_40100a(v21, v20, v19, 0x4054d4, esi5, 0, 0x404148, 16, v1);
    g405188 = eax22;
    zf23 = g40517c == 0;
    if (!zf23) 
        goto 0x4012ab;
    exit();
    *reinterpret_cast<int32_t*>(ebp24 - 32) = ***reinterpret_cast<int32_t***>(ebp25 - 20);
    fun_40161c();
    goto eax22;
    addr_401188_7:
    *reinterpret_cast<int32_t*>(ebp26 - 28) = 1;
    goto addr_4011a0_10;
}

int32_t SetUnhandledExceptionFilter = 0x64a4;

void fun_4014f1() {
    SetUnhandledExceptionFilter();
    goto fun_4014af;
}

void fun_401616() {
    goto _exit;
}

void fun_40175e() {
}

int32_t fun_401864() {
    return 0;
}

void fun_401a58() {
    goto InterlockedExchange;
}

void fun_401014(int32_t* ecx) {
    *ecx = 0x40374c;
    return;
}

int32_t* fun_401093(int32_t* ecx, unsigned char a2) {
    int32_t* eax3;
    int32_t* esi4;
    int32_t v5;

    if (!(a2 & 2)) {
        fun_401912();
        if (a2 & 1) {
            fun_4013d6();
        }
        eax3 = ecx;
    } else {
        esi4 = ecx - 1;
        v5 = *esi4;
        fun_40144c(ecx, 12, v5, fun_401912);
        if (a2 & 1) {
            fun_4013d6();
        }
        eax3 = esi4;
    }
    return eax3;
}

void fun_40192a(uint32_t ecx);

void fun_4017e9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_40193a(0x405058, fun_40192a, a1, a2, a3, a4);
    return;
}

void fun_40186a() {
    goto __set_app_type;
}

int32_t g4052a8;

uint32_t g4052a4;

int32_t g4052a0;

int32_t g40529c;

int32_t g405298;

int32_t g405294;

int16_t g4052c0;

int16_t g4052b4;

int16_t g405290;

int16_t g40528c;

int16_t g405288;

int16_t g405284;

uint32_t g4052b8;

int32_t g4052ac;

int32_t g4052b0;

void* g4052bc;

int32_t g4051f8 = 0;

int32_t g4051ac = 0;

int32_t g4051a0 = 0;

int32_t g4051a4 = 0;

int32_t IsDebuggerPresent = 0x6586;

int32_t g4051f0 = 0;

int32_t UnhandledExceptionFilter = 0x656a;

int32_t GetCurrentProcess = 0x6556;

int32_t TerminateProcess = 0x6542;

void fun_40192a(uint32_t ecx) {
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
    zf3 = ecx == g405058;
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
    g4052a8 = eax6;
    g4052a4 = ecx;
    g4052a0 = edx7;
    g40529c = ebx8;
    g405298 = esi9;
    g405294 = edi10;
    g4052c0 = ss11;
    g4052b4 = cs12;
    g405290 = ds13;
    g40528c = es14;
    g405288 = fs15;
    g405284 = gs16;
    g4052b8 = eflags2 & 0xfcffff;
    g4052ac = ebp17;
    g4052b0 = reinterpret_cast<int32_t>(__return_address());
    g4052bc = reinterpret_cast<void*>(esp4 + 2);
    g4051f8 = 0x10001;
    eax18 = g4052b0;
    g4051ac = eax18;
    g4051a0 = 0xc0000409;
    g4051a4 = 1;
    eax19 = g405058;
    eax20 = g40505c;
    eax21 = reinterpret_cast<int32_t>(IsDebuggerPresent(eax19, eax20));
    g4051f0 = eax21;
    fun_401a52(ecx);
    SetUnhandledExceptionFilter(1, 0, eax19, eax20);
    UnhandledExceptionFilter(1, 0x403770, 0, eax19, eax20);
    zf22 = g4051f0 == 0;
    if (zf22) 
        goto addr_401a36_5;
    addr_401a3e_6:
    eax23 = reinterpret_cast<int32_t>(GetCurrentProcess(1, 0xc0000409, 0x403770, 0, eax19, eax20));
    TerminateProcess(1, eax23, 0xc0000409, 0x403770, 0, eax19, eax20);
    return;
    addr_401a36_5:
    fun_401a52(1);
    goto addr_401a3e_6;
}

void fun_401a5e() {
    goto Sleep;
}

struct s32* fun_4010f0() {
    struct s32* eax1;

    eax1 = g18;
    return eax1;
}

void fun_40180e() {
    goto _configthreadlocale;
}

void fun_401a64() {
    goto InterlockedCompareExchange;
}

int32_t g405194 = 0;

int32_t g405190 = 0;

int32_t g405184 = 0;

int32_t g405180 = 0;

void fun_4010f7() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    fun_4015ad(fun_4015ea);
    eax1 = g405194;
    v2 = g405190;
    g405184 = eax1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x405170, 0x405178, 0x405174, v2, 0x405184));
    g405180 = eax3;
    if (eax3 < 0) {
        fun_401500();
    }
    return;
}

void fun_401814(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    if (a1) {
        fun_401940(a2, a3, a4, a5, a6);
    }
    return;
}

void fun_401a6a() {
    goto HeapSetInformation;
}

void fun_401a70() {
    goto EncodePointer;
}

void fun_401a76() {
    goto SetUnhandledExceptionFilter;
}

void fun_401a7c() {
    goto DecodePointer;
}

void fun_401a82() {
    goto QueryPerformanceCounter;
}

void fun_401a88() {
    goto GetTickCount;
}

void fun_401a8e() {
    goto GetCurrentThreadId;
}

void fun_401a94() {
    goto GetCurrentProcessId;
}

void fun_401a9a() {
    goto GetSystemTimeAsFileTime;
}

void fun_401aa0() {
    goto TerminateProcess;
}

void fun_401aa6() {
    goto GetCurrentProcess;
}

void fun_401aac() {
    goto UnhandledExceptionFilter;
}

void fun_401ab2() {
    goto IsDebuggerPresent;
}

void fun_402d3e() {
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
}
