
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

int32_t __libc_start_main = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
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

uint32_t test_1(uint32_t a1) {
    return (a1 - __intrinsic() >> 1) + __intrinsic() >> 2;
}

int32_t printf = 0x80482e6;

void fun_80482e0(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8) {
    goto printf;
}

uint32_t test_2(uint32_t a1, uint32_t a2) {
    return __intrinsic() + (a1 - __intrinsic() >> 1) >> 2;
}

uint32_t test_3(uint32_t a1, uint32_t a2) {
    return __intrinsic();
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x8048600, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
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

void fun_80483ed() {
}

void fun_80485fd() {
    return;
}

int32_t g804a008 = 0;

void fun_80482f6() {
    goto g804a008;
}

void fun_804837c() {
}

signed char __TMC_END__ = 0;

int32_t fun_80483b5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80482e6() {
    goto 0x80482d0;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1a57;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80485c1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

int32_t main() {
    uint32_t v1;
    uint32_t v2;
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;

    v1 = 0;
    v2 = 0;
    while (1) {
        eax3 = test_1(v2);
        eax4 = test_2(v2, v2);
        eax5 = test_3(v2, v2);
        if (eax3 != eax4 || eax3 != eax5) {
            fun_80482e0("%u %u %u (diff=%d) %u (diff=%d)\n", v2, eax3, eax4, eax4 - eax3, eax5, eax5 - eax3, v2);
        }
        if (!v1) 
            goto addr_8048579_5;
        if (v2 < v1) 
            break;
        addr_8048579_5:
        v1 = v2;
        v2 = v2 + 0xf4240;
    }
    return 0;
}
