
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
        eax1 = __libc_start_main(0x804a06c, v2);
    }
    return eax1;
}

void fun_80482e0(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6);

void use(uint32_t a1, int32_t a2) {
    int32_t v3;
    int32_t v4;
    void* v5;

    fun_80482e0("%f", a1, a2, v3, v4, v5);
    return;
}

void use_int(uint32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    void* v5;

    fun_80482e0("%d", a1, v2, v3, v4, v5);
    return;
}

int32_t printf = 0x80482e6;

void fun_80482e0(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6) {
    goto printf;
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x80489a0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
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
        eax3 = __libc_start_main(0x804a06c, 0);
    }
    return eax3;
}

void fun_80483ed() {
}

int32_t constants(int32_t a1, int32_t a2) {
    uint32_t v3;
    int32_t v4;
    uint32_t v5;
    int32_t v6;
    uint32_t v7;
    int32_t v8;
    uint32_t v9;
    int32_t v10;
    uint32_t v11;
    int32_t v12;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fadd st0, st0");
    __asm__("fstp qword [esp]");
    use(v3, v4);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x80489f0]");
    __asm__("fmulp st1, st0");
    __asm__("fstp qword [esp]");
    use(v5, v6);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x80489f8]");
    __asm__("fmulp st1, st0");
    __asm__("fstp qword [esp]");
    use(v7, v8);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x8048a00]");
    __asm__("fmulp st1, st0");
    __asm__("fstp qword [esp]");
    use(v9, v10);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x8048a08]");
    __asm__("fmulp st1, st0");
    __asm__("fstp qword [esp]");
    use(v11, v12);
    return 0x7d;
}

void fun_804899d() {
    return;
}

int32_t g804a008 = 0;

void fun_80482e6() {
    goto g804a008;
}

void fun_80482f6() {
    goto 0x80482d0;
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

int32_t read_ints() {
    uint32_t v1;
    int32_t v2;

    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fild word [ebp-0x28]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fild word [ebp-0x28]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fild dword [ebp-0x28]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fild dword [ebp-0x28]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fild qword [ebp-0x28]");
    __asm__("fstp qword [ebp-0x20]");
    __asm__("fld qword [ebp-0x20]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    use(v1, v2);
    return 0x78;
}

int32_t main() {
    int32_t v1;

    fun_80482e0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 4, 8);
    fun_80482e0("%zu %zu %zu\n", 4, 8, 12, v1, reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    return 0;
}

signed char global_char = 1;

int16_t global_short = 2;

int32_t global_int = 3;

int32_t global_long = 4;

int32_t global_long_long = 5;

int32_t g804a044 = 0;

int32_t write_ints(int32_t a1, int32_t a2) {
    uint32_t eax3;
    uint16_t v4;
    uint32_t eax5;
    uint16_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fnstcw word [ebp-0xa]");
    __asm__("fldcw word [ebp-0xc]");
    __asm__("fistp word [ebp-0xe]");
    __asm__("fldcw word [ebp-0xa]");
    eax3 = v4;
    global_char = *reinterpret_cast<signed char*>(&eax3);
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldcw word [ebp-0xc]");
    __asm__("fistp word [ebp-0xe]");
    __asm__("fldcw word [ebp-0xa]");
    eax5 = v6;
    global_short = *reinterpret_cast<int16_t*>(&eax5);
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldcw word [ebp-0xc]");
    __asm__("fistp dword [ebp-0x14]");
    __asm__("fldcw word [ebp-0xa]");
    global_int = v7;
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldcw word [ebp-0xc]");
    __asm__("fistp dword [ebp-0x14]");
    __asm__("fldcw word [ebp-0xa]");
    global_long = v8;
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldcw word [ebp-0xc]");
    __asm__("fistp qword [ebp-0x20]");
    __asm__("fldcw word [ebp-0xa]");
    global_long_long = v9;
    g804a044 = v10;
    return 0x79;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x16b7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048961);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

int32_t read_floats() {
    uint32_t v1;
    int32_t v2;

    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fld dword [0x804a048]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fld qword [0x804a050]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld tword [0x804a060]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    use(v1, v2);
    return 0x7a;
}

int32_t write_floats(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fstp dword [ebp-0xc]");
    __asm__("fld dword [ebp-0xc]");
    __asm__("fstp dword [0x804a048]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fstp qword [0x804a050]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fstp tword [0x804a060]");
    return a2;
}

void converting_between_floats_f1() {
    __asm__("fld qword [0x804a050]");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fstp dword [0x804a048]");
    return;
}

void converting_between_floats_f2() {
    __asm__("fld tword [0x804a060]");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fstp dword [0x804a048]");
    return;
}

void converting_between_floats_d1() {
    __asm__("fld dword [0x804a048]");
    __asm__("fstp qword [0x804a050]");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [0x804a060]");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fstp qword [0x804a050]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [0x804a048]");
    __asm__("fstp tword [0x804a060]");
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [0x804a050]");
    __asm__("fstp tword [0x804a060]");
    return;
}

int32_t basic_operations(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    uint32_t v5;
    int32_t v6;
    uint32_t v7;
    int32_t v8;
    uint32_t v9;
    int32_t v10;
    uint32_t v11;
    int32_t v12;
    uint32_t v13;
    int32_t v14;
    uint32_t v15;
    int32_t v16;
    uint32_t v17;
    int32_t v18;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fadd qword [ebp-0x18]");
    __asm__("fstp qword [esp]");
    use(v5, v6);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fsub qword [ebp-0x18]");
    __asm__("fstp qword [esp]");
    use(v7, v8);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fsub qword [ebp-0x10]");
    __asm__("fstp qword [esp]");
    use(v9, v10);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fmul qword [ebp-0x18]");
    __asm__("fstp qword [esp]");
    use(v11, v12);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fdiv qword [ebp-0x18]");
    __asm__("fstp qword [esp]");
    use(v13, v14);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fdiv qword [ebp-0x10]");
    __asm__("fstp qword [esp]");
    use(v15, v16);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    use(v17, v18);
    return 0x7b;
}

int32_t compare_floats(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    void* esp5;
    int32_t eax6;
    void* esp7;
    int32_t eax8;
    void* esp9;
    void* tmp32_10;
    void* esp11;
    void* tmp32_12;
    void* esp13;
    void* tmp32_14;
    void* esp15;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    if (esp5) {
        eax6 = 0;
    }
    use_int(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax6)));
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 12 - 4 - 4 + 4 + 16);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    *reinterpret_cast<unsigned char*>(&eax8) = __intrinsic();
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    if (esp7) {
        eax8 = 1;
    }
    use_int(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax8)));
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 12 - 4 - 4 + 4);
    tmp32_10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp9) + 16);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_10) < reinterpret_cast<uint32_t>(esp9)) | reinterpret_cast<uint1_t>(tmp32_10 == 0))))));
    esp11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(tmp32_10) - 12 - 4 - 4 + 4);
    tmp32_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp11) + 16);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_12) >= reinterpret_cast<uint32_t>(esp11)))));
    esp13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(tmp32_12) - 12 - 4 - 4 + 4);
    tmp32_14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp13) + 16);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_14) < reinterpret_cast<uint32_t>(esp13)) | reinterpret_cast<uint1_t>(tmp32_14 == 0))))));
    esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(tmp32_14) - 12 - 4 - 4 + 4);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esp15) + 16 >= reinterpret_cast<uint32_t>(esp15)))));
    return 0x7c;
}
