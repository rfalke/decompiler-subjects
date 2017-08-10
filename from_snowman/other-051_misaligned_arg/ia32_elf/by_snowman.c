
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_80482b0();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x141f - 4)) {
        fun_80482b0();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0x80482b6;

void fun_80482b0() {
    goto __gmon_start__;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 3;
    if (!0 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x80496b8, v2);
        return eax3;
    }
}

uint40_t g;

int32_t* f(int32_t a1) {
    uint40_t v1;

    *reinterpret_cast<int32_t*>(&v1) = a1;
    *reinterpret_cast<int32_t*>(&g) = *reinterpret_cast<int32_t*>(&v1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&g) + 1) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 1);
    return 0x80496bd;
}

int32_t __libc_start_main = 0x80482c6;

void fun_80482c0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482ac() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t fun_804833a() {
    int32_t eax1;

    if (!0 || 1) {
        return 0;
    } else {
        eax1 = __libc_start_main(0x80496b8, 0);
        return eax1;
    }
}

signed char __TMC_END__ = 0;

int32_t fun_8048377() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

int32_t __JCR_END__ = 0;

void frame_dummy() {
    int32_t eax1;
    int32_t v2;

    eax1 = __JCR_END__;
    if (!eax1 || 1) {
        goto 0x8048340;
    } else {
        __libc_start_main(0x80495ac, v2);
        goto 0x8048340;
    }
}

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3) {
    int32_t edi4;
    int32_t ebx5;
    int32_t ebx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t esi9;

    edi4 = 0;
    __x86_get_pc_thunk_bx();
    ebx5 = ebx6 + 0x1281;
    ebp7 = a1;
    _init();
    esi8 = ebx5 - 0xf4 - (ebx5 - 0xf8) >> 2;
    if (esi8) {
        esi9 = esi8;
        do {
            *reinterpret_cast<int32_t*>(ebx5 + edi4 * 4 - 0xf8)(ebp7, a2, a3);
            ++edi4;
        } while (edi4 != esi9);
    }
    return;
}

void fun_8048471() {
    return;
}

int32_t g80496a4 = 0;

void fun_80482b6() {
    goto g80496a4;
}

int32_t main() {
    int32_t v1;

    v1 = 0;
    while (v1 <= 9) {
        f(v1);
        ++v1;
    }
    return 0;
}

void fun_80482c6() {
    goto 0x80482a0;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482c0(main, __return_address(), esp1, __libc_csu_init, 0x8048480, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
