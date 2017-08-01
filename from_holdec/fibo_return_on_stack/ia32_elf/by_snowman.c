
void fun_80482e4(int32_t a1, int32_t a2);

void fun_8048318();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_80482e4(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x14ac - 4)) {
        fun_8048318();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482e4(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x14ac - 4)) {
        fun_8048318();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x804831e;

void fun_8048318() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void __isoc99_scanf(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __isoc99_scanf(0x80496c0);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x80496b0);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x804832e;

void fun_8048328(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t fibo_normal(int32_t a1, void* a2) {
    int32_t eax3;
    void* v4;
    int32_t eax5;
    void* v6;
    int32_t eax7;

    if (a1 <= 1) {
        eax3 = a1;
    } else {
        eax5 = fibo_normal(a1 - 1, v4);
        eax7 = fibo_normal(a1 - 2, v6);
        eax3 = eax5 + eax7;
    }
    return eax3;
}

int32_t fibo_return_on_stack(int32_t a1, void* a2) {
    int32_t v3;
    void* v4;
    int32_t v5;
    void* v6;
    int32_t eax7;

    if (a1 > 1) {
        v3 = a1 - 1;
        fibo_return_on_stack(v3, v4);
        v5 = a1 - 2;
        fibo_return_on_stack(v5, v6);
        eax7 = v3 + v5;
    }
    return eax7;
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

void fun_80485c8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t printf = 0x804833e;

void fun_8048338(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto printf;
}

int32_t __isoc99_scanf = 0x804834e;

void fun_8048348(int32_t a1, void* a2) {
    goto __isoc99_scanf;
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
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x80496b8)();
                eax2 = dtor_idx_5980;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

int32_t main();

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048328(main, __return_address(), esp1, 0x8048530, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80483e5() {
}

int32_t fibo_wrapper_return_on_stack(int32_t a1) {
    void* v2;

    fibo_return_on_stack(a1, v2);
    return a1;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_80485c8(v1, ebx2, ebp3, __return_address());
}

int32_t g8049798 = 0;

void fun_804831e() {
    goto g8049798;
}

void fun_8048314() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_804832e() {
    goto 0x8048308;
}

int32_t main() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    void* v4;
    int32_t v5;
    int32_t eax6;
    int32_t v7;
    int32_t eax8;
    int32_t v9;

    fun_8048338("Input number: ", v1, v2, v3);
    v4 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 32 - 4 + 4 + 20);
    fun_8048348("%d", v4);
    eax6 = fibo_normal(v5, v4);
    eax8 = fibo_return_on_stack(v7, v4);
    fun_8048338("fibonacci(%d) = %d %d\n", v9, eax6, eax8);
    return 0;
}

void __libc_csu_fini() {
    return;
}

void fun_804833e() {
    goto 0x8048308;
}

void fun_804834e() {
    goto 0x8048308;
}

void fun_8048525(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x1255;
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
