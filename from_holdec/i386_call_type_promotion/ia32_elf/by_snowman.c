
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049137(int32_t a1, void** a2, int32_t a3) {
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

void fun_8049040(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10, uint32_t a11) {
    goto printf;
}

int32_t print_char(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;

    fun_8049040("got a char '%c'\n", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&a1)), v4, v5, v6, v7, v8, __return_address(), a1, a2, a3);
    return 0;
}

int32_t print_short(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;

    fun_8049040("got a short %d\n", static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&a1)), v4, v5, v6, v7, v8, __return_address(), a1, a2, a3);
    return 0;
}

int32_t print_float_as_hex(uint32_t a1) {
    uint32_t eax2;
    uint32_t edx3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;

    eax2 = a1;
    edx3 = eax2 >> 16;
    fun_8049040("got a float with       0x%02x 0x%02x 0x%02x 0x%02x\n", eax2 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx3)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax2)), v4, v5, v6, v7, v8, v9);
    return 0;
}

int32_t print_double_as_hex(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t edx4;
    uint32_t eax5;
    uint32_t edx6;
    uint32_t v7;
    uint32_t v8;

    eax3 = a1;
    edx4 = eax3 >> 16;
    eax5 = a2;
    edx6 = eax5 >> 16;
    fun_8049040("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax5 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx6)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax5)), eax3 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), v7, v8);
    return 0;
}

int32_t print_long_double_as_hex(uint32_t a1) {
    unsigned char v2;
    unsigned char v3;
    unsigned char v4;
    unsigned char v5;
    unsigned char v6;
    unsigned char v7;
    unsigned char v8;
    unsigned char v9;
    unsigned char v10;
    unsigned char v11;

    __asm__("fld tword [esp+0xb4]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x94]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x88]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x7c]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x70]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x64]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x58]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x4c]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x40]");
    __asm__("fld st0");
    __asm__("fstp tword [esp+0x34]");
    __asm__("fstp tword [esp+0x28]");
    fun_8049040("got a long double with 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", static_cast<uint32_t>(v2), static_cast<uint32_t>(v3), static_cast<uint32_t>(v4), static_cast<uint32_t>(v5), static_cast<uint32_t>(v6), static_cast<uint32_t>(v7), static_cast<uint32_t>(v8), static_cast<uint32_t>(v9), static_cast<uint32_t>(v10), static_cast<uint32_t>(v11));
    return 0;
}

int32_t print_varargs(int32_t a1) {
    uint32_t eax2;
    uint32_t v3;
    uint32_t edx4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;

    __asm__("fld qword [esp+0x30]");
    __asm__("fstp dword [esp+0x18]");
    eax2 = v3;
    edx4 = eax2 >> 16;
    fun_8049040("promo because of vargs: converted a float with 0x%02x 0x%02x 0x%02x 0x%02x\n", eax2 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax2)), v5, v6, v7, v8, v9, v10);
    return 0;
}

int32_t print_without_prototype(int32_t a1) {
    uint32_t eax2;
    uint32_t v3;
    uint32_t edx4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fstp dword [esp+0x18]");
    eax2 = v3;
    edx4 = eax2 >> 16;
    fun_8049040("promo because of no prototype: converted to a float with 0x%02x 0x%02x 0x%02x 0x%02x\n", eax2 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax2)), v5, v6, v7, v8, v9, v10);
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

void fun_8049102() {
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
    fun_8049137(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2eec;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2bf0, ebx7 - 0x2b90, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049142() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80491e2() {
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

void fun_8049212() {
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

void fun_8049412() {
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
    ebx3 = ebx4 + 0x2be3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804942f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049472() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804947a() {
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

void fun_8049187() {
}

void fun_80491d4() {
}

void fun_8049201() {
}

void fun_804946d() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049191() {
}

void fun_80491d9() {
}

void fun_8049209() {
}

void fun_8049239() {
}

int32_t main(int32_t a1) {
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;

    __asm__("fild dword [ebp-0x10]");
    __asm__("fadd dword [0x804a1bc]");
    __asm__("fstp dword [ebp-0x14]");
    __asm__("fild dword [ebp-0x10]");
    __asm__("fstp qword [ebp-0x10]");
    print_char(97, v2, v3);
    print_short(42, v4, v5);
    print_float_as_hex(v6);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fadd qword [0x804a1c0]");
    __asm__("fstp qword [esp]");
    print_double_as_hex(v6, v7);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fadd qword [0x804a1c8]");
    __asm__("fstp tword [esp]");
    print_long_double_as_hex(v6);
    __asm__("fld dword [ebp-0x14]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fstp qword [ebp-0x10]");
    print_varargs("dummy");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fstp qword [esp]");
    print_without_prototype("dummy");
    return 0;
}

void fun_8049259() {
}

void fun_804928c() {
}

void fun_80492d5() {
}

void fun_8049382() {
}

void fun_80493c4() {
}
