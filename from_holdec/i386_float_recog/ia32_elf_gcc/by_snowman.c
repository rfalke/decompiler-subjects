
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049177(int32_t a1, void** a2, int32_t a3) {
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

int32_t printf = 0x8049046;

void fun_8049040(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, int32_t a10) {
    goto printf;
}

int32_t unknown_to_unknown(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t edx4;
    uint32_t eax5;
    uint32_t edx6;
    int32_t v7;

    eax3 = a1;
    edx4 = eax3 >> 16;
    eax5 = a2;
    edx6 = eax5 >> 16;
    fun_8049040("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax5 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx6)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax5)), eax3 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), v7);
    return 0;
}

int32_t double_to_unknown(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t edx4;
    uint32_t eax5;
    uint32_t edx6;
    int32_t v7;

    eax3 = a1;
    edx4 = eax3 >> 16;
    eax5 = a2;
    edx6 = eax5 >> 16;
    fun_8049040("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax5 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx6)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax5)), eax3 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), v7);
    return 0;
}

int32_t unknown_to_double(uint32_t a1, int32_t a2) {
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;

    __asm__("fld qword [esp+0x1c]");
    __asm__("fadd st0, st0");
    __asm__("fstp qword [esp]");
    fun_8049040("got 2*x=%f\n", v3, v4, v5, v6, v7, v8, __return_address(), a1, a2);
    return 0;
}

int32_t double_to_double(uint32_t a1, int32_t a2) {
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;

    __asm__("fld qword [esp+0x1c]");
    __asm__("fadd st0, st0");
    __asm__("fstp qword [esp]");
    fun_8049040("got 2*x=%f\n", v3, v4, v5, v6, v7, v8, __return_address(), a1, a2);
    return 0;
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

void fun_8049142() {
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
    fun_8049177(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2eac;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2cc0, ebx7 - 0x2c60, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049182() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049222() {
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

void fun_8049252() {
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

void fun_8049342() {
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
    ebx3 = ebx4 + 0x2cb3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804935f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_80493a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_80493aa() {
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

void fun_80491c7() {
}

void fun_8049214() {
}

void fun_8049241() {
}

void fun_804939d() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_80491d1() {
}

void fun_8049219() {
}

void fun_8049249() {
}

void fun_80492a5() {
}

int32_t main(int32_t a1) {
    unknown_to_unknown(0xf5c28f5c, 0x3ff35c28);
    __asm__("fild dword [ebp-0x10]");
    __asm__("fld st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fadd qword [0x804a0e8]");
    __asm__("fstp qword [esp]");
    double_to_unknown(0xf5c28f5c, 0x3ff35c28);
    unknown_to_double(0x7ae147ae, 0x3ff3ae14);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x804a0f0]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp]");
    double_to_double(0x7ae147ae, 0x3ff3ae14);
    fun_8049040("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, 0x47ae147b, 0x40027ae1, 0x65, 0xae147800, 0x947ae147, 0x4000, 0x66, 0x3ff3ae14);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x804a0f8]");
    __asm__("fadd st0, st1");
    __asm__("fstp tword [esp]");
    __asm__("fadd qword [0x804a100]");
    __asm__("fstp qword [esp]");
    fun_8049040("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 0xc8, 0x47ae147b, 0x40027ae1, 0xc9, 0xae147800, 0x947ae147, 0x4000, 0xca, 0x3ff3ae14);
    return 0;
}

void fun_80492f5() {
}

void fun_804931c() {
}
