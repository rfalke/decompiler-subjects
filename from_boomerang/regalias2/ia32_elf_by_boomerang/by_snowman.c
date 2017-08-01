
void call_gmon_start();

void frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

int32_t fun_80482ed();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;
    int32_t ebx3;

    eax1 = fun_80482ed();
    eax2 = *reinterpret_cast<int32_t*>(ebx3 + 0x1277 - 4);
    if (eax2) {
        eax2(eax1);
    }
    return;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x8049494);
    }
    return;
}

int32_t __preinit_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t* ebx4;

    v1 = edx2;
    eax3 = __preinit_array_start;
    ebx4 = reinterpret_cast<int32_t*>(0x8049484);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

void fun_804845d();

void __do_global_dtors_aux(int32_t a1);

void _fini() {
    int32_t edx1;

    fun_804845d();
    __do_global_dtors_aux(edx1);
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_80482ed() {
    int32_t eax1;
    int32_t eax2;
    struct s0* ebp3;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1277 - 4);
    if (eax1) {
        eax1(eax2);
    }
    goto ebp3->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80483f6(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t ebx5;
    int32_t ecx6;
    int32_t esi7;
    int32_t edx8;
    struct s1* ebp9;

    ebx5 = reinterpret_cast<int32_t>(__return_address()) + 0x116e;
    ecx6 = ebx5 - 0xe0 - (ebx5 - 0xe0) >> 2;
    esi7 = ecx6 - 1;
    if (ecx6) {
        do {
            *reinterpret_cast<int32_t*>(ebx5 + esi7 * 4 - 0xe0)();
            edx8 = esi7;
            --esi7;
        } while (edx8);
    }
    _fini();
    goto ebp9->f4;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804845d() {
    int32_t edx1;
    struct s2* ebp2;

    __do_global_dtors_aux(edx1);
    goto ebp2->f4;
}

int32_t printf = 0x80482b6;

void fun_80482b0(int32_t a1, int32_t a2) {
    goto printf;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049490);

void __do_global_dtors_aux(int32_t a1) {
    int1_t zf2;
    int32_t* eax3;
    int32_t edx4;

    zf2 = _edata == 0;
    if (zf2) {
        eax3 = p_0;
        edx4 = *eax3;
        if (edx4) {
            do {
                p_0 = eax3 + 1;
                edx4();
                eax3 = p_0;
                edx4 = *eax3;
            } while (edx4);
        }
        _edata = 1;
    }
    return;
}

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80483b2() {
    int32_t ebx1;
    uint32_t esi2;
    uint32_t edx3;
    uint32_t edi4;
    struct s3* ebp5;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x11b2;
    _init();
    esi2 = 0;
    edx3 = reinterpret_cast<uint32_t>(ebx1 - 0xe0 - (ebx1 - 0xe0) >> 2);
    if (0 < edx3) {
        edi4 = edx3;
        do {
            *reinterpret_cast<int32_t*>(ebx1 + esi2 * 4 - 0xe0)();
            ++esi2;
        } while (esi2 < edi4);
    }
    goto ebp5->f4;
}

int32_t __libc_start_main = 0x80482a6;

void fun_80482a0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_804829c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048342() {
}

void __libc_csu_fini() {
    int32_t ebx1;
    int32_t esi2;
    int32_t ebp3;

    fun_80483f6(ebx1, esi2, ebp3, __return_address());
}

void fun_804841e() {
}

int32_t g804956c = 0;

void fun_80482a6() {
    goto g804956c;
}

void main() {
    fun_80482b0("%08X\n", 0x87653412);
    return;
}

void __libc_csu_init() {
    fun_80483b2();
}

void fun_80482b6() {
    goto 0x8048290;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482a0(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
