
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
        eax1 = __libc_start_main(0x804a064, v2);
    }
    return eax1;
}

void fun_80482e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6);

void use(int32_t a1) {
    int32_t v2;
    int32_t v3;
    void* v4;

    fun_80482e0("%f", __return_address(), a1, v2, v3, v4);
    return;
}

void use_int(uint32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    void* v5;

    fun_80482e0("%d", __return_address(), v2, v3, v4, v5);
    return;
}

int32_t printf = 0x80482e6;

void fun_80482e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6) {
    goto printf;
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x8048800, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
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
        eax3 = __libc_start_main(0x804a064, 0);
    }
    return eax3;
}

void fun_80483ed() {
}

int32_t constants() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;

    __asm__("fld qword [esp+0x30]");
    __asm__("fld st0");
    __asm__("fst qword [esp+0x18]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp]");
    use(v1);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul dword [0x8048844]");
    __asm__("fstp qword [esp]");
    use(v2);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul qword [0x8048850]");
    __asm__("fstp qword [esp]");
    use(v3);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul dword [0x8048848]");
    __asm__("fstp qword [esp]");
    use(v4);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul qword [0x8048858]");
    __asm__("fstp qword [esp]");
    use(v5);
    return 0x7d;
}

void fun_80487fd() {
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

signed char __bss_start = 0;

int32_t fun_80483b5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __bss_start == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __bss_start = 1;
    }
    return eax2;
}

int32_t read_ints() {
    int32_t v1;

    __asm__("fild word [esp+0x16]");
    __asm__("fadd dword [0x8048840]");
    __asm__("fild word [0x804a060]");
    __asm__("faddp st1, st0");
    __asm__("fild dword [0x804a05c]");
    __asm__("faddp st1, st0");
    __asm__("fild dword [0x804a058]");
    __asm__("faddp st1, st0");
    __asm__("fild qword [0x804a050]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp]");
    use(v1);
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

int32_t write_ints() {
    uint32_t eax1;
    uint16_t v2;
    int32_t v3;

    __asm__("fld qword [esp+0x18]");
    __asm__("fnstcw word [esp+0xe]");
    __asm__("fldcw word [esp+0xc]");
    __asm__("fist word [esp+0xa]");
    __asm__("fldcw word [esp+0xe]");
    eax1 = v2;
    global_char = *reinterpret_cast<signed char*>(&eax1);
    global_short = *reinterpret_cast<int16_t*>(&eax1);
    __asm__("fldcw word [esp+0xc]");
    __asm__("fist dword [esp+0x4]");
    __asm__("fldcw word [esp+0xe]");
    global_int = v3;
    global_long = v3;
    __asm__("fldcw word [esp+0xc]");
    __asm__("fistp qword [0x804a050]");
    __asm__("fldcw word [esp+0xe]");
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
    ebx3 = ebx4 + 0x1857;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80487c1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

int32_t read_floats() {
    int32_t v1;

    __asm__("fldz ");
    __asm__("fadd dword [0x804a048]");
    __asm__("fadd qword [0x804a040]");
    __asm__("fld tword [0x804a030]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp+0x18]");
    __asm__("fld qword [esp+0x18]");
    __asm__("fstp qword [esp]");
    use(v1);
    return 0x7a;
}

void write_floats() {
    __asm__("fld qword [esp+0x10]");
    __asm__("fst dword [0x804a048]");
    __asm__("fst qword [0x804a040]");
    __asm__("fstp tword [0x804a030]");
    return;
}

void converting_between_floats_f1() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp dword [0x804a048]");
    return;
}

void converting_between_floats_f2() {
    __asm__("fld tword [0x804a030]");
    __asm__("fstp dword [0x804a048]");
    return;
}

void converting_between_floats_d1() {
    __asm__("fld dword [0x804a048]");
    __asm__("fstp qword [0x804a040]");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [0x804a030]");
    __asm__("fstp qword [0x804a040]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [0x804a048]");
    __asm__("fstp tword [0x804a030]");
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp tword [0x804a030]");
    return;
}

int32_t basic_operations() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;

    __asm__("fld qword [esp+0x30]");
    __asm__("fld qword [esp+0x38]");
    __asm__("fxch st0, st1");
    __asm__("fst qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fst qword [esp+0x18]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp]");
    use(v1);
    __asm__("fld qword [esp+0x10]");
    __asm__("fsub qword [esp+0x18]");
    __asm__("fstp qword [esp]");
    use(v2);
    __asm__("fld qword [esp+0x18]");
    __asm__("fsub qword [esp+0x10]");
    __asm__("fstp qword [esp]");
    use(v3);
    __asm__("fld qword [esp+0x10]");
    __asm__("fmul qword [esp+0x18]");
    __asm__("fstp qword [esp]");
    use(v4);
    __asm__("fld qword [esp+0x10]");
    __asm__("fdiv qword [esp+0x18]");
    __asm__("fstp qword [esp]");
    use(v5);
    __asm__("fld qword [esp+0x18]");
    __asm__("fdiv qword [esp+0x10]");
    __asm__("fstp qword [esp]");
    use(v6);
    __asm__("fld qword [esp+0x10]");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    use(v7);
    return 0x7b;
}

int32_t compare_floats() {
    int1_t cf1;
    int1_t below_or_equal2;
    int1_t zf3;
    uint32_t eax4;
    uint32_t eax5;

    cf1 = reinterpret_cast<uint32_t>(__zero_stack_offset()) < 40;
    below_or_equal2 = reinterpret_cast<uint32_t>(__zero_stack_offset()) <= 40;
    zf3 = reinterpret_cast<uint32_t>(__zero_stack_offset()) - 40 == 0;
    __asm__("fld qword [esp+0x2c]");
    __asm__("fld qword [esp+0x34]");
    __asm__("fucomi st0, st1");
    __asm__("fxch st0, st1");
    eax4 = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    if (!zf3) {
        eax4 = 0;
    }
    use_int(eax4);
    __asm__("fld qword [esp+0x10]");
    __asm__("fld qword [esp+0x18]");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    eax5 = __intrinsic();
    if (!zf3) {
        eax5 = 1;
    }
    use_int(eax5);
    __asm__("fld qword [esp+0x10]");
    __asm__("fld qword [esp+0x18]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!below_or_equal2))));
    __asm__("fld qword [esp+0x10]");
    __asm__("fld qword [esp+0x18]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!cf1))));
    __asm__("fld qword [esp+0x18]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!below_or_equal2))));
    __asm__("fld qword [esp+0x18]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    use_int(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!cf1))));
    return 0x7c;
}
