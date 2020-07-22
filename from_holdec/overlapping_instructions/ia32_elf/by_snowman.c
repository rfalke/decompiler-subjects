
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void not_endless_loop() {
    while (1) {
    }
}

int32_t* add_one(int32_t a1) {
    __asm__("rol bl, 0x0");
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t ecx, int32_t a2, int32_t* a3, int32_t* a4, int32_t a5, int32_t a6, int32_t* a7) {
    goto printf;
}

int32_t* return_constant(int32_t ecx, int32_t a2, int32_t* a3) {
    while (1) {
    }
}

void fun_8049107(int32_t a1, void** a2, int32_t a3) {
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

void exec_python() {
    while (1) {
    }
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

int32_t main(int32_t a1);

void fun_80490d2() {
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
    fun_8049107(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2f1c;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2d40, ebx7 - 0x2ce0, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049112() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80491b2() {
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

void fun_80491e2() {
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

void fun_80492c2() {
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
    ebx3 = ebx4 + 0x2d33;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf8 - (ebx3 - 0xfc) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xfc)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x80492df);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049322() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804932a() {
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

void fun_8049157() {
}

void fun_80491a4() {
}

void fun_80491d1() {
}

void fun_804931d() {
}

void fun_80492ad() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

int32_t fun_80492a8() {
    int32_t eax1;
    int32_t ebx2;

    return eax1 + ebx2;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049161() {
}

void fun_80491a9() {
}

void fun_80491d9() {
}

int32_t main(int32_t a1) {
    int32_t* eax2;
    int32_t v3;
    int32_t* v4;
    int32_t v5;
    int32_t* eax6;
    int32_t edx7;

    if (a1 == 2) {
        exec_python();
    }
    not_endless_loop();
    eax2 = add_one(42);
    fun_8049040(v3, "42+1=%d\n", eax2, v4, 0x804907b, v5, reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    eax6 = return_constant(v3, "42+1=%d\n", eax2);
    edx7 = 0;
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<uint1_t>(eax6 == 0xbaacc4bc);
    fun_8049040(v3, "constant: 0x%08x = %d equal=%d\n", eax6, eax6, edx7, "42+1=%d\n", eax2);
    return 0;
}
