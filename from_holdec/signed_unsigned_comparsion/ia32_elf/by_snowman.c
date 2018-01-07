
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048300();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1d4b - 4)) {
        fun_8048300();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048300() {
    goto __gmon_start__;
}

void fun_80482e0(int32_t a1, int32_t a2, uint32_t a3, uint32_t a4, void* a5);

int32_t printf = 0x80482e6;

uint32_t f(void* ecx, int32_t a2, int32_t a3, uint32_t a4, uint32_t a5) {
    uint32_t edx6;
    uint32_t eax7;

    edx6 = reinterpret_cast<uint32_t>(a2 - 2);
    if (edx6 <= 5) {
        fun_80482e0("%d signed in range\n", a2, edx6, edx6, ecx);
    }
    eax7 = reinterpret_cast<uint32_t>(a3 - 2);
    if (eax7 > 5) {
        return eax7;
    } else {
        goto printf;
    }
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = __libc_start_main(0x804a018, v2);
    }
    return eax1;
}

void fun_80482e0(int32_t a1, int32_t a2, uint32_t a3, uint32_t a4, void* a5) {
    goto printf;
}

int32_t __libc_start_main = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main() {
    void* ecx1;
    int32_t ebx2;
    int32_t v3;
    int32_t v4;
    uint32_t eax5;

    ecx1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    ebx2 = 0;
    do {
        v3 = ebx2;
        v4 = ebx2;
        ++ebx2;
        eax5 = f(ecx1, v4, v3, eax5, eax5);
    } while (ebx2 != 10);
    return 0;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482dc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x80484e0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        __libc_start_main(0x8049f10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = __libc_start_main(0x804a018, 0);
    }
    return eax3;
}

void fun_804841d() {
}

void fun_80484dd() {
    return;
}

void fun_80483ac() {
}

signed char __TMC_END__ = 0;

int32_t fun_80483e5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

int32_t g804a008 = 0;

void fun_80482e6() {
    goto g804a008;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1b77;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80484a1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80482f6() {
    goto 0x80482d0;
}
