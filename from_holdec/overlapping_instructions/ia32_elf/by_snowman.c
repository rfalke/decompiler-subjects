
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048360();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1ce3 - 4)) {
        fun_8048360();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048360() {
    goto __gmon_start__;
}

void overlapping1() {
    while (1) {
    }
}

void overlapping2() {
    while (1) {
    }
}

void overlapping3(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __asm__("rol bl, 0x0");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1aa7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xfc - (ebx3 - 0x100) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0x100)(ebp5, a1, a2, 0x8048571);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void overlapping4(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __asm__("rol bl, 0x0");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1aa7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xfc - (ebx3 - 0x100) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0x100)(ebp5, a1, a2, 0x8048571);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

int32_t _ITM_registerTMCloneTable(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = _ITM_registerTMCloneTable(0x804a014, v2);
    }
    return eax1;
}

int32_t __libc_start_main = 0x8048356;

void fun_8048350(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main(int32_t a1) {
    overlapping1();
    overlapping2();
    overlapping3(__return_address(), a1);
    overlapping4(__return_address(), a1);
    return 0;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804834c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048350(main, __return_address(), esp1, 0x8048550, 0x80485b0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        _ITM_registerTMCloneTable(0x8049f08, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = _ITM_registerTMCloneTable(0x804a014, 0);
    }
    return eax3;
}

void fun_804845d() {
}

void fun_80485ad() {
    return;
}

int32_t g804a008 = 0;

void fun_8048356() {
    goto g804a008;
}

int32_t fun_804853d() {
    int32_t eax1;
    int32_t ebx2;

    return eax1 + ebx2;
}

void fun_8048542() {
}

void fun_80483ec() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048425() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}
