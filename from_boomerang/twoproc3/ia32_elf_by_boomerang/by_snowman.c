
int32_t call_gmon_start(int32_t ecx);

void frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init(int32_t ecx) {
    int32_t eax2;

    call_gmon_start(ecx);
    frame_dummy();
    eax2 = __do_global_ctors_aux();
    return eax2;
}

void fun_80483fe(int32_t a1, int32_t a2);

void fun_80483b4();

int32_t call_gmon_start(int32_t ecx) {
    int32_t ebx2;

    fun_80483fe(ecx, ebx2);
    if (*reinterpret_cast<int32_t*>(ecx + 0x12ea - 4)) {
        fun_80483b4();
    }
    return ebx2;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x8049610);
    }
    return;
}

int32_t __init_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t eax1;
    int32_t ebx2;
    int32_t v3;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = 0x8049600;
        do {
            eax1();
            eax1 = *reinterpret_cast<int32_t*>(ebx2 - 4);
            ebx2 = ebx2 - 4;
        } while (eax1 != -1);
    }
    return v3;
}

int32_t __libc_start_main = 0x804839a;

void fun_8048394(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __gmon_start__ = 0x80483ba;

void fun_80483b4() {
    goto __gmon_start__;
}

void fun_80485de(int32_t a1, int32_t a2);

void __do_global_dtors_aux();

int32_t _fini() {
    int32_t eax1;
    int32_t ebx2;

    fun_80485de(eax1, ebx2);
    __do_global_dtors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80483fe(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x12ea - 4)) {
        fun_80483b4();
    }
    goto ebp3->f4;
}

void fun_804854e() {
    int32_t ebx1;
    int32_t* edx2;
    int32_t eax3;
    int32_t ebp4;
    int32_t eax5;
    int32_t* esi6;
    int32_t edi7;
    int32_t ebp8;
    int32_t v9;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x119a;
    edx2 = reinterpret_cast<int32_t*>(ebx1 - 0xe8);
    eax3 = ebx1 - 0xe8 - reinterpret_cast<int32_t>(edx2) >> 2;
    *reinterpret_cast<int32_t*>(ebp4 - 16) = eax3;
    eax5 = eax3 - 1;
    if (eax5 != -1) {
        esi6 = edx2 + eax5;
        edi7 = 0;
        do {
            *esi6();
            ++edi7;
            --esi6;
        } while (*reinterpret_cast<int32_t*>(ebp8 - 16) != edi7);
    }
    _fini();
    goto v9;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80485de(int32_t a1, int32_t a2) {
    struct s1* ebp3;

    __do_global_dtors_aux();
    goto ebp3->f4;
}

int32_t printf = 0x80483aa;

void fun_80483a4(int32_t a1, int32_t a2) {
    goto printf;
}

signed char _edata = 0;

/* p.4462 */
int32_t* p_4462 = reinterpret_cast<int32_t*>(0x804960c);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        while (eax2 = p_4462, edx3 = *eax2, !!edx3) {
            p_4462 = eax2 + 1;
            edx3();
        }
        _edata = 1;
    }
    return;
}

struct s2 {
    signed char[24] pad24;
    int32_t f24;
};

int32_t xf86GetPciVideoInfo = 0x804838a;

struct s2** fun_8048384() {
    goto xf86GetPciVideoInfo;
}

int32_t getDevice(struct s2* a1) {
    return a1->f24;
}

void fun_80484de(int32_t ecx) {
    int32_t ebx2;
    int32_t* edx3;
    int32_t eax4;
    int32_t ebp5;
    int32_t* esi6;
    uint32_t edi7;
    int32_t ebp8;
    int32_t v9;
    int32_t v10;

    ebx2 = reinterpret_cast<int32_t>(__return_address()) + 0x120a;
    _init(ecx);
    edx3 = reinterpret_cast<int32_t*>(ebx2 - 0xe8);
    eax4 = ebx2 - 0xe8 - reinterpret_cast<int32_t>(edx3) >> 2;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = eax4;
    if (eax4) {
        esi6 = edx3;
        edi7 = 0;
        do {
            *esi6();
            ++edi7;
            ++esi6;
        } while (edi7 < *reinterpret_cast<uint32_t*>(ebp8 - 16));
        goto v9;
    } else {
        goto v10;
    }
}

int32_t main();

void __libc_csu_init(int32_t ecx);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048394(main, __return_address(), esp1, __libc_csu_init, 0x8048540, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048380() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048509() {
}

void fun_8048533() {
    fun_804854e();
}

int32_t g80496f0 = 0;

void fun_804838a() {
    goto g80496f0;
}

void fun_804839a() {
    goto 0x8048374;
}

void fun_80483ba() {
    goto 0x8048374;
}

int32_t main() {
    struct s2** eax1;
    struct s2* v2;
    int32_t eax3;

    eax1 = fun_8048384();
    v2 = *eax1;
    eax3 = getDevice(v2);
    fun_80483a4("%i\n", eax3);
    return 0;
}

void fun_80483aa() {
    goto 0x8048374;
}

void __libc_csu_init(int32_t ecx) {
    fun_80484de(ecx);
}
