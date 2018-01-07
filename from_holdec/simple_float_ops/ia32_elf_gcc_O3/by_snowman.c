
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

void fun_80482e0(void* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, ...) {
    goto printf;
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

int32_t __libc_start_main = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main() {
    void* ecx1;
    int32_t v2;

    ecx1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482e0(ecx1, "%zu %zu %zu %zu %zu\n", 1, 2, 4, 4, ecx1, "%zu %zu %zu %zu %zu\n", 1, 2, 4, 4);
    fun_80482e0(ecx1, "%zu %zu %zu\n", 4, 8, 12, v2);
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
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x80488f0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
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
        eax3 = __libc_start_main(0x804a064, 0);
    }
    return eax3;
}

void fun_804842d() {
}

void use(void* ecx, int32_t a2) {
    int32_t v3;
    int32_t v4;

    fun_80482e0(ecx, "%f", __return_address(), a2, v3, v4);
    return;
}

int32_t fun_80487e3(void* ecx) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fld st0");
    __asm__("fadd st0, st1");
    __asm__("fxch st0, st1");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp]");
    fun_80482e0(ecx, "%f", v2, v3, v4, v5);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul dword [0x8048934]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v6, v7, v8, v9);
    __asm__("fld qword [esp+0x18]");
    __asm__("fld qword [0x8048940]");
    __asm__("fmulp st1, st0");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v10, v11, v12, v13);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul dword [0x8048938]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v14, v15, v16, v17);
    __asm__("fld qword [esp+0x18]");
    __asm__("fmul qword [0x8048948]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v18, v19, v20, v21);
    return 0x7d;
}

void fun_80488ed() {
    return;
}

int32_t g804a008 = 0;

void fun_80482e6() {
    goto g804a008;
}

void fun_80483bc() {
}

signed char __bss_start = 0;

int32_t fun_80483f5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __bss_start == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __bss_start = 1;
    }
    return eax2;
}

void fun_8048469(void* ecx) {
    int32_t v2;
    int32_t v3;
    int32_t v4;

    fun_80482e0(ecx, "%d", __return_address(), v2, v3, v4);
    return;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1767;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80488b1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80482f6() {
    goto 0x80482d0;
}

int32_t fun_8048485(void* ecx) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;

    __asm__("fild word [esp+0x12]");
    __asm__("fadd dword [0x8048930]");
    __asm__("fild word [0x804a060]");
    __asm__("faddp st1, st0");
    __asm__("fild dword [0x804a05c]");
    __asm__("faddp st1, st0");
    __asm__("fild dword [0x804a058]");
    __asm__("faddp st1, st0");
    __asm__("fild qword [0x804a050]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp]");
    fun_80482e0(ecx, "%f", v2, v3, v4, v5);
    return 0x78;
}

signed char global_char = 1;

int16_t global_short = 2;

int32_t global_int = 3;

int32_t global_long = 4;

int32_t write_ints() {
    uint32_t eax1;
    uint16_t v2;
    int32_t v3;

    __asm__("fnstcw word [esp+0xe]");
    __asm__("fld qword [esp+0x18]");
    __asm__("fldcw word [esp+0xc]");
    __asm__("fist word [esp+0xa]");
    __asm__("fldcw word [esp+0xe]");
    eax1 = v2;
    __asm__("fldcw word [esp+0xc]");
    __asm__("fist dword [esp+0x4]");
    __asm__("fldcw word [esp+0xe]");
    global_char = *reinterpret_cast<signed char*>(&eax1);
    global_short = *reinterpret_cast<int16_t*>(&eax1);
    __asm__("fldcw word [esp+0xc]");
    __asm__("fistp qword [0x804a050]");
    __asm__("fldcw word [esp+0xe]");
    global_int = v3;
    global_long = v3;
    return 0x79;
}

int32_t fun_8048544(void* ecx) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;

    __asm__("fldz ");
    __asm__("fadd dword [0x804a048]");
    __asm__("fadd qword [0x804a040]");
    __asm__("fld tword [0x804a030]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fld qword [esp+0x14]");
    __asm__("fstp qword [esp]");
    fun_80482e0(ecx, "%f", v2, v3, v4, v5);
    return 0x7a;
}

void fun_8048587() {
    __asm__("fld qword [esp+0x10]");
    __asm__("fst dword [0x804a048]");
    __asm__("fst qword [0x804a040]");
    __asm__("fstp tword [0x804a030]");
    return;
}

void fun_80485ad() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp dword [0x804a048]");
    return;
}

void fun_80485c3() {
    __asm__("fld tword [0x804a030]");
    __asm__("fstp dword [0x804a048]");
    return;
}

void fun_80485e3() {
    __asm__("fld dword [0x804a048]");
    __asm__("fstp qword [0x804a040]");
    return;
}

void fun_80485fd() {
    __asm__("fld tword [0x804a030]");
    __asm__("fstp qword [0x804a040]");
    return;
}

void fun_8048613() {
    __asm__("fld dword [0x804a048]");
    __asm__("fstp tword [0x804a030]");
    return;
}

void fun_804862d() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp tword [0x804a030]");
    return;
}

int32_t fun_804863d(void* ecx) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fld qword [esp+0x34]");
    __asm__("fxch st0, st1");
    __asm__("fst qword [esp+0xc]");
    __asm__("fxch st0, st1");
    __asm__("fst qword [esp+0x14]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [esp]");
    fun_80482e0(ecx, "%f", v2, v3, v4, v5);
    __asm__("fld qword [esp+0x10]");
    __asm__("fsub qword [esp+0x18]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v6, v7, v8, v9);
    __asm__("fld qword [esp+0x18]");
    __asm__("fsub qword [esp+0x10]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v10, v11, v12, v13);
    __asm__("fld qword [esp+0x10]");
    __asm__("fmul qword [esp+0x18]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v14, v15, v16, v17);
    __asm__("fld qword [esp+0x10]");
    __asm__("fdiv qword [esp+0x18]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v18, v19, v20, v21);
    __asm__("fld qword [esp+0x18]");
    __asm__("fdiv qword [esp+0x10]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v22, v23, v24, v25);
    __asm__("fld qword [esp+0x10]");
    __asm__("fchs ");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0(ecx, "%f", v26, v27, v28, v29);
    return 0x7b;
}

int32_t fun_80486fd(void* ecx) {
    int32_t eax2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t eax6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;

    eax2 = 0;
    __asm__("fld qword [esp+0x28]");
    __asm__("fld qword [esp+0x30]");
    __asm__("fucomi st0, st1");
    __asm__("fstp qword [esp+0x10]");
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (0) {
        eax2 = 0;
    }
    __asm__("fstp qword [esp+0x8]");
    fun_80482e0(ecx, "%d", eax2, v3, v4, v5);
    eax6 = 0;
    __asm__("fld qword [esp+0x8]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    *reinterpret_cast<unsigned char*>(&eax6) = __intrinsic();
    if (0) {
        eax6 = 1;
    }
    fun_80482e0(ecx, "%d", eax6, v7, v8, v9);
    __asm__("fld qword [esp+0x8]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    fun_80482e0("%d", "%d", 0, v10, v11, v12);
    __asm__("fld qword [esp+0x8]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    fun_80482e0("%d", "%d", 1, v13, v14, v15);
    __asm__("fld qword [esp+0x8]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fucomi st0, st1");
    __asm__("fxch st0, st1");
    __asm__("fstp qword [esp+0x10]");
    __asm__("fstp qword [esp+0x8]");
    fun_80482e0("%d", "%d", 0, v16, v17, v18);
    __asm__("fld qword [esp+0x8]");
    __asm__("fld qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    fun_80482e0("%d", "%d", 1, v19, v20, v21);
    return 0x7c;
}
