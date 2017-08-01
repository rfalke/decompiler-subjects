
void fun_80482a0(int32_t a1, int32_t a2);

void fun_80482d4();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_80482a0(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x13ac - 4)) {
        fun_80482d4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482a0(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x13ac - 4)) {
        fun_80482d4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80482da;

void fun_80482d4() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void printf(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        printf(0x804957c);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x804956c);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x80482ea;

void fun_80482e4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80484a8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t printf = 0x80482fa;

void fun_80482f4(int32_t a1, int32_t a2) {
    goto printf;
}

signed char _edata = 0;

/* dtor_idx.5980 */
uint32_t dtor_idx_5980 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = dtor_idx_5980;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_5980 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8049574)();
                eax2 = dtor_idx_5980;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

void forever() {
    int32_t v1;
    int32_t edx2;

    v1 = 0;
    while (1) {
        edx2 = v1;
        ++v1;
        fun_80482f4("i=%d\n", edx2);
    }
}

int32_t main();

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482e4(main, __return_address(), esp1, 0x8048410, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048395() {
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_80484a8(v1, ebx2, ebp3, __return_address());
}

int32_t g8049654 = 0;

void fun_80482da() {
    goto g8049654;
}

void fun_80482d0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80482ea() {
    goto 0x80482c4;
}

int32_t main() {
    forever();
    return 0;
}

void fun_80482fa() {
    goto 0x80482c4;
}

void __libc_csu_fini() {
    return;
}

void fun_8048405(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x1231;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe0 - (ebx4 - 0xe0) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe0)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}
