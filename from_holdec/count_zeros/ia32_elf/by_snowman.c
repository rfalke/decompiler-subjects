
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049127(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049056;

void fun_8049050(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804c018;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x804c018, v2);
        return eax3;
    }
}

int32_t count_zeros(int32_t a1, int32_t* a2, int32_t a3, int32_t* a4) {
    int32_t* edx5;
    int32_t* ecx6;
    uint32_t eax7;

    if (reinterpret_cast<uint1_t>(a1 < 0) | reinterpret_cast<uint1_t>(a1 == 0)) {
        return 0;
    } else {
        edx5 = a2;
        ecx6 = edx5 + a1;
        eax7 = 0;
        do {
            eax7 = eax7 + 0xffffffff + reinterpret_cast<uint1_t>(!!*edx5);
            ++edx5;
        } while (edx5 != ecx6);
        return -eax7;
    }
}

int32_t printf = 0x8049046;

void fun_8049040(void* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t* a5) {
    goto printf;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x2ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_80490f2() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_8049127(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2efc;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2db0, ebx7 - 0x2d50, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049132() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80491d2() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = __TMC_END__ == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_8049202() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __libc_start_main(0x804c018, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_8049252() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2da3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804926f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_80492b2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_80492ba() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049177() {
}

void fun_80491c4() {
}

void fun_80491f1() {
}

void fun_8049239() {
}

void fun_80492ad() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049181() {
}

void fun_80491c9() {
}

void fun_80491f9() {
}

int32_t main() {
    void* ebp1;
    int32_t* v2;
    int32_t v3;
    int32_t* v4;
    int32_t eax5;
    int32_t eax6;

    ebp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4);
    v2 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp1) - 44);
    eax5 = count_zeros(4, v2, v3, v4);
    fun_8049040(reinterpret_cast<uint32_t>(__zero_stack_offset()) + 4, "count_zeros: %d\n", eax5, 4, v2);
    eax6 = count_zeros(5, reinterpret_cast<uint32_t>(ebp1) - 28, 4, v2);
    fun_8049040(5, "count_zeros: %d\n", eax6, 4, v2);
    return 0;
}
