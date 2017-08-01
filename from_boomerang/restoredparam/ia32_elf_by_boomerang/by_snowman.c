
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

void fun_8048306(int32_t a1, int32_t a2);

void fun_80482c8();

int32_t call_gmon_start(int32_t ecx) {
    int32_t ebx2;

    fun_8048306(ecx, ebx2);
    if (*reinterpret_cast<int32_t*>(ecx + 0x1236 - 4)) {
        fun_80482c8();
    }
    return ebx2;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x804946c);
    }
    return;
}

int32_t __preinit_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t ebx4;

    v1 = edx2;
    eax3 = __preinit_array_start;
    if (eax3 != -1) {
        ebx4 = 0x804945c;
        do {
            eax3();
            eax3 = *reinterpret_cast<int32_t*>(ebx4 - 4);
            ebx4 = ebx4 - 4;
        } while (eax3 != -1);
    }
    return v1;
}

int32_t __gmon_start__ = 0x80482ce;

void fun_80482c8() {
    goto __gmon_start__;
}

signed char _edata = 0;

/* p.4582 */
int32_t* p_4582 = reinterpret_cast<int32_t*>(0x8049468);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        while (eax2 = p_4582, edx3 = *eax2, !!edx3) {
            p_4582 = eax2 + 1;
            edx3();
        }
        _edata = 1;
    }
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048306(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1236 - 4)) {
        fun_80482c8();
    }
    goto ebp3->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804842e(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t printf = 0x80482be;

void fun_80482b8(int32_t a1, int32_t a2) {
    goto printf;
}

int32_t twice() {
    int32_t ebx1;

    return ebx1 + ebx1;
}

int32_t __libc_start_main = 0x80482ae;

void fun_80482a8(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80483b2(int32_t ecx) {
    int32_t ebx2;
    int32_t* edx3;
    int32_t eax4;
    int32_t ebp5;
    uint32_t edi6;
    int32_t* esi7;
    int32_t ebp8;
    struct s2* ebp9;
    struct s3* ebp10;

    ebx2 = reinterpret_cast<int32_t>(__return_address()) + 0x118a;
    _init(ecx);
    edx3 = reinterpret_cast<int32_t*>(ebx2 - 0xe0);
    eax4 = ebx2 - 0xe0 - reinterpret_cast<int32_t>(edx3) >> 2;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = eax4;
    if (eax4) {
        edi6 = 0;
        esi7 = edx3;
        do {
            *esi7();
            ++edi6;
            ++esi7;
        } while (edi6 < *reinterpret_cast<uint32_t*>(ebp8 - 16));
        goto ebp9->f4;
    } else {
        goto ebp10->f4;
    }
}

void fun_80482a4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048331() {
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    fun_804842e(eax1, ebx2, ebp3, __return_address());
}

int32_t g8049544 = 0;

void fun_80482ae() {
    goto g8049544;
}

void fun_80482ce() {
    goto 0x8048298;
}

void fun_8048352() {
}

int32_t main(int32_t a1) {
    int32_t eax2;

    eax2 = twice();
    fun_80482b8("Result is %d\n", eax2);
    return 0;
}

void __libc_csu_init(int32_t ecx);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482a8(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80482be() {
    goto 0x8048298;
}

void __libc_csu_init(int32_t ecx) {
    fun_80483b2(ecx);
}
