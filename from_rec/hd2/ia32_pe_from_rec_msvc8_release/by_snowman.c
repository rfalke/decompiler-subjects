
uint32_t g403000 = 0xbb40e64e;

int32_t sprintf = 0x2334;

int32_t g402114 = 0x202020;

void fun_401a2e(uint32_t a1, int32_t a2, void* a3);

int32_t printf = 0x2348;

int32_t fun_40123b(uint32_t ecx);

int32_t fun_401000(void* ecx, void* a2, void* a3) {
    void* esp4;
    uint32_t eax5;
    uint32_t v6;
    int32_t ebx7;
    void* ebp8;
    void** esp9;
    void* v10;
    void* esp11;
    void* esi12;
    int32_t edx13;
    uint32_t ecx14;
    void* edi15;
    uint32_t v16;
    int32_t v17;
    signed char* eax18;
    void* edx19;
    void* ebx20;
    void* ebx21;
    void* esi22;
    void* edi23;
    void** esp24;
    void* ecx25;
    uint32_t eax26;
    void* esp27;
    int32_t eax28;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 88);
    eax5 = g403000;
    v6 = eax5 ^ reinterpret_cast<uint32_t>(esp4);
    ebx7 = sprintf;
    ebp8 = a3;
    esp9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp4) - 4 - 4 - 4 - 4 - 4);
    v10 = a2;
    ebx7(esp9 + 6, "%08lX:", ecx);
    esp11 = reinterpret_cast<void*>(esp9 - 1 - 1 - 1 + 1 + 3);
    if (reinterpret_cast<int32_t>(ebp8) > reinterpret_cast<int32_t>(16)) {
        ebp8 = reinterpret_cast<void*>(16);
    }
    esi12 = reinterpret_cast<void*>(0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebp8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebp8 == 0)) {
        addr_401071_4:
        edx13 = g402114;
        ecx14 = 16 - reinterpret_cast<uint32_t>(esi12);
    } else {
        edi15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp11) + 29);
        do {
            v16 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi12));
            ebx7(edi15, " %02lX", v16);
            esi12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi12) + 1);
            esp11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp11) - 4 - 4 - 4 - 4 + 4 + 12);
            edi15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi15) + 3);
        } while (reinterpret_cast<int32_t>(esi12) < reinterpret_cast<int32_t>(ebp8));
        if (reinterpret_cast<int32_t>(esi12) >= reinterpret_cast<int32_t>(16)) 
            goto addr_401094_8; else 
            goto addr_401071_4;
    }
    do {
        do {
        } while (*reinterpret_cast<signed char*>(&v17));
        --ecx14;
        v17 = edx13;
    } while (ecx14);
    addr_401094_8:
    eax18 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esp11) + 20);
    edx19 = reinterpret_cast<void*>(eax18 + 1);
    do {
        ++eax18;
    } while (*reinterpret_cast<signed char*>(&v17));
    ebx20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax18) - reinterpret_cast<uint32_t>(edx19));
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp11) + reinterpret_cast<uint32_t>(ebx20) + 20) = 0x7c2020;
    ebx21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx20) + 3);
    esi22 = reinterpret_cast<void*>(0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebp8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebp8 == 0)) {
        addr_4010e4_14:
        edi23 = reinterpret_cast<void*>(16 - reinterpret_cast<uint32_t>(esi22));
        esp24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp11) - 4);
        fun_401a2e(reinterpret_cast<uint32_t>(esp24) + (reinterpret_cast<uint32_t>(ebx21) + reinterpret_cast<uint32_t>(esi22)) + 24, 32, edi23);
        esp11 = reinterpret_cast<void*>(esp24 - 1 - 1 - 1 + 1 + 3);
        esi22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi22) + reinterpret_cast<uint32_t>(edi23));
    } else {
        ecx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp11) + reinterpret_cast<uint32_t>(ebx21) + 20);
        do {
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi22)) < 32 || (eax26 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi22)), *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi22)) > 0x7e)) {
                eax26 = 46;
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx25) + reinterpret_cast<uint32_t>(esi22)) = *reinterpret_cast<signed char*>(&eax26);
            esi22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi22) + 1);
        } while (reinterpret_cast<int32_t>(esi22) < reinterpret_cast<int32_t>(ebp8));
        if (reinterpret_cast<int32_t>(esi22) < reinterpret_cast<int32_t>(16)) 
            goto addr_4010e4_14;
    }
    esp27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp11) - 4 - 4);
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esp27) + (reinterpret_cast<uint32_t>(ebx21) + reinterpret_cast<uint32_t>(esi22)) + 28) = 0x7c;
    printf("%s\n", reinterpret_cast<uint32_t>(esp11) + 20);
    eax28 = fun_40123b(v6 ^ reinterpret_cast<uint32_t>(esp27) - 4 + 4 + 8 + 4 + 4 + 4 + 4);
    return eax28;
}

int32_t memset = 0x2640;

void fun_401a2e(uint32_t a1, int32_t a2, void* a3) {
    goto memset;
}

int32_t g403140 = 0;

uint32_t g40313c = 0;

int32_t g403138 = 0;

int32_t g403134 = 0;

int32_t g403130 = 0;

int32_t g40312c = 0;

int16_t g403158 = 0;

int16_t g40314c = 0;

int16_t g403128 = 0;

int16_t g403124 = 0;

int16_t g403120 = 0;

int16_t g40311c = 0;

uint32_t g403150 = 0;

int32_t g403144 = 0;

int32_t g403148 = 0;

void* g403154 = reinterpret_cast<void*>(0);

int32_t g403090 = 0;

int32_t g403044 = 0;

int32_t g403038 = 0;

int32_t g40303c = 0;

int32_t g403004 = 0x44bf19b1;

int32_t IsDebuggerPresent = 0x25ae;

int32_t g403088 = 0;

void fun_4019fe(uint32_t ecx);

int32_t SetUnhandledExceptionFilter = 0x2590;

int32_t UnhandledExceptionFilter = 0x2574;

int32_t GetCurrentProcess = 0x2560;

int32_t TerminateProcess = 0x254c;

int32_t fun_40123b(uint32_t ecx) {
    uint32_t eflags2;
    int1_t zf3;
    int32_t eax4;
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
    int32_t eax25;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = 0;
    zf3 = ecx == g403000;
    if (zf3) {
        return eax4;
    }
    esp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    *reinterpret_cast<int1_t*>(&eflags2) = reinterpret_cast<uint32_t>(esp5) < 0x328;
    esp6 = reinterpret_cast<void*>(esp5 - 0xca);
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = esp6 == 0;
    *reinterpret_cast<int1_t*>(&eflags2) = reinterpret_cast<int32_t>(esp6) < reinterpret_cast<int32_t>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    g403140 = eax7;
    g40313c = ecx;
    g403138 = edx8;
    g403134 = ebx9;
    g403130 = esi10;
    g40312c = edi11;
    g403158 = ss12;
    g40314c = cs13;
    g403128 = ds14;
    g403124 = es15;
    g403120 = fs16;
    g40311c = gs17;
    g403150 = eflags2 & 0xfcffff;
    g403144 = ebp18;
    g403148 = reinterpret_cast<int32_t>(__return_address());
    g403154 = reinterpret_cast<void*>(esp5 + 2);
    g403090 = 0x10001;
    eax19 = g403148;
    g403044 = eax19;
    g403038 = 0xc0000409;
    g40303c = 1;
    eax20 = g403000;
    eax21 = g403004;
    eax22 = reinterpret_cast<int32_t>(IsDebuggerPresent(eax20, eax21));
    g403088 = eax22;
    fun_4019fe(ecx);
    SetUnhandledExceptionFilter(1, 0, eax20, eax21);
    UnhandledExceptionFilter(1, "80@", 0, eax20, eax21);
    zf23 = g403088 == 0;
    if (zf23) 
        goto addr_4015e0_5;
    addr_4015e8_6:
    eax24 = reinterpret_cast<int32_t>(GetCurrentProcess(1, 0xc0000409, "80@", 0, eax20, eax21));
    eax25 = reinterpret_cast<int32_t>(TerminateProcess(1, eax24, 0xc0000409, "80@", 0, eax20, eax21));
    return eax25;
    addr_4015e0_5:
    fun_4019fe(1);
    goto addr_4015e8_6;
}

int32_t _amsg_exit = 0x2386;

void fun_40164c() {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x23e4;

int32_t fun_4018b4() {
    goto _initterm_e;
}

int32_t _initterm = 0x23d8;

void fun_4018ae(int32_t ecx) {
    goto _initterm;
}

void* g0;

struct s0 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int32_t fun_401760(struct s0* a1);

struct s1 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
    signed char[20] pad36;
    uint32_t f24;
};

struct s2 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s1* fun_4017a0(struct s2* a1, uint32_t a2);

uint32_t fun_4017f0(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    void* eax9;
    int32_t eax10;
    struct s1* eax11;
    uint32_t eax12;

    eax9 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax10 = fun_401760(0x400000);
    if (!eax10 || (eax11 = fun_4017a0(0x400000, a2 - 0x400000), eax11 == 0)) {
        g0 = eax9;
        return 0;
    } else {
        eax12 = ~(eax11->f24 >> 31) & 1;
        g0 = eax9;
        return eax12;
    }
}

int32_t _XcptFilter = 0x23b6;

void fun_40175a() {
    goto _XcptFilter;
}

int32_t fun_401a28(int32_t a1, int32_t a2, int32_t a3);

void fun_401a22(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_40193a(int32_t ecx) {
    int32_t eax2;

    eax2 = fun_401a28(0, 0x10000, 0x30000);
    if (eax2) {
        fun_401a22(0, 0, 0, 0, 0);
    }
    return;
}

int32_t _crt_debugger_hook = 0x246e;

void fun_4019fe(uint32_t ecx) {
    goto _crt_debugger_hook;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x2484;

void fun_401a04() {
    goto terminate_YAXXZ;
}

struct s3 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s1* fun_4017a0(struct s2* a1, uint32_t a2) {
    struct s3* ecx3;
    uint32_t eax4;
    uint32_t esi5;
    uint32_t edx6;
    struct s1* eax7;
    uint32_t edi8;

    ecx3 = reinterpret_cast<struct s3*>(a1->f3c + reinterpret_cast<int32_t>(a1));
    eax4 = ecx3->f14;
    esi5 = ecx3->f6;
    edx6 = 0;
    eax7 = reinterpret_cast<struct s1*>(eax4 + reinterpret_cast<int32_t>(ecx3) + 24);
    if (!esi5) {
        addr_4017dd_2:
        eax7 = reinterpret_cast<struct s1*>(0);
    } else {
        edi8 = a2;
        do {
            if (edi8 < eax7->fc) 
                continue;
            if (edi8 < eax7->f8 + eax7->fc) 
                break;
            ++edx6;
            ++eax7;
        } while (edx6 < esi5);
        goto addr_4017dd_2;
    }
    return eax7;
}

int32_t _invoke_watson = 0x24ee;

void fun_401a22(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

int32_t fun_401965() {
    return 0;
}

int32_t _stat64i32 = 0x236c;

int32_t fopen = 0x2352;

int32_t perror = 0x233e;

int32_t fread = 0x235a;

int32_t fclose = 0x2362;

int32_t fun_401140(void* ecx) {
    void* esp2;
    uint32_t eax3;
    uint32_t v4;
    void* esp5;
    int32_t eax6;
    void* esp7;
    int32_t eax8;
    int32_t edi9;
    int32_t eax10;
    void* ebp11;
    void* v12;
    int32_t ebx13;
    void* esp14;
    void* eax15;
    void* v16;
    int32_t eax17;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 76);
    eax3 = g403000;
    v4 = eax3 ^ reinterpret_cast<uint32_t>(esp2);
    esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp2) - 4 - 4 - 4 - 4);
    eax6 = reinterpret_cast<int32_t>(_stat64i32(ecx, reinterpret_cast<uint32_t>(esp5) + 16));
    esp7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) - 4 - 4 - 4 + 4 + 8);
    if (eax6 || (eax8 = reinterpret_cast<int32_t>(fopen(ecx, "rb")), edi9 = eax8, esp7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp7) - 4 - 4 - 4 + 4 + 8), edi9 == 0)) {
        perror(ecx);
        eax10 = fun_40123b(v4 ^ reinterpret_cast<uint32_t>(esp7) - 4 - 4 + 4 + 4 + 4 + 4 + 4 + 4);
        return eax10;
    } else {
        ebp11 = reinterpret_cast<void*>(0);
        if (reinterpret_cast<uint32_t>(v12) > 0) {
            ebx13 = fread;
            esp7 = esp7;
            do {
                esp14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp7) - 4 - 4);
                ecx = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp14) + 76);
                eax15 = reinterpret_cast<void*>(ebx13(ecx, 1, 16, edi9));
                esp7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp14) - 4 - 4 - 4 + 4 + 16);
                if (!eax15) 
                    break;
                ecx = ebp11;
                fun_401000(ecx, reinterpret_cast<uint32_t>(esp7) + 68, eax15);
                ebp11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) + reinterpret_cast<uint32_t>(eax15));
                esp7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp7) - 4 - 4 - 4 + 4 + 8);
            } while (reinterpret_cast<uint32_t>(ebp11) < reinterpret_cast<uint32_t>(v16));
        }
        fclose(ecx, edi9);
        eax17 = fun_40123b(v4 ^ reinterpret_cast<uint32_t>(esp7) - 4 - 4 + 4 + 4 + 4 + 4 + 4 + 4);
        return eax17;
    }
}

void fun_4018bc(int32_t a1, int32_t a2, int32_t a3);

int32_t g40337c;

int32_t _decode_pointer = 0x24c2;

void fun_401a16(int32_t ecx);

struct s4 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t _encode_pointer = 0x244a;

int32_t fun_401a10(int32_t ecx, int32_t a2, int32_t a3, int32_t a4);

int32_t g403378;

void fun_4016ee(int32_t ecx);

struct s5 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t _onexit = 0x24b8;

void fun_401901(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

int32_t fun_401652(int32_t a1) {
    int32_t v2;
    int32_t esi3;
    int32_t eax4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t v7;
    int32_t eax8;
    int32_t ebp9;
    int32_t eax10;
    int32_t ebp11;
    int32_t v12;
    int32_t ebp13;
    int32_t v14;
    int32_t ebp15;
    int32_t v16;
    struct s4* ebp17;
    int32_t esi18;
    int32_t eax19;
    int32_t ecx20;
    int32_t eax21;
    int32_t ebp22;
    int32_t v23;
    int32_t ebp24;
    int32_t eax25;
    int32_t v26;
    int32_t ebp27;
    int32_t eax28;
    int32_t ebp29;
    int32_t v30;
    struct s5* ebp31;

    fun_4018bc(0x4021f8, 20, __return_address());
    v2 = g40337c;
    esi3 = _decode_pointer;
    eax4 = reinterpret_cast<int32_t>(esi3());
    *reinterpret_cast<int32_t*>(ebp5 - 28) = eax4;
    if (eax4 != -1) {
        fun_401a16(v2);
        *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
        v7 = g40337c;
        eax8 = reinterpret_cast<int32_t>(esi3(8));
        *reinterpret_cast<int32_t*>(ebp9 - 28) = eax8;
        eax10 = reinterpret_cast<int32_t>(esi3(8));
        *reinterpret_cast<int32_t*>(ebp11 - 32) = eax10;
        v12 = ebp13 - 32;
        v14 = ebp15 - 28;
        v16 = ebp17->f8;
        esi18 = _encode_pointer;
        eax19 = reinterpret_cast<int32_t>(esi18(v7));
        ecx20 = v16;
        eax21 = fun_401a10(ecx20, eax19, v14, v12);
        *reinterpret_cast<int32_t*>(ebp22 - 36) = eax21;
        v23 = *reinterpret_cast<int32_t*>(ebp24 - 28);
        eax25 = reinterpret_cast<int32_t>(esi18(ecx20, v23, eax19, v14, v12));
        g40337c = eax25;
        v26 = *reinterpret_cast<int32_t*>(ebp27 - 32);
        eax28 = reinterpret_cast<int32_t>(esi18(ecx20, v26, v23, eax19, v14, v12));
        g403378 = eax28;
        *reinterpret_cast<int32_t*>(ebp29 - 4) = -2;
        fun_4016ee(ecx20);
    } else {
        v30 = ebp31->f8;
        _onexit(v2);
        ecx20 = v30;
    }
    fun_401901(ecx20, 0x4021f8, 20, __return_address(), a1);
    goto 0x4021f8;
}

void fun_4018bc(int32_t a1, int32_t a2, int32_t a3) {
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
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp4) - a2 - 4);
    *esp6 = ebx7;
    esp8 = esp6 - 1;
    *esp8 = esi9;
    esp10 = esp8 - 1;
    *esp10 = edi11;
    eax12 = g403000;
    esp13 = reinterpret_cast<uint32_t*>(esp10 - 1);
    *esp13 = eax12 ^ reinterpret_cast<uint32_t>(ebp5);
    esp14 = reinterpret_cast<int32_t*>(esp13 - 1);
    *esp14 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) - 16);
    goto *esp14;
}

void fun_401901(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t ebp6;
    int32_t* esp7;
    void* ebp8;

    g0 = *reinterpret_cast<void**>(ebp6 - 16);
    esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + 4 - 4);
    *esp7 = reinterpret_cast<int32_t>(__return_address());
    goto *esp7;
}

struct s6 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
};

int32_t fun_401760(struct s0* a1) {
    struct s6* eax2;
    int32_t edx3;

    if (a1->f0 != 0x5a4d || (eax2 = reinterpret_cast<struct s6*>(a1->f3c + reinterpret_cast<int32_t>(a1)), eax2->f0 != 0x4550)) {
        return 0;
    } else {
        edx3 = 0;
        *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<uint1_t>(eax2->f18 == 0x10b);
        return edx3;
    }
}

int32_t fun_401200(int32_t* ecx, int32_t a2, void** a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t ebx11;
    int32_t edi12;
    int32_t esi13;
    void* ecx14;
    int32_t eax15;

    ebx11 = a2;
    edi12 = 0;
    esi13 = 1;
    if (ebx11 > 1) {
        do {
            ecx14 = a3[esi13];
            eax15 = fun_401140(ecx14);
            ++esi13;
            edi12 = edi12 + eax15;
        } while (esi13 < ebx11);
    }
    return edi12;
}

void fun_40170e() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x4021c8);
    if (!1) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x4021c8);
    }
    return;
}

int32_t _controlfp_s = 0x2500;

int32_t fun_401a28(int32_t a1, int32_t a2, int32_t a3) {
    goto _controlfp_s;
}

int32_t _unlock = 0x2498;

void fun_401a0a() {
    goto _unlock;
}

void fun_4016ee(int32_t ecx) {
    fun_401a0a();
    return;
}

int32_t _lock = 0x24b0;

void fun_401a16(int32_t ecx) {
    goto _lock;
}

int32_t __dllonexit = 0x24a2;

int32_t fun_401a10(int32_t ecx, int32_t a2, int32_t a3, int32_t a4) {
    goto __dllonexit;
}

int32_t GetSystemTimeAsFileTime = 0x2618;

int32_t GetCurrentProcessId = 0x2602;

int32_t GetCurrentThreadId = 0x25ec;

int32_t GetTickCount = 0x25dc;

int32_t QueryPerformanceCounter = 0x25c2;

void fun_401968(int32_t a1) {
    uint32_t eax2;
    void* v3;
    int32_t esi4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t esi8;
    uint32_t v9;
    uint32_t v10;

    eax2 = g403000;
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
                esi8 = esi8 | esi8 << 16;
            }
        } else {
            esi8 = 0xbb40e64f;
        }
        g403000 = esi8;
        g403004 = reinterpret_cast<int32_t>(~esi8);
    } else {
        g403004 = reinterpret_cast<int32_t>(~eax2);
    }
    return;
}

int32_t fun_4016f7(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_401652(a1);
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _except_handler4_common = 0x24d4;

void fun_401a1c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto _except_handler4_common;
}

void fun_40104a() {
}

void fun_40109d(int32_t ecx) {
}

void fun_401218() {
}

int32_t g403030 = 0;

int32_t g403024 = 0;

struct s7 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

int32_t _exit = 0x23ae;

int32_t g403034 = 0;

int32_t _cexit = 0x23a4;

void fun_4013cf(int32_t ecx) {
    int32_t* esp2;
    int32_t ebp3;
    int32_t eax4;
    int32_t ebp5;
    int1_t zf6;
    struct s7* esp7;
    struct s8* esp8;
    int1_t zf9;
    struct s7* esp10;
    int32_t ebp11;
    struct s7* esp12;

    esp2 = *reinterpret_cast<int32_t**>(ebp3 - 24);
    eax4 = *reinterpret_cast<int32_t*>(ebp5 - 32);
    g403030 = eax4;
    zf6 = g403024 == 0;
    if (zf6) {
        esp7 = reinterpret_cast<struct s7*>(esp2 - 1);
        esp7->f0 = eax4;
        esp8 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esp7) - 4);
        esp8->f0 = 0x4013eb;
        _exit();
        esp2 = &esp8->f4;
    }
    zf9 = g403034 == 0;
    if (zf9) {
        esp10 = reinterpret_cast<struct s7*>(esp2 - 1);
        esp10->f0 = 0x4013f9;
        _cexit();
        esp2 = &esp10->f4;
    }
    *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
    esp12 = reinterpret_cast<struct s7*>(esp2 - 1);
    esp12->f0 = 0x40140a;
    fun_401901(ecx, esp12->f4, esp12->f8, esp12->fc, esp12->f10);
    goto esp12->f4;
}

struct s9 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f10;
    int32_t f14;
};

int32_t fun_4015fc(struct s9** a1) {
    if ((*a1)->f0 == 0xe06d7363 && ((*a1)->f10 == 3 && ((*a1)->f14 == 0x19930520 || ((*a1)->f14 == 0x19930521 || ((*a1)->f14 == 0x19930522 || (*a1)->f14 == 0x1994000))))) {
        fun_401a04();
    }
    return 0;
}

void fun_401734() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x4021d0);
    if (!1) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x4021d0);
    }
    return;
}

int32_t fun_40187b() {
    int32_t edx1;
    int32_t ebp2;

    edx1 = 0;
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return edx1;
}

void fun_401a34() {
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
}

int32_t g403360;

int32_t g40335c;

int32_t g40302c = 0;

int32_t __getmainargs = 0x2394;

int32_t g403028 = 0;

void fun_40124a() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    fun_4016f7(fun_401734);
    eax1 = g403360;
    v2 = g40335c;
    g40302c = eax1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x403018, 0x403020, 0x40301c, v2, 0x40302c));
    g403028 = eax3;
    if (eax3 < 0) {
        fun_40164c();
    }
    return;
}

/* (image base) */
int16_t image_base_;

int32_t g40003c;

struct s10 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f18;
    signed char[90] pad116;
    uint32_t f74;
    signed char[12] pad132;
    uint32_t f84;
    signed char[96] pad232;
    int32_t fe8;
    signed char[12] pad248;
    int32_t ff8;
};

int32_t __set_app_type = 0x245c;

int32_t __p__fmode = 0x243c;

int32_t g403368;

int32_t __p__commode = 0x242c;

int32_t g403364;

int32_t* _adjust_fdiv = reinterpret_cast<int32_t*>(0x241c);

int32_t g40336c;

int32_t g403014 = 1;

int32_t __setusermatherr = 0x2408;

int32_t g403010 = -2;

int32_t _configthreadlocale = 0x23f2;

int32_t fun_40140b() {
    int1_t zf1;
    int32_t eax2;
    struct s10* eax3;
    uint32_t ecx4;
    int32_t eax5;
    int32_t ecx6;
    int1_t zf7;
    int32_t eax8;
    int32_t* eax9;
    int32_t ecx10;
    int32_t* eax11;
    int32_t ecx12;
    int32_t* eax13;
    int1_t zf14;
    int1_t zf15;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1) 
        goto addr_401419_2;
    eax2 = g40003c;
    eax3 = reinterpret_cast<struct s10*>(eax2 + 0x400000);
    if (eax3->f0 != 0x4550) 
        goto addr_401419_2;
    ecx4 = eax3->f18;
    if (ecx4 == 0x10b) {
        if (eax3->f74 <= 14) {
            addr_401419_2:
            eax5 = 0;
        } else {
            ecx6 = 0;
            zf7 = eax3->fe8 == 0;
            goto addr_401465_7;
        }
    } else {
        if (ecx4 != 0x20b) 
            goto addr_401419_2;
        if (eax3->f84 <= 14) 
            goto addr_401419_2;
        ecx6 = 0;
        zf7 = eax3->ff8 == 0;
        goto addr_401465_7;
    }
    addr_40146a_11:
    g403024 = eax5;
    __set_app_type();
    eax8 = reinterpret_cast<int32_t>(_encode_pointer());
    g403378 = eax8;
    g40337c = eax8;
    eax9 = reinterpret_cast<int32_t*>(__p__fmode(1));
    ecx10 = g403368;
    *eax9 = ecx10;
    eax11 = reinterpret_cast<int32_t*>(__p__commode());
    ecx12 = g403364;
    *eax11 = ecx12;
    eax13 = _adjust_fdiv;
    g40336c = *eax13;
    fun_40170e();
    fun_401965();
    zf14 = g403014 == 0;
    if (zf14) {
        __setusermatherr();
        ecx12 = reinterpret_cast<int32_t>(fun_401965);
    }
    fun_40193a(ecx12);
    zf15 = g403010 == -1;
    if (zf15) {
        _configthreadlocale(ecx12);
    }
    return 0;
    addr_401465_7:
    *reinterpret_cast<unsigned char*>(&ecx6) = reinterpret_cast<uint1_t>(!zf7);
    eax5 = ecx6;
    goto addr_40146a_11;
}

struct s11 {
    signed char[4] pad4;
    int32_t f4;
};

struct s11* g18;

int32_t InterlockedCompareExchange = 0x252e;

int32_t Sleep = 0x2526;

int32_t g403370;

int32_t InterlockedExchange = 0x2510;

int32_t g403380;

int32_t g40301c = 0;

int32_t* __initenv = reinterpret_cast<int32_t*>(0x23cc);

void** g403020 = reinterpret_cast<void**>(0);

int32_t g403018 = 0;

int32_t exit = 0x23c4;

void fun_4014ec() {
    int32_t v1;
    int32_t ebp2;
    struct s11* eax3;
    int32_t esi4;
    int32_t ebp5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t ecx10;
    int32_t ebp11;
    int32_t eax12;
    int32_t ebp13;
    int1_t zf14;
    uint32_t eax15;
    int32_t eax16;
    int32_t* ecx17;
    int32_t v18;
    void** v19;
    int32_t v20;
    int32_t eax21;
    int1_t zf22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;

    v1 = reinterpret_cast<int32_t>(__return_address());
    fun_401968(v1);
    fun_4018bc(0x4021d8, 16, v1);
    *reinterpret_cast<int32_t*>(ebp2 - 4) = 0;
    eax3 = g18;
    esi4 = eax3->f4;
    *reinterpret_cast<int32_t*>(ebp5 - 28) = 0;
    while (eax6 = reinterpret_cast<int32_t>(InterlockedCompareExchange(0x403374, esi4, 0, 0x4021d8, 16, v1)), !!eax6) {
        if (eax6 == esi4) 
            goto addr_4012c8_5;
        Sleep(0x3e8, 0x403374, esi4, 0, 0x4021d8, 16, v1);
    }
    addr_4012e0_8:
    eax7 = g403370;
    if (eax7 != 1) {
        eax8 = g403370;
        if (eax8) {
            g403034 = 1;
        } else {
            g403370 = 1;
            eax9 = fun_4018b4();
            ecx10 = 0x4020dc;
            if (eax9) {
                *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
                goto 0x401405;
            }
        }
    } else {
        fun_40164c();
        ecx10 = 31;
    }
    eax12 = g403370;
    if (eax12 == 1) {
        fun_4018ae(ecx10);
        ecx10 = 0x4020cc;
        g403370 = 2;
    }
    if (!*reinterpret_cast<int32_t*>(ebp13 - 28)) {
        InterlockedExchange(ecx10, 0x403374, 0, 0x403374, esi4, 0, 0x4021d8, 16, v1);
    }
    zf14 = g403380 == 0;
    if (!zf14 && (eax15 = fun_4017f0(ecx10, 0x403380, 0x403374, esi4, 0, 0x4021d8, 16, v1), !!eax15)) {
        g403380(0x403380, 0, 2, 0, 0x403374, esi4, 0, 0x4021d8, 16, v1);
    }
    eax16 = g40301c;
    ecx17 = __initenv;
    *ecx17 = eax16;
    v18 = g40301c;
    v19 = g403020;
    v20 = g403018;
    eax21 = fun_401200(ecx17, v20, v19, v18, 0x403374, esi4, 0, 0x4021d8, 16, v1);
    g403030 = eax21;
    zf22 = g403024 == 0;
    if (!zf22) 
        goto 0x4013eb;
    exit();
    *reinterpret_cast<int32_t*>(ebp23 - 32) = ***reinterpret_cast<int32_t***>(ebp24 - 20);
    fun_40175a();
    goto eax21;
    addr_4012c8_5:
    *reinterpret_cast<int32_t*>(ebp25 - 28) = 1;
    goto addr_4012e0_8;
}

void fun_40163e() {
    SetUnhandledExceptionFilter();
    goto fun_4015fc;
}

void fun_40188f() {
}

void fun_401915(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_401a1c(0x403000, fun_40123b, a1, a2, a3, a4);
    return;
}
