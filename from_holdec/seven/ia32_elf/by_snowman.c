
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

int32_t printf = 0x80482e6;

void fun_80482e0(int32_t a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7) {
    goto printf;
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

void* test_1(void* ecx, void* a2) {
    return (reinterpret_cast<uint32_t>(a2) - __intrinsic() >> 1) + __intrinsic() >> 2;
}

void* test_2(void* ecx, void* a2) {
    return __intrinsic() + (reinterpret_cast<uint32_t>(a2) - __intrinsic() >> 1) >> 2;
}

void* test_3(void* ecx, void* a2) {
    return __intrinsic();
}

int32_t __libc_start_main = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main() {
    void* ecx1;
    void* ebx2;
    void* edi3;
    void* eax4;
    void* eax5;
    void* eax6;

    ecx1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    ebx2 = reinterpret_cast<void*>(0);
    edi3 = reinterpret_cast<void*>(0);
    while (1) {
        eax4 = test_1(ecx1, ebx2);
        eax5 = test_2(ecx1, ebx2);
        eax6 = test_3(ecx1, ebx2);
        ecx1 = ebx2;
        if (eax4 != eax5 || eax4 != eax6) {
            ecx1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) - reinterpret_cast<uint32_t>(eax4));
            fun_80482e0("%u %u %u (diff=%d) %u (diff=%d)\n", ebx2, eax4, eax5, reinterpret_cast<uint32_t>(eax5) - reinterpret_cast<uint32_t>(eax4), eax6, ecx1);
        }
        if (!edi3) 
            goto addr_804833c_5;
        if (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(ebx2)) 
            break;
        addr_804833c_5:
        edi3 = ebx2;
        ebx2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx2) + 0xf4240);
    }
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

void fun_804832a() {
}

void fun_8048386() {
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

void fun_804846d() {
}

void fun_804853d() {
    return;
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x8048540, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t g804a008 = 0;

void fun_80482e6() {
    goto g804a008;
}

void fun_80483fc() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048435() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80484a9() {
}

void fun_80484cd() {
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1b17;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048501);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80482f6() {
    goto 0x80482d0;
}
