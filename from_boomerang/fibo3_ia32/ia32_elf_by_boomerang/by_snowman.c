
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

void fun_804833a(int32_t a1, int32_t a2);

void fun_80482fc();

int32_t call_gmon_start(int32_t ecx) {
    int32_t ebx2;

    fun_804833a(ecx, ebx2);
    if (*reinterpret_cast<int32_t*>(ecx + 0x12da - 4)) {
        fun_80482fc();
    }
    return ebx2;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x8049544);
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
        ebx4 = 0x8049534;
        do {
            eax3();
            eax3 = *reinterpret_cast<int32_t*>(ebx4 - 4);
            ebx4 = ebx4 - 4;
        } while (eax3 != -1);
    }
    return v1;
}

int32_t __gmon_start__ = 0x8048302;

void fun_80482fc() {
    goto __gmon_start__;
}

signed char _edata = 0;

/* p.4582 */
int32_t* p_4582 = reinterpret_cast<int32_t*>(0x8049540);

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

int32_t fib(int32_t a1) {
    int32_t v2;
    int32_t eax3;
    int32_t eax4;

    if (a1 <= 1) {
        v2 = a1;
    } else {
        eax3 = fib(a1 - 1);
        eax4 = fib(a1 - 2);
        v2 = eax3 + eax4;
    }
    return v2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804833a(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x12da - 4)) {
        fun_80482fc();
    }
    goto ebp3->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80484ee(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t __libc_start_main = 0x80482e2;

void fun_80482dc(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t printf = 0x80482f2;

void fun_80482ec(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto printf;
}

int32_t scanf = 0x80482d2;

void fun_80482cc(int32_t a1, void* a2) {
    goto scanf;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048472(int32_t ecx) {
    int32_t ebx2;
    int32_t* edx3;
    int32_t eax4;
    int32_t ebp5;
    uint32_t edi6;
    int32_t* esi7;
    int32_t ebp8;
    struct s2* ebp9;
    struct s3* ebp10;

    ebx2 = reinterpret_cast<int32_t>(__return_address()) + 0x11a2;
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

void fun_80482c8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048365() {
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    fun_80484ee(eax1, ebx2, ebp3, __return_address());
}

int32_t g804961c = 0;

void fun_80482d2() {
    goto g804961c;
}

void fun_8048302() {
    goto 0x80482bc;
}

void fun_8048386() {
}

int32_t main() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;

    fun_80482ec("Input number: ", v1, v2, v3);
    fun_80482cc("%d", reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
    eax5 = fib(v4);
    fun_80482ec("fibonacci(%d) = %d\n", v6, eax5, v4);
    return 0;
}

void __libc_csu_init(int32_t ecx);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482dc(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void __libc_csu_init(int32_t ecx) {
    fun_8048472(ecx);
}

void fun_80482e2() {
    goto 0x80482bc;
}

void fun_80482f2() {
    goto 0x80482bc;
}
